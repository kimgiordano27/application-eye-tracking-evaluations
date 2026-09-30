/*
FUNCTION_NAME: OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0
ENTRY_POINT: 02dc138c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0(void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 local_30;
  undefined8 local_28;
  void *local_20;
  bool local_11;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_006FD8FFC943578CD674B50875EBF8F0F2EB04DF16B77FE6BE2A1C960202FFB1
  ;
  puVar2 = 
  Method_System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_System_ComponentModel_ICustomTypeDescriptor_GetProperties__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_28 = param_2;
  local_20 = param_1;
  if ((OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar3);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_PollEvent_mB91F8F706861047BD2CCD1BDC0AB6374642503E0::s_Il2CppMethodInitialized = 1;
  }
  local_30 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar5 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar8,0);
  pvVar4 = local_20;
  if ((bVar5 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar7 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    puVar8 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    bVar5 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar7,*puVar8,0)
    ;
    pvVar4 = local_20;
    if ((bVar5 & 1) == 0) {
      il2cpp_codegen_initobj(local_20,0x10);
      local_11 = false;
    }
    else {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      iVar6 = OVRP_1_55_0_ovrp_PollEvent_m735190A41358E7AC6C0F0211E85E9B71906A7C95(pvVar4,0);
      local_11 = iVar6 == 0;
    }
  }
  else {
    local_30 = 0;
    if (*(long *)((long)local_20 + 8) == 0) {
      pvVar9 = (void *)SZArrayNew(*(Il2CppClass **)
                                   Method_System_Collections_Generic_Dictionary<int,_IServiceComponent>_Clear__
                                  ,4000);
      *(void **)((long)pvVar4 + 8) = pvVar9;
      Il2CppCodeGenWriteBarrier((void **)((long)pvVar4 + 8),pvVar9);
    }
    pvVar4 = local_20;
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iVar6 = OVRP_1_55_1_ovrp_PollEvent2_m1657931090E9AE7C89467ADE6028EE83D0869003
                      (pvVar4,&local_30,0);
    if ((iVar6 == 0) &&
       (bVar5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(local_30,0,0),
       uVar7 = local_30, (bVar5 & 1) == 0)) {
      uVar10 = *(undefined8 *)((long)local_20 + 8);
      il2cpp_codegen_runtime_class_init_inline
                (*(Il2CppClass **)
                  Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>_get_localMousePosition__
                );
      Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(uVar7,uVar10,0,4000,0);
      local_11 = true;
    }
    else {
      local_11 = false;
    }
  }
  return local_11;
}


