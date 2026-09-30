/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 05afb2cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(long param_1)

{
  ushort uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  if ((uVar1 & 1) == 0) {
    FUN_0322bef4();
    param_1 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  uStack000000000000000c = *(undefined4 *)(unaff_x19 + 0x18);
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_0322bef4();
  }
  thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x30),&stack0x0000000c);
  return;
}


