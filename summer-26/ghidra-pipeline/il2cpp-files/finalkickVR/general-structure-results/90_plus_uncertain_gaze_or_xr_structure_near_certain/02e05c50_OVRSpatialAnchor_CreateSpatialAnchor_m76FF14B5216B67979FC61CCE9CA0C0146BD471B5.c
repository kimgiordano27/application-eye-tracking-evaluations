/*
FUNCTION_NAME: OVRSpatialAnchor_CreateSpatialAnchor_m76FF14B5216B67979FC61CCE9CA0C0146BD471B5
ENTRY_POINT: 02e05c50
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_6;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRSpatialAnchor_CreateSpatialAnchor_m76FF14B5216B67979FC61CCE9CA0C0146BD471B5
               (OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *param_1,
               undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  ulong uVar6;
  Dictionary_2_tAEEBFBD29E5E70BD27E45CE40A9ACB0102E7E5AE *pDVar7;
  undefined1 auStack_168 [47];
  byte local_139;
  OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *local_138;
  undefined1 auStack_130 [40];
  undefined8 local_108;
  undefined8 local_fc;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_bc;
  undefined8 local_a0;
  undefined4 local_84;
  undefined8 local_80 [3];
  undefined4 local_68;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *local_28;
  
  puVar2 = StringLiteral_75;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
  ;
  local_30 = param_2;
  local_28 = param_1;
  if ((OVRSpatialAnchor_CreateSpatialAnchor_m76FF14B5216B67979FC61CCE9CA0C0146BD471B5::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_122);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRSpatialAnchor_CreateSpatialAnchor_m76FF14B5216B67979FC61CCE9CA0C0146BD471B5::
    s_Il2CppMethodInitialized = 1;
  }
  memset(&local_58,0,0x28);
  local_80[0] = 0;
  local_68 = 0;
  il2cpp_codegen_initobj(&local_58,0x28);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  local_84 = OVRPlugin_GetTrackingOriginType_m2EDAA913509E615DD626803932B8CE16955F961A();
  local_58 = local_84;
  OVRSpatialAnchor_GetTrackingSpacePose_m8F42DE4EA701222AF3AA93A7B563D138BC7F879F(local_28,0);
  local_a0 = local_bc;
  local_80[0] = local_bc;
  OVRPose_ToPosef_m07DD283CB7D729999F7223E8879214C080066192(local_80,0);
  local_e0 = local_fc;
  local_54 = local_fc;
  uStack_40 = uStack_e8;
  local_108 = OVRPlugin_GetTimeInSeconds_m14194E403D2D2F9AC59CFADD5289DC58169575BF(0);
  local_38 = local_108;
  memcpy(auStack_130,&local_58,0x28);
  local_138 = local_28 + 0x28;
  memcpy(auStack_168,auStack_130,0x28);
  local_139 = OVRPlugin_CreateSpatialAnchor_mF6FFB445CDAAC948FCCD37A0714B2E90CF5B238A
                        (auStack_168,local_138,0);
  local_139 = local_139 & 1;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  pIVar4 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
  iVar3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_28 + 0x28,0);
  NullCheck(pIVar4);
  VirtualActionInvoker3<int,int,long>::Invoke(4,pIVar4,0x9b83ae1,iVar3,-1);
  if ((local_139 & 1) == 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pIVar4 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1();
    iVar3 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(local_28 + 0x28,0);
    NullCheck(pIVar4);
    VirtualActionInvoker4<int,short,int,long>::Invoke(7,pIVar4,0x9b83ae1,3,iVar3,-1);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(local_28,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
    lVar5 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
    pDVar7 = *(Dictionary_2_tAEEBFBD29E5E70BD27E45CE40A9ACB0102E7E5AE **)(lVar5 + 8);
    uVar6 = *(ulong *)(local_28 + 0x28);
    NullCheck(pDVar7);
    Dictionary_2_set_Item_m27768CAC15858D9775C35102880046E33D21E213
              (pDVar7,uVar6,local_28,*(MethodInfo **)StringLiteral_122);
  }
  return;
}


