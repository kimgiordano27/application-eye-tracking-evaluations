/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0538ffac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Dispose
               (ushort *param_1,long param_2)

{
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(param_2 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
    return;
  }
  return;
}


