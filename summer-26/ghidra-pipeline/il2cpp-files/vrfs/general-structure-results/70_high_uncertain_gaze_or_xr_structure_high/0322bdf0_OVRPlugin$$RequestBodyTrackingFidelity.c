/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 0322bdf0
PROGRAM: vrfs-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE =
         (code *)FUN_0160ed64("UnityEngine.LocationService::SetDesiredAccuracy(System.Single)");
    *(code **)(unaff_x19 + 0xed8) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0322be14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


