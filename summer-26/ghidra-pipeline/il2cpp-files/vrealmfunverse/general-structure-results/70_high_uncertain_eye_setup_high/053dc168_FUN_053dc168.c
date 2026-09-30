/*
FUNCTION_NAME: FUN_053dc168
ENTRY_POINT: 053dc168
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_7
*/


void FUN_053dc168(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *local_28;
  
  if ((DAT_066d0a0b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_0631e990);
    FUN_02b3c81c(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02b3c81c(OVRPlugin_SpaceQueryResult_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063224a0);
                    /* try { // try from 053dc1cc to 054dc1d3 has its CatchHandler @ 053dc634 */
    FUN_02b3c81c(OVRPlugin_SystemHeadset_TypeInfo);
    DAT_066d0a0b = 1;
  }
  local_28 = (long *)0x0;
  if (param_1 == 0) goto LAB_053dc364;
  lVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = FUN_04c0e89c(param_1,0);
    if (lVar3 == 0) goto LAB_053dc364;
    if ((*(int *)(lVar3 + 0x10) == 0) ||
       (iVar2 = FUN_04c0ec4c(lVar3,*(undefined8 *)OVRPlugin_SystemHeadset_TypeInfo,4,0), iVar2 != -1
       )) {
      plVar4 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
      if (plVar4 == (long *)0x0) goto LAB_053dc364;
      lVar3 = thunk_FUN_02b79548(param_1,*(undefined8 *)(*plVar4 + 0x40));
      if (lVar3 == 0) goto LAB_053dc384;
      if ((int)plVar4[3] == 0) goto LAB_053dc398;
      plVar4[4] = param_1;
      thunk_FUN_02bb0e9c(plVar4 + 4,param_1);
      uVar5 = *(undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo;
      goto LAB_053dc3bc;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_0631e990 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar6 = FUN_055cd394(lVar3,0,&local_28,0);
  puVar1 = PTR_DAT_063224a0;
  if ((uVar6 & 1) == 0) {
    plVar4 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
    if (plVar4 == (long *)0x0) goto LAB_053dc364;
    lVar7 = thunk_FUN_02b79548(lVar3,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar7 == 0) {
LAB_053dc384:
      uVar5 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar5,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_053dc398:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    plVar4[4] = lVar3;
    thunk_FUN_02bb0e9c(plVar4 + 4,lVar3);
    puVar8 = (undefined8 *)OVRPlugin_SpaceQueryResult_TypeInfo;
  }
  else {
    if (local_28 == (long *)0x0) {
LAB_053dc364:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar5 = (**(code **)(*local_28 + 0x168))(local_28,*(undefined8 *)(*local_28 + 0x170));
    uVar6 = thunk_FUN_04c08854(uVar5,*(undefined8 *)puVar1,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar4 = (long *)FUN_02b3c908(*(undefined8 *)PTR_DAT_06313048,1);
    if (plVar4 == (long *)0x0) goto LAB_053dc364;
    if ((*(long *)puVar1 != 0) &&
       (lVar3 = thunk_FUN_02b79548(*(long *)puVar1,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0))
    goto LAB_053dc384;
    if ((int)plVar4[3] == 0) goto LAB_053dc398;
    plVar4[4] = *(long *)puVar1;
    thunk_FUN_02bb0e9c();
    puVar8 = (undefined8 *)OVRPlugin_SkeletonType_TypeInfo;
  }
  uVar5 = *puVar8;
LAB_053dc3bc:
  uVar5 = FUN_0540ce80(uVar5,plVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_053d7134(uVar5,param_2);
}


