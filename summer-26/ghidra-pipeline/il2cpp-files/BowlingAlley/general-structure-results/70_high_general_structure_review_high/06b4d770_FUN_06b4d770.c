/*
FUNCTION_NAME: FUN_06b4d770
ENTRY_POINT: 06b4d770
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_4
*/


void FUN_06b4d770(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* try { // try from 06b4d770 to 06c4d773 has its CatchHandler @ 06b4d77c */
  puVar1 = PTR_DAT_072798f8;
                    /* try { // try from 06b4d774 to 06c4d79f has its CatchHandler @ 06b4d544 */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d770 with catch @ 06b4d77c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d6d0 with catch @ 06b4d780
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d6c8 with catch @ 06b4d784
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d66c with catch @ 06b4d788
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d610 with catch @ 06b4d78c
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4d764 with catch @ 06b4d790
                        */
  if ((DAT_076e38c6 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<FinishWriting>d__31>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                      );
    DAT_076e38c6 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (lVar3 == 0) {
    FUN_06bb23f0(*(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<FinishWriting>d__31>__
                 ,0);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
    ;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    if (DAT_076e38d9 == '\0') {
      thunk_FUN_032e1da0(
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                        );
      DAT_076e38d9 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar3 = *(long *)puVar1;
    }
    uVar2 = FUN_06b4d8a8(*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x14),param_1);
    uVar2 = FUN_06beab84(param_1,uVar2,0);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    thunk_FUN_0333a630((long *)(param_1 + 0x48),uVar2);
    return;
  }
  FUN_06bb2a00(*(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<Initialize>d__36>__
               ,0);
  return;
}


