/*
FUNCTION_NAME: FUN_07e63a1c
ENTRY_POINT: 07e63a1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_6;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void FUN_07e63a1c(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_0899a875 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryPrivateCustomDataAsync>d__29>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryProtectedPlayerDataAsync>d__30>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryPublicPlayerDataAsync>d__31>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<CustomDataApiClient_<QueryAsync>d__6>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryDefaultCustomDataAsync>d__27>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryPrivateCustomDataAsync>d__29>__
                );
    DAT_0899a875 = 1;
  }
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryPrivateCustomDataAsync>d__29>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_Start<DataApiClient_<QueryDefaultCustomDataAsync>d__27>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryPublicPlayerDataAsync>d__31>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryProtectedPlayerDataAsync>d__30>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryDefaultPlayerDataAsync>d__28>__
  ;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_2 != 0) {
    uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<QueryIndexResponse>>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<QueryPrivateCustomDataAsync>d__29>__
                              );
    FUN_05d167e0(uVar9,param_1,*(undefined8 *)puVar7,0);
    FUN_04dea068(param_2,uVar9,*(undefined8 *)puVar6);
    FUN_04de90b8(&local_88,param_2,*(undefined8 *)puVar5);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar10 = FUN_061c1964(&local_70,*(undefined8 *)puVar4), lVar8 = local_60,
          (uVar10 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      plVar11 = *(long **)(local_60 + 0x18);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar10 = (**(code **)(*plVar11 + 600))(plVar11,*(undefined8 *)(*plVar11 + 0x260));
      if ((uVar10 & 1) == 0) {
LAB_07e63be8:
        if (*(char *)(lVar8 + 0x20) != '\0') {
          FUN_07e63a1c(param_1,*(undefined8 *)(lVar8 + 0x28));
        }
      }
      else {
        lVar12 = *(long *)(lVar8 + 0x18);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        if (*(int *)(lVar12 + 0x24) < 0) goto LAB_07e63be8;
        uVar10 = FUN_07f40b58(lVar12,0);
        if ((uVar10 & 1) == 0) {
          lVar12 = *(long *)(param_1 + 0x20);
          if (lVar12 == 0) {
LAB_07e63c68:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_07e63c68;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
            *plVar11 = lVar8;
            thunk_FUN_03afed3c(plVar11,lVar8);
          }
          else {
            FUN_04de85b0(lVar12,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_07e63a1c(param_1,*(undefined8 *)(lVar8 + 0x28));
      }
      *(undefined8 *)(lVar8 + 0x28) = 0;
      thunk_FUN_03afed3c((undefined8 *)(lVar8 + 0x28),0);
    }
    FUN_061c1960(&local_70,*(undefined8 *)puVar3);
  }
  return;
}


