/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetFrameTimings$$BeginInvoke
ENTRY_POINT: 02d90a2c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_IVRCompositor__GetFrameTimings__BeginInvoke(int param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  undefined1 *puStack0000000000000008;
  size_t sStack0000000000000010;
  undefined8 *in_stack_00000078;
  undefined4 uStack000000000000008c;
  byte bStack0000000000000093;
  undefined4 uStack0000000000000094;
  int iStack0000000000000114;
  
  if (0 < param_1) {
    puStack0000000000000008 = &stack0x00000098;
    sStack0000000000000010 = 0x7c;
    iStack0000000000000114 = param_1;
    memcpy(puStack0000000000000008,(void *)(unaff_x29 + -0xb4),0x7c);
    memcpy((void *)(*(long *)(unaff_x29 + -0x18) + 0x130),puStack0000000000000008,
           sStack0000000000000010);
    uStack0000000000000094 = *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xdc);
    *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0xe0) = uStack0000000000000094;
    bStack0000000000000093 = *(byte *)(*(long *)(unaff_x29 + -0x18) + 0xd3) & 1;
    if (bStack0000000000000093 == 0) {
      uStack000000000000008c =
           OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                     (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18),
                      (MethodInfo *)0x0);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000078);
      uVar1 = OVRPlugin_GetLayerTextureStageCount_m7ACFF1E9AA4708B227460BB30021AA34347ED874
                        (uStack000000000000008c,0);
      *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = uVar1;
    }
    else {
      *(undefined4 *)(*(long *)(unaff_x29 + -0x18) + 0x1ac) = 1;
    }
  }
  *(undefined1 *)(*(long *)(unaff_x29 + -0x18) + 0x120) = 0;
  *(undefined1 *)(unaff_x29 + -1) = 1;
  return *(byte *)(unaff_x29 + -1) & 1;
}


