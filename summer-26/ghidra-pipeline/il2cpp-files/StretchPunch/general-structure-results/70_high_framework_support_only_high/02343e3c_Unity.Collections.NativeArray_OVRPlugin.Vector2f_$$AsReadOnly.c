/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$AsReadOnly
ENTRY_POINT: 02343e3c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__AsReadOnly
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  
  uStack0000000000000040 = param_2;
  uStack0000000000000050 = param_3;
  uStack0000000000000060 = param_4;
  uVar1 = FUN_021a24b8(param_5,&stack0x00000040,0,param_8,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(param_1 + 0xd0) + 0x20) + 0xc0) + 0x150));
  if (-1 < (int)uVar1) {
    FUN_023441c4();
  }
  return ~uVar1 >> 0x1f;
}


