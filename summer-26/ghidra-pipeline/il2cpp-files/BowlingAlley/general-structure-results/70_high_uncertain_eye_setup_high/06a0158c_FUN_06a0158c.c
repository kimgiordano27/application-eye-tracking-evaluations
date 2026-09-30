/*
FUNCTION_NAME: FUN_06a0158c
ENTRY_POINT: 06a0158c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06a0158c(void)

{
  undefined *puVar1;
  
  puVar1 = Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__;
  if ((DAT_076e2869 & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_get_Task__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetResult__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                      );
    DAT_076e2869 = 1;
  }
  FUN_03a0dbc8(*(undefined8 *)puVar1);
  FUN_03a0de50(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
              );
  FUN_03a0de08(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetResult__
              );
  FUN_03a0ddc0(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
              );
  FUN_03a06f30(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
              );
  FUN_03a07518(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Start<OVRSpatialAnchor_<LoadUnboundAnchorsAsync>d__65>__
              );
  FUN_03a0de98(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
              );
  FUN_03a0da5c(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
              );
  FUN_03a0d594(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetResult__
              );
  FUN_03a0d1a4(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetException__
              );
  FUN_03a0d15c(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_Create__
              );
  FUN_03a0d7d4(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_SetStateMachine__
              );
  FUN_03a0dee0(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
              );
  FUN_03a0df28(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
              );
  FUN_03a0df70(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
              );
  FUN_03a0dfb8(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_get_Task__
              );
  FUN_03a0e000(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
              );
  FUN_03a0e048(*(undefined8 *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
              );
  return;
}


