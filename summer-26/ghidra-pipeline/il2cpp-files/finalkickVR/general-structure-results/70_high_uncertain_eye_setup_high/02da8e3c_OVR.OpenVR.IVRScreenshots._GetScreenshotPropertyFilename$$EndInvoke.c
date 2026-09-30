/*
FUNCTION_NAME: OVR.OpenVR.IVRScreenshots._GetScreenshotPropertyFilename$$EndInvoke
ENTRY_POINT: 02da8e3c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRScreenshots__GetScreenshotPropertyFilename__EndInvoke(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack000000000000001e;
  byte bStack000000000000001f;
  
  uStack0000000000000000 = param_1;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar3,uStack0000000000000000);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    bStack000000000000001e = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
    bStack000000000000001e = bStack000000000000001e & 1;
    if (bStack000000000000001e == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
      iVar1 = OVRP_1_7_0_ovrp_GetAppChromaticCorrection_m600DFD3314C3D9F3D4ACC76C813CB3513393161B(0)
      ;
      *(bool *)(unaff_x29 + -1) = iVar1 == 1;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


