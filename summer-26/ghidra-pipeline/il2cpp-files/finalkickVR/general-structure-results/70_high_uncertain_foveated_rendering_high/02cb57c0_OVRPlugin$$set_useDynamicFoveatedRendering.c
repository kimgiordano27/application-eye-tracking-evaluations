/*
FUNCTION_NAME: OVRPlugin$$set_useDynamicFoveatedRendering
ENTRY_POINT: 02cb57c0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_useDynamicFoveatedRendering(void)

{
  long lVar1;
  undefined8 *in_stack_00000010;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  Callback_HandleMessage_m7D9FEE932E3BDBEBE74EBC89165A8E807870104A(*(undefined8 *)(lVar1 + 0x18),0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  lVar1 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  Il2CppCodeGenWriteBarrier((void **)(lVar1 + 0x18),(void *)0x0);
  return;
}


