/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE.SWIGExceptionHelper$$SetPendingNullReferenceException
ENTRY_POINT: 05fe2120
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingNullReferenceException
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_06dc48a7 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LoginSession_<LoginAsync>d__103>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_MatchmakerModule_<StartBackfillingAsync>d__35>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedLobbyService_<SendHeartbeatPingAsync>d__17>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedLobbyService_<>c__DisplayClass22_0_<<RemovePlayerAsync>g__RemovePlayerTask_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<DeleteBackfillTicketAsync>d__13>__
                );
    DAT_06dc48a7 = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_MatchmakerModule_<StartBackfillingAsync>d__35>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LoginSession_<LoginAsync>d__103>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
  ;
  uVar5 = 0;
  lVar6 = 0x20;
  while (lVar4 = *(long *)(param_1 + 0x18), lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_05fe2250:
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (*(long *)(lVar4 + lVar6) != 0) {
      FUN_042c9f4c(lVar4 + lVar6,*(undefined8 *)puVar1);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_05fe2250;
    if (*(long *)(lVar4 + lVar6) != 0) {
      FUN_042c9848(lVar4 + lVar6,*(undefined8 *)puVar2);
    }
    lVar4 = *(long *)(param_1 + 0x20);
    if (lVar4 == 0) break;
    if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_05fe2250;
    if (*(long *)(lVar4 + lVar6) != 0) {
      FUN_042c9134(lVar4 + lVar6,*(undefined8 *)puVar3);
    }
    lVar6 = lVar6 + 8;
    uVar5 = uVar5 + 1;
    if (lVar6 == 0x38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


