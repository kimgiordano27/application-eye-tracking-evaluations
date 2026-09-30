/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._RemoveKeyInSection$$Invoke
ENTRY_POINT: 02da822c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 136
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


undefined8 OVR_OpenVR_IVRSettings__RemoveKeyInSection__Invoke(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x29;
  undefined4 uStack000000000000009c;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x50) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c0);
  *(undefined8 *)(unaff_x29 + -0x58) = *puVar2;
  uStack000000000000009c =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x50),*(undefined8 *)(unaff_x29 + -0x58),0);
  *(byte *)(unaff_x29 + -0x59) = (byte)uStack000000000000009c & 1;
  if ((*(byte *)(unaff_x29 + -0x59) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(lVar3 + 0x1058);
    NullCheck(*(void **)(unaff_x29 + -0x70));
    uVar1 = VirtualFuncInvoker0<String_t*>::Invoke(3,*(Il2CppObject **)(unaff_x29 + -0x70));
    *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x78);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c0);
    uVar1 = OVRP_1_1_0_ovrp_GetNativeSDKVersion_mAC76B2E3EF5065FB7C0BFCCB0272DDF84925F7D7(0);
    *(undefined8 *)(unaff_x29 + -0x68) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x68);
  }
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x10);
  if (*(long *)(unaff_x29 + -0x80) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)(lVar3 + 0x1058);
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb8);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    *(undefined8 *)(lVar3 + 0x10) = uVar1;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x10),*(void **)(unaff_x29 + -0xb8));
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0x10);
    NullCheck(*(void **)(unaff_x29 + -0x88));
    uVar1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4
                      (*(undefined8 *)(unaff_x29 + -0x88),0x2d,0,0);
    *(undefined8 *)(unaff_x29 + -0x90) = uVar1;
    NullCheck(*(void **)(unaff_x29 + -0x90));
    *(undefined4 *)(unaff_x29 + -0x94) = 0;
    uVar1 = StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248::GetAt
                      (*(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248 **)
                        (unaff_x29 + -0x90),(long)*(int *)(unaff_x29 + -0x94));
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x29 + -0x10);
    uVar1 = il2cpp_codegen_object_new
                      (*(Il2CppClass **)
                        Method_UnityEngine_InputSystem_InputControl<Vector2>_ReadValueFromState__);
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar1;
    Version__ctor_m52D06833AE6481C0A9B72085BDC4D09A723CEF7F
              (*(undefined8 *)(unaff_x29 + -0xb0),*(undefined8 *)(unaff_x29 + -0xa8),0);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
    uVar1 = *(undefined8 *)(unaff_x29 + -0xb0);
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    *(undefined8 *)(lVar3 + 0x10) = uVar1;
    lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x10),*(void **)(unaff_x29 + -0xb0));
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_000000c8);
  lVar3 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_000000c8);
  return *(undefined8 *)(lVar3 + 0x10);
}


