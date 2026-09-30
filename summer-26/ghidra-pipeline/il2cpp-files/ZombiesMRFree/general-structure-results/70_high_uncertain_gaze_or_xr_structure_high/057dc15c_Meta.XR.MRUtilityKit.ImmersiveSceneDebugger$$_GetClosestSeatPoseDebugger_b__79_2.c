/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$<GetClosestSeatPoseDebugger>b__79_2
ENTRY_POINT: 057dc15c
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


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__<GetClosestSeatPoseDebugger>b__79_2
               (long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  undefined4 uStack000000000000000c;
  
  pcVar5 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x20);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02feb2c4(param_1);
  }
  uStack000000000000000c = (*pcVar5)();
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar3 + 0x135);
  lVar4 = lVar3;
  if ((uVar1 & 1) == 0) {
    lVar3 = FUN_02feb2c4(lVar3);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar5 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x98);
  if ((uVar1 & 1) == 0) {
    FUN_02feb2c4(lVar4);
  }
  uVar2 = (*pcVar5)();
  FUN_05aec868(&stack0x0000000c,uVar2,0);
  return;
}


