/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 04c569d4
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_065ce308;
  if ((DAT_06a6d903 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce308);
    DAT_06a6d903 = 1;
  }
  return *(undefined8 *)puVar1;
}


