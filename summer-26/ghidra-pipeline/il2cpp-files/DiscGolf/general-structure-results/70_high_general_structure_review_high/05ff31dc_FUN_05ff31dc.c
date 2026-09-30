/*
FUNCTION_NAME: FUN_05ff31dc
ENTRY_POINT: 05ff31dc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_9;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ff31dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LocalAvatarSave_<OnUserProofCallback>d__22>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LobbyManager_<CreateLobby>d__52>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<OnWebsocketOpen>d__31>__
  ;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<QueryResponse>,_LobbyManager_<RefreshLobbyList>d__53>__
  ;
  if ((DAT_06dc4984 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069ff508);
    FUN_02d965b8(
                System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff510);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_SessionsManager_<Authenticate>d__52>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<QueryResponse>,_LobbyManager_<RefreshLobbyList>d__53>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<OnColocationSessionFound>d__18>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AutoMatchmakingNGO_<Awake>d__5>__
                );
    FUN_02d965b8(PTR_DAT_06a22ce8);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ChannelSession_<<ConnectAsync>b__45_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketCloseListener>d__50>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LocalAvatarSave_<OnUserProofCallback>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketErrorListener>d__51>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketMessageListener>d__52>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketOpenListener>d__49>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Reply>,_Client_<OnWebsocketOpen>d__31>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ConnectionModule_<OnSessionChanged>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_CustomMatchmakingNGO_<Awake>d__5>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_LobbyManager_<CreateLobby>d__52>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DeleteAccountConfirmation_<DeleteAccount>d__8>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                );
    DAT_06dc4984 = 1;
  }
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_6;
  LeanTween__value((undefined8 *)(param_1 + 0x10),param_6);
  puVar10 = (undefined8 *)(param_1 + 0x18);
  *puVar10 = param_3;
  LeanTween__value(puVar10,param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  LeanTween__value((undefined8 *)(param_1 + 0x28),param_5);
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)puVar1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)puVar2,0);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)puVar3,0);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)puVar4,0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ConnectionModule_<OnSessionChanged>d__22>__
                       ,0);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_ChannelSession_<<ConnectAsync>b__45_0>d>__
                       ,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_DeleteAccountConfirmation_<DeleteAccount>d__8>__
                       ,0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnJoinIntentReceived>d__31>__
                       ,0);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_AutoMatchmakingNGO_<Awake>d__5>__
                       ,0);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_CustomMatchmakingNGO_<Awake>d__5>__
                       ,0);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketOpenListener>d__49>__
                       ,0);
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketErrorListener>d__51>__
                       ,0);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_FriendsMatchmaking_<OnRoomOperationResult>d__24>__
                       ,0);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  LeanTween__value();
  uVar5 = FUN_05362cb4(param_2,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketMessageListener>d__52>__
                       ,0);
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  LeanTween__value();
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff510);
  FUN_04e92874(lVar6,*(undefined8 *)PTR_DAT_069ff508);
  plVar11 = (long *)*puVar10;
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_SessionsManager_<Authenticate>d__52>__
           ) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05ff361c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_02dd004c(plVar11,*(long *)
                                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_SessionsManager_<Authenticate>d__52>__
                           ,0);
LAB_05ff361c:
    uVar5 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_Client_<WebsocketCloseListener>d__50>__
    ;
    puVar2 = System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo;
    puVar1 = PTR_DAT_06a22ce8;
    if (lVar6 != 0) {
      FUN_04e935dc(lVar6,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_LocalMatchmaking_<OnColocationSessionFound>d__18>__
                   ,uVar5,*(undefined8 *)
                           System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                  );
      FUN_04e935dc(lVar6,*(undefined8 *)puVar3,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
      *(long *)(param_1 + 0xa0) = lVar6;
      LeanTween__value((long *)(param_1 + 0xa0),lVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


