/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFixedFoveatedRendering
ENTRY_POINT: 051ba3f4
PROGRAM: hellodot-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFixedFoveatedRendering
               (undefined4 param_1,undefined4 param_2,undefined1 param_3 [16],
               undefined1 param_4 [16],undefined4 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 unaff_s8;
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
  float fStack000000000000003c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
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
  float in_stack_00000150;
  float fStack0000000000000154;
  float in_stack_00000158;
  float fStack000000000000015c;
  float in_stack_00000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  float fStack000000000000016c;
  float in_stack_00000170;
  float fStack0000000000000174;
  float in_stack_00000178;
  float fStack000000000000017c;
  undefined4 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 uStack0000000000000190;
  undefined8 uStack0000000000000198;
  float in_stack_000001e8;
  float fStack00000000000001ec;
  
  uStack0000000000000198 = *(undefined8 *)(unaff_x22 + 0x14);
  uStack0000000000000190 = *(undefined8 *)(unaff_x22 + 0xc);
  uStack0000000000000058 = param_2;
  uStack000000000000005c = param_5;
  uStack0000000000000060 = param_1;
  if (in_w8 == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    *(undefined1 *)(unaff_x23 + 0x312) = 1;
  }
  fVar8 = unaff_s10;
  fVar9 = unaff_s9;
  fVar3 = (float)FUN_05eea23c(0);
  fStack000000000000006c = unaff_s10;
  in_stack_000001e8 = unaff_s9;
  fStack00000000000001ec = (float)unaff_s8;
  fVar5 = fVar8;
  fVar6 = fVar3;
  fVar7 = fVar9;
  fVar4 = (float)FUN_05ee9f08(0x43340000,0);
  fStack0000000000000034 =
       (unaff_s14 * fVar6 + unaff_s12 * fVar5 + unaff_s11 * fVar4) - unaff_s13 * fVar7;
  fStack0000000000000174 =
       (unaff_s12 * fVar7 + unaff_s13 * fVar5 + unaff_s11 * fVar6) - unaff_s14 * fVar4;
  fStack000000000000003c =
       (unaff_s13 * fVar4 + unaff_s14 * fVar5 + unaff_s11 * fVar7) - unaff_s12 * fVar6;
  fStack000000000000017c =
       ((unaff_s11 * fVar5 - unaff_s12 * fVar4) - unaff_s13 * fVar6) - unaff_s14 * fVar7;
  in_stack_00000170 = fStack0000000000000034;
  in_stack_00000178 = fStack000000000000003c;
  fVar5 = fVar8;
  fVar6 = fVar3;
  fVar7 = fVar9;
  fVar4 = (float)FUN_05ee9f08(0x42b40000,0);
  fStack000000000000001c =
       (unaff_s14 * fVar6 + unaff_s12 * fVar5 + unaff_s11 * fVar4) - unaff_s13 * fVar7;
  fStack0000000000000164 =
       (unaff_s12 * fVar7 + unaff_s13 * fVar5 + unaff_s11 * fVar6) - unaff_s14 * fVar4;
  fStack0000000000000024 =
       (unaff_s13 * fVar4 + unaff_s14 * fVar5 + unaff_s11 * fVar7) - unaff_s12 * fVar6;
  fStack000000000000016c =
       ((unaff_s11 * fVar5 - unaff_s12 * fVar4) - unaff_s13 * fVar6) - unaff_s14 * fVar7;
  in_stack_00000160 = fStack000000000000001c;
  in_stack_00000168 = fStack0000000000000024;
  fVar5 = (float)FUN_05ee9f08(0xc2b40000,0);
  fStack000000000000000c =
       (unaff_s14 * fVar3 + unaff_s12 * fVar8 + unaff_s11 * fVar5) - unaff_s13 * fVar9;
  fStack0000000000000154 =
       (unaff_s12 * fVar9 + unaff_s13 * fVar8 + unaff_s11 * fVar3) - unaff_s14 * fVar5;
  fStack0000000000000014 =
       (unaff_s13 * fVar5 + unaff_s14 * fVar8 + unaff_s11 * fVar9) - unaff_s12 * fVar3;
  fStack000000000000015c =
       ((unaff_s11 * fVar8 - unaff_s12 * fVar5) - unaff_s13 * fVar3) - unaff_s14 * fVar9;
  in_stack_00000150 = fStack000000000000000c;
  in_stack_00000158 = fStack0000000000000014;
  fVar5 = (float)FUN_051baa4c(&stack0x00000180,&stack0x00000190);
  fStack0000000000000064 = (float)FUN_051baa4c(&stack0x00000170,&stack0x00000190);
  fVar6 = (float)FUN_051baa4c(&stack0x00000160,&stack0x00000190);
  fVar7 = (float)FUN_051baa4c(&stack0x00000150,&stack0x00000190);
  if (DAT_06a6722f == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a6722f = '\x01';
  }
  fStack000000000000004c = in_stack_000001e8;
  fStack0000000000000044 = fStack000000000000006c;
  fVar8 = (float)FUN_05eea23c(fStack00000000000001ec,0);
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  puVar1 = PTR_DAT_065eea08;
  fVar3 = in_stack_000001e8;
  fVar4 = fStack000000000000006c;
  fStack00000000000001ec =
       (float)FUN_05eea23c(fStack00000000000001ec,in_stack_000001e8,fStack000000000000006c,0);
  FUN_051b94b8();
  fVar9 = fVar6;
  if (fVar6 <= fVar7) {
    fVar9 = fVar7;
  }
  fVar7 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar9) {
    fVar7 = fVar9;
  }
  fVar9 = fVar5;
  if (fVar5 <= fVar7) {
    fVar9 = fVar7;
  }
  if (fVar5 == fVar9) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    in_stack_00000100 = 0;
    uVar2 = FUN_0419e090(fStack0000000000000050 * fVar8 + fStack0000000000000140,
                         fStack0000000000000050 * fStack000000000000004c + fStack0000000000000144,
                         fStack0000000000000050 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar8 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar1);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = in_stack_00000100;
    FUN_051b96c8(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                 &stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fStack0000000000000064 == fVar9) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_0419e090(fStack0000000000000120 - fStack0000000000000054 * fVar8,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fStack0000000000000050 * fVar8,
                           fStack0000000000000114 - fStack0000000000000050 * fStack000000000000004c,
                           in_stack_00000118 - fStack0000000000000050 * fStack0000000000000044,
                           &stack0x000000f0,*(undefined8 *)puVar1);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = in_stack_00000100;
      FUN_051b96c8(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                   &stack0x000000b0);
    }
    else {
      if (fVar6 != fVar9) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        in_stack_00000100 = 0;
        uVar2 = FUN_0419e090(in_stack_00000028._4_4_ * fStack00000000000001ec +
                             fStack0000000000000130,
                             in_stack_00000028._4_4_ * fVar3 + fStack0000000000000134,
                             in_stack_00000028._4_4_ * fVar4 + in_stack_00000138,
                             in_stack_00000030 * fStack00000000000001ec + fStack0000000000000110,
                             in_stack_00000030 * fVar3 + fStack0000000000000114,
                             in_stack_00000030 * fVar4 + in_stack_00000118,&stack0x000000f0,
                             *(undefined8 *)puVar1);
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000080 = in_stack_00000100;
        FUN_051b96c8(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                     &stack0x00000070);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 3) = 0;
        goto LAB_051ba97c;
      }
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      in_stack_00000100 = 0;
      uVar2 = FUN_0419e090(fStack0000000000000140 - in_stack_00000030 * fStack00000000000001ec,
                           fStack0000000000000144 - in_stack_00000030 * fVar3,
                           in_stack_00000148 - in_stack_00000030 * fVar4,
                           fStack0000000000000120 - in_stack_00000028._4_4_ * fStack00000000000001ec
                           ,fStack0000000000000124 - in_stack_00000028._4_4_ * fVar3,
                           in_stack_00000128 - in_stack_00000028._4_4_ * fVar4,&stack0x000000f0,
                           *(undefined8 *)puVar1);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = in_stack_00000100;
      FUN_051b96c8(uStack000000000000005c,uStack0000000000000060,uStack0000000000000058,uVar2,
                   &stack0x00000090);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
LAB_051ba97c:
  FUN_05effcac();
  return;
}


