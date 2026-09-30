/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentMarkdownText
ENTRY_POINT: 05bea510
PROGRAM: waitwhat-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_UnifiedConsent__GetConsentMarkdownText(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  
  uVar1 = FUN_03188b1c();
  lVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x158) = uVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar2);
  }
  OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin();
  return;
}


