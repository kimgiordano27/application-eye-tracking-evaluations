/*
FUNCTION_NAME: OVRVignette$$DisableRenderers
ENTRY_POINT: 02d69c14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVRVignette__DisableRenderers(void)

{
  byte bVar1;
  long unaff_x29;
  undefined8 *in_stack_00000000;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000000);
  bVar1 = OVRPlugin_GetNodePositionValid_m855200815DB6B89892A8057D87434E62177ADFDC(0xc,0);
  *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


