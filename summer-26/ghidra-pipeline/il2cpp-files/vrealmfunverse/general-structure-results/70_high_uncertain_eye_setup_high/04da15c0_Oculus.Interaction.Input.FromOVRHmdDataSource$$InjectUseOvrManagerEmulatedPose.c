/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 04da15c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(void)

{
  uint uVar1;
  long *unaff_x19;
  
  if (unaff_x19 != (long *)0x0) {
    uVar1 = (**(code **)(*unaff_x19 + 0x5f8))();
    return (uVar1 ^ 1) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


