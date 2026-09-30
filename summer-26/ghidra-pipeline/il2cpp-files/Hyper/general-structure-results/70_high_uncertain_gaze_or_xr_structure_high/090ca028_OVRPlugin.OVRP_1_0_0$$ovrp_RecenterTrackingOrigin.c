/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 090ca028
PROGRAM: Hyper-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(void)

{
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  
  *(undefined4 *)(unaff_x19 + 0x110) = *(undefined4 *)(unaff_x19 + 300);
  *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0x124);
  if ((unaff_w21 >> 1 & 1) != 0) {
    FUN_090c9d0c(unaff_x19 + 0x90,unaff_x19 + 0x98,*(undefined1 *)(unaff_x19 + 0x105),unaff_w20 & 1)
    ;
    *(undefined8 *)(unaff_x19 + 0x11c) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined8 *)(unaff_x19 + 0x114) = *(undefined8 *)(unaff_x19 + 0x130);
  }
  return;
}


