/*
FUNCTION_NAME: OVRPlugin$$SetFaceTrackingVisemesEnabled
ENTRY_POINT: 073ed5fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__SetFaceTrackingVisemesEnabled(void)

{
  int in_w8;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  if (in_w8 == 0) {
    thunk_FUN_03cd7500();
  }
  fVar2 = SQRT(unaff_s11 * unaff_s11 + unaff_s13 * unaff_s13 + unaff_s12 * unaff_s12);
  if (fVar2 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar5 = unaff_s13 / fVar2;
    fVar6 = unaff_s12 / fVar2;
    fVar2 = unaff_s11 / fVar2;
  }
  if (DAT_0941112a == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_0941112a = '\x01';
  }
  fVar3 = fVar2 * fVar2 + fVar5 * fVar5 + fVar6 * fVar6;
  if (**(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8) <= fVar3) {
    fVar4 = (fStack000000000000007c - fStack0000000000000008) * fVar2 +
            (fStack000000000000000c - unaff_s14) * fVar5 +
            (fStack0000000000000078 - unaff_s15) * fVar6;
    fVar5 = (fVar5 * fVar4) / fVar3;
    fVar6 = (fVar6 * fVar4) / fVar3;
    fVar3 = (fVar2 * fVar4) / fVar3;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar3 = pfVar1[2];
  }
  return 0.0 < unaff_s11 * fVar3 + unaff_s13 * fVar5 + unaff_s12 * fVar6;
}


