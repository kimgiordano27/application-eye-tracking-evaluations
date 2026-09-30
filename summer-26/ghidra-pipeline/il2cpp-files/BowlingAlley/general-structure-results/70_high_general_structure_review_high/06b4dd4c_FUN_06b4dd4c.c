/*
FUNCTION_NAME: FUN_06b4dd4c
ENTRY_POINT: 06b4dd4c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_06b4dd4c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  if ((DAT_076e38ca & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
                      );
                    /* try { // try from 06b4dd94 to 06c4dd9b has its CatchHandler @ 06b4ddc0 */
    thunk_FUN_032e1da0(PTR_DAT_0727a358);
                    /* try { // try from 06b4dd9c to 06c4dd9f has its CatchHandler @ 06b4db5c */
                    /* try { // try from 06b4dda0 to 06c4dda3 has its CatchHandler @ 06b4ddac */
                    /* try { // try from 06b4dda4 to 06c4ddd7 has its CatchHandler @ 06b4db5c */
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                      );
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dda0 with catch @ 06b4ddac
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dcfc with catch @ 06b4ddb0
                        */
    thunk_FUN_032e1da0(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                      );
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dcf4 with catch @ 06b4ddb4
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dc98 with catch @ 06b4ddb8
                        */
    DAT_076e38ca = 1;
  }
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dc3c with catch @ 06b4ddbc
                        */
                    /* catch(type#1 @ 06e40658) { ... } // from try @ 06b4dd94 with catch @ 06b4ddc0
                        */
  if (*(uint *)(param_1 + 0x10) < 4) {
    lVar6 = *(long *)(param_1 + 0x20);
                    /* try { // try from 06b4ddd8 to 06c4dddb has its CatchHandler @ 06b4dde8 */
                    /* catch() { ... } // from try @ 06b4ddd8 with catch @ 06b4dde8 */
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined8 *)(param_1 + 0x18) = 0;
                    /* try { // try from 06b4ddf0 to 06c4de57 has its CatchHandler @ 06b4de6c */
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    case 1:
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      puVar1 = PTR_DAT_0727a358;
      if (*(int *)(*(long *)PTR_DAT_0727a358 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076cd832 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a358);
        DAT_076cd832 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06b46138(lVar6,0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x18),0);
      uVar5 = 2;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(lVar6 + 0x28);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
      puVar1 = PTR_DAT_0727a358;
      if (*(char *)(param_1 + 0x28) == '\0') goto LAB_06b4e0d0;
      if (*(int *)(*(long *)PTR_DAT_0727a358 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076cd832 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a358);
        DAT_076cd832 = '\x01';
      }
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar6 = *(long *)puVar1;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = FUN_06b4661c(lVar6,0);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_0333a630();
      uVar5 = 3;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
      puVar1 = PTR_DAT_0727a358;
      if (*(int *)(*(long *)PTR_DAT_0727a358 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076cd832 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a358);
        DAT_076cd832 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      FUN_06b45ed4(lVar2,0);
      if (DAT_076cd832 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_0727a358);
        DAT_076cd832 = '\x01';
      }
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar2 = *(long *)(lVar2 + 0x18);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      if (*(int *)(*(long *)PTR_DAT_072794f0 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar3 = FUN_06bece64(uVar4,0,0);
      if ((uVar3 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06bb23f0(*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteRequestAsync>d__38>__
                     ,0);
        puVar1 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
        ;
        lVar2 = *(long *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_StreamWriter_<WriteAsyncInternal>d__62>__
        ;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar2 = *(long *)puVar1;
        }
        *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x10) = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06bb2a00(*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                     ,0);
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      }
LAB_06b4e0d0:
      FUN_06b4e1b8(param_1);
      goto LAB_06b4e0d8;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar4 = 1;
  }
  else {
LAB_06b4e0d8:
    uVar4 = 0;
  }
  return uVar4;
}


