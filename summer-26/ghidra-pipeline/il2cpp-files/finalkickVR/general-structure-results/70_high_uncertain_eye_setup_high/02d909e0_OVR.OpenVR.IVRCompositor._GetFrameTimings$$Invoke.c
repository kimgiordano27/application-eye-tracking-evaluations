/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._GetFrameTimings$$Invoke
ENTRY_POINT: 02d909e0
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


byte OVR_OpenVR_IVRCompositor__GetFrameTimings__Invoke(long param_1)

{
  undefined4 uVar1;
  int *piVar2;
  OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D *pOVar3;
  long unaff_x29;
  MethodInfo *in_stack_00000050;
  undefined8 *in_stack_00000068;
  undefined8 *in_stack_00000078;
  undefined4 uStack000000000000008c;
  byte bStack0000000000000093;
  undefined4 uStack0000000000000094;
  int iStack0000000000000114;
  Il2CppObject *in_stack_00000118;
  long lStack0000000000000120;
  
  lStack0000000000000120 = param_1 + 0x1b8;
  in_stack_00000118 =
       (Il2CppObject *)
       GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(lStack0000000000000120);
  pOVar3 = *(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18);
  piVar2 = (int *)UnBox(in_stack_00000118,(Il2CppClass *)*in_stack_00000068);
  OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
            (pOVar3,*piVar2,in_stack_00000050);
  iStack0000000000000114 =
       OVROverlay_get_layerId_mA7DC748DC6428FC5D81249F457EE93C790B254D2_inline
                 (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -0x18),
                  in_stack_00000050);
  if (0 < iStack0000000000000114) {
    memcpy(&stack0x00000098,(void *)(unaff_x29 + -0xb4),0x7c);
    memcpy((void *)(*(long *)(unaff_x29 + -0x18) + 0x130),&stack0x00000098,0x7c);
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


