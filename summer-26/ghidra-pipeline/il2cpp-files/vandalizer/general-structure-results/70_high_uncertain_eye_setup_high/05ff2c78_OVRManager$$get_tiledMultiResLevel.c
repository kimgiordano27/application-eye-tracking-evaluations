/*
FUNCTION_NAME: OVRManager$$get_tiledMultiResLevel
ENTRY_POINT: 05ff2c78
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_tiledMultiResLevel(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float fVar3;
  
  if (param_2 <= param_1 - param_3) {
    lVar1 = *(long *)(unaff_x19 + 0x30);
    fVar2 = ((param_1 - param_3) - param_2) / *(float *)(unaff_x19 + 0x50);
    fVar3 = fVar2;
    if (1.0 < fVar2) {
      fVar3 = 1.0;
    }
    fVar3 = 1.0 - fVar3;
    if (fVar2 < 0.0) {
      fVar3 = 1.0;
    }
    if (lVar1 == 0) {
LAB_05ff2cdc:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    *(float *)(lVar1 + 0x7c) = fVar3;
    if (fVar3 <= 0.0) {
      FUN_06e547e8(lVar1,0,0);
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_05ff2cdc;
      *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = 0x43b40000;
    }
  }
  return;
}


