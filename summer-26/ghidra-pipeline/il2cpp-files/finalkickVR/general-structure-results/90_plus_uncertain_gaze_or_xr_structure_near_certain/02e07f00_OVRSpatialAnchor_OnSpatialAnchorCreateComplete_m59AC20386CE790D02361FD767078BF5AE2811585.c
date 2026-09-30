/*
FUNCTION_NAME: OVRSpatialAnchor_OnSpatialAnchorCreateComplete_m59AC20386CE790D02361FD767078BF5AE2811585
ENTRY_POINT: 02e07f00
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


void OVRSpatialAnchor_OnSpatialAnchorCreateComplete_m59AC20386CE790D02361FD767078BF5AE2811585
               (ulong param_1,byte param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *pOVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  short local_7c;
  OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *local_58;
  undefined8 local_50;
  byte local_41;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar2 = StringLiteral_75;
  puVar1 = Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__;
  local_41 = param_2 & 1;
  local_50 = param_6;
  local_40 = param_1;
  local_38 = param_4;
  uStack_30 = param_5;
  local_28 = param_3;
  if ((OVRSpatialAnchor_OnSpatialAnchorCreateComplete_m59AC20386CE790D02361FD767078BF5AE2811585::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_177);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar2);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRSpatialAnchor_OnSpatialAnchorCreateComplete_m59AC20386CE790D02361FD767078BF5AE2811585::
    s_Il2CppMethodInitialized = 1;
  }
  local_58 = (OVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874 *)0x0;
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar2);
  lVar8 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar2);
  bVar6 = OVRSpatialAnchor_TryExtractValue_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisOVRSpatialAnchor_t934BFAE22D42E703A59DD025972C1FBF22381874_m1D1C96F6601BC2442D6C2F277609A686513DD9D5
                    (*(Dictionary_2_tAEEBFBD29E5E70BD27E45CE40A9ACB0102E7E5AE **)(lVar8 + 8),
                     local_40,&local_58,*(MethodInfo **)StringLiteral_177);
  if ((bVar6 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
              );
    pIVar9 = (Il2CppObject *)OVRTelemetry_get_Client_m6F963685F8C47B1F2C54488CD483EF1FD20C3BB1(0);
    if ((local_41 & 1) == 0) {
      local_7c = 3;
    }
    else {
      local_7c = 2;
    }
    iVar7 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(&local_40,0);
    NullCheck(pIVar9);
    VirtualActionInvoker4<int,short,int,long>::Invoke(7,pIVar9,0x9b83ae1,local_7c,iVar7,-1);
    pOVar3 = local_58;
    if ((local_41 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(pOVar3,0);
      uVar5 = local_28;
      uVar4 = uStack_30;
      uVar10 = local_38;
      pOVar3 = local_58;
      if ((bVar6 & 1) != 0) {
        NullCheck(local_58);
        OVRSpatialAnchor_InitializeUnchecked_m7AA0BE0A8FCCF24E350D8E63BD7C8169C54CF270
                  (pOVar3,uVar5,uVar10,uVar4,0);
        return;
      }
    }
    pOVar3 = local_58;
    if ((local_41 & 1) != 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(pOVar3,0);
      if ((bVar6 & 1) == 0) {
        uVar10 = OVRSpace_op_Implicit_m1F9D1045BC491FB6F551F3F2317DC526B2574AE0(local_28);
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
        OVRPlugin_DestroySpace_mC53A688B7DE2EAC7186F087C8E3395D581928D90(uVar10,0);
        return;
      }
    }
    pOVar3 = local_58;
    if ((local_41 & 1) == 0) {
      il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
      bVar6 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(pOVar3,0);
      pOVar3 = local_58;
      if ((bVar6 & 1) != 0) {
        il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
        Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(pOVar3,0);
      }
    }
  }
  return;
}


