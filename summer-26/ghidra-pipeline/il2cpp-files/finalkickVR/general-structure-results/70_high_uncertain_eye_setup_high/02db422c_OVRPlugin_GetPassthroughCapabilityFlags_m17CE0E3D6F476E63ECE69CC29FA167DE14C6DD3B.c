/*
FUNCTION_NAME: OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B
ENTRY_POINT: 02db422c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


uint OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  Il2CppFakeBox<int> aIStack_60 [28];
  int local_44;
  int local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  uint local_24;
  undefined8 local_20;
  uint local_14;
  
  puVar3 = Method_Oculus_Interaction_PoseDetection_Sequence_DebugModel_<>c_<GetChildren>b__0_1__;
  puVar2 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_20 = param_1;
  if ((OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B4B08C36258564192E224158BA84F01F62FAD3EEA74D74A4C8788570D72F07A9
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_BE57D170B680597CEF30F93C257B7CEB41561C379B40C5FC8964C094D09523F7
              );
    OVRPlugin_GetPassthroughCapabilityFlags_m17CE0E3D6F476E63ECE69CC29FA167DE14C6DD3B::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  local_28 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  local_30 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_38 = *puVar5;
  local_39 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_30,local_38,0);
  local_39 = local_39 & 1;
  if (local_39 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_B4B08C36258564192E224158BA84F01F62FAD3EEA74D74A4C8788570D72F07A9
               ,0);
  }
  else {
    local_24 = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_44 = OVRP_1_78_0_ovrp_GetPassthroughCapabilityFlags_mC322AFF017D345986B830E9C3B17B66F974E056D
                         (&local_24,0);
    if (local_44 == 0) {
      return local_24;
    }
    local_40 = local_44;
    local_28 = local_44;
    Il2CppFakeBox<int>::Il2CppFakeBox
              (aIStack_60,
               *(Il2CppClass **)
                Method_spawnerRayos_<Tormenta>d__16_System_Collections_IEnumerator_Reset__,&local_28
              );
    uVar6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741(aIStack_60);
    uVar6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991
                      (*(undefined8 *)
                        Field_<PrivateImplementationDetails>_BE57D170B680597CEF30F93C257B7CEB41561C379B40C5FC8964C094D09523F7
                       ,uVar6,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(uVar6,0);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  bVar4 = OVRPlugin_IsInsightPassthroughSupported_m7AE9F209201C3853A8DBF56F8AD3DAAA13ED8529(0);
  local_14 = (uint)((bVar4 & 1) != 0);
  return local_14;
}


