/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 057fbf88
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(uint param_1)

{
  code *pcVar1;
  long unaff_x19;
  ulong unaff_x21;
  
  if ((unaff_x21 & 1) == 0) {
    if ((param_1 & 1) == 0) {
      pcVar1 = FUN_02c7f658;
    }
    else {
      pcVar1 = FUN_02c7f684;
    }
  }
  else if ((param_1 & 1) == 0) {
    pcVar1 = FUN_02c7f708;
  }
  else {
    pcVar1 = FUN_02c7f744;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar1;
  *(code **)(unaff_x19 + 0x38) = FUN_02c7f5d4;
  return;
}


