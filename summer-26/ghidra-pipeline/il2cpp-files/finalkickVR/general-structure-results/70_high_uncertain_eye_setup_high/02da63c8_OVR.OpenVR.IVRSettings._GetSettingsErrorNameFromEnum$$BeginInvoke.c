/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetSettingsErrorNameFromEnum$$BeginInvoke
ENTRY_POINT: 02da63c8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRSettings__GetSettingsErrorNameFromEnum__BeginInvoke(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xe20));
  OVRPlugin_get_bodyTrackingSupported_m8DAE070C838B80E84818040B45D811F38F84B3A3::
  s_Il2CppMethodInitialized = 1;
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
    iVar1 = OVRP_1_78_0_ovrp_GetBodyTrackingSupported_m448B4106BAAECB841FDDED56D242AA43DD57AD87
                      (unaff_x29 + -0x14,0);
    if (iVar1 == 0) {
      *(bool *)(unaff_x29 + -1) = *(int *)(unaff_x29 + -0x14) == 1;
      goto FUN_02da64a4;
    }
  }
  *(undefined1 *)(unaff_x29 + -1) = 0;
FUN_02da64a4:
  return *(byte *)(unaff_x29 + -1) & 1;
}


