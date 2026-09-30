/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SaveSceneToJsonString
ENTRY_POINT: 06dd83ec
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__SaveSceneToJsonString
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined8 unaff_x19;
  
  FUN_085d8c88();
  *(undefined8 *)(param_3 + 0x18) = unaff_x19;
  *(undefined4 *)(param_3 + 0x20) = param_1;
  *(undefined4 *)(param_3 + 0x24) = param_2;
  thunk_FUN_03d233cc((undefined8 *)(param_3 + 0x18));
  return;
}


