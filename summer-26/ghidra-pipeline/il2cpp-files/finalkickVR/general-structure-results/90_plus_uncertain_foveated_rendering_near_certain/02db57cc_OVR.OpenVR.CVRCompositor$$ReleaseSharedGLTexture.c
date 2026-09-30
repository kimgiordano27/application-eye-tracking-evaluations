/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ReleaseSharedGLTexture
ENTRY_POINT: 02db57cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_3;strong_foveation_hits_3;functionality_foveated_rendering
*/


void OVR_OpenVR_CVRCompositor__ReleaseSharedGLTexture(byte param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  ulong *puStack0000000000000018;
  byte bStack0000000000000025;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_CA2BEBFC02610067B3BE9BD5234CAA2147E5D7B56FC7FA5E66E19AF2E23C341F
  ;
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_CA2BEBFC02610067B3BE9BD5234CAA2147E5D7B56FC7FA5E66E19AF2E23C341F
  ;
  puStack0000000000000018 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(byte *)(unaff_x29 + -1) = param_1 & 1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_set_useDynamicFoveatedRendering_m949D0217B4460D9F15BE4E5F9F8201AA952DC4C9::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    OVRPlugin_set_useDynamicFoveatedRendering_m949D0217B4460D9F15BE4E5F9F8201AA952DC4C9::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    bStack0000000000000026 =
         OVRPlugin_get_foveatedRenderingSupported_m8BFE70FA6ABF3B05A2AA330AA79E4F3FDE3ACF1E(0);
    bStack0000000000000026 = bStack0000000000000026 & 1;
    if (bStack0000000000000026 != 0) {
      bStack0000000000000025 = *(byte *)(unaff_x29 + -1) & 1;
      if (bStack0000000000000025 == 0) {
        *(undefined4 *)(unaff_x29 + -0x14) = 0;
      }
      else {
        *(undefined4 *)(unaff_x29 + -0x14) = 1;
      }
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
      OVRP_1_46_0_ovrp_SetTiledMultiResDynamic_m3173A646660664BE5B2F562465E241C9368BD3C0
                (*(undefined4 *)(unaff_x29 + -0x14),0);
    }
  }
  return;
}


