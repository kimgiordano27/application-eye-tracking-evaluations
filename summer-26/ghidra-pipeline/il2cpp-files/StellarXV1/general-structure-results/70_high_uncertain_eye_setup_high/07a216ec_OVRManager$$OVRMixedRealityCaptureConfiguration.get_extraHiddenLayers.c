/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers
ENTRY_POINT: 07a216ec
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  float *pfVar1;
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  pfVar1 = *(float **)(param_1 + 0xb8);
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar2 = unaff_x20[1];
    fVar7 = unaff_x20[2];
    fVar16 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar3 = *unaff_x20;
    fVar8 = fVar7;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar4 = (float)FUN_089d9dd0();
    fVar17 = *(float *)(unaff_x19 + 0x58);
    fVar9 = fVar8;
    fVar11 = param_4;
    uVar5 = FUN_089d9dd0();
    fVar10 = fVar14;
    fVar12 = fVar15;
    uVar6 = FUN_089b941c(fVar13,fVar14,fVar15,uVar5,fVar9,fVar11,0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_089dc964((fVar3 - fVar13 * fVar16) + fVar4 * fVar17,
                   (fVar2 - fVar14 * fVar16) + fVar8 * fVar17,
                   (fVar7 - fVar15 * fVar16) + param_4 * fVar17,uVar6,fVar10,fVar12,uVar5,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


