/*
FUNCTION_NAME: Unity.Collections.NativeArray<float2>$$.ctor
ENTRY_POINT: 0233571c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Unity_Collections_NativeArray<float2>___ctor(long param_1,int param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0) {
    OVRManager_PassthroughCapabilities___ctor(0);
  }
  if (param_3 < 0) {
    FUN_033b3224(0x10,4,0);
  }
  if (*(int *)(param_1 + 0x18) - param_2 < param_3) {
    FUN_033b2d60(0x17,0);
  }
  if ((*(byte *)(**(long **)(*(long *)(param_4 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_01dde7f8();
  }
  lVar1 = thunk_FUN_01de27b8();
  FUN_023340ec(lVar1,param_3,*(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_033b4f38(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(lVar1 + 0x10),0,param_3,0);
    *(int *)(lVar1 + 0x18) = param_3;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


