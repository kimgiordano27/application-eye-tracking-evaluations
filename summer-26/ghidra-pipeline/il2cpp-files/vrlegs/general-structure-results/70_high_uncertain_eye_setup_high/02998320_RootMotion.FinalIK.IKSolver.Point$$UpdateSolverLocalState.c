/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolver.Point$$UpdateSolverLocalState
ENTRY_POINT: 02998320
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void RootMotion_FinalIK_IKSolver_Point__UpdateSolverLocalState(void)

{
  int in_w8;
  long unaff_x20;
  
  if (in_w8 != 0) {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (unaff_x20 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c();
}


