/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetOverlayFlag
ENTRY_POINT: 02db61dc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVR_OpenVR_CVROverlay__SetOverlayFlag(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined4 uVar4;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  ulong *in_stack_00000028;
  byte bStack0000000000000037;
  
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
  il2cpp_codegen_initialize_runtime_metadata(in_stack_00000028);
  OVRPlugin_get_systemDisplayFrequency_mE361150773912E90EB67F7A13520B90C1612D70E::
  s_Il2CppMethodInitialized = 1;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar3;
  bVar1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar1 & 1;
                    /* try { // try from 02db6258 to 02eb62b7 has its CatchHandler @ 02db5fbc */
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000028);
    uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
    bStack0000000000000037 =
         Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
    bStack0000000000000037 = bStack0000000000000037 & 1;
    if (bStack0000000000000037 == 0) {
      *(undefined4 *)(unaff_x29 + -4) = 0;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
      uVar4 = OVRP_1_1_0_ovrp_GetSystemDisplayFrequency_m683D288B3E9A54A6C660310218DB16366CB3B2B3(0)
      ;
      *(undefined4 *)(unaff_x29 + -4) = uVar4;
    }
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    uVar4 = OVRP_1_21_0_ovrp_GetSystemDisplayFrequency2_m559AA33BED026425684B1F5962D34EA783EE6770
                      (unaff_x29 + -0x14,0);
    *(undefined4 *)(unaff_x29 + -0x30) = uVar4;
    if (*(int *)(unaff_x29 + -0x30) == 0) {
      *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x14);
      *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x34);
    }
    else {
      *(undefined4 *)(unaff_x29 + -4) = 0;
    }
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


