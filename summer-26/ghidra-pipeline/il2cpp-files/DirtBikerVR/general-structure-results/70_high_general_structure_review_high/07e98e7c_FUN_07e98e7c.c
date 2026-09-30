/*
FUNCTION_NAME: FUN_07e98e7c
ENTRY_POINT: 07e98e7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long FUN_07e98e7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_0899ab11 & 1) == 0) {
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<FileItem>>,_PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
                );
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                );
    DAT_0899ab11 = 1;
  }
  iVar3 = *(int *)(param_1 + 0xbc);
  lVar5 = FUN_07e8d82c(param_1);
  if (lVar5 != 0) {
    if (iVar3 < *(int *)(lVar5 + 0x18)) {
      lVar5 = FUN_07e8d82c(param_1);
      if ((lVar5 != 0) &&
         (lVar5 = FUN_04de82e0(lVar5,*(undefined4 *)(param_1 + 0xbc),
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<HttpClientResponse>_Start<HttpClient_<CreateHttpClientResponse>d__4>__
                              ), lVar5 != 0)) {
        FUN_07e6c91c(lVar5,param_3,param_4,0);
LAB_07e98fd4:
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
        return lVar5;
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      lVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<FileItem>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<FileItem>>,_PlayerFilesService_<>c__DisplayClass4_0_<<GetMetadataAsync>b__0>d>__
                                );
      FUN_07e6c728(lVar5,param_3,uVar2,uVar1,param_4,0);
      lVar6 = FUN_07e8d82c(param_1);
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar9 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
        ;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar4 = *(uint *)(lVar6 + 0x18);
          if (uVar4 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar4 + 1;
            plVar8 = (long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
            *plVar8 = lVar5;
            thunk_FUN_03afed3c(plVar8,lVar5);
          }
          else {
            FUN_04de85b0(lVar6,lVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_07e98fd4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


