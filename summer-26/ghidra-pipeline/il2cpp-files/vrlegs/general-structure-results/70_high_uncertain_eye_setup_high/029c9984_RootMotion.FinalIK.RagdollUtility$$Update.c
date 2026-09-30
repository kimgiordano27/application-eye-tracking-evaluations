/*
FUNCTION_NAME: RootMotion.FinalIK.RagdollUtility$$Update
ENTRY_POINT: 029c9984
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RootMotion_FinalIK_RagdollUtility__Update(undefined8 param_1)

{
  long unaff_x20;
  undefined8 in_stack_00000010;
  
  if (in_stack_00000010._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


