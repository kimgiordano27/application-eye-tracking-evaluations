/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_media_stream_updated_t$$get_session_handle
ENTRY_POINT: 05fe816c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_vx_evt_media_stream_updated_t__get_session_handle(void)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x21;
  undefined4 uStack000000000000000c;
  
  plVar2 = *(long **)(unaff_x20 + 0x990);
  if ((*(byte *)(unaff_x21 + 0x8e8) & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushAsyncInternal>d__38>__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                );
    *(undefined1 *)(unaff_x21 + 0x8e8) = 1;
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x68);
  uStack000000000000000c = 0;
  if (*(int *)(*plVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar1 = FUN_0634eb94(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    plVar2 = *(long **)(unaff_x19 + 0x68);
    uStack000000000000000c =
         FUN_03b4cf98(*(long *)(unaff_x19 + 0x70),
                      *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushAsyncInternal>d__38>__
                     );
    uVar3 = FUN_054e57fc(&stack0x0000000c,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_BufferedStream_<FlushWriteAsync>d__42>__
                         ,0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5e8))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x5f0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


