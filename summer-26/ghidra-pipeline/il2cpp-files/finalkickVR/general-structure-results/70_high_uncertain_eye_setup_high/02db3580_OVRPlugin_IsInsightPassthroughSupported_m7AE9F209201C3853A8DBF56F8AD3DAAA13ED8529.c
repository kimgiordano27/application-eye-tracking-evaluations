/*
FUNCTION_NAME: OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529
ENTRY_POINT: 02db3580
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


bool OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Il2CppFakeBox<int> aIStack_60 [28];
  int local_44;
  int local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  bool local_11;
  
  puVar1 = 
  Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_<WithUsages>b__14_0__
  ;
  local_20 = param_1;
  if ((OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B3088AF17DD8EEC465DA77C795F3C60CACC6160601F4106514E118F4A4F27D5C
              );
    OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_30 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_38 = *puVar2;
  local_39 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_30,local_38,0);
  local_39 = local_39 & 1;
  if (local_39 == 0) {
    local_11 = false;
  }
  else {
    local_24 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_44 = OVRP_1_71_0_ovrp_IsInsightPassthroughSupported_mD9EA3FDC1E3A0F704178A837B0A1B6F133158A0F
                         (&local_24,0);
    if (local_44 == 0) {
      local_11 = local_24 == 1;
    }
    else {
      local_40 = local_44;
      local_28 = local_44;
      Il2CppFakeBox<int>::Il2CppFakeBox
                (aIStack_60,
                 *(Il2CppClass **)
                  Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__,
                 &local_28);
      uVar3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_60);
      uVar3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                        (*(undefined8 *)
                          Field_<PrivateImplementationDetails>_B3088AF17DD8EEC465DA77C795F3C60CACC6160601F4106514E118F4A4F27D5C
                         ,uVar3,0);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar3,0);
      local_11 = false;
    }
  }
  return local_11;
}


