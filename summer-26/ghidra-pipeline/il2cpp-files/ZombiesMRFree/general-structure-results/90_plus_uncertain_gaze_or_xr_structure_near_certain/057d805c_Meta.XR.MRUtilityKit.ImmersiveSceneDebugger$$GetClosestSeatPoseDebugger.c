/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 057d805c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPoseDebugger(long param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ushort *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  long unaff_x22;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uStack000000000000000c;
  
  FUN_02fe925c(*(undefined8 *)(param_1 + 0x610));
  *(undefined1 *)(unaff_x22 + 0xaf1) = 1;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x38) == 0) {
    FUN_02feb320();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x38) == 0) {
    FUN_02feb320();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *unaff_x21;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar1 = (uint)uVar2;
  if ((uint)*unaff_x19 <= (uint)uVar2) {
    uVar1 = (uint)*unaff_x19;
  }
  if (uVar1 != 0) {
    uVar7 = (ulong)uVar1;
    puVar5 = unaff_x19;
    puVar6 = unaff_x21;
    do {
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
      iVar3 = FUN_068b5924(puVar6,puVar5,8,0);
      if (iVar3 != 0) {
        return;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uStack000000000000000c = (uint)*unaff_x21;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_05aec868(&stack0x0000000c,*unaff_x19,0);
  return;
}


