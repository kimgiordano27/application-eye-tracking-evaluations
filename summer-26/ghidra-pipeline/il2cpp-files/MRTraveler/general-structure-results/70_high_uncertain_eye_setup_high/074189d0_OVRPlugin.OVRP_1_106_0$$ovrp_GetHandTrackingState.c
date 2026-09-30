/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetHandTrackingState
ENTRY_POINT: 074189d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetHandTrackingState(void)

{
  code *pcVar1;
  long unaff_x19;
  
  pcVar1 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x19 + 0x2a0) = pcVar1;
                    /* try { // try from 074189dc to 07518ae7 has its CatchHandler @ 074189dc
                       catch() { ... } // from try @ 074189dc with catch @ 074189dc
                       catch() { ... } // from try @ 07418b78 with catch @ 074189dc
                       catch() { ... } // from try @ 07418bb4 with catch @ 074189dc
                       catch() { ... } // from try @ 07418bf0 with catch @ 074189dc
                       catch() { ... } // from try @ 07418c20 with catch @ 074189dc */
  (*pcVar1)();
  return;
}


