/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 05654800
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__SetOpenVRLocalPose(undefined8 param_1)

{
  code *pcVar1;
  undefined4 unaff_w20;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x488);
  if (pcVar1 == (code *)0x0) {
    pcVar1 = (code *)thunk_FUN_02dd33e4();
    *(code **)(unaff_x22 + 0x488) = pcVar1;
  }
  (*pcVar1)(param_1,unaff_w20);
  return;
}


