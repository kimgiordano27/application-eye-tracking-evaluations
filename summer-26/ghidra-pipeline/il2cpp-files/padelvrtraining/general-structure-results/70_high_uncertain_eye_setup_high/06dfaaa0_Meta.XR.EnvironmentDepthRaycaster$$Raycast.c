/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Raycast
ENTRY_POINT: 06dfaaa0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__Raycast(long param_1)

{
  long in_x9;
  
  if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if ((uint)param_1 < *(uint *)(in_x9 + 0x18)) {
    return *(undefined8 *)(in_x9 + param_1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


