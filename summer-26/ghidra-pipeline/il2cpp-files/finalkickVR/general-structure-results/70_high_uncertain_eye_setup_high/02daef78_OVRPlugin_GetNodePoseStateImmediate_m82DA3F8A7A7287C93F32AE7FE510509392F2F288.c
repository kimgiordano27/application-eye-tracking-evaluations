/*
FUNCTION_NAME: OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288
ENTRY_POINT: 02daef78
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288
               (void *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined1 auStack_78 [88];
  undefined8 local_20;
  undefined4 local_14;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_6721DE4B85DC071A891F3CC42D27E9AC11CA4905AD513C01818583E0A558B95D
  ;
  puVar1 = 
  Field_<PrivateImplementationDetails>_59E206D89A8F4C6E716EF9FE5952FE234E8AC13038EB5E46CBB352771C6E2333
  ;
  local_20 = param_3;
  local_14 = param_2;
  if ((OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_6721DE4B85DC071A891F3CC42D27E9AC11CA4905AD513C01818583E0A558B95D
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_GetNodePoseStateImmediate_m82DA3F8A7A7287C93F32AE7FE510509392F2F288::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_78,0,0x58);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  uVar3 = local_14;
  if ((bVar4 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar8 = (void *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    memcpy(param_1,pvVar8,0x58);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_69_0_ovrp_GetNodePoseStateImmediate_mF6690F72672F499B21A970AB6C4059CE40405EA8
                      (uVar3,auStack_78,0);
    if (iVar5 == 0) {
      memcpy(param_1,auStack_78,0x58);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      pvVar8 = (void *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
      memcpy(param_1,pvVar8,0x58);
    }
  }
  return;
}


