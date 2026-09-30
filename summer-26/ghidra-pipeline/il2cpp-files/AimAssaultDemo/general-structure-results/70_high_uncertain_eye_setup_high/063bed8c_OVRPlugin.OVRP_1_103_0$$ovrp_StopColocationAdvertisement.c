/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_StopColocationAdvertisement
ENTRY_POINT: 063bed8c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_103_0__ovrp_StopColocationAdvertisement(void)

{
  long unaff_x19;
  long *unaff_x20;
  
  do {
    thunk_FUN_03798b70();
    do {
      OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(unaff_x19);
      unaff_x19 = FUN_063bedb0();
      if (unaff_x19 == 0) {
        return;
      }
    } while (*(int *)(*unaff_x20 + 0xe4) != 0);
  } while( true );
}


