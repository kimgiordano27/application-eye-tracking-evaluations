/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetAppHasVrFocus
ENTRY_POINT: 0316b918
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetAppHasVrFocus(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_0391b78c(param_1,1,0);
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_038fe3fc(*(long *)(unaff_x19 + 0x50),1,0);
    if (*(long *)(unaff_x19 + 0x58) != 0) {
      FUN_038fe3fc(*(long *)(unaff_x19 + 0x58),1,0);
      if (*(long *)(unaff_x19 + 0x60) != 0) {
        FUN_0391b78c(*(long *)(unaff_x19 + 0x60),1,0);
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          FUN_0391b78c(*(long *)(unaff_x19 + 0x68),unaff_x20 != 0x300000000,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


