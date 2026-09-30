/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$.cctor
ENTRY_POINT: 0369c140
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_5_0___cctor(ulong param_1,undefined8 param_2)

{
  uint in_w8;
  long unaff_x19;
  ulong unaff_x20;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  ulong unaff_d11;
  
  if ((in_w8 & 1) == 0) {
    param_1 = (ulong)(uint)(*(float *)(unaff_x19 + 0x9c) - unaff_s10);
  }
  FUN_0369c5d4(param_1,param_2,*(undefined8 *)(unaff_x19 + 0x70));
  if (0.0 <= unaff_s8) {
    unaff_d11 = (ulong)*(uint *)(unaff_x19 + 0x9c);
  }
  else if ((unaff_x20 & 1) != 0) {
    unaff_d11 = (ulong)(uint)(unaff_s9 + *(float *)(unaff_x19 + 0x9c));
  }
  OVRPlugin_OVRP_1_6_0___cctor(unaff_d11);
  FUN_0369c6b0();
  return;
}


