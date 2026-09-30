/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 0531d7c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__InitializeMixedReality
               (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4,
               float param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x22;
  long unaff_x23;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000054;
  float fStack000000000000005c;
  undefined4 uStack0000000000000064;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  float fStack0000000000000100;
  float fStack0000000000000104;
  float in_stack_00000108;
  float fStack0000000000000110;
  float fStack0000000000000114;
  float in_stack_00000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001e8;
  float fStack00000000000001ec;
  
  if ((*(byte *)(unaff_x23 + 0x242) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d1b00);
    *(undefined1 *)(unaff_x23 + 0x242) = 1;
  }
  in_stack_00000180 = 0;
  in_stack_00000188 = 0;
  in_stack_00000170 = 0;
  in_stack_00000178 = 0;
  in_stack_00000160 = 0;
  in_stack_00000168 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  in_stack_00000148 = 0.0;
  _fStack0000000000000140 = 0;
  in_stack_00000138 = 0.0;
  _fStack0000000000000130 = 0;
  in_stack_00000128 = 0.0;
  _fStack0000000000000120 = 0;
  in_stack_00000118 = 0.0;
  _fStack0000000000000110 = 0;
  uVar5 = FUN_0531c234(param_6);
  fVar12 = param_3;
  fVar16 = param_4;
  fVar14 = param_5;
  FUN_0531bfec(&stack0x000000f0,param_6);
  fVar15 = in_stack_00000108;
  fVar9 = in_stack_000000f8._4_4_;
  fVar10 = fStack0000000000000100;
  fVar11 = fStack0000000000000104;
  fStack0000000000000054 = (float)FUN_0531c0d8(param_6);
  uVar20 = *unaff_x22;
  uStack0000000000000064 = unaff_x22[1];
  in_stack_00000198 = *(undefined8 *)(unaff_x22 + 5);
  in_stack_00000190 = *(undefined8 *)(unaff_x22 + 3);
  uVar13 = unaff_x22[2];
  fStack000000000000002c = fVar14;
  if (DAT_06bb42c4 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c4 = '\x01';
  }
  puVar1 = PTR_DAT_067c8f78;
  lVar4 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar14 = param_3;
  fVar17 = param_4;
  fVar6 = (float)FUN_060dfb18(uVar5,param_3,param_4,param_5,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  in_stack_00000180 = CONCAT44(fVar10,fVar9);
  in_stack_00000188 = CONCAT44(fVar15,fVar11);
  fVar8 = fVar6;
  fVar18 = fVar14;
  fVar19 = fVar17;
  fStack000000000000006c = param_3;
  in_stack_000001e8 = uVar5;
  fStack00000000000001ec = param_4;
  fVar7 = (float)FUN_060df7e8(0x43340000,0);
  fStack000000000000003c = (fVar9 * fVar18 + fVar10 * fVar19 + fVar15 * fVar8) - fVar11 * fVar7;
  fStack0000000000000034 = ((fVar15 * fVar19 - fVar9 * fVar7) - fVar10 * fVar8) - fVar11 * fVar18;
  in_stack_00000178 =
       CONCAT44(fStack0000000000000034,
                (fVar10 * fVar7 + fVar11 * fVar19 + fVar15 * fVar18) - fVar9 * fVar8);
  in_stack_00000170 =
       CONCAT44(fStack000000000000003c,
                (fVar11 * fVar8 + fVar9 * fVar19 + fVar15 * fVar7) - fVar10 * fVar18);
  fVar8 = fVar6;
  fVar18 = fVar14;
  fVar19 = fVar17;
  fVar7 = (float)FUN_060df7e8(0x42b40000,0);
  fStack0000000000000024 = (fVar9 * fVar18 + fVar10 * fVar19 + fVar15 * fVar8) - fVar11 * fVar7;
  fStack000000000000001c = ((fVar15 * fVar19 - fVar9 * fVar7) - fVar10 * fVar8) - fVar11 * fVar18;
  in_stack_00000168 =
       CONCAT44(fStack000000000000001c,
                (fVar10 * fVar7 + fVar11 * fVar19 + fVar15 * fVar18) - fVar9 * fVar8);
  in_stack_00000160 =
       CONCAT44(fStack0000000000000024,
                (fVar11 * fVar8 + fVar9 * fVar19 + fVar15 * fVar7) - fVar10 * fVar18);
  fVar8 = (float)FUN_060df7e8(0xc2b40000,0);
  fStack0000000000000014 = (fVar9 * fVar14 + fVar10 * fVar17 + fVar15 * fVar6) - fVar11 * fVar8;
  fStack000000000000000c = ((fVar15 * fVar17 - fVar9 * fVar8) - fVar10 * fVar6) - fVar11 * fVar14;
  in_stack_00000150 =
       CONCAT44(fStack0000000000000014,
                (fVar11 * fVar6 + fVar9 * fVar17 + fVar15 * fVar8) - fVar10 * fVar14);
  in_stack_00000158 =
       CONCAT44(fStack000000000000000c,
                (fVar10 * fVar8 + fVar11 * fVar17 + fVar15 * fVar14) - fVar9 * fVar6);
  fVar9 = (float)FUN_0531dec0(&stack0x00000180,&stack0x00000190);
  fVar10 = (float)FUN_0531dec0(&stack0x00000170,&stack0x00000190);
  fStack000000000000005c = (float)FUN_0531dec0(&stack0x00000160,&stack0x00000190);
  fVar11 = (float)FUN_0531dec0(&stack0x00000150,&stack0x00000190);
  if (DAT_06bb8999 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb8999 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar15 = fStack000000000000006c;
  fVar14 = fStack00000000000001ec;
  fVar8 = (float)FUN_060dfb18(in_stack_000001e8,fStack000000000000006c,fStack00000000000001ec,
                              param_5,*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                              *(undefined4 *)(lVar4 + 0x44),0);
  fStack0000000000000044 = fVar14;
  fStack000000000000004c = fVar15;
  if (DAT_06bb42c5 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c5 = '\x01';
  }
  puVar2 = PTR_DAT_067d1b00;
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar15 = fStack000000000000006c;
  fVar14 = fStack00000000000001ec;
  fStack00000000000001ec =
       (float)FUN_060dfb18(in_stack_000001e8,fStack000000000000006c,fStack00000000000001ec,param_5,
                           *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                           *(undefined4 *)(lVar4 + 0x50),0);
  FUN_0531c954(param_6,&stack0x00000140,&stack0x00000130,&stack0x00000120,&stack0x00000110);
  fVar17 = fStack000000000000005c;
  if (fStack000000000000005c <= fVar11) {
    fVar17 = fVar11;
  }
  fVar11 = fVar10;
  if (fVar10 <= fVar17) {
    fVar11 = fVar17;
  }
  fVar17 = fVar9;
  if (fVar9 <= fVar11) {
    fVar17 = fVar11;
  }
  if (fVar9 == fVar17) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    _fStack0000000000000100 = 0;
    uVar3 = FUN_045a8fac(fVar12 * fVar8 + fStack0000000000000140,
                         fVar12 * fStack000000000000004c + fStack0000000000000144,
                         fVar12 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar8 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar2);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = _fStack0000000000000100;
    FUN_0531cb64(uVar20,uStack0000000000000064,uVar13,uVar3,&stack0x000000d0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (fVar10 == fVar17) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_045a8fac(fStack0000000000000120 - fStack0000000000000054 * fVar8,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fVar12 * fVar8,
                           fStack0000000000000114 - fVar12 * fStack000000000000004c,
                           in_stack_00000118 - fVar12 * fStack0000000000000044,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = _fStack0000000000000100;
      FUN_0531cb64(uVar20,uStack0000000000000064,uVar13,uVar3,&stack0x000000b0);
    }
    else if (fStack000000000000005c == fVar17) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_045a8fac(fStack0000000000000140 - fVar16 * fStack00000000000001ec,
                           fStack0000000000000144 - fVar16 * fVar15,
                           in_stack_00000148 - fVar16 * fVar14,
                           fStack0000000000000120 - fStack000000000000002c * fStack00000000000001ec,
                           fStack0000000000000124 - fStack000000000000002c * fVar15,
                           in_stack_00000128 - fStack000000000000002c * fVar14,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = _fStack0000000000000100;
      FUN_0531cb64(uVar20,uStack0000000000000064,uVar13,uVar3,&stack0x00000090);
    }
    else {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_045a8fac(fStack000000000000002c * fStack00000000000001ec + fStack0000000000000130,
                           fStack000000000000002c * fVar15 + fStack0000000000000134,
                           fStack000000000000002c * fVar14 + in_stack_00000138,
                           fVar16 * fStack00000000000001ec + fStack0000000000000110,
                           fVar16 * fVar15 + fStack0000000000000114,
                           fVar16 * fVar14 + in_stack_00000118,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000080 = _fStack0000000000000100;
      FUN_0531cb64(uVar20,uStack0000000000000064,uVar13,uVar3,&stack0x00000070);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  FUN_060fda18(param_1,0);
  return;
}


