/*
FUNCTION_NAME: OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
ENTRY_POINT: 02db6ec0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D
               (undefined8 param_1,undefined8 param_2,String_t *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  String_t *local_70;
  bool local_21;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_7F8D2CDC05A783F07FBA7F0747B676211007C66EE68019B05AC0DEA0CA6231C9
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_3C2FB94F596BCF0F01FCC2342AD69E9889FAEABE83E1A47DCFE248CE54CAE0ED
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  if ((OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_3C2FB94F596BCF0F01FCC2342AD69E9889FAEABE83E1A47DCFE248CE54CAE0ED
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_D3FFAB6C39C74459592916607F2C2DE522EACA92F350E5BED66497A7E0FEC5C8
              );
    OVRPlugin_SendEvent_m2724870AAEAEC48E83D56DB0019FEB45B917A70D::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0)
    ;
    if ((bVar4 & 1) == 0) {
      local_21 = false;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar5 = OVRP_1_28_0_ovrp_SendEvent_mF2396F8E6FCA4F827E68D5C1CF937A5EAC939E14
                        (param_1,param_2,0);
      local_21 = iVar5 == 0;
    }
  }
  else {
    NullCheck(param_3);
    iVar5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline
                      (param_3,(MethodInfo *)0x0);
    local_70 = param_3;
    if (iVar5 == 0) {
      local_70 = *(String_t **)
                  Field_<PrivateImplementationDetails>_D3FFAB6C39C74459592916607F2C2DE522EACA92F350E5BED66497A7E0FEC5C8
      ;
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iVar5 = OVRP_1_30_0_ovrp_SendEvent2_m5C2DD1A0840B6C286A205EE17271B736EC7C6D28
                      (param_1,param_2,local_70,0);
    local_21 = iVar5 == 0;
  }
  return local_21;
}


