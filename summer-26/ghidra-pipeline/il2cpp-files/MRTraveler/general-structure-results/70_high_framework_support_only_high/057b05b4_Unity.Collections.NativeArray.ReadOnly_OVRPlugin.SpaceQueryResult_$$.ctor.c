/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 057b05b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x21;
  
  thunk_FUN_03cf4e64(*param_1);
  lVar2 = **(long **)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03cf1244(lVar2);
  }
  uVar1 = thunk_FUN_0715d3b4();
  return uVar1 & 1;
}


