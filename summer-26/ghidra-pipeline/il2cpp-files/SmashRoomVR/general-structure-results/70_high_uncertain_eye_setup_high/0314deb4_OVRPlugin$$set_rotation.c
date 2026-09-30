/*
FUNCTION_NAME: OVRPlugin$$set_rotation
ENTRY_POINT: 0314deb4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_rotation(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x21;
  
  FUN_03081994(param_1,0);
  *(undefined8 *)(unaff_x19 + 0x30) = param_1;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x30),param_1);
  uVar1 = thunk_FUN_01afaadc(*unaff_x21);
  FUN_03081994(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x38),uVar1);
  uVar1 = thunk_FUN_01afaadc(*unaff_x21);
  FUN_03081994(uVar1,0);
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  thunk_FUN_01b4f09c((undefined8 *)(unaff_x19 + 0x40),uVar1);
  FUN_039212e4();
  return;
}


