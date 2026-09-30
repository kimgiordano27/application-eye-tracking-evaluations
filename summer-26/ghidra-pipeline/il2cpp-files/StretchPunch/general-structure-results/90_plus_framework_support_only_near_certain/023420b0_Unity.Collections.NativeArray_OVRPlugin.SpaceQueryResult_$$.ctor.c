/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 023420b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_044a32d5 & 1) == 0) {
    FUN_01d7d918(StringLiteral_397);
    DAT_044a32d5 = 1;
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


