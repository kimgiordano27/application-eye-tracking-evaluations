/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem._PollNextEventPacked$$.ctor
ENTRY_POINT: 02db117c
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


void OVR_OpenVR_CVRSystem__PollNextEventPacked___ctor
               (ulong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  ulong *puStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  byte bStack0000000000000037;
  undefined8 in_stack_00000038;
  
  *(undefined4 *)(unaff_x29 + -4) = param_2;
  *(undefined8 *)(unaff_x29 + -0x10) = param_3;
  puStack0000000000000010 = param_1;
  if ((OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(param_1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetBoundaryGeometry_mC63FA471B107D38D532DEB22EAD559551EE565B6::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x30) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  in_stack_00000038 = *puVar2;
  bStack0000000000000037 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x30),in_stack_00000038,0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    il2cpp_codegen_initobj((void *)(unaff_x29 + -0x28),0x18);
    uVar1 = *(undefined8 *)(unaff_x29 + -0x28);
    in_stack_00000008[1] = *(undefined8 *)(unaff_x29 + -0x20);
    *in_stack_00000008 = uVar1;
    in_stack_00000008[2] = *(undefined8 *)(unaff_x29 + -0x18);
  }
  else {
    in_stack_00000030 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    OVRP_1_8_0_ovrp_GetBoundaryGeometry_m5F7B55C67FE61B4ECCA8C209E6086FC1051D9A11
              (&stack0x00000018,in_stack_00000030,0);
    in_stack_00000008[1] = in_stack_00000020;
    *in_stack_00000008 = in_stack_00000018;
    in_stack_00000008[2] = in_stack_00000028;
  }
  return;
}


