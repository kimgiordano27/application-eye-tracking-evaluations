/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Reset
ENTRY_POINT: 022231a8
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Reset(void)

{
  long unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  long lVar1;
  
  lVar1 = unaff_x21 + 0x30;
  do {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0();
    }
    if (-1 < *(int *)(lVar1 + -0x10)) {
      FUN_02224208();
    }
    unaff_x23 = unaff_x23 + 1;
    lVar1 = lVar1 + 0x18;
  } while (unaff_x22 != unaff_x23);
  return;
}


