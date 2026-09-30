/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 0600c610
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled
               (undefined1 param_1 [16],undefined4 param_2,float param_3,float param_4,
               undefined4 param_5,undefined1 param_6 [16],undefined1 param_7 [16],undefined4 param_8
               )

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
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  float fStack0000000000000018;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
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
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  undefined4 uStack0000000000000158;
  float fStack000000000000015c;
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  fStack0000000000000018 = param_4 - param_3;
  uStack000000000000000c = param_8;
  uStack0000000000000010 = param_5;
  uStack0000000000000014 = param_2;
  uStack0000000000000150 = param_8;
  uStack0000000000000154 = param_5;
  uStack0000000000000158 = param_2;
  fStack000000000000015c = fStack0000000000000018;
  fVar3 = (float)FUN_0600ca18(&stack0x00000180,&stack0x00000190);
  fStack0000000000000064 = (float)FUN_0600ca18(&stack0x00000170,&stack0x00000190);
  fVar4 = (float)FUN_0600ca18(&stack0x00000160,&stack0x00000190);
  fVar5 = (float)FUN_0600ca18(&stack0x00000150,&stack0x00000190);
  if (DAT_07a3fba3 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba3 = '\x01';
  }
  fVar7 = fStack00000000000001e8;
  fVar8 = in_stack_00000068._4_4_;
  fVar6 = (float)FUN_06e464bc(fStack00000000000001ec,0);
  fStack0000000000000044 = fVar8;
  fStack000000000000004c = fVar7;
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba6 = '\x01';
  }
  puVar1 = PTR_DAT_075dec28;
  fVar7 = fStack00000000000001e8;
  fStack00000000000001ec =
       (float)FUN_06e464bc(fStack00000000000001ec,fStack00000000000001e8,in_stack_00000068._4_4_,0);
  FUN_0600b480();
  fVar8 = fVar4;
  if (fVar4 <= fVar5) {
    fVar8 = fVar5;
  }
  fVar5 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar8) {
    fVar5 = fVar8;
  }
  fVar8 = fVar3;
  if (fVar3 <= fVar5) {
    fVar8 = fVar5;
  }
  if (fVar3 == fVar8) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_05302338(fStack0000000000000050 * fVar6 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar6 + fStack0000000000000130,
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
    if (fStack0000000000000064 == fVar8) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_05302338(fStack0000000000000120 - fStack0000000000000054 * fVar6,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar6,
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
      if (fVar4 != fVar8) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        uVar2 = FUN_05302338(in_stack_00000028._4_4_ * fStack00000000000001ec +
                             fStack0000000000000130,
                             in_stack_00000028._4_4_ * fVar7 + fStack0000000000000134,
                             in_stack_00000028._4_4_ * in_stack_00000068._4_4_ + in_stack_00000138,
                             in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                             in_stack_00000030 * fVar7 + fStack0000000000000114,
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
                           fStack0000000000000144 - in_stack_00000030 * fVar7,
                           in_stack_00000148 - in_stack_00000030 * in_stack_00000068._4_4_,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 - in_stack_00000028._4_4_ * fVar7,
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


