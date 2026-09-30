/*
FUNCTION_NAME: OVRPlugin_GetControllerHapticsDesc_m4F5B99D7454F62CAAB43656B5BEBAE3181405737
ENTRY_POINT: 02db0890
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_GetControllerHapticsDesc_m4F5B99D7454F62CAAB43656B5BEBAE3181405737
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar1 = Method_UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_<_cctor>b__9_0__;
  local_20 = param_3;
  local_14 = param_2;
  if ((OVRPlugin_GetControllerHapticsDesc_m4F5B99D7454F62CAAB43656B5BEBAE3181405737::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_<>c_<_cctor>b__9_0__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetControllerHapticsDesc_m4F5B99D7454F62CAAB43656B5BEBAE3181405737::
    s_Il2CppMethodInitialized = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_40 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_48 = *puVar2;
  local_49 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_40,local_48,0);
  local_49 = local_49 & 1;
  if (local_49 == 0) {
    il2cpp_codegen_initobj(&local_38,0x18);
    param_1[1] = uStack_30;
    *param_1 = local_38;
    param_1[2] = local_28;
  }
  else {
    local_50 = local_14;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    OVRP_1_6_0_ovrp_GetControllerHapticsDesc_mDA4482922AA29B5048853D66B3D01166475BF51E
              (&local_68,local_50,0);
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[2] = local_58;
  }
  return;
}


