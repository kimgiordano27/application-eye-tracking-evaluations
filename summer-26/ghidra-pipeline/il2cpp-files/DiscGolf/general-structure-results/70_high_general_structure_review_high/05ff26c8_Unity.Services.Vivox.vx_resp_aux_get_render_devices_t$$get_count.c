/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_aux_get_render_devices_t$$get_count
ENTRY_POINT: 05ff26c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


long Unity_Services_Vivox_vx_resp_aux_get_render_devices_t__get_count(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  lVar2 = thunk_FUN_02dd3144(**(undefined8 **)(param_1 + 0xcf8));
  *(undefined8 *)(lVar2 + 0x10) = DAT_010fcaa0;
  FUN_0552aca4(lVar2,0);
  lVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerVRNetworkSpawn_<OnNetworkSpawn>d__0>__
                            );
  FUN_0552aca4(lVar3,0);
  *(long *)(lVar3 + 0x10) = lVar2;
  LeanTween__value((long *)(lVar3 + 0x10),lVar2);
  uVar4 = FUN_05ff2cf4();
  lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                            );
  FUN_0552aca4(lVar5,0);
  *(long *)(lVar5 + 0x10) = lVar2;
  LeanTween__value((long *)(lVar5 + 0x10),lVar2);
  plVar6 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                     );
  FUN_05ff2e48();
  uVar7 = FUN_05ff3004();
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
  ;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x1f8))(plVar6,uVar7,*(undefined8 *)(*plVar6 + 0x200));
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05ff3128(uVar7,lVar5,plVar6);
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                              );
    FUN_05ff31dc(uVar8,uVar4,in_stack_00000060,in_stack_00000068,lVar3);
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                              );
    FUN_05fee85c(lVar2,in_stack_00000078,uVar8,uVar7);
    TinyJSON_JSON__SupportTypeForAOT<Decimal>();
    if (lVar2 != 0) {
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      FUN_035c1610();
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


