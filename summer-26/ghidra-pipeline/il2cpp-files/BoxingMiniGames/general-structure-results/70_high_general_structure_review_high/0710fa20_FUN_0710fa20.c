/*
FUNCTION_NAME: FUN_0710fa20
ENTRY_POINT: 0710fa20
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0710fc44) */

uint FUN_0710fa20(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_07eec5b0 & 1) == 0) {
    FUN_03642964(PTR_DAT_079f4530);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
                );
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
                );
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
                );
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<CreateAnchor>d__20>__
                );
    FUN_03642964(PTR_DAT_079feaa0);
    FUN_03642964(PTR_DAT_079f4e40);
    FUN_03642964(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                );
    DAT_07eec5b0 = 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar3 = FUN_04529c10(*(long *)(param_1 + 0x48),*(int *)(param_1 + 0x28),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<int>>_Start<AsyncProtocolRequest_<InnerRead>d__25>__
                        );
    puVar1 = PTR_DAT_079feaa0;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 7;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_0710fccc();
      uVar4 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079f4e40);
      FUN_071d67e8(uVar4,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_Start<SharedAnchorManager_<CreateAnchor>d__20>__
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_079f4530 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_07171d50(uVar4,0);
      uVar4 = Unity_Hierarchy_DefaultHierarchySearchQueryParser___ctor(param_1);
      FUN_0710e5fc(uVar4,1);
      FUN_03e16694(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<WaitAsync>d__46>__
                  );
      FUN_03e16694(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_SemaphoreSlim_<WaitUntilCountOrTimeoutAsync>d__32>__
                  );
      FUN_0710c228(*(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<RequestScenePermissionIfNeeded>d__13>__
                  );
      FUN_0710fd30();
      Unity_Hierarchy_DefaultHierarchySearchQueryParser___ctor(param_1);
      Unity_Hierarchy_Hierarchy__SetPropertyRaw_Injected();
      plVar7 = (long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 0;
      if (*plVar7 != 0) {
        lVar5 = thunk_FUN_03651584(0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_05e5eb48(lVar5,*plVar7,0);
        *plVar7 = 0;
        thunk_FUN_036b7ad0(plVar7,0);
      }
      uVar2 = FUN_07107290(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if (DAT_07eec8c8 == '\0') {
        FUN_03642964(PTR_DAT_079feaa0);
        DAT_07eec8c8 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
        lVar5 = *(long *)puVar1;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      *puVar6 = 0;
      thunk_FUN_036b7ad0(puVar6,0);
    }
  }
  return uVar2 & 1;
}


