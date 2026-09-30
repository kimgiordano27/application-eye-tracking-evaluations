/*
FUNCTION_NAME: OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED
ENTRY_POINT: 02dc6ac8
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


undefined8
OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_B3D3D4A10F76661CE83041738FC598097C7B3E13EC83565F57291BBA1647DE37
  ;
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__;
  local_38 = param_2;
  local_30 = param_1;
  if ((OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_LoadRenderModel_m93104E60058F91148AF4E797E59B72CBA5ECA0ED::s_Il2CppMethodInitialized =
         1;
  }
  local_3c = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E(0);
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  uVar6 = local_30;
  if ((bVar4 & 1) == 0) {
    local_28 = 0;
  }
  else {
    local_3c = 0;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_68_0_ovrp_LoadRenderModel_m045EBD196891166594264F159024D90691FAB03D
                      (uVar6,0,&local_3c,0,0);
    uVar3 = local_3c;
    if (iVar5 == 0) {
      if (local_3c == 0) {
        local_28 = 0;
      }
      else {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        uVar8 = Marshal_AllocHGlobal_mE1D700DF967E28BE8AB3E0D67C81A96B4FCC8F4F(uVar3);
        uVar6 = local_30;
        uVar3 = local_3c;
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
        iVar5 = OVRP_1_68_0_ovrp_LoadRenderModel_m045EBD196891166594264F159024D90691FAB03D
                          (uVar6,uVar3,&local_3c,uVar8,0);
        if (iVar5 == 0) {
          uVar6 = SZArrayNew(*(Il2CppClass **)
                              Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
                             ,local_3c);
          uVar3 = local_3c;
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(uVar8,uVar6,0,uVar3);
          Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(uVar8,0);
          local_28 = uVar6;
        }
        else {
          il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
          Marshal_FreeHGlobal_m298EF0650E82E326EDA8048488DC384BB9171EB9(uVar8,0);
          local_28 = 0;
        }
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}


