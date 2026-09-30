/*
FUNCTION_NAME: OVR.OpenVR.CVRApplications$$GetApplicationKeyByProcessId
ENTRY_POINT: 02db295c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_CVRApplications__GetApplicationKeyByProcessId
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,byte param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x29;
  undefined8 *puStack0000000000000010;
  byte bStack0000000000000027;
  byte bStack000000000000002f;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  puStack0000000000000010 =
       (undefined8 *)
       Field_<PrivateImplementationDetails>_A3EF5A1222931763A780948E7E7AC94E4058CFF6008ED98B4FF99392B38C5D26
  ;
  *(undefined4 *)(unaff_x29 + -0x14) = param_1;
  *(undefined4 *)(unaff_x29 + -0x10) = param_2;
  *(undefined4 *)(unaff_x29 + -0xc) = param_3;
  *(undefined4 *)(unaff_x29 + -8) = param_4;
  *(undefined4 *)(unaff_x29 + -0x18) = param_5;
  *(byte *)(unaff_x29 + -0x19) = param_6 & 1;
  *(undefined8 *)(unaff_x29 + -0x28) = param_7;
  if ((OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_OverrideExternalCameraFov_m8849D6E87FCBDFECBEC1E25E5099A631AE9824E4::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined1 *)(unaff_x29 + -0x29) = 0;
  *(undefined4 *)(unaff_x29 + -0x30) = 0;
  *(undefined4 *)(unaff_x29 + -0x34) = 0;
  *(undefined4 *)(unaff_x29 + -0x38) = 0;
  *(undefined4 *)(unaff_x29 + -0x3c) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack000000000000002f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  bStack000000000000002f = bStack000000000000002f & 1;
  if (bStack000000000000002f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    *(undefined1 *)(unaff_x29 + -0x29) = 1;
    bStack0000000000000027 = *(byte *)(unaff_x29 + -0x19) & 1;
    if (bStack0000000000000027 == 0) {
      *(undefined4 *)(unaff_x29 + -0x34) = *(undefined4 *)(unaff_x29 + -0x18);
      *(undefined4 *)(unaff_x29 + -0x38) = 0;
      *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x34);
    }
    else {
      *(undefined4 *)(unaff_x29 + -0x30) = *(undefined4 *)(unaff_x29 + -0x18);
      *(undefined4 *)(unaff_x29 + -0x38) = 1;
      *(undefined4 *)(unaff_x29 + -0x3c) = *(undefined4 *)(unaff_x29 + -0x30);
    }
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iVar2 = OVRP_1_44_0_ovrp_OverrideExternalCameraFov_mCFB81A2447336301ECD4DFF2F0CC95620C8E8242
                      (*(undefined4 *)(unaff_x29 + -0x3c),*(undefined4 *)(unaff_x29 + -0x38),
                       unaff_x29 + -0x14,0);
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_x29 + -0x29) = 0;
    }
    *(byte *)(unaff_x29 + -1) = *(byte *)(unaff_x29 + -0x29) & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


