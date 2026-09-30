/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ReleaseMirrorTextureD3D11
ENTRY_POINT: 02db56dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_foveation_hits_1;functionality_foveated_rendering
*/


byte OVR_OpenVR_CVRCompositor__ReleaseMirrorTextureD3D11(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long unaff_x29;
  int iStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*param_1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar2;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),
                     in_stack_00000010);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    bVar1 = OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
    *(byte *)(unaff_x29 + -0x2a) = bVar1 & 1;
    if ((*(byte *)(unaff_x29 + -0x2a) & 1) != 0) {
      iStack000000000000000c = 0;
      *(undefined4 *)(unaff_x29 + -0x14) = 0;
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      OVRP_1_46_0_ovrp_GetTiledMultiResDynamic_m7D38817BF6B580BCD3EB0F704B0F303D04C36584
                (unaff_x29 + -0x14,0);
      if (*(int *)(unaff_x29 + -0x14) != 0) {
        iStack000000000000000c = 1;
      }
      *(bool *)(unaff_x29 + -1) = iStack000000000000000c != 0;
      goto LAB_02db57ac;
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
LAB_02db57ac:
  return *(byte *)(unaff_x29 + -1) & 1;
}


