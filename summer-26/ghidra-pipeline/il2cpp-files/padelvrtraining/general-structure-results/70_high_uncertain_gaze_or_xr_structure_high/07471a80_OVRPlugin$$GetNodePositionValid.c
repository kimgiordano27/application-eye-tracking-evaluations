/*
FUNCTION_NAME: OVRPlugin$$GetNodePositionValid
ENTRY_POINT: 07471a80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetNodePositionValid(long param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float unaff_s8;
  
  if (param_2 == 0.0) {
    if (param_1 == 0) {
LAB_07471adc:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    fVar2 = 360.0;
  }
  else {
    if (param_1 == 0) goto LAB_07471adc;
    fVar1 = unaff_s8 - (float)(int)(unaff_s8 / 360.0) * 360.0;
    fVar2 = fVar1;
    if (360.0 < fVar1) {
      fVar2 = 360.0;
    }
    if (fVar1 < 0.0) {
      fVar2 = 0.0;
    }
  }
  *(float *)(param_1 + 0x28) = fVar2;
  return;
}


