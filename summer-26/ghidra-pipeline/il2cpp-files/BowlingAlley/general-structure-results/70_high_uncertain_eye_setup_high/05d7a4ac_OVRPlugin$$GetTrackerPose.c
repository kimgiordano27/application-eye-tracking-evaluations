/*
FUNCTION_NAME: OVRPlugin$$GetTrackerPose
ENTRY_POINT: 05d7a4ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetTrackerPose(void)

{
  undefined4 unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x7ad) = 1;
                    /* try { // try from 05d7a4b4 to 05e7a4bb has its CatchHandler @ 05d7a850 */
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05d7a504(unaff_w20);
  FUN_05d7a404();
  return;
}


