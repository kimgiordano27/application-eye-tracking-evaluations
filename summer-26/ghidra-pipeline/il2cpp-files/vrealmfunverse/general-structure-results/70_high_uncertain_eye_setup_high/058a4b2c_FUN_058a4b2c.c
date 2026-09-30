/*
FUNCTION_NAME: FUN_058a4b2c
ENTRY_POINT: 058a4b2c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


bool FUN_058a4b2c(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((DAT_066d31a9 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31a9 = 1;
  }
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  if (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48)) {
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar3 = FUN_05cc0738(param_1 + 0x24,0);
    iVar4 = FUN_05cc0738(param_2 + 0x24,0);
    if (iVar3 == iVar4) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_05cc0738(param_1,0);
      iVar4 = FUN_05cc0738(param_2,0);
      if (iVar3 == iVar4) {
        iVar3 = 0;
        do {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar4 = FUN_05cc0738(param_1 + 0x24,0);
          if (iVar4 <= iVar3) {
            iVar3 = 0;
            while( true ) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar4 = FUN_05cc0738(param_1,0);
              bVar1 = iVar4 <= iVar3;
              if (iVar4 <= iVar3) break;
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              iVar4 = FUN_05cc05c8(param_1,iVar3,0);
              iVar5 = FUN_05cc05c8(param_2,iVar3,0);
              iVar3 = iVar3 + 1;
              if (iVar4 != iVar5) {
                return bVar1;
              }
            }
            return bVar1;
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          iVar4 = FUN_05cc05c8(param_1 + 0x24,iVar3,0);
          iVar5 = FUN_05cc05c8(param_2 + 0x24,iVar3,0);
          iVar3 = iVar3 + 1;
        } while (iVar4 == iVar5);
      }
    }
  }
  return false;
}


