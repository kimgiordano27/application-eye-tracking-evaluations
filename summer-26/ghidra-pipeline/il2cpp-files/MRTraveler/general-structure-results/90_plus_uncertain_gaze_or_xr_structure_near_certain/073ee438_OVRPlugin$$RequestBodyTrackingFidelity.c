/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 073ee438
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


bool OVRPlugin__RequestBodyTrackingFidelity(long param_1,int param_2,byte param_3)

{
  byte bVar1;
  bool in_CY;
  bool bVar2;
  
  if (in_CY) {
    if (param_2 == 1) {
      if (*(byte *)(param_1 + 0x20) != (param_3 & 1)) {
        return false;
      }
      bVar1 = *(byte *)(param_1 + 0x22);
    }
    else {
      if (param_2 != 0) {
        return false;
      }
      bVar1 = param_3 & 1;
      if ((*(byte *)(param_1 + 0x20) == bVar1) && (*(byte *)(param_1 + 0x22) != bVar1)) {
        return true;
      }
      if (*(byte *)(param_1 + 0x21) != bVar1) {
        return false;
      }
      bVar1 = *(byte *)(param_1 + 0x23);
    }
    bVar2 = bVar1 == (param_3 & 1);
  }
  else {
    if (*(byte *)(param_1 + 0x21) != (param_3 & 1)) {
      return false;
    }
    bVar2 = *(byte *)(param_1 + 0x21) == *(byte *)(param_1 + 0x23);
  }
  return !bVar2;
}


