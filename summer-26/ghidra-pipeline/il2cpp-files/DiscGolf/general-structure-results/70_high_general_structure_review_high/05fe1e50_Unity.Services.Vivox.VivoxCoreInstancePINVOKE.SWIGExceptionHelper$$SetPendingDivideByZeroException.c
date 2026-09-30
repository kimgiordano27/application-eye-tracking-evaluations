/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE.SWIGExceptionHelper$$SetPendingDivideByZeroException
ENTRY_POINT: 05fe1e50
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingDivideByZeroException
               (undefined1 *param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 in_w9;
  undefined4 in_w10;
  undefined8 *puVar12;
  int unaff_w21;
  uint unaff_w22;
  long *plVar13;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  int unaff_w28;
  uint unaff_w29;
  undefined8 uVar14;
  undefined8 uVar15;
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
  
  uVar15 = param_3._8_8_;
  uVar14 = param_3._0_8_;
  uVar9 = param_2._8_8_;
  uVar10 = param_2._0_8_;
code_r0x05fe1e50:
  do {
    *(undefined2 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 0xc) = uVar15;
    *(undefined8 *)(param_1 + 4) = uVar14;
    param_1[0x14] = 0;
    *(undefined8 *)(param_1 + 0x1d) = uVar9;
    *(undefined8 *)(param_1 + 0x15) = uVar10;
    *(undefined4 *)(param_1 + 0x24) = in_w9;
    *(undefined4 *)(param_1 + 0x28) = in_w10;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    while( true ) {
      uVar2 = *(undefined4 *)((long)unaff_x26 + 0x1c);
      if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      unaff_w28 = FUN_054e9164(unaff_w28,uVar2,0);
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
            unaff_w29 = unaff_w22 + 1;
            in_stack_000000a0._4_4_ = unaff_w29;
            if (2 < (int)unaff_w29) {
              if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                return;
              }
              goto LAB_05fe203c;
            }
            uVar8 = FUN_05fca4bc();
            if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_05fe1f94;
            if (*(uint *)(*(long *)(unaff_x23 + 0x10) + 0x18) <= unaff_w29) goto LAB_05fe1fac;
            FUN_0380288c();
            lVar11 = *(long *)(unaff_x23 + 0x30);
            if (lVar11 == 0) goto LAB_05fe1f94;
            if (*(uint *)(lVar11 + 0x18) <= unaff_w29) goto LAB_05fe1fac;
            in_stack_00000068 = (long)(int)unaff_w29;
            lVar11 = *(long *)(lVar11 + in_stack_00000068 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_05fe1f94;
            FUN_0504d764(lVar11,uVar8,1,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                        );
            unaff_w22 = unaff_w29;
          } while ((int)uVar8 < 1);
          lVar11 = *(long *)(unaff_x23 + 0x10);
          if (lVar11 == 0) goto LAB_05fe1f94;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w29) goto LAB_05fe1fac;
          puVar12 = *(undefined8 **)(lVar11 + in_stack_00000068 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          puVar12 = (undefined8 *)*puVar12;
          *puVar12 = 0;
          *(undefined4 *)(puVar12 + 2) = 0xffffffff;
          puVar12[1] = 0xffffffffffffffff;
          *(undefined8 *)((long)puVar12 + 0x14) = 0;
          *(undefined8 *)((long)puVar12 + 0x24) = 0;
          *(undefined8 *)((long)puVar12 + 0x1c) = 0;
          *(undefined4 *)((long)puVar12 + 0x2c) = 0;
          lVar11 = *(long *)(unaff_x23 + 0x30);
          if (lVar11 == 0) goto LAB_05fe1f94;
          if (*(uint *)(lVar11 + 0x18) <= unaff_w29) goto LAB_05fe1fac;
          lVar11 = *(long *)(lVar11 + in_stack_00000068 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_05fe1f94;
          puVar12 = (undefined8 *)
                    FUN_0504d8a8(lVar11,0,*(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                );
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
          puVar12[1] = in_stack_00000078;
          *puVar12 = in_stack_00000070;
          LeanTween__value(puVar12,0);
        } while (uVar8 == 1);
        in_stack_00000060 = (ulong)uVar8;
        unaff_x24 = 0x30;
        unaff_x25 = 1;
      }
      if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_05fc6c5c(&stack0x00000098,unaff_x25 & 0xffffffff,unaff_w22,0,0);
      unaff_x26 = (long *)FUN_05fc923c();
      lVar11 = *(long *)(unaff_x23 + 0x30);
      if (lVar11 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w29) goto LAB_05fe1fac;
      lVar11 = *(long *)(lVar11 + (long)(int)unaff_w29 * 8 + 0x20);
      if ((lVar11 == 0) ||
         (puVar12 = (undefined8 *)
                    FUN_0504d8a8(lVar11,unaff_x25 & 0xffffffff,
                                 *(undefined8 *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                                ), unaff_x26 == (long *)0x0)) goto LAB_05fe1f94;
      uVar9 = (**(code **)(*unaff_x26 + 0x188))(unaff_x26,*(undefined8 *)(*unaff_x26 + 400));
      in_stack_00000070 = 0;
      in_stack_00000078 = 0;
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                (&stack0x00000070,uVar9,0,0);
      puVar12[1] = in_stack_00000078;
      *puVar12 = in_stack_00000070;
      LeanTween__value(puVar12,0);
      uVar14 = in_stack_00000050;
      uVar15 = in_stack_00000058;
      if (unaff_w29 == 2) {
        bVar7 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
        if ((*(byte *)(*unaff_x26 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar7 * 8 + -8) !=
            *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
        bVar7 = FUN_05fc905c();
        lVar11 = *(long *)(unaff_x23 + 0x10);
        if (lVar11 == 0) goto LAB_05fe1f94;
        uVar8 = *(uint *)(lVar11 + 0x18);
        lVar4 = unaff_x26[2];
        in_stack_000000a8 = 0;
        uStack00000000000000b0 = 0;
        _uStack00000000000000b7 = 0;
        *in_stack_00000048 = 0xffffffffffffffff;
        in_stack_00000048[1] = 0xffffffffffffffff;
        if (uVar8 < 3) goto LAB_05fe1fac;
        in_w10 = *(undefined4 *)((long)unaff_x26 + 0x2c);
        plVar13 = *(long **)(lVar11 + 0x30);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        uVar9 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
        param_1 = (undefined1 *)(unaff_x24 + *plVar13);
        param_1[1] = bVar7 & 1;
        *param_1 = (char)lVar4;
        unaff_w29 = 2;
        uVar10 = in_stack_000000a8;
        in_w9 = _uStack00000000000000b7;
        goto code_r0x05fe1e50;
      }
      if (unaff_w29 == 1) break;
      if (unaff_w29 != 0) {
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
      bVar7 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
      if ((*(byte *)(*unaff_x26 + 0x130) < bVar7) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar7 * 8 + -8) !=
          *(long *)Method_System_Array_Empty<DataRelation>__)) goto LAB_05fe1f94;
      bVar7 = FUN_05fc905c();
      uVar6 = in_stack_00000090._4_1_;
      uVar10 = in_stack_00000088;
      uVar9 = in_stack_00000080;
      lVar11 = *(long *)(unaff_x23 + 0x10);
      if (lVar11 == 0) goto LAB_05fe1f94;
      if (*(uint *)(lVar11 + 0x18) <= unaff_w22) goto LAB_05fe1fac;
      lVar4 = unaff_x26[2];
      uVar2 = *(undefined4 *)((long)unaff_x26 + 0x2c);
      uVar3 = *(undefined1 *)((long)unaff_x26 + 0x96);
      lVar5 = unaff_x26[0x15];
      plVar13 = *(long **)(lVar11 + in_stack_00000068 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      puVar1 = (undefined1 *)(unaff_x24 + *plVar13);
      *puVar1 = (char)lVar4;
      puVar1[1] = bVar7 & 1;
      *(undefined2 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 0xc) = in_stack_00000058;
      *(undefined8 *)(puVar1 + 4) = in_stack_00000050;
      *(undefined4 *)(puVar1 + 0x14) = 0;
      *(undefined8 *)(puVar1 + 0x20) = uVar10;
      *(undefined8 *)(puVar1 + 0x18) = uVar9;
      *(undefined4 *)(puVar1 + 0x28) = uVar2;
      puVar1[0x2c] = uVar3;
      puVar1[0x2d] = (char)lVar5;
      puVar1[0x2e] = uVar6;
      puVar1[0x2f] = 0;
      unaff_w29 = unaff_w22;
    }
    bVar7 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
    if ((*(byte *)(*unaff_x26 + 0x130) < bVar7) ||
       (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar7 * 8 + -8) !=
        *(long *)Method_System_Array_Empty<Exception>__)) {
LAB_05fe1f94:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_05fe203c;
    }
    bVar7 = FUN_05fc905c();
    lVar11 = *(long *)(unaff_x23 + 0x10);
    if (lVar11 == 0) goto LAB_05fe1f94;
    uVar8 = *(uint *)(lVar11 + 0x18);
    lVar4 = unaff_x26[2];
    in_stack_000000c0 = 0;
    uStack00000000000000c8 = 0;
    _uStack00000000000000cf = 0;
    *in_stack_00000040 = 0xffffffffffffffff;
    in_stack_00000040[1] = 0xffffffffffffffff;
    if (uVar8 <= unaff_w22) {
LAB_05fe1fac:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    in_w10 = *(undefined4 *)((long)unaff_x26 + 0x2c);
    plVar13 = *(long **)(lVar11 + in_stack_00000068 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    uVar9 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
    param_1 = (undefined1 *)(unaff_x24 + *plVar13);
    param_1[1] = bVar7 & 1;
    *param_1 = (char)lVar4;
    uVar10 = in_stack_000000c0;
    in_w9 = _uStack00000000000000cf;
    unaff_w29 = unaff_w22;
  } while( true );
}


