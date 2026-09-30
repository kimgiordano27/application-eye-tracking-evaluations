/*
FUNCTION_NAME: OVRPlugin$$DestroyVirtualKeyboard
ENTRY_POINT: 090a9ea4
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyVirtualKeyboard(float param_1,float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_x19;
  float *unaff_x20;
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
  undefined4 unaff_s9;
  float unaff_s10;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s13;
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
  
  fStack0000000000000060 = param_1;
  fStack0000000000000064 = param_3;
  if (DAT_0b32c76f == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32c76f = '\x01';
  }
  puVar1 = PTR_DAT_0ac59328;
  fVar8 = unaff_s10;
  fVar9 = unaff_s13;
  fVar4 = (float)FUN_0a16adac(unaff_s9,0);
  if (DAT_0b32d23b == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
    DAT_0b32d23b = '\x01';
  }
  fVar5 = (float)FUN_0a16adac(unaff_s9,0);
  fStack0000000000000044 = unaff_s10;
  FUN_090a94a4();
  fStack0000000000000024 = param_2 * fVar4;
  fVar4 = fStack0000000000000060 * fVar4;
  fVar14 = fStack0000000000000060 * fVar8;
  fVar16 = fStack0000000000000060 * fVar9;
  fStack0000000000000034 = in_stack_00000168;
  fStack000000000000003c = fStack0000000000000160;
  fStack0000000000000054 = fStack0000000000000150;
  fStack000000000000004c = in_stack_00000158;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar2 = FUN_07ad77dc(fStack0000000000000024 + fStack0000000000000160,
                       param_2 * fVar8 + fStack0000000000000164,param_2 * fVar9 + in_stack_00000168,
                       fVar4 + fStack0000000000000150,fVar14 + fStack0000000000000154,
                       fVar16 + in_stack_00000158,&stack0x00000118,*(undefined8 *)puVar1);
  fVar12 = fStack00000000000001b8;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fVar15 = fStack00000000000001b8;
  fVar10 = fStack00000000000001bc;
  fStack0000000000000060 = (float)FUN_090a96b4(in_stack_00000068._4_4_,uVar2,&stack0x00000100);
  fVar7 = in_stack_00000148;
  fVar6 = fStack0000000000000140;
  fVar13 = in_stack_00000138;
  fVar11 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar15;
  uVar2 = FUN_07ad77dc(fStack0000000000000140 - fVar4,fStack0000000000000144 - fVar14,
                       in_stack_00000148 - fVar16,fStack0000000000000130 - fStack0000000000000024,
                       fStack0000000000000134 - param_2 * fVar8,in_stack_00000138 - param_2 * fVar9,
                       &stack0x000000e8,*(undefined8 *)puVar1);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar8 = fVar12;
  fVar9 = fStack00000000000001bc;
  fStack0000000000000024 = (float)FUN_090a96b4(in_stack_00000068._4_4_,uVar2,&stack0x000000d0);
  fVar14 = fStack0000000000000064 * unaff_s13;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fVar5;
  in_stack_000000c8 = 0;
  fVar15 = fStack0000000000000064 * fStack0000000000000044;
  fStack000000000000001c = fVar9;
  uVar2 = FUN_07ad77dc(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000164 - fVar15,fStack0000000000000034 - fVar14,
                       fVar6 - param_4 * fVar5,
                       fStack0000000000000014 - param_4 * fStack0000000000000044,
                       fVar7 - param_4 * unaff_s13,&stack0x000000b8,*(undefined8 *)puVar1);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar9 = fVar12;
  fVar4 = fStack00000000000001bc;
  fVar6 = (float)FUN_090a96b4(in_stack_00000068._4_4_,uVar2,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  fStack0000000000000064 = fVar9;
  uVar2 = FUN_07ad77dc(param_4 * fVar5 + fStack0000000000000054,
                       param_4 * fStack0000000000000044 + fStack0000000000000154,
                       param_4 * unaff_s13 + fStack000000000000004c,fStack000000000000000c + fVar11,
                       fVar15 + fStack000000000000002c,fVar14 + fVar13,&stack0x00000088,
                       *(undefined8 *)puVar1);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar9 = fVar12;
  fVar11 = fStack00000000000001bc;
  fVar7 = (float)FUN_090a96b4(in_stack_00000068._4_4_,uVar2,&stack0x00000070);
  fVar5 = (fVar11 - fStack00000000000001bc) * (fVar11 - fStack00000000000001bc) +
          (fVar7 - in_stack_00000068._4_4_) * (fVar7 - in_stack_00000068._4_4_) +
          (fVar9 - fVar12) * (fVar9 - fVar12);
  fVar15 = (fVar4 - fStack00000000000001bc) * (fVar4 - fStack00000000000001bc) +
           (fVar6 - in_stack_00000068._4_4_) * (fVar6 - in_stack_00000068._4_4_) +
           (fStack0000000000000064 - fVar12) * (fStack0000000000000064 - fVar12);
  fVar13 = fVar15;
  if (fVar5 <= fVar15) {
    fVar13 = fVar5;
  }
  fVar5 = (fStack000000000000001c - fStack00000000000001bc) *
          (fStack000000000000001c - fStack00000000000001bc) +
          (fStack0000000000000024 - in_stack_00000068._4_4_) *
          (fStack0000000000000024 - in_stack_00000068._4_4_) + (fVar8 - fVar12) * (fVar8 - fVar12);
  fVar14 = (fVar10 - fStack00000000000001bc) * (fVar10 - fStack00000000000001bc) +
           (fStack0000000000000060 - in_stack_00000068._4_4_) *
           (fStack0000000000000060 - in_stack_00000068._4_4_) +
           (fStack000000000000005c - fVar12) * (fStack000000000000005c - fVar12);
  fVar12 = fVar5;
  if (fVar13 <= fVar5) {
    fVar12 = fVar13;
  }
  fVar13 = fVar14;
  if (fVar12 <= fVar14) {
    fVar13 = fVar12;
  }
  if (fVar14 == fVar13) {
    uVar3 = 0;
    *unaff_x20 = fStack0000000000000060;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar10;
  }
  else if (fVar5 == fVar13) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar8;
    uVar3 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar15 == fVar13) {
    *unaff_x20 = fVar6;
    unaff_x20[1] = fStack0000000000000064;
    uVar3 = 0x42b40000;
    unaff_x20[2] = fVar4;
  }
  else {
    *unaff_x20 = fVar7;
    unaff_x20[1] = fVar9;
    uVar3 = 0xc2b40000;
    unaff_x20[2] = fVar11;
  }
  *unaff_x19 = uVar3;
  return;
}


