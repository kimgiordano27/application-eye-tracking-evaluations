/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$TryGetClosestSurfacePosition
ENTRY_POINT: 08a5cca0
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKRoom__TryGetClosestSurfacePosition(void)

{
  undefined *puVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  puVar1 = PTR_DAT_0ac53b08;
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
  thunk_FUN_049ee3d8();
  FUN_08bda6b0(*(undefined8 *)puVar1);
  return;
}


