/*
FUNCTION_NAME: OVRPlugin$$SetControllerDrivenHandPoses
ENTRY_POINT: 0600c478
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerDrivenHandPoses
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  float fStack0000000000000064;
  undefined8 in_stack_00000068;
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
  undefined8 in_stack_00000100;
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
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack000000000000017c;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  fStack0000000000000034 = (unaff_s14 * param_2 + param_5) - unaff_s13 * param_3;
  fStack0000000000000038 = (unaff_s12 * param_3 + param_7) - unaff_s14 * param_1;
  fStack000000000000003c =
       (unaff_s13 * param_1 + param_6 + unaff_s11 * param_3) - unaff_s12 * param_2;
  fStack0000000000000040 =
       ((unaff_s11 * param_4 - unaff_s12 * param_1) - unaff_s13 * param_2) - unaff_s14 * param_3;
  fVar4 = unaff_s10;
  fVar5 = unaff_s8;
  fVar6 = unaff_s9;
  fStack0000000000000170 = fStack0000000000000034;
  fStack0000000000000174 = fStack0000000000000038;
  fStack0000000000000178 = fStack000000000000003c;
  fStack000000000000017c = fStack0000000000000040;
  fVar3 = (float)FUN_06e460f8(0x42b40000,0);
  fStack000000000000001c =
       (unaff_s14 * fVar5 + unaff_s12 * fVar4 + unaff_s11 * fVar3) - unaff_s13 * fVar6;
  fStack0000000000000164 =
       (unaff_s12 * fVar6 + unaff_s13 * fVar4 + unaff_s11 * fVar5) - unaff_s14 * fVar3;
  fStack0000000000000024 =
       (unaff_s13 * fVar3 + unaff_s14 * fVar4 + unaff_s11 * fVar6) - unaff_s12 * fVar5;
  fStack000000000000016c =
       ((unaff_s11 * fVar4 - unaff_s12 * fVar3) - unaff_s13 * fVar5) - unaff_s14 * fVar6;
  in_stack_00000160 = fStack000000000000001c;
  in_stack_00000168 = fStack0000000000000024;
  fVar4 = (float)FUN_06e460f8(0xc2b40000,0);
  fStack000000000000000c =
       (unaff_s14 * unaff_s8 + unaff_s12 * unaff_s10 + unaff_s11 * fVar4) - unaff_s13 * unaff_s9;
  fStack0000000000000154 =
       (unaff_s12 * unaff_s9 + unaff_s13 * unaff_s10 + unaff_s11 * unaff_s8) - unaff_s14 * fVar4;
  fStack0000000000000014 =
       (unaff_s13 * fVar4 + unaff_s14 * unaff_s10 + unaff_s11 * unaff_s9) - unaff_s12 * unaff_s8;
  fStack000000000000015c =
       ((unaff_s11 * unaff_s10 - unaff_s12 * fVar4) - unaff_s13 * unaff_s8) - unaff_s14 * unaff_s9;
  in_stack_00000150 = fStack000000000000000c;
  in_stack_00000158 = fStack0000000000000014;
  fVar4 = (float)FUN_0600ca18(&stack0x00000180,&stack0x00000190);
  fStack0000000000000064 = (float)FUN_0600ca18(&stack0x00000170,&stack0x00000190);
  fVar5 = (float)FUN_0600ca18(&stack0x00000160,&stack0x00000190);
  fVar6 = (float)FUN_0600ca18(&stack0x00000150,&stack0x00000190);
  if (DAT_07a3fba3 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba3 = '\x01';
  }
  fStack000000000000004c = fStack00000000000001e8;
  fStack0000000000000044 = in_stack_00000068._4_4_;
  fVar3 = (float)FUN_06e464bc(fStack00000000000001ec,0);
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba6 = '\x01';
  }
  puVar1 = PTR_DAT_075dec28;
  fVar8 = fStack00000000000001e8;
  fStack00000000000001ec =
       (float)FUN_06e464bc(fStack00000000000001ec,fStack00000000000001e8,in_stack_00000068._4_4_,0);
  FUN_0600b480();
  fVar7 = fVar5;
  if (fVar5 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar7) {
    fVar6 = fVar7;
  }
  fVar7 = fVar4;
  if (fVar4 <= fVar6) {
    fVar7 = fVar6;
  }
  if (fVar4 == fVar7) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_05302338(fStack0000000000000050 * fVar3 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar3 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    FUN_0600b690(uStack000000000000005c,in_stack_00000060,uStack0000000000000058,uVar2,
                 &stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fStack0000000000000064 == fVar7) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_05302338(fStack0000000000000120 - fStack0000000000000054 * fVar3,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar3,
                           fStack0000000000000114 - fStack0000000000000050 * fStack000000000000004c,
                           in_stack_00000118 - fStack0000000000000050 * fStack0000000000000044,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = in_stack_00000100;
      FUN_0600b690(uStack000000000000005c,in_stack_00000060,uStack0000000000000058,uVar2,
                   &stack0x000000b0);
    }
    else {
      if (fVar5 != fVar7) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        uVar2 = FUN_05302338(in_stack_00000028._4_4_ * fStack00000000000001ec +
                             fStack0000000000000130,
                             in_stack_00000028._4_4_ * fVar8 + fStack0000000000000134,
                             in_stack_00000028._4_4_ * in_stack_00000068._4_4_ + in_stack_00000138,
                             in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                             in_stack_00000030 * fVar8 + fStack0000000000000114,
                             in_stack_00000030 * in_stack_00000068._4_4_ + in_stack_00000118,
                             &stack0x000000f0,*(undefined8 *)puVar1);
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000080 = in_stack_00000100;
        FUN_0600b690(uStack000000000000005c,in_stack_00000060,uStack0000000000000058,uVar2,
                     &stack0x00000070);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 3) = 0;
        goto LAB_0600c948;
      }
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_05302338(fStack0000000000000140 - in_stack_00000030 * fStack00000000000001ec,
                           fStack0000000000000144 - in_stack_00000030 * fVar8,
                           in_stack_00000148 - in_stack_00000030 * in_stack_00000068._4_4_,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 - in_stack_00000028._4_4_ * fVar8,
                           in_stack_00000128 - in_stack_00000028._4_4_ * in_stack_00000068._4_4_,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = in_stack_00000100;
      FUN_0600b690(uStack000000000000005c,in_stack_00000060,uStack0000000000000058,uVar2,
                   &stack0x00000090);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
LAB_0600c948:
  FUN_06e67e1c();
  return;
}


