/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 05d15878
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x118) = param_1;
  if ((uint)*(byte *)(*param_2 + 0x130) < (uint)in_x10) {
    param_2 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*param_2 + 200) + in_x10 * 8 + -8) != in_x9) {
    param_2 = (long *)0x0;
  }
  thunk_FUN_03048534(unaff_x19 + 0x118,param_2);
  uVar1 = FUN_03bbec8c();
  *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
  thunk_FUN_03048534(unaff_x19 + 0x130);
  return;
}


