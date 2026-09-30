/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$Start
ENTRY_POINT: 06df8cb4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__Start(long param_1,long param_2)

{
  uint in_w9;
  int unaff_w19;
  undefined8 uVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  if (in_w9 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (ulong)in_w9 * 0x10;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    thunk_FUN_03d1023c((undefined8 *)(param_2 + 0x10),0);
    return (uint)-unaff_w19 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


