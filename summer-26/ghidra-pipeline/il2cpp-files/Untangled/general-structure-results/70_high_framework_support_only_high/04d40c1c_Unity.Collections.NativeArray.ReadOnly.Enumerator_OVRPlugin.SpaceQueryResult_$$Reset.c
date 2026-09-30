/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 04d40c1c
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset
          (long param_1,ulong param_2)

{
  bool in_CY;
  
  if (!in_CY) {
    return *(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


