/*
FUNCTION_NAME: FUN_05ed1188
ENTRY_POINT: 05ed1188
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;telemetry_or_network_hits_6;functionality_data_collection_or_telemetry_hits_6
*/


void FUN_05ed1188(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar8 = Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__;
  puVar7 = Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__;
  puVar6 = Method_System_Nullable<DateTimeOffset>_get_Value__;
  puVar5 = Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__;
  puVar4 = Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__;
  puVar3 = Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__;
  puVar2 = Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>__ctor__
  ;
  puVar1 = Method_System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>__ctor__;
  if ((DAT_06dc3eb2 & 1) == 0) {
    FUN_02d965b8(Method_System_Nullable<DateTimeOffset>_GetValueOrDefault__);
    FUN_02d965b8(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_GetEnumerator__
                );
    FUN_02d965b8(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Clear__)
    ;
    FUN_02d965b8(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
                );
    FUN_02d965b8(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Success__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>_Add__);
    FUN_02d965b8(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    FUN_02d965b8(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_Clear__);
    FUN_02d965b8(Method_System_Nullable<DateTimeOffset>_get_Value__);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<XmlSchemaObjectTable_XmlSchemaObjectEntry>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<XRUIInputModule_RegisteredTouch>__ctor__);
    FUN_02d965b8(PTR_DAT_06a149c8);
    FUN_02d965b8(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__)
    ;
    FUN_02d965b8(Method_OVRResult<Guid,_OVRColocationSession_Result>_From__);
    FUN_02d965b8(Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__);
    FUN_02d965b8(PTR_DAT_06a149d0);
    FUN_02d965b8(Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__);
    FUN_02d965b8(Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__);
    FUN_02d965b8(Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
    FUN_02d965b8(Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
    DAT_06dc3eb2 = 1;
  }
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_04ff0cf0(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  FUN_04e92874(uVar9,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x18),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_04ff0cf0(uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x20) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x20),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_03c22a18(uVar9,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x28),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                            );
  FUN_04ff0cf0(uVar9,*(undefined8 *)
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Success__
              );
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x30),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_Clear__
                            );
  FUN_04ffe850(uVar9,*(undefined8 *)
                      Method_System_Collections_Generic_List<UITKTextJobSystem_ManagedJobData>_GetEnumerator__
              );
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x38),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                            );
  FUN_0400f984(uVar9,*(undefined8 *)
                      Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
              );
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x40),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_04ff0cf0(uVar9,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x48),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__);
  FUN_044e4854(uVar9,*(undefined8 *)Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__
              );
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x58),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a149d0);
  FUN_0408d358(uVar9,*(undefined8 *)PTR_DAT_06a149c8);
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x68),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                            );
  FUN_04ff43fc(uVar9,*(undefined8 *)
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
              );
  *(undefined8 *)(param_1 + 0x70) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x70),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_04ff0cf0(uVar9,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x78),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
  FUN_047cfb3c(uVar9,*(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x80),uVar9);
  uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<Guid,_OVRColocationSession_Result>_From__);
  FUN_04130610(uVar9,*(undefined8 *)
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
              );
  *(undefined8 *)(param_1 + 0x90) = uVar9;
  LeanTween__value((undefined8 *)(param_1 + 0x90),uVar9);
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x50),param_2);
  return;
}


