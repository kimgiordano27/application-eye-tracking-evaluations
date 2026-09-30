/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$.ctor
ENTRY_POINT: 06377ebc
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer___ctor(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb270,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083eb928,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x9bc) = 1;
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_04389ca4(*(long *)(unaff_x19 + 0x28),DAT_083eb928);
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      FUN_042a99cc(*(long *)(unaff_x19 + 0x18),DAT_083eb270);
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_042a6eb4(*(long *)(unaff_x19 + 0x20),DAT_083eb1c8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


