/*
FUNCTION_NAME: OVRPlugin$$UpdateExternalCamera
ENTRY_POINT: 03370e6c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__UpdateExternalCamera(long param_1)

{
  long lVar1;
  undefined1 in_CY;
  uint in_w9;
  int in_w10;
  uint in_w11;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar1 = (long)(int)in_w11;
    in_w11 = in_w11 + 1;
    if (9 < *(ushort *)(param_1 + lVar1 * 2 + 0x20) - 0x30) break;
    if (in_w10 <= (int)in_w11) {
      return 2;
    }
    in_CY = in_w9 <= in_w11;
  }
  return 3;
}


