/*
FUNCTION_NAME: Unity.Services.Vivox.vx_resp_aux_get_render_devices_t$$get_render_devices
ENTRY_POINT: 05ff2724
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long Unity_Services_Vivox_vx_resp_aux_get_render_devices_t__get_render_devices
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x22;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  
  lVar2 = thunk_FUN_02dd3144(**(undefined8 **)(param_1 + 0xc70));
  FUN_0552aca4(lVar2,0);
  *(undefined8 *)(lVar2 + 0x10) = unaff_x22;
  LeanTween__value();
  plVar3 = (long *)thunk_FUN_02dd3144(*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<OVRAnchor_Tracker_AsyncLock>,_OVRAnchor_Tracker_<Dispose>d__10>__
                                     );
  FUN_05ff2e48();
  uVar4 = FUN_05ff3004();
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<ISession>,_SessionsManager_<CreateSession>d__55>__
  ;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x1f8))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x200));
    uVar4 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
    FUN_05ff3128(uVar4,lVar2,plVar3);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IList<ISessionInfo>>,_LobbyListUI_<UpdateLobbyList>d__19>__
                              );
    FUN_05ff31dc(uVar5,param_2,in_stack_00000060,in_stack_00000068);
    lVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<IReadOnlyList<OVRSpatialAnchor>>,_AutomaticColocationLauncher_<LocalizeAnchor>d__30>__
                              );
    FUN_05fee85c(lVar2,in_stack_00000078,uVar5,uVar4);
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


