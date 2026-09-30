/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_GetHandState3
ENTRY_POINT: 0697b688
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_103_0__ovrp_GetHandState3(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *(undefined8 *)(param_1 + 0x24) = DAT_015c4cf0;
  FUN_0679343c(param_1,0);
  *(long *)(unaff_x19 + 0x20) = param_1;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0x20),param_1);
  lVar6 = thunk_FUN_03ac74bc(*unaff_x23);
  uVar11 = _UNK_015c89e8;
  uVar10 = _DAT_015c89e0;
  uVar7 = _DAT_015c89d0;
  *(undefined8 *)(lVar6 + 0x18) = _UNK_015c89d8;
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  *(undefined8 *)(lVar6 + 0x28) = uVar11;
  *(undefined8 *)(lVar6 + 0x20) = uVar10;
  FUN_0679343c(lVar6,0);
  *(long *)(unaff_x19 + 0x28) = lVar6;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0x28),lVar6);
  uVar7 = thunk_FUN_03ac74bc(*unaff_x22);
  FUN_06976b40();
  *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x30),uVar7);
  lVar6 = thunk_FUN_03ac74bc(*unaff_x21);
  uVar7 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(lVar6 + 0x24) = 0x3fc00000;
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  FUN_0679343c(lVar6,0);
  *(long *)(unaff_x19 + 0x38) = lVar6;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0x38),lVar6);
  lVar6 = thunk_FUN_03ac74bc(*unaff_x21);
  *(undefined8 *)(lVar6 + 0x18) = uVar7;
  *(undefined4 *)(lVar6 + 0x24) = 0x3fc00000;
  FUN_0679343c(lVar6,0);
  *(long *)(unaff_x19 + 0x40) = lVar6;
  thunk_FUN_03afed3c((long *)(unaff_x19 + 0x40),lVar6);
  uVar11 = _UNK_015c6e58;
  uVar10 = _DAT_015c6e50;
  uVar7 = DAT_015c3c20;
  *(undefined4 *)(unaff_x19 + 0x98) = 0x40400000;
  *(undefined4 *)(unaff_x19 + 0xa8) = 0x3f4ccccd;
  *(undefined1 *)(unaff_x19 + 0xac) = 1;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar7;
  *(undefined4 *)(unaff_x19 + 0xb8) = 0x3f800000;
  uVar5 = FUN_07c9da14(1,0);
  *(undefined1 *)(unaff_x19 + 0xc4) = 1;
  cVar4 = DAT_0897581b;
  *(undefined4 *)(unaff_x19 + 0xbc) = uVar5;
  *(undefined4 *)(unaff_x19 + 0xc0) = 2;
  *(undefined4 *)(unaff_x19 + 200) = 0x14;
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  puVar3 = PTR_DAT_0848d6e8;
  lVar6 = *(long *)PTR_DAT_0848d6e8;
  lVar8 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uVar11 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x78);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x19 + 0xe4) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(unaff_x19 + 0xdc) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x114) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x10c) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x104) = uVar15;
  *(undefined8 *)(unaff_x19 + 0xfc) = uVar14;
  *(undefined8 *)(unaff_x19 + 0xf4) = uVar11;
  *(undefined8 *)(unaff_x19 + 0xec) = uVar10;
  lVar8 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uVar11 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x78);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x124) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x11c) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x134) = uVar11;
  *(undefined8 *)(unaff_x19 + 300) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x144) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x13c) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x154) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x14c) = uVar12;
  lVar8 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uVar11 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x78);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x164) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x15c) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x174) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x16c) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x184) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x17c) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x194) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x18c) = uVar12;
  lVar8 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uVar11 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x78);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x1a4) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x19c) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x1b4) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x1ac) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x1c4) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x1bc) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x1d4) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x1cc) = uVar12;
  lVar8 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar8 + 0x40);
  uVar11 = *(undefined8 *)(lVar8 + 0x58);
  uVar10 = *(undefined8 *)(lVar8 + 0x50);
  uVar15 = *(undefined8 *)(lVar8 + 0x68);
  uVar14 = *(undefined8 *)(lVar8 + 0x60);
  uVar13 = *(undefined8 *)(lVar8 + 0x78);
  uVar12 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x1e4) = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x1dc) = uVar7;
  *(undefined8 *)(unaff_x19 + 500) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x1ec) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x204) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x1fc) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x214) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x20c) = uVar12;
  cVar4 = DAT_08974d8f;
  lVar6 = *(long *)(lVar6 + 0xb8);
  uVar7 = *(undefined8 *)(lVar6 + 0x40);
  uVar11 = *(undefined8 *)(lVar6 + 0x58);
  uVar10 = *(undefined8 *)(lVar6 + 0x50);
  uVar15 = *(undefined8 *)(lVar6 + 0x68);
  uVar14 = *(undefined8 *)(lVar6 + 0x60);
  uVar13 = *(undefined8 *)(lVar6 + 0x78);
  uVar12 = *(undefined8 *)(lVar6 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x224) = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x21c) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x234) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x22c) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x244) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x23c) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x254) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x24c) = uVar12;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d8f = '\x01';
  }
  cVar4 = DAT_08974d8a;
  puVar2 = PTR_DAT_084868a0;
  lVar6 = *(long *)PTR_DAT_084868a0;
  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
  uVar5 = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)(unaff_x19 + 0x25c) = *puVar9;
  *(undefined4 *)(unaff_x19 + 0x264) = uVar5;
  puVar9 = *(undefined8 **)(lVar6 + 0xb8);
  uVar5 = *(undefined4 *)(puVar9 + 1);
  *(undefined8 *)(unaff_x19 + 0x268) = *puVar9;
  *(undefined4 *)(unaff_x19 + 0x270) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar4 = DAT_08974d89;
  puVar1 = PTR_DAT_08486860;
  uVar7 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x27c) = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  *(undefined8 *)(unaff_x19 + 0x274) = uVar7;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d89 = '\x01';
  }
  cVar4 = DAT_08974d88;
  lVar6 = *(long *)puVar2;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x284) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x28c) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar4 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x19 + 0x290) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 0x298) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar4 = DAT_08974d89;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x19 + 0x29c) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x2a4) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d89 = '\x01';
  }
  cVar4 = DAT_08974d88;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x2a8) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x2b0) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar4 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x19 + 0x2b4) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 700) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar4 = DAT_0897581b;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x19 + 0x2c0) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x2c8) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  cVar4 = DAT_08974d8f;
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  uVar11 = *(undefined8 *)(lVar6 + 0x60);
  uVar10 = *(undefined8 *)(lVar6 + 0x78);
  uVar7 = *(undefined8 *)(lVar6 + 0x70);
  uVar15 = *(undefined8 *)(lVar6 + 0x48);
  uVar14 = *(undefined8 *)(lVar6 + 0x40);
  uVar13 = *(undefined8 *)(lVar6 + 0x58);
  uVar12 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x2f4) = *(undefined8 *)(lVar6 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x2ec) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x304) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x2fc) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x2d4) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x2cc) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x2e4) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x2dc) = uVar12;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d8f = '\x01';
  }
  cVar4 = DAT_08974d8a;
  uVar5 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x30c) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x314) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar4 = DAT_08974d89;
  puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar7 = *puVar9;
  *(undefined8 *)(unaff_x19 + 800) = puVar9[1];
  *(undefined8 *)(unaff_x19 + 0x318) = uVar7;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d89 = '\x01';
  }
  cVar4 = DAT_08974d88;
  lVar6 = *(long *)puVar2;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x20);
  *(undefined8 *)(unaff_x19 + 0x328) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18);
  *(undefined4 *)(unaff_x19 + 0x330) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar4 = DAT_08974d8b;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x50);
  *(undefined8 *)(unaff_x19 + 0x334) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48);
  *(undefined4 *)(unaff_x19 + 0x33c) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(puVar2);
    lVar6 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar4 = DAT_08974d8a;
  uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x44);
  *(undefined8 *)(unaff_x19 + 0x340) = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x3c);
  *(undefined4 *)(unaff_x19 + 0x348) = uVar5;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar4 = DAT_0897581b;
  puVar9 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar7 = *puVar9;
  *(undefined8 *)(unaff_x19 + 0x354) = puVar9[1];
  *(undefined8 *)(unaff_x19 + 0x34c) = uVar7;
  if (cVar4 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  lVar6 = *(long *)(*(long *)puVar3 + 0xb8);
  uVar11 = *(undefined8 *)(lVar6 + 0x60);
  uVar10 = *(undefined8 *)(lVar6 + 0x78);
  uVar7 = *(undefined8 *)(lVar6 + 0x70);
  uVar15 = *(undefined8 *)(lVar6 + 0x48);
  uVar14 = *(undefined8 *)(lVar6 + 0x40);
  uVar13 = *(undefined8 *)(lVar6 + 0x58);
  uVar12 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(unaff_x19 + 900) = *(undefined8 *)(lVar6 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x37c) = uVar11;
  *(undefined8 *)(unaff_x19 + 0x394) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x38c) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x364) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x35c) = uVar14;
  *(undefined8 *)(unaff_x19 + 0x374) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x36c) = uVar12;
  FUN_06927884();
  return;
}


