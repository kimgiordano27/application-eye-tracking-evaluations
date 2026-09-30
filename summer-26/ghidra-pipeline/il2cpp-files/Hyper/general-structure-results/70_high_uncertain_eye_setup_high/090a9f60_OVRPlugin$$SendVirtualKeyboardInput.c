/*
FUNCTION_NAME: OVRPlugin$$SendVirtualKeyboardInput
ENTRY_POINT: 090a9f60
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


void OVRPlugin__SendVirtualKeyboardInput(float param_1,float param_2,float param_3)

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
  float unaff_s11;
  float fVar14;
  float unaff_s12;
  float unaff_s14;
  float unaff_s15;
  float fVar15;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
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
  
  fStack0000000000000040 = param_3;
  fStack0000000000000044 = param_2;
  fStack0000000000000048 = param_1;
  FUN_090a94a4();
  fStack0000000000000024 = unaff_s15 * unaff_s12;
  fStack0000000000000034 = in_stack_00000168;
  fStack000000000000003c = fStack0000000000000160;
  fStack0000000000000054 = fStack0000000000000150;
  fStack000000000000004c = in_stack_00000158;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar1 = FUN_07ad77dc(fStack0000000000000024 + fStack0000000000000160,
                       unaff_s15 * unaff_s14 + fStack0000000000000164,
                       unaff_s15 * unaff_s11 + in_stack_00000168,
                       fStack0000000000000060 * unaff_s12 + fStack0000000000000150,
                       fStack0000000000000060 * unaff_s14 + fStack0000000000000154,
                       fStack0000000000000060 * unaff_s11 + in_stack_00000158,&stack0x00000118,
                       *unaff_x23);
  fVar11 = fStack00000000000001b8;
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fVar5 = fStack00000000000001b8;
  fVar8 = fStack00000000000001bc;
  fVar3 = (float)FUN_090a96b4(fStack000000000000006c,uVar1,&stack0x00000100);
  fVar9 = in_stack_00000148;
  fVar6 = fStack0000000000000140;
  fVar10 = in_stack_00000138;
  fVar7 = fStack0000000000000130;
  fStack0000000000000014 = fStack0000000000000144;
  fStack000000000000002c = fStack0000000000000134;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fStack000000000000005c = fVar5;
  uVar1 = FUN_07ad77dc(fStack0000000000000140 - fStack0000000000000060 * unaff_s12,
                       fStack0000000000000144 - fStack0000000000000060 * unaff_s14,
                       in_stack_00000148 - fStack0000000000000060 * unaff_s11,
                       fStack0000000000000130 - fStack0000000000000024,
                       fStack0000000000000134 - unaff_s15 * unaff_s14,
                       in_stack_00000138 - unaff_s15 * unaff_s11,&stack0x000000e8,*unaff_x23);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar5 = fVar11;
  fVar4 = fStack00000000000001bc;
  fStack0000000000000024 = (float)FUN_090a96b4(fStack000000000000006c,uVar1,&stack0x000000d0);
  fVar14 = fStack0000000000000068 * fStack0000000000000040;
  fVar15 = fStack0000000000000064 * fStack0000000000000040;
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  fStack000000000000000c = fStack0000000000000064 * fStack0000000000000048;
  fVar13 = fStack0000000000000068 * fStack0000000000000048;
  in_stack_000000c8 = 0;
  fStack0000000000000068 = fStack0000000000000068 * fStack0000000000000044;
  fStack0000000000000064 = fStack0000000000000064 * fStack0000000000000044;
  fStack000000000000001c = fVar4;
  uVar1 = FUN_07ad77dc(fStack000000000000003c - fStack000000000000000c,
                       fStack0000000000000164 - fStack0000000000000064,
                       fStack0000000000000034 - fVar15,fVar6 - fVar13,
                       fStack0000000000000014 - fStack0000000000000068,fVar9 - fVar14,
                       &stack0x000000b8,*unaff_x23);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar6 = fVar11;
  fVar9 = fStack00000000000001bc;
  fVar4 = (float)FUN_090a96b4(fStack000000000000006c,uVar1,&stack0x000000a0);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  fStack0000000000000048 = fVar9;
  uVar1 = FUN_07ad77dc(fVar13 + fStack0000000000000054,
                       fStack0000000000000068 + fStack0000000000000154,
                       fVar14 + fStack000000000000004c,fStack000000000000000c + fVar7,
                       fStack0000000000000064 + fStack000000000000002c,fVar15 + fVar10,
                       &stack0x00000088,*unaff_x23);
  in_stack_00000078 = in_stack_00000090;
  in_stack_00000070 = in_stack_00000088;
  in_stack_00000080 = in_stack_00000098;
  fVar7 = fVar11;
  fVar10 = fStack00000000000001bc;
  fVar13 = (float)FUN_090a96b4(fStack000000000000006c,uVar1,&stack0x00000070);
  fVar15 = (fVar10 - fStack00000000000001bc) * (fVar10 - fStack00000000000001bc) +
           (fVar13 - fStack000000000000006c) * (fVar13 - fStack000000000000006c) +
           (fVar7 - fVar11) * (fVar7 - fVar11);
  fVar14 = (fStack0000000000000048 - fStack00000000000001bc) *
           (fStack0000000000000048 - fStack00000000000001bc) +
           (fVar4 - fStack000000000000006c) * (fVar4 - fStack000000000000006c) +
           (fVar6 - fVar11) * (fVar6 - fVar11);
  fVar9 = fVar14;
  if (fVar15 <= fVar14) {
    fVar9 = fVar15;
  }
  fVar15 = (fStack000000000000001c - fStack00000000000001bc) *
           (fStack000000000000001c - fStack00000000000001bc) +
           (fStack0000000000000024 - fStack000000000000006c) *
           (fStack0000000000000024 - fStack000000000000006c) + (fVar5 - fVar11) * (fVar5 - fVar11);
  fVar12 = (fVar8 - fStack00000000000001bc) * (fVar8 - fStack00000000000001bc) +
           (fVar3 - fStack000000000000006c) * (fVar3 - fStack000000000000006c) +
           (fStack000000000000005c - fVar11) * (fStack000000000000005c - fVar11);
  fVar11 = fVar15;
  if (fVar9 <= fVar15) {
    fVar11 = fVar9;
  }
  fVar9 = fVar12;
  if (fVar11 <= fVar12) {
    fVar9 = fVar11;
  }
  if (fVar12 == fVar9) {
    uVar2 = 0;
    *unaff_x20 = fVar3;
    unaff_x20[1] = fStack000000000000005c;
    unaff_x20[2] = fVar8;
  }
  else if (fVar15 == fVar9) {
    *unaff_x20 = fStack0000000000000024;
    unaff_x20[1] = fVar5;
    uVar2 = 0x43340000;
    unaff_x20[2] = fStack000000000000001c;
  }
  else if (fVar14 == fVar9) {
    *unaff_x20 = fVar4;
    unaff_x20[1] = fVar6;
    uVar2 = 0x42b40000;
    unaff_x20[2] = fStack0000000000000048;
  }
  else {
    *unaff_x20 = fVar13;
    unaff_x20[1] = fVar7;
    uVar2 = 0xc2b40000;
    unaff_x20[2] = fVar10;
  }
  *unaff_x19 = uVar2;
  return;
}


