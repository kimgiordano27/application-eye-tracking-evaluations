/*
FUNCTION_NAME: FUN_058a6d28
ENTRY_POINT: 058a6d28
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_18;validity_or_gating_hits_15;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_16
*/


long FUN_058a6d28(long param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_254 [132];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined1 auStack_184 [260];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar6 = 
  Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
  ;
  if ((DAT_066d31b3 & 1) == 0) {
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__);
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_Create__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_SetException__);
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_SetResult__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_SetStateMachine__);
    FUN_02b3c81c(Method_OVRTaskBuilder<bool>_get_Task__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                );
    FUN_02b3c81c(PTR_DAT_06324338);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                );
    DAT_066d31b3 = 1;
  }
  puVar7 = 
  Method_OVRTaskBuilder<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_AwaitOnCompleted<OVRTask_Awaiter<List<bool>>,_OVRSceneManager_<FilterByActiveRoom>d__46>__
  ;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_190 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  memset(auStack_254,0,0x84);
  memcpy(auStack_184,(void *)((long)param_2 + 0x194),0x104);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  puVar9 = (undefined8 *)FUN_0499dae4(auStack_184,param_3,*(undefined8 *)puVar7);
  puVar8 = Method_OVRTaskBuilder<bool>_SetStateMachine__;
  puVar7 = Method_OVRTaskBuilder<bool>_SetResult__;
  puVar6 = Method_OVRTaskBuilder<bool>_Create__;
  uStack_78 = *(undefined8 *)((long)puVar9 + 0x14);
  local_80 = *(undefined8 *)((long)puVar9 + 0xc);
  local_70 = *(undefined4 *)((long)puVar9 + 0x1c);
  uVar15 = *puVar9;
  uVar5 = *(undefined4 *)(puVar9 + 1);
  if (param_1 != 0) {
    FUN_058ab2a4(param_1,uVar15,uVar5,0);
    memcpy(&local_1d0,param_2,0x44);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar10 = (uint *)FUN_0499d774(&local_1d0,param_3,*(undefined8 *)puVar6);
    lVar11 = *(long *)puVar8;
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar11 = *(long *)puVar8;
    }
    puVar8 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
    ;
    puVar7 = 
    Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
    ;
    puVar6 = PTR_DAT_06324338;
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar11 != 0) {
      if (*(uint *)(lVar11 + 0x18) <= uVar1) {
LAB_058a7204:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar11 = *(long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
      if (-1 < (int)uVar2) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_058a7200;
        puVar9 = (undefined8 *)
                 FUN_0463ca1c(*(long *)(param_1 + 0x28),uVar2,
                              *(undefined8 *)
                               Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                             );
        uVar12 = FUN_04c0a5c4(*(undefined8 *)puVar7,*puVar9,*(undefined8 *)puVar6,0);
        if (lVar11 == 0) goto LAB_058a7200;
        lVar11 = FUN_04c0c4b0(lVar11,*(undefined8 *)puVar8,uVar12,0);
      }
      puVar8 = Method_OVRTaskBuilder<bool>_get_Task__;
      puVar7 = Method_OVRTaskBuilder<bool>_SetException__;
      puVar6 = 
      Method_OVRTaskBuilder<bool>_Start<OVRAnchor_<>c__DisplayClass54_0_<<FetchAnchorsAsync>g__execute_0>d>__
      ;
      memcpy(auStack_254,(void *)((long)param_2 + 0x44),0x84);
      if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      puVar10 = (uint *)FUN_0499e208(auStack_254,param_3,*(undefined8 *)puVar6);
      lVar13 = *(long *)puVar8;
      uVar1 = *puVar10;
      uVar3 = puVar10[1];
      uVar2 = puVar10[2];
      uVar4 = puVar10[3];
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar13 = *(long *)puVar8;
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      if (lVar13 == 0) goto LAB_058a7200;
      if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_058a7204;
      lVar13 = *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
      if (-1 < (int)uVar3) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_058a7200;
        puVar9 = (undefined8 *)
                 FUN_0463ca1c(*(long *)(param_1 + 0x28),uVar3,
                              *(undefined8 *)
                               Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                             );
        uVar12 = FUN_04c0a5c4(*(undefined8 *)
                               Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,*puVar9,*(undefined8 *)PTR_DAT_06324338,0);
        if (lVar13 == 0) goto LAB_058a7200;
        lVar13 = FUN_04c0c4b0(lVar13,*(undefined8 *)
                                      Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                              ,uVar12,0);
      }
      lVar16 = **(long **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
      if ((uVar2 != 0) && (uVar2 != 6)) {
        lVar16 = *(long *)puVar8;
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar16 = *(long *)puVar8;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_058a7200;
        if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_058a7204;
        lVar16 = *(long *)(lVar16 + (long)(int)uVar2 * 8 + 0x20);
        if (-1 < (int)uVar4) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_058a7200;
          puVar9 = (undefined8 *)
                   FUN_0463ca1c(*(long *)(param_1 + 0x28),uVar4,
                                *(undefined8 *)
                                 Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                               );
          uVar12 = FUN_04c0a5c4(*(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,*puVar9,*(undefined8 *)PTR_DAT_06324338,0);
          if (lVar16 == 0) goto LAB_058a7200;
          lVar16 = FUN_04c0c4b0(lVar16,*(undefined8 *)
                                        Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<<FetchTrackablesAsync>g__QuerySingleComponentAsync_66_0>d>__
                                ,uVar12,0);
        }
      }
      lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<bool>_Start<OVRSpatialAnchor_<WhenLocalizedAsync>d__22>__
                                 );
      FUN_0588d2c8(lVar14,0);
      uVar12 = FUN_058ab078(param_1,uVar15,uVar5,0);
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
        thunk_FUN_02bb0e9c();
        *(undefined4 *)(lVar14 + 0x30) = param_3;
        *(long *)(lVar14 + 0x18) = lVar11;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x18),lVar11);
        *(long *)(lVar14 + 0x20) = lVar13;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar13);
        *(long *)(lVar14 + 0x28) = lVar16;
        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x28),lVar16);
        *(undefined8 *)(lVar14 + 0x34) = uVar15;
        *(undefined4 *)(lVar14 + 0x3c) = uVar5;
        *(undefined8 *)(lVar14 + 0x48) = uStack_78;
        *(undefined8 *)(lVar14 + 0x40) = local_80;
        *(undefined4 *)(lVar14 + 0x50) = local_70;
        return lVar14;
      }
    }
  }
LAB_058a7200:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


