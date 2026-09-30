/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry2
ENTRY_POINT: 0600be5c
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


void OVRPlugin__GetBoundaryGeometry2
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 *unaff_x19;
  float *unaff_x20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack0000000000000004;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000044;
  float fStack000000000000004c;
  undefined8 in_stack_00000070;
  float in_stack_00000080;
  float in_stack_00000090;
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
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float fStack0000000000000168;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack0000000000000180;
  float fStack0000000000000184;
  float fStack0000000000000188;
  float fStack0000000000000190;
  float fStack0000000000000194;
  float in_stack_00000198;
  float in_stack_000001e8;
  float fStack00000000000001ec;
  
  fStack0000000000000188 = 0.0;
  _fStack0000000000000180 = 0;
  fStack0000000000000178 = 0.0;
  _fStack0000000000000170 = 0;
  fStack0000000000000168 = 0.0;
  _fStack0000000000000160 = 0;
  uVar11 = FUN_0600ad54();
  uVar3 = param_2;
  uVar13 = param_3;
  uVar16 = param_4;
  fStack00000000000001ec = (float)FUN_0600abf8();
  fVar14 = (float)uVar13;
  fVar17 = (float)uVar16;
  if (DAT_07a3fba3 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba3 = '\x01';
  }
  puVar2 = PTR_DAT_075dec28;
  puVar1 = PTR_DAT_0759b378;
  lVar4 = *(long *)(*(long *)PTR_DAT_0759b378 + 0xb8);
  uVar13 = param_2;
  uVar16 = param_3;
  fVar5 = (float)FUN_06e464bc(uVar11,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x3c),
                              *(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),0);
  if (DAT_07a3fba6 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b378);
    DAT_07a3fba6 = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar6 = (float)FUN_06e464bc(uVar11,param_2,param_3,param_4,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  fStack000000000000002c = (float)param_2;
  FUN_0600b480();
  fVar19 = fStack0000000000000188;
  fVar18 = fStack0000000000000180;
  fVar7 = (float)uVar3;
  fVar23 = fVar7 * (float)uVar13;
  fVar21 = fVar7 * (float)uVar16;
  fVar22 = fStack00000000000001ec * fVar5;
  fVar24 = fStack00000000000001ec * (float)uVar13;
  fVar20 = fStack00000000000001ec * (float)uVar16;
  fStack0000000000000024 = fStack0000000000000190;
  fStack000000000000001c = in_stack_00000198;
  fStack0000000000000044 = fStack0000000000000184;
  in_stack_00000148 = 0;
  in_stack_00000150 = 0;
  in_stack_00000158 = 0;
  uVar3 = FUN_05302338(fVar7 * fVar5 + fStack0000000000000190,fVar23 + fStack0000000000000194,
                       fVar21 + in_stack_00000198,fVar22 + fStack0000000000000180,
                       fVar24 + fStack0000000000000184,fVar20 + fStack0000000000000188,
                       &stack0x00000148,*(undefined8 *)puVar2);
  in_stack_00000138 = in_stack_00000150;
  in_stack_00000130 = in_stack_00000148;
  in_stack_00000140 = in_stack_00000158;
  fVar9 = in_stack_00000080;
  fStack000000000000004c = in_stack_00000090;
  fStack00000000000001ec = (float)FUN_0600b690(in_stack_00000070,uVar3,&stack0x00000130);
  in_stack_000001e8 = fVar9;
  fVar8 = fStack0000000000000178;
  fVar12 = fStack0000000000000170;
  fVar15 = fStack0000000000000174;
  fVar9 = fStack0000000000000164;
  fStack0000000000000004 = fStack0000000000000160;
  fStack000000000000000c = fStack0000000000000168;
  in_stack_00000118 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  uVar3 = FUN_05302338(fStack0000000000000170 - fVar22,fStack0000000000000174 - fVar24,
                       fStack0000000000000178 - fVar20,fStack0000000000000160 - fVar7 * fVar5,
                       fStack0000000000000164 - fVar23,fStack0000000000000168 - fVar21,
                       &stack0x00000118,*(undefined8 *)puVar2);
  in_stack_00000108 = in_stack_00000120;
  in_stack_00000100 = in_stack_00000118;
  in_stack_00000110 = in_stack_00000128;
  fStack0000000000000014 = in_stack_00000080;
  fVar20 = in_stack_00000090;
  fVar7 = (float)FUN_0600b690(in_stack_00000070,uVar3,&stack0x00000100);
  fVar5 = fVar14 * fStack000000000000002c;
  fVar22 = fVar14 * (float)param_3;
  in_stack_000000e8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000f8 = 0;
  fVar23 = fVar17 * fStack000000000000002c;
  fVar21 = fVar17 * (float)param_3;
  uVar3 = FUN_05302338(fStack0000000000000024 - fVar14 * fVar6,fStack0000000000000194 - fVar5,
                       fStack000000000000001c - fVar22,fVar12 - fVar17 * fVar6,fVar15 - fVar23,
                       fVar8 - fVar21,&stack0x000000e8,*(undefined8 *)puVar2);
  in_stack_000000d8 = in_stack_000000f0;
  in_stack_000000d0 = in_stack_000000e8;
  in_stack_000000e0 = in_stack_000000f8;
  fVar12 = in_stack_00000080;
  fVar15 = in_stack_00000090;
  fVar8 = (float)FUN_0600b690(in_stack_00000070,uVar3,&stack0x000000d0);
  in_stack_000000b8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  uVar3 = FUN_05302338(fVar17 * fVar6 + fVar18,fVar23 + fStack0000000000000044,fVar21 + fVar19,
                       fVar14 * fVar6 + fStack0000000000000004,fVar5 + fVar9,
                       fVar22 + fStack000000000000000c,&stack0x000000b8,*(undefined8 *)puVar2);
  in_stack_000000a8 = in_stack_000000c0;
  in_stack_000000a0 = in_stack_000000b8;
  in_stack_000000b0 = in_stack_000000c8;
  fVar17 = in_stack_00000080;
  fVar5 = in_stack_00000090;
  fVar9 = (float)FUN_0600b690(in_stack_00000070,uVar3,&stack0x000000a0);
  fVar14 = (float)in_stack_00000070;
  fVar21 = (fStack000000000000004c - in_stack_00000090) *
           (fStack000000000000004c - in_stack_00000090) +
           (fStack00000000000001ec - fVar14) * (fStack00000000000001ec - fVar14) +
           (in_stack_000001e8 - in_stack_00000080) * (in_stack_000001e8 - in_stack_00000080);
  fVar6 = (fVar20 - in_stack_00000090) * (fVar20 - in_stack_00000090) +
          (fVar7 - fVar14) * (fVar7 - fVar14) +
          (fStack0000000000000014 - in_stack_00000080) *
          (fStack0000000000000014 - in_stack_00000080);
  fVar18 = (fVar15 - in_stack_00000090) * (fVar15 - in_stack_00000090) +
           (fVar8 - fVar14) * (fVar8 - fVar14) +
           (fVar12 - in_stack_00000080) * (fVar12 - in_stack_00000080);
  fVar19 = (fVar5 - in_stack_00000090) * (fVar5 - in_stack_00000090) +
           (fVar9 - fVar14) * (fVar9 - fVar14) +
           (fVar17 - in_stack_00000080) * (fVar17 - in_stack_00000080);
  fVar14 = fVar18;
  if (fVar19 <= fVar18) {
    fVar14 = fVar19;
  }
  fVar19 = fVar6;
  if (fVar14 <= fVar6) {
    fVar19 = fVar14;
  }
  fVar14 = fVar21;
  if (fVar19 <= fVar21) {
    fVar14 = fVar19;
  }
  if (fVar21 == fVar14) {
    *unaff_x20 = fStack00000000000001ec;
    uVar10 = 0;
    fVar17 = in_stack_000001e8;
    fVar5 = fStack000000000000004c;
  }
  else if (fVar6 == fVar14) {
    *unaff_x20 = fVar7;
    uVar10 = 0x43340000;
    fVar17 = fStack0000000000000014;
    fVar5 = fVar20;
  }
  else if (fVar18 == fVar14) {
    *unaff_x20 = fVar8;
    uVar10 = 0x42b40000;
    fVar17 = fVar12;
    fVar5 = fVar15;
  }
  else {
    *unaff_x20 = fVar9;
    uVar10 = 0xc2b40000;
  }
  unaff_x20[1] = fVar17;
  unaff_x20[2] = fVar5;
  *unaff_x19 = uVar10;
  return;
}


