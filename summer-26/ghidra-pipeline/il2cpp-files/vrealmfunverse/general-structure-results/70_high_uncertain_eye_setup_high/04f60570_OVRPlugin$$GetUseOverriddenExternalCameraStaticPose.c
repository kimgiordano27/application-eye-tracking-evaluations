/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 04f60570
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetUseOverriddenExternalCameraStaticPose(void)

{
  code *in_x9;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x24;
  
  (*in_x9)();
  if ((unaff_x20 & 1) != 0) {
    return;
  }
  thunk_FUN_02b79644(*unaff_x24);
  FUN_049b749c();
                    /* WARNING: Could not recover jumptable at 0x04f605e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x4e8))();
  return;
}


