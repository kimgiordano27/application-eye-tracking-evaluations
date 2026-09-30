/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionCreate
ENTRY_POINT: 090c62b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionCreate
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_05f901fc(param_2,param_3,*param_1);
  FUN_09049ca8();
  *(undefined8 *)(unaff_x20 + 0x58) = unaff_x19;
  thunk_FUN_049ee3d8();
  return;
}


