/*
FUNCTION_NAME: Oculus.Platform.AssetFile$$StatusByName
ENTRY_POINT: 04ecafbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


long Oculus_Platform_AssetFile__StatusByName(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x23;
  
  FUN_02b3c81c();
  FUN_02b3c81c(OVRPlugin_SpaceQueryResult_var);
  FUN_02b3c81c(OVRPlugin_Vector3f_var);
  FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationState_var);
  *(undefined1 *)(unaff_x20 + 0x521) = 1;
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationState_var;
  lVar6 = *unaff_x23;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar6);
    lVar6 = *unaff_x23;
  }
  lVar3 = *(long *)puVar2;
  lVar6 = **(long **)(lVar6 + 0xb8);
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar2;
  }
  puVar7 = *(undefined8 **)(lVar3 + 0xb8);
  lVar9 = puVar7[1];
  if (lVar9 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar7;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_SpaceQueryResult_var);
    FUN_03bfe598(lVar9,uVar10,*(undefined8 *)OVRPlugin_Vector3f_var,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar9;
    thunk_FUN_02bb0e9c(plVar4,lVar9);
  }
  puVar2 = PTR_DAT_06312520;
  if (lVar6 == 0) goto LAB_04ecb1b8;
  lVar6 = FUN_037a6b94(lVar6,lVar9,*(undefined8 *)OVRPassthroughLayer_Settings_var);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  uVar5 = FUN_05c8e378(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_04ecb718();
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar3);
      lVar3 = *unaff_x23;
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    if (lVar3 == 0) goto LAB_04ecb1b8;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_06315ce0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_04ecb1b8;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar4 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
      *plVar4 = lVar6;
      thunk_FUN_02bb0e9c(plVar4,lVar6);
    }
    else {
      FUN_037a6538(lVar3,lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((lVar6 != 0) && (lVar3 = FUN_05c89410(lVar6,0), lVar3 != 0)) {
    FUN_05c8cb28(lVar3,1,0);
    FUN_05d1c52c(lVar6,*(undefined1 *)(unaff_x19 + 0x28),0);
    return lVar6;
  }
LAB_04ecb1b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


