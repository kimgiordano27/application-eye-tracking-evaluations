/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$InitializeEyePoseProvider
ENTRY_POINT: 071d7cbc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin__InitializeEyePoseProvider
          (long param_1,int param_2,int param_3)

{
  int in_w8;
  uint in_w9;
  
  while( true ) {
    if (9 < in_w9) {
      return 3;
    }
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    if (param_3 == 0) break;
    if (in_w8 == param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    in_w9 = *(ushort *)(param_1 + (long)param_2 * 2 + 0x20) - 0x30;
  }
  return 2;
}


