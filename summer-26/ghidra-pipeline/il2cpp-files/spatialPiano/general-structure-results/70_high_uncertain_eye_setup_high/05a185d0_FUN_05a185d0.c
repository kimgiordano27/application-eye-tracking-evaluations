/*
FUNCTION_NAME: FUN_05a185d0
ENTRY_POINT: 05a185d0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a185d0(undefined8 param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  if ((DAT_06bc2063 & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc2063 = 1;
  }
  if (*param_2 < *param_3) {
    piVar2 = param_3;
    param_3 = param_2;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
  }
  else {
    piVar2 = param_2;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
  }
  FUN_05a18664(param_1,piVar2,param_3);
  return;
}


