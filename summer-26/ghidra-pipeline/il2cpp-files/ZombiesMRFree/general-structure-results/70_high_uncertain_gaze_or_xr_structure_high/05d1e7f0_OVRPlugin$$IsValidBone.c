/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 05d1e7f0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin__IsValidBone(void)

{
  float *pfVar1;
  float *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar4;
  float fVar5;
  float unaff_s12;
  float unaff_s14;
  float fVar6;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  *(undefined1 *)(unaff_x21 + 0x669) = 1;
  pfVar1 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  if (DAT_0738e6c6 == '\0') {
    fStack000000000000000c = unaff_s9;
    FUN_02fe925c(PTR_DAT_06f6e7c0);
    DAT_0738e6c6 = '\x01';
    unaff_s9 = fStack000000000000000c;
  }
  fVar2 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  if (**(float **)(*(long *)PTR_DAT_06f6e7c0 + 0xb8) <= fVar2) {
    fVar3 = (unaff_s12 - fStack000000000000002c) * fVar6 +
            (fStack0000000000000014 - fStack0000000000000024) * fVar4 +
            (fStack0000000000000018 - fStack0000000000000028) * fVar5;
    fVar4 = (fVar4 * fVar3) / fVar2;
    fVar5 = (fVar5 * fVar3) / fVar2;
    fVar2 = (fVar6 * fVar3) / fVar2;
  }
  else {
    if (DAT_0738e669 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d5d8);
      DAT_0738e669 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  if (unaff_s8 * fVar2 + unaff_s9 * fVar4 + unaff_s14 * fVar5 <= 0.0) {
    fVar5 = 0.0;
    fStack000000000000001c = fStack0000000000000024;
  }
  else {
    fVar6 = fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2;
    fVar5 = 1.0;
    if (fVar6 < unaff_s10) {
      if (DAT_0738e6c8 == '\0') {
        FUN_02fe925c(0x3f800000,fStack000000000000001c,uStack0000000000000020,PTR_DAT_06f6d508);
        DAT_0738e6c8 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_02fdcff0(), DAT_0738e6c8 == '\0')) {
        FUN_02fe925c(PTR_DAT_06f6d508);
        DAT_0738e6c8 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      fStack000000000000001c = fStack0000000000000024 + fVar4;
      fVar5 = SQRT(fVar6) / fStack0000000000000010;
    }
  }
  *unaff_x19 = fVar5;
  return fStack000000000000001c;
}


