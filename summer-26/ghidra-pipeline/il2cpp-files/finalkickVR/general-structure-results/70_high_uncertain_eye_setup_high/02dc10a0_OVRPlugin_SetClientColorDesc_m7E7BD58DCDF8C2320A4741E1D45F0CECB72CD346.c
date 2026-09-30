/*
FUNCTION_NAME: OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346
ENTRY_POINT: 02dc10a0
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


bool OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346(int param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int local_18;
  bool local_11;
  
  puVar1 = 
  Field_<PrivateImplementationDetails>_4566A0DF6225A1A1F6B842F83FFBDE095C9B4FEF02CB788ADD0D24792BFF32BD
  ;
  if ((OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_CE70983246716712ECB144243C77719F45069235B8B5BE8EB5584AD627198D47
              );
    OVRPlugin_SetClientColorDesc_m7E7BD58DCDF8C2320A4741E1D45F0CECB72CD346::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar4 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  bVar2 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar4,*puVar5,0);
  if ((bVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    local_18 = param_1;
    if (param_1 == 0) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                );
      Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                (*(undefined8 *)
                  Field_<PrivateImplementationDetails>_CE70983246716712ECB144243C77719F45069235B8B5BE8EB5584AD627198D47
                 ,0);
      local_18 = 7;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    iVar3 = OVRP_1_49_0_ovrp_SetClientColorDesc_m3D304D4315B89B9922BD5370518878191BA74011
                      (local_18,0);
    local_11 = iVar3 == 0;
  }
  return local_11;
}


