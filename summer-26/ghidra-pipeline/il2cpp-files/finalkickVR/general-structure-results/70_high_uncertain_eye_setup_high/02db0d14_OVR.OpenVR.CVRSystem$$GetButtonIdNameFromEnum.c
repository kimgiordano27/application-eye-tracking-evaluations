/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetButtonIdNameFromEnum
ENTRY_POINT: 02db0d14
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVR_OpenVR_CVRSystem__GetButtonIdNameFromEnum(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x29;
  undefined4 uVar3;
  undefined8 *in_stack_00000010;
  byte bStack000000000000001f;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xe20));
  OVRPlugin_GetAppCpuStartToGpuEndTime_m7B73C7070638AF61077F7EB8798087FF491B0CD1::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar1 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar1;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar2,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    uVar3 = OVRP_1_6_0_ovrp_GetAppCpuStartToGpuEndTime_mF79D451117E6E4C4D20B36EFE3D35F8098C91CCC(0);
    *(undefined4 *)(unaff_x29 + -4) = uVar3;
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


