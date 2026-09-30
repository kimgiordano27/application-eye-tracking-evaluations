/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$SetState
ENTRY_POINT: 052e34e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__SetState(void)

{
  ulong uVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_02f07e70();
  FUN_02f07e70(PTR_DAT_06d3d9f0);
  FUN_02f07e70(PTR_DAT_06d3da08);
  *(undefined1 *)(unaff_x21 + 0x150) = 1;
  if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_052e35b4;
  uVar1 = FUN_05241d74();
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x20 + 0x50) == 0) goto LAB_052e35b4;
    FUN_05241f40();
    if (*(long *)(unaff_x20 + 0x58) == 0) goto LAB_052e35b4;
    FUN_03fd212c();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar1 = FUN_04c74820();
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      FUN_04c75b28();
      return;
    }
  }
LAB_052e35b4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


