/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfileName
ENTRY_POINT: 07472dec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x074730a4) */

float OVRPlugin__GetCurrentInteractionProfileName(void)

{
  int in_w8;
  float *pfVar1;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar6;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (in_w8 == 0) {
    thunk_FUN_03db619c();
  }
  fVar6 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (unaff_s12 < fVar6) {
    if (DAT_0983637d == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a1008);
      DAT_0983637d = '\x01';
    }
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if (fVar6 <= DAT_0191476c) {
      if (DAT_098362c7 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a0f88);
        DAT_098362c7 = '\x01';
      }
      pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
      fVar2 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
    }
    else {
      fVar2 = unaff_s13 / fVar6;
      fVar5 = unaff_s14 / fVar6;
      fVar6 = unaff_s15 / fVar6;
    }
    unaff_s13 = unaff_s12 * fVar2;
    unaff_s14 = unaff_s12 * fVar5;
    unaff_s15 = unaff_s12 * fVar6;
  }
  if (unaff_s10 * unaff_s15 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
    unaff_s13 = *pfVar1;
    unaff_s14 = pfVar1[1];
    unaff_s15 = pfVar1[2];
  }
  if (DAT_09837382 == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    DAT_09837382 = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + unaff_s13);
  fStack000000000000001c = fStack000000000000001c - (fStack0000000000000028 + unaff_s14);
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + unaff_s15);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar6 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar6) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar6) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar6) / unaff_s8;
  }
  if (DAT_0983637d == '\0') {
    FUN_03d2d2b0(PTR_DAT_091a1008);
    DAT_0983637d = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  fVar6 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar6 <= DAT_0191476c) {
    if (DAT_098362c7 == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a0f88);
      DAT_098362c7 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_091a0f88 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar6;
  }
  uVar3 = FUN_07471eb0();
  fVar6 = (float)FUN_03e64c4c(uVar3,0);
  fVar6 = fVar6 - (float)(int)(fVar6 / 360.0) * 360.0;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  fVar2 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar4 = (ulong)(uint)fStack0000000000000018;
  if ((fVar2 < fVar6) && (uVar4 = uVar3, ABS(fVar6 - fVar2) < ABS(360.0 - fVar6))) {
    uVar4 = FUN_07471f5c();
  }
  fVar6 = (float)FUN_07472170();
  return in_stack_00000010._4_4_ + unaff_s13 + (float)uVar4 * fVar6;
}


