/*
FUNCTION_NAME: FUN_058aae90
ENTRY_POINT: 058aae90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_8
*/


bool FUN_058aae90(long param_1,ushort param_2,int param_3,long param_4)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ushort *puVar7;
  int iVar8;
  
  puVar3 = PTR_DAT_06322b80;
  if ((DAT_066d31c7 & 1) == 0) {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    DAT_066d31c7 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if ((param_3 == 0) && (*(int *)(param_1 + 4) == 2)) {
    if (DAT_066d31dd == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31dd = '\x01';
    }
    puVar4 = 
    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar1 = *(int *)(param_1 + 0x38);
    iVar8 = *(int *)(param_1 + 0x3c);
    lVar6 = *(long *)
             Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
    ;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02b76274(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = FUN_0322b7a0(*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(lVar5 + 0x10));
    if (iVar8 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (iVar8 != 0) {
      puVar7 = (ushort *)(lVar5 + (long)iVar1 * 0x18);
      do {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (*puVar7 == param_2) {
          return true;
        }
        iVar8 = iVar8 + -1;
        puVar7 = puVar7 + 0xc;
      } while (iVar8 != 0);
    }
    if (DAT_066d31da == '\0') {
      FUN_02b3c81c(
                  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                  );
      DAT_066d31da = '\x01';
    }
    lVar6 = *(long *)puVar4;
    iVar1 = *(int *)(param_1 + 0x40);
    iVar8 = *(int *)(param_1 + 0x44);
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      FUN_02b76274(lVar6);
      lVar5 = *(long *)(lVar6 + 0x38);
    }
    lVar5 = FUN_0322b7a0(*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(lVar5 + 0x10));
    if (iVar8 < 0) {
      FUN_04d9bcc4(0);
    }
    else if (iVar8 != 0) {
      puVar7 = (ushort *)(lVar5 + (long)iVar1 * 0x18);
      while( true ) {
        iVar8 = iVar8 + -1;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        uVar2 = *puVar7;
        if ((uVar2 ^ param_2) == 0) break;
        puVar7 = puVar7 + 0xc;
        if (iVar8 == 0) {
          return (uVar2 ^ param_2) == 0;
        }
      }
      return true;
    }
  }
  return false;
}


