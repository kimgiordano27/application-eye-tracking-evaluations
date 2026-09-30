/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 06972ab8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(undefined8 param_1)

{
  long unaff_x20;
  long *plVar1;
  long unaff_x21;
  
  plVar1 = *(long **)(unaff_x20 + 0x360);
  if ((*(byte *)(unaff_x21 + 0x100) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b7360);
    *(undefined1 *)(unaff_x21 + 0x100) = 1;
  }
  **(undefined8 **)(*plVar1 + 0xb8) = param_1;
  thunk_FUN_03afed3c(*(undefined8 *)(*plVar1 + 0xb8),param_1);
  return;
}


