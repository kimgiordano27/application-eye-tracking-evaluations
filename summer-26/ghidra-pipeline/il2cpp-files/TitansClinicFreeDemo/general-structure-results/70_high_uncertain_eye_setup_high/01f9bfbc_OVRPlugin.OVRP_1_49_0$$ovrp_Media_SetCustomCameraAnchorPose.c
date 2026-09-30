/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_SetCustomCameraAnchorPose
ENTRY_POINT: 01f9bfbc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_SetCustomCameraAnchorPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long *unaff_x21;
  
                    /* try { // try from 01f9bfbc to 0209bfc3 has its CatchHandler @ 01f9c0ec */
  uVar1 = FUN_011f6b80();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01220628(*unaff_x21);
  }
  uVar2 = FUN_01f40580(0);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01220628(*unaff_x20);
  }
                    /* try { // try from 01f9c000 to 0209c003 has its CatchHandler @ 01f9c100 */
  FUN_01e889ac(uVar1,uVar2,0);
  return;
}


