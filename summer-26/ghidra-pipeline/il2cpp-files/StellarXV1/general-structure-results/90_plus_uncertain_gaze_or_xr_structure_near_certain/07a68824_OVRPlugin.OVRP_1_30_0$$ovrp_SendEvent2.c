/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 07a68824
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      param_1 = *unaff_x21;
    }
    if ((long)**(int **)(param_1 + 0xb8) <= (long)unaff_x20) {
      FUN_07a68948();
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(uint *)(*(long *)(unaff_x19 + 0x38) + 0x18) <= unaff_x20) break;
    FUN_07a68890();
    unaff_x20 = unaff_x20 + 1;
    param_1 = *unaff_x21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


