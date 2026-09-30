/*
FUNCTION_NAME: FUN_05a16134
ENTRY_POINT: 05a16134
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05a16134(long param_1,int *param_2,int param_3,undefined8 param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
                    /* try { // try from 05a1613c to 05b16177 has its CatchHandler @ 05a15b28 */
  if ((DAT_06bc204b & 1) == 0) {
    FUN_02f08768(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    DAT_06bc204b = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar2 = (param_6 << 0x10) >> 0x18;
  if ((0 < iVar2) && (iVar5 = iVar2 - param_5, iVar5 != 0 && param_5 <= iVar2)) {
    do {
      iVar1 = *param_2;
      if (param_3 <= iVar1) {
        return;
      }
      iVar5 = iVar5 + -1;
      *param_2 = iVar1 + 1;
      *(undefined1 *)(iVar1 + param_1) = 0x20;
    } while (iVar5 != 0);
  }
  iVar5 = param_3 - *param_2;
  if (param_5 <= iVar5) {
    iVar5 = param_5;
  }
  if (iVar5 < 1) {
    return;
  }
  FUN_0609bf0c(*param_2 + param_1,param_4,iVar5,0);
  lVar4 = *(long *)puVar3;
  *param_2 = *param_2 + iVar5;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05a162a0(param_1,param_2,param_3,iVar2,param_5);
  return;
}


