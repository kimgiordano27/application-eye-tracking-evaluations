/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetControllerState4
ENTRY_POINT: 02c501e0
PROGRAM: sharks-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2 OVRPlugin_OVRP_1_16_0__ovrp_GetControllerState4(long param_1,undefined8 param_2)

{
  uint in_w9;
  uint in_w10;
  uint in_w11;
  int in_w12;
  
  do {
    if (*(ushort *)(param_1 + (long)(int)in_w11 * 2 + 0x20) == in_w10) {
      if (in_w11 + 1 < in_w9) {
        return *(undefined2 *)(param_1 + (long)(int)(in_w11 + 1) * 2 + 0x20);
      }
      break;
    }
    in_w11 = in_w11 + 2;
    param_2 = 0;
    if (in_w12 <= (int)in_w11) {
      return 0;
    }
  } while (in_w11 < in_w9);
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0(param_2);
}


