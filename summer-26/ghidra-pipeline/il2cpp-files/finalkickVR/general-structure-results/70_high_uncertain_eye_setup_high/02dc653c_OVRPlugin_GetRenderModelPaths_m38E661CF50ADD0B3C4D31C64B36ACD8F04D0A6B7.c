/*
FUNCTION_NAME: OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7
ENTRY_POINT: 02dc653c
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


undefined8 OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *pLVar7;
  String_t *pSVar8;
  undefined4 local_24;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
  ;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  if ((OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<string,_object>_Remove__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_GetRenderModelPaths_m38E661CF50ADD0B3C4D31C64B36ACD8F04D0A6B7::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar5 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar6 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar3 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar5,*puVar6,0);
  if ((bVar3 & 1) == 0) {
    local_18 = 0;
  }
  else {
    local_24 = 0;
    pLVar7 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD *)
             il2cpp_codegen_object_new
                       (*(Il2CppClass **)
                         Method_System_Collections_Generic_Dictionary<string,_object>_Remove__);
    List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E
              (pLVar7,*(MethodInfo **)
                       Method_System_Collections_Generic_Dictionary<string,_object>_GetEnumerator__)
    ;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar5 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(0x100,0);
    while( true ) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar4 = OVRP_1_68_0_ovrp_GetRenderModelPaths_mEE515FD6D50A4BD928694F0818D6B67EF6F437B8
                        (local_24,uVar5,0);
      if (iVar4 != 0) break;
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      pSVar8 = (String_t *)
               Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(uVar5,0);
      NullCheck(pLVar7);
      List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline
                (pLVar7,pSVar8,
                 *(MethodInfo **)
                  Method_System_Collections_Generic_Dictionary<string,_object>_Clear__);
      local_24 = il2cpp_codegen_add<int,int>(local_24,1);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(uVar5,0);
    NullCheck(pLVar7);
    local_18 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A
                         (pLVar7,*(MethodInfo **)
                                  Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__
                         );
  }
  return local_18;
}


