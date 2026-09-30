/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 06367ba0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  
  FUN_03f09aec();
  *(uint *)(unaff_x20 + 0xb0) = *(uint *)(unaff_x20 + 0xb0) | *(uint *)(unaff_x19 + 0xec);
  puVar1 = PTR_DAT_07db55c8;
  lVar3 = *(long *)(unaff_x19 + 0x38);
  if (lVar3 != 0) {
    plVar4 = (long *)(unaff_x20 + 0x70);
    lVar2 = *plVar4;
    if (lVar2 == 0) {
      lVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d86c48);
      FUN_049ce6c0(lVar3,*(undefined8 *)PTR_DAT_07d86c50);
      *plVar4 = lVar3;
      thunk_FUN_037aeb94(plVar4,lVar3);
      lVar2 = *plVar4;
      lVar3 = *(long *)(unaff_x19 + 0x38);
    }
    FUN_03f08efc(lVar2,lVar3,*(undefined8 *)puVar1);
    return;
  }
  return;
}


