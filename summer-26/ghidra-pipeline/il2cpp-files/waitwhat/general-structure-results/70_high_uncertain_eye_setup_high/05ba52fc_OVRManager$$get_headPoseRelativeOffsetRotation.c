/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 05ba52fc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__get_headPoseRelativeOffsetRotation
               (long *param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               float param_5,undefined1 param_6 [16],undefined1 param_7 [16],undefined8 param_8)

{
  undefined8 uVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_1 + 0xb8) + 0x18);
  FUN_069e7098(param_2._0_4_ + (float)uVar1 * param_5 * param_7._0_4_,
               param_2._4_4_ + (float)((ulong)uVar1 >> 0x20) * param_5 * param_7._4_4_,
               unaff_s8 + param_5 * *(float *)(*(long *)(*param_1 + 0xb8) + 0x20) * param_3,param_8,
               0);
  FUN_05ba4f84();
  return unaff_s9 < unaff_s10;
}


