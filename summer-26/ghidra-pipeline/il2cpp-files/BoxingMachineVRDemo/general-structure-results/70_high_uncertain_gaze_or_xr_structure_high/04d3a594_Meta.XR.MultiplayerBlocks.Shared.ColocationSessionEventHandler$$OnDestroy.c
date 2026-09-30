/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$OnDestroy
ENTRY_POINT: 04d3a594
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__OnDestroy
          (long param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x21;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x200) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02d9a2e0();
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *param_3;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x160) + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
  plVar6 = *(long **)(lVar4 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_02d9a33c(lVar4);
    plVar6 = *(long **)(lVar4 + 0x38);
  }
  lVar7 = *plVar6;
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    FUN_02d6084c(PTR_DAT_067680f8);
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_02d9a33c(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar4 + 8) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if (uVar1 < 0x80) {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar4 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar2 = *param_3;
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar4 = *(long *)(unaff_x21 + 0x20);
    }
    *param_2 = uVar2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b77978 == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b77978 = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x1e0);
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b77975 == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b77975 = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    iVar3 = FUN_04d37f4c(param_2,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x90));
    FUN_06013f40(param_2 + 2,param_3 + 2,(long)iVar3,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


