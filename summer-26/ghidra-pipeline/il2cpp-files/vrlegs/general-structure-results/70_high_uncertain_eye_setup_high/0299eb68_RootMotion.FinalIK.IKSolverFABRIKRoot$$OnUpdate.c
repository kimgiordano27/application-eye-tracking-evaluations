/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFABRIKRoot$$OnUpdate
ENTRY_POINT: 0299eb68
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


void RootMotion_FinalIK_IKSolverFABRIKRoot__OnUpdate(long *param_1)

{
  long lVar1;
  undefined8 in_stack_00000008;
  
  lVar1 = *param_1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar1);
}


