/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE.SWIGExceptionHelper$$SetPendingArithmeticException
ENTRY_POINT: 05fe1dc0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_17;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArithmeticException
               (void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  int unaff_w21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  int unaff_w28;
  uint uVar15;
  long in_stack_00000010;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
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
  
code_r0x05fe1dc0:
  bVar5 = FUN_05fc905c();
  lVar9 = *(long *)(unaff_x23 + 0x10);
  if (lVar9 != 0) {
    uVar15 = *(uint *)(lVar9 + 0x18);
    lVar3 = unaff_x26[2];
    in_stack_000000a8 = 0;
    uStack00000000000000b0 = 0;
    _uStack00000000000000b7 = 0;
    *in_stack_00000048 = 0xffffffffffffffff;
    in_stack_00000048[1] = 0xffffffffffffffff;
    if (uVar15 < 3) {
LAB_05fe1fac:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      goto LAB_05fe203c;
    }
    uVar12 = *(undefined4 *)((long)unaff_x26 + 0x2c);
    plVar14 = *(long **)(lVar9 + 0x30);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar7 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
    puVar10 = (undefined1 *)(unaff_x24 + *plVar14);
    puVar10[1] = bVar5 & 1;
    *puVar10 = (char)lVar3;
    uVar8 = in_stack_000000a8;
    uVar11 = _uStack00000000000000b7;
    uVar15 = 2;
    while( true ) {
      *(undefined2 *)(puVar10 + 2) = 0;
      *(undefined8 *)(puVar10 + 0xc) = in_stack_00000058;
      *(undefined8 *)(puVar10 + 4) = in_stack_00000050;
      puVar10[0x14] = 0;
      *(undefined8 *)(puVar10 + 0x1d) = uVar7;
      *(undefined8 *)(puVar10 + 0x15) = uVar8;
      *(undefined4 *)(puVar10 + 0x24) = uVar11;
      *(undefined4 *)(puVar10 + 0x28) = uVar12;
      *(undefined4 *)(puVar10 + 0x2c) = 0;
      while( true ) {
        uVar12 = *(undefined4 *)((long)unaff_x26 + 0x1c);
        if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        unaff_w28 = FUN_054e9164(unaff_w28,uVar12,0);
        unaff_w21 = FUN_054e9164(unaff_w21,(int)unaff_x26[3],0);
        unaff_x25 = unaff_x25 + 1;
        unaff_x24 = unaff_x24 + 0x30;
        if (in_stack_00000060 == unaff_x25) {
          do {
            do {
              *(int *)(unaff_x23 + 0x28) = unaff_w21 + 1;
              *(int *)(unaff_x23 + 0x2c) = unaff_w28 + 1;
              if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_05fe1f94;
              if (*(uint *)(*(long *)(unaff_x23 + 0x18) + 0x18) <= unaff_w22) goto LAB_05fe1fac;
              FUN_03802948();
              if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_05fe1f94;
              if (*(uint *)(*(long *)(unaff_x23 + 0x20) + 0x18) <= unaff_w22) goto LAB_05fe1fac;
              FUN_038027d0();
              uVar15 = unaff_w22 + 1;
              in_stack_000000a0._4_4_ = uVar15;
              if (2 < (int)uVar15) {
                if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                  return;
                }
                goto LAB_05fe203c;
              }
              uVar6 = FUN_05fca4bc();
              if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_05fe1f94;
              if (*(uint *)(*(long *)(unaff_x23 + 0x10) + 0x18) <= uVar15) goto LAB_05fe1fac;
              FUN_0380288c();
              lVar9 = *(long *)(unaff_x23 + 0x30);
              if (lVar9 == 0) goto LAB_05fe1f94;
              if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_05fe1fac;
              in_stack_00000068 = (long)(int)uVar15;
              lVar9 = *(long *)(lVar9 + in_stack_00000068 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_05fe1f94;
              FUN_0504d764(lVar9,uVar6,1,
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                          );
              unaff_w22 = uVar15;
            } while ((int)uVar6 < 1);
            lVar9 = *(long *)(unaff_x23 + 0x10);
            if (lVar9 == 0) goto LAB_05fe1f94;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_05fe1fac;
            puVar13 = *(undefined8 **)(lVar9 + in_stack_00000068 * 8 + 0x20);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            puVar13 = (undefined8 *)*puVar13;
            *puVar13 = 0;
            *(undefined4 *)(puVar13 + 2) = 0xffffffff;
            puVar13[1] = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar13 + 0x14) = 0;
            *(undefined8 *)((long)puVar13 + 0x24) = 0;
            *(undefined8 *)((long)puVar13 + 0x1c) = 0;
            *(undefined4 *)((long)puVar13 + 0x2c) = 0;
            lVar9 = *(long *)(unaff_x23 + 0x30);
            if (lVar9 == 0) goto LAB_05fe1f94;
            if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_05fe1fac;
            lVar9 = *(long *)(lVar9 + in_stack_00000068 * 8 + 0x20);
            if (lVar9 == 0) goto LAB_05fe1f94;
            puVar13 = (undefined8 *)
                      FUN_0504d8a8(lVar9,0,*(undefined8 *)
                                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                  );
            in_stack_00000070 = 0;
            in_stack_00000078 = 0;
            Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                      (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
            puVar13[1] = in_stack_00000078;
            *puVar13 = in_stack_00000070;
            LeanTween__value(puVar13,0);
          } while (uVar6 == 1);
          in_stack_00000060 = (ulong)uVar6;
          unaff_x24 = 0x30;
          unaff_x25 = 1;
        }
        if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_05fc6c5c(&stack0x00000098,unaff_x25 & 0xffffffff,unaff_w22,0,0);
        unaff_x26 = (long *)FUN_05fc923c();
        lVar9 = *(long *)(unaff_x23 + 0x30);
        if (lVar9 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar9 + 0x18) <= uVar15) goto LAB_05fe1fac;
        lVar9 = *(long *)(lVar9 + (long)(int)uVar15 * 8 + 0x20);
        if ((lVar9 == 0) ||
           (puVar13 = (undefined8 *)
                      FUN_0504d8a8(lVar9,unaff_x25 & 0xffffffff,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                  ), unaff_x26 == (long *)0x0)) goto LAB_05fe1f94;
        uVar7 = (**(code **)(*unaff_x26 + 0x188))(unaff_x26,*(undefined8 *)(*unaff_x26 + 400));
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                  (&stack0x00000070,uVar7,0,0);
        puVar13[1] = in_stack_00000078;
        *puVar13 = in_stack_00000070;
        LeanTween__value(puVar13,0);
        if (uVar15 == 2) {
          bVar5 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
          if ((*(byte *)(*unaff_x26 + 0x130) < bVar5) ||
             (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar5 * 8 + -8) !=
              *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
          goto code_r0x05fe1dc0;
        }
        if (uVar15 == 1) break;
        if (uVar15 != 0) {
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
        if ((*(byte *)(*unaff_x26 + 0x130) < bVar5) ||
           (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar5 * 8 + -8) !=
            *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
        bVar5 = FUN_05fc905c();
        uVar4 = in_stack_00000090._4_1_;
        uVar8 = in_stack_00000088;
        uVar7 = in_stack_00000080;
        lVar9 = *(long *)(unaff_x23 + 0x10);
        if (lVar9 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto LAB_05fe1fac;
        lVar3 = unaff_x26[2];
        uVar12 = *(undefined4 *)((long)unaff_x26 + 0x2c);
        uVar1 = *(undefined1 *)((long)unaff_x26 + 0x96);
        lVar2 = unaff_x26[0x15];
        plVar14 = *(long **)(lVar9 + in_stack_00000068 * 8 + 0x20);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar10 = (undefined1 *)(unaff_x24 + *plVar14);
        *puVar10 = (char)lVar3;
        puVar10[1] = bVar5 & 1;
        *(undefined2 *)(puVar10 + 2) = 0;
        *(undefined8 *)(puVar10 + 0xc) = in_stack_00000058;
        *(undefined8 *)(puVar10 + 4) = in_stack_00000050;
        *(undefined4 *)(puVar10 + 0x14) = 0;
        *(undefined8 *)(puVar10 + 0x20) = uVar8;
        *(undefined8 *)(puVar10 + 0x18) = uVar7;
        *(undefined4 *)(puVar10 + 0x28) = uVar12;
        puVar10[0x2c] = uVar1;
        puVar10[0x2d] = (char)lVar2;
        puVar10[0x2e] = uVar4;
        puVar10[0x2f] = 0;
        uVar15 = unaff_w22;
      }
      bVar5 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
      if ((*(byte *)(*unaff_x26 + 0x130) < bVar5) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar5 * 8 + -8) !=
          *(long *)Method_System_Array_Empty<Exception>__)) break;
      bVar5 = FUN_05fc905c();
      lVar9 = *(long *)(unaff_x23 + 0x10);
      if (lVar9 == 0) break;
      uVar15 = *(uint *)(lVar9 + 0x18);
      lVar3 = unaff_x26[2];
      in_stack_000000c0 = 0;
      uStack00000000000000c8 = 0;
      _uStack00000000000000cf = 0;
      *in_stack_00000040 = 0xffffffffffffffff;
      in_stack_00000040[1] = 0xffffffffffffffff;
      if (uVar15 <= unaff_w22) goto LAB_05fe1fac;
      uVar12 = *(undefined4 *)((long)unaff_x26 + 0x2c);
      plVar14 = *(long **)(lVar9 + in_stack_00000068 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uVar7 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
      puVar10 = (undefined1 *)(unaff_x24 + *plVar14);
      puVar10[1] = bVar5 & 1;
      *puVar10 = (char)lVar3;
      uVar8 = in_stack_000000c0;
      uVar11 = _uStack00000000000000cf;
      uVar15 = unaff_w22;
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


