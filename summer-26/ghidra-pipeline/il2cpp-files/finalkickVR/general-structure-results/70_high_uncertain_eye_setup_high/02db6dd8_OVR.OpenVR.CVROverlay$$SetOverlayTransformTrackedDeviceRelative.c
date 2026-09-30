/*
FUNCTION_NAME: OVR.OpenVR.CVROverlay$$SetOverlayTransformTrackedDeviceRelative
ENTRY_POINT: 02db6dd8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4 OVR_OpenVR_CVROverlay__SetOverlayTransformTrackedDeviceRelative(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong *in_stack_00000010;
  byte bStack0000000000000027;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  if ((OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetDominantHand_m28AFC594B67C692D753781414C50839D323EAEBC::s_Il2CppMethodInitialized =
         1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x20),*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 != 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_28_0_ovrp_GetDominantHand_mBF97D609C7A2CD623960640D2B2A4A9E470B8313
                      (unaff_x29 + -0x14,0);
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_x29 + -4) = *(undefined4 *)(unaff_x29 + -0x14);
      goto LAB_02db6eb0;
    }
  }
  *(undefined4 *)(unaff_x29 + -4) = 0;
LAB_02db6eb0:
  return *(undefined4 *)(unaff_x29 + -4);
}


