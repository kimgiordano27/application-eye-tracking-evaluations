/*
FUNCTION_NAME: OVR.OpenVR.IVRIOBuffer._Read$$.ctor
ENTRY_POINT: 02dadbac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte OVR_OpenVR_IVRIOBuffer__Read___ctor(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x29;
  int iStack000000000000000c;
  ulong *in_stack_00000018;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_1;
  *(undefined8 *)(unaff_x29 + -0x18) = param_3;
  if ((OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_UpdateNodePhysicsPoses_m30A4EB300401EF39239AE6418ED8CF994C51707C::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x20) = uVar4;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  *(undefined8 *)(unaff_x29 + -0x28) = *puVar5;
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                    (*(undefined8 *)(unaff_x29 + -0x20),*(undefined8 *)(unaff_x29 + -0x28),0);
  *(byte *)(unaff_x29 + -0x29) = bVar2 & 1;
  if ((*(byte *)(unaff_x29 + -0x29) & 1) == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -8);
    uVar4 = *(undefined8 *)(unaff_x29 + -0x10);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    iStack000000000000000c = 0;
    iVar3 = OVRP_1_8_0_ovrp_Update2_m6756CC495662B84A6D60AA8642F74AE33E960C34(uVar4,0,uVar1,0);
    if (iVar3 == 1) {
      iStack000000000000000c = 1;
    }
    *(bool *)(unaff_x29 + -1) = iStack000000000000000c != 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


