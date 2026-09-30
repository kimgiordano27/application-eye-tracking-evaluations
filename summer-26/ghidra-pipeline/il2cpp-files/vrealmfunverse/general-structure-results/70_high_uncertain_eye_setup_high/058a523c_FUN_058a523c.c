/*
FUNCTION_NAME: FUN_058a523c
ENTRY_POINT: 058a523c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_058a523c(undefined8 param_1,long param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_DAT_063214d0;
  if ((DAT_066d31ac & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066d31ac = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c4a97 == '\0') {
    FUN_02b3c81c(PTR_DAT_063214d0);
    DAT_066c4a97 = '\x01';
  }
  lVar2 = *(long *)puVar5;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar5;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x11) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_2 + 0x294);
  if (*(int *)(*(long *)
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if ((iVar1 == 0) || (*(int *)(param_2 + 0x2a8) == 0)) {
    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar3 = thunk_FUN_02b79644();
    puVar5 = 
    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
  }
  else {
    if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && ((param_6 != 0 && (param_7 != 0)))
       ) {
      return;
    }
    thunk_FUN_02ba3594(PTR_DAT_06312bc0);
    uVar3 = thunk_FUN_02b79644();
    puVar5 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
  }
  uVar4 = thunk_FUN_02ba3594(puVar5);
  FUN_04db2a6c(uVar3,uVar4,0);
  uVar4 = thunk_FUN_02ba3594(
                            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar3,uVar4);
}


