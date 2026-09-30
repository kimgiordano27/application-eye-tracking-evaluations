/*
FUNCTION_NAME: OVRPlugin$$StartBodyTracking
ENTRY_POINT: 06950d54
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartBodyTracking(float param_1,undefined1 param_2 [16],float param_3,long param_4)

{
  long unaff_x19;
  
  *(float *)(unaff_x19 + 0x30) = SQRT(param_3 * param_3 + param_1);
  if (param_4 != 0) {
    FUN_07cacacc(param_4,0);
    *(float *)(unaff_x19 + 0x34) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


