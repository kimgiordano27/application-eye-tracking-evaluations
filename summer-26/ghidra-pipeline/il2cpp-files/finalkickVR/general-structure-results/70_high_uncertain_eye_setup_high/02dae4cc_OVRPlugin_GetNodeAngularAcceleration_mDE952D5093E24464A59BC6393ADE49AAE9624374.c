/*
FUNCTION_NAME: OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374
ENTRY_POINT: 02dae4cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined4
OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374
          (undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_128 [88];
  undefined1 auStack_d0 [64];
  undefined4 local_90;
  undefined4 local_74;
  int local_70;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_0F8A0D284F9079371DD7C0D2AD8115E2AB73E85DA6FBA43AF9D0FBBFE34AADB9
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_40 = param_3;
  local_38 = param_2;
  local_34 = param_1;
  if ((OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_18B4D7A705116EFC8816DC695463BC74F9F861491D844C0AC4AEB6363EBB2200
              );
    OVRPlugin_GetNodeAngularAcceleration_mDE952D5093E24464A59BC6393ADE49AAE9624374::
    s_Il2CppMethodInitialized = 1;
  }
  local_50 = 0;
  local_48 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  local_54 = OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(0);
  if ((local_54 == 3) && (local_58 = local_38, local_38 == 0)) {
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
  local_60 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar3 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  local_68 = *puVar3;
  local_69 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                       (local_60,local_68,0);
  local_69 = local_69 & 1;
  if (local_69 == 0) {
    il2cpp_codegen_initobj(&local_50,0xc);
    local_30 = (undefined4)local_50;
  }
  else {
    local_70 = local_38;
    local_74 = local_34;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    OVRP_1_12_0_ovrp_GetNodePoseState_mDB12D6F211B40C4EF77537520B0976E5F879F1BD(local_70,local_74,0)
    ;
    memcpy(auStack_d0,auStack_128,0x58);
    local_30 = local_90;
  }
  return local_30;
}


