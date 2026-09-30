/*
FUNCTION_NAME: FUN_05aad300
ENTRY_POINT: 05aad300
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05aad300(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined8 uVar8;
  undefined *puVar6;
  
                    /* catch() { ... } // from try @ 05aad2a4 with catch @ 05aad300
                       catch() { ... } // from try @ 05aad2f0 with catch @ 05aad300 */
                    /* try { // try from 05aad304 to 05bad427 has its CatchHandler @ 05aad304
                       catch() { ... } // from try @ 05aad304 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad4e4 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad548 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad590 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad5c0 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad5ec with catch @ 05aad304
                       catch() { ... } // from try @ 05aad610 with catch @ 05aad304
                       catch() { ... } // from try @ 05aad63c with catch @ 05aad304 */
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210)), param_3 != 0)
     ) {
    iVar1 = *(int *)(param_3 + 0x5c);
    if (iVar1 < 9) {
      if (iVar1 != 7) {
        if (iVar1 != 8) {
          return;
        }
        uVar7 = *(uint *)(param_1 + 2);
        if ((uVar7 >> 8 & 1) != 0) {
          if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
          iVar1 = (**(code **)(*plVar2 + 0x218))
                            (plVar2,param_2,*(undefined8 *)(lVar3 + 0x48),
                             *(undefined8 *)(*plVar2 + 0x220));
          if (iVar1 < 0) {
            uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
            thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                              );
            uVar4 = thunk_FUN_02dd3144();
            puVar6 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<WebOperation_<GetRequestStream>d__50>__
            ;
            goto LAB_05aad768;
          }
          uVar7 = *(uint *)(param_1 + 2);
        }
        if ((uVar7 >> 9 & 1) != 0) {
          if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
          iVar1 = (**(code **)(*plVar2 + 0x218))
                            (plVar2,param_2,*(undefined8 *)(lVar3 + 0x50),
                             *(undefined8 *)(*plVar2 + 0x220));
          if (iVar1 < 0) {
            uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
            thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                              );
            uVar4 = thunk_FUN_02dd3144();
            puVar6 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetResult__;
            goto LAB_05aad768;
          }
          uVar7 = *(uint *)(param_1 + 2);
        }
        if ((uVar7 >> 7 & 1) == 0) {
          return;
        }
        if ((lVar3 != 0) && (param_1 = (long *)*param_1, param_1 != (long *)0x0)) {
          iVar1 = (**(code **)(*param_1 + 0x218))
                            (param_1,param_2,*(undefined8 *)(lVar3 + 0x40),
                             *(undefined8 *)(*param_1 + 0x220));
          if (iVar1 < 0) {
            return;
          }
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
          ;
LAB_05aad768:
          uVar5 = thunk_FUN_02dfd288(puVar6);
          FUN_05b06b24(uVar4,uVar5,uVar8,0);
          uVar8 = thunk_FUN_02dfd288(
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<HttpResponseMessage>,_HttpClient_<GetStringAsync>d__52>__
                                    );
                    /* WARNING: Subroutine does not return */
          FUN_02d96724(uVar4,uVar8);
        }
        goto LAB_05aad5fc;
      }
      uVar7 = *(uint *)(param_1 + 2);
      if ((uVar7 >> 9 & 1) != 0) {
        if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*plVar2 + 0x218))
                          (plVar2,param_2,*(undefined8 *)(lVar3 + 0x50),
                           *(undefined8 *)(*plVar2 + 0x220));
        if (iVar1 < 0) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Create__;
          goto LAB_05aad768;
        }
        uVar7 = *(uint *)(param_1 + 2);
      }
      if ((uVar7 >> 8 & 1) != 0) {
        if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*plVar2 + 0x218))
                          (plVar2,param_2,*(undefined8 *)(lVar3 + 0x48),
                           *(undefined8 *)(*plVar2 + 0x220));
        if (iVar1 < 0) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__;
          goto LAB_05aad768;
        }
        uVar7 = *(uint *)(param_1 + 2);
      }
      if ((uVar7 >> 7 & 1) != 0) {
        if ((lVar3 == 0) || (param_1 = (long *)*param_1, param_1 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*param_1 + 0x218))
                          (param_1,param_2,*(undefined8 *)(lVar3 + 0x40),
                           *(undefined8 *)(*param_1 + 0x220));
        if (-1 < iVar1) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
          ;
          goto LAB_05aad768;
        }
      }
    }
    else if (iVar1 == 9) {
      uVar7 = *(uint *)(param_1 + 2);
      if ((uVar7 >> 7 & 1) != 0) {
        if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*plVar2 + 0x218))
                          (plVar2,param_2,*(undefined8 *)(lVar3 + 0x40),
                           *(undefined8 *)(*plVar2 + 0x220));
        if (0 < iVar1) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__;
          goto LAB_05aad768;
        }
        uVar7 = *(uint *)(param_1 + 2);
      }
      if ((uVar7 >> 6 & 1) != 0) {
        if ((lVar3 == 0) || (param_1 = (long *)*param_1, param_1 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*param_1 + 0x218))
                          (param_1,param_2,*(undefined8 *)(lVar3 + 0x38),
                           *(undefined8 *)(*param_1 + 0x220));
        if (0 < iVar1) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_get_Task__;
          goto LAB_05aad768;
        }
      }
    }
    else if (iVar1 == 10) {
      uVar7 = *(uint *)(param_1 + 2);
      if ((uVar7 >> 6 & 1) != 0) {
        if ((lVar3 == 0) || (plVar2 = (long *)*param_1, plVar2 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*plVar2 + 0x218))
                          (plVar2,param_2,*(undefined8 *)(lVar3 + 0x38),
                           *(undefined8 *)(*plVar2 + 0x220));
        if (0 < iVar1) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
          ;
          goto LAB_05aad768;
        }
        uVar7 = *(uint *)(param_1 + 2);
      }
      if ((uVar7 >> 7 & 1) != 0) {
        if ((lVar3 == 0) || (param_1 = (long *)*param_1, param_1 == (long *)0x0)) goto LAB_05aad5fc;
        iVar1 = (**(code **)(*param_1 + 0x218))
                          (param_1,param_2,*(undefined8 *)(lVar3 + 0x40),
                           *(undefined8 *)(*param_1 + 0x220));
        if (-1 < iVar1) {
          uVar8 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
          thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Lobby>_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_WrappedLobbyService_<JoinLobbyByIdAsync>d__19>__
                            );
          uVar4 = thunk_FUN_02dd3144();
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MonoTlsStream_<CreateStream>d__18>__
          ;
          goto LAB_05aad768;
        }
      }
    }
    return;
  }
LAB_05aad5fc:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


