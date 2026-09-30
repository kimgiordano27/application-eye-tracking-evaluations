/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 03dfef48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  long unaff_x21;
  
  if ((*(ushort *)(*(long *)(param_1 + 0x38) + 0x135) & 1) == 0) {
    FUN_02b76218();
  }
  if (unaff_x21 != 0) {
    FUN_05df2fe0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


