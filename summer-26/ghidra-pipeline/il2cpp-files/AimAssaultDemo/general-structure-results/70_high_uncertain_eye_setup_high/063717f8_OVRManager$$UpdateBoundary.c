/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 063717f8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateBoundary(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  
  FUN_06ae967c();
  (**(code **)(*unaff_x19 + 0x618))();
  if (unaff_x19[8] != 0) {
    uVar1 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19bcc(uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x06371868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


