/*
FUNCTION_NAME: FUN_01011b9c
ENTRY_POINT: 01011b9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_01011b9c(long param_1)

{
  undefined *puVar1;
  
  if ((DAT_03775dde & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                      );
    DAT_03775dde = 1;
  }
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_026f17d8(*(long *)(param_1 + 0x90),0,0);
    FUN_0268ea48(*(undefined4 *)(param_1 + 0x74),param_1,*(undefined8 *)puVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


