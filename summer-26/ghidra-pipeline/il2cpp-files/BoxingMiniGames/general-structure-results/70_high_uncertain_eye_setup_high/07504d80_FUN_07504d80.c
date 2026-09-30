/*
FUNCTION_NAME: FUN_07504d80
ENTRY_POINT: 07504d80
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_8
*/


undefined8 FUN_07504d80(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
  ;
  if ((DAT_07ef4a9e & 1) == 0) {
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
                );
    FUN_03642964(PTR_DAT_079ffb78);
    FUN_03642964(PTR_DAT_079ffb80);
    FUN_03642964(PTR_DAT_079fd4b0);
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_03642964(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
                );
    FUN_03642964(PTR_DAT_079ffb88);
    DAT_07ef4a9e = 1;
  }
  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_05e5ae34(lVar10,0);
  puVar8 = 
  Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
  ;
  puVar7 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
  ;
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__70>__
  ;
  puVar5 = PTR_DAT_079ffb88;
  puVar4 = PTR_DAT_079ffb80;
  puVar3 = PTR_DAT_079ffb78;
  puVar2 = PTR_DAT_079fd4b0;
  if (lVar10 != 0) {
    puVar14 = (undefined8 *)(lVar10 + 0x18);
    *puVar14 = param_2;
    thunk_FUN_036b7ad0(puVar14,param_2);
    uVar13 = *puVar14;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar9 = OVRTask_CombinedTaskData_<>c<OVRResult<Guid,_Int32Enum>>__<_cctor>b__10_0
                      (uVar13,*(undefined8 *)puVar4);
    FUN_074ef3c8(uVar9 & 1,*(undefined8 *)puVar5,*(undefined8 *)(lVar10 + 0x18));
    uVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_07528478(uVar13,0);
    puVar14 = (undefined8 *)(lVar10 + 0x10);
    *puVar14 = uVar13;
    thunk_FUN_036b7ad0(puVar14,uVar13);
    uVar15 = *(undefined8 *)(param_1 + 0x10);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined1 *)(param_1 + 0x28);
    uVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
    FUN_04159c38(uVar13,lVar10,*(undefined8 *)puVar8,0);
    uVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
    FUN_0750b33c(uVar11,uVar15,uVar16,uVar1,uVar13,0);
    puVar2 = 
    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_7_1>d>__
    ;
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
      *puVar12 = uVar11;
      thunk_FUN_036b7ad0(puVar12,uVar11);
      uVar15 = *puVar14;
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
      FUN_074fa828(uVar13,uVar15,uVar11);
      return uVar13;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


