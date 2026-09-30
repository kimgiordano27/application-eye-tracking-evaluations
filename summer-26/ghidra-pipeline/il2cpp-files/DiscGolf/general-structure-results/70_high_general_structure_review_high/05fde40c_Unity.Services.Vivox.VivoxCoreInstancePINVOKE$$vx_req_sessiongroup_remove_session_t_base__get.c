/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_base__get
ENTRY_POINT: 05fde40c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_base__get
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x2e8));
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LocalMatchmaking_<StartAsHost>d__14>__
              );
  FUN_02d965b8(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LoginSession_<LoginAsync>d__103>__
              );
  *(undefined1 *)(unaff_x19 + 0x891) = 1;
  lVar3 = FUN_02d966a4(*unaff_x20,0xd);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(int *)(lVar3 + 0x18) != 0) {
    *(undefined8 *)(lVar3 + 0x20) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_Client_<SubscribeAsync>d__45>__
    ;
    LeanTween__value((undefined8 *)(lVar3 + 0x20));
    if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar3 + 0x28) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LoginSession_<LoginAsync>d__103>__
      ;
      LeanTween__value((undefined8 *)(lVar3 + 0x28));
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_WebResponseStream_<ReadAllAsync>d__48>__
        ;
        LeanTween__value((undefined8 *)(lVar3 + 0x30));
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar3 + 0x38) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_LocalMatchmaking_<StartAsHost>d__14>__
          ;
          LeanTween__value((undefined8 *)(lVar3 + 0x38));
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_RelayHandler_<CreateAllocationAsync>d__16>__
          ;
          if (4 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x40) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ChannelSession_<ConnectAsync>d__45>__
            ;
            LeanTween__value((undefined8 *)(lVar3 + 0x40));
            puVar1 = PTR_DAT_069fb9c0;
            uStack000000000000000c = 8;
            uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x48),
                                       (long)&stack0x00000008 + 4);
            uVar4 = FUN_0536388c(*(undefined8 *)puVar2,uVar4,0);
            puVar2 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ChannelSession_<DisconnectAsync>d__49>__
            ;
            if (5 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x48) = uVar4;
              LeanTween__value((undefined8 *)(lVar3 + 0x48),uVar4);
              uStack0000000000000008 = 8;
              uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
              uVar4 = FUN_0536388c(*(undefined8 *)puVar2,uVar4,0);
              if (6 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x50) = uVar4;
                LeanTween__value((undefined8 *)(lVar3 + 0x50),uVar4);
                if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar3 + 0x58) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<RunScheduler>d__32>__
                  ;
                  LeanTween__value((undefined8 *)(lVar3 + 0x58));
                  if (8 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x60) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<PackageInitializationInfo>>,_UnityServicesInternal_<>c__DisplayClass33_0_<<InitializeServicesAsync>g__InitializePackagesAsync_1>d>__
                    ;
                    LeanTween__value((undefined8 *)(lVar3 + 0x60));
                    if (9 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x68) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<InitReadAsync>d__52>__
                      ;
                      LeanTween__value((undefined8 *)(lVar3 + 0x68));
                      if (10 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x70) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_WebRequestStream_<WriteChunkTrailer>d__40>__
                        ;
                        LeanTween__value((undefined8 *)(lVar3 + 0x70));
                        if (0xb < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x78) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<StartBackfillingAsync>d__35>__
                          ;
                          LeanTween__value((undefined8 *)(lVar3 + 0x78));
                          puVar2 = Method_System_Reflection_Assembly_GetModulesInternal__;
                          if (0xc < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x80) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_Stream_<CopyToAsyncInternal>d__28>__
                            ;
                            LeanTween__value();
                            **(long **)(*(long *)puVar2 + 0xb8) = lVar3;
                            LeanTween__value(*(undefined8 *)(*(long *)puVar2 + 0xb8),lVar3);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


