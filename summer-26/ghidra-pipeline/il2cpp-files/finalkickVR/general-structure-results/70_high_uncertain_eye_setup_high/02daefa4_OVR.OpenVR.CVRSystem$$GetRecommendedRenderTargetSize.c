/*
FUNCTION_NAME: OVR.OpenVR.CVRSystem$$GetRecommendedRenderTargetSize
ENTRY_POINT: 02daefa4
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


void OVR_OpenVR_CVRSystem__GetRecommendedRenderTargetSize(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long unaff_x29;
  void *in_stack_00000010;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  int iStack000000000000002c;
  byte bStack0000000000000037;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  if ((OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
    OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&stack0x00000048,0,0x58);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  bStack0000000000000037 =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar2,*puVar3,0);
  bStack0000000000000037 = bStack0000000000000037 & 1;
  if (bStack0000000000000037 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
    pvVar4 = (void *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
    memcpy(in_stack_00000010,pvVar4,0x58);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    iStack000000000000002c =
         OVRP_1_69_0_ovrp_GetNodePoseStateImmediate_mF6690F72672F499B21A970AB6C4059CE40405EA8
                   (uVar1,&stack0x00000048,0);
    if (iStack000000000000002c == 0) {
      memcpy(in_stack_00000010,&stack0x00000048,0x58);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
      pvVar4 = (void *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
      memcpy(in_stack_00000010,pvVar4,0x58);
    }
  }
  return;
}


