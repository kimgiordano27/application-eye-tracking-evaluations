/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 057776f4
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


bool OVRPlugin_UnityOpenXR__OnSessionBegin(void)

{
  int iVar1;
  code *pcVar2;
  long unaff_x22;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 057776d4 with catch @ 057776f4
                       catch(type#2 @ 00000000) { ... } // from try @ 057776ec with catch @ 057776f4
                        */
  pcVar2 = (code *)thunk_FUN_02ef1ac4();
  *(code **)(unaff_x22 + 0xcd0) = pcVar2;
  iVar1 = (*pcVar2)();
  return iVar1 != 0;
}


