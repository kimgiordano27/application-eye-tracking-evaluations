/*
FUNCTION_NAME: FUN_05664e40
ENTRY_POINT: 05664e40
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05664e40(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_06b7f790 & 1) == 0) {
    FUN_02d6084c(OVRTask<OVRPlugin_Result>_TypeInfo);
    FUN_02d6084c(OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    FUN_02d6084c(System_Func<StyleSelector,_string>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo);
    FUN_02d6084c(OVRTask<OVRSceneManager_Metrics>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_List<InteractionTrigger>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06769450);
    DAT_06b7f790 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  iVar2 = FUN_05662fe8(param_1,1);
  if (iVar2 == 0x18) {
    iVar2 = 0;
  }
  else {
    if (iVar2 != 0x26) goto LAB_056651a8;
    iVar2 = 1;
    iVar3 = FUN_05662fe8(param_1,1);
    if (iVar3 != 0x18) goto LAB_056651a8;
  }
  puVar1 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
  uVar4 = FUN_056638f8(param_1,0);
  lVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_0558ffc8(lVar5,uVar4,iVar2,0);
  uVar6 = FUN_05662c00(param_1);
  if (lVar5 == 0) goto LAB_056651c4;
  *(undefined8 *)(lVar5 + 0x48) = uVar6;
  thunk_FUN_02dd37b4();
  if (*(long *)(param_1 + 0xb0) == 0) goto LAB_056651c4;
  lVar7 = 0xa8;
  if (*(int *)(*(long *)(param_1 + 0xb0) + 0x10) != 0) {
    lVar7 = 0xb0;
  }
  *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(param_1 + lVar7);
  thunk_FUN_02dd37b4();
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_056651c4;
  if (iVar2 == 0) {
    lVar7 = FUN_05590560(*(long *)(param_1 + 0x28),0);
    if (lVar7 == 0) goto LAB_056651c4;
    uVar8 = FUN_048958e4(lVar7,uVar4,
                         *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_056651c4;
      lVar7 = FUN_05590560(*(long *)(param_1 + 0x28),0);
      goto joined_r0x05664ff8;
    }
  }
  else {
    lVar7 = FUN_055905e4();
    if (lVar7 == 0) goto LAB_056651c4;
    uVar8 = FUN_048958e4(lVar7,uVar4,
                         *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_056651c4;
      lVar7 = FUN_055905e4(*(long *)(param_1 + 0x28),0);
joined_r0x05664ff8:
      if (lVar7 == 0) goto LAB_056651c4;
      FUN_048956f0(lVar7,uVar4,lVar5,*(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo);
    }
  }
  *(bool *)(lVar5 + 0x43) = *(int *)(param_1 + 0x80) != 0;
  *(undefined1 *)(lVar5 + 0x42) = 1;
  iVar3 = FUN_05662fe8(param_1,1);
  if (iVar3 - 0x21U < 2) {
    FUN_05663a6c(param_1,iVar3,0xd,&local_38,&local_28);
    *(undefined1 *)(lVar5 + 0x41) = 1;
    FUN_05590284(lVar5,local_28,0);
    *(undefined8 *)(lVar5 + 0x20) = local_38;
    thunk_FUN_02dd37b4();
    iVar3 = FUN_05662fe8(param_1,0);
    if (iVar3 == 0x25) {
      if (iVar2 != 0) {
        FUN_05667274(param_1,*(int *)(param_1 + 0x5c) + -5,*(undefined8 *)PTR_DAT_06769450,0);
      }
      if (*(char *)(param_1 + 0x6c) == '\0') {
        FUN_0566703c(param_1,*(int *)(param_1 + 0x5c) + -5,
                     *(undefined8 *)System_Collections_Generic_List<InteractionTrigger>_TypeInfo,
                     *(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo);
      }
      iVar2 = FUN_05662fe8(param_1,1);
      if (iVar2 != 0x18) goto LAB_056651a8;
      lVar7 = FUN_056638f8(param_1,0);
      plVar9 = (long *)(lVar5 + 0x30);
      *plVar9 = lVar7;
      thunk_FUN_02dd37b4(plVar9,lVar7);
      if ((*plVar9 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
LAB_056651c4:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar4 = *(undefined8 *)(*plVar9 + 0x10);
      lVar7 = FUN_05590690(*(long *)(param_1 + 0x28),0);
      if (lVar7 == 0) goto LAB_056651c4;
      uVar8 = FUN_048958e4(lVar7,uVar4,*(undefined8 *)System_Func<StyleSelector,_string>_TypeInfo);
      if ((uVar8 & 1) == 0) {
        FUN_05666750(param_1,uVar4);
      }
    }
  }
  else {
    if (iVar3 != 0x23) goto LAB_056651a8;
    uVar4 = FUN_0566694c(param_1);
    FUN_055902f8(lVar5,uVar4,0);
    *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_1 + 0x9c);
  }
  iVar2 = FUN_05662fe8(param_1,0);
  if (iVar2 == 0x1d) {
    *(undefined1 *)(lVar5 + 0x42) = 0;
    return;
  }
LAB_056651a8:
  FUN_05663898(param_1);
  return;
}


