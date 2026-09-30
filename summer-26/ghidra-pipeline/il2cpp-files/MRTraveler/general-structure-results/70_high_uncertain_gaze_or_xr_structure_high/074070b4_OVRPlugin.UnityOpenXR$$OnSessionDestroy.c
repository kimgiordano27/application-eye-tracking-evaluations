/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 074070b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(void)

{
  code *pcVar1;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  pcVar1 = (code *)thunk_FUN_03cf54f0();
  *(code **)(unaff_x21 + 0xa18) = pcVar1;
  (*pcVar1)(unaff_w20,unaff_w19);
  return;
}


