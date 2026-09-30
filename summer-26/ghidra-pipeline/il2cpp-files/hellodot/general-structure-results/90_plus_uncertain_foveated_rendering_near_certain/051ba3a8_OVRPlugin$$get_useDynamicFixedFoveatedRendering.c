/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 051ba3a8
PROGRAM: hellodot-libil2cpp.so
SCORE: 104
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__get_useDynamicFixedFoveatedRendering
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar21;
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
  undefined4 uStack000000000000005c;
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
  float fStack0000000000000100;
  float fStack0000000000000104;
  float in_stack_00000108;
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
  float in_stack_00000180;
  float fStack0000000000000184;
  float in_stack_00000188;
  float fStack000000000000018c;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001e8;
  float fStack00000000000001ec;
  undefined8 uVar20;
  
  uVar3 = param_2;
  uVar20 = param_3;
  uVar21 = param_4;
  FUN_051b8b60();
  fVar12 = in_stack_00000108;
  fVar8 = (float)uVar21;
  fVar17 = (float)uVar20;
  fVar13 = (float)uVar3;
  fVar9 = in_stack_000000f8._4_4_;
  fVar10 = fStack0000000000000100;
  fVar11 = fStack0000000000000104;
  fStack0000000000000054 = (float)FUN_051b8c4c();
  uStack000000000000005c = *unaff_x22;
  uVar5 = unaff_x22[1];
  uVar14 = unaff_x22[2];
  in_stack_00000198 = *(undefined8 *)(unaff_x22 + 5);
  in_stack_00000190 = *(undefined8 *)(unaff_x22 + 3);
  fStack000000000000002c = fVar8;
  if (DAT_06a67312 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67312 = '\x01';
  }
  puVar1 = PTR_DAT_065c9850;
  lVar4 = *(long *)(*(long *)PTR_DAT_065c9850 + 0xb8);
  uVar3 = param_2;
  uVar20 = param_3;
  fVar6 = (float)FUN_05eea23c(param_1,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  fVar15 = (float)uVar3;
  fVar18 = (float)uVar20;
  fStack00000000000001ec = (float)param_1;
  in_stack_000001e8 = (float)param_2;
  fStack000000000000006c = (float)param_3;
  in_stack_00000180 = fVar9;
  fStack0000000000000184 = fVar10;
  in_stack_00000188 = fVar11;
  fStack000000000000018c = fVar12;
  fVar8 = fVar18;
  fVar16 = fVar6;
  fVar19 = fVar15;
  fVar7 = (float)FUN_05ee9f08(0x43340000,0);
  fStack0000000000000034 = (fVar11 * fVar16 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar19;
  fStack0000000000000174 = (fVar9 * fVar19 + fVar10 * fVar8 + fVar12 * fVar16) - fVar11 * fVar7;
  fStack000000000000003c = (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar19) - fVar9 * fVar16;
  fStack000000000000017c = ((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar16) - fVar11 * fVar19;
  in_stack_00000170 = fStack0000000000000034;
  in_stack_00000178 = fStack000000000000003c;
  fVar8 = fVar18;
  fVar16 = fVar6;
  fVar19 = fVar15;
  fVar7 = (float)FUN_05ee9f08(0x42b40000,0);
  fStack000000000000001c = (fVar11 * fVar16 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar19;
  fStack0000000000000164 = (fVar9 * fVar19 + fVar10 * fVar8 + fVar12 * fVar16) - fVar11 * fVar7;
  fStack0000000000000024 = (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar19) - fVar9 * fVar16;
  fStack000000000000016c = ((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar16) - fVar11 * fVar19;
  in_stack_00000160 = fStack000000000000001c;
  in_stack_00000168 = fStack0000000000000024;
  fVar8 = (float)FUN_05ee9f08(0xc2b40000,0);
  fStack000000000000000c = (fVar11 * fVar6 + fVar9 * fVar18 + fVar12 * fVar8) - fVar10 * fVar15;
  fStack0000000000000154 = (fVar9 * fVar15 + fVar10 * fVar18 + fVar12 * fVar6) - fVar11 * fVar8;
  fStack0000000000000014 = (fVar10 * fVar8 + fVar11 * fVar18 + fVar12 * fVar15) - fVar9 * fVar6;
  fStack000000000000015c = ((fVar12 * fVar18 - fVar9 * fVar8) - fVar10 * fVar6) - fVar11 * fVar15;
  in_stack_00000150 = fStack000000000000000c;
  in_stack_00000158 = fStack0000000000000014;
  fVar9 = (float)FUN_051baa4c(&stack0x00000180,&stack0x00000190);
  fStack0000000000000064 = (float)FUN_051baa4c(&stack0x00000170,&stack0x00000190);
  fVar10 = (float)FUN_051baa4c(&stack0x00000160,&stack0x00000190);
  fVar11 = (float)FUN_051baa4c(&stack0x00000150,&stack0x00000190);
  if (DAT_06a6722f == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a6722f = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fStack000000000000004c = in_stack_000001e8;
  fStack0000000000000044 = fStack000000000000006c;
  fVar12 = (float)FUN_05eea23c(fStack00000000000001ec,in_stack_000001e8,fStack000000000000006c,
                               param_4,*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                               *(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_06a67233 == '\0') {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
    DAT_06a67233 = '\x01';
  }
  puVar2 = PTR_DAT_065eea08;
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar16 = in_stack_000001e8;
  fVar19 = fStack000000000000006c;
  fStack00000000000001ec =
       (float)FUN_05eea23c(fStack00000000000001ec,in_stack_000001e8,fStack000000000000006c,param_4,
                           *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                           *(undefined4 *)(lVar4 + 0x50),0);
  FUN_051b94b8();
  fVar8 = fVar10;
  if (fVar10 <= fVar11) {
    fVar8 = fVar11;
  }
  fVar11 = fStack0000000000000064;
  if (fStack0000000000000064 <= fVar8) {
    fVar11 = fVar8;
  }
  fVar8 = fVar9;
  if (fVar9 <= fVar11) {
    fVar8 = fVar11;
  }
  if (fVar9 == fVar8) {
    in_stack_000000f0 = 0;
    in_stack_000000f8 = 0;
    _fStack0000000000000100 = 0;
    uVar3 = FUN_0419e090(fVar13 * fVar12 + fStack0000000000000140,
                         fVar13 * fStack000000000000004c + fStack0000000000000144,
                         fVar13 * fStack0000000000000044 + in_stack_00000148,
                         fStack0000000000000054 * fVar12 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + in_stack_00000138,
                         &stack0x000000f0,*(undefined8 *)puVar2);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = _fStack0000000000000100;
    FUN_051b96c8(uStack000000000000005c,uVar5,uVar14,uVar3,&stack0x000000d0);
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
  else {
    if (fStack0000000000000064 == fVar8) {
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_0419e090(fStack0000000000000120 - fStack0000000000000054 * fVar12,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           in_stack_00000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fVar13 * fVar12,
                           fStack0000000000000114 - fVar13 * fStack000000000000004c,
                           in_stack_00000118 - fVar13 * fStack0000000000000044,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = _fStack0000000000000100;
      FUN_051b96c8(uStack000000000000005c,uVar5,uVar14,uVar3,&stack0x000000b0);
    }
    else {
      if (fVar10 != fVar8) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        _fStack0000000000000100 = 0;
        uVar3 = FUN_0419e090(fStack000000000000002c * fStack00000000000001ec +
                             fStack0000000000000130,
                             fStack000000000000002c * fVar16 + fStack0000000000000134,
                             fStack000000000000002c * fVar19 + in_stack_00000138,
                             fVar17 * fStack00000000000001ec + fStack0000000000000110,
                             fVar17 * fVar16 + fStack0000000000000114,
                             fVar17 * fVar19 + in_stack_00000118,&stack0x000000f0,
                             *(undefined8 *)puVar2);
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000080 = _fStack0000000000000100;
        FUN_051b96c8(uStack000000000000005c,uVar5,uVar14,uVar3,&stack0x00000070);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 3) = 0;
        goto LAB_051ba97c;
      }
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_0419e090(fStack0000000000000140 - fVar17 * fStack00000000000001ec,
                           fStack0000000000000144 - fVar17 * fVar16,
                           in_stack_00000148 - fVar17 * fVar19,
                           fStack0000000000000120 - fStack000000000000002c * fStack00000000000001ec,
                           fStack0000000000000124 - fStack000000000000002c * fVar16,
                           in_stack_00000128 - fStack000000000000002c * fVar19,&stack0x000000f0,
                           *(undefined8 *)puVar2);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = _fStack0000000000000100;
      FUN_051b96c8(uStack000000000000005c,uVar5,uVar14,uVar3,&stack0x00000090);
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


