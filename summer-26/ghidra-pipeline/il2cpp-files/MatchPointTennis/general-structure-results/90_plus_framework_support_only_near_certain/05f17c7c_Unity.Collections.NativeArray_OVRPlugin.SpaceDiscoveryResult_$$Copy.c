/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05f17c7c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  undefined8 uVar1;
  undefined8 *unaff_x23;
  
  if ((unaff_w22 < in_w8) && (unaff_w19 < in_w8)) {
    uVar1 = *unaff_x23;
    *unaff_x23 = *unaff_x21;
    thunk_FUN_044bb4b4();
    if (unaff_w19 < *(uint *)(unaff_x20 + 0x18)) {
      *unaff_x21 = uVar1;
      thunk_FUN_044bb4b4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


