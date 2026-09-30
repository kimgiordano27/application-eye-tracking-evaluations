/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_device_t
ENTRY_POINT: 05fe1c50
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_9;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_device_t(void)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_w12;
  uint in_w13;
  int unaff_w19;
  undefined8 *puVar10;
  long *plVar11;
  uint unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  byte unaff_w27;
  int unaff_w28;
  undefined1 unaff_w29;
  uint uVar12;
  long in_stack_00000010;
  uint uStack0000000000000020;
  uint uStack0000000000000024;
  undefined1 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
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
  
code_r0x05fe1c50:
  uStack0000000000000020 = in_w13;
  uStack0000000000000024 = in_w12;
  FUN_02dcfd18();
  in_w12 = uStack0000000000000024;
  in_w13 = uStack0000000000000020;
LAB_05fe1c64:
  puVar7 = (undefined1 *)(unaff_x24 + *unaff_x22);
  *puVar7 = unaff_w29;
  puVar7[1] = unaff_w27 & 1;
  *(undefined2 *)(puVar7 + 2) = 0;
  *(undefined8 *)(puVar7 + 0xc) = in_stack_00000058;
  *(undefined8 *)(puVar7 + 4) = in_stack_00000050;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *(undefined8 *)(puVar7 + 0x20) = in_stack_00000038;
  *(undefined8 *)(puVar7 + 0x18) = in_stack_00000030;
  *(undefined4 *)(puVar7 + 0x28) = uStack000000000000002c;
  puVar7[0x2c] = uStack0000000000000028;
  puVar7[0x2d] = (char)in_w12;
  puVar7[0x2e] = (char)in_w13;
  puVar7[0x2f] = 0;
  uVar12 = unaff_w21;
  do {
    uVar9 = *(undefined4 *)((long)unaff_x26 + 0x1c);
    if (*(int *)(*(long *)PTR_DAT_069fbb48 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    unaff_w28 = FUN_054e9164(unaff_w28,uVar9,0);
    unaff_w19 = FUN_054e9164(unaff_w19,(int)unaff_x26[3],0);
    unaff_x25 = unaff_x25 + 1;
    unaff_x24 = unaff_x24 + 0x30;
    if (in_stack_00000060 == unaff_x25) {
      do {
        do {
          *(int *)(unaff_x23 + 0x28) = unaff_w19 + 1;
          *(int *)(unaff_x23 + 0x2c) = unaff_w28 + 1;
          if (*(long *)(unaff_x23 + 0x18) == 0) goto LAB_05fe1f94;
          if (*(uint *)(*(long *)(unaff_x23 + 0x18) + 0x18) <= unaff_w21) goto LAB_05fe1fac;
          FUN_03802948();
          if (*(long *)(unaff_x23 + 0x20) == 0) goto LAB_05fe1f94;
          if (*(uint *)(*(long *)(unaff_x23 + 0x20) + 0x18) <= unaff_w21) goto LAB_05fe1fac;
          FUN_038027d0();
          uVar12 = unaff_w21 + 1;
          in_stack_000000a0._4_4_ = uVar12;
          if (2 < (int)uVar12) {
            if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
              return;
            }
            goto LAB_05fe203c;
          }
          uVar3 = FUN_05fca4bc();
          if (*(long *)(unaff_x23 + 0x10) == 0) goto LAB_05fe1f94;
          if (*(uint *)(*(long *)(unaff_x23 + 0x10) + 0x18) <= uVar12) goto LAB_05fe1fac;
          FUN_0380288c();
          lVar6 = *(long *)(unaff_x23 + 0x30);
          if (lVar6 == 0) goto LAB_05fe1f94;
          if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_05fe1fac;
          in_stack_00000068 = (long)(int)uVar12;
          lVar6 = *(long *)(lVar6 + in_stack_00000068 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_05fe1f94;
          FUN_0504d764(lVar6,uVar3,1,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Response>,_WrappedMatchmakerService_<UpdateBackfillTicketAsync>d__14>__
                      );
          unaff_w21 = uVar12;
        } while ((int)uVar3 < 1);
        lVar6 = *(long *)(unaff_x23 + 0x10);
        if (lVar6 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_05fe1fac;
        puVar10 = *(undefined8 **)(lVar6 + in_stack_00000068 * 8 + 0x20);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        puVar10 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 2) = 0xffffffff;
        puVar10[1] = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar10 + 0x14) = 0;
        *(undefined8 *)((long)puVar10 + 0x24) = 0;
        *(undefined8 *)((long)puVar10 + 0x1c) = 0;
        *(undefined4 *)((long)puVar10 + 0x2c) = 0;
        lVar6 = *(long *)(unaff_x23 + 0x30);
        if (lVar6 == 0) goto LAB_05fe1f94;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_05fe1fac;
        lVar6 = *(long *)(lVar6 + in_stack_00000068 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_05fe1f94;
        puVar10 = (undefined8 *)
                  FUN_0504d8a8(lVar6,0,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                              );
        in_stack_00000070 = 0;
        in_stack_00000078 = 0;
        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                  (&stack0x00000070,*(undefined8 *)PTR_DAT_069fba08,0,0);
        puVar10[1] = in_stack_00000078;
        *puVar10 = in_stack_00000070;
        LeanTween__value(puVar10,0);
      } while (uVar3 == 1);
      in_stack_00000060 = (ulong)uVar3;
      unaff_x24 = 0x30;
      unaff_x25 = 1;
    }
    if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_05fc6c5c(&stack0x00000098,unaff_x25 & 0xffffffff,unaff_w21,0,0);
    unaff_x26 = (long *)FUN_05fc923c();
    lVar6 = *(long *)(unaff_x23 + 0x30);
    if (lVar6 == 0) goto LAB_05fe1f94;
    if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_05fe1fac;
    lVar6 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
    if ((lVar6 == 0) ||
       (puVar10 = (undefined8 *)
                  FUN_0504d8a8(lVar6,unaff_x25 & 0xffffffff,
                               *(undefined8 *)
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Erase<InputActionMap>__
                              ), unaff_x26 == (long *)0x0)) goto LAB_05fe1f94;
    uVar4 = (**(code **)(*unaff_x26 + 0x188))(unaff_x26,*(undefined8 *)(*unaff_x26 + 400));
    in_stack_00000070 = 0;
    in_stack_00000078 = 0;
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
              (&stack0x00000070,uVar4,0,0);
    puVar10[1] = in_stack_00000078;
    *puVar10 = in_stack_00000070;
    LeanTween__value(puVar10,0);
    if (uVar12 == 2) {
      bVar2 = *(byte *)(*(long *)Method_System_Array_Sort<string>__ + 0x130);
      if ((*(byte *)(*unaff_x26 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Array_Sort<string>__)) goto LAB_05fe1f94;
      bVar2 = FUN_05fc905c();
      lVar6 = *(long *)(unaff_x23 + 0x10);
      if (lVar6 == 0) goto LAB_05fe1f94;
      uVar12 = *(uint *)(lVar6 + 0x18);
      lVar1 = unaff_x26[2];
      in_stack_000000a8 = 0;
      uStack00000000000000b0 = 0;
      _uStack00000000000000b7 = 0;
      *in_stack_00000048 = 0xffffffffffffffff;
      in_stack_00000048[1] = 0xffffffffffffffff;
      if (uVar12 < 3) goto LAB_05fe1fac;
      uVar9 = *(undefined4 *)((long)unaff_x26 + 0x2c);
      plVar11 = *(long **)(lVar6 + 0x30);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uVar4 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
      puVar7 = (undefined1 *)(unaff_x24 + *plVar11);
      puVar7[1] = bVar2 & 1;
      *puVar7 = (char)lVar1;
      uVar12 = 2;
      uVar5 = in_stack_000000a8;
      uVar8 = _uStack00000000000000b7;
    }
    else {
      if (uVar12 != 1) break;
      bVar2 = *(byte *)(*(long *)Method_System_Array_Empty<Exception>__ + 0x130);
      if ((*(byte *)(*unaff_x26 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Array_Empty<Exception>__)) goto LAB_05fe1f94;
      bVar2 = FUN_05fc905c();
      lVar6 = *(long *)(unaff_x23 + 0x10);
      if (lVar6 == 0) goto LAB_05fe1f94;
      uVar12 = *(uint *)(lVar6 + 0x18);
      lVar1 = unaff_x26[2];
      in_stack_000000c0 = 0;
      uStack00000000000000c8 = 0;
      _uStack00000000000000cf = 0;
      *in_stack_00000040 = 0xffffffffffffffff;
      in_stack_00000040[1] = 0xffffffffffffffff;
      if (uVar12 <= unaff_w21) goto LAB_05fe1fac;
      uVar9 = *(undefined4 *)((long)unaff_x26 + 0x2c);
      plVar11 = *(long **)(lVar6 + in_stack_00000068 * 8 + 0x20);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uVar4 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
      puVar7 = (undefined1 *)(unaff_x24 + *plVar11);
      puVar7[1] = bVar2 & 1;
      *puVar7 = (char)lVar1;
      uVar5 = in_stack_000000c0;
      uVar8 = _uStack00000000000000cf;
      uVar12 = unaff_w21;
    }
    *(undefined2 *)(puVar7 + 2) = 0;
    *(undefined8 *)(puVar7 + 0xc) = in_stack_00000058;
    *(undefined8 *)(puVar7 + 4) = in_stack_00000050;
    puVar7[0x14] = 0;
    *(undefined8 *)(puVar7 + 0x1d) = uVar4;
    *(undefined8 *)(puVar7 + 0x15) = uVar5;
    *(undefined4 *)(puVar7 + 0x24) = uVar8;
    *(undefined4 *)(puVar7 + 0x28) = uVar9;
    *(undefined4 *)(puVar7 + 0x2c) = 0;
  } while( true );
  if (uVar12 != 0) {
    uVar4 = FUN_054e5768((long)&stack0x000000a0 + 4,0);
    uVar5 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_ChannelSession_<ConnectAsync>d__45>__
                              );
    uVar4 = FUN_05362cb4(uVar5,uVar4,0);
    thunk_FUN_02dfd288(PTR_DAT_069fcb10);
    uVar5 = thunk_FUN_02dd3144();
    Oculus_Avatar2_OvrAvatarDefaultStateListener_AnimationStateChangeDelegate__EndInvoke
              (uVar5,uVar4,0);
    uVar4 = thunk_FUN_02dfd288(
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<string>,_Client_<SubscribeAsync>d__45>__
                              );
    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar5,uVar4);
    }
    goto LAB_05fe203c;
  }
  FUN_05fc1afc();
  bVar2 = *(byte *)(*(long *)Method_System_Array_Empty<DataRelation>__ + 0x130);
  if ((bVar2 <= *(byte *)(*unaff_x26 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_System_Array_Empty<DataRelation>__)) {
    unaff_w27 = FUN_05fc905c();
    lVar6 = *(long *)(unaff_x23 + 0x10);
    if (lVar6 != 0) {
      if (unaff_w21 < *(uint *)(lVar6 + 0x18)) {
        unaff_w29 = (undefined1)unaff_x26[2];
        uStack000000000000002c = *(undefined4 *)((long)unaff_x26 + 0x2c);
        uStack0000000000000028 = *(undefined1 *)((long)unaff_x26 + 0x96);
        in_w12 = (uint)*(byte *)(unaff_x26 + 0x15);
        in_w13 = (uint)in_stack_00000090._4_1_;
        unaff_x22 = *(long **)(lVar6 + in_stack_00000068 * 8 + 0x20);
        in_stack_00000030 = in_stack_00000080;
        in_stack_00000038 = in_stack_00000088;
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Session>,_DaHandler_<CreateAndJoinSessionAsync>d__11>__
                        + 0x20) + 0x135) & 1) == 0) goto code_r0x05fe1c48;
        goto LAB_05fe1c64;
      }
LAB_05fe1fac:
      if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
LAB_05fe203c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_05fe1f94:
  if (*(long *)(in_stack_00000010 + 0x28) == in_stack_000000d8) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  goto LAB_05fe203c;
code_r0x05fe1c48:
  goto code_r0x05fe1c50;
}


