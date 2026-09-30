/*
FUNCTION_NAME: OVR.OpenVR.CVRCompositor$$LockGLSharedTextureForAccess
ENTRY_POINT: 02db584c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_foveation_hits_1;functionality_foveated_rendering
*/


void OVR_OpenVR_CVRCompositor__LockGLSharedTextureForAccess(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000025;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  
  puVar1 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*param_1);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar1,in_stack_00000008);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
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
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
      OVRP_1_46_0_ovrp_SetTiledMultiResDynamic_m3173A646660664BE5B2F562465E241C9368BD3C0
                (*(undefined4 *)(unaff_x29 + -0x14),0);
    }
  }
  return;
}


