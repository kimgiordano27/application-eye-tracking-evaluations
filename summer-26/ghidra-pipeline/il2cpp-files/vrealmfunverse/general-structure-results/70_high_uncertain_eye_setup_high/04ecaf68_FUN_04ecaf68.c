/*
FUNCTION_NAME: FUN_04ecaf68
ENTRY_POINT: 04ecaf68
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


long FUN_04ecaf68(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar3 = OVROverlay_LayerTexture_var;
  if ((DAT_066c9521 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06315ce0);
    FUN_02b3c81c(OVRPassthroughLayer_Settings_var);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(OVROverlay_LayerTexture_var);
    FUN_02b3c81c(OVRPlugin_SpaceQueryResult_var);
    FUN_02b3c81c(OVRPlugin_Vector3f_var);
    FUN_02b3c81c(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    DAT_066c9521 = 1;
  }
  puVar2 = OVRPlugin_VirtualKeyboardModelAnimationState_var;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar7);
    lVar7 = *(long *)puVar3;
  }
  lVar4 = *(long *)puVar2;
  lVar7 = **(long **)(lVar7 + 0xb8);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar10 = puVar8[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      puVar8 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar11 = *puVar8;
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)OVRPlugin_SpaceQueryResult_var);
    FUN_03bfe598(lVar10,uVar11,*(undefined8 *)OVRPlugin_Vector3f_var,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_02bb0e9c(plVar5,lVar10);
  }
  puVar2 = PTR_DAT_06312520;
  if (lVar7 == 0) goto LAB_04ecb1b8;
  lVar7 = FUN_037a6b94(lVar7,lVar10,*(undefined8 *)OVRPassthroughLayer_Settings_var);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)puVar2);
  }
  uVar6 = FUN_05c8e378(lVar7,0,0);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_04ecb718(param_1);
    lVar4 = *(long *)puVar3;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(lVar4);
      lVar4 = *(long *)puVar3;
    }
    lVar4 = **(long **)(lVar4 + 0xb8);
    if (lVar4 == 0) goto LAB_04ecb1b8;
    lVar10 = *(long *)(lVar4 + 0x10);
    lVar9 = *(long *)PTR_DAT_06315ce0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_04ecb1b8;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar7;
      thunk_FUN_02bb0e9c(plVar5,lVar7);
    }
    else {
      FUN_037a6538(lVar4,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  if ((lVar7 != 0) && (lVar4 = FUN_05c89410(lVar7,0), lVar4 != 0)) {
    FUN_05c8cb28(lVar4,1,0);
    FUN_05d1c52c(lVar7,*(undefined1 *)(param_1 + 0x28),0);
    return lVar7;
  }
LAB_04ecb1b8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


