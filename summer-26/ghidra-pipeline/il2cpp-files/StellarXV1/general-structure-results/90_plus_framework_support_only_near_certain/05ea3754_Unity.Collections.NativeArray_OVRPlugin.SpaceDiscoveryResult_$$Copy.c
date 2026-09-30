/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ea3754
PROGRAM: StellarXV1-libil2cpp.so
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
  int iVar1;
  int in_w8;
  undefined8 in_x10;
  long unaff_x19;
  long unaff_x20;
  
  *(int *)(unaff_x20 + 0x18) = in_w8;
  *(undefined8 *)(unaff_x20 + 0x10) = in_x10;
  if (unaff_x19 != 0) {
    iVar1 = in_w8 - *(int *)(unaff_x19 + 0x18);
    if (iVar1 != 0 && *(int *)(unaff_x19 + 0x18) <= in_w8) {
      *(int *)(unaff_x20 + 0x18) = iVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


