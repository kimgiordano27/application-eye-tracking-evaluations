/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StopDiscoveringColocationSessions>d__22$$MoveNext
ENTRY_POINT: 04abf840
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StopDiscoveringColocationSessions>d__22__MoveNext
               (long param_1)

{
  int *unaff_x19;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x20),0);
    *unaff_x19 = *unaff_x19 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


