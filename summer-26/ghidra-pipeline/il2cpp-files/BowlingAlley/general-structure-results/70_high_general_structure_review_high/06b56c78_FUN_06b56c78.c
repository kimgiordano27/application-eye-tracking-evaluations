/*
FUNCTION_NAME: FUN_06b56c78
ENTRY_POINT: 06b56c78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x06b56e94) */

uint FUN_06b56c78(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  if ((DAT_076e3a10 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279480);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                      );
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07281708);
    thunk_FUN_032e1da0(PTR_DAT_07279b30);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<InitReadAsync>d__52>__
                      );
    DAT_076e3a10 = 1;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar3 = FUN_041907b8(*(long *)(param_1 + 0x48),*(int *)(param_1 + 0x28),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoCloseAsync>d__8>__
                        );
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 7;
      puVar1 = PTR_DAT_07281708;
      if (*(int *)(*(long *)PTR_DAT_07281708 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06b56f74();
                    /* try { // try from 06b56d48 to 06c56e7b has its CatchHandler @ 06b56d48
                       catch() { ... } // from try @ 06b56d48 with catch @ 06b56d48
                       catch() { ... } // from try @ 06b56f04 with catch @ 06b56d48
                       catch() { ... } // from try @ 06b56f38 with catch @ 06b56d48
                       catch() { ... } // from try @ 06b56f78 with catch @ 06b56d48 */
      uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279b30);
      FUN_06bfb7c8(uVar4,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<JsonTextWriter_<DoWriteValueAsync>d__78>__
                   ,0);
      if (*(int *)(*(long *)PTR_DAT_07279480 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bad5d0(uVar4,0);
      uVar4 = FUN_06b55b3c(param_1);
      FUN_06b55790(uVar4,1);
      FUN_03aff738(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteRequestAsync>d__38>__
                  );
      FUN_03aff738(param_1,*(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                  );
      FUN_06b533cc(*(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebResponseStream_<InitReadAsync>d__52>__
                  );
      FUN_06b56fd8();
      FUN_06b55b3c(param_1);
      FUN_06b5703c();
      plVar7 = (long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x5c) = 0;
      if (*plVar7 != 0) {
        lVar5 = thunk_FUN_032f5c7c(0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        FUN_05969908(lVar5,*plVar7,0);
        *plVar7 = 0;
        thunk_FUN_0333a630(plVar7,0);
      }
      uVar2 = FUN_06b46358(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076e3d05 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07281708);
        DAT_076e3d05 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar5 = *(long *)puVar1;
      }
      puVar6 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      *puVar6 = 0;
      thunk_FUN_0333a630(puVar6,0);
    }
  }
  return uVar2 & 1;
}


