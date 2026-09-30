/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 07acd7e0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  long *unaff_x21;
  
  thunk_FUN_044a54b4();
  FUN_07acd360(&stack0x00000080);
  if (unaff_x21 != (long *)0x0) {
    (**(code **)(*unaff_x21 + 0x168))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


