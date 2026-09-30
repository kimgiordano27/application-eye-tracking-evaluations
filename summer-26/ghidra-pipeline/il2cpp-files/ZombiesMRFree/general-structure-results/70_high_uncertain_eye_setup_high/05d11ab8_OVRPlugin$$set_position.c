/*
FUNCTION_NAME: OVRPlugin$$set_position
ENTRY_POINT: 05d11ab8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_position(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_04430018(param_2,0,*param_1);
  *unaff_x21 = uVar1;
  thunk_FUN_03048534();
  *unaff_x20 = uVar1;
  thunk_FUN_03048534();
  return 1;
}


