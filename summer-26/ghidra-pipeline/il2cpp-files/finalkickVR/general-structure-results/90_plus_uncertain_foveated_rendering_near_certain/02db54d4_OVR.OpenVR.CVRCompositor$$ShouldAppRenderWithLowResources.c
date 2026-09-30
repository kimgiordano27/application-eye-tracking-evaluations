/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ShouldAppRenderWithLowResources
ENTRY_POINT: 02db54d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVR_OpenVR_CVRCompositor__ShouldAppRenderWithLowResources(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  ulong *in_stack_00000018;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
  OVRPlugin_set_foveatedRenderingLevel_m8330487C9D755477E59CE553A086D94A071C0C54::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  *(undefined8 *)(unaff_x29 + -0x20) = *puVar4;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x18),*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    bVar2 = OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
    *(byte *)(unaff_x29 + -0x22) = bVar2 & 1;
    if ((*(byte *)(unaff_x29 + -0x22) & 1) != 0) {
      uVar1 = *(undefined4 *)(unaff_x29 + -4);
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
      OVRP_1_21_0_ovrp_SetTiledMultiResLevel_m053D016AA4CB643999F8E9A3A37455ED62D7E1E2(uVar1,0);
    }
  }
  return;
}


