/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Open$$BeginInvoke
ENTRY_POINT: 02dad804
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVR_OpenVR_IVRIOBuffer__Open__BeginInvoke(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined4 uStack000000000000002c;
  byte bStack0000000000000037;
  
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  bVar3 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  *(byte *)(unaff_x29 + -0x29) = bVar3 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x28);
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x38);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
    bStack0000000000000037 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
    bStack0000000000000037 = bStack0000000000000037 & 1;
    if (bStack0000000000000037 != 0) {
      uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
      uStack000000000000002c = *(undefined4 *)(unaff_x29 + -0x10);
      uVar2 = *(undefined4 *)(unaff_x29 + -0x14);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      OVRP_1_15_0_ovrp_GetLayerTexturePtr_m23466B676295EF41A8D114618A8BE535322862FA
                (uVar1,uStack000000000000002c,uVar2,unaff_x29 + -0x28,0);
    }
    *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(unaff_x29 + -0x28);
  }
  return *(undefined8 *)(unaff_x29 + -8);
}


