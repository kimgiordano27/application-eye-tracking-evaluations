/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 07ca09e0
PROGRAM: MatchPointTennis-libil2cpp.so
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
               (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 *param_9)

{
  long unaff_x19;
  undefined4 uVar1;
  
  *param_9 = param_2;
  param_9[1] = param_3;
  param_9[2] = param_4;
  param_9[3] = param_5;
  param_9[4] = param_6;
  param_9[5] = param_7;
  *(undefined8 *)(param_9 + 6) = param_1;
  param_9[8] = param_8;
  uVar1 = FUN_09516bac(0);
  *(undefined4 *)(unaff_x19 + 0x24) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x28) = param_3;
  *(undefined4 *)(unaff_x19 + 0x2c) = param_4;
  *(undefined4 *)(unaff_x19 + 0x30) = param_5;
  return;
}


