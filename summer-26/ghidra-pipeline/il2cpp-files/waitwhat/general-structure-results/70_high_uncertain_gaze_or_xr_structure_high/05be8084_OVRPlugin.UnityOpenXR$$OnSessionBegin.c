/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 05be8084
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  uint unaff_w21;
  long unaff_x24;
  long unaff_x25;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x25 + 0xbb0);
  if ((*(byte *)(unaff_x24 + 0xd94) & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116bb0);
    *(undefined1 *)(unaff_x24 + 0xd94) = 1;
  }
  FUN_050660e4(param_1,param_2,param_3,param_4,unaff_w21 & 1,*puVar1);
  return;
}


