/*
FUNCTION_NAME: OVRPlugin_GetHmdColorDesc_mAE1EC23074A7E9D9E6805686A00F1E82E11AD00B
ENTRY_POINT: 02dc1210
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


undefined4 OVRPlugin_GetHmdColorDesc_mAE1EC23074A7E9D9E6805686A00F1E82E11AD00B(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_14;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_4566A0DF6225A1A1F6B842F83FFBDE095C9B4FEF02CB788ADD0D24792BFF32BD
  ;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  local_20 = param_1;
  if ((OVRPlugin_GetHmdColorDesc_mAE1EC23074A7E9D9E6805686A00F1E82E11AD00B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_66CB548BACDA91BF6E575B89FA00099C0658E805834AE8F87C21E85CE1900713
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_B40B946AEFAB83F94F7A1AFD64AF4DCCD7C304131409B53AA11E3E7D12C5DE63
              );
    OVRPlugin_GetHmdColorDesc_mAE1EC23074A7E9D9E6805686A00F1E82E11AD00B::s_Il2CppMethodInitialized =
         1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_B40B946AEFAB83F94F7A1AFD64AF4DCCD7C304131409B53AA11E3E7D12C5DE63
               ,0);
    local_14 = local_24;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar4 = OVRP_1_49_0_ovrp_GetHmdColorDesc_mD964EF9266AD87A7A8E20947028F88582D82F821(&local_24,0);
    if (iVar4 != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_66CB548BACDA91BF6E575B89FA00099C0658E805834AE8F87C21E85CE1900713
                 ,0);
    }
    local_14 = local_24;
  }
  return local_14;
}


