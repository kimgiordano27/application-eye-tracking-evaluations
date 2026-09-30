/*
FUNCTION_NAME: OVRPlugin$$SetWideMotionModeHandPoses
ENTRY_POINT: 0531d4a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__SetWideMotionModeHandPoses(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined8 *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack000000000000005c;
  undefined8 in_stack_00000060;
  float fStack0000000000000068;
  float fStack000000000000006c;
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
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float in_stack_00000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float in_stack_00000148;
  float fStack00000000000001b8;
  float fStack00000000000001bc;
  
  fVar16 = fStack00000000000001b8;
  uStack0000000000000108 = in_stack_00000120;
  uStack0000000000000100 = in_stack_00000118;
  uStack0000000000000110 = in_stack_00000128;
  fVar7 = fStack00000000000001b8;
  fVar10 = fStack00000000000001bc;
  fVar3 = (float)FUN_0531cb64(fStack000000000000006c,param_1,&stack0x00000100);
  fVar12 = in_stack_00000148;
  fVar8 = fStack0000000000000140;
  fVar13 = in_stack_00000138;
  fVar9 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar7;
  uVar1 = FUN_045a8fac(fStack0000000000000140 - unaff_s9,fStack0000000000000144 - unaff_s10,
                       in_stack_00000148 - unaff_s11,
                       fStack0000000000000130 - in_stack_00000020._4_4_,
                       fStack0000000000000134 - unaff_s13,in_stack_00000138 - unaff_s15,
                       &stack0x000000e8,*unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar7 = fVar16;
  fVar11 = fStack00000000000001bc;
  fVar4 = (float)FUN_0531cb64(fStack000000000000006c,uVar1,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = in_stack_00000060._4_4_ * fStack0000000000000048;
  in_stack_000000c8 = 0;
  fStack000000000000001c = fVar11;
  uVar1 = FUN_045a8fac(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000038 - in_stack_00000060._4_4_ * fStack0000000000000044,
                       in_stack_00000030._4_4_ - in_stack_00000060._4_4_ * fStack0000000000000040,
                       fVar8 - fStack0000000000000068 * fStack0000000000000048,
                       fStack0000000000000014 - fStack0000000000000068 * fStack0000000000000044,
                       fVar12 - fStack0000000000000068 * fStack0000000000000040,&stack0x000000b8,
                       *unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar8 = fVar16;
  fVar12 = fStack00000000000001bc;
  fVar5 = (float)FUN_0531cb64(fStack000000000000006c,uVar1,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  uVar1 = FUN_045a8fac(fStack0000000000000068 * fStack0000000000000048 + fStack0000000000000054,
                       fStack0000000000000068 * fStack0000000000000044 + fStack0000000000000050,
                       fStack0000000000000068 * fStack0000000000000040 + fStack000000000000004c,
                       fStack000000000000000c + fVar9,
                       in_stack_00000060._4_4_ * fStack0000000000000044 + fStack000000000000002c,
                       in_stack_00000060._4_4_ * fStack0000000000000040 + fVar13,&stack0x00000088,
                       *unaff_x23);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar9 = fVar16;
  fVar13 = fStack00000000000001bc;
  fVar6 = (float)FUN_0531cb64(fStack000000000000006c,uVar1,&stack0x00000070);
  fVar15 = (fVar13 - fStack00000000000001bc) * (fVar13 - fStack00000000000001bc) +
           (fVar6 - fStack000000000000006c) * (fVar6 - fStack000000000000006c) +
           (fVar9 - fVar16) * (fVar9 - fVar16);
  fVar14 = (fVar12 - fStack00000000000001bc) * (fVar12 - fStack00000000000001bc) +
           (fVar5 - fStack000000000000006c) * (fVar5 - fStack000000000000006c) +
           (fVar8 - fVar16) * (fVar8 - fVar16);
  fVar11 = fVar14;
  if (fVar15 <= fVar14) {
    fVar11 = fVar15;
  }
  fVar15 = (fStack000000000000001c - fStack00000000000001bc) *
           (fStack000000000000001c - fStack00000000000001bc) +
           (fVar4 - fStack000000000000006c) * (fVar4 - fStack000000000000006c) +
           (fVar7 - fVar16) * (fVar7 - fVar16);
  fVar17 = (fVar10 - fStack00000000000001bc) * (fVar10 - fStack00000000000001bc) +
           (fVar3 - fStack000000000000006c) * (fVar3 - fStack000000000000006c) +
           (fStack000000000000005c - fVar16) * (fStack000000000000005c - fVar16);
  fVar16 = fVar15;
  if (fVar11 <= fVar15) {
    fVar16 = fVar11;
  }
  fVar11 = fVar17;
  if (fVar16 <= fVar17) {
    fVar11 = fVar16;
  }
  if (fVar17 == fVar11) {
    uVar2 = 0;
    *unaff_x20 = fVar3;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar10;
  }
  else if (fVar15 == fVar11) {
    *unaff_x20 = fVar4;
    unaff_x20[1] = fVar7;
    uVar2 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar14 == fVar11) {
    *unaff_x20 = fVar5;
    unaff_x20[1] = fVar8;
    uVar2 = 0x42b40000;
    unaff_x20[2] = fVar12;
  }
  else {
    *unaff_x20 = fVar6;
    unaff_x20[1] = fVar9;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar13;
  }
  *unaff_x19 = uVar2;
  return;
}


