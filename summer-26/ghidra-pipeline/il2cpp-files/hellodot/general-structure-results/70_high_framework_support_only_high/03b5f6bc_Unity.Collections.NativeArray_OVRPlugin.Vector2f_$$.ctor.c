/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 03b5f6bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>___ctor
               (long param_1,long param_2,void *param_3,long param_4)

{
  uint in_w9;
  undefined4 in_register_0000404c;
  uint in_w10;
  undefined8 uVar1;
  
  if (in_w9 < in_w10) {
    *(uint *)(param_2 + 0x18) = in_w9 + 1;
    memmove((void *)(param_1 + CONCAT44(in_register_0000404c,in_w9) * 0x160 + 0x20),param_3,0x160);
  }
  else {
    memcpy(&stack0x00000000,param_3,0x160);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x70);
    memcpy(&stack0x00000160,&stack0x00000000,0x160);
    FUN_03b5f738(param_2,&stack0x00000160,uVar1);
  }
  return;
}


