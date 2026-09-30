/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 07a36f88
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetControllerState4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  undefined4 uVar3;
  undefined4 *unaff_x19;
  float *unaff_x20;
  long unaff_x23;
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
  undefined4 unaff_s9;
  float unaff_s10;
  float unaff_s13;
  float unaff_s15;
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
  float fStack0000000000000060;
  float fStack0000000000000064;
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
  
  if (in_w8 == 0) {
    FUN_04077588(PTR_DAT_09285d60);
    *(undefined1 *)(unaff_x23 + 0x4ea) = 1;
  }
  puVar1 = PTR_DAT_0928f3a8;
  fVar9 = unaff_s10;
  fVar10 = unaff_s13;
  fVar4 = (float)FUN_089b9694(unaff_s9,0);
  if (DAT_098854ec == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ec = '\x01';
  }
  fVar5 = (float)FUN_089b9694(unaff_s9,0);
  fStack0000000000000044 = unaff_s10;
  FUN_07a36574();
  fStack0000000000000024 = unaff_s15 * fVar4;
  fStack0000000000000034 = in_stack_00000168;
  fStack000000000000003c = fStack0000000000000160;
  fStack0000000000000054 = fStack0000000000000150;
  fStack000000000000004c = in_stack_00000158;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar2 = FUN_068cd8bc(fStack0000000000000024 + fStack0000000000000160,
                       unaff_s15 * fVar9 + fStack0000000000000164,
                       unaff_s15 * fVar10 + in_stack_00000168,
                       fStack0000000000000060 * fVar4 + fStack0000000000000150,
                       fStack0000000000000060 * fVar9 + fStack0000000000000154,
                       fStack0000000000000060 * fVar10 + in_stack_00000158,&stack0x00000118,
                       *(undefined8 *)puVar1);
  fVar15 = fStack00000000000001b8;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fVar8 = fStack00000000000001b8;
  fVar11 = fStack00000000000001bc;
  fVar6 = (float)FUN_07a36784(fStack000000000000006c,uVar2,&stack0x00000100);
  fVar7 = in_stack_00000148;
  fVar12 = fStack0000000000000140;
  fVar16 = in_stack_00000138;
  fVar13 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar8;
  uVar2 = FUN_068cd8bc(fStack0000000000000140 - fStack0000000000000060 * fVar4,
                       fStack0000000000000144 - fStack0000000000000060 * fVar9,
                       in_stack_00000148 - fStack0000000000000060 * fVar10,
                       fStack0000000000000130 - fStack0000000000000024,
                       fStack0000000000000134 - unaff_s15 * fVar9,
                       in_stack_00000138 - unaff_s15 * fVar10,&stack0x000000e8,*(undefined8 *)puVar1
                      );
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar9 = fVar15;
  fVar10 = fStack00000000000001bc;
  fStack0000000000000024 = (float)FUN_07a36784(fStack000000000000006c,uVar2,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fVar5;
  in_stack_000000c8 = 0;
  fStack000000000000001c = fVar10;
  uVar2 = FUN_068cd8bc(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000164 - fStack0000000000000064 * fStack0000000000000044,
                       fStack0000000000000034 - fStack0000000000000064 * unaff_s13,
                       fVar12 - fStack0000000000000068 * fVar5,
                       fStack0000000000000014 - fStack0000000000000068 * fStack0000000000000044,
                       fVar7 - fStack0000000000000068 * unaff_s13,&stack0x000000b8,
                       *(undefined8 *)puVar1);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar10 = fVar15;
  fVar12 = fStack00000000000001bc;
  fVar7 = (float)FUN_07a36784(fStack000000000000006c,uVar2,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  uVar2 = FUN_068cd8bc(fStack0000000000000068 * fVar5 + fStack0000000000000054,
                       fStack0000000000000068 * fStack0000000000000044 + fStack0000000000000154,
                       fStack0000000000000068 * unaff_s13 + fStack000000000000004c,
                       fStack000000000000000c + fVar13,
                       fStack0000000000000064 * fStack0000000000000044 + fStack000000000000002c,
                       fStack0000000000000064 * unaff_s13 + fVar16,&stack0x00000088,
                       *(undefined8 *)puVar1);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar4 = fVar15;
  fVar13 = fStack00000000000001bc;
  fVar8 = (float)FUN_07a36784(fStack000000000000006c,uVar2,&stack0x00000070);
  fVar14 = (fVar13 - fStack00000000000001bc) * (fVar13 - fStack00000000000001bc) +
           (fVar8 - fStack000000000000006c) * (fVar8 - fStack000000000000006c) +
           (fVar4 - fVar15) * (fVar4 - fVar15);
  fVar5 = (fVar12 - fStack00000000000001bc) * (fVar12 - fStack00000000000001bc) +
          (fVar7 - fStack000000000000006c) * (fVar7 - fStack000000000000006c) +
          (fVar10 - fVar15) * (fVar10 - fVar15);
  fVar16 = fVar5;
  if (fVar14 <= fVar5) {
    fVar16 = fVar14;
  }
  fVar14 = (fStack000000000000001c - fStack00000000000001bc) *
           (fStack000000000000001c - fStack00000000000001bc) +
           (fStack0000000000000024 - fStack000000000000006c) *
           (fStack0000000000000024 - fStack000000000000006c) + (fVar9 - fVar15) * (fVar9 - fVar15);
  fVar17 = (fVar11 - fStack00000000000001bc) * (fVar11 - fStack00000000000001bc) +
           (fVar6 - fStack000000000000006c) * (fVar6 - fStack000000000000006c) +
           (fStack000000000000005c - fVar15) * (fStack000000000000005c - fVar15);
  fVar15 = fVar14;
  if (fVar16 <= fVar14) {
    fVar15 = fVar16;
  }
  fVar16 = fVar17;
  if (fVar15 <= fVar17) {
    fVar16 = fVar15;
  }
  if (fVar17 == fVar16) {
    uVar3 = 0;
    *unaff_x20 = fVar6;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar11;
  }
  else if (fVar14 == fVar16) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar9;
    uVar3 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar5 == fVar16) {
    *unaff_x20 = fVar7;
    unaff_x20[1] = fVar10;
    uVar3 = 0x42b40000;
    unaff_x20[2] = fVar12;
  }
  else {
    *unaff_x20 = fVar8;
    unaff_x20[1] = fVar4;
    uVar3 = 0xc2b40000;
    unaff_x20[2] = fVar13;
  }
  *unaff_x19 = uVar3;
  return;
}


