/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxServiceInternal.<JoinGroupChannelAsync>d__204$$SetStateMachine
ENTRY_POINT: 05ffae50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_20;telemetry_or_network_hits_21;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxServiceInternal_<JoinGroupChannelAsync>d__204__SetStateMachine
               (int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined2 local_64 [6];
  undefined4 local_58;
  undefined8 local_48;
  
  if ((DAT_06dc49ad & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<Authenticate>d__52>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<CreateSession>d__55>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<JoinActiveSession>d__59>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
                );
    FUN_02d965b8(PTR_DAT_069ff500);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<JoinSession>d__58>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LeaveCurrentSession>d__74>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LeaveSessionMidGame>d__82>__
                );
    FUN_02d965b8(PTR_DAT_06a0e698);
    FUN_02d965b8(System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                );
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LockActiveSession>d__73>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UnlockActiveSession>d__72>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                );
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(PTR_DAT_06a0e3f8);
    FUN_02d965b8(
                Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                );
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc49ad = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<RoomMeshAnchor_<Initialize>d__14>__
  ;
  local_48 = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d3f8);
      uVar5 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<InstantiateSpatialAnchor>d__15>__
                                 );
      FUN_05ff963c(uVar5,0,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(
                                 Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedSpatialAnchorCore_<LoadAndInstantiateAnchors>d__17>__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar12);
    }
    lVar13 = *(long *)(param_1 + 10);
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<Authenticate>d__52>__
                              );
    FUN_05ff9718();
    puVar1 = PTR_DAT_069fb9d8;
    uVar5 = FUN_02d966a4(*(undefined8 *)PTR_DAT_069fb9d8,0);
    lVar6 = FUN_02d966a4(*(undefined8 *)puVar1,2);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
    LeanTween__value();
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    *(undefined8 *)(lVar6 + 0x28) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
    ;
    LeanTween__value();
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
    ;
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StartDiscoveringColocationSessions>d__21>__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar15 = FUN_05ffa964(uVar5);
    lVar11 = auVar15._0_8_;
    if (lVar11 != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(lVar11,auVar15._8_8_,lVar11);
      }
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,auVar15._8_8_,lVar11);
      }
      FUN_0420d6d4(*(long *)(lVar4 + 0x20),*(undefined8 *)PTR_DAT_069ff558,lVar11,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                  );
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    auVar15 = FUN_05ffaadc(lVar6);
    uVar5 = auVar15._8_8_;
    lVar6 = auVar15._0_8_;
    if (lVar6 == 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar5,0);
      }
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(lVar6,uVar5,lVar6);
      }
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(0,uVar5,lVar6);
      }
      FUN_0420d6d4(*(long *)(lVar4 + 0x20),
                   *(undefined8 *)Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo,
                   lVar6,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                  );
    }
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *(long *)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)(lVar13 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_05ffa310(uVar5,uVar12);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e935f0(lVar6,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateSelectedCoursePropertyAsync>d__68>__
                 ,uVar5,*(undefined8 *)PTR_DAT_069ff500);
    if ((char)param_1[0xc] != '\0') {
      local_64[0] = (undefined2)param_1[0xc];
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                  System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo,
                                 local_64);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_05ff98b8(uVar12,*(undefined8 *)PTR_DAT_069fba08,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UnlockActiveSession>d__72>__
                           ,uVar5);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar5,uVar5);
      }
      FUN_0420ce6c(lVar6,uVar5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LeaveCurrentSession>d__74>__
                  );
    }
    if (*(char *)((long)param_1 + 0x32) != '\0') {
      local_64[0] = *(undefined2 *)((long)param_1 + 0x32);
      lVar6 = *(long *)(lVar4 + 0x18);
      uVar12 = *(undefined8 *)(lVar13 + 0x18);
      uVar5 = thunk_FUN_02dd2d7c(*(undefined8 *)
                                  System_Converter<ParameterInfo,_ParameterExpression>_TypeInfo,
                                 local_64);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar5 = FUN_05ff98b8(uVar12,*(undefined8 *)PTR_DAT_069fba08,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfRetrievingAnchorServiceHung>d__25>__
                           ,uVar5);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860(uVar5,uVar5);
      }
      FUN_0420ce6c(lVar6,uVar5,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LeaveCurrentSession>d__74>__
                  );
    }
    *(undefined8 *)(lVar4 + 0x38) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSavingAnchorsServiceHung>d__22>__
    ;
    LeanTween__value();
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
    ;
    plVar10 = *(long **)(lVar13 + 0x18);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
           ) {
          puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05ffb308;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar10,*(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<ProcessWrite>d__34>__
                          ,0);
LAB_05ffb308:
    uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
    uVar8 = FUN_0536c9cc(uVar5,0);
    puVar2 = 
    Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
    ;
    if ((uVar8 & 1) == 0) {
      if (*(long *)(lVar4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_0420d670(*(long *)(lVar4 + 0x20),
                           *(undefined8 *)
                            Unity_Services_Authentication_PlayerAccounts_PlayerAccountServiceInternal_<>c__DisplayClass54_0_TypeInfo
                           ,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LeaveSessionMidGame>d__82>__
                          );
      if ((uVar8 & 1) == 0) {
        plVar10 = *(long **)(lVar13 + 0x18);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *plVar10;
        lVar11 = *(long *)(lVar4 + 0x20);
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05ffb3a0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar10,*(long *)puVar1,0);
LAB_05ffb3a0:
        uVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar5 = FUN_05362cb4(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                             ,uVar5,0);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_0420d6d4(lVar11,*(undefined8 *)puVar2,uVar5,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<LocalMatchmaking_<StopAdvertisingColocationSession>d__20>__
                    );
      }
    }
    plVar10 = *(long **)(lVar13 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar6 = *plVar10;
    uVar5 = *(undefined8 *)(lVar13 + 0x18);
    uVar12 = *(undefined8 *)(param_1 + 0xe);
    lVar13 = *(long *)
              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<JoinSession>d__58>__
    ;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    uVar14 = *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<LockActiveSession>d__73>__
    ;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar13 + 0x20)) {
          lVar6 = lVar6 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar13 + 0x50)) * 0x10 + 0x138;
          goto LAB_05ffb45c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar6 = FUN_02dd004c(plVar10);
LAB_05ffb45c:
    lVar6 = thunk_FUN_02db5310(*(undefined8 *)(lVar6 + 8),lVar13);
    lVar4 = (**(code **)(lVar6 + 8))(plVar10,uVar14,lVar4,uVar5,uVar12,lVar6);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_48 = FUN_0481d028(lVar4,*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                           );
    uVar8 = FUN_047e6248(&local_48,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteChunkTrailer>d__40>__
                        );
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      LeanTween__value(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f63a8(param_1 + 2,&local_48,param_1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<CreateSession>d__55>__
                  );
      return;
    }
  }
  uVar5 = FUN_047e6288(&local_48,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<WriteAsyncInner>d__33>__
                      );
  *param_1 = -2;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<JoinActiveSession>d__59>__
  ;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar5,*(undefined8 *)puVar1);
  return;
}


