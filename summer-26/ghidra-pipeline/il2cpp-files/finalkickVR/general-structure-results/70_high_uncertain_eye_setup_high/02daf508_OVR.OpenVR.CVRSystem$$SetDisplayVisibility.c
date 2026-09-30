/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$SetDisplayVisibility
ENTRY_POINT: 02daf508
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_CVRSystem__SetDisplayVisibility(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  ulong *puStack0000000000000010;
  ulong *puStack0000000000000018;
  byte bStack0000000000000027;
  
  puStack0000000000000018 =
       (ulong *)
       Field_<PrivateImplementationDetails>_85AA75D7B90CBA18B8326D7653A3B43E741161EB1AEB144AC1246CAD659B141B
  ;
  *(undefined8 *)(unaff_x29 + -8) = param_2;
  puStack0000000000000010 = param_1;
  if ((OVRPlugin_GetCurrentTrackingTransformPose_m26FE0E5A2A3988A5A51300CF4395D2FB6CDB6C67::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(param_1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata(puStack0000000000000018);
    OVRPlugin_GetCurrentTrackingTransformPose_m26FE0E5A2A3988A5A51300CF4395D2FB6CDB6C67::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x18) = 0;
  *(undefined4 *)(unaff_x29 + -0x10) = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack0000000000000027 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack0000000000000027 = bStack0000000000000027 & 1;
  if (bStack0000000000000027 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
    puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000018)
    ;
    uVar2 = *puVar3;
    in_stack_00000008[1] = puVar3[1];
    *in_stack_00000008 = uVar2;
    uVar2 = *(undefined8 *)((long)puVar3 + 0xc);
    *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
    *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iVar1 = OVRP_1_30_0_ovrp_GetCurrentTrackingTransformPose_mB6D85FD00C93F54965C92C72BA3A30E333C333B0
                      (unaff_x29 + -0x28,0);
    if (iVar1 == 0) {
      uVar2 = *(undefined8 *)(unaff_x29 + -0x28);
      in_stack_00000008[1] = *(undefined8 *)(unaff_x29 + -0x20);
      *in_stack_00000008 = uVar2;
      uVar2 = *(undefined8 *)(unaff_x29 + -0x1c);
      *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)(unaff_x29 + -0x14);
      *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000018);
      puVar3 = (undefined8 *)
               il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000018);
      uVar2 = *puVar3;
      in_stack_00000008[1] = puVar3[1];
      *in_stack_00000008 = uVar2;
      uVar2 = *(undefined8 *)((long)puVar3 + 0xc);
      *(undefined8 *)((long)in_stack_00000008 + 0x14) = *(undefined8 *)((long)puVar3 + 0x14);
      *(undefined8 *)((long)in_stack_00000008 + 0xc) = uVar2;
    }
  }
  return;
}


