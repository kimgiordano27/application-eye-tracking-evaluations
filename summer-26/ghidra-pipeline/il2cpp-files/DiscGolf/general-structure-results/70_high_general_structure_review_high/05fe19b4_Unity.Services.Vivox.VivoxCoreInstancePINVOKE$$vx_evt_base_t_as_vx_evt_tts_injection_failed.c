/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_tts_injection_failed
ENTRY_POINT: 05fe19b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_tts_injection_failed
               (void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  int unaff_w21;
  uint unaff_w22;
  long *plVar15;
  long unaff_x23;
  ulong uVar16;
  uint unaff_w26;
  int unaff_w28;
  uint uVar17;
  long in_stack_00000010;
  uint uStack000000000000001c;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined7 uStack00000000000000b0;
  undefined1 uStack00000000000000b7;
  undefined8 in_stack_000000c0;
  undefined7 uStack00000000000000c8;
  undefined1 uStack00000000000000cf;
  long in_stack_000000d8;
  
  while (uStack000000000000001c = unaff_w22, (int)unaff_w22 < 1) {
LAB_05fe1ec0:
    *(int *)(unaff_x23 + 0x28) = unaff_w21 + 1;
    *(int *)(unaff_x23 + 0x2c) = unaff_w28 + 1;
    if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_05fe1f94;
    if (*(uint *)(*(long *)(unaff_x23 + 0x18) + 0x18) <= unaff_w26) goto LAB_05fe1fac;
    FUN_03802948();
    if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_05fe1f94;
    if (*(uint *)(*(long *)(unaff_x23 + 0x20) + 0x18) <= unaff_w26) goto LAB_05fe1fac;
    FUN_038027d0();
    unaff_w26 = unaff_w26 + 1;
    in_stack_000000a0._4_4_ = unaff_w26;
    if (2 < (int)unaff_w26) {
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
        return;
      }
      goto LAB_05fe203c;
    }
    unaff_w22 = FUN_05fca4bc();
    if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_05fe1f94;
    if (*(uint *)(*(long *)(unaff_x23 + 0x10) + 0x18) <= unaff_w26) goto LAB_05fe1fac;
    FUN_0380288c();
    lVar9 = *(long *)(unaff_x23 + 0x30);
    if (lVar9 == 0) goto LAB_05fe1f94;
    if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
    in_stack_00000068 = (long)(int)unaff_w26;
    lVar9 = *(long *)(lVar9 + in_stack_00000068 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_05fe1f94;
    FUN_0504d764(lVar9,unaff_w22,1,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                );
  }
  lVar9 = *(long *)(unaff_x23 + 0x10);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= unaff_w26) {
LAB_05fe1fac:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_05fe203c;
    }
    puVar14 = *(undefined8 **)(lVar9 + in_stack_00000068 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar14 = (undefined8 *)*puVar14;
    *puVar14 = 0;
    *(undefined4 *)(puVar14 + 2) = 0xffffffff;
    puVar14[1] = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar14 + 0x14) = 0;
    *(undefined8 *)((long)puVar14 + 0x24) = 0;
    *(undefined8 *)((long)puVar14 + 0x1c) = 0;
    *(undefined4 *)((long)puVar14 + 0x2c) = 0;
    lVar9 = *(long *)(unaff_x23 + 0x30);
    if (lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
      lVar9 = *(long *)(lVar9 + in_stack_00000068 * 8 + 0x20);
      if (lVar9 != 0) {
        puVar14 = (undefined8 *)
                  FUN_0504d8a8(lVar9,0,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                              );
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                  (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
        puVar14[1] = in_stack_00000078;
        *puVar14 = in_stack_00000070;
        LeanTween__value(puVar14,0);
        if (unaff_w22 != 1) {
          lVar9 = 0x30;
          uVar16 = 1;
          uVar17 = unaff_w26;
          do {
            if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            FUN_05fc6c5c(&stack0x00000098,uVar16 & 0xffffffff,unaff_w26,0,0);
            plVar6 = (long *)FUN_05fc923c();
            lVar10 = *(long *)(unaff_x23 + 0x30);
            if (lVar10 == 0) goto LAB_05fe1f94;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_05fe1fac;
            lVar10 = *(long *)(lVar10 + (long)(int)uVar17 * 8 + 0x20);
            if ((lVar10 == 0) ||
               (puVar14 = (undefined8 *)
                          FUN_0504d8a8(lVar10,uVar16 & 0xffffffff,
                                       *(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                      ), plVar6 == (long *)0x0)) goto LAB_05fe1f94;
            uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                      (&stack0x00000070,uVar7,0,0);
            puVar14[1] = in_stack_00000078;
            *puVar14 = in_stack_00000070;
            LeanTween__value(puVar14,0);
            if (uVar17 == 2) {
              bVar5 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
              if ((*(byte *)(*plVar6 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
              bVar5 = FUN_05fc905c();
              lVar10 = *(long *)(unaff_x23 + 0x10);
              if (lVar10 == 0) goto LAB_05fe1f94;
              uVar17 = *(uint *)(lVar10 + 0x18);
              lVar2 = plVar6[2];
              in_stack_000000a8 = 0;
              uStack00000000000000b0 = 0;
              _uStack00000000000000b7 = 0;
              *in_stack_00000048 = 0xffffffffffffffff;
              in_stack_00000048[1] = 0xffffffffffffffff;
              if (uVar17 < 3) goto LAB_05fe1fac;
              uVar13 = *(undefined4 *)((long)plVar6 + 0x2c);
              plVar15 = *(long **)(lVar10 + 0x30);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18();
              }
              uVar7 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
              puVar11 = (undefined1 *)(lVar9 + *plVar15);
              puVar11[1] = bVar5 & 1;
              *puVar11 = (char)lVar2;
              uVar17 = 2;
              uVar8 = in_stack_000000a8;
              uVar12 = _uStack00000000000000b7;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException:
              *(undefined2 *)(puVar11 + 2) = 0;
              *(undefined8 *)(puVar11 + 0xc) = in_stack_00000058;
              *(undefined8 *)(puVar11 + 4) = in_stack_00000050;
              puVar11[0x14] = 0;
              *(undefined8 *)(puVar11 + 0x1d) = uVar7;
              *(undefined8 *)(puVar11 + 0x15) = uVar8;
              *(undefined4 *)(puVar11 + 0x24) = uVar12;
              *(undefined4 *)(puVar11 + 0x28) = uVar13;
              *(undefined4 *)(puVar11 + 0x2c) = 0;
            }
            else {
              if (uVar17 == 1) {
                bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
                if ((bVar5 <= *(byte *)(*plVar6 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar5 * 8 + -8) ==
                    *(long *)Method_System_Array_Empty<Exception>__)) {
                  bVar5 = FUN_05fc905c();
                  lVar10 = *(long *)(unaff_x23 + 0x10);
                  if (lVar10 != 0) {
                    uVar17 = *(uint *)(lVar10 + 0x18);
                    lVar2 = plVar6[2];
                    in_stack_000000c0 = 0;
                    uStack00000000000000c8 = 0;
                    _uStack00000000000000cf = 0;
                    *in_stack_00000040 = 0xffffffffffffffff;
                    in_stack_00000040[1] = 0xffffffffffffffff;
                    if (unaff_w26 < uVar17) {
                      uVar13 = *(undefined4 *)((long)plVar6 + 0x2c);
                      plVar15 = *(long **)(lVar10 + in_stack_00000068 * 8 + 0x20);
                      if ((*(ushort *)
                            (*(long *)(*(long *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                      + 0x20) + 0x135) & 1) == 0) {
                        FUN_02dcfd18();
                      }
                      uVar7 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
                      puVar11 = (undefined1 *)(lVar9 + *plVar15);
                      puVar11[1] = bVar5 & 1;
                      *puVar11 = (char)lVar2;
                      uVar8 = in_stack_000000c0;
                      uVar12 = _uStack00000000000000cf;
                      uVar17 = unaff_w26;
                      goto 
                      Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException
                      ;
                    }
                    goto LAB_05fe1fac;
                  }
                }
                goto LAB_05fe1f94;
              }
              if (uVar17 != 0) {
                uVar7 = FUN_054e5768((long)&stack0x000000a0 + 4,0);
                uVar8 = thunk_FUN_02dfd288(
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_ChannelSession_<ConnectAsync>d__45>__
                                          );
                uVar7 = FUN_05362cb4(uVar8,uVar7,0);
                thunk_FUN_02dfd288(PTR_DAT_069fcb10);
                uVar8 = thunk_FUN_02dd3144();
                Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                          (uVar8,uVar7,0);
                uVar7 = thunk_FUN_02dfd288(
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_Client_<SubscribeAsync>d__45>__
                                          );
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96724(uVar8,uVar7);
                }
                goto LAB_05fe203c;
              }
              FUN_05fc1afc();
              bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
              if ((*(byte *)(*plVar6 + 0x130) < bVar5) ||
                 (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar5 * 8 + -8) !=
                  *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
              bVar5 = FUN_05fc905c();
              uVar4 = in_stack_00000090._4_1_;
              uVar8 = in_stack_00000088;
              uVar7 = in_stack_00000080;
              lVar10 = *(long *)(unaff_x23 + 0x10);
              if (lVar10 == 0) goto LAB_05fe1f94;
              if (*(uint *)(lVar10 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
              lVar2 = plVar6[2];
              uVar13 = *(undefined4 *)((long)plVar6 + 0x2c);
              uVar1 = *(undefined1 *)((long)plVar6 + 0x96);
              lVar3 = plVar6[0x15];
              plVar15 = *(long **)(lVar10 + in_stack_00000068 * 8 + 0x20);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02dcfd18();
              }
              puVar11 = (undefined1 *)(lVar9 + *plVar15);
              *puVar11 = (char)lVar2;
              puVar11[1] = bVar5 & 1;
              *(undefined2 *)(puVar11 + 2) = 0;
              *(undefined8 *)(puVar11 + 0xc) = in_stack_00000058;
              *(undefined8 *)(puVar11 + 4) = in_stack_00000050;
              *(undefined4 *)(puVar11 + 0x14) = 0;
              *(undefined8 *)(puVar11 + 0x20) = uVar8;
              *(undefined8 *)(puVar11 + 0x18) = uVar7;
              *(undefined4 *)(puVar11 + 0x28) = uVar13;
              puVar11[0x2c] = uVar1;
              puVar11[0x2d] = (char)lVar3;
              puVar11[0x2e] = uVar4;
              puVar11[0x2f] = 0;
              uVar17 = unaff_w26;
            }
            uVar13 = *(undefined4 *)((long)plVar6 + 0x1c);
            if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            unaff_w28 = FUN_054e9164(unaff_w28,uVar13,0);
            unaff_w21 = FUN_054e9164(unaff_w21,(int)plVar6[3],0);
            uVar16 = uVar16 + 1;
            lVar9 = lVar9 + 0x30;
          } while (unaff_w22 != uVar16);
        }
        goto LAB_05fe1ec0;
      }
    }
  }
LAB_05fe1f94:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


