/*
FUNCTION_NAME: FUN_05b01920
ENTRY_POINT: 05b01920
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05b01920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
  ;
  if ((DAT_06bc27ce & 1) == 0) {
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<FlushAsyncInternal>d__74>__
                );
    FUN_02f08768(PTR_DAT_067ca498);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
                );
    DAT_06bc27ce = 1;
  }
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  thunk_FUN_05aa00a4(uVar4,0);
  lVar5 = FUN_05abef1c(uVar4,0);
  if ((param_1 == 0) || (plVar10 = *(long **)(param_1 + 0x150), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar5 == 0) {
    if (2 < *(uint *)(plVar10 + 3)) {
      plVar10[6] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar10 + 0x40));
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
    ;
    if (lVar6 == 0) {
      uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,0);
    }
    if (2 < *(uint *)(plVar10 + 3)) {
      plVar10[6] = lVar5;
      uVar7 = DAT_011b1d38;
      *(long *)(lVar5 + 0x78) = param_1;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
      ;
      *(undefined8 *)(lVar5 + 0x80) = param_4;
      puVar1 = PTR_DAT_067ca498;
      uVar8 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar5 + 0x98) = uVar7;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,uVar8,0);
      uVar8 = uStack_48;
      uVar7 = local_50;
      uVar9 = *(undefined8 *)puVar3;
      local_50 = 0;
      uStack_48 = 0;
      *(undefined8 *)(lVar5 + 0x28) = uVar8;
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      FUN_05a9e398(&local_50,uVar9,0);
      uVar7 = FUN_05a9e714(local_50,uStack_48,0);
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      lVar6 = *(long *)puVar1;
      *(undefined8 *)(lVar5 + 0x58) = param_2;
      *(undefined8 *)(lVar5 + 0x60) = param_3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = _DAT_011b41c0;
      *(undefined8 *)(lVar5 + 0x18) = _UNK_011b41c8;
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      FUN_05abcc30(lVar5,1,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


