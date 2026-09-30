/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 057eebac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;pose_vector;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar6 = FUN_05afde1c(uVar6,0);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar2 = thunk_FUN_0301080c();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar3 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
    lVar3 = *(long *)(unaff_x19 + 0x20);
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18);
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
  }
  FUN_057aa94c(uVar2,0,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x28));
  uVar6 = FUN_068b2a18(uVar6,uVar2,0,0,0);
  *unaff_x20 = uVar6;
  return;
}


