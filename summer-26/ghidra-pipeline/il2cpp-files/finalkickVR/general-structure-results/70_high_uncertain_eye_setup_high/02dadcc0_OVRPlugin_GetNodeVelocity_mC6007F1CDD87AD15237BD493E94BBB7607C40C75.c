/*
FUNCTION_NAME: OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75
ENTRY_POINT: 02dadcc0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_8;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_7
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75
          (undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_19c;
  undefined4 uStack_15c;
  undefined1 auStack_118 [88];
  undefined1 auStack_c0 [28];
  undefined4 local_a4;
  undefined4 local_64;
  int local_60;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_154C2F79E951E88A6121AC4885530A9078B5E70BC71E944FCA17F27AB3213396
  ;
  puVar2 = 
  Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_40 = param_3;
  local_38 = param_2;
  local_34 = param_1;
  if ((OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_53F330448D07BA576F472DBBDB58A68A1E3E6FCF756023D2C5CC65AEF10B865D
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetNodeVelocity_mC6007F1CDD87AD15237BD493E94BBB7607C40C75::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_44 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if ((local_44 == 3) && (local_48 = local_38, local_38 == 0)) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__)
    ;
    Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9
              (*(undefined8 *)
                Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
               ,0);
    local_38 = -1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_50 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_58 = *puVar6;
  local_59 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_50,local_58,0);
  local_59 = local_59 & 1;
  if (local_59 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    bVar5 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar6,0)
    ;
    uVar4 = local_34;
    if (((bVar5 & 1) == 0) || (local_38 != 0)) {
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Field_<PrivateImplementationDetails>_53F330448D07BA576F472DBBDB58A68A1E3E6FCF756023D2C5CC65AEF10B865D
                );
      OVRP_0_1_3_ovrp_GetNodeVelocity_m34ACA4CF2DC37FCF3DA7A1D21E46EAD60D7B7A02(uVar4,0);
      local_30 = uStack_19c;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      OVRP_1_8_0_ovrp_GetNodeVelocity2_mF0B82E77F8D5A0C18727AD7D2DA777E374A3B309(0,uVar4,0);
      local_30 = uStack_15c;
    }
  }
  else {
    local_60 = local_38;
    local_64 = local_34;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD(local_60,local_64,0)
    ;
    memcpy(auStack_c0,auStack_118,0x58);
    local_30 = local_a4;
  }
  return local_30;
}


