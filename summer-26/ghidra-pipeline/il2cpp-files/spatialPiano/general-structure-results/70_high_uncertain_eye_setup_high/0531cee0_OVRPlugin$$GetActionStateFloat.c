/*
FUNCTION_NAME: OVRPlugin$$GetActionStateFloat
ENTRY_POINT: 0531cee0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetActionStateFloat(float param_1,float param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  ulong *unaff_x19;
  float *unaff_x22;
  long *unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined4 in_stack_00000098;
  undefined4 uStack000000000000009c;
  
  if (param_1 <= param_2) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar5 = *(float **)(*unaff_x23 + 0xb8);
    fVar14 = *pfVar5;
    fVar16 = pfVar5[1];
    param_1 = pfVar5[2];
  }
  else {
    fVar14 = unaff_s15 / param_1;
    fVar16 = unaff_s8 / param_1;
    param_1 = unaff_s9 / param_1;
  }
  puVar1 = PTR_DAT_067c9790;
  fVar6 = *unaff_x22;
  fVar7 = unaff_x22[1];
  fVar8 = unaff_x22[2];
  fVar9 = unaff_x22[3];
  fVar18 = fVar14 * fVar6;
  fVar19 = fVar16 * fVar7;
  fVar10 = unaff_x22[4];
  fVar11 = unaff_x22[5];
  fVar20 = param_1 * fVar8;
  fVar15 = param_1 * fVar11 + fVar14 * fVar9 + fVar16 * fVar10;
  if (DAT_06bb42c0 == '\0') {
    FUN_02f08768(PTR_DAT_067c8fa8);
    fVar6 = *unaff_x22;
    fVar7 = unaff_x22[1];
    fVar8 = unaff_x22[2];
    fVar9 = unaff_x22[3];
    DAT_06bb42c0 = '\x01';
    fVar10 = unaff_x22[4];
    fVar11 = unaff_x22[5];
  }
  fVar13 = ABS(fVar15);
  if (ABS(fVar15) <= 0.0) {
    fVar13 = 0.0;
  }
  uStack000000000000009c = 0;
  uStack0000000000000018 = 0;
  in_stack_00000010 = 0;
  fVar17 = **(float **)(*(long *)PTR_DAT_067c8fa8 + 0xb8) * 8.0;
  fVar12 = fVar13 * DAT_011b0568;
  if (fVar13 * DAT_011b0568 <= fVar17) {
    fVar12 = fVar17;
  }
  fVar13 = 0.0;
  if (fVar12 <= ABS(0.0 - fVar15)) {
    fVar13 = ((unaff_s12 * param_1 + unaff_s13 * fVar14 + unaff_s14 * fVar16) -
             (fVar20 + fVar18 + fVar19)) / fVar15;
  }
  FUN_0531d2a8(fVar6 + fVar9 * fVar13,fVar7 + fVar10 * fVar13,fVar8 + fVar13 * fVar11);
  uVar4 = uStack0000000000000018;
  uVar2 = in_stack_00000010;
  uVar3 = in_stack_00000010._4_4_;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_060fda18(uVar2 & 0xffffffff,uVar3,uVar4,in_stack_00000098,in_stack_00000008._4_4_,
               &stack0x00000030,0);
  FUN_0531d0f8(&stack0x00000010);
  unaff_x19[1] = CONCAT44(uStack000000000000001c,uStack0000000000000018);
  *unaff_x19 = in_stack_00000010;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000024;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000020,uStack000000000000001c);
  return 1;
}


