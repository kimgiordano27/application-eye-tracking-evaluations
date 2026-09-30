/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 06367b50
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  uVar2 = thunk_FUN_037788cc();
  FUN_049ce6c0(uVar2,*(undefined8 *)PTR_DAT_07db34c0);
  *unaff_x23 = uVar2;
  thunk_FUN_037aeb94();
  puVar1 = PTR_DAT_07db55d0;
  uVar7 = *unaff_x23;
  uVar2 = *(undefined8 *)(unaff_x19 + 0xe0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar3 = FUN_06374108(0);
  FUN_03f09aec(uVar7,uVar2,uVar3,*(undefined8 *)puVar1);
  *(uint *)(unaff_x20 + 0xb0) = *(uint *)(unaff_x20 + 0xb0) | *(uint *)(unaff_x19 + 0xec);
  puVar1 = PTR_DAT_07db55c8;
  lVar5 = *(long *)(unaff_x19 + 0x38);
  if (lVar5 != 0) {
    plVar6 = (long *)(unaff_x20 + 0x70);
    lVar4 = *plVar6;
    if (lVar4 == 0) {
      lVar5 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
      FUN_049ce6c0(lVar5,*(undefined8 *)PTR_DAT_07d86c50);
      *plVar6 = lVar5;
      thunk_FUN_037aeb94(plVar6,lVar5);
      lVar4 = *plVar6;
      lVar5 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_03f08efc(lVar4,lVar5,*(undefined8 *)puVar1);
    return;
  }
  return;
}


