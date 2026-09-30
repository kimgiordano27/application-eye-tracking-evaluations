/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetOverlayTransformAbsolute
ENTRY_POINT: 02db6cd0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_CVROverlay__SetOverlayTransformAbsolute(ulong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  byte bStack0000000000000025;
  byte bStack0000000000000026;
  byte bStack0000000000000027;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  OVRPlugin_set_localDimming_mB802F316C5988ACA499BA45E7B9D6590570025AB::s_Il2CppMethodInitialized =
       1;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar2,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    bStack0000000000000026 =
         OVRPlugin_get_localDimmingSupported_m33C94209109E4B84E3F531A9005747FF38D6D75C(0);
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
      OVRP_1_78_0_ovrp_SetLocalDimming_m3D67E05D5C7136AAFC7EB1F92F505EE8D51E01A3
                (*(undefined4 *)(unaff_x29 + -0x14),0);
    }
  }
  return;
}


