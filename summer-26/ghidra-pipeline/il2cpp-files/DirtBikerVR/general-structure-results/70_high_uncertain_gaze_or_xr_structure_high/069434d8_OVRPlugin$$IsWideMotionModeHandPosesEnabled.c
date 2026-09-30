/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 069434d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
  do {
    if (*(long *)(param_1 + 200) == 0) goto LAB_06943560;
    fVar2 = (float)FUN_07c42008(unaff_s8,*(long *)(param_1 + 200),0);
    fVar3 = unaff_s8;
    if (fVar2 <= unaff_s9) {
      fVar3 = unaff_s10;
    }
    unaff_s10 = fVar3;
    unaff_s8 = unaff_s8 + unaff_s12;
    if (fVar2 <= unaff_s9) {
      fVar2 = unaff_s9;
    }
    unaff_s9 = fVar2;
  } while (unaff_s8 < unaff_s11);
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar3 = 1.0;
    }
    else {
      fVar3 = *(float *)(lVar1 + 0x20);
    }
    *param_2 = fVar3 * unaff_s9 * *(float *)(param_1 + 0x9c);
    *param_3 = unaff_s10 * *(float *)(param_1 + 0xe8);
    return;
  }
LAB_06943560:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


