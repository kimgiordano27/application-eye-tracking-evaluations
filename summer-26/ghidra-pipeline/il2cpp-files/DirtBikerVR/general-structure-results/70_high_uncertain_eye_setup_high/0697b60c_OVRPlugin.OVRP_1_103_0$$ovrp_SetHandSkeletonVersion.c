/*
FUNCTION_NAME: OVRPlugin.OVRP_1_103_0$$ovrp_SetHandSkeletonVersion
ENTRY_POINT: 0697b60c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OVRPlugin_OVRP_1_103_0__ovrp_SetHandSkeletonVersion(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar4 = PTR_DAT_084b74d8;
  puVar1 = PTR_DAT_084b74d0;
  puVar2 = PTR_DAT_084b74b8;
  puVar3 = PTR_DAT_084b74b0;
  if ((DAT_0897d136 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b74b0);
    FUN_03a8a718(PTR_DAT_084b74b8);
    FUN_03a8a718(PTR_DAT_084b74d0);
    FUN_03a8a718(PTR_DAT_084b74d8);
    DAT_0897d136 = 1;
  }
  lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  *(undefined8 *)(lVar7 + 0x24) = DAT_015c4cf0;
  FUN_0679343c(lVar7,0);
  *(long *)(param_1 + 0x20) = lVar7;
  thunk_FUN_03afed3c((long *)(param_1 + 0x20),lVar7);
  lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
  uVar12 = _UNK_015c89e8;
  uVar11 = _DAT_015c89e0;
  uVar8 = _DAT_015c89d0;
  *(undefined8 *)(lVar7 + 0x18) = _UNK_015c89d8;
  *(undefined8 *)(lVar7 + 0x10) = uVar8;
  *(undefined8 *)(lVar7 + 0x28) = uVar12;
  *(undefined8 *)(lVar7 + 0x20) = uVar11;
  FUN_0679343c(lVar7,0);
  *(long *)(param_1 + 0x28) = lVar7;
  thunk_FUN_03afed3c((long *)(param_1 + 0x28),lVar7);
  uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)puVar4);
  FUN_06976b40();
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  thunk_FUN_03afed3c((undefined8 *)(param_1 + 0x30),uVar8);
  lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  uVar8 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(lVar7 + 0x24) = 0x3fc00000;
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  FUN_0679343c(lVar7,0);
  *(long *)(param_1 + 0x38) = lVar7;
  thunk_FUN_03afed3c((long *)(param_1 + 0x38),lVar7);
  lVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
  *(undefined8 *)(lVar7 + 0x18) = uVar8;
  *(undefined4 *)(lVar7 + 0x24) = 0x3fc00000;
  FUN_0679343c(lVar7,0);
  *(long *)(param_1 + 0x40) = lVar7;
  thunk_FUN_03afed3c((long *)(param_1 + 0x40),lVar7);
  uVar12 = _UNK_015c6e58;
  uVar11 = _DAT_015c6e50;
  uVar8 = DAT_015c3c20;
  *(undefined4 *)(param_1 + 0x98) = 0x40400000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f4ccccd;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(undefined8 *)(param_1 + 0x90) = uVar12;
  *(undefined8 *)(param_1 + 0x88) = uVar11;
  *(undefined8 *)(param_1 + 0xb0) = uVar8;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  uVar6 = FUN_07c9da14(1,0);
  *(undefined1 *)(param_1 + 0xc4) = 1;
  cVar5 = DAT_0897581b;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  *(undefined4 *)(param_1 + 0xc0) = 2;
  *(undefined4 *)(param_1 + 200) = 0x14;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  puVar3 = PTR_DAT_0848d6e8;
  lVar7 = *(long *)PTR_DAT_0848d6e8;
  lVar9 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x58);
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0xe4) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0xdc) = uVar8;
  *(undefined8 *)(param_1 + 0x114) = uVar14;
  *(undefined8 *)(param_1 + 0x10c) = uVar13;
  *(undefined8 *)(param_1 + 0x104) = uVar16;
  *(undefined8 *)(param_1 + 0xfc) = uVar15;
  *(undefined8 *)(param_1 + 0xf4) = uVar12;
  *(undefined8 *)(param_1 + 0xec) = uVar11;
  lVar9 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x58);
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0x11c) = uVar8;
  *(undefined8 *)(param_1 + 0x134) = uVar12;
  *(undefined8 *)(param_1 + 300) = uVar11;
  *(undefined8 *)(param_1 + 0x144) = uVar16;
  *(undefined8 *)(param_1 + 0x13c) = uVar15;
  *(undefined8 *)(param_1 + 0x154) = uVar14;
  *(undefined8 *)(param_1 + 0x14c) = uVar13;
  lVar9 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x58);
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0x15c) = uVar8;
  *(undefined8 *)(param_1 + 0x174) = uVar12;
  *(undefined8 *)(param_1 + 0x16c) = uVar11;
  *(undefined8 *)(param_1 + 0x184) = uVar16;
  *(undefined8 *)(param_1 + 0x17c) = uVar15;
  *(undefined8 *)(param_1 + 0x194) = uVar14;
  *(undefined8 *)(param_1 + 0x18c) = uVar13;
  lVar9 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x58);
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0x1a4) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0x19c) = uVar8;
  *(undefined8 *)(param_1 + 0x1b4) = uVar12;
  *(undefined8 *)(param_1 + 0x1ac) = uVar11;
  *(undefined8 *)(param_1 + 0x1c4) = uVar16;
  *(undefined8 *)(param_1 + 0x1bc) = uVar15;
  *(undefined8 *)(param_1 + 0x1d4) = uVar14;
  *(undefined8 *)(param_1 + 0x1cc) = uVar13;
  lVar9 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar9 + 0x40);
  uVar12 = *(undefined8 *)(lVar9 + 0x58);
  uVar11 = *(undefined8 *)(lVar9 + 0x50);
  uVar16 = *(undefined8 *)(lVar9 + 0x68);
  uVar15 = *(undefined8 *)(lVar9 + 0x60);
  uVar14 = *(undefined8 *)(lVar9 + 0x78);
  uVar13 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(param_1 + 0x1e4) = *(undefined8 *)(lVar9 + 0x48);
  *(undefined8 *)(param_1 + 0x1dc) = uVar8;
  *(undefined8 *)(param_1 + 500) = uVar12;
  *(undefined8 *)(param_1 + 0x1ec) = uVar11;
  *(undefined8 *)(param_1 + 0x204) = uVar16;
  *(undefined8 *)(param_1 + 0x1fc) = uVar15;
  *(undefined8 *)(param_1 + 0x214) = uVar14;
  *(undefined8 *)(param_1 + 0x20c) = uVar13;
  cVar5 = DAT_08974d8f;
  lVar7 = *(long *)(lVar7 + 0xb8);
  uVar8 = *(undefined8 *)(lVar7 + 0x40);
  uVar12 = *(undefined8 *)(lVar7 + 0x58);
  uVar11 = *(undefined8 *)(lVar7 + 0x50);
  uVar16 = *(undefined8 *)(lVar7 + 0x68);
  uVar15 = *(undefined8 *)(lVar7 + 0x60);
  uVar14 = *(undefined8 *)(lVar7 + 0x78);
  uVar13 = *(undefined8 *)(lVar7 + 0x70);
  *(undefined8 *)(param_1 + 0x224) = *(undefined8 *)(lVar7 + 0x48);
  *(undefined8 *)(param_1 + 0x21c) = uVar8;
  *(undefined8 *)(param_1 + 0x234) = uVar12;
  *(undefined8 *)(param_1 + 0x22c) = uVar11;
  *(undefined8 *)(param_1 + 0x244) = uVar16;
  *(undefined8 *)(param_1 + 0x23c) = uVar15;
  *(undefined8 *)(param_1 + 0x254) = uVar14;
  *(undefined8 *)(param_1 + 0x24c) = uVar13;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d8f = '\x01';
  }
  cVar5 = DAT_08974d8a;
  puVar2 = PTR_DAT_084868a0;
  lVar7 = *(long *)PTR_DAT_084868a0;
  puVar10 = *(undefined8 **)(lVar7 + 0xb8);
  uVar6 = *(undefined4 *)(puVar10 + 1);
  *(undefined8 *)(param_1 + 0x25c) = *puVar10;
  *(undefined4 *)(param_1 + 0x264) = uVar6;
  puVar10 = *(undefined8 **)(lVar7 + 0xb8);
  uVar6 = *(undefined4 *)(puVar10 + 1);
  *(undefined8 *)(param_1 + 0x268) = *puVar10;
  *(undefined4 *)(param_1 + 0x270) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar5 = DAT_08974d89;
  puVar1 = PTR_DAT_08486860;
  uVar8 = **(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8);
  *(undefined8 *)(param_1 + 0x27c) = (*(undefined8 **)(*(long *)PTR_DAT_08486860 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0x274) = uVar8;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d89 = '\x01';
  }
  cVar5 = DAT_08974d88;
  lVar7 = *(long *)puVar2;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x284) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  *(undefined4 *)(param_1 + 0x28c) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar5 = DAT_08974d8b;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x50);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
  *(undefined4 *)(param_1 + 0x298) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar5 = DAT_08974d89;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x44);
  *(undefined8 *)(param_1 + 0x29c) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x3c);
  *(undefined4 *)(param_1 + 0x2a4) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d89 = '\x01';
  }
  cVar5 = DAT_08974d88;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  *(undefined4 *)(param_1 + 0x2b0) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar5 = DAT_08974d8b;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x50);
  *(undefined8 *)(param_1 + 0x2b4) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
  *(undefined4 *)(param_1 + 700) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar5 = DAT_0897581b;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x44);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x3c);
  *(undefined4 *)(param_1 + 0x2c8) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  cVar5 = DAT_08974d8f;
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  uVar12 = *(undefined8 *)(lVar7 + 0x60);
  uVar11 = *(undefined8 *)(lVar7 + 0x78);
  uVar8 = *(undefined8 *)(lVar7 + 0x70);
  uVar16 = *(undefined8 *)(lVar7 + 0x48);
  uVar15 = *(undefined8 *)(lVar7 + 0x40);
  uVar14 = *(undefined8 *)(lVar7 + 0x58);
  uVar13 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(param_1 + 0x2f4) = *(undefined8 *)(lVar7 + 0x68);
  *(undefined8 *)(param_1 + 0x2ec) = uVar12;
  *(undefined8 *)(param_1 + 0x304) = uVar11;
  *(undefined8 *)(param_1 + 0x2fc) = uVar8;
  *(undefined8 *)(param_1 + 0x2d4) = uVar16;
  *(undefined8 *)(param_1 + 0x2cc) = uVar15;
  *(undefined8 *)(param_1 + 0x2e4) = uVar14;
  *(undefined8 *)(param_1 + 0x2dc) = uVar13;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d8f = '\x01';
  }
  cVar5 = DAT_08974d8a;
  uVar6 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar2 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x30c) = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0x314) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar5 = DAT_08974d89;
  puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar8 = *puVar10;
  *(undefined8 *)(param_1 + 800) = puVar10[1];
  *(undefined8 *)(param_1 + 0x318) = uVar8;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    DAT_08974d89 = '\x01';
  }
  cVar5 = DAT_08974d88;
  lVar7 = *(long *)puVar2;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x20);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
  *(undefined4 *)(param_1 + 0x330) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d88 = '\x01';
  }
  cVar5 = DAT_08974d8b;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x50);
  *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48);
  *(undefined4 *)(param_1 + 0x33c) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(puVar2);
    lVar7 = *(long *)puVar2;
    DAT_08974d8b = '\x01';
  }
  cVar5 = DAT_08974d8a;
  uVar6 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x44);
  *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x3c);
  *(undefined4 *)(param_1 + 0x348) = uVar6;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_08486860);
    DAT_08974d8a = '\x01';
  }
  cVar5 = DAT_0897581b;
  puVar10 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  uVar8 = *puVar10;
  *(undefined8 *)(param_1 + 0x354) = puVar10[1];
  *(undefined8 *)(param_1 + 0x34c) = uVar8;
  if (cVar5 == '\0') {
    FUN_03a8a718(PTR_DAT_0848d6e8);
    DAT_0897581b = '\x01';
  }
  lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
  uVar12 = *(undefined8 *)(lVar7 + 0x60);
  uVar11 = *(undefined8 *)(lVar7 + 0x78);
  uVar8 = *(undefined8 *)(lVar7 + 0x70);
  uVar16 = *(undefined8 *)(lVar7 + 0x48);
  uVar15 = *(undefined8 *)(lVar7 + 0x40);
  uVar14 = *(undefined8 *)(lVar7 + 0x58);
  uVar13 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined8 *)(param_1 + 900) = *(undefined8 *)(lVar7 + 0x68);
  *(undefined8 *)(param_1 + 0x37c) = uVar12;
  *(undefined8 *)(param_1 + 0x394) = uVar11;
  *(undefined8 *)(param_1 + 0x38c) = uVar8;
  *(undefined8 *)(param_1 + 0x364) = uVar16;
  *(undefined8 *)(param_1 + 0x35c) = uVar15;
  *(undefined8 *)(param_1 + 0x374) = uVar14;
  *(undefined8 *)(param_1 + 0x36c) = uVar13;
  FUN_06927884(param_1,0);
  return;
}


