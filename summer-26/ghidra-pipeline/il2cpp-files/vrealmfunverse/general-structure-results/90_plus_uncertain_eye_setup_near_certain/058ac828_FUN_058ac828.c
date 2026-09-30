/*
FUNCTION_NAME: FUN_058ac828
ENTRY_POINT: 058ac828
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_058ac828(void *param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_066d31e4 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    DAT_066d31e4 = 1;
  }
  uVar16 = DAT_010316e8;
  uVar3 = *param_2;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  *(undefined4 *)((long)param_1 + 0x298) = uVar3;
  *(undefined4 *)((long)param_1 + 0x29c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x2a0) = uVar16;
  *(undefined4 *)((long)param_1 + 0x2a8) = 0;
  memset((void *)((long)param_1 + 0xd0),0,0x1c8);
  uVar16 = *(undefined8 *)(param_2 + 0x19);
  uVar4 = *(undefined1 *)((long)param_2 + 0x7d);
  uVar5 = *(undefined1 *)(param_2 + 2);
  *(undefined8 *)((long)param_1 + 0x2b4) = *(undefined8 *)(param_2 + 0x1b);
  *(undefined8 *)((long)param_1 + 0x2ac) = uVar16;
  *(undefined1 *)((long)param_1 + 0x2c0) = uVar4;
  *(undefined1 *)((long)param_1 + 0x2c1) = uVar5;
  memset(param_1,0,200);
  cVar9 = DAT_066d31dd;
  *(undefined8 *)((long)param_1 + 200) = 0xffffffff00000000;
  if (cVar9 == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31dd = '\x01';
  }
  puVar7 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  iVar1 = param_2[0xe];
  uVar2 = param_2[0xf];
  uVar11 = (ulong)uVar2;
  lVar14 = *(long *)
            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
  ;
  lVar12 = *(long *)(lVar14 + 0x38);
  if (lVar12 == 0) {
    FUN_02b76274(lVar14);
    lVar12 = *(long *)(lVar14 + 0x38);
  }
  lVar12 = FUN_0322b7a0(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(lVar12 + 0x10));
  puVar8 = Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__;
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if ((int)uVar2 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar2 != 0) {
    lVar12 = lVar12 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499de70((long)param_1 + 0xd0,lVar12,*(undefined8 *)puVar8);
      uVar11 = uVar11 - 1;
      lVar12 = lVar12 + 0x18;
    } while (uVar11 != 0);
  }
  if (DAT_066d31da == '\0') {
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    DAT_066d31da = '\x01';
  }
  lVar14 = *(long *)puVar7;
  iVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  uVar11 = (ulong)uVar2;
  lVar12 = *(long *)(lVar14 + 0x38);
  if (lVar12 == 0) {
    FUN_02b76274(lVar14);
    lVar12 = *(long *)(lVar14 + 0x38);
  }
  lVar12 = FUN_0322b7a0(*(undefined8 *)(param_3 + 0x40),*(undefined8 *)(lVar12 + 0x10));
  puVar6 = Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__;
  puVar7 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
  ;
  if ((int)uVar2 < 0) {
    FUN_04d9bcc4(0);
  }
  else if (uVar2 != 0) {
    lVar12 = lVar12 + (long)iVar1 * 0x18;
    do {
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_0499de70((long)param_1 + 0xd0,lVar12,*(undefined8 *)puVar6);
      uVar11 = uVar11 - 1;
      lVar12 = lVar12 + 0x18;
    } while (uVar11 != 0);
  }
  uVar11 = FUN_058aa534(param_2,0);
  if (((uVar11 & 1) == 0) || (*(char *)((long)param_1 + 0x2c1) != '\0')) {
    *(undefined4 *)((long)param_1 + 700) = 0xffffffff;
  }
  else {
    if (*(int *)(*(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__62>__
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    cVar9 = DAT_066d31de;
    *(undefined4 *)((long)param_1 + 700) = *(undefined4 *)((long)param_1 + 400);
    if (cVar9 == '\0') {
      FUN_02b3c81c(Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__);
      DAT_066d31de = '\x01';
    }
    iVar1 = param_2[0x18];
    plVar15 = *(long **)(param_3 + 0x40);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetAwaiter__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    puVar13 = (undefined8 *)(*plVar15 + (long)iVar1 * 0x18);
    local_60 = puVar13[2];
    uStack_68 = puVar13[1];
    local_70 = *puVar13;
    FUN_0499de70((long)param_1 + 0xd0,&local_70,
                 *(undefined8 *)Method_OVRTask<OVRAnchor_Tracker_AsyncLock>_GetAwaiter__);
  }
  bVar10 = false;
  if (*(char *)((long)param_2 + 0x7f) != '\0') {
    bVar10 = *(char *)((long)param_1 + 0x2c1) == '\0';
  }
  uVar16 = *(undefined8 *)(param_2 + 4);
  *(bool *)((long)param_1 + 0x2c2) = bVar10;
  *(undefined8 *)((long)param_1 + 0x2c4) = uVar16;
  *(undefined4 *)((long)param_1 + 0x2cc) = param_2[6];
  FUN_058acb64(param_3,param_1,param_2);
  return;
}


