/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$RenderLines
ENTRY_POINT: 052eaaf8
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__RenderLines(void)

{
  int in_w8;
  int in_w9;
  long unaff_x19;
  
  *(undefined4 *)(unaff_x19 + 0x50) = 0;
  *(undefined2 *)(unaff_x19 + 0x55) = 0;
  *(undefined4 *)(unaff_x19 + 0x58) = 0;
  *(undefined2 *)(unaff_x19 + 0x45) = 0;
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
  if (in_w9 == 0) {
    if (in_w8 != 0) {
      *(undefined1 *)(unaff_x19 + 0x4c) = 0;
      *(undefined1 *)(unaff_x19 + 0x4e) = 1;
    }
  }
  else if (in_w8 == 0) {
    *(undefined2 *)(unaff_x19 + 0x4c) = 0x101;
  }
  if (*(char *)(unaff_x19 + 0x41) == '\0') {
    if (*(char *)(unaff_x19 + 0x54) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x54) = 0;
      *(undefined1 *)(unaff_x19 + 0x56) = 1;
    }
  }
  else if (*(char *)(unaff_x19 + 0x54) == '\0') {
    *(undefined2 *)(unaff_x19 + 0x54) = 0x101;
  }
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    if (*(char *)(unaff_x19 + 0x44) != '\0') {
      *(undefined1 *)(unaff_x19 + 0x44) = 0;
      *(undefined1 *)(unaff_x19 + 0x46) = 1;
    }
  }
  else if (*(char *)(unaff_x19 + 0x44) == '\0') {
    *(undefined2 *)(unaff_x19 + 0x44) = 0x101;
  }
  return;
}


