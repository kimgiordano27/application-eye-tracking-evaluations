/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 073f2c68
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement(long *param_1)

{
  byte bVar1;
  long *in_x9;
  undefined4 unaff_w19;
  
  bVar1 = *(byte *)(*in_x9 + 0x130);
  if ((bVar1 <= *(byte *)(*param_1 + 0x130)) &&
     (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) == *in_x9)) {
    if (param_1 != (long *)0x0) {
      FUN_073f005c(param_1,unaff_w19);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  return;
}


