/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetDXGIOutputInfo
ENTRY_POINT: 02daf3b0
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


byte OVR_OpenVR_CVRSystem__GetDXGIOutputInfo
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  ulong *in_stack_00000010;
  undefined4 uStack0000000000000024;
  byte bStack000000000000002f;
  
  *(undefined4 *)(unaff_x29 + -0xc) = param_2;
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  if ((OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000010);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerIsInHand_mC53D39C08907EEE317F50430FD28E615AED06A43::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(unaff_x29 + -0x1c) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x28) = uVar3;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack000000000000002f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x28),*puVar4,0);
  bStack000000000000002f = bStack000000000000002f & 1;
  if (bStack000000000000002f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 1;
  }
  else {
    *(undefined4 *)(unaff_x29 + -0x1c) = 1;
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    uStack0000000000000024 = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar2 = OVRP_1_86_0_ovrp_GetControllerIsInHand_mAB45DF5926B18579ABE8F43EE80D5BC9497C8B3D
                      (uVar1,uStack0000000000000024,unaff_x29 + -0x1c,0);
    if ((iVar2 == 0) && (*(int *)(unaff_x29 + -0x1c) == 0)) {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


