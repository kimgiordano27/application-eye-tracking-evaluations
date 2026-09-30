/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceTrackingVisemesSupported
ENTRY_POINT: 056a7e20
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetFaceTrackingVisemesSupported
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo;
  puVar1 = System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo;
  if ((DAT_06dbca56 & 1) == 0) {
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    DAT_06dbca56 = 1;
  }
  uVar3 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_04df7850(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  LeanTween__value((undefined8 *)(param_1 + 0x40),uVar3);
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  LeanTween__value((undefined8 *)(param_1 + 0x30),param_3);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x38),param_4);
  FUN_056a7ef0(param_1);
  return;
}


