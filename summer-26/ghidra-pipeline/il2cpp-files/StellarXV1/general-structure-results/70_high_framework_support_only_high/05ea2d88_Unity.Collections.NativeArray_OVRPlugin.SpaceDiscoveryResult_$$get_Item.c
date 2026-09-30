/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$get_Item
ENTRY_POINT: 05ea2d88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__get_Item
               (long param_1,short param_2)

{
  if ((DAT_0988ba1e & 1) == 0) {
    FUN_04077588(PTR_DAT_092ba5c0);
    DAT_0988ba1e = 1;
  }
                    /* catch() { ... } // from try @ 05ea2f08 with catch @ 05ea2dbc
                       catch() { ... } // from try @ 05ea2f44 with catch @ 05ea2dbc
                       catch() { ... } // from try @ 05ea2f80 with catch @ 05ea2dbc
                       catch() { ... } // from try @ 05ea2fac with catch @ 05ea2dbc
                       catch() { ... } // from try @ 05ea3020 with catch @ 05ea2dbc */
  if (*(short *)(param_1 + 0x38) == param_2) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_092ba5c0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_07700efc(0);
  return;
}


