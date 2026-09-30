/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionBegin
ENTRY_POINT: 06035398
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionBegin(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  undefined8 unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 06035398 to 0613540f has its CatchHandler @ 06035564 */
  uVar1 = unaff_x19;
  if (*(long *)(in_x9 + -8) != param_1) {
    uVar1 = 0;
  }
  thunk_FUN_0329bf60(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x28) = unaff_x19;
  thunk_FUN_0329bf60((undefined8 *)(unaff_x20 + 0x28));
  return;
}


