/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_remove_session_t
ENTRY_POINT: 05fde61c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_remove_session_t
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  LeanTween__value((undefined8 *)(unaff_x20 + 0x68));
  if (10 < *(uint *)(unaff_x20 + 0x18)) {
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
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


