/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingCollisionBoundsTagsInfo$$.ctor
ENTRY_POINT: 02d8e1f4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(void *param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  NullCheck(param_1);
  VirtualActionInvoker0::Invoke(6,*(Il2CppObject **)(unaff_x29 + -0x18));
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(lVar2 + 0x38) = 0;
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x38),(void *)0x0);
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  bVar1 = OVRPlugin_IsMixedRealityInitialized_mFAF884E1917CA77347F31FA3312FF0C50E52D7FE(0);
  *(byte *)(unaff_x29 + -0x19) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x19) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    bVar1 = OVRPlugin_ShutdownMixedReality_mB656E8CCEFB6FCEC25B8597307566A0C1883D1FE(0);
    *(byte *)(unaff_x29 + -0x1a) = bVar1 & 1;
  }
  return;
}


