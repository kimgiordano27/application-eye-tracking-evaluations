/*
FUNCTION_NAME: OVR.OpenVR.IVRCompositor._SetSkyboxOverride$$Invoke
ENTRY_POINT: 02d91b80
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


void OVR_OpenVR_IVRCompositor__SetSkyboxOverride__Invoke(void)

{
  undefined8 uVar1;
  long unaff_x29;
  undefined8 *in_stack_00000118;
  byte bStack0000000000000147;
  undefined8 uStack0000000000000148;
  
  uStack0000000000000148 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0);
  bStack0000000000000147 =
       IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(uStack0000000000000148,0,0);
  bStack0000000000000147 = bStack0000000000000147 & 1;
  if (bStack0000000000000147 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000118);
    OVRPlugin_EnqueueDestroyLayer_mC4A991C01B4734190C2F8291670BE84B30AB252B(uVar1);
    *(undefined8 *)(*(long *)(unaff_x29 + -8) + 0x1c0) = 0;
    GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(*(long *)(unaff_x29 + -8) + 0x1b8,0);
    OVROverlay_set_layerId_m28284412D866364354AF5355DD29ED5643F4BA46_inline
              (*(OVROverlay_t236C8597A48845938E1DE1D591224817058AC43D **)(unaff_x29 + -8),0,
               (MethodInfo *)0x0);
  }
  il2cpp_codegen_initobj((void *)(*(long *)(unaff_x29 + -8) + 0x130),0x7c);
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1c8) = 0;
  *(undefined4 *)(*(long *)(unaff_x29 + -8) + 0x1cc) = 0xffffffff;
  return;
}


