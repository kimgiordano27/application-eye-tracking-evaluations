/*
FUNCTION_NAME: FUN_06b56a9c
ENTRY_POINT: 06b56a9c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_06b56a9c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((DAT_076e3a0e & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                      );
    DAT_076e3a0e = 1;
  }
  if (*(int *)(param_1 + 0x28) != 6) {
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar2 = FUN_041907b8(*(long *)(param_1 + 0x40),*(int *)(param_1 + 0x28),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                        );
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 5;
    lVar3 = FUN_06b54118();
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_06c4d9b8(lVar3,0);
      uVar1 = uVar1 & 1;
    }
    lVar3 = FUN_06b540b4(param_1);
    if (lVar3 == 0) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_06c4d9b8(lVar3,0);
      uVar5 = (uint)uVar4;
    }
    if (uVar1 != 0 || (uVar5 & 1) != 0) {
      FUN_06b55790(uVar4,3);
    }
    if (uVar1 != 0) {
      FUN_03aff7b8(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                  );
    }
    if ((uVar5 & 1) != 0) {
      FUN_03aff7b8(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                  );
    }
    FUN_06b56bbc(param_1);
    *(undefined4 *)(param_1 + 0x28) = 6;
  }
  return 1;
}


