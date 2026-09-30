/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_tts_injection_started
ENTRY_POINT: 05fe18bc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_tts_injection_started
               (void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  long unaff_x20;
  long unaff_x21;
  uint uVar20;
  long *plVar21;
  long unaff_x23;
  ulong uVar22;
  uint uVar23;
  undefined8 uVar24;
  long in_stack_00000010;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 uStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined7 uStack00000000000000b0;
  undefined1 uStack00000000000000b7;
  undefined8 in_stack_000000c0;
  undefined7 uStack00000000000000c8;
  undefined1 uStack00000000000000cf;
  long in_stack_000000d8;
  
  FUN_02d965b8();
  FUN_02d965b8(Method_System_Array_Empty<DataRelation>__);
  FUN_02d965b8(PTR_DAT_069fba08);
  *(undefined1 *)(unaff_x21 + 0x8a3) = 1;
  uVar12 = _UNK_01100158;
  uVar11 = _DAT_01100150;
  in_stack_00000098 = 0;
  _uStack00000000000000a0 = 0;
  in_stack_00000080 = 0;
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  if (unaff_x20 != 0) {
    iVar7 = 0;
    iVar8 = 0;
    uVar20 = 0;
LAB_05fe1920:
    uVar6 = FUN_05fca4bc();
    if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_05fe1f94;
    if (uVar20 < *(uint *)(*(long *)(unaff_x23 + 0x10) + 0x18)) {
      FUN_0380288c();
      lVar13 = *(long *)(unaff_x23 + 0x30);
      if (lVar13 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_05fe1fac;
      lVar17 = (long)(int)uVar20;
      lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_05fe1f94;
      FUN_0504d764(lVar13,uVar6,1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                  );
      if ((int)uVar6 < 1) {
LAB_05fe1ec0:
        *(int *)(unaff_x23 + 0x28) = iVar8 + 1;
        *(int *)(unaff_x23 + 0x2c) = iVar7 + 1;
        if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_05fe1f94;
        if (*(uint *)(*(long *)(unaff_x23 + 0x18) + 0x18) <= uVar20) goto LAB_05fe1fac;
        FUN_03802948();
        if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_05fe1f94;
        if (*(uint *)(*(long *)(unaff_x23 + 0x20) + 0x18) <= uVar20) goto LAB_05fe1fac;
        FUN_038027d0();
        uVar20 = uVar20 + 1;
        _uStack00000000000000a0 = CONCAT44(uVar20,uStack00000000000000a0);
        if (2 < (int)uVar20) goto code_r0x05fe1f60;
        goto LAB_05fe1920;
      }
      lVar13 = *(long *)(unaff_x23 + 0x10);
      if (lVar13 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar13 + 0x18) <= uVar20) goto LAB_05fe1fac;
      puVar19 = *(undefined8 **)(lVar13 + lVar17 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar19 = (undefined8 *)*puVar19;
      *puVar19 = 0;
      *(undefined4 *)(puVar19 + 2) = 0xffffffff;
      puVar19[1] = 0xffffffffffffffff;
      *(undefined8 *)((long)puVar19 + 0x14) = 0;
      *(undefined8 *)((long)puVar19 + 0x24) = 0;
      *(undefined8 *)((long)puVar19 + 0x1c) = 0;
      *(undefined4 *)((long)puVar19 + 0x2c) = 0;
      lVar13 = *(long *)(unaff_x23 + 0x30);
      if (lVar13 == 0) goto LAB_05fe1f94;
      if (uVar20 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = *(long *)(lVar13 + lVar17 * 8 + 0x20);
        if (lVar13 != 0) {
          puVar19 = (undefined8 *)
                    FUN_0504d8a8(lVar13,0,*(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
          puVar19[1] = in_stack_00000078;
          *puVar19 = in_stack_00000070;
          LeanTween__value(puVar19,0);
          if (uVar6 != 1) {
            lVar13 = 0x30;
            uVar22 = 1;
            uVar23 = uVar20;
            do {
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              FUN_05fc6c5c(&stack0x00000098,uVar22 & 0xffffffff,uVar20,0,0);
              plVar9 = (long *)FUN_05fc923c();
              lVar14 = *(long *)(unaff_x23 + 0x30);
              if (lVar14 == 0) goto LAB_05fe1f94;
              if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_05fe1fac;
              lVar14 = *(long *)(lVar14 + (long)(int)uVar23 * 8 + 0x20);
              if ((lVar14 == 0) ||
                 (puVar19 = (undefined8 *)
                            FUN_0504d8a8(lVar14,uVar22 & 0xffffffff,
                                         *(undefined8 *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                        ), plVar9 == (long *)0x0)) goto LAB_05fe1f94;
              uVar10 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
              in_stack_00000070 = 0;
              in_stack_00000078 = 0;
              Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                        (&stack0x00000070,uVar10,0,0);
              puVar19[1] = in_stack_00000078;
              *puVar19 = in_stack_00000070;
              LeanTween__value(puVar19,0);
              if (uVar23 == 2) {
                bVar5 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
                    *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
                bVar5 = FUN_05fc905c();
                lVar14 = *(long *)(unaff_x23 + 0x10);
                if (lVar14 == 0) goto LAB_05fe1f94;
                uVar23 = *(uint *)(lVar14 + 0x18);
                lVar2 = plVar9[2];
                in_stack_000000a8 = 0;
                uStack00000000000000b0 = 0;
                _uStack00000000000000b7 = 0;
                *(undefined8 *)((ulong)&stack0x000000a8 | 3) = 0xffffffffffffffff;
                ((undefined8 *)((ulong)&stack0x000000a8 | 3))[1] = 0xffffffffffffffff;
                if (uVar23 < 3) goto LAB_05fe1fac;
                uVar18 = *(undefined4 *)((long)plVar9 + 0x2c);
                plVar21 = *(long **)(lVar14 + 0x30);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                uVar10 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
                puVar15 = (undefined1 *)(lVar13 + *plVar21);
                puVar15[1] = bVar5 & 1;
                *puVar15 = (char)lVar2;
                uVar23 = 2;
                uVar24 = in_stack_000000a8;
                uVar16 = _uStack00000000000000b7;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException:
                *(undefined2 *)(puVar15 + 2) = 0;
                *(undefined8 *)(puVar15 + 0xc) = uVar12;
                *(undefined8 *)(puVar15 + 4) = uVar11;
                puVar15[0x14] = 0;
                *(undefined8 *)(puVar15 + 0x1d) = uVar10;
                *(undefined8 *)(puVar15 + 0x15) = uVar24;
                *(undefined4 *)(puVar15 + 0x24) = uVar16;
                *(undefined4 *)(puVar15 + 0x28) = uVar18;
                *(undefined4 *)(puVar15 + 0x2c) = 0;
              }
              else {
                if (uVar23 == 1) {
                  bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
                  if ((bVar5 <= *(byte *)(*plVar9 + 0x130)) &&
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) ==
                      *(long *)Method_System_Array_Empty<Exception>__)) {
                    bVar5 = FUN_05fc905c();
                    lVar14 = *(long *)(unaff_x23 + 0x10);
                    if (lVar14 != 0) {
                      uVar23 = *(uint *)(lVar14 + 0x18);
                      lVar2 = plVar9[2];
                      in_stack_000000c0 = 0;
                      uStack00000000000000c8 = 0;
                      _uStack00000000000000cf = 0;
                      *(undefined8 *)((ulong)&stack0x000000c0 | 3) = 0xffffffffffffffff;
                      ((undefined8 *)((ulong)&stack0x000000c0 | 3))[1] = 0xffffffffffffffff;
                      if (uVar20 < uVar23) {
                        uVar18 = *(undefined4 *)((long)plVar9 + 0x2c);
                        plVar21 = *(long **)(lVar14 + lVar17 * 8 + 0x20);
                        if ((*(ushort *)
                              (*(long *)(*(long *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                        + 0x20) + 0x135) & 1) == 0) {
                          FUN_02dcfd18();
                        }
                        uVar10 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
                        puVar15 = (undefined1 *)(lVar13 + *plVar21);
                        puVar15[1] = bVar5 & 1;
                        *puVar15 = (char)lVar2;
                        uVar24 = in_stack_000000c0;
                        uVar16 = _uStack00000000000000cf;
                        uVar23 = uVar20;
                        goto 
                        Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException
                        ;
                      }
                      goto LAB_05fe1fac;
                    }
                  }
                  goto LAB_05fe1f94;
                }
                if (uVar23 != 0) {
                  uVar11 = FUN_054e5768((long)&stack0x000000a0 + 4,0);
                  uVar12 = thunk_FUN_02dfd288(
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_ChannelSession_<ConnectAsync>d__45>__
                                             );
                  uVar11 = FUN_05362cb4(uVar12,uVar11,0);
                  thunk_FUN_02dfd288(PTR_DAT_069fcb10);
                  uVar12 = thunk_FUN_02dd3144();
                  Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                            (uVar12,uVar11,0);
                  uVar11 = thunk_FUN_02dfd288(
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_Client_<SubscribeAsync>d__45>__
                                             );
                  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96724(uVar12,uVar11);
                  }
                  goto LAB_05fe203c;
                }
                FUN_05fc1afc();
                bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
                if ((*(byte *)(*plVar9 + 0x130) < bVar5) ||
                   (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar5 * 8 + -8) !=
                    *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
                bVar5 = FUN_05fc905c();
                uVar24 = in_stack_00000088;
                uVar10 = in_stack_00000080;
                lVar14 = *(long *)(unaff_x23 + 0x10);
                if (lVar14 == 0) goto LAB_05fe1f94;
                if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_05fe1fac;
                lVar2 = plVar9[2];
                uVar18 = *(undefined4 *)((long)plVar9 + 0x2c);
                uVar1 = *(undefined1 *)((long)plVar9 + 0x96);
                lVar3 = plVar9[0x15];
                uVar4 = in_stack_00000090._4_1_;
                plVar21 = *(long **)(lVar14 + lVar17 * 8 + 0x20);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                puVar15 = (undefined1 *)(lVar13 + *plVar21);
                *puVar15 = (char)lVar2;
                puVar15[1] = bVar5 & 1;
                *(undefined2 *)(puVar15 + 2) = 0;
                *(undefined8 *)(puVar15 + 0xc) = uVar12;
                *(undefined8 *)(puVar15 + 4) = uVar11;
                *(undefined4 *)(puVar15 + 0x14) = 0;
                *(undefined8 *)(puVar15 + 0x20) = uVar24;
                *(undefined8 *)(puVar15 + 0x18) = uVar10;
                *(undefined4 *)(puVar15 + 0x28) = uVar18;
                puVar15[0x2c] = uVar1;
                puVar15[0x2d] = (char)lVar3;
                puVar15[0x2e] = uVar4;
                puVar15[0x2f] = 0;
                uVar23 = uVar20;
              }
              uVar18 = *(undefined4 *)((long)plVar9 + 0x1c);
              if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              iVar7 = FUN_054e9164(iVar7,uVar18,0);
              iVar8 = FUN_054e9164(iVar8,(int)plVar9[3],0);
              uVar22 = uVar22 + 1;
              lVar13 = lVar13 + 0x30;
            } while (uVar6 != uVar22);
          }
          goto LAB_05fe1ec0;
        }
        goto LAB_05fe1f94;
      }
    }
LAB_05fe1fac:
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    goto LAB_05fe203c;
  }
LAB_05fe1f94:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x05fe1f60:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
    return;
  }
  goto LAB_05fe203c;
}


