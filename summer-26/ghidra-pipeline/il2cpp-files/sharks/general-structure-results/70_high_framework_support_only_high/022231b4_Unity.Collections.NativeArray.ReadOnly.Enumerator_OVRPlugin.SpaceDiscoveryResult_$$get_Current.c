/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 022231b4
PROGRAM: sharks-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (void)

{
  undefined1 in_CY;
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (-1 < *(int *)(unaff_x24 + -0x10)) {
      FUN_02224208();
    }
    unaff_x23 = unaff_x23 + 1;
    unaff_x24 = unaff_x24 + 0x18;
    if (unaff_x22 == unaff_x23) break;
    in_CY = *(uint *)(unaff_x21 + 0x18) <= unaff_x23;
  }
  return;
}


