/*
FUNCTION_NAME: FUN_07e66800
ENTRY_POINT: 07e66800
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07e66800(undefined4 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  if ((DAT_0899a89e & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemResponse>>_Start<DataApiClient_<SetProtectedItemAsync>d__38>__
                );
    FUN_03a8a718(OVRPlugin_OVRP_0_1_2_TypeInfo);
    DAT_0899a89e = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    FUN_05ed2dcc(lVar2,param_1,param_2,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<SetItemResponse>>_Start<DataApiClient_<SetProtectedItemAsync>d__38>__
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


