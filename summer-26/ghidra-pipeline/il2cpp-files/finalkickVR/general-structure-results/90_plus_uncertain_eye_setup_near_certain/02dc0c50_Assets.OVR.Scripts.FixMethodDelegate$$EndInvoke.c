/*
FUNCTION_NAME: Assets.OVR.Scripts.FixMethodDelegate$$EndInvoke
ENTRY_POINT: 02dc0c50
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


byte Assets_OVR_Scripts_FixMethodDelegate__EndInvoke(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x29;
  ulong *puStack0000000000000010;
  byte bStack000000000000001f;
  
  *(undefined8 *)(unaff_x29 + -0x10) = param_2;
  puStack0000000000000010 = param_1;
  if ((OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata(param_1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StartBodyTracking_m3B06EE3A599FD2B1808559D4AFB03D2D3A26625C::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar2 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  *(undefined8 *)(unaff_x29 + -0x18) = uVar2;
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000010);
  bStack000000000000001f =
       Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                 (*(undefined8 *)(unaff_x29 + -0x18),*puVar3,0);
  bStack000000000000001f = bStack000000000000001f & 1;
  if (bStack000000000000001f == 0) {
    *(undefined1 *)(unaff_x29 + -1) = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000010);
    iVar1 = OVRP_1_78_0_ovrp_StartBodyTracking_m02817F3EA9BA519B8AD9E49C7F288C7FB3E56810(0);
    *(bool *)(unaff_x29 + -1) = iVar1 == 0;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


