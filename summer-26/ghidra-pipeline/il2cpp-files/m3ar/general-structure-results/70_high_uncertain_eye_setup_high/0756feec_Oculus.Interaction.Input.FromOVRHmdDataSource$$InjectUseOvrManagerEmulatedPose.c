/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 0756feec
PROGRAM: m3ar-libil2cpp.so
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
  long unaff_x21;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x21 + 0x482) = 1;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  FUN_0756fcac();
  return;
}


