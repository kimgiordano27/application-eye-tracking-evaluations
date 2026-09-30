/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 0531db28
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateExternalCamera(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x23;
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
  float fStack0000000000000058;
  float fStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
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
  undefined4 uStack00000000000001e8;
  float fStack00000000000001ec;
  
  if (*(char *)(unaff_x23 + 0x999) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    *(undefined1 *)(unaff_x23 + 0x999) = 1;
  }
  fVar5 = fStack000000000000006c;
  fVar6 = fStack00000000000001ec;
  fVar3 = (float)FUN_060dfb18(uStack00000000000001e8,0);
  fStack0000000000000044 = fVar6;
  fStack000000000000004c = fVar5;
  if (DAT_06bb42c5 == '\0') {
    FUN_02f08768(PTR_DAT_067c8f78);
    DAT_06bb42c5 = '\x01';
  }
  puVar1 = PTR_DAT_067d1b00;
  fVar5 = fStack00000000000001ec;
  fStack00000000000001ec =
       (float)FUN_060dfb18(uStack00000000000001e8,fStack000000000000006c,fStack00000000000001ec,0);
  FUN_0531c954();
  fVar6 = fStack000000000000005c;
  if (fStack000000000000005c <= unaff_s10) {
    fVar6 = unaff_s10;
  }
  fVar4 = fStack0000000000000058;
  if (fStack0000000000000058 <= fVar6) {
    fVar4 = fVar6;
  }
  fVar6 = unaff_s8;
  if (unaff_s8 <= fVar4) {
    fVar6 = fVar4;
  }
  if (unaff_s8 == fVar6) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_045a8fac(fStack0000000000000050 * fVar3 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar3 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    FUN_0531cb64(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                 &stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fStack0000000000000058 == fVar6) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_045a8fac(fStack0000000000000120 - fStack0000000000000054 * fVar3,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar3,
                           fStack0000000000000114 - fStack0000000000000050 * fStack000000000000004c,
                           in_stack_00000118 - fStack0000000000000050 * fStack0000000000000044,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = in_stack_00000100;
      FUN_0531cb64(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x000000b0);
    }
    else if (fStack000000000000005c == fVar6) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_045a8fac(fStack0000000000000140 - in_stack_00000030 * fStack00000000000001ec,
                           fStack0000000000000144 - in_stack_00000030 * fStack000000000000006c,
                           in_stack_00000148 - in_stack_00000030 * fVar5,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 -
                            in_stack_00000028._4_4_ * fStack000000000000006c,
                           in_stack_00000128 - in_stack_00000028._4_4_ * fVar5,&stack0x000000f0,
                           *(undefined8 *)puVar1);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = in_stack_00000100;
      FUN_0531cb64(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x00000090);
    }
    else {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_045a8fac(in_stack_00000028._4_4_ * fStack00000000000001ec + fStack0000000000000130
                           ,in_stack_00000028._4_4_ * fStack000000000000006c +
                            fStack0000000000000134,
                           in_stack_00000028._4_4_ * fVar5 + in_stack_00000138,
                           in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                           in_stack_00000030 * fStack000000000000006c + fStack0000000000000114,
                           in_stack_00000030 * fVar5 + in_stack_00000118,&stack0x000000f0,
                           *(undefined8 *)puVar1);
      in_stack_00000078 = in_stack_000000f8;
      in_stack_00000070 = in_stack_000000f0;
      in_stack_00000080 = in_stack_00000100;
      FUN_0531cb64(uStack0000000000000060,uStack0000000000000064,uStack0000000000000068,uVar2,
                   &stack0x00000070);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  FUN_060fda18();
  return;
}


