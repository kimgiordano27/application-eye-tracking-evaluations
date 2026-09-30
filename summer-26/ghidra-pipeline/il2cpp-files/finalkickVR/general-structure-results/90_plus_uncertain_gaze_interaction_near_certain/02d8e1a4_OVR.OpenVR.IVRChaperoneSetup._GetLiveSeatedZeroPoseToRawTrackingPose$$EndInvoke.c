/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 02d8e1a4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__EndInvoke(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(lVar2 + 0x38);
  if (*(long *)(unaff_x29 + -0x10) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar2 + 0x38);
    NullCheck(*(void **)(unaff_x29 + -0x18));
    VirtualActionInvoker0::Invoke(6,*(Il2CppObject **)(unaff_x29 + -0x18));
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
    Il2CppCodeGenWriteBarrier((void **)(lVar2 + 0x38),(void *)0x0);
  }
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


