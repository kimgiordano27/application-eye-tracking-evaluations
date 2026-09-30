/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$ovrp_SetColorScaleAndOffset
ENTRY_POINT: 033f2148
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


int OVRPlugin_OVRP_1_31_0__ovrp_SetColorScaleAndOffset
              (ulong param_1,undefined8 param_2,int param_3,undefined8 param_4,uint *param_5,
              int param_6)

{
  uint uVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong in_x9;
  uint *in_x10;
  uint in_w11;
  
  while( true ) {
    uVar1 = 0;
    if (in_x9 != 0) {
      uVar1 = (uint)(((ulong)in_w11 | param_1 << 0x20) / in_x9);
    }
    *in_x10 = uVar1;
    uVar1 = in_w11 - uVar1 * param_6;
    param_1 = (ulong)uVar1;
    *param_5 = uVar1;
    if ((bool)in_ZR || in_NG != in_OV) break;
    in_w11 = in_x10[-1];
    param_3 = param_3 + -1;
    in_NG = param_3 < 0;
    in_ZR = param_3 == 0;
    in_OV = '\0';
    in_x10 = in_x10 + -1;
  }
  return param_6;
}


