/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_base_t_as_vx_evt_connection_state_changed
ENTRY_POINT: 05fe1a30
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_base_t_as_vx_evt_connection_state_changed
               (long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int unaff_w21;
  uint unaff_w22;
  long *plVar15;
  long unaff_x23;
  ulong uVar16;
  uint unaff_w26;
  int unaff_w28;
  uint uVar17;
  long in_stack_00000010;
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
  
  do {
    if (*(uint *)(param_1 + 0x18) <= unaff_w26) {
LAB_05fe1fac:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_05fe203c;
    }
    lVar6 = *(long *)(param_1 + in_stack_00000068 * 8 + 0x20);
    if (lVar6 == 0) {
LAB_05fe1f94:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar7 = (undefined8 *)
             FUN_0504d8a8(lVar6,0,*(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                         );
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
              (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
    puVar7[1] = in_stack_00000078;
    *puVar7 = in_stack_00000070;
    LeanTween__value(puVar7,0);
    if (unaff_w22 != 1) {
      lVar6 = 0x30;
      uVar16 = 1;
      uVar17 = unaff_w26;
      do {
        if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05fc6c5c(&stack0x00000098,uVar16 & 0xffffffff,unaff_w26,0,0);
        plVar8 = (long *)FUN_05fc923c();
        lVar11 = *(long *)(unaff_x23 + 0x30);
        if (lVar11 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_05fe1fac;
        lVar11 = *(long *)(lVar11 + (long)(int)uVar17 * 8 + 0x20);
        if ((lVar11 == 0) ||
           (puVar7 = (undefined8 *)
                     FUN_0504d8a8(lVar11,uVar16 & 0xffffffff,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                 ), plVar8 == (long *)0x0)) goto LAB_05fe1f94;
        uVar9 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                  (&stack0x00000070,uVar9,0,0);
        puVar7[1] = in_stack_00000078;
        *puVar7 = in_stack_00000070;
        LeanTween__value(puVar7,0);
        if (uVar17 == 2) {
          bVar5 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
          bVar5 = FUN_05fc905c();
          lVar11 = *(long *)(unaff_x23 + 0x10);
          if (lVar11 == 0) goto LAB_05fe1f94;
          uVar17 = *(uint *)(lVar11 + 0x18);
          lVar2 = plVar8[2];
          in_stack_000000a8 = 0;
          uStack00000000000000b0 = 0;
          _uStack00000000000000b7 = 0;
          *in_stack_00000048 = 0xffffffffffffffff;
          in_stack_00000048[1] = 0xffffffffffffffff;
          if (uVar17 < 3) goto LAB_05fe1fac;
          uVar14 = *(undefined4 *)((long)plVar8 + 0x2c);
          plVar15 = *(long **)(lVar11 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          uVar9 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
          puVar12 = (undefined1 *)(lVar6 + *plVar15);
          puVar12[1] = bVar5 & 1;
          *puVar12 = (char)lVar2;
          uVar17 = 2;
          uVar10 = in_stack_000000a8;
          uVar13 = _uStack00000000000000b7;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException:
          *(undefined2 *)(puVar12 + 2) = 0;
          *(undefined8 *)(puVar12 + 0xc) = in_stack_00000058;
          *(undefined8 *)(puVar12 + 4) = in_stack_00000050;
          puVar12[0x14] = 0;
          *(undefined8 *)(puVar12 + 0x1d) = uVar9;
          *(undefined8 *)(puVar12 + 0x15) = uVar10;
          *(undefined4 *)(puVar12 + 0x24) = uVar13;
          *(undefined4 *)(puVar12 + 0x28) = uVar14;
          *(undefined4 *)(puVar12 + 0x2c) = 0;
        }
        else {
          if (uVar17 == 1) {
            bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
            if ((bVar5 <= *(byte *)(*plVar8 + 0x130)) &&
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar5 * 8 + -8) ==
                *(long *)Method_System_Array_Empty<Exception>__)) {
              bVar5 = FUN_05fc905c();
              lVar11 = *(long *)(unaff_x23 + 0x10);
              if (lVar11 != 0) {
                uVar17 = *(uint *)(lVar11 + 0x18);
                lVar2 = plVar8[2];
                in_stack_000000c0 = 0;
                uStack00000000000000c8 = 0;
                _uStack00000000000000cf = 0;
                *in_stack_00000040 = 0xffffffffffffffff;
                in_stack_00000040[1] = 0xffffffffffffffff;
                if (unaff_w26 < uVar17) {
                  uVar14 = *(undefined4 *)((long)plVar8 + 0x2c);
                  plVar15 = *(long **)(lVar11 + in_stack_00000068 * 8 + 0x20);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02dcfd18();
                  }
                  uVar9 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
                  puVar12 = (undefined1 *)(lVar6 + *plVar15);
                  puVar12[1] = bVar5 & 1;
                  *puVar12 = (char)lVar2;
                  uVar10 = in_stack_000000c0;
                  uVar13 = _uStack00000000000000cf;
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
            uVar9 = FUN_054e5768((long)&stack0x000000a0 + 4,0);
            uVar10 = thunk_FUN_02dfd288(
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_ChannelSession_<ConnectAsync>d__45>__
                                       );
            uVar9 = FUN_05362cb4(uVar10,uVar9,0);
            thunk_FUN_02dfd288(PTR_DAT_069fcb10);
            uVar10 = thunk_FUN_02dd3144();
            Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
                      (uVar10,uVar9,0);
            uVar9 = thunk_FUN_02dfd288(
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_Client_<SubscribeAsync>d__45>__
                                      );
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar10,uVar9);
            }
            goto LAB_05fe203c;
          }
          FUN_05fc1afc();
          bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
          bVar5 = FUN_05fc905c();
          uVar4 = in_stack_00000090._4_1_;
          uVar10 = in_stack_00000088;
          uVar9 = in_stack_00000080;
          lVar11 = *(long *)(unaff_x23 + 0x10);
          if (lVar11 == 0) goto LAB_05fe1f94;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
          lVar2 = plVar8[2];
          uVar14 = *(undefined4 *)((long)plVar8 + 0x2c);
          uVar1 = *(undefined1 *)((long)plVar8 + 0x96);
          lVar3 = plVar8[0x15];
          plVar15 = *(long **)(lVar11 + in_stack_00000068 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          puVar12 = (undefined1 *)(lVar6 + *plVar15);
          *puVar12 = (char)lVar2;
          puVar12[1] = bVar5 & 1;
          *(undefined2 *)(puVar12 + 2) = 0;
          *(undefined8 *)(puVar12 + 0xc) = in_stack_00000058;
          *(undefined8 *)(puVar12 + 4) = in_stack_00000050;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          *(undefined8 *)(puVar12 + 0x20) = uVar10;
          *(undefined8 *)(puVar12 + 0x18) = uVar9;
          *(undefined4 *)(puVar12 + 0x28) = uVar14;
          puVar12[0x2c] = uVar1;
          puVar12[0x2d] = (char)lVar3;
          puVar12[0x2e] = uVar4;
          puVar12[0x2f] = 0;
          uVar17 = unaff_w26;
        }
        uVar14 = *(undefined4 *)((long)plVar8 + 0x1c);
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        unaff_w28 = FUN_054e9164(unaff_w28,uVar14,0);
        unaff_w21 = FUN_054e9164(unaff_w21,(int)plVar8[3],0);
        uVar16 = uVar16 + 1;
        lVar6 = lVar6 + 0x30;
      } while (unaff_w22 != uVar16);
    }
    do {
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
      lVar6 = *(long *)(unaff_x23 + 0x30);
      if (lVar6 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
      in_stack_00000068 = (long)(int)unaff_w26;
      lVar6 = *(long *)(lVar6 + in_stack_00000068 * 8 + 0x20);
      if (lVar6 == 0) goto LAB_05fe1f94;
      FUN_0504d764(lVar6,unaff_w22,1,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                  );
    } while ((int)unaff_w22 < 1);
    lVar6 = *(long *)(unaff_x23 + 0x10);
    if (lVar6 == 0) goto LAB_05fe1f94;
    if (*(uint *)(lVar6 + 0x18) <= unaff_w26) goto LAB_05fe1fac;
    puVar7 = *(undefined8 **)(lVar6 + in_stack_00000068 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    puVar7 = (undefined8 *)*puVar7;
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 2) = 0xffffffff;
    puVar7[1] = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar7 + 0x14) = 0;
    *(undefined8 *)((long)puVar7 + 0x24) = 0;
    *(undefined8 *)((long)puVar7 + 0x1c) = 0;
    *(undefined4 *)((long)puVar7 + 0x2c) = 0;
    param_1 = *(long *)(unaff_x23 + 0x30);
    if (param_1 == 0) goto LAB_05fe1f94;
  } while( true );
}


