/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData$$Initialize
ENTRY_POINT: 05ed13f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_CompilerContextData__Initialize
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_04ffe850(param_2,**(undefined8 **)(param_1 + 0x390));
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x38),param_2);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Collections_Generic_List<RenderGraph_DebugData_PassData>_set_Item__
                            );
  FUN_0400f984(uVar1,*(undefined8 *)
                      Method_System_Collections_Generic_List<RenderGraph_DebugData_ResourceData>__ctor__
              );
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x40),uVar1);
  uVar1 = thunk_FUN_02dd3144(*unaff_x29);
  FUN_04ff0cf0(uVar1,*unaff_x28);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x48),uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Value__);
  FUN_044e4854(uVar1,*(undefined8 *)Method_OVRResult<Guid,_OVRColocationSession_Result>_get_Status__
              );
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x58),uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a149d0);
  FUN_0408d358(uVar1,*(undefined8 *)PTR_DAT_06a149c8);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x68),uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Success__
                            );
  FUN_04ff43fc(uVar1,*(undefined8 *)
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>_get_Status__
              );
  *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x70),uVar1);
  uVar1 = thunk_FUN_02dd3144(*unaff_x23);
  FUN_04ff0cf0(uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x78),uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_get_Status__);
  FUN_047cfb3c(uVar1,*(undefined8 *)Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x80),uVar1);
  uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_OVRResult<Guid,_OVRColocationSession_Result>_From__);
  FUN_04130610(uVar1,*(undefined8 *)
                      Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Value__
              );
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x90),uVar1);
  FUN_0552aca4();
  *(undefined8 *)(unaff_x20 + 0x50) = unaff_x19;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x50));
  return;
}


