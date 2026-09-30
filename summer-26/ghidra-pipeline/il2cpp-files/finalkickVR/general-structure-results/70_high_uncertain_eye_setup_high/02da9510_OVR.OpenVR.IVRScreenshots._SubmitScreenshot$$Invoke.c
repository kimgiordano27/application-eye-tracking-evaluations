/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._SubmitScreenshot$$Invoke
ENTRY_POINT: 02da9510
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRScreenshots__SubmitScreenshot__Invoke(Il2CppClass *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  
  il2cpp_codegen_runtime_class_init_inline(param_1);
  bVar1 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x11) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x11) & 1) != 0) {
    *(byte *)(unaff_x29 + -0x12) = *(byte *)(unaff_x29 + -1) & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    uVar2 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0
                      (*(byte *)(unaff_x29 + -0x12) & 1);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetClassName__
              );
    OVRP_1_1_0_ovrp_SetTrackingPositionEnabled_mECD025121EA993B0C8814CCF21F750F4E70C9A7B(uVar2,0);
  }
  return;
}


