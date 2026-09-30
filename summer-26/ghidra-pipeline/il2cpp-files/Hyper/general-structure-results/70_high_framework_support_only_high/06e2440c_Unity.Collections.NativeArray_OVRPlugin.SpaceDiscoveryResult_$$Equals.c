/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 06e2440c
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Equals(long param_1)

{
  long unaff_x19;
  
                    /* catch() { ... } // from try @ 06e2449c with catch @ 06e2440c
                       catch() { ... } // from try @ 06e244dc with catch @ 06e2440c
                       catch() { ... } // from try @ 06e24514 with catch @ 06e2440c
                       catch() { ... } // from try @ 06e24540 with catch @ 06e2440c
                       catch() { ... } // from try @ 06e245b4 with catch @ 06e2440c */
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04980b34();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(param_1 + 0xb8);
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10));
  return;
}


