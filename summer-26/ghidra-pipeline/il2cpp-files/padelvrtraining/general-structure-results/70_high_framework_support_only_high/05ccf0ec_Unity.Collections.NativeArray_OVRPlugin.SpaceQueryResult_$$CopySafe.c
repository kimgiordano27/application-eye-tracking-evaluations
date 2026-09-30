/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 05ccf0ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(long *param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_076c7030();
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  if (param_1 != (long *)0x0) {
    if (*(byte *)(lVar1 + 0x130) <= *(byte *)(*param_1 + 0x130)) {
      if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1)
      {
        return param_1;
      }
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}


