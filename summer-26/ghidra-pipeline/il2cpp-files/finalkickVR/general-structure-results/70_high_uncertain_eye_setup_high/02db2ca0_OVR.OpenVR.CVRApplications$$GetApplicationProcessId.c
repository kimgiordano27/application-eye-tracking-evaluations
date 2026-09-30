/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$GetApplicationProcessId
ENTRY_POINT: 02db2ca0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_CVRApplications__GetApplicationProcessId(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  byte bStack0000000000000027;
  byte bStack000000000000002f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRPlugin_OverrideExternalCameraStaticPose_mEA816D3079803A2375D520C5AFF748780CF6AC58::
  s_Il2CppMethodInitialized = 1;
  *(undefined1 *)(unaff_x29 + -0x19) = 0;
  *(undefined4 *)(unaff_x29 + -0x20) = 0;
  *(undefined4 *)(unaff_x29 + -0x24) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0;
  *(undefined4 *)(unaff_x29 + -0x2c) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000010);
  bStack000000000000002f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack000000000000002f = bStack000000000000002f & 1;
  if (bStack000000000000002f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined1 *)(unaff_x29 + -0x19) = 1;
    bStack0000000000000027 = *(byte *)(unaff_x29 + -9) & 1;
    if (bStack0000000000000027 == 0) {
      *(undefined4 *)(unaff_x29 + -0x24) = *(undefined4 *)(unaff_x29 + -8);
      *(undefined4 *)(unaff_x29 + -0x28) = 0;
      *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0x24);
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x20) = *(undefined4 *)(unaff_x29 + -8);
      *(undefined4 *)(unaff_x29 + -0x28) = 1;
      *(undefined4 *)(unaff_x29 + -0x2c) = *(undefined4 *)(unaff_x29 + -0x20);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000010);
    iVar1 = OVRP_1_44_0_ovrp_OverrideExternalCameraStaticPose_m45EEEFF907712C0D3282B27B2F3941F961329BE2
                      (*(undefined4 *)(unaff_x29 + -0x2c),*(undefined4 *)(unaff_x29 + -0x28),
                       in_stack_00000008,0);
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_x29 + -0x19) = 0;
    }
    *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x19) & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


