/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 073c378c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetTranslation(long *param_1)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float fVar5;
  float unaff_s11;
  float fVar6;
  float unaff_s13;
  float unaff_s14;
  
  fVar5 = unaff_s10 - unaff_s13;
  fVar6 = unaff_s11 - unaff_s14;
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar3 = SQRT(fVar6 * fVar6 + unaff_s9 * unaff_s9 + fVar5 * fVar5);
  if (fVar3 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_08e68e18 + 0xb8);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[1];
    fVar6 = pfVar1[2];
  }
  else {
    fVar4 = unaff_s9 / fVar3;
    fVar5 = fVar5 / fVar3;
    fVar6 = fVar6 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_085db068(*(long *)(unaff_x19 + 0x30),1,0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x4c) = 1;
      *(float *)(lVar2 + 0x40) = fVar4;
      *(float *)(lVar2 + 0x44) = fVar5;
      *(float *)(lVar2 + 0x48) = fVar6;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


