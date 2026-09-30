/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionDestroy
ENTRY_POINT: 0316967c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionDestroy(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x120) = param_1;
  uVar1 = thunk_FUN_01afa9e0();
                    /* try { // try from 03169698 to 0326969b has its CatchHandler @ 03169bc4 */
  thunk_FUN_01b4f09c(unaff_x19 + 0x120,uVar1);
  return;
}


