/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 044130c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  uint uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  long lVar2;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000020 = in_x3;
  uStack0000000000000028 = in_x4;
  thunk_FUN_02dd2d7c(**(undefined8 **)(*(long *)(in_x5 + 0x20) + 0xc0),&stack0x00000020);
  lVar2 = **(long **)(*(long *)(in_x5 + 0x20) + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_02dcfd18(lVar2);
  }
  uVar1 = thunk_FUN_05542350();
  return uVar1 & 1;
}


