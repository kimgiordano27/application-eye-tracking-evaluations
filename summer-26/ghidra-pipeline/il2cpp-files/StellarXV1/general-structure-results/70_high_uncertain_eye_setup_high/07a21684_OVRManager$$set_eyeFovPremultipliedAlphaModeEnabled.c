/*
FUNCTION_NAME: OVRManager$$set_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 07a21684
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__set_eyeFovPremultipliedAlphaModeEnabled
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float fVar16;
  float fVar17;
  
  thunk_FUN_040d65a8();
  fVar2 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar2 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
    fVar14 = *pfVar1;
    fVar15 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  else {
    fVar14 = unaff_s8 / fVar2;
    fVar15 = unaff_s9 / fVar2;
    fVar2 = unaff_s10 / fVar2;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar3 = unaff_x20[1];
    fVar8 = unaff_x20[2];
    fVar16 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar4 = *unaff_x20;
    fVar9 = fVar8;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar5 = (float)FUN_089d9dd0();
    fVar17 = *(float *)(unaff_x19 + 0x58);
    fVar10 = fVar9;
    fVar12 = param_3;
    uVar6 = FUN_089d9dd0();
    fVar11 = fVar15;
    fVar13 = fVar2;
    uVar7 = FUN_089b941c(fVar14,fVar15,fVar2,uVar6,fVar10,fVar12,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_089dc964((fVar4 - fVar14 * fVar16) + fVar5 * fVar17,
                   (fVar3 - fVar15 * fVar16) + fVar9 * fVar17,
                   (fVar8 - fVar2 * fVar16) + param_3 * fVar17,uVar7,fVar11,fVar13,uVar6,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


