/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPose
ENTRY_POINT: 05b02420
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPose
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  *param_1 = unaff_x20;
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  thunk_FUN_036b7ad0(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


