/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionDiscoveredWithSpatialAnchor>d__11$$SetStateMachine
ENTRY_POINT: 04d3b244
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11__SetStateMachine
          (long param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined2 *unaff_x19;
  undefined2 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  
  if (param_1 == 0) {
    FUN_02d9a33c();
    param_1 = *(long *)(unaff_x22 + 0x38);
  }
  if (*(long *)(*(long *)(param_1 + 8) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if (unaff_w23 < 0x80) {
    lVar5 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar5 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar5 + 0x135);
    }
    uVar2 = *unaff_x20;
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar5 = *(long *)(unaff_x21 + 0x20);
    }
    *unaff_x19 = uVar2;
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b77978 == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b77978 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    lVar5 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x248);
    if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b77977 == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b77977 = '\x01';
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    iVar3 = FUN_04d37f4c();
    FUN_06013f40(unaff_x19 + 2,unaff_x20 + 2,(long)iVar3,0);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


