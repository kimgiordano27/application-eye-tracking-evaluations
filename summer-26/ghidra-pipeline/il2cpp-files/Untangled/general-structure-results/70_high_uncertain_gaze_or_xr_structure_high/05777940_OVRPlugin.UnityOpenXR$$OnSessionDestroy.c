/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 05777940
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin_UnityOpenXR__OnSessionDestroy(void)

{
  int iVar1;
  code *pcVar2;
  long unaff_x22;
  
  pcVar2 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x22 + 0xcf0) = pcVar2;
  iVar1 = (*pcVar2)();
                    /* try { // try from 0577796c to 0587797b has its CatchHandler @ 057779e4 */
  return iVar1 != 0;
}


