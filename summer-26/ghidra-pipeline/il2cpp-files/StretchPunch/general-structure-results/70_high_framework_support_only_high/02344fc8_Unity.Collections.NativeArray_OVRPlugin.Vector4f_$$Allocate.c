/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Allocate
ENTRY_POINT: 02344fc8
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


long Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Allocate(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_044a32d8 & 1) == 0) {
    FUN_01d7d918(StringLiteral_397);
    DAT_044a32d8 = 1;
  }
  plVar3 = (long *)(param_1 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_397);
    FUN_033d8040(uVar2,0);
    FUN_01d996c0(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


