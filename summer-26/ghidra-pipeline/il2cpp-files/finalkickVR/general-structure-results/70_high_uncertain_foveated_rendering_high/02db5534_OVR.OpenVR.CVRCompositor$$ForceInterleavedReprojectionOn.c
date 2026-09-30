/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$ForceInterleavedReprojectionOn
ENTRY_POINT: 02db5534
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


void OVR_OpenVR_CVRCompositor__ForceInterleavedReprojectionOn(byte param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  *(byte *)(unaff_x29 + -0x21) = param_1 & 1;
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
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02db5404 with catch @ 02db5598
                        */
  return;
}


