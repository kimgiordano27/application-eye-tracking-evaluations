/*
FUNCTION_NAME: FUN_05ed3c60
ENTRY_POINT: 05ed3c60
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_14;weak_xr_or_state_hits_14;validity_or_gating_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_14
*/


void FUN_05ed3c60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetResult__
  ;
  puVar2 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
  ;
  puVar1 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
  ;
  if ((DAT_06dc3ebb & 1) == 0) {
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Create__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                );
    FUN_02d965b8(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetException__
                );
    FUN_02d965b8(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__);
    FUN_02d965b8(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06dc3ebb = 1;
  }
  lVar4 = FUN_02d966a4(*(undefined8 *)puVar1,6);
  local_40 = 0;
  uStack_38 = 0;
  FUN_03e52978(&local_40,0,*(undefined8 *)puVar2,*(undefined8 *)puVar3);
  puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Create__;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = uStack_38;
      *(undefined8 *)(lVar4 + 0x20) = local_40;
      LeanTween__value(lVar4 + 0x28,0);
      local_50 = 0;
      uStack_48 = 0;
      FUN_03e52978(&local_50,1,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
      puVar1 = 
      Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
      ;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x38) = uStack_48;
        *(undefined8 *)(lVar4 + 0x30) = local_50;
        LeanTween__value(lVar4 + 0x38,0);
        local_60 = 0;
        uStack_58 = 0;
        FUN_03e52978(&local_60,2,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
        puVar1 = 
        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
        ;
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x48) = uStack_58;
          *(undefined8 *)(lVar4 + 0x40) = local_60;
          LeanTween__value(lVar4 + 0x48,0);
          local_70 = 0;
          uStack_68 = 0;
          FUN_03e52978(&local_70,3,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
          puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x58) = uStack_68;
            *(undefined8 *)(lVar4 + 0x50) = local_70;
            LeanTween__value(lVar4 + 0x58,0);
            local_80 = 0;
            uStack_78 = 0;
            FUN_03e52978(&local_80,4,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
            puVar1 = 
            Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_Start<OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
            ;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x68) = uStack_78;
              *(undefined8 *)(lVar4 + 0x60) = local_80;
              LeanTween__value(lVar4 + 0x68,0);
              local_90 = 0;
              uStack_88 = 0;
              FUN_03e52978(&local_90,5,*(undefined8 *)puVar1,*(undefined8 *)puVar3);
              puVar3 = 
              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
              ;
              puVar2 = 
              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
              ;
              puVar1 = 
              Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_Add__
              ;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x78) = uStack_88;
                *(undefined8 *)(lVar4 + 0x70) = local_90;
                LeanTween__value(lVar4 + 0x78,0);
                uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
                FUN_04df7e04(uVar5,lVar4,*(undefined8 *)puVar2);
                **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar5;
                LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar5);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


