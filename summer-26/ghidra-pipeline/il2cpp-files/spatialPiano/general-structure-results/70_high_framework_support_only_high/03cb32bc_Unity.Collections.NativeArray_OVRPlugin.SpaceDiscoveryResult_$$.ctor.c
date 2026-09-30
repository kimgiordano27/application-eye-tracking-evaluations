/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 03cb32bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(long param_1)

{
  long unaff_x19;
  
  if (*(uint *)(unaff_x19 + 0x18) < *(uint *)(param_1 + 0x18)) {
    *(undefined8 *)(param_1 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 8 + 0x20) = 0;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


