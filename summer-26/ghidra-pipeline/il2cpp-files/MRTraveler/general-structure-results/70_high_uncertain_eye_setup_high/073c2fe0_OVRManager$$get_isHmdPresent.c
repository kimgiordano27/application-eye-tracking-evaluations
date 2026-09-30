/*
FUNCTION_NAME: OVRManager$$get_isHmdPresent
ENTRY_POINT: 073c2fe0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_isHmdPresent(float param_1,undefined1 param_2 [16],float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  
  lVar1 = *(long *)(unaff_x19 + 0x30);
  param_1 = param_1 / param_3;
  fVar2 = param_1;
  if (1.0 < param_1) {
    fVar2 = 1.0;
  }
  fVar2 = 1.0 - fVar2;
  if (param_1 < 0.0) {
    fVar2 = 1.0;
  }
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x7c) = fVar2;
    if (fVar2 <= 0.0) {
      FUN_085db068(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_073c3030;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = 0x43b40000;
    }
    return;
  }
LAB_073c3030:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


