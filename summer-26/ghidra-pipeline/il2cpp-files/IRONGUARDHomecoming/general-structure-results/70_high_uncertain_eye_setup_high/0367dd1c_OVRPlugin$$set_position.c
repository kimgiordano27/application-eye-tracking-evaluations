/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 0367dd1c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_position(void)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  
  lVar1 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_035ac8e8(lVar1,0);
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  thunk_FUN_01f51358();
  return lVar1;
}


