/*
FUNCTION_NAME: OVRPlugin_EraseSpace_m6EA51C5FD8165982A9A8C4404EEEF61C0FCF1D52
ENTRY_POINT: 02dc2284
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 150
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


bool OVRPlugin_EraseSpace_m6EA51C5FD8165982A9A8C4404EEEF61C0FCF1D52
               (undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Il2CppObject *pIVar8;
  undefined8 local_18;
  
  puVar2 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  local_18 = param_1;
  if ((OVRPlugin_EraseSpace_m6EA51C5FD8165982A9A8C4404EEEF61C0FCF1D52::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRPlugin_EraseSpace_m6EA51C5FD8165982A9A8C4404EEEF61C0FCF1D52::s_Il2CppMethodInitialized = 1;
  }
  *param_3 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  uVar6 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  puVar7 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar4 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar6,*puVar7,0);
  if ((bVar4 & 1) == 0) {
    bVar3 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    iVar5 = OVRP_1_72_0_ovrp_EraseSpace_m24172B469D69306840006DD3BF5113F09F6724F0
                      (&local_18,param_2,param_3,0);
    bVar3 = iVar5 == 0;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pIVar8 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1();
  iVar5 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(param_3,0);
  NullCheck(pIVar8);
  VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar8,0x9b81686,iVar5,-1);
  if (!bVar3) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pIVar8 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
    NullCheck(pIVar8);
    VirtualActionInvoker4<int,short,int,long>::Invoke(7,pIVar8,0x9b81686,3,0,-1);
  }
  return bVar3;
}


