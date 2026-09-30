/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 050a17a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (ushort *param_1,long param_2)

{
  long unaff_x19;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_03ac4090();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
                    /* try { // try from 050a17c8 to 051a18e7 has its CatchHandler @ 050a17c8
                       catch() { ... } // from try @ 050a17c8 with catch @ 050a17c8
                       catch() { ... } // from try @ 050a1a08 with catch @ 050a17c8
                       catch() { ... } // from try @ 050a1aa0 with catch @ 050a17c8
                       catch() { ... } // from try @ 050a1af8 with catch @ 050a17c8 */
    FUN_03ac4090();
  }
  FUN_050a1c4c();
  return;
}


