/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 06df07b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_SceneDebugger__GetClosestSeatPoseDebugger(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x21;
  
  puVar1 = PTR_DAT_08e69550;
  if ((*(byte *)(unaff_x21 + 0xe25) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e69550);
    *(undefined1 *)(unaff_x21 + 0xe25) = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701df90(param_1 + 8,param_2,0);
  return;
}


