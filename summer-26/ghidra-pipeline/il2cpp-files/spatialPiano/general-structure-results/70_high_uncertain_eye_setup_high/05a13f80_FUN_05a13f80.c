/*
FUNCTION_NAME: FUN_05a13f80
ENTRY_POINT: 05a13f80
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


void FUN_05a13f80(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__9>__
  ;
                    /* catch() { ... } // from try @ 05a13f30 with catch @ 05a13f84
                       catch() { ... } // from try @ 05a13f70 with catch @ 05a13f84 */
  if ((DAT_06bc2034 & 1) == 0) {
                    /* try { // try from 05a13fa8 to 05b13fbf has its CatchHandler @ 05a140fc */
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__9>__
                );
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__9>__
                );
                    /* try { // try from 05a13fc0 to 05b14017 has its CatchHandler @ 05a13e40 */
    FUN_02f08768(PTR_DAT_067c9aa0);
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Create__);
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<ConfigureAsync>d__9>__
                );
    FUN_02f08768(Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetException__);
    DAT_06bc2034 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_SetException__
                              );
                    /* try { // try from 05a14018 to 05b14027 has its CatchHandler @ 05a140fc */
    FUN_05a13ea0(uVar3,0,*(undefined8 *)
                          Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_AwaitOnCompleted<OVRTask_Awaiter<List<OVRPlugin_Result>>,_OVRAnchor_Tracker_<ConfigureAsync>d__9>__
                );
                    /* try { // try from 05a14028 to 05b14037 has its CatchHandler @ 05a13e40 */
                    /* try { // try from 05a14038 to 05b1404f has its CatchHandler @ 05a140ec */
    if (*(int *)(*(long *)PTR_DAT_067c9aa0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = FUN_03348b44(uVar3,*(undefined8 *)
                                Method_OVRTaskBuilder<OVRResult<OVRAnchor_ConfigureTrackerResult>>_Start<OVRAnchor_Tracker_<ConfigureAsync>d__9>__
                        );
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
                    /* try { // try from 05a14068 to 05b1406b has its CatchHandler @ 05a140e8 */
  return;
}


