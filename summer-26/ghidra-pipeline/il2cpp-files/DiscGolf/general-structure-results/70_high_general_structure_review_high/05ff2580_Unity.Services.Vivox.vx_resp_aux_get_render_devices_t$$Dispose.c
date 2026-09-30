/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_aux_get_render_devices_t$$Dispose
ENTRY_POINT: 05ff2580
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Unity_Services_Vivox_vx_resp_aux_get_render_devices_t__Dispose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000078;
  
  uVar2 = FUN_035c1040();
  uVar3 = FUN_035c1040();
  uVar4 = FUN_035c1040();
  uVar5 = FUN_035c1040();
  uVar6 = FUN_05ff29a0(uVar5,uVar5);
  uVar7 = thunk_FUN_02dd3144(*unaff_x21);
  FUN_0552aca4(uVar7,0);
  FUN_05ff58cc(uVar7,uVar6);
  uVar6 = FUN_035c1040();
  uVar8 = thunk_FUN_02dd3144(*unaff_x26);
  FUN_05ff2aa4(uVar8,uVar6);
  uVar6 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0552aca4(uVar6,0);
  uVar8 = thunk_FUN_02dd3144(*unaff_x27);
  FUN_05ff2b84(uVar8,uVar4,uVar7);
  uVar9 = thunk_FUN_02dd3144(*unaff_x28);
  FUN_0552aca4(uVar9,0);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerBehavior_<CompletedThrow>d__30>__
                             );
  FUN_0552aca4(uVar10,0);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SessionsManager_<LeaveCurrentSession>d__74>__
                             );
  FUN_05ff2bd8(uVar10,uVar8);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_VivoxSetup_<Initialize>d__3>__
                             );
  FUN_05ff2c20(uVar10,uVar8);
  uVar10 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_LobbyManager_<JoinLobby>d__55>__
                             );
  FUN_05ff2c68(uVar10,uVar8);
  lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerSave_<GetPlayer>d__31>__
                             );
  *(undefined8 *)(lVar11 + 0x10) = DAT_010fcaa0;
  FUN_0552aca4(lVar11,0);
  lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                             );
  FUN_0552aca4(lVar12,0);
  *(long *)(lVar12 + 0x10) = lVar11;
  uVar10 = LeanTween__value((long *)(lVar12 + 0x10),lVar11);
  uVar10 = FUN_05ff2cf4(uVar10,uVar5);
  lVar13 = thunk_FUN_02dd3144(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                             );
  FUN_0552aca4(lVar13,0);
  *(long *)(lVar13 + 0x10) = lVar11;
  LeanTween__value((long *)(lVar13 + 0x10),lVar11);
  plVar14 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                      );
  uVar15 = FUN_05ff2e48();
  uVar5 = FUN_05ff3004(uVar15,uVar5);
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
  ;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x1f8))(plVar14,uVar5,*(undefined8 *)(*plVar14 + 0x200));
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05ff3128(uVar5,lVar13,plVar14);
    uVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                               );
    FUN_05ff31dc(uVar15,uVar10,uVar4,uVar3,lVar12,uVar9);
    lVar11 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                               );
    FUN_05fee85c(lVar11,in_stack_00000078,uVar15,uVar5,uVar7,uVar6,uVar8,uVar2);
    TinyJSON_JSON__SupportTypeForAOT<Decimal>();
    if (lVar11 != 0) {
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      return lVar11;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


