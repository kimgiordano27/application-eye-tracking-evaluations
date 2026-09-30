/*
FUNCTION_NAME: FUN_06a007bc
ENTRY_POINT: 06a007bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06a007bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
  ;
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__7>__
  ;
  if ((DAT_076e280e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__7>__
                      );
    thunk_FUN_032e1da0(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchSharedAnchorsAsync>d__10>__
                      );
    DAT_076e280e = 1;
  }
  uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
  FUN_055c5dcc(uVar4,0,*(undefined8 *)puVar3,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  thunk_FUN_0333a630(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
  return;
}


