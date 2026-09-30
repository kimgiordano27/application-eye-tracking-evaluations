/*
FUNCTION_NAME: FUN_05fe1808
ENTRY_POINT: 05fe1808
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_15;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_05fe1808(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined4 uStack_89;
  undefined8 local_80;
  undefined7 uStack_78;
  undefined4 uStack_71;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_06dc48a3 & 1) == 0) {
    FUN_02d965b8(Method_System_Array_Empty<Exception>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__);
    FUN_02d965b8(PTR_DAT_069fbb48);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                );
    FUN_02d965b8(Method_System_Array_Sort<string>__);
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_AuthenticationServiceInternal_<HandleSignInRequestAsync>d__136>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_AuthenticationServiceInternal_<StartRefreshAsync>d__137>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_PlayerAccountServiceInternal_<HandleSignInRequestAsync>d__60>__
                );
    FUN_02d965b8(Method_System_Array_Empty<DataRelation>__);
    FUN_02d965b8(PTR_DAT_069fba08);
    DAT_06dc48a3 = 1;
  }
  uVar13 = _UNK_01100158;
  uVar12 = _DAT_01100150;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  if (param_2 != 0) {
    iVar8 = 0;
    iVar9 = 0;
    uVar21 = 0;
LAB_05fe1920:
    uVar7 = FUN_05fca4bc(param_2,uVar21,0);
    lVar14 = *(long *)(param_1 + 0x10);
    if (lVar14 == 0) goto LAB_05fe1f94;
    if (uVar21 < *(uint *)(lVar14 + 0x18)) {
      FUN_0380288c(param_1,lVar14 + (long)(int)uVar21 * 8 + 0x20,uVar7,0,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_AuthenticationServiceInternal_<StartRefreshAsync>d__137>__
                  );
      lVar14 = *(long *)(param_1 + 0x30);
      if (lVar14 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_05fe1fac;
      lVar18 = (long)(int)uVar21;
      lVar14 = *(long *)(lVar14 + lVar18 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_05fe1f94;
      FUN_0504d764(lVar14,uVar7,1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                  );
      if ((int)uVar7 < 1) {
LAB_05fe1ec0:
        lVar14 = *(long *)(param_1 + 0x18);
        *(int *)(param_1 + 0x28) = iVar9 + 1;
        *(int *)(param_1 + 0x2c) = iVar8 + 1;
        if (lVar14 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_05fe1fac;
        FUN_03802948(param_1,lVar14 + lVar18 * 8 + 0x20,(iVar9 + 1) * uVar7,1,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_PlayerAccountServiceInternal_<HandleSignInRequestAsync>d__60>__
                    );
        lVar14 = *(long *)(param_1 + 0x20);
        if (lVar14 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_05fe1fac;
        FUN_038027d0(param_1,lVar14 + lVar18 * 8 + 0x20,
                     *(int *)(param_1 + 0x2c) * uVar7 * *(int *)(param_1 + 0x28),1,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<SignInResponse>,_AuthenticationServiceInternal_<HandleSignInRequestAsync>d__136>__
                    );
        uVar21 = uVar21 + 1;
        uStack_a0 = CONCAT44(uVar21,(undefined4)uStack_a0);
        if (2 < (int)uVar21) goto code_r0x05fe1f60;
        goto LAB_05fe1920;
      }
      lVar14 = *(long *)(param_1 + 0x10);
      if (lVar14 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_05fe1fac;
      puVar20 = *(undefined8 **)(lVar14 + lVar18 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar20 = (undefined8 *)*puVar20;
      *puVar20 = 0;
      *(undefined4 *)(puVar20 + 2) = 0xffffffff;
      puVar20[1] = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar20 + 0x14) = 0;
      *(undefined8 *)((long)puVar20 + 0x24) = 0;
      *(undefined8 *)((long)puVar20 + 0x1c) = 0;
      *(undefined4 *)((long)puVar20 + 0x2c) = 0;
      lVar14 = *(long *)(param_1 + 0x30);
      if (lVar14 == 0) goto LAB_05fe1f94;
      if (uVar21 < *(uint *)(lVar14 + 0x18)) {
        lVar14 = *(long *)(lVar14 + lVar18 * 8 + 0x20);
        if (lVar14 != 0) {
          puVar20 = (undefined8 *)
                    FUN_0504d8a8(lVar14,0,*(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          local_d0 = 0;
          uStack_c8 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&local_d0,*(undefined8 *)PTR_DAT_069fba08,0,0);
          puVar20[1] = uStack_c8;
          *puVar20 = local_d0;
          LeanTween__value(puVar20,0);
          if (uVar7 != 1) {
            lVar14 = 0x30;
            uVar23 = 1;
            uVar24 = uVar21;
            do {
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05fc6c5c(&local_a8,uVar23 & 0xffffffff,uVar21,0,0);
              plVar10 = (long *)FUN_05fc923c(param_2,&local_a8,0);
              lVar15 = *(long *)(param_1 + 0x30);
              if (lVar15 == 0) goto LAB_05fe1f94;
              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_05fe1fac;
              lVar15 = *(long *)(lVar15 + (long)(int)uVar24 * 8 + 0x20);
              if ((lVar15 == 0) ||
                 (puVar20 = (undefined8 *)
                            FUN_0504d8a8(lVar15,uVar23 & 0xffffffff,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                        ), plVar10 == (long *)0x0)) goto LAB_05fe1f94;
              uVar11 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
              local_d0 = 0;
              uStack_c8 = 0;
              Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                        (&local_d0,uVar11,0,0);
              puVar20[1] = uStack_c8;
              *puVar20 = local_d0;
              LeanTween__value(puVar20,0);
              if (uVar24 == 2) {
                bVar6 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar6) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) !=
                    *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
                bVar6 = FUN_05fc905c(param_2,&local_a8,0);
                lVar15 = *(long *)(param_1 + 0x10);
                if (lVar15 == 0) goto LAB_05fe1f94;
                uVar24 = *(uint *)(lVar15 + 0x18);
                lVar3 = plVar10[2];
                local_98 = 0;
                uStack_90 = 0;
                uStack_89 = 0;
                *(undefined8 *)((ulong)&local_98 | 3) = 0xffffffffffffffff;
                ((undefined8 *)((ulong)&local_98 | 3))[1] = 0xffffffffffffffff;
                if (uVar24 < 3) goto LAB_05fe1fac;
                uVar19 = *(undefined4 *)((long)plVar10 + 0x2c);
                plVar22 = *(long **)(lVar15 + 0x30);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                uVar11 = CONCAT17((undefined1)uStack_89,uStack_90);
                puVar16 = (undefined1 *)(lVar14 + *plVar22);
                puVar16[1] = bVar6 & 1;
                *puVar16 = (char)lVar3;
                uVar24 = 2;
                uVar25 = local_98;
                uVar17 = uStack_89;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException:
                *(undefined2 *)(puVar16 + 2) = 0;
                *(undefined8 *)(puVar16 + 0xc) = uVar13;
                *(undefined8 *)(puVar16 + 4) = uVar12;
                puVar16[0x14] = 0;
                *(undefined8 *)(puVar16 + 0x1d) = uVar11;
                *(undefined8 *)(puVar16 + 0x15) = uVar25;
                *(undefined4 *)(puVar16 + 0x24) = uVar17;
                *(undefined4 *)(puVar16 + 0x28) = uVar19;
                *(undefined4 *)(puVar16 + 0x2c) = 0;
              }
              else {
                if (uVar24 == 1) {
                  bVar6 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
                  if ((bVar6 <= *(byte *)(*plVar10 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) ==
                      *(long *)Method_System_Array_Empty<Exception>__)) {
                    bVar6 = FUN_05fc905c(param_2,&local_a8,0);
                    lVar15 = *(long *)(param_1 + 0x10);
                    if (lVar15 != 0) {
                      uVar24 = *(uint *)(lVar15 + 0x18);
                      lVar3 = plVar10[2];
                      local_80 = 0;
                      uStack_78 = 0;
                      uStack_71 = 0;
                      *(undefined8 *)((ulong)&local_80 | 3) = 0xffffffffffffffff;
                      ((undefined8 *)((ulong)&local_80 | 3))[1] = 0xffffffffffffffff;
                      if (uVar21 < uVar24) {
                        uVar19 = *(undefined4 *)((long)plVar10 + 0x2c);
                        plVar22 = *(long **)(lVar15 + lVar18 * 8 + 0x20);
                        if ((*(ushort *)
                              (*(long *)(*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                        + 0x20) + 0x135) & 1) == 0) {
                          FUN_02dcfd18();
                        }
                        uVar11 = CONCAT17((undefined1)uStack_71,uStack_78);
                        puVar16 = (undefined1 *)(lVar14 + *plVar22);
                        puVar16[1] = bVar6 & 1;
                        *puVar16 = (char)lVar3;
                        uVar25 = local_80;
                        uVar17 = uStack_71;
                        uVar24 = uVar21;
                        goto 
                        Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException
                        ;
                      }
                      goto LAB_05fe1fac;
                    }
                  }
                  goto LAB_05fe1f94;
                }
                if (uVar24 != 0) {
                  uVar12 = FUN_054e5768((long)&uStack_a0 + 4,0);
                  uVar13 = thunk_FUN_02dfd288(
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_ChannelSession_<ConnectAsync>d__45>__
                                             );
                  uVar12 = FUN_05362cb4(uVar13,uVar12,0);
                  thunk_FUN_02dfd288(PTR_DAT_069fcb10);
                  uVar13 = thunk_FUN_02dd3144();
                  Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                            (uVar13,uVar12,0);
                  uVar12 = thunk_FUN_02dfd288(
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_Client_<SubscribeAsync>d__45>__
                                             );
                  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96724(uVar13,uVar12);
                  }
                  goto LAB_05fe203c;
                }
                FUN_05fc1afc(param_2,&local_a8,&local_c0,0);
                bVar6 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
                if ((*(byte *)(*plVar10 + 0x130) < bVar6) ||
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar6 * 8 + -8) !=
                    *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
                bVar6 = FUN_05fc905c(param_2,&local_a8,0);
                uVar25 = uStack_b8;
                uVar11 = local_c0;
                lVar15 = *(long *)(param_1 + 0x10);
                if (lVar15 == 0) goto LAB_05fe1f94;
                if (*(uint *)(lVar15 + 0x18) <= uVar21) goto LAB_05fe1fac;
                lVar3 = plVar10[2];
                uVar19 = *(undefined4 *)((long)plVar10 + 0x2c);
                uVar1 = *(undefined1 *)((long)plVar10 + 0x96);
                lVar4 = plVar10[0x15];
                uVar5 = local_b0._4_1_;
                plVar22 = *(long **)(lVar15 + lVar18 * 8 + 0x20);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                puVar16 = (undefined1 *)(lVar14 + *plVar22);
                *puVar16 = (char)lVar3;
                puVar16[1] = bVar6 & 1;
                *(undefined2 *)(puVar16 + 2) = 0;
                *(undefined8 *)(puVar16 + 0xc) = uVar13;
                *(undefined8 *)(puVar16 + 4) = uVar12;
                *(undefined4 *)(puVar16 + 0x14) = 0;
                *(undefined8 *)(puVar16 + 0x20) = uVar25;
                *(undefined8 *)(puVar16 + 0x18) = uVar11;
                *(undefined4 *)(puVar16 + 0x28) = uVar19;
                puVar16[0x2c] = uVar1;
                puVar16[0x2d] = (char)lVar4;
                puVar16[0x2e] = uVar5;
                puVar16[0x2f] = 0;
                uVar24 = uVar21;
              }
              uVar19 = *(undefined4 *)((long)plVar10 + 0x1c);
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              iVar8 = FUN_054e9164(iVar8,uVar19,0);
              iVar9 = FUN_054e9164(iVar9,(int)plVar10[3],0);
              uVar23 = uVar23 + 1;
              lVar14 = lVar14 + 0x30;
            } while (uVar7 != uVar23);
          }
          goto LAB_05fe1ec0;
        }
        goto LAB_05fe1f94;
      }
    }
LAB_05fe1fac:
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    goto LAB_05fe203c;
  }
LAB_05fe1f94:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x05fe1f60:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
  goto LAB_05fe203c;
}


