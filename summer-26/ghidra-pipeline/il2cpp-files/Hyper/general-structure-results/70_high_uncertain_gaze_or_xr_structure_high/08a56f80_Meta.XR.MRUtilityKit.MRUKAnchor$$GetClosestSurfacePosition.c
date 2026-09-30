/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 08a56f80
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


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  ulong unaff_x21;
  undefined4 in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000038;
  
  uStack0000000000000028 = param_2;
  uStack0000000000000038 = param_1;
  thunk_FUN_049ee3d8();
  thunk_FUN_049ee3d8(unaff_x21 + 0x20);
  in_stack_00000020 = 0xffffffff;
  FUN_05a44038(unaff_x21 | 8,&stack0x00000020,*unaff_x20);
  FUN_08c7f8c8(unaff_x21 | 8,0);
  return;
}


