/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 04f43a1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


bool OVRManager__OnPermissionGranted(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar8;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
  fVar7 = *(float *)(lVar1 + 0x18);
  fVar6 = *(float *)(lVar1 + 0x1c);
  fVar8 = *(float *)(lVar1 + 0x20);
  if (DAT_066c298e == '\0') {
    FUN_02b3c81c(PTR_DAT_06315600);
    DAT_066c298e = '\x01';
  }
  fVar3 = unaff_s13 - unaff_s10;
  fVar4 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  fVar2 = unaff_s12 - unaff_s11;
  fStack0000000000000008 = unaff_s14 - fStack0000000000000008;
  if (**(float **)(*(long *)PTR_DAT_06315600 + 0xb8) <= fVar4) {
    fVar5 = fStack0000000000000008 * fVar8 + fVar2 * fVar7 + fVar3 * fVar6;
    fVar2 = fVar2 - (fVar7 * fVar5) / fVar4;
    fVar3 = fVar3 - (fVar6 * fVar5) / fVar4;
    fStack0000000000000008 = fStack0000000000000008 - (fVar8 * fVar5) / fVar4;
  }
  return fStack000000000000000c * fStack000000000000000c <=
         fVar2 * fVar2 + fVar3 * fVar3 + fStack0000000000000008 * fStack0000000000000008;
}


