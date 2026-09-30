/*
FUNCTION_NAME: OVR.OpenVR.CVRExtendedDisplay$$GetEyeOutputViewport
ENTRY_POINT: 02db1c1c
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


byte OVR_OpenVR_CVRExtendedDisplay__GetEyeOutputViewport(byte param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte in_w8;
  long unaff_x29;
  ulong *in_stack_00000008;
  byte bStack0000000000000016;
  byte bStack0000000000000017;
  
  *(byte *)(unaff_x29 + -2) = param_1 & in_w8;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000008);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_SetControllerDrivenHandPosesAreNatural_m86656121A59AC95522F570C69D98C155958DE65E::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack0000000000000017 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack0000000000000017 = bStack0000000000000017 & 1;
  if (bStack0000000000000017 == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    bStack0000000000000016 = *(byte *)(unaff_x29 + -2) & 1;
    if (bStack0000000000000016 == 0) {
      *(undefined4 *)(unaff_x29 + -0x14) = 0;
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x14) = 1;
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    iVar1 = OVRP_1_87_0_ovrp_SetControllerDrivenHandPosesAreNatural_mB053A08AA45D701ABEFA48A355B15991021746AF
                      (*(undefined4 *)(unaff_x29 + -0x14),0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


