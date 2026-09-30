/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetAppMonoscopic
ENTRY_POINT: 0316b89c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetAppMonoscopic(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_0391b78c(param_1,0,0);
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    FUN_0391b78c(*(long *)(unaff_x19 + 0x78),0,0);
    if (*(long *)(unaff_x19 + 0x50) != 0) {
      FUN_038fe3fc(*(long *)(unaff_x19 + 0x50),0,0);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        FUN_038fe3fc(*(long *)(unaff_x19 + 0x58),0,0);
        if (*(long *)(unaff_x19 + 0x60) != 0) {
          FUN_0391b78c(*(long *)(unaff_x19 + 0x60),0,0);
          if (*(long *)(unaff_x19 + 0x68) != 0) {
            FUN_0391b78c(*(long *)(unaff_x19 + 0x68),unaff_x20 != 0x300000000,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


