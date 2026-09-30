/*
FUNCTION_NAME: OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F
ENTRY_POINT: 02dad3d0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_7
*/


bool OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F
               (undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool local_11;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_3C2FB94F596BCF0F01FCC2342AD69E9889FAEABE83E1A47DCFE248CE54CAE0ED
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_2F185E0012E1EDA353E8BFCA3DF97956ADA929690FC2A81C4A04F58E49DAD40A
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_49230341F29F11E05C96D792708390210C6215F18315D1A96C6356AB5E2F590B
              );
    OVRPlugin_EnqueueSetupLayer_mA1D5C761EE406503F0AA37B6C55C0AC87D61023F::s_Il2CppMethodInitialized
         = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  bVar4 = OVRPlugin_get_initialized_m7D7AAEEED41ED4B5798882B6038CF169E2BF0443(0);
  if ((bVar4 & 1) == 0) {
    local_11 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0)
    ;
    if ((bVar4 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
      bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                        (uVar6,*puVar7,0);
      if ((bVar4 & 1) == 0) {
        local_11 = false;
      }
      else {
        if (param_2 != 0) {
          il2cpp_codegen_runtime_class_init_inline
                    (*(Il2CppClass **)
                      Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__
                    );
          Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
                    (*(undefined8 *)
                      Field_<PrivateImplementationDetails>_49230341F29F11E05C96D792708390210C6215F18315D1A96C6356AB5E2F590B
                     ,0);
        }
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        iVar5 = OVRP_1_15_0_ovrp_EnqueueSetupLayer_m9636B252CBF86741188162002EB00D3F493BB93B
                          (param_1,param_3,0);
        local_11 = iVar5 == 0;
      }
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      iVar5 = OVRP_1_28_0_ovrp_EnqueueSetupLayer2_mEE8D5C3330ABEE55F9AF36150E863510B6BB50CB
                        (param_1,param_2,param_3,0);
      local_11 = iVar5 == 0;
    }
  }
  return local_11;
}


