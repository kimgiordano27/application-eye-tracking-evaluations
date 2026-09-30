/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 0570b094
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


byte OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke(byte param_1)

{
  byte bVar1;
  bool in_ZR;
  int in_w9;
  
  bVar1 = 0;
  if (in_w9 == 0) {
    bVar1 = param_1 & !in_ZR;
  }
  return bVar1;
}


