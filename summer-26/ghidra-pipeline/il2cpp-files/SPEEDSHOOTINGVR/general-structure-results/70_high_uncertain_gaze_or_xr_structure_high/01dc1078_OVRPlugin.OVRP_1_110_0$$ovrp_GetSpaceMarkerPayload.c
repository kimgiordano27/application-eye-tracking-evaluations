/*
FUNCTION_NAME: OVRPlugin.OVRP_1_110_0$$ovrp_GetSpaceMarkerPayload
ENTRY_POINT: 01dc1078
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_110_0__ovrp_GetSpaceMarkerPayload(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_010303a8(PTR_DAT_0234bbe8);
  uVar1 = thunk_FUN_010400dc();
  thunk_FUN_010303a8(PTR_DAT_023578e8);
  FUN_01c66c10(uVar1);
  uVar2 = thunk_FUN_010303a8(PTR_DAT_0235aae0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar1,uVar2);
}


