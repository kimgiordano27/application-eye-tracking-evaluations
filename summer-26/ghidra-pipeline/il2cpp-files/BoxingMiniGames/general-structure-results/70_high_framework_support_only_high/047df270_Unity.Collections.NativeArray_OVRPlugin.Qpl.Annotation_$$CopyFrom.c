/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 047df270
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom
               (long param_1,undefined8 param_2)

{
  int in_w8;
  long in_x9;
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = *(long *)(in_x9 + 0xc0);
  *(int *)(param_1 + 0x1c) = in_w8 + 1;
  lVar1 = FUN_047df4a0(param_1,param_2,*(undefined8 *)(lVar1 + 0x38));
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
    thunk_FUN_036b7ad0();
    return;
  }
  Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Equals();
  return;
}


