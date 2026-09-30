/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_req_sessiongroup_remove_session_t
ENTRY_POINT: 05fde5b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_req_sessiongroup_remove_session_t(void)

{
  undefined *puVar1;
  bool in_ZR;
  long unaff_x19;
  
  if (!in_ZR) {
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
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


