/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_aux_get_render_devices_t$$Finalize
ENTRY_POINT: 05ff2484
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_19;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Services_Vivox_vx_resp_aux_get_render_devices_t__Finalize(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 uVar20;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0xce8));
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
  *(undefined1 *)(unaff_x20 + 0x95d) = 1;
  lVar6 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_0552aca4(lVar6,0);
  uVar7 = _DAT_01100920;
  *(undefined8 *)(lVar6 + 0x18) = _UNK_01100928;
  *(undefined8 *)(lVar6 + 0x10) = uVar7;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<JoinSession>d__58>__
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
  if (unaff_x19 != 0) {
    uVar7 = FUN_035c1040();
    uVar8 = FUN_035c1040();
    uVar9 = FUN_035c1040();
    uVar10 = FUN_035c1040();
    uVar11 = FUN_05ff29a0(uVar10,uVar10);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_0552aca4(uVar12,0);
    FUN_05ff58cc(uVar12,uVar11);
    uVar11 = FUN_035c1040();
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05ff2aa4(uVar13,uVar11);
    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(uVar11,0);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05ff2b84(uVar13,uVar9,uVar12);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_0552aca4(uVar14,0);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerBehavior_<CompletedThrow>d__30>__
                               );
    FUN_0552aca4(uVar15,0);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<LeaveCurrentSession>d__74>__
                               );
    FUN_05ff2bd8(uVar15,uVar13);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_VivoxSetup_<Initialize>d__3>__
                               );
    FUN_05ff2c20(uVar15,uVar13);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_LobbyManager_<JoinLobby>d__55>__
                               );
    FUN_05ff2c68(uVar15,uVar13);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerSave_<GetPlayer>d__31>__
                               );
    *(undefined8 *)(lVar16 + 0x10) = DAT_010fcaa0;
    FUN_0552aca4(lVar16,0);
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                               );
    FUN_0552aca4(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar16;
    uVar15 = LeanTween__value((long *)(lVar17 + 0x10),lVar16);
    uVar15 = FUN_05ff2cf4(uVar15,uVar10);
    lVar18 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                               );
    FUN_0552aca4(lVar18,0);
    *(long *)(lVar18 + 0x10) = lVar16;
    LeanTween__value((long *)(lVar18 + 0x10),lVar16);
    plVar19 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                        );
    uVar20 = FUN_05ff2e48();
    uVar10 = FUN_05ff3004(uVar20,uVar10);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
    ;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x1f8))(plVar19,uVar10,*(undefined8 *)(*plVar19 + 0x200));
      uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_05ff3128(uVar10,lVar18,plVar19);
      uVar20 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                                 );
      FUN_05ff31dc(uVar20,uVar15,uVar9,uVar8,lVar17,uVar14);
      lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                                 );
      FUN_05fee85c(lVar16,lVar6,uVar20,uVar10,uVar12,uVar11,uVar13,uVar7);
      TinyJSON_JSON__SupportTypeForAOT<Decimal>();
      if (lVar16 != 0) {
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        return lVar16;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


