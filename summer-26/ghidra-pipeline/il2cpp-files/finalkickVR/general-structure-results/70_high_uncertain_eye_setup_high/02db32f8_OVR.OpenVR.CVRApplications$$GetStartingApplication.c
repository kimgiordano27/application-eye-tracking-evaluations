/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$GetStartingApplication
ENTRY_POINT: 02db32f8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


byte OVR_OpenVR_CVRApplications__GetStartingApplication(byte param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  ulong *puStack0000000000000018;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
  ;
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_73AFC669CF02B688881E9C200412901FB5897CB8998E93C20236DABC0F9CC5CA
  ;
  puStack0000000000000018 =
       (ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  *(byte *)(unaff_x29 + -2) = param_1 & 1;
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    OVRPlugin_SetMultimodalHandsControllersSupported_mE18F7F0C08709189660757FD8311F4832424B659::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  *(undefined8 *)(unaff_x29 + -0x20) = *puVar6;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x18),*(undefined8 *)(unaff_x29 + -0x20),0);
  *(byte *)(unaff_x29 + -0x21) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x21) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(byte *)(unaff_x29 + -0x22) = *(byte *)(unaff_x29 + -2) & 1;
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    uVar3 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0
                      (*(byte *)(unaff_x29 + -0x22) & 1);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iVar4 = OVRP_1_86_0_ovrp_SetMultimodalHandsControllersSupported_m14945B27778A2E249554936760709D78A72886FA
                      (uVar3,0);
    if (iVar4 == 0) {
      *(undefined1 *)(unaff_x29 + -1) = 1;
    }
    else {
      *(undefined1 *)(unaff_x29 + -1) = 0;
    }
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


