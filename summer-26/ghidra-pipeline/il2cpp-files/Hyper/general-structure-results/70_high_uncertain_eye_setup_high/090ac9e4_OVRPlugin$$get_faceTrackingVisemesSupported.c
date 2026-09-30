/*
FUNCTION_NAME: OVRPlugin$$get_faceTrackingVisemesSupported
ENTRY_POINT: 090ac9e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_faceTrackingVisemesSupported
                (long param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000020;
  
  if (0.0 <= param_2) {
    param_4 = param_3;
  }
  if (param_1 != 0) {
    if ((*(float *)(param_1 + 0x2c) < param_4) &&
       (unaff_s11 = unaff_s14, ABS(param_4 - *(float *)(param_1 + 0x2c)) < ABS(360.0 - param_4))) {
      unaff_s11 = (float)FUN_090ab8ac();
    }
    fVar1 = (float)FUN_090abac0();
    return in_stack_00000020._4_4_ + unaff_s11 * fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


