/*
FUNCTION_NAME: Virtence.OpenTypeCS.TrueTypeTable$$set_Length
ENTRY_POINT: 02e19c20
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


byte Virtence_OpenTypeCS_TrueTypeTable__set_Length(long param_1)

{
  byte bVar1;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  byte bStack000000000000001f;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)**(undefined8 **)(param_1 + 0x6b8));
  bStack000000000000001f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    switch(*(undefined4 *)(unaff_x29 + -0x14)) {
    case 0:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(5,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 1:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(6,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 2:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(7,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    case 3:
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      bVar1 = OVRPlugin_GetNodePositionTracked_m7921BCEF65C51982D626A264426AE6A31BCB110B(8,0);
      *(byte *)(unaff_x29 + -1) = bVar1 & 1;
      break;
    default:
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


