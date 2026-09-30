/*
FUNCTION_NAME: OVRPlugin$$GetCurrentDetachedInteractionProfile
ENTRY_POINT: 07472d18
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074730a4) */

float OVRPlugin__GetCurrentDetachedInteractionProfile(long param_1)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  ulong uVar4;
  ulong uVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar6;
  float unaff_s12;
  float unaff_s13;
  float fVar7;
  float unaff_s14;
  float fVar8;
  float unaff_s15;
  float fVar9;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  fStack0000000000000014 = unaff_s15;
  fStack0000000000000018 = unaff_s14;
  fStack000000000000001c = unaff_s13;
  if (**(float **)(param_1 + 0xb8) <= unaff_s8) {
    fVar9 = (unaff_s12 - in_stack_00000020._4_4_) * unaff_s10 +
            (unaff_s14 - unaff_s15) * unaff_s11 + (unaff_s13 - in_stack_00000028) * unaff_s9;
    fVar7 = (unaff_s11 * fVar9) / unaff_s8;
    fVar8 = (unaff_s9 * fVar9) / unaff_s8;
    fVar9 = (unaff_s10 * fVar9) / unaff_s8;
  }
  else {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  fVar3 = (float)FUN_07472350();
  if (DAT_098362cc == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_098362cc = '\x01';
  }
  puVar1 = PTR_DAT_091a1008;
  fStack000000000000002c = unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_091a1008 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar6 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar3 < fVar6) {
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (fVar6 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
      fVar7 = *pfVar2;
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
    }
    else {
      fVar7 = fVar7 / fVar6;
      fVar8 = fVar8 / fVar6;
      fVar9 = fVar9 / fVar6;
    }
    fVar7 = fVar3 * fVar7;
    fVar8 = fVar3 * fVar8;
    fVar9 = fVar3 * fVar9;
  }
  if (unaff_s10 * fVar9 + fStack000000000000002c * fVar7 + unaff_s9 * fVar8 < 0.0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    fVar7 = *pfVar2;
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
  }
  fVar7 = fStack0000000000000014 + fVar7;
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fVar3 = fStack0000000000000018 - fVar7;
  fVar8 = fStack000000000000001c - (in_stack_00000028 + fVar8);
  fVar9 = unaff_s12 - (in_stack_00000020._4_4_ + fVar9);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar6 = unaff_s10 * fVar9 + fStack000000000000002c * fVar3 + unaff_s9 * fVar8;
    fVar3 = fVar3 - (fStack000000000000002c * fVar6) / unaff_s8;
    fVar8 = fVar8 - (unaff_s9 * fVar6) / unaff_s8;
    fVar9 = fVar9 - (unaff_s10 * fVar6) / unaff_s8;
  }
  fStack0000000000000014 = fVar7;
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar9 = SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar8 * fVar8);
  if (fVar9 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    fVar3 = **(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  }
  else {
    fVar3 = fVar3 / fVar9;
  }
  uVar4 = FUN_07471eb0();
  fVar9 = (float)FUN_03e64c4c(uVar4,0);
  fVar9 = fVar9 - (float)(int)(fVar9 / 360.0) * 360.0;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fVar7 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar5 = (ulong)(uint)fVar3;
  if ((fVar7 < fVar9) && (uVar5 = uVar4, ABS(fVar9 - fVar7) < ABS(360.0 - fVar9))) {
    uVar5 = FUN_07471f5c();
  }
  fVar9 = (float)FUN_07472170();
  return fStack0000000000000014 + (float)uVar5 * fVar9;
}


