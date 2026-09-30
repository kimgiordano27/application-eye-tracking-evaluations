/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$UnregisterRaycaster
ENTRY_POINT: 06d8e078
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__UnregisterRaycaster
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8)

{
  bool in_NG;
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float in_s18;
  float in_s21;
  
  if (in_NG) {
    param_5 = 0.0;
  }
  FUN_07d81e60(param_6 + param_5 * (param_3 - param_6),param_7 + param_5 * (param_2 - param_7),
               param_8 + param_5 * (param_1 - param_8));
  fVar1 = unaff_s9;
  if (unaff_s10 < unaff_s9) {
    fVar1 = unaff_s10;
  }
  if (unaff_s9 < 0.0) {
    fVar1 = 0.0;
  }
  FUN_07d81e60(*(float *)(unaff_x19 + 0x244) + fVar1 * (unaff_s8 - *(float *)(unaff_x19 + 0x244)),
               *(float *)(unaff_x19 + 0x248) + fVar1 * (unaff_s11 - *(float *)(unaff_x19 + 0x248)),
               *(float *)(unaff_x19 + 0x24c) +
               fVar1 * ((in_s18 + param_4 * in_s21) - *(float *)(unaff_x19 + 0x24c)));
  return;
}


