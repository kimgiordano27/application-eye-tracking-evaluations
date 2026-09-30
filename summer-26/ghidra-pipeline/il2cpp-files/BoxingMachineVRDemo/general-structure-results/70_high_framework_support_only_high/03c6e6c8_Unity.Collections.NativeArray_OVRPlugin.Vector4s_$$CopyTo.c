/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$CopyTo
ENTRY_POINT: 03c6e6c8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__CopyTo
               (long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long in_x9;
  uint in_w10;
  undefined4 in_register_00004054;
  uint in_w11;
  
  if (in_w10 < in_w11) {
    *(uint *)(param_2 + 0x18) = in_w10 + 1;
    puVar1 = (undefined8 *)(param_1 + CONCAT44(in_register_00004054,in_w10) * 8 + 0x20);
    *puVar1 = param_3;
    thunk_FUN_02dd37b4(puVar1);
    return;
  }
  FUN_03aac494(param_2,param_3,*(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
  return;
}


