/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__79_0
ENTRY_POINT: 057dbdc4
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


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__79_0(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  uVar1 = *(ushort *)(param_1 + 0x135);
  lVar5 = param_1;
  if ((uVar1 & 1) == 0) {
    param_1 = FUN_02feb2c4(param_1);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x48);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar5);
  }
  uVar3 = (*pcVar6)();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02feb2c4(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x78);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar5);
  }
  uVar2 = (*pcVar6)();
  FUN_0644cfd0(uVar3,uVar2,0);
  return;
}


