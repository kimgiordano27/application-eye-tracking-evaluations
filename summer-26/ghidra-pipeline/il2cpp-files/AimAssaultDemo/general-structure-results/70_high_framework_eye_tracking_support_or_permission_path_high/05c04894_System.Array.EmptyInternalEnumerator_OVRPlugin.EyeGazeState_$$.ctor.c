/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.ctor
ENTRY_POINT: 05c04894
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


uint System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___ctor
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
               long param_5)

{
  uint uVar1;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000008 = param_4[1];
  uStack0000000000000000 = *param_4;
  uStack0000000000000018 = param_4[3];
  uStack0000000000000010 = param_4[2];
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = uStack0000000000000000;
  uStack0000000000000038 = uStack0000000000000008;
  uStack0000000000000040 = uStack0000000000000010;
  uStack0000000000000048 = uStack0000000000000018;
  uStack0000000000000050 = param_1;
  uVar1 = FUN_05c03778(param_2,param_3,&stack0x00000030,0,
                       *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x118));
  return uVar1 & 1;
}


