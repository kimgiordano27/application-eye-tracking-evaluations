/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_remove_session_t_sessiongroup_handle_set
ENTRY_POINT: 05fde520
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_remove_session_t_sessiongroup_handle_set
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long lVar3;
  undefined8 *unaff_x23;
  undefined4 in_stack_00000008;
  
  lVar3 = *(long *)(unaff_x22 + 0x9c0);
  uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar3 + 0x48));
  uVar2 = FUN_0536388c(*unaff_x23,uVar2,0);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ChannelSession_<DisconnectAsync>d__49>__
  ;
  if (5 < *(uint *)(unaff_x20 + -0x28)) {
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    LeanTween__value((undefined8 *)(unaff_x19 + 0x48),uVar2);
    in_stack_00000008 = unaff_w21;
    uVar2 = thunk_FUN_02dd2d7c(*(undefined8 *)(lVar3 + 0x48),&stack0x00000008);
    uVar2 = FUN_0536388c(*(undefined8 *)puVar1,uVar2,0);
    if (6 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
      LeanTween__value((undefined8 *)(unaff_x19 + 0x50),uVar2);
      if ((*(uint *)(unaff_x19 + 0x18) & 0xfffffff8) != 0) {
        *(undefined8 *)(unaff_x19 + 0x58) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_ServicePointScheduler_<RunScheduler>d__32>__
        ;
        LeanTween__value((undefined8 *)(unaff_x19 + 0x58));
        if (8 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(unaff_x19 + 0x60) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<PackageInitializationInfo>>,_UnityServicesInternal_<>c__DisplayClass33_0_<<InitializeServicesAsync>g__InitializePackagesAsync_1>d>__
          ;
          LeanTween__value((undefined8 *)(unaff_x19 + 0x60));
          if (9 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x68) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_WebResponseStream_<InitReadAsync>d__52>__
            ;
            LeanTween__value((undefined8 *)(unaff_x19 + 0x68));
            if (10 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x70) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<Task>,_WebRequestStream_<WriteChunkTrailer>d__40>__
              ;
              LeanTween__value((undefined8 *)(unaff_x19 + 0x70));
              if (0xb < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x78) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<StartBackfillingAsync>d__35>__
                ;
                LeanTween__value((undefined8 *)(unaff_x19 + 0x78));
                puVar1 = Method_System_Reflection_Assembly_GetModulesInternal__;
                if (0xc < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x80) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter<int>,_Stream_<CopyToAsyncInternal>d__28>__
                  ;
                  LeanTween__value();
                  **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                  LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
                  return;
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


