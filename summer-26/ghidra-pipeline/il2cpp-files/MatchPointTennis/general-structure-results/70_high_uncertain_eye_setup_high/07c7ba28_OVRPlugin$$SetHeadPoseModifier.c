/*
FUNCTION_NAME: OVRPlugin$$SetHeadPoseModifier
ENTRY_POINT: 07c7ba28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetHeadPoseModifier(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s10;
  undefined8 in_stack_00000028;
  float in_stack_00000030;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
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
  float fStack00000000000001e8;
  float fStack00000000000001ec;
  
  fVar3 = (float)FUN_09516eb8(0);
  fStack0000000000000044 = param_3;
  fStack000000000000004c = param_2;
  if (DAT_0a51bf41 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf41 = '\x01';
  }
  puVar1 = PTR_DAT_09f370c8;
  fVar6 = fStack00000000000001e8;
  fStack00000000000001ec =
       (float)FUN_09516eb8(fStack00000000000001ec,fStack00000000000001e8,fStack000000000000006c,0);
  FUN_07c7a804();
  fVar4 = fStack0000000000000068;
  if (fStack0000000000000068 <= unaff_s10) {
    fVar4 = unaff_s10;
  }
  fVar5 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar4) {
    fVar5 = fVar4;
  }
  fVar4 = unaff_s8;
  if (unaff_s8 <= fVar5) {
    fVar4 = fVar5;
  }
  if (unaff_s8 == fVar4) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_06c817f4(fStack0000000000000050 * fVar3 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar3 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    FUN_07c7aa14(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                 &stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fStack0000000000000064 == fVar4) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_06c817f4(fStack0000000000000120 - fStack0000000000000054 * fVar3,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar3,
                           fStack0000000000000114 - fStack0000000000000050 * fStack000000000000004c,
                           in_stack_00000118 - fStack0000000000000050 * fStack0000000000000044,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = in_stack_00000100;
      FUN_07c7aa14(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                   &stack0x000000b0);
    }
    else {
      if (fStack0000000000000068 != fVar4) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        uVar2 = FUN_06c817f4(in_stack_00000028._4_4_ * fStack00000000000001ec +
                             fStack0000000000000130,
                             in_stack_00000028._4_4_ * fVar6 + fStack0000000000000134,
                             in_stack_00000028._4_4_ * fStack000000000000006c + in_stack_00000138,
                             in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                             in_stack_00000030 * fVar6 + fStack0000000000000114,
                             in_stack_00000030 * fStack000000000000006c + in_stack_00000118,
                             &stack0x000000f0,*(undefined8 *)puVar1);
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000080 = in_stack_00000100;
        FUN_07c7aa14(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                     &stack0x00000070);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 3) = 0;
        goto LAB_07c7bccc;
      }
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_06c817f4(fStack0000000000000140 - in_stack_00000030 * fStack00000000000001ec,
                           fStack0000000000000144 - in_stack_00000030 * fVar6,
                           in_stack_00000148 - in_stack_00000030 * fStack000000000000006c,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 - in_stack_00000028._4_4_ * fVar6,
                           in_stack_00000128 - in_stack_00000028._4_4_ * fStack000000000000006c,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = in_stack_00000100;
      FUN_07c7aa14(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                   &stack0x00000090);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
LAB_07c7bccc:
  FUN_09537b20();
  return;
}


