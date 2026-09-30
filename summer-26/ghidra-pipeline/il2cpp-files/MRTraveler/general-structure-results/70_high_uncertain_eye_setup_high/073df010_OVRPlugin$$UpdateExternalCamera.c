/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 073df010
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x073df34c) */

float OVRPlugin__UpdateExternalCamera(void)

{
  undefined *puVar1;
  float *pfVar2;
  long unaff_x20;
  long *unaff_x21;
  float fVar3;
  float fVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float fVar8;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  fVar3 = (float)FUN_073de5f8();
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  puVar1 = PTR_DAT_08e6a6b8;
  fStack000000000000002c = unaff_s11;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar8 = SQRT(unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14 + unaff_s15 * unaff_s15);
  if (fVar3 < fVar8) {
    if (DAT_094100b4 == '\0') {
      FUN_03c8f898(PTR_DAT_08e6a6b8);
      DAT_094100b4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (fVar8 <= DAT_018b0528) {
      if (DAT_0940fff5 == '\0') {
        FUN_03c8f898(PTR_DAT_08e68e18);
        DAT_0940fff5 = '\x01';
      }
      pfVar2 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
      fVar4 = *pfVar2;
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
    }
    else {
      fVar4 = unaff_s13 / fVar8;
      fVar7 = unaff_s14 / fVar8;
      fVar8 = unaff_s15 / fVar8;
    }
    unaff_s13 = fVar3 * fVar4;
    unaff_s14 = fVar3 * fVar7;
    unaff_s15 = fVar3 * fVar8;
  }
  if (unaff_s10 * unaff_s15 + fStack000000000000002c * unaff_s13 + unaff_s9 * unaff_s14 < 0.0) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    unaff_s13 = *pfVar2;
    unaff_s14 = pfVar2[1];
    unaff_s15 = pfVar2[2];
  }
  if (DAT_09410ea2 == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_09410ea2 = '\x01';
  }
  fStack0000000000000018 = fStack0000000000000018 - (in_stack_00000010._4_4_ + unaff_s13);
  fStack000000000000001c = fStack000000000000001c - (in_stack_00000028 + unaff_s14);
  fStack0000000000000020 = fStack0000000000000020 - (fStack0000000000000024 + unaff_s15);
  if (**(float **)(*unaff_x21 + 0xb8) <= unaff_s8) {
    fVar3 = unaff_s10 * fStack0000000000000020 +
            fStack000000000000002c * fStack0000000000000018 + unaff_s9 * fStack000000000000001c;
    fStack0000000000000018 = fStack0000000000000018 - (fStack000000000000002c * fVar3) / unaff_s8;
    fStack000000000000001c = fStack000000000000001c - (unaff_s9 * fVar3) / unaff_s8;
    fStack0000000000000020 = fStack0000000000000020 - (unaff_s10 * fVar3) / unaff_s8;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = SQRT(fStack0000000000000020 * fStack0000000000000020 +
               fStack0000000000000018 * fStack0000000000000018 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar3 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    fStack0000000000000018 = **(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
  }
  else {
    fStack0000000000000018 = fStack0000000000000018 / fVar3;
  }
  uVar5 = FUN_073de158();
  fVar3 = (float)FUN_03f04c24(uVar5,0);
  fVar3 = fVar3 - (float)(int)(fVar3 / 360.0) * 360.0;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  fVar8 = *(float *)(*(long *)(unaff_x20 + 0x20) + 0x2c);
  uVar6 = (ulong)(uint)fStack0000000000000018;
  if ((fVar8 < fVar3) && (uVar6 = uVar5, ABS(fVar3 - fVar8) < ABS(360.0 - fVar3))) {
    uVar6 = FUN_073de204();
  }
  fVar3 = (float)FUN_073de418();
  return in_stack_00000010._4_4_ + unaff_s13 + (float)uVar6 * fVar3;
}


