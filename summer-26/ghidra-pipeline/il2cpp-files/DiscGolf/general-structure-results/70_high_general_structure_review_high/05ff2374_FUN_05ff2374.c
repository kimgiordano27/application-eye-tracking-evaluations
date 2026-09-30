/*
FUNCTION_NAME: FUN_05ff2374
ENTRY_POINT: 05ff2374
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_05ff2374(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
  ;
  if ((DAT_06dc495d & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_string>>,_DataHandler_<SavePlayerFileToCloud>d__4>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_SubscribeRequest>>,_Client_<OnWebsocketOpen>d__31>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_SpatialAnchorCoreBuildingBlock_<LoadAnchorsAsync>d__27>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<JoinSession>d__58>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<string,_string>>,_SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<<InitializeBackfilling>b__46_0>d>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<ApproveBackfillLoop>d__48>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateAutomaticallyInternal>d__19>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerBehavior_<CompletedThrow>d__30>__
                );
    FUN_02d965b8(PTR_DAT_06a0e0b8);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerSave_<GetPlayer>d__31>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<LeaveCurrentSession>d__74>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_VivoxSetup_<Initialize>d__3>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<JoinSession>d__58>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_LobbyManager_<JoinLobby>d__55>__
                );
    DAT_06dc495d = 1;
  }
  lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
  FUN_0552aca4(lVar10,0);
  uVar11 = _DAT_01100920;
  *(undefined8 *)(lVar10 + 0x18) = _UNK_01100928;
  *(undefined8 *)(lVar10 + 0x10) = uVar11;
  puVar9 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<JoinSession>d__58>__
  ;
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Allocation>,_LobbyManager_<CreateLobby>d__52>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ValueTuple<string,_string>>,_SessionsManager_<CreateSession>d__55>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<JoinSession>d__58>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<string>>,_SessionsManager_<CreateSession>d__55>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_SubscribeRequest>>,_Client_<OnWebsocketOpen>d__31>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Dictionary<string,_string>>,_DataHandler_<SavePlayerFileToCloud>d__4>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRSceneManager_LoadSceneModelResult>,_OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
  ;
  puVar1 = PTR_DAT_06a0e0b8;
  if (param_2 != 0) {
    uVar11 = FUN_035c1040(param_2,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_ColocationSessionEventHandler_<OnSessionDiscoveredWithSpatialAnchor>d__11>__
                         );
    uVar12 = FUN_035c1040(param_2,*(undefined8 *)puVar6);
    uVar13 = FUN_035c1040(param_2,*(undefined8 *)puVar5);
    uVar14 = FUN_035c1040(param_2,*(undefined8 *)puVar8);
    uVar15 = FUN_05ff29a0(uVar14,uVar14);
    uVar16 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
    FUN_0552aca4(uVar16,0);
    FUN_05ff58cc(uVar16,uVar15);
    uVar15 = FUN_035c1040(param_2,*(undefined8 *)puVar7);
    uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05ff2aa4(uVar17,uVar15);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(uVar15,0);
    uVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05ff2b84(uVar18,uVar13,uVar16);
    uVar19 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_0552aca4(uVar19,0);
    uVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerBehavior_<CompletedThrow>d__30>__
                               );
    FUN_0552aca4(uVar20,0);
    uVar21 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<LeaveCurrentSession>d__74>__
                               );
    FUN_05ff2bd8(uVar21,uVar18);
    uVar22 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_VivoxSetup_<Initialize>d__3>__
                               );
    FUN_05ff2c20(uVar22,uVar18);
    uVar23 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_LobbyManager_<JoinLobby>d__55>__
                               );
    FUN_05ff2c68(uVar23,uVar18);
    lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerSave_<GetPlayer>d__31>__
                               );
    *(undefined8 *)(lVar24 + 0x10) = DAT_010fcaa0;
    FUN_0552aca4(lVar24,0);
    lVar25 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                               );
    FUN_0552aca4(lVar25,0);
    *(long *)(lVar25 + 0x10) = lVar24;
    uVar26 = LeanTween__value((long *)(lVar25 + 0x10),lVar24);
    uVar26 = FUN_05ff2cf4(uVar26,uVar14);
    lVar27 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                               );
    FUN_0552aca4(lVar27,0);
    *(long *)(lVar27 + 0x10) = lVar24;
    LeanTween__value((long *)(lVar27 + 0x10),lVar24);
    plVar28 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                        );
    uVar29 = FUN_05ff2e48();
    uVar14 = FUN_05ff3004(uVar29,uVar14);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
    ;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,uVar14,*(undefined8 *)(*plVar28 + 0x200));
      uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_05ff3128(uVar14,lVar27,plVar28);
      uVar29 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                                 );
      FUN_05ff31dc(uVar29,uVar26,uVar13,uVar12,lVar25,uVar19);
      lVar24 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                                 );
      FUN_05fee85c(lVar24,lVar10,uVar29,uVar14,uVar16,uVar15,uVar18,uVar11,uVar17,uVar19,uVar20,
                   uVar21,uVar22,uVar23,uVar12);
      TinyJSON_JSON__SupportTypeForAOT<Decimal>
                (param_2,lVar24,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10>__
                );
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28>__
      ;
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateByPlayerWithOculusIdInternal>d__20>__
      ;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_AutomaticColocationLauncher_<ColocateAutomaticallyInternal>d__19>__
      ;
      puVar1 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<<InitializeBackfilling>b__46_0>d>__
      ;
      if (lVar24 != 0) {
        FUN_035c1610(param_2,*(undefined8 *)(lVar24 + 0x68),
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<BackfillTicket>,_MatchmakerModule_<ApproveBackfillLoop>d__48>__
                    );
        FUN_035c1610(param_2,*(undefined8 *)(lVar24 + 0x68),*(undefined8 *)puVar1);
        FUN_035c1610(param_2,*(undefined8 *)(lVar24 + 0x70),*(undefined8 *)puVar2);
        FUN_035c1610(param_2,*(undefined8 *)(lVar24 + 0x78),*(undefined8 *)puVar3);
        FUN_035c1610(param_2,*(undefined8 *)(lVar24 + 0x80),*(undefined8 *)puVar4);
        return lVar24;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


