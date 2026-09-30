/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 07a20704
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SceneCaptureComplete(float param_1,float param_2,float param_3)

{
  long lVar1;
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  
  if (0.0 <= param_1) {
    param_2 = unaff_s9;
  }
  *(float *)(unaff_x19 + 0x160) = param_2;
  if (0.0 <= param_2) {
    param_3 = 1.0;
  }
  if (unaff_s8 != param_3) {
    lVar1 = *(long *)(unaff_x19 + 0x168);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07a2075c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  return;
}


