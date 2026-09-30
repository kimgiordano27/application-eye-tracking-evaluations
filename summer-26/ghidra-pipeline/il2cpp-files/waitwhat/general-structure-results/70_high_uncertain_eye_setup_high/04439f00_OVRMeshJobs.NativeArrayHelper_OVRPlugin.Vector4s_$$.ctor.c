/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 04439f00
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>___ctor(void)

{
  long unaff_x19;
  int unaff_w21;
  int unaff_w22;
  
  if (unaff_w21 < 0) {
    LipSyncMicInput__CanStartMic(0x10,4,0);
  }
  if (*(int *)(unaff_x19 + 0x18) - unaff_w22 < unaff_w21) {
    FUN_0595040c(0x17,0);
  }
  if (1 < unaff_w21) {
    FUN_039b13ec(*(undefined8 *)(unaff_x19 + 0x10),unaff_w22,unaff_w21);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


