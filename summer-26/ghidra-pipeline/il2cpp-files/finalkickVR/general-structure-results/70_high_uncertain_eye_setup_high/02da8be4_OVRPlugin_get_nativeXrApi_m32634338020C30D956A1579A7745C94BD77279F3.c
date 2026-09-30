/*
FUNCTION_NAME: OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3
ENTRY_POINT: 02da8be4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined4 OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_50;
  int local_44;
  int local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte local_1d;
  int local_1c;
  undefined8 local_18;
  
  puVar3 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_18 = param_1;
  if ((OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetEvents__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_get_nativeXrApi_m32634338020C30D956A1579A7745C94BD77279F3::s_Il2CppMethodInitialized =
         1;
  }
  local_1c = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  local_1d = Nullable_1_get_HasValue_m19860D1D578726F0D3A78F86BCFD72F253172E58_inline
                       ((Nullable_1_tC438FE0466EF1565EE278C732EE7C3053C1053C4 *)(lVar5 + 0x1c),
                        *(MethodInfo **)
                         Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
                       );
  local_1d = local_1d & 1;
  if (local_1d == 0) {
    local_28 = 0;
    Nullable_1__ctor_mFD400149987A40943E1D0DDF9BEC12D4AD11B8A0
              ((Nullable_1_tC438FE0466EF1565EE278C732EE7C3053C1053C4 *)&local_28,0,
               *(MethodInfo **)puVar2);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined8 *)(lVar5 + 0x1c) = local_28;
    local_30 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
    local_38 = *puVar6;
    local_39 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB
                         (local_30,local_38,0);
    local_39 = local_39 & 1;
    if (local_39 != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
      local_40 = OVRP_1_55_0_ovrp_GetNativeXrApiType_m09972C70AB960E65CE4EDF06D108164E800872A7
                           (&local_1c,0);
      if (local_40 == 0) {
        local_44 = local_1c;
        local_50 = 0;
        Nullable_1__ctor_mFD400149987A40943E1D0DDF9BEC12D4AD11B8A0
                  ((Nullable_1_tC438FE0466EF1565EE278C732EE7C3053C1053C4 *)&local_50,local_1c,
                   *(MethodInfo **)puVar2);
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
        *(undefined8 *)(lVar5 + 0x1c) = local_50;
      }
    }
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar4 = Nullable_1_get_Value_mBED33A0D2722B660049367DE092774B6CAC902DC
                    ((Nullable_1_tC438FE0466EF1565EE278C732EE7C3053C1053C4 *)(lVar5 + 0x1c),
                     *(MethodInfo **)
                      Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetPropertyOwner__
                    );
  return uVar4;
}


