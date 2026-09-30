/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 089e9e28
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose
               (float param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *puVar2;
  
  if (param_1 != 0.0) {
    *(float *)(unaff_x19 + 0x24) = param_1;
  }
  puVar2 = (undefined8 *)(unaff_x19 + 0x10);
  uVar1 = FUN_088edab4(*puVar2,*(undefined8 *)(param_3 + 0x10),0);
  *puVar2 = uVar1;
  thunk_FUN_049ee3d8(puVar2);
  return;
}


