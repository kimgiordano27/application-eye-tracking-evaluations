/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 0313742c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000000 = *unaff_x20;
  uStack0000000000000014 = unaff_x20[2];
  uStack0000000000000008 = param_1;
  uStack0000000000000010 = param_2;
  uStack000000000000001c = param_3;
  FUN_0313748c();
  return;
}


