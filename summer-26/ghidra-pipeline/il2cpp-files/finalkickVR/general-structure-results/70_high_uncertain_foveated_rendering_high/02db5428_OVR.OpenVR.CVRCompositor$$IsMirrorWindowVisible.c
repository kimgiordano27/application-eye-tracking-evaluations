/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$IsMirrorWindowVisible
ENTRY_POINT: 02db5428
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_1;functionality_foveated_rendering
*/


undefined4 OVR_OpenVR_CVRCompositor__IsMirrorWindowVisible(void)

{
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000026;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bStack0000000000000026 =
       OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
  bStack0000000000000026 = bStack0000000000000026 & 1;
  if (bStack0000000000000026 == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    OVRP_1_21_0_ovrp_GetTiledMultiResLevel_m246E37CB5071A0914E5BD2A4B7227892CA6F47C5
              (unaff_x29 + -0x14,0);
    *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x14);
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


