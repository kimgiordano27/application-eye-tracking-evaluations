/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 044ef724
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Dispose
               (long param_1,long param_2,undefined8 *param_3)

{
  uint in_w9;
  uint in_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  if (in_w9 < in_w10) {
    *(uint *)(param_2 + 0x18) = in_w9 + 1;
    param_1 = param_1 + (long)(int)in_w9 * 0x18;
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x30) = param_3[2];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
  }
  else {
    uStack0000000000000008 = param_3[1];
    uStack0000000000000000 = *param_3;
    uStack0000000000000010 = param_3[2];
    FUN_044ef788();
  }
  return;
}


