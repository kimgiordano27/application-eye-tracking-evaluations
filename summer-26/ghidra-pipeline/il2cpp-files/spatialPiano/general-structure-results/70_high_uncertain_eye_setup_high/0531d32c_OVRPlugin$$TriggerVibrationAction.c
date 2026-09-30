/*
FUNCTION_NAME: OVRPlugin$$TriggerVibrationAction
ENTRY_POINT: 0531d32c
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


void OVRPlugin__TriggerVibrationAction
               (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  float *unaff_x20;
  undefined4 uVar5;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  float fStack0000000000000138;
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
  
  fStack0000000000000138 = 0.0;
  _fStack0000000000000130 = 0;
  uVar5 = FUN_0531c234();
  fVar11 = param_2;
  fVar12 = param_3;
  fVar14 = param_4;
  fVar6 = (float)FUN_0531c0d8();
  fStack0000000000000064 = fVar12;
  if (DAT_06bb8999 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb8999 = '\x01';
  }
  puVar2 = PTR_DAT_067d1b00;
  puVar1 = PTR_DAT_067c8f78;
  lVar4 = *(long *)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar12 = param_2;
  fVar19 = param_3;
  fVar7 = (float)FUN_060dfb18(uVar5,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x3c),
                              *(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_06bb42c5 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c5 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar8 = (float)FUN_060dfb18(uVar5,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  fStack0000000000000044 = param_2;
  FUN_0531c954();
  fStack0000000000000024 = fVar11 * fVar7;
  fStack0000000000000034 = in_stack_00000168;
  fStack000000000000003c = fStack0000000000000160;
  fStack0000000000000054 = fStack0000000000000150;
  fStack000000000000004c = in_stack_00000158;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar3 = FUN_045a8fac(fStack0000000000000024 + fStack0000000000000160,
                       fVar11 * fVar12 + fStack0000000000000164,fVar11 * fVar19 + in_stack_00000168,
                       fVar6 * fVar7 + fStack0000000000000150,
                       fVar6 * fVar12 + fStack0000000000000154,fVar6 * fVar19 + in_stack_00000158,
                       &stack0x00000118,*(undefined8 *)puVar2);
  fVar18 = fStack00000000000001b8;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fVar20 = fStack00000000000001b8;
  fVar13 = fStack00000000000001bc;
  fVar9 = (float)FUN_0531cb64(in_stack_00000068._4_4_,uVar3,&stack0x00000100);
  fVar16 = in_stack_00000148;
  fVar17 = fStack0000000000000140;
  fVar15 = fStack0000000000000138;
  fVar10 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar20;
  uVar3 = FUN_045a8fac(fStack0000000000000140 - fVar6 * fVar7,
                       fStack0000000000000144 - fVar6 * fVar12,in_stack_00000148 - fVar6 * fVar19,
                       fStack0000000000000130 - fStack0000000000000024,
                       fStack0000000000000134 - fVar11 * fVar12,
                       fStack0000000000000138 - fVar11 * fVar19,&stack0x000000e8,
                       *(undefined8 *)puVar2);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar11 = fVar18;
  fVar12 = fStack00000000000001bc;
  fStack0000000000000024 = (float)FUN_0531cb64(in_stack_00000068._4_4_,uVar3,&stack0x000000d0);
  fVar21 = fStack0000000000000064 * param_3;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fVar8;
  in_stack_000000c8 = 0;
  fVar20 = fVar14 * fStack0000000000000044;
  fVar19 = fStack0000000000000064 * fStack0000000000000044;
  fStack000000000000001c = fVar12;
  uVar3 = FUN_045a8fac(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000164 - fVar19,fStack0000000000000034 - fVar21,
                       fVar17 - fVar14 * fVar8,fStack0000000000000014 - fVar20,
                       fVar16 - fVar14 * param_3,&stack0x000000b8,*(undefined8 *)puVar2);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar12 = fVar18;
  fVar6 = fStack00000000000001bc;
  fVar7 = (float)FUN_0531cb64(in_stack_00000068._4_4_,uVar3,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  fStack0000000000000064 = fVar12;
  uVar3 = FUN_045a8fac(fVar14 * fVar8 + fStack0000000000000054,fVar20 + fStack0000000000000154,
                       fVar14 * param_3 + fStack000000000000004c,fStack000000000000000c + fVar10,
                       fVar19 + fStack000000000000002c,fVar21 + fVar15,&stack0x00000088,
                       *(undefined8 *)puVar2);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar12 = fVar18;
  fVar14 = fStack00000000000001bc;
  fVar10 = (float)FUN_0531cb64(in_stack_00000068._4_4_,uVar3,&stack0x00000070);
  fVar17 = (fVar14 - fStack00000000000001bc) * (fVar14 - fStack00000000000001bc) +
           (fVar10 - in_stack_00000068._4_4_) * (fVar10 - in_stack_00000068._4_4_) +
           (fVar12 - fVar18) * (fVar12 - fVar18);
  fVar15 = (fVar6 - fStack00000000000001bc) * (fVar6 - fStack00000000000001bc) +
           (fVar7 - in_stack_00000068._4_4_) * (fVar7 - in_stack_00000068._4_4_) +
           (fStack0000000000000064 - fVar18) * (fStack0000000000000064 - fVar18);
  fVar19 = fVar15;
  if (fVar17 <= fVar15) {
    fVar19 = fVar17;
  }
  fVar16 = (fStack000000000000001c - fStack00000000000001bc) *
           (fStack000000000000001c - fStack00000000000001bc) +
           (fStack0000000000000024 - in_stack_00000068._4_4_) *
           (fStack0000000000000024 - in_stack_00000068._4_4_) +
           (fVar11 - fVar18) * (fVar11 - fVar18);
  fVar18 = (fVar13 - fStack00000000000001bc) * (fVar13 - fStack00000000000001bc) +
           (fVar9 - in_stack_00000068._4_4_) * (fVar9 - in_stack_00000068._4_4_) +
           (fStack000000000000005c - fVar18) * (fStack000000000000005c - fVar18);
  fVar17 = fVar16;
  if (fVar19 <= fVar16) {
    fVar17 = fVar19;
  }
  fVar19 = fVar18;
  if (fVar17 <= fVar18) {
    fVar19 = fVar17;
  }
  if (fVar18 == fVar19) {
    uVar5 = 0;
    *unaff_x20 = fVar9;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar13;
  }
  else if (fVar16 == fVar19) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar11;
    uVar5 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar15 == fVar19) {
    *unaff_x20 = fVar7;
    unaff_x20[1] = fStack0000000000000064;
    uVar5 = 0x42b40000;
    unaff_x20[2] = fVar6;
  }
  else {
    *unaff_x20 = fVar10;
    unaff_x20[1] = fVar12;
    uVar5 = 0xc2b40000;
    unaff_x20[2] = fVar14;
  }
  *unaff_x19 = uVar5;
  return;
}


