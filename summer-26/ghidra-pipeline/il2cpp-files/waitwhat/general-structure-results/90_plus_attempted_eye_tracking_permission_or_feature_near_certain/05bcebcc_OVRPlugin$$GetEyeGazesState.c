/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 05bcebcc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *unaff_x19;
  float *unaff_x20;
  long unaff_x23;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  float fStack0000000000000064;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float fStack0000000000000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack00000000000001b8;
  float fStack00000000000001bc;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x23 + 0xb51) = 1;
  in_stack_00000168 = 0.0;
  _fStack0000000000000160 = 0;
  in_stack_00000158 = 0.0;
  _fStack0000000000000150 = 0;
  in_stack_00000148 = 0.0;
  _fStack0000000000000140 = 0;
  in_stack_00000138 = 0.0;
  _fStack0000000000000130 = 0;
  uVar7 = FUN_05bcdb00();
  fVar13 = param_2;
  fVar14 = param_3;
  fVar16 = param_4;
  fVar8 = (float)FUN_05bcd9a4();
  fStack0000000000000064 = fVar14;
  if (DAT_07547404 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07547404 = '\x01';
  }
  puVar2 = PTR_DAT_071150d0;
  puVar1 = PTR_DAT_070c1a80;
  lVar6 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
  fVar14 = param_2;
  fVar21 = param_3;
  fVar9 = (float)FUN_069c57a8(uVar7,param_2,param_3,param_4,*(undefined4 *)(lVar6 + 0x3c),
                              *(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44),0);
  if (DAT_07546bc0 == '\0') {
    FUN_03188a78(PTR_DAT_070c1a80);
    DAT_07546bc0 = '\x01';
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar10 = (float)FUN_069c57a8(uVar7,param_2,param_3,param_4,*(undefined4 *)(lVar6 + 0x48),
                               *(undefined4 *)(lVar6 + 0x4c),*(undefined4 *)(lVar6 + 0x50),0);
  fStack0000000000000044 = param_2;
  FUN_05bce220();
  fStack0000000000000024 = fVar13 * fVar9;
  fVar3 = fStack0000000000000164;
  fVar20 = fStack0000000000000154;
  fStack0000000000000034 = in_stack_00000168;
  fStack000000000000003c = fStack0000000000000160;
  fStack0000000000000054 = fStack0000000000000150;
  fStack000000000000004c = in_stack_00000158;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar5 = FUN_04dddd54(fStack0000000000000024 + fStack0000000000000160,
                       fVar13 * fVar14 + fStack0000000000000164,fVar13 * fVar21 + in_stack_00000168,
                       fVar8 * fVar9 + fStack0000000000000150,
                       fVar8 * fVar14 + fStack0000000000000154,fVar8 * fVar21 + in_stack_00000158,
                       &stack0x00000118,*(undefined8 *)puVar2);
  fVar4 = fStack00000000000001b8;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fVar22 = fStack00000000000001b8;
  fVar15 = fStack00000000000001bc;
  fVar11 = (float)FUN_05bce430(in_stack_00000068._4_4_,uVar5,&stack0x00000100);
  fVar18 = in_stack_00000148;
  fVar17 = in_stack_00000138;
  fVar19 = fStack0000000000000140;
  fVar12 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar22;
  uVar5 = FUN_04dddd54(fStack0000000000000140 - fVar8 * fVar9,
                       fStack0000000000000144 - fVar8 * fVar14,in_stack_00000148 - fVar8 * fVar21,
                       fStack0000000000000130 - fStack0000000000000024,
                       fStack0000000000000134 - fVar13 * fVar14,in_stack_00000138 - fVar13 * fVar21,
                       &stack0x000000e8,*(undefined8 *)puVar2);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar13 = fVar4;
  fVar14 = fStack00000000000001bc;
  fStack0000000000000024 = (float)FUN_05bce430(in_stack_00000068._4_4_,uVar5,&stack0x000000d0);
  fVar23 = fStack0000000000000064 * param_3;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fVar10;
  in_stack_000000c8 = 0;
  fVar22 = fVar16 * fStack0000000000000044;
  fVar21 = fStack0000000000000064 * fStack0000000000000044;
  fStack000000000000001c = fVar14;
  uVar5 = FUN_04dddd54(fStack000000000000003c - fStack000000000000000c,fVar3 - fVar21,
                       fStack0000000000000034 - fVar23,fVar19 - fVar16 * fVar10,
                       fStack0000000000000014 - fVar22,fVar18 - fVar16 * param_3,&stack0x000000b8,
                       *(undefined8 *)puVar2);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar14 = fVar4;
  fVar8 = fStack00000000000001bc;
  fVar9 = (float)FUN_05bce430(in_stack_00000068._4_4_,uVar5,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  fStack0000000000000064 = fVar14;
  uVar5 = FUN_04dddd54(fVar16 * fVar10 + fStack0000000000000054,fVar22 + fVar20,
                       fVar16 * param_3 + fStack000000000000004c,fStack000000000000000c + fVar12,
                       fVar21 + fStack000000000000002c,fVar23 + fVar17,&stack0x00000088,
                       *(undefined8 *)puVar2);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar14 = fVar4;
  fVar16 = fStack00000000000001bc;
  fVar12 = (float)FUN_05bce430(in_stack_00000068._4_4_,uVar5,&stack0x00000070);
  fVar19 = (fVar16 - fStack00000000000001bc) * (fVar16 - fStack00000000000001bc) +
           (fVar12 - in_stack_00000068._4_4_) * (fVar12 - in_stack_00000068._4_4_) +
           (fVar14 - fVar4) * (fVar14 - fVar4);
  fVar17 = (fVar8 - fStack00000000000001bc) * (fVar8 - fStack00000000000001bc) +
           (fVar9 - in_stack_00000068._4_4_) * (fVar9 - in_stack_00000068._4_4_) +
           (fStack0000000000000064 - fVar4) * (fStack0000000000000064 - fVar4);
  fVar21 = fVar17;
  if (fVar19 <= fVar17) {
    fVar21 = fVar19;
  }
  fVar18 = (fStack000000000000001c - fStack00000000000001bc) *
           (fStack000000000000001c - fStack00000000000001bc) +
           (fStack0000000000000024 - in_stack_00000068._4_4_) *
           (fStack0000000000000024 - in_stack_00000068._4_4_) + (fVar13 - fVar4) * (fVar13 - fVar4);
  fVar20 = (fVar15 - fStack00000000000001bc) * (fVar15 - fStack00000000000001bc) +
           (fVar11 - in_stack_00000068._4_4_) * (fVar11 - in_stack_00000068._4_4_) +
           (fStack000000000000005c - fVar4) * (fStack000000000000005c - fVar4);
  fVar19 = fVar18;
  if (fVar21 <= fVar18) {
    fVar19 = fVar21;
  }
  fVar21 = fVar20;
  if (fVar19 <= fVar20) {
    fVar21 = fVar19;
  }
  if (fVar20 == fVar21) {
    uVar7 = 0;
    *unaff_x20 = fVar11;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar15;
  }
  else if (fVar18 == fVar21) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar13;
    uVar7 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar17 == fVar21) {
    *unaff_x20 = fVar9;
    unaff_x20[1] = fStack0000000000000064;
    uVar7 = 0x42b40000;
    unaff_x20[2] = fVar8;
  }
  else {
    *unaff_x20 = fVar12;
    unaff_x20[1] = fVar14;
    uVar7 = 0xc2b40000;
    unaff_x20[2] = fVar16;
  }
  *unaff_x19 = uVar7;
  return;
}


