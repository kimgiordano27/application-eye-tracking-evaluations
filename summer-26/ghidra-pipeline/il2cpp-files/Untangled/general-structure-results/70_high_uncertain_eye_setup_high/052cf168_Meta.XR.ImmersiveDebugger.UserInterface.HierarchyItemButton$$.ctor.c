/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.HierarchyItemButton$$.ctor
ENTRY_POINT: 052cf168
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


void Meta_XR_ImmersiveDebugger_UserInterface_HierarchyItemButton___ctor(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  FUN_052cdd1c();
  if (unaff_x19 != 0) {
    FUN_05293c9c();
    (**(code **)(*unaff_x20 + 0x4a8))();
    if (*(long *)(unaff_x19 + 0x158) != 0) {
      FUN_0475e7dc();
      if (unaff_x20[8] != 0) {
        FUN_0475e7dc();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


