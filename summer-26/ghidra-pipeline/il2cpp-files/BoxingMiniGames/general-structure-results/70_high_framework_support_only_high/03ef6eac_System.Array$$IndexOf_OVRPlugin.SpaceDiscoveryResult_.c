/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03ef6eac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOf<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  long unaff_x19;
  long unaff_x29;
  
  (**(code **)(param_1 + 0x138))();
  if (unaff_x19 == 0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c00();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


