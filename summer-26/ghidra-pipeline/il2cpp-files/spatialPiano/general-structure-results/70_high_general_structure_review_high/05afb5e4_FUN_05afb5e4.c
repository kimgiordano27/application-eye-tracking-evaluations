/*
FUNCTION_NAME: FUN_05afb5e4
ENTRY_POINT: 05afb5e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_05afb5e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
  ;
                    /* try { // try from 05afb614 to 05bfb617 has its CatchHandler @ 05afb62c */
                    /* try { // try from 05afb618 to 05bfb61b has its CatchHandler @ 05afb628 */
  if ((DAT_06bc279c & 1) == 0) {
                    /* try { // try from 05afb61c to 05bfb64f has its CatchHandler @ 05afafcc */
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<StreamWriter_<WriteAsyncInternal>d__57>__
                );
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05afb618 with catch @ 05afb628
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05afb614 with catch @ 05afb62c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05afb1e0 with catch @ 05afb630
                        */
    FUN_02f08768(PTR_DAT_067ca498);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05afb17c with catch @ 05afb634
                        */
    FUN_02f08768(Method_System_Text_ASCIIEncoding_GetBytes__);
    FUN_02f08768(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<OnColocationSessionFound>d__18>__
                );
                    /* try { // try from 05afb650 to 05bfb653 has its CatchHandler @ 05afb660 */
    DAT_06bc279c = 1;
  }
  uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_05a9f134(uVar4,0);
  lVar5 = FUN_05abef1c(uVar4,0);
  if ((param_1 == 0) || (plVar10 = *(long **)(param_1 + 0x150), plVar10 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (lVar5 == 0) {
    if ((*(uint *)(plVar10 + 3) & 0xffffff00) != 0) {
      plVar10[0x103] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  else {
    lVar6 = thunk_FUN_02f45174(lVar5,*(undefined8 *)(*plVar10 + 0x40));
    puVar2 = Method_System_Text_ASCIIEncoding_GetBytes__;
    if (lVar6 == 0) {
      uVar4 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar4,0);
    }
    if ((*(uint *)(plVar10 + 3) & 0xffffff00) != 0) {
      plVar10[0x103] = lVar5;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<OnColocationSessionFound>d__18>__
      ;
      *(long *)(lVar5 + 0x78) = param_1;
      puVar1 = PTR_DAT_067ca498;
      uVar7 = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar5 + 0x80) = param_4;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,uVar7,0);
      uVar9 = uStack_48;
      uVar7 = local_50;
      uVar8 = *(undefined8 *)puVar3;
      local_50 = 0;
      uStack_48 = 0;
      *(undefined8 *)(lVar5 + 0x28) = uVar9;
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      FUN_05a9e398(&local_50,uVar8,0);
      uVar7 = FUN_05a9e714(local_50,uStack_48,0);
      uVar9 = *(undefined8 *)puVar3;
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      local_50 = 0;
      uStack_48 = 0;
      FUN_05a9e398(&local_50,uVar9,0);
      uVar7 = FUN_05a9e714(local_50,uStack_48,0);
      *(undefined8 *)(lVar5 + 0x50) = uVar7;
      *(undefined8 *)(lVar5 + 0x58) = param_2;
      lVar6 = *(long *)puVar1;
      *(undefined8 *)(lVar5 + 0x60) = param_3;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = _DAT_011b5d00;
      *(undefined8 *)(lVar5 + 0x18) = _UNK_011b5d08;
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      FUN_05abcc30(lVar5,1,0);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


