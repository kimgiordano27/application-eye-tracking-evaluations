/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 073dcc4c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerLocalizedVibration
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar22;
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
  float fStack0000000000000118;
  float fStack0000000000000120;
  float fStack0000000000000124;
  float fStack0000000000000128;
  float fStack0000000000000130;
  float fStack0000000000000134;
  float fStack0000000000000138;
  float fStack0000000000000140;
  float fStack0000000000000144;
  float fStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined8 uStack0000000000000170;
  undefined8 uStack0000000000000178;
  undefined8 uStack0000000000000180;
  undefined8 uStack0000000000000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  float in_stack_000001e8;
  float fStack00000000000001ec;
  undefined8 uVar21;
  
  uStack0000000000000180 = 0;
  uStack0000000000000188 = 0;
  uStack0000000000000170 = 0;
  uStack0000000000000178 = 0;
  uStack0000000000000160 = 0;
  uStack0000000000000168 = 0;
  uStack0000000000000150 = 0;
  uStack0000000000000158 = 0;
  fStack0000000000000148 = 0.0;
  _fStack0000000000000140 = 0;
  fStack0000000000000138 = 0.0;
  _fStack0000000000000130 = 0;
  fStack0000000000000128 = 0.0;
  _fStack0000000000000120 = 0;
  fStack0000000000000118 = 0.0;
  _fStack0000000000000110 = 0;
  uVar13 = FUN_073db670();
  uVar3 = param_2;
  uVar21 = param_3;
  uVar22 = param_4;
  FUN_073db428(&stack0x000000f0);
  fVar12 = in_stack_00000108;
  fVar8 = (float)uVar22;
  fVar18 = (float)uVar21;
  fVar14 = (float)uVar3;
  fVar9 = in_stack_000000f8._4_4_;
  fVar10 = fStack0000000000000100;
  fVar11 = fStack0000000000000104;
  fStack0000000000000054 = (float)FUN_073db514();
  uStack000000000000005c = *unaff_x22;
  uVar5 = unaff_x22[1];
  uVar15 = unaff_x22[2];
  in_stack_00000198 = *(undefined8 *)(unaff_x22 + 5);
  in_stack_00000190 = *(undefined8 *)(unaff_x22 + 3);
  fStack000000000000002c = fVar8;
  if (DAT_0940fefb == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_0940fefb = '\x01';
  }
  puVar1 = PTR_DAT_08e68e18;
  lVar4 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  uVar3 = param_2;
  uVar21 = param_3;
  fVar6 = (float)FUN_085d2bd4(uVar13,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x18),
                              *(undefined4 *)(lVar4 + 0x1c),*(undefined4 *)(lVar4 + 0x20),0);
  fVar16 = (float)uVar3;
  fVar19 = (float)uVar21;
  fStack00000000000001ec = (float)uVar13;
  in_stack_000001e8 = (float)param_2;
  fStack000000000000006c = (float)param_3;
  uStack0000000000000180 = CONCAT44(fVar10,fVar9);
  uStack0000000000000188 = CONCAT44(fVar12,fVar11);
  fVar8 = fVar19;
  fVar17 = fVar6;
  fVar20 = fVar16;
  fVar7 = (float)FUN_085d2810(0x43340000,0);
  fStack0000000000000034 = (fVar11 * fVar17 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar20;
  fStack000000000000003c = (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar20) - fVar9 * fVar17;
  uStack0000000000000178 =
       CONCAT44(((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar17) - fVar11 * fVar20,
                fStack000000000000003c);
  uStack0000000000000170 =
       CONCAT44((fVar9 * fVar20 + fVar10 * fVar8 + fVar12 * fVar17) - fVar11 * fVar7,
                fStack0000000000000034);
  fVar8 = fVar19;
  fVar17 = fVar6;
  fVar20 = fVar16;
  fVar7 = (float)FUN_085d2810(0x42b40000,0);
  fStack000000000000001c = (fVar11 * fVar17 + fVar9 * fVar8 + fVar12 * fVar7) - fVar10 * fVar20;
  fStack0000000000000024 = (fVar10 * fVar7 + fVar11 * fVar8 + fVar12 * fVar20) - fVar9 * fVar17;
  uStack0000000000000168 =
       CONCAT44(((fVar12 * fVar8 - fVar9 * fVar7) - fVar10 * fVar17) - fVar11 * fVar20,
                fStack0000000000000024);
  uStack0000000000000160 =
       CONCAT44((fVar9 * fVar20 + fVar10 * fVar8 + fVar12 * fVar17) - fVar11 * fVar7,
                fStack000000000000001c);
  fVar8 = (float)FUN_085d2810(0xc2b40000,0);
  fStack000000000000000c = (fVar11 * fVar6 + fVar9 * fVar19 + fVar12 * fVar8) - fVar10 * fVar16;
  fStack0000000000000014 = (fVar10 * fVar8 + fVar11 * fVar19 + fVar12 * fVar16) - fVar9 * fVar6;
  uStack0000000000000150 =
       CONCAT44((fVar9 * fVar16 + fVar10 * fVar19 + fVar12 * fVar6) - fVar11 * fVar8,
                fStack000000000000000c);
  uStack0000000000000158 =
       CONCAT44(((fVar12 * fVar19 - fVar9 * fVar8) - fVar10 * fVar6) - fVar11 * fVar16,
                fStack0000000000000014);
  fVar9 = (float)FUN_073dd330(&stack0x00000180,&stack0x00000190);
  fStack0000000000000064 = (float)FUN_073dd330(&stack0x00000170,&stack0x00000190);
  fVar10 = (float)FUN_073dd330(&stack0x00000160,&stack0x00000190);
  fVar11 = (float)FUN_073dd330(&stack0x00000150,&stack0x00000190);
  if (DAT_09410819 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410819 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fStack000000000000004c = in_stack_000001e8;
  fStack0000000000000044 = fStack000000000000006c;
  fVar12 = (float)FUN_085d2bd4(fStack00000000000001ec,in_stack_000001e8,fStack000000000000006c,
                               param_4,*(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                               *(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_09410146 == '\0') {
    FUN_03c8f898(PTR_DAT_08e68e18);
    DAT_09410146 = '\x01';
  }
  puVar2 = PTR_DAT_08e6b9f8;
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar17 = in_stack_000001e8;
  fVar20 = fStack000000000000006c;
  fStack00000000000001ec =
       (float)FUN_085d2bd4(fStack00000000000001ec,in_stack_000001e8,fStack000000000000006c,param_4,
                           *(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                           *(undefined4 *)(lVar4 + 0x50),0);
  FUN_073dbd9c();
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
    uVar3 = FUN_05ff0284(fVar14 * fVar12 + fStack0000000000000140,
                         fVar14 * fStack000000000000004c + fStack0000000000000144,
                         fVar14 * fStack0000000000000044 + fStack0000000000000148,
                         fStack0000000000000054 * fVar12 + fStack0000000000000130,
                         fStack0000000000000054 * fStack000000000000004c + fStack0000000000000134,
                         fStack0000000000000054 * fStack0000000000000044 + fStack0000000000000138,
                         &stack0x000000f0,*(undefined8 *)puVar2);
    in_stack_000000d8 = in_stack_000000f8;
    in_stack_000000d0 = in_stack_000000f0;
    in_stack_000000e0 = _fStack0000000000000100;
    FUN_073dbfac(uStack000000000000005c,uVar5,uVar15,uVar3,&stack0x000000d0);
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
      uVar3 = FUN_05ff0284(fStack0000000000000120 - fStack0000000000000054 * fVar12,
                           fStack0000000000000124 - fStack0000000000000054 * fStack000000000000004c,
                           fStack0000000000000128 - fStack0000000000000054 * fStack0000000000000044,
                           fStack0000000000000110 - fVar14 * fVar12,
                           fStack0000000000000114 - fVar14 * fStack000000000000004c,
                           fStack0000000000000118 - fVar14 * fStack0000000000000044,&stack0x000000f0
                           ,*(undefined8 *)puVar2);
      in_stack_000000b8 = in_stack_000000f8;
      in_stack_000000b0 = in_stack_000000f0;
      in_stack_000000c0 = _fStack0000000000000100;
      FUN_073dbfac(uStack000000000000005c,uVar5,uVar15,uVar3,&stack0x000000b0);
    }
    else {
      if (fVar10 != fVar8) {
        in_stack_000000f0 = 0;
        in_stack_000000f8 = 0;
        _fStack0000000000000100 = 0;
        uVar3 = FUN_05ff0284(fStack000000000000002c * fStack00000000000001ec +
                             fStack0000000000000130,
                             fStack000000000000002c * fVar17 + fStack0000000000000134,
                             fStack000000000000002c * fVar20 + fStack0000000000000138,
                             fVar18 * fStack00000000000001ec + fStack0000000000000110,
                             fVar18 * fVar17 + fStack0000000000000114,
                             fVar18 * fVar20 + fStack0000000000000118,&stack0x000000f0,
                             *(undefined8 *)puVar2);
        in_stack_00000078 = in_stack_000000f8;
        in_stack_00000070 = in_stack_000000f0;
        in_stack_00000080 = _fStack0000000000000100;
        FUN_073dbfac(uStack000000000000005c,uVar5,uVar15,uVar3,&stack0x00000070);
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        *unaff_x19 = 0;
        *(undefined4 *)(unaff_x19 + 3) = 0;
        goto LAB_073dd260;
      }
      in_stack_000000f0 = 0;
      in_stack_000000f8 = 0;
      _fStack0000000000000100 = 0;
      uVar3 = FUN_05ff0284(fStack0000000000000140 - fVar18 * fStack00000000000001ec,
                           fStack0000000000000144 - fVar18 * fVar17,
                           fStack0000000000000148 - fVar18 * fVar20,
                           fStack0000000000000120 - fStack000000000000002c * fStack00000000000001ec,
                           fStack0000000000000124 - fStack000000000000002c * fVar17,
                           fStack0000000000000128 - fStack000000000000002c * fVar20,&stack0x000000f0
                           ,*(undefined8 *)puVar2);
      in_stack_00000098 = in_stack_000000f8;
      in_stack_00000090 = in_stack_000000f0;
      in_stack_000000a0 = _fStack0000000000000100;
      FUN_073dbfac(uStack000000000000005c,uVar5,uVar15,uVar3,&stack0x00000090);
    }
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
    *(undefined4 *)(unaff_x19 + 3) = 0;
  }
LAB_073dd260:
  FUN_085e9668();
  return;
}


