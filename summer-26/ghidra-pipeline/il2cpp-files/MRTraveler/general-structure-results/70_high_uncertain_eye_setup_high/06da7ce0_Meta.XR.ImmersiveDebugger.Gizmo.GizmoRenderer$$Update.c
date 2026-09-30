/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRenderer$$Update
ENTRY_POINT: 06da7ce0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRenderer__Update(void)

{
  int in_w3;
  long lVar1;
  long unaff_x19;
  uint unaff_w21;
  ulong unaff_x22;
  uint unaff_w26;
  long in_stack_00000008;
  
  if (in_w3 == 7) {
    if ((unaff_w21 >> 1 & 1) != 0) {
      FUN_06da8bb4();
      return;
    }
    FUN_06da8cc0();
    return;
  }
  if ((unaff_x22 & 1) == 0) {
    FUN_06da8f08();
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0xf8);
  if (lVar1 != 0) {
    if (unaff_w26 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = *(long *)(lVar1 + in_stack_00000008 * 8 + 0x20);
      if (lVar1 == 0) goto LAB_06da8024;
      if (*(int *)(lVar1 + 0x18) != 0) {
        FUN_06da8d60();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
LAB_06da8024:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


