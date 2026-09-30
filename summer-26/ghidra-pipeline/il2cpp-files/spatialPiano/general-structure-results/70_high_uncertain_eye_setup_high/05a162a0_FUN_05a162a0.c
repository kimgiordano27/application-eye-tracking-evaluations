/*
FUNCTION_NAME: FUN_05a162a0
ENTRY_POINT: 05a162a0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_05a162a0(long param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if ((DAT_06bc205d & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc205d = 1;
  }
  if (param_4 < 0) {
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    bVar2 = false;
    if ((0 < -param_4) && (param_5 < -param_4)) {
      iVar3 = -(param_5 + param_4);
      do {
        iVar1 = *param_2;
        bVar2 = param_3 <= iVar1;
        if (param_3 <= iVar1) {
          return bVar2;
        }
        iVar3 = iVar3 + -1;
        *param_2 = iVar1 + 1;
        *(undefined1 *)(iVar1 + param_1) = 0x20;
      } while (iVar3 != 0);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}


