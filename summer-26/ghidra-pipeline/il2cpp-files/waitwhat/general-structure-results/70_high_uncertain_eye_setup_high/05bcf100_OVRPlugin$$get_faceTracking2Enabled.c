/*
FUNCTION_NAME: OVRPlugin$$get_faceTracking2Enabled
ENTRY_POINT: 05bcf100
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_faceTracking2Enabled
               (undefined4 param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
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
  float in_stack_00000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float fStack000000000000015c;
  float in_stack_00000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack000000000000016c;
  float in_stack_00000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float fStack000000000000017c;
  float in_stack_00000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  float fStack000000000000018c;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined4 in_stack_000001e8;
  float fStack00000000000001ec;
  
  fVar11 = param_2;
  fVar15 = param_3;
  fVar13 = param_4;
  FUN_05bcd8b8();
  fVar14 = in_stack_00000108;
  fVar8 = in_stack_000000f8._4_4_;
  fVar9 = fStack0000000000000100;
  fVar10 = fStack0000000000000104;
  fStack0000000000000054 = (float)FUN_05bcd9a4();
  uVar19 = *unaff_x22;
  uStack0000000000000064 = unaff_x22[1];
  in_stack_00000198 = *(undefined8 *)(unaff_x22 + 5);
  in_stack_00000190 = *(undefined8 *)(unaff_x22 + 3);
  uVar12 = unaff_x22[2];
  fStack000000000000002c = fVar13;
  if (DAT_075457aa == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_075457aa = '\x01';
  }
  puVar1 = PTR_DAT_070c1a80;
  lVar4 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar13 = param_2;
  fVar16 = param_3;
  fVar5 = (float)FUN_069c57a8(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  in_stack_00000180 = fVar8;
  fStack0000000000000184 = fVar9;
  in_stack_00000188 = fVar10;
  fStack000000000000018c = fVar14;
  fVar7 = fVar5;
  fVar17 = fVar13;
  fVar18 = fVar16;
  fStack000000000000006c = param_2;
  in_stack_000001e8 = param_1;
  fStack00000000000001ec = param_3;
  fVar6 = (float)FUN_069c53ec(0x43340000,0);
  in_stack_00000170 = (fVar10 * fVar7 + fVar8 * fVar18 + fVar14 * fVar6) - fVar9 * fVar17;
  fStack000000000000003c = (fVar8 * fVar17 + fVar9 * fVar18 + fVar14 * fVar7) - fVar10 * fVar6;
  in_stack_00000178 = (fVar9 * fVar6 + fVar10 * fVar18 + fVar14 * fVar17) - fVar8 * fVar7;
  fStack0000000000000034 = ((fVar14 * fVar18 - fVar8 * fVar6) - fVar9 * fVar7) - fVar10 * fVar17;
  fVar7 = fVar5;
  fVar17 = fVar13;
  fVar18 = fVar16;
  fStack0000000000000174 = fStack000000000000003c;
  fStack000000000000017c = fStack0000000000000034;
  fVar6 = (float)FUN_069c53ec(0x42b40000,0);
  in_stack_00000160 = (fVar10 * fVar7 + fVar8 * fVar18 + fVar14 * fVar6) - fVar9 * fVar17;
  fStack0000000000000024 = (fVar8 * fVar17 + fVar9 * fVar18 + fVar14 * fVar7) - fVar10 * fVar6;
  in_stack_00000168 = (fVar9 * fVar6 + fVar10 * fVar18 + fVar14 * fVar17) - fVar8 * fVar7;
  fStack000000000000001c = ((fVar14 * fVar18 - fVar8 * fVar6) - fVar9 * fVar7) - fVar10 * fVar17;
  fStack0000000000000164 = fStack0000000000000024;
  fStack000000000000016c = fStack000000000000001c;
  fVar7 = (float)FUN_069c53ec(0xc2b40000,0);
  in_stack_00000150 = (fVar10 * fVar5 + fVar8 * fVar16 + fVar14 * fVar7) - fVar9 * fVar13;
  fStack0000000000000014 = (fVar8 * fVar13 + fVar9 * fVar16 + fVar14 * fVar5) - fVar10 * fVar7;
  in_stack_00000158 = (fVar9 * fVar7 + fVar10 * fVar16 + fVar14 * fVar13) - fVar8 * fVar5;
  fStack000000000000000c = ((fVar14 * fVar16 - fVar8 * fVar7) - fVar9 * fVar5) - fVar10 * fVar13;
  fStack0000000000000154 = fStack0000000000000014;
  fStack000000000000015c = fStack000000000000000c;
  fVar8 = (float)FUN_05bcf78c(&stack0x00000180,&stack0x00000190);
  fVar9 = (float)FUN_05bcf78c(&stack0x00000170,&stack0x00000190);
  fStack000000000000005c = (float)FUN_05bcf78c(&stack0x00000160,&stack0x00000190);
  fVar10 = (float)FUN_05bcf78c(&stack0x00000150,&stack0x00000190);
  if (DAT_07547404 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07547404 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar14 = fStack000000000000006c;
  fVar13 = fStack00000000000001ec;
  fVar7 = (float)FUN_069c57a8(in_stack_000001e8,fStack000000000000006c,fStack00000000000001ec,
                              param_4,*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                              *(undefined4 *)(lVar4 + 0x44),0);
  fStack0000000000000044 = fVar13;
  fStack000000000000004c = fVar14;
  if (DAT_07546bc0 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07546bc0 = '\x01';
  }
  puVar2 = PTR_DAT_071150d0;
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar14 = fStack000000000000006c;
  fVar13 = fStack00000000000001ec;
  fStack00000000000001ec =
       (float)FUN_069c57a8(in_stack_000001e8,fStack000000000000006c,fStack00000000000001ec,param_4,
                           *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                           *(undefined4 *)(lVar4 + 0x50),0);
  FUN_05bce220();
  fVar16 = fStack000000000000005c;
  if (fStack000000000000005c <= fVar10) {
    fVar16 = fVar10;
  }
  fVar10 = fVar9;
  if (fVar9 <= fVar16) {
    fVar10 = fVar16;
  }
  fVar16 = fVar8;
  if (fVar8 <= fVar10) {
    fVar16 = fVar10;
  }
  if (fVar8 == fVar16) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    _fStack0000000000000100 = 0;
    uVar3 = FUN_04dddd54(fVar11 * fVar7 + fStack0000000000000140,
                         fVar11 * fStack000000000000004c + fStack0000000000000144,
                         fVar11 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar7 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar2);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = _fStack0000000000000100;
    FUN_05bce430(uVar19,uStack0000000000000064,uVar12,uVar3,&stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fVar9 == fVar16) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_04dddd54(fStack0000000000000120 - fStack0000000000000054 * fVar7,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fVar11 * fVar7,
                           fStack0000000000000114 - fVar11 * fStack000000000000004c,
                           in_stack_00000118 - fVar11 * fStack0000000000000044,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = _fStack0000000000000100;
      FUN_05bce430(uVar19,uStack0000000000000064,uVar12,uVar3,&stack0x000000b0);
    }
    else if (fStack000000000000005c == fVar16) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_04dddd54(fStack0000000000000140 - fVar15 * fStack00000000000001ec,
                           fStack0000000000000144 - fVar15 * fVar14,
                           in_stack_00000148 - fVar15 * fVar13,
                           fStack0000000000000120 - fStack000000000000002c * fStack00000000000001ec,
                           fStack0000000000000124 - fStack000000000000002c * fVar14,
                           in_stack_00000128 - fStack000000000000002c * fVar13,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = _fStack0000000000000100;
      FUN_05bce430(uVar19,uStack0000000000000064,uVar12,uVar3,&stack0x00000090);
    }
    else {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_04dddd54(fStack000000000000002c * fStack00000000000001ec + fStack0000000000000130,
                           fStack000000000000002c * fVar14 + fStack0000000000000134,
                           fStack000000000000002c * fVar13 + in_stack_00000138,
                           fVar15 * fStack00000000000001ec + fStack0000000000000110,
                           fVar15 * fVar14 + fStack0000000000000114,
                           fVar15 * fVar13 + in_stack_00000118,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000080 = _fStack0000000000000100;
      FUN_05bce430(uVar19,uStack0000000000000064,uVar12,uVar3,&stack0x00000070);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  FUN_069e4d6c();
  return;
}


