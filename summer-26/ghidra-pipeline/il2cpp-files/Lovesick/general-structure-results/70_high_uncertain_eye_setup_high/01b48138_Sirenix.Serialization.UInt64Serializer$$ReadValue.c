/*
FUNCTION_NAME: Sirenix.Serialization.UInt64Serializer$$ReadValue
ENTRY_POINT: 01b48138
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Sirenix_Serialization_UInt64Serializer__ReadValue(void)

{
  char *local_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if (DAT_0377d788 == (code *)0x0) {
    local_18 = 0;
    local_40 = "OVRPlugin";
    uStack_38 = 9;
    local_30 = "ovrp_GetActiveController";
    uStack_28 = 0x18;
    local_20 = DAT_028aa478;
    local_14 = 0;
    DAT_0377d788 = (code *)thunk_FUN_00d625b4(&local_40);
  }
  (*DAT_0377d788)();
  return;
}


