/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 076fe7f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


