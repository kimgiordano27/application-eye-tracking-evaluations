/*
FUNCTION_NAME: OVR.OpenVR.IVRResources._LoadSharedResource$$BeginInvoke
ENTRY_POINT: 02da984c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


byte OVR_OpenVR_IVRResources__LoadSharedResource__BeginInvoke(Il2CppClass *param_1)

{
  int iVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  bStack000000000000000f = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    iVar1 = OVRP_1_1_0_ovrp_GetTrackingPositionSupported_m901C59C45F5B4D96F142FDAEF28FA63B324AF971
                      (0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


