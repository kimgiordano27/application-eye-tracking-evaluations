/*
FUNCTION_NAME: System.Xml.XmlDocument$$get_NamespaceXml
ENTRY_POINT: 05a978f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;telemetry_or_network_hits_16;frame_or_lifecycle_behavior
*/


void System_Xml_XmlDocument__get_NamespaceXml(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long in_x9;
  long in_x10;
  long lVar15;
  long *unaff_x22;
  
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<BufferedReadStream_<ProcessReadAsync>d__2>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebReadStream_<ReadAsync>d__28>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ForceAsyncAwaiter,_CryptoStream_<ReadAsyncInternal>d__37>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ValueTaskAwaiter<int>,_CryptoStream_<ReadAsyncCore>d__42>__
  ;
  puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Create__;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_Start<BaselibQosRunner_<RunQosJob>d__7>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_BaselibQosRunner_<RunQosJob>d__7>__
  ;
  if (in_x9 != param_3) goto LAB_05a9a8fc;
  LeanTween__value(in_x10 + 0x120,param_1);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_05a9b49c();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x128) = uVar12;
  LeanTween__value(lVar14 + 0x128,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
  FUN_05a9afd4();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x130) = uVar12;
  LeanTween__value(lVar14 + 0x130,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
  FUN_05a9b028();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x138) = uVar12;
  LeanTween__value(lVar14 + 0x138,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
  FUN_05a9b07c();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x140) = uVar12;
  LeanTween__value(lVar14 + 0x140,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
  FUN_05a9b0d0();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x148) = uVar12;
  LeanTween__value(lVar14 + 0x148,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
  FUN_05a9b49c();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x150) = uVar12;
  LeanTween__value(lVar14 + 0x150,uVar12);
  uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_05a9b49c();
  lVar14 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar14 + 0x158) = uVar12;
  LeanTween__value(lVar14 + 0x158,uVar12);
  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
  if (lVar14 != 0) {
    param_1 = (long *)FUN_05a9ae30(lVar14,1,0);
    lVar14 = *unaff_x22;
    if (param_1 == (long *)0x0) {
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(undefined8 *)(lVar15 + 0x160) = 0;
    }
    else {
      bVar1 = *(byte *)(lVar14 + 0x130);
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_05a9a8fc;
      lVar15 = *(long *)(lVar14 + 0xb8);
      *(long **)(lVar15 + 0x160) = param_1;
      if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
      goto LAB_05a9a8fc;
    }
    puVar11 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
    ;
    puVar10 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    puVar9 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<InnerRead>d__66>__
    ;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
    ;
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<DeflateManagedStream_<ReadAsyncCore>d__40>__
    ;
    puVar7 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncInternal>d__37>__
    ;
    puVar5 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncCore>d__42>__
    ;
    puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_get_Task__;
    puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetResult__;
    puVar2 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetException__;
    LeanTween__value(lVar15 + 0x160,param_1);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_05a9b12c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x168) = uVar12;
    LeanTween__value(lVar14 + 0x168,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
    FUN_05a9b180();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x170) = uVar12;
    LeanTween__value(lVar14 + 0x170,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05a9b49c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x178) = uVar12;
    LeanTween__value(lVar14 + 0x178,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05a9b180();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x180) = uVar12;
    LeanTween__value(lVar14 + 0x180,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
    FUN_05a9b1dc();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x188) = uVar12;
    LeanTween__value(lVar14 + 0x188,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
    FUN_05a9b234();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 400) = uVar12;
    LeanTween__value(lVar14 + 400,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
    FUN_05a9b49c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x198) = uVar12;
    LeanTween__value(lVar14 + 0x198,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_05a9b49c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1a0) = uVar12;
    LeanTween__value(lVar14 + 0x1a0,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar11);
    FUN_05a9b294();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1a8) = uVar12;
    LeanTween__value(lVar14 + 0x1a8,uVar12);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
    FUN_05a9b49c();
    lVar14 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar14 + 0x1b0) = uVar12;
    LeanTween__value(lVar14 + 0x1b0,uVar12);
    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
    if (lVar14 != 0) {
      param_1 = (long *)FUN_05a9ae30(lVar14,1,0);
      lVar14 = *unaff_x22;
      if (param_1 == (long *)0x0) {
        lVar15 = *(long *)(lVar14 + 0xb8);
        *(undefined8 *)(lVar15 + 0x1b8) = 0;
      }
      else {
        bVar1 = *(byte *)(lVar14 + 0x130);
        if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar14)) {
LAB_05a9a8fc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(param_1);
        }
        lVar15 = *(long *)(lVar14 + 0xb8);
        *(long **)(lVar15 + 0x1b8) = param_1;
        if ((*(byte *)(*param_1 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) != lVar14))
        goto LAB_05a9a8fc;
      }
      puVar11 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_get_Task__;
      puVar10 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
      ;
      puVar9 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
      puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetException__;
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebResponseStream_<ReadAsync>d__40>__
      ;
      puVar7 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
      ;
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<SessionHandler>,_WrappedMultiplayerService_<TryHandleSessionCreationException>d__25>__
      ;
      puVar8 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
      ;
      puVar6 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IQosJob>_SetStateMachine__;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ILobbyEvents>_SetStateMachine__;
      LeanTween__value(lVar15 + 0x1b8,param_1);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
      FUN_05a9b180();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1c0) = uVar12;
      LeanTween__value(lVar14 + 0x1c0,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
      FUN_05a9b180();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1c8) = uVar12;
      LeanTween__value(lVar14 + 0x1c8,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_05a9b49c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1d0) = uVar12;
      LeanTween__value(lVar14 + 0x1d0,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
      FUN_05a9b2f8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1d8) = uVar12;
      LeanTween__value(lVar14 + 0x1d8,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
      FUN_05a9b34c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1e0) = uVar12;
      LeanTween__value(lVar14 + 0x1e0,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
      FUN_05a9b3a0();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1e8) = uVar12;
      LeanTween__value(lVar14 + 0x1e8,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar8);
      FUN_05a9b3f4();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1f0) = uVar12;
      LeanTween__value(lVar14 + 0x1f0,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar10);
      FUN_05a9b448();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x1f8) = uVar12;
      LeanTween__value(lVar14 + 0x1f8,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar11);
      FUN_05a9b49c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x200) = uVar12;
      LeanTween__value(lVar14 + 0x200,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Create__
                                 );
      FUN_05a9b4f0();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x208) = uVar12;
      LeanTween__value(lVar14 + 0x208,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<JoinResponseBody>>,_WrappedRelayService_<JoinAllocationAsync>d__12>__
                                 );
      FUN_05a9b548();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x210) = uVar12;
      LeanTween__value(lVar14 + 0x210,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_Start<WrappedRelayService_<JoinAllocationAsync>d__12>__
                                 );
      FUN_05a9b5a0();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x218) = uVar12;
      LeanTween__value(lVar14 + 0x218,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetResult__
                                 );
      FUN_05a9b49c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x220) = uVar12;
      LeanTween__value(lVar14 + 0x220,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetStateMachine__
                                 );
      FUN_05a9b5fc();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x228) = uVar12;
      LeanTween__value(lVar14 + 0x228,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_get_Task__
                                 );
      FUN_05a9b650();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x230) = uVar12;
      LeanTween__value(lVar14 + 0x230,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_WrappedLobbyService_<LobbyConflictResolver>d__33>__
                                 );
      FUN_05a9b6a4();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x238) = uVar12;
      LeanTween__value(lVar14 + 0x238,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateLobbyAsync>d__9>__
                                 );
      FUN_05a9b6f8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x240) = uVar12;
      LeanTween__value(lVar14 + 0x240,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<GetLobbyAsync>d__16>__
                                 );
      FUN_05a9b74c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x248) = uVar12;
      LeanTween__value(lVar14 + 0x248,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<QuickJoinLobbyAsync>d__21>__
                                 );
      FUN_05a9b7a0();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x250) = uVar12;
      LeanTween__value(lVar14 + 0x250,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                                 );
      FUN_05a9b7f8();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 600) = uVar12;
      LeanTween__value(lVar14 + 600,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                 );
      FUN_05a9b49c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x260) = uVar12;
      LeanTween__value(lVar14 + 0x260,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JoinAllocation>_SetException__
                                 );
      FUN_05a9b49c();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x268) = uVar12;
      LeanTween__value(lVar14 + 0x268,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ISession>_Start<SessionsManager_<<JoinSession>g__JoinSessionAsClient_58_0>d>__
                                 );
      FUN_05a9b858();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x270) = uVar12;
      LeanTween__value(lVar14 + 0x270,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_MobileAuthenticatedStream_<InnerRead>d__66>__
                                 );
      FUN_05a9b8ac();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x278) = uVar12;
      LeanTween__value(lVar14 + 0x278,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<CreateOrJoinLobbyAsync>d__10>__
                                 );
      FUN_05a9b858();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x280) = uVar12;
      LeanTween__value(lVar14 + 0x280,uVar12);
      uVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Response<Lobby>>,_WrappedLobbyService_<JoinLobbyByCodeAsync>d__18>__
                                 );
      FUN_05a9b904();
      lVar14 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar14 + 0x288) = uVar12;
      LeanTween__value(lVar14 + 0x288,uVar12);
      plVar13 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,0xd);
      if (plVar13 != (long *)0x0) {
        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
        if ((lVar14 != 0) &&
           (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)) {
LAB_05a9a8f0:
          uVar12 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar12,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar14;
          LeanTween__value(plVar13 + 4,lVar14);
          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
          if ((lVar14 != 0) &&
             (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
          goto LAB_05a9a8f0;
          if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
            plVar13[5] = lVar14;
            LeanTween__value(plVar13 + 5,lVar14);
            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
            if ((lVar14 != 0) &&
               (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
            goto LAB_05a9a8f0;
            if (2 < *(uint *)(plVar13 + 3)) {
              plVar13[6] = lVar14;
              LeanTween__value(plVar13 + 6,lVar14);
              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
              if ((lVar14 != 0) &&
                 (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)), lVar15 == 0)
                 ) goto LAB_05a9a8f0;
              if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                plVar13[7] = lVar14;
                LeanTween__value(plVar13 + 7,lVar14);
                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
                if ((lVar14 != 0) &&
                   (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                   lVar15 == 0)) goto LAB_05a9a8f0;
                if (4 < *(uint *)(plVar13 + 3)) {
                  plVar13[8] = lVar14;
                  LeanTween__value(plVar13 + 8,lVar14);
                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
                  if ((lVar14 != 0) &&
                     (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar15 == 0)) goto LAB_05a9a8f0;
                  if (5 < *(uint *)(plVar13 + 3)) {
                    plVar13[9] = lVar14;
                    LeanTween__value(plVar13 + 9,lVar14);
                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0);
                    if ((lVar14 != 0) &&
                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar15 == 0)) goto LAB_05a9a8f0;
                    if (6 < *(uint *)(plVar13 + 3)) {
                      plVar13[10] = lVar14;
                      LeanTween__value(plVar13 + 10,lVar14);
                      lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b8);
                      if ((lVar14 != 0) &&
                         (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar15 == 0)) goto LAB_05a9a8f0;
                      if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                        plVar13[0xb] = lVar14;
                        LeanTween__value(plVar13 + 0xb,lVar14);
                        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1d8);
                        if ((lVar14 != 0) &&
                           (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar15 == 0)) goto LAB_05a9a8f0;
                        if (8 < *(uint *)(plVar13 + 3)) {
                          plVar13[0xc] = lVar14;
                          LeanTween__value(plVar13 + 0xc,lVar14);
                          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x128);
                          if ((lVar14 != 0) &&
                             (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar15 == 0)) goto LAB_05a9a8f0;
                          if (9 < *(uint *)(plVar13 + 3)) {
                            plVar13[0xd] = lVar14;
                            LeanTween__value(plVar13 + 0xd,lVar14);
                            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1f0);
                            if ((lVar14 != 0) &&
                               (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)(*plVar13 + 0x40))
                               , lVar15 == 0)) goto LAB_05a9a8f0;
                            if (10 < *(uint *)(plVar13 + 3)) {
                              plVar13[0xe] = lVar14;
                              LeanTween__value(plVar13 + 0xe,lVar14);
                              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1a0);
                              if ((lVar14 != 0) &&
                                 (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                      (*plVar13 + 0x40)),
                                 lVar15 == 0)) goto LAB_05a9a8f0;
                              if (0xb < *(uint *)(plVar13 + 3)) {
                                plVar13[0xf] = lVar14;
                                LeanTween__value(plVar13 + 0xf,lVar14);
                                lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                *(long **)(lVar14 + 0x290) = plVar13;
                                LeanTween__value(lVar14 + 0x290,plVar13);
                                plVar13 = (long *)FUN_02d966a4(*(undefined8 *)puVar2,0xd);
                                if (plVar13 == (long *)0x0) goto LAB_05a9a904;
                                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x200);
                                if ((lVar14 != 0) &&
                                   (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                   lVar15 == 0)) goto LAB_05a9a8f0;
                                if ((int)plVar13[3] != 0) {
                                  plVar13[4] = lVar14;
                                  LeanTween__value(plVar13 + 4,lVar14);
                                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x150);
                                  if ((lVar14 != 0) &&
                                     (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                     lVar15 == 0)) goto LAB_05a9a8f0;
                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                    plVar13[5] = lVar14;
                                    LeanTween__value(plVar13 + 5,lVar14);
                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x158);
                                    if ((lVar14 != 0) &&
                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                            (*plVar13 + 0x40)),
                                       lVar15 == 0)) goto LAB_05a9a8f0;
                                    if (2 < *(uint *)(plVar13 + 3)) {
                                      plVar13[6] = lVar14;
                                      LeanTween__value(plVar13 + 6,lVar14);
                                      lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x160);
                                      if ((lVar14 != 0) &&
                                         (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                              (*plVar13 + 0x40)),
                                         lVar15 == 0)) goto LAB_05a9a8f0;
                                      if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                        plVar13[7] = lVar14;
                                        LeanTween__value(plVar13 + 7,lVar14);
                                        lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x118);
                                        if ((lVar14 != 0) &&
                                           (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                                (*plVar13 + 0x40)),
                                           lVar15 == 0)) goto LAB_05a9a8f0;
                                        if (4 < *(uint *)(plVar13 + 3)) {
                                          plVar13[8] = lVar14;
                                          LeanTween__value(plVar13 + 8,lVar14);
                                          lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x120);
                                          if ((lVar14 != 0) &&
                                             (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                                  (*plVar13 + 0x40))
                                             , lVar15 == 0)) goto LAB_05a9a8f0;
                                          if (5 < *(uint *)(plVar13 + 3)) {
                                            plVar13[9] = lVar14;
                                            LeanTween__value(plVar13 + 9,lVar14);
                                            lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                            ;
                                            if ((lVar14 != 0) &&
                                               (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                                    (*plVar13 + 0x40
                                                                                    )), lVar15 == 0)
                                               ) goto LAB_05a9a8f0;
                                            if (6 < *(uint *)(plVar13 + 3)) {
                                              plVar13[10] = lVar14;
                                              LeanTween__value(plVar13 + 10,lVar14);
                                              lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                0x1b8);
                                              if ((lVar14 != 0) &&
                                                 (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8 *)
                                                                                      (*plVar13 +
                                                                                      0x40)),
                                                 lVar15 == 0)) goto LAB_05a9a8f0;
                                              if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                plVar13[0xb] = lVar14;
                                                LeanTween__value(plVar13 + 0xb,lVar14);
                                                lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                  0x1d8);
                                                if ((lVar14 != 0) &&
                                                   (lVar15 = thunk_FUN_02dd3048(lVar14,*(undefined8
                                                                                         *)(*plVar13
                                                                                           + 0x40)),
                                                   lVar15 == 0)) goto LAB_05a9a8f0;
                                                if (8 < *(uint *)(plVar13 + 3)) {
                                                  plVar13[0xc] = lVar14;
                                                  LeanTween__value(plVar13 + 0xc,lVar14);
                                                  lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8) +
                                                                    0x128);
                                                  if ((lVar14 != 0) &&
                                                     (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    LeanTween__value(plVar13 + 0xd,lVar14);
                                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x1e8);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    LeanTween__value(plVar13 + 0xe,lVar14);
                                                    lVar14 = *(long *)(*(long *)(*unaff_x22 + 0xb8)
                                                                      + 0x1a0);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_AutoMatchmakingNGO_<CreateLobby>d__11>__
                                                  ;
                                                  puVar2 = 
                                                  Assets_Scripts_HoleDifficultyImporter_<>c__DisplayClass3_0_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    LeanTween__value(plVar13 + 0xf,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x298) = plVar13;
                                                    LeanTween__value(lVar14 + 0x298,plVar13);
                                                    plVar13 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                    puVar6,0x26);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if (plVar13 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  Unity_Hierarchy_HierarchyViewNodesEnumerable_Predicate_TypeInfo
                                                  ;
                                                  if ((int)plVar13[3] != 0) {
                                                    plVar13[4] = lVar14;
                                                    LeanTween__value(plVar13 + 4,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationCount_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                                    plVar13[5] = lVar14;
                                                    LeanTween__value(plVar13 + 5,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar2,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = PTR_DAT_06a17030;
                                                  if (2 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[6] = lVar14;
                                                    LeanTween__value(plVar13 + 6,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 200);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar5,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar5 = 
                                                  System_Net_Http_HttpClientHandler_<>c_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                                    plVar13[7] = lVar14;
                                                    LeanTween__value(plVar13 + 7,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar5,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar7 = PTR_DAT_06a1e340;
                                                  if (4 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[8] = lVar14;
                                                    LeanTween__value(plVar13 + 8,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xe0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar7,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Net_Http_Headers_HttpHeaders_<GetEnumerator>d__19_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[9] = lVar14;
                                                    LeanTween__value(plVar13 + 9,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xe8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = PTR_DAT_06a17038;
                                                  if (6 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[10] = lVar14;
                                                    LeanTween__value(plVar13 + 10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Net_Http_Headers_HttpHeaders_HeaderBucket_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                    plVar13[0xb] = lVar14;
                                                    LeanTween__value(plVar13 + 0xb,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Collections_Generic_List<ERSORoadLog>_TypeInfo
                                                  ;
                                                  if (8 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xc] = lVar14;
                                                    LeanTween__value(plVar13 + 0xc,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  Assets_Scripts_HoleDifficulties_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    LeanTween__value(plVar13 + 0xd,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x128)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  UnityEngine_UIElements_IMEEvent_<>c_TypeInfo;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    LeanTween__value(plVar13 + 0xe,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x130)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = PTR_DAT_06a17068;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    LeanTween__value(plVar13 + 0xf,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<JoinLobby>d__10>__
                                                  ;
                                                  if (0xc < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x10] = lVar14;
                                                    LeanTween__value(plVar13 + 0x10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<TryTask>d__9>__
                                                  ;
                                                  if (0xd < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x11] = lVar14;
                                                    LeanTween__value(plVar13 + 0x11,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  Unity_Netcode_IDeferredNetworkMessageManager_TriggerType_TypeInfo
                                                  ;
                                                  if (0xe < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x12] = lVar14;
                                                    LeanTween__value(plVar13 + 0x12,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  Unity_Services_Vivox_Mint_Http_HttpClient_<>c__DisplayClass4_0_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                                    plVar13[0x13] = lVar14;
                                                    LeanTween__value(plVar13 + 0x13,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationAutoLaunch_TypeInfo
                                                  ;
                                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x14] = lVar14;
                                                    LeanTween__value(plVar13 + 0x14,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = System_Web_Util_HttpEncoder_<>c_TypeInfo;
                                                  if (0x11 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x15] = lVar14;
                                                    LeanTween__value(plVar13 + 0x15,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = PTR_DAT_06a1ac98;
                                                  if (0x12 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x16] = lVar14;
                                                    LeanTween__value(plVar13 + 0x16,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  System_Net_Http_Headers_HttpRequestHeaders_<>c_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x17] = lVar14;
                                                    LeanTween__value(plVar13 + 0x17,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = 
                                                  UnityEngine_UIElements_IMGUIEvent_<>c_TypeInfo;
                                                  if (0x14 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x18] = lVar14;
                                                    LeanTween__value(plVar13 + 0x18,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar4 = PTR_DAT_06a17010;
                                                  if (0x15 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x19] = lVar14;
                                                    LeanTween__value(plVar13 + 0x19,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar4,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_HttpWebRequest_NtlmAuthState_TypeInfo;
                                                  if (0x16 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1a] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_Http_HttpContent_FixedMemoryStream_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1b] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1c] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Web_HttpUtility_HttpQSCollection_TypeInfo;
                                                  if (0x19 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1d] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByIndex_TypeInfo
                                                  ;
                                                  if (0x1a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1e] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x140)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  System_Net_IPAddress_ReadOnlyIPAddress_TypeInfo;
                                                  if (0x1b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1f] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x108)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a10f20;
                                                  if (0x1c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x20] = lVar14;
                                                    LeanTween__value(plVar13 + 0x20,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a13660;
                                                  if (0x1d < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x21] = lVar14;
                                                    LeanTween__value(plVar13 + 0x21,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x210)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo
                                                  ;
                                                  if (0x1e < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x22] = lVar14;
                                                    LeanTween__value(plVar13 + 0x22,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x218)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_InputSystem_LowLevel_IMECompositionString_Enumerator_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xffffffe0) != 0) {
                                                    plVar13[0x23] = lVar14;
                                                    LeanTween__value(plVar13 + 0x23,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__CancelApplicationLaunch_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x24] = lVar14;
                                                    LeanTween__value(plVar13 + 0x24,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRApplications__GetApplicationKeyByProcessId_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x25] = lVar14;
                                                    LeanTween__value(plVar13 + 0x25,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  UnityEngine_IMGUITextHandle_TextHandleTuple_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x26] = lVar14;
                                                    LeanTween__value(plVar13 + 0x26,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a1a9f0;
                                                  if (0x23 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x27] = lVar14;
                                                    LeanTween__value(plVar13 + 0x27,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = PTR_DAT_06a12628;
                                                  if (0x24 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x28] = lVar14;
                                                    LeanTween__value(plVar13 + 0x28,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x248)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b958(lVar14,*(undefined8 *)puVar3,uVar12
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar3 = 
                                                  OVR_OpenVR_IVROverlay__CreateDashboardOverlay_TypeInfo
                                                  ;
                                                  if (0x25 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x29] = lVar14;
                                                    LeanTween__value(plVar13 + 0x29,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x2a0) = plVar13;
                                                    LeanTween__value(lVar14 + 0x2a0,plVar13);
                                                    plVar13 = (long *)FUN_02d966a4(*(undefined8 *)
                                                                                    puVar6,0x2d);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x120)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar3,uVar12
                                                                 ,0xb);
                                                    if (plVar13 == (long *)0x0) goto LAB_05a9a904;
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = OVR_OpenVR_IVRIOBuffer__Open_TypeInfo;
                                                  if ((int)plVar13[3] != 0) {
                                                    plVar13[4] = lVar14;
                                                    LeanTween__value(plVar13 + 4,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x118)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVROverlay__CreateOverlay_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
                                                    plVar13[5] = lVar14;
                                                    LeanTween__value(plVar13 + 5,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x150)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,5);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo;
                                                  if (2 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[6] = lVar14;
                                                    LeanTween__value(plVar13 + 6,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x158)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,5);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__GetActionSetHandle_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                                                    plVar13[7] = lVar14;
                                                    LeanTween__value(plVar13 + 7,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x160)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
                                                  if (4 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[8] = lVar14;
                                                    LeanTween__value(plVar13 + 8,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,9);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo
                                                  ;
                                                  if (5 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[9] = lVar14;
                                                    LeanTween__value(plVar13 + 9,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVROverlay__ClearOverlayTexture_TypeInfo
                                                  ;
                                                  if (6 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[10] = lVar14;
                                                    LeanTween__value(plVar13 + 10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1b8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualDouble_TypeInfo
                                                  ;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                                                    plVar13[0xb] = lVar14;
                                                    LeanTween__value(plVar13 + 0xb,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = PTR_DAT_06a19758;
                                                  if (8 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xc] = lVar14;
                                                    LeanTween__value(plVar13 + 0xc,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x198)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalActionData_TypeInfo
                                                  ;
                                                  if (9 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xd] = lVar14;
                                                    LeanTween__value(plVar13 + 0xd,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xe] = lVar14;
                                                    LeanTween__value(plVar13 + 0xe,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_AutoMatchmakingNGO_<CreateOrJoinLobby>d__8>__
                                                  ,uVar12,0xffffffff);
                                                  if ((lVar14 != 0) &&
                                                     (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRInput__TriggerHapticVibrationAction_TypeInfo
                                                  ;
                                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0xf] = lVar14;
                                                    LeanTween__value(plVar13 + 0xf,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xa8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar6 = 
                                                  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt32_TypeInfo
                                                  ;
                                                  if (0xc < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x10] = lVar14;
                                                    LeanTween__value(plVar13 + 0x10,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar6,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0xd < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x11] = lVar14;
                                                    LeanTween__value(plVar13 + 0x11,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xb8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17050;
                                                  if (0xe < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x12] = lVar14;
                                                    LeanTween__value(plVar13 + 0x12,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xc0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x25);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if ((*(uint *)(plVar13 + 3) & 0xfffffff0) != 0) {
                                                    plVar13[0x13] = lVar14;
                                                    LeanTween__value(plVar13 + 0x13,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar5,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x10 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x14] = lVar14;
                                                    LeanTween__value(plVar13 + 0x14,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xd8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar7,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x11 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x15] = lVar14;
                                                    LeanTween__value(plVar13 + 0x15,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf8);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_06a17038,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17008;
                                                  if (0x12 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x16] = lVar14;
                                                    LeanTween__value(plVar13 + 0x16,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x100)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetInputSourceHandle_TypeInfo
                                                  ;
                                                  if (0x13 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x17] = lVar14;
                                                    LeanTween__value(plVar13 + 0x17,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x110)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x14 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x18] = lVar14;
                                                    LeanTween__value(plVar13 + 0x18,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x138)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_06a17068,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__SetActionManifestPath_TypeInfo
                                                  ;
                                                  if (0x15 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x19] = lVar14;
                                                    LeanTween__value(plVar13 + 0x19,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0xf0);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetOriginTrackedDeviceInfo_TypeInfo
                                                  ;
                                                  if (0x16 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1a] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x188)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRNotifications__RemoveNotification_TypeInfo
                                                  ;
                                                  if (0x17 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1b] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 400);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetSkeletalBoneDataCompressed_TypeInfo
                                                  ;
                                                  if (0x18 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1c] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x250)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__CloseMessageOverlay_TypeInfo
                                                  ;
                                                  if (0x19 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1d] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 600);
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetAnalogActionData_TypeInfo;
                                                  if (0x1a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1e] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x148)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0xb);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x1b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x1f] = lVar14;
                                                    LeanTween__value(plVar13 + 0x1f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x168)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar4,uVar12
                                                                 ,0x1f);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowActionOrigins_TypeInfo;
                                                  if (0x1c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x20] = lVar14;
                                                    LeanTween__value(plVar13 + 0x20,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x170)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x12);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRNotifications__CreateNotification_TypeInfo
                                                  ;
                                                  if (0x1d < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x21] = lVar14;
                                                    LeanTween__value(plVar13 + 0x21,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x178)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x28);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a00020;
                                                  if (0x1e < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x22] = lVar14;
                                                    LeanTween__value(plVar13 + 0x22,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x180)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__UpdateActionState_TypeInfo;
                                                  if ((*(uint *)(plVar13 + 3) & 0xffffffe0) != 0) {
                                                    plVar13[0x23] = lVar14;
                                                    LeanTween__value(plVar13 + 0x23,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1a8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x22);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__ShowBindingsForActionSet_TypeInfo
                                                  ;
                                                  if (0x20 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x24] = lVar14;
                                                    LeanTween__value(plVar13 + 0x24,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo
                                                  ;
                                                  if (0x21 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x25] = lVar14;
                                                    LeanTween__value(plVar13 + 0x25,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1c8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1d);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetDigitalActionData_TypeInfo
                                                  ;
                                                  if (0x22 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x26] = lVar14;
                                                    LeanTween__value(plVar13 + 0x26,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1d0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x26);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = OVR_OpenVR_IVRIOBuffer__Read_TypeInfo;
                                                  if (0x23 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x27] = lVar14;
                                                    LeanTween__value(plVar13 + 0x27,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1e0)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x21);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = PTR_DAT_06a17020;
                                                  if (0x24 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x28] = lVar14;
                                                    LeanTween__value(plVar13 + 0x28,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x1f8)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x1c);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x25 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x29] = lVar14;
                                                    LeanTween__value(plVar13 + 0x29,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x200)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_06a10f20,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x26 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2a] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2a,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x208)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)
                                                                         PTR_DAT_06a13660,uVar12,0xb
                                                                );
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = System_ComponentModel_UInt64Converter_var
                                                  ;
                                                  if (0x27 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2b] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2b,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x220)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x23);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVROverlay__ComputeOverlayIntersection_TypeInfo
                                                  ;
                                                  if (0x28 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2c] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2c,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x228)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2c);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetPoseActionData_TypeInfo;
                                                  if (0x29 < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2d] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2d,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x230)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2b);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = OVR_OpenVR_IVRIOBuffer__Write_TypeInfo;
                                                  if (0x2a < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2e] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2e,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x238)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x21);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRInput__GetOriginLocalizedName_TypeInfo
                                                  ;
                                                  if (0x2b < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x2f] = lVar14;
                                                    LeanTween__value(plVar13 + 0x2f,lVar14);
                                                    uVar12 = *(undefined8 *)
                                                              (*(long *)(*unaff_x22 + 0xb8) + 0x240)
                                                    ;
                                                    lVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                                                                 puVar8);
                                                    FUN_05a9b99c(lVar14,*(undefined8 *)puVar2,uVar12
                                                                 ,0x2a);
                                                    if ((lVar14 != 0) &&
                                                       (lVar15 = thunk_FUN_02dd3048(lVar14,*(
                                                  undefined8 *)(*plVar13 + 0x40)), lVar15 == 0))
                                                  goto LAB_05a9a8f0;
                                                  if (0x2c < *(uint *)(plVar13 + 3)) {
                                                    plVar13[0x30] = lVar14;
                                                    LeanTween__value(plVar13 + 0x30,lVar14);
                                                    lVar14 = *(long *)(*unaff_x22 + 0xb8);
                                                    *(long **)(lVar14 + 0x2a8) = plVar13;
                                                    LeanTween__value(lVar14 + 0x2a8,plVar13);
                                                    FUN_05a9b9f4();
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
    }
  }
LAB_05a9a904:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


