/*
FUNCTION_NAME: OVRManager$$get_boundary
ENTRY_POINT: 07a1dddc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_boundary(float param_1,long param_2)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 1.0;
  if (0.0 <= param_1) {
    fVar1 = 1.0 - fVar2;
  }
  *(float *)(param_2 + 0x7c) = fVar1;
  if (fVar1 <= 0.0) {
    FUN_089c6d28(param_2,0,0);
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = 0x43b40000;
  }
  return;
}


