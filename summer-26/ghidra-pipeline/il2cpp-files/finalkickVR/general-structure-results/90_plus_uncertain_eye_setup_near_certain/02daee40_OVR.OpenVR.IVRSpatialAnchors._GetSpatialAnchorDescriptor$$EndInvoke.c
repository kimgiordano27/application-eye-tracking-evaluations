/*
FUNCTION_NAME: OVR.OpenVR.IVRSpatialAnchors._GetSpatialAnchorDescriptor$$EndInvoke
ENTRY_POINT: 02daee40
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVR_OpenVR_IVRSpatialAnchors__GetSpatialAnchorDescriptor__EndInvoke
               (undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *__src;
  long unaff_x29;
  void *in_stack_00000010;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  byte bStack000000000000003f;
  
  *(undefined4 *)(unaff_x29 + -0xc) = param_1;
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  if ((OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000018);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata(in_stack_00000020);
    OVRPlugin_GetNodePoseStateAtTime_mED0C74C8CFDDD726EC01F9B1E142553A527306B3::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&stack0x00000050,0,0x58);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar3 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
  puVar4 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000018);
  bStack000000000000003f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar3,*puVar4,0);
  bStack000000000000003f = bStack000000000000003f & 1;
  if (bStack000000000000003f != 0) {
    uVar3 = *(undefined8 *)(unaff_x29 + -8);
    uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000018);
    iVar2 = OVRP_1_76_0_ovrp_GetNodePoseStateAtTime_m38FA250EA4D1891635F41BD0F2586045B82201BD
                      (uVar3,uVar1,&stack0x00000050,0);
    if (iVar2 == 0) {
      memcpy(in_stack_00000010,&stack0x00000050,0x58);
      return;
    }
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000020);
  __src = (void *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000020);
  memcpy(in_stack_00000010,__src,0x58);
  return;
}


