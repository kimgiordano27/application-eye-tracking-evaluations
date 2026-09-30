/*
FUNCTION_NAME: OVR.OpenVR.IVRInput._GetPoseActionData$$BeginInvoke
ENTRY_POINT: 02dab774
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRInput__GetPoseActionData__BeginInvoke(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 in_w8;
  long in_x9;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  byte bStack000000000000001f;
  
  *(undefined1 *)(in_x9 + 0x67a) = in_w8;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000008);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    OVRP_1_71_0_ovrp_SetSuggestedGpuPerformanceLevel_m9143BE1759E0E20C6FBC65AF53F45B0EA60BE7DC
              (uVar1,0);
  }
  return;
}


