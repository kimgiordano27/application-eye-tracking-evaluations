/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 04df5e44
PROGRAM: spatialPiano-libil2cpp.so
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
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_067c9728;
  if ((DAT_06bb7dbc & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9728);
    DAT_06bb7dbc = 1;
  }
  uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  FUN_050570d0(uVar2,0,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50),0);
  lVar4 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c();
  }
  lVar3 = *(long *)(param_1 + 0x20);
  **(undefined8 **)(lVar4 + 0xb8) = uVar2;
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02f41e9c();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x58) + 0x135) & 1) == 0) {
    FUN_02f41e9c();
    return;
  }
  return;
}


