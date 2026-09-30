/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers
ENTRY_POINT: 07a216f4
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


void OVRManager__OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  long unaff_x19;
  float *unaff_x20;
  long *unaff_x22;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar10 = *(float *)(param_1 + 8);
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    fVar1 = unaff_x20[1];
    fVar6 = unaff_x20[2];
    fVar11 = *(float *)(*(long *)(unaff_x19 + 0x40) + 0x60);
    fVar2 = *unaff_x20;
    fVar7 = fVar6;
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar3 = (float)FUN_089d9dd0();
    fVar12 = *(float *)(unaff_x19 + 0x58);
    uVar4 = FUN_089d9dd0();
    fVar8 = unaff_s9;
    fVar9 = fVar10;
    uVar5 = FUN_089b941c(0);
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      FUN_089dc964((fVar2 - unaff_s8 * fVar11) + fVar3 * fVar12,
                   (fVar1 - unaff_s9 * fVar11) + fVar7 * fVar12,
                   (fVar6 - fVar10 * fVar11) + param_4 * fVar12,uVar5,fVar8,fVar9,uVar4,
                   *(long *)(unaff_x19 + 0x38),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


