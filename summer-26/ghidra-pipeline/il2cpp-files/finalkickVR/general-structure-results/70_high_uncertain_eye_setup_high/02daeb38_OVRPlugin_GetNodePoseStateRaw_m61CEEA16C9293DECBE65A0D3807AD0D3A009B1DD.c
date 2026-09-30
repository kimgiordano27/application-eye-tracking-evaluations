/*
FUNCTION_NAME: OVRPlugin_GetNodePoseStateRaw_m61CEEA16C9293DECBE65A0D3807AD0D3A009B1DD
ENTRY_POINT: 02daeb38
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_13;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_7
*/


void OVRPlugin_GetNodePoseStateRaw_m61CEEA16C9293DECBE65A0D3807AD0D3A009B1DD
               (void *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auStack_128 [92];
  undefined4 local_cc;
  int local_c8;
  byte local_c1;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  byte local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  int local_8c;
  undefined1 auStack_88 [88];
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  
  puVar4 = 
  Field_<PrivateImplementationDetails>_59E206D89A8F4C6E716EF9FE5952FE234E8AC13038EB5E46CBB352771C6E2333
  ;
  puVar3 = 
  Field_<PrivateImplementationDetails>_4AC5BC2CCBAA39FECE34905526973B107290CA78D201B9334AAC220606BA4DFD
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_30 = param_4;
  local_28 = param_3;
  local_24 = param_2;
  if ((OVRPlugin_GetNodePoseStateRaw_m61CEEA16C9293DECBE65A0D3807AD0D3A009B1DD::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar4);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetNodePoseStateRaw_m61CEEA16C9293DECBE65A0D3807AD0D3A009B1DD::
    s_Il2CppMethodInitialized = 1;
  }
  memset(auStack_88,0,0x58);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_8c = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if ((local_8c == 3) && (local_90 = local_28, local_28 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    local_28 = -1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_98 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  local_a0 = *puVar5;
  local_a1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_98,local_a0,0);
  local_a1 = local_a1 & 1;
  if (local_a1 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    local_b8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar5 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    local_c0 = *puVar5;
    local_c1 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                         (local_b8,local_c0,0);
    local_c1 = local_c1 & 1;
    if (local_c1 == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      pvVar6 = (void *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      memcpy(param_1,pvVar6,0x58);
    }
    else {
      local_c8 = local_28;
      local_cc = local_24;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD
                (local_c8,local_cc,0);
      memcpy(param_1,auStack_128,0x58);
    }
  }
  else {
    local_a8 = local_28;
    local_ac = local_24;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    local_b0 = OVRP_1_29_0_ovrp_GetNodePoseStateRaw_m3A9E36C8E2D3D9EBACDCB42D5108927BDD9743E1
                         (local_a8,0xffffffff,local_ac,auStack_88,0);
    if (local_b0 == 0) {
      memcpy(param_1,auStack_88,0x58);
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar4);
      pvVar6 = (void *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar4);
      memcpy(param_1,pvVar6,0x58);
    }
  }
  return;
}


