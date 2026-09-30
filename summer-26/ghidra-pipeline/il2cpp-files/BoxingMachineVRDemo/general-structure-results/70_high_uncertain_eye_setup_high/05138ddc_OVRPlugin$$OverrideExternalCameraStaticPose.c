/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05138ddc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d6084c(PTR_DAT_06781698);
  FUN_02d6084c(PTR_DAT_067816a0);
  *(undefined1 *)(unaff_x20 + 0xcbd) = 1;
  FUN_04388174();
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    FUN_04895878(*(long *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_067816a0);
    return;
  }
  return;
}


