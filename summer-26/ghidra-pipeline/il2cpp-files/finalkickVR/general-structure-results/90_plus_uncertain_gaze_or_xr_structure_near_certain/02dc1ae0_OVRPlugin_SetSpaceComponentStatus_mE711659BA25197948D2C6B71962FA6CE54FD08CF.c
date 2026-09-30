/*
FUNCTION_NAME: OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF
ENTRY_POINT: 02dc1ae0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 163
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF
               (undefined8 param_1,undefined8 param_2,int param_3,byte param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  Il2CppObject *pIVar10;
  undefined8 local_18;
  
  puVar3 = 
  Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  puVar1 = Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__;
  local_18 = param_2;
  if ((OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_23FF30DA46198E5D2A59C4D804180A5D0A3B9FA9E5F41B3BF11BDA89556E908B
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    OVRPlugin_SetSpaceComponentStatus_mE711659BA25197948D2C6B71962FA6CE54FD08CF::
    s_Il2CppMethodInitialized = 1;
  }
  *param_5 = 0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  uVar8 = OVRPlugin_get_version_mF6424FE1E91DF97DE08CD5C7AE1FBC60873A354E();
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
  puVar9 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar3);
  bVar5 = Version_op_GreaterThanOrEqual_m792CE284B083EDAAC120E4028150194D1C1284EB(uVar8,*puVar9,0);
  if ((bVar5 & 1) == 0) {
    bVar4 = false;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    uVar6 = OVRPlugin_ToBool_mA03A0E6DE11F1A1726BE77C6A026C7D86B74BCD0(param_4 & 1);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar3);
    iVar7 = OVRP_1_72_0_ovrp_SetSpaceComponentStatus_m00B91F7237FBD8E130A74A1FE83C43393C0FE047
                      (param_1,&local_18,param_3,uVar6,param_5,0);
    bVar4 = iVar7 == 0;
  }
  if (param_3 == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    pIVar10 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1();
    iVar7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(param_5,0);
    NullCheck(pIVar10);
    VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar10,0x9b8087e,iVar7,-1);
    if (!bVar4) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
      pIVar10 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1();
      iVar7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(param_5,0);
      NullCheck(pIVar10);
      VirtualActionInvoker4<int,short,int,long>::Invoke(7,pIVar10,0x9b8087e,3,iVar7,-1);
    }
  }
  return bVar4;
}


