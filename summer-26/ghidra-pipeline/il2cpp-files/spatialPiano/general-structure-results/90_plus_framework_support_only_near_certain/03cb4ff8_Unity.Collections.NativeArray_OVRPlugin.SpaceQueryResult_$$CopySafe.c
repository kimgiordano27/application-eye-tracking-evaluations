/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 03cb4ff8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe(void)

{
  long lVar1;
  void *unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  ulong unaff_x25;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w22 < *(uint *)(lVar1 + 0x18)) {
    memcpy(unaff_x19,(void *)(lVar1 + (unaff_x25 & 0xffffffff) * 0x48 + 0x20),0x48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


