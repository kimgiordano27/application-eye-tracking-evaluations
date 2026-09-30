/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 02901068
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  FUN_02df8d44(param_1,param_2,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = param_1;
  thunk_FUN_01656ef8(*(undefined8 *)(*unaff_x20 + 0xb8),param_1);
  return;
}


