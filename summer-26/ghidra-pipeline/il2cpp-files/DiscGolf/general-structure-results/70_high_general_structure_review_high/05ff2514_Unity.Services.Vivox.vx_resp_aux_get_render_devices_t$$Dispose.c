/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_aux_get_render_devices_t$$Dispose
ENTRY_POINT: 05ff2514
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_11;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Unity_Services_Vivox_vx_resp_aux_get_render_devices_t__Dispose(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 uVar19;
  long unaff_x19;
  long unaff_x20;
  
  uVar6 = _DAT_01100920;
  *(undefined8 *)(unaff_x20 + 0x18) = _UNK_01100928;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar6;
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
    uVar6 = FUN_035c1040();
    uVar7 = FUN_035c1040();
    uVar8 = FUN_035c1040();
    uVar9 = FUN_035c1040();
    uVar10 = FUN_05ff29a0(uVar9,uVar9);
    uVar11 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
    FUN_0552aca4(uVar11,0);
    FUN_05ff58cc(uVar11,uVar10);
    uVar10 = FUN_035c1040();
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar4);
    FUN_05ff2aa4(uVar12,uVar10);
    uVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_0552aca4(uVar10,0);
    uVar12 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_05ff2b84(uVar12,uVar8,uVar11);
    uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_0552aca4(uVar13,0);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerBehavior_<CompletedThrow>d__30>__
                               );
    FUN_0552aca4(uVar14,0);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<LeaveCurrentSession>d__74>__
                               );
    FUN_05ff2bd8(uVar14,uVar12);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_VivoxSetup_<Initialize>d__3>__
                               );
    FUN_05ff2c20(uVar14,uVar12);
    uVar14 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_LobbyManager_<JoinLobby>d__55>__
                               );
    FUN_05ff2c68(uVar14,uVar12);
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerSave_<GetPlayer>d__31>__
                               );
    *(undefined8 *)(lVar15 + 0x10) = DAT_010fcaa0;
    FUN_0552aca4(lVar15,0);
    lVar16 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                               );
    FUN_0552aca4(lVar16,0);
    *(long *)(lVar16 + 0x10) = lVar15;
    uVar14 = LeanTween__value((long *)(lVar16 + 0x10),lVar15);
    uVar14 = FUN_05ff2cf4(uVar14,uVar9);
    lVar17 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                               );
    FUN_0552aca4(lVar17,0);
    *(long *)(lVar17 + 0x10) = lVar15;
    LeanTween__value((long *)(lVar17 + 0x10),lVar15);
    plVar18 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                        );
    uVar19 = FUN_05ff2e48();
    uVar9 = FUN_05ff3004(uVar19,uVar9);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
    ;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x1f8))(plVar18,uVar9,*(undefined8 *)(*plVar18 + 0x200));
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
      FUN_05ff3128(uVar9,lVar17,plVar18);
      uVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                                 );
      FUN_05ff31dc(uVar19,uVar14,uVar8,uVar7,lVar16,uVar13);
      lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                                 );
      FUN_05fee85c(lVar15,unaff_x20,uVar19,uVar9,uVar11,uVar10,uVar12,uVar6);
      TinyJSON_JSON__SupportTypeForAOT<Decimal>();
      if (lVar15 != 0) {
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        FUN_035c1610();
        return lVar15;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


