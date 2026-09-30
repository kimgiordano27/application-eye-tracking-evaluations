/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_session_handle_set
ENTRY_POINT: 05fdecf0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_session_handle_set
               (void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char in_NG;
  char in_OV;
  short *psVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long lVar11;
  ulong uVar12;
  int unaff_w23;
  int iVar13;
  undefined1 unaff_w25;
  short *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  int in_stack_0000039c;
  
  do {
    if (in_NG == in_OV) {
      unaff_w23 = -1;

      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_participant_uri_set
      :
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06380640(&stack0x000003c4,(int)unaff_x27 + in_stack_00000018._4_4_,unaff_w23,0);
      do {
        unaff_x27 = unaff_x27 + 1;
        if (unaff_x27 == in_stack_00000028) {
          in_stack_00000050 = 0;
          in_stack_00000038 = 0;
          in_stack_00000030 = 0;
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          FUN_063804f4(&stack0x00000030,*(undefined4 *)(in_stack_00000020 + 0x44),0);
          if (DAT_06dc487e == '\0') {
            FUN_02d965b8(
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
                        );
            DAT_06dc487e = '\x01';
          }
          iVar1 = *(int *)(in_stack_00000020 + 0x40);
          uVar2 = *(uint *)(in_stack_00000020 + 0x44);
          lVar11 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__
          ;
          lVar10 = *(long *)(lVar11 + 0x38);
          if (lVar10 == 0) {
            FUN_02dcfd74(lVar11);
            lVar10 = *(long *)(lVar11 + 0x38);
          }
          lVar10 = FUN_036ee4c4(*(undefined8 *)(in_stack_00000008 + 0x40),
                                *(undefined8 *)(lVar10 + 0x10));
          puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
          puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
          puVar3 = PTR_DAT_06a0f5d8;
          if ((int)uVar2 < 0) {
            FUN_05508bc8(0);
            goto LAB_05fdefb4;
          }
          if (uVar2 == 0) goto LAB_05fdefb4;
          uVar12 = 0;
          goto LAB_05fdeea0;
        }
      } while (((int)unaff_x27 == 0) && (*(char *)(in_stack_00000020 + 0x7d) != '\0'));
      unaff_x26 = (short *)(in_stack_00000010 + unaff_x27 * 0x18);
      unaff_w23 = 0;
      unaff_x19 = in_stack_00000010 + unaff_x27 * 0x18;
    }
    else {
      memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      psVar6 = (short *)FUN_03b5343c(&stack0x000002dc,unaff_w23,*unaff_x21);
      if (*(char *)(unaff_x28 + 0x939) == '\0') {
        FUN_02d965b8();
        *(undefined1 *)(unaff_x28 + 0x939) = unaff_w25;
      }
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (((*unaff_x26 == *psVar6) && (*(int *)(psVar6 + 8) == *(int *)(unaff_x19 + 0x10))) &&
         (*(int *)(psVar6 + 10) == *(int *)(unaff_x19 + 0x14)))
      goto 
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_participant_uri_set
      ;
      unaff_w23 = unaff_w23 + 1;
    }
    memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
    if (*(int *)(*unaff_x29 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    in_OV = SBORROW4(unaff_w23,in_stack_0000039c);
    in_NG = unaff_w23 - in_stack_0000039c < 0;
  } while( true );
LAB_05fdeea0:
  do {
    iVar13 = 0;
    psVar6 = (short *)(lVar10 + (long)iVar1 * 0x18 + uVar12 * 0x18);
    while( true ) {
      memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (in_stack_0000039c <= iVar13) break;
      memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      psVar7 = (short *)FUN_03b5343c(&stack0x000002dc,iVar13,*(undefined8 *)puVar4);
      if (DAT_06dc4939 == '\0') {
        FUN_02d965b8(puVar3);
        DAT_06dc4939 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (((*psVar6 == *psVar7) && (*(int *)(psVar7 + 8) == *(int *)(psVar6 + 8))) &&
         (*(int *)(psVar7 + 10) == *(int *)(psVar6 + 10))) goto LAB_05fdef70;
      iVar13 = iVar13 + 1;
    }
    iVar13 = -1;
LAB_05fdef70:
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__ + 0xe4
                ) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_06380640(&stack0x000003a0,uVar12 & 0xffffffff,iVar13,0);
    uVar12 = uVar12 + 1;
  } while (uVar12 != uVar2);
LAB_05fdefb4:
  if (*(int *)(unaff_x20 + 0x2a8) != 0) {
    uVar8 = FUN_042ca320(in_stack_00000008 + 0x68,
                         *(int *)(unaff_x20 + 0x2a8) + *(int *)(unaff_x20 + 0x2a4) + -1,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyHandler_<CreateOrJoinLobbyAsync>d__76>__
                        );
    uVar12 = FUN_05fd5a04(&stack0x000003a0,uVar8,0);
    if ((uVar12 & 1) != 0) {
      uVar9 = 0;
      goto LAB_05fdf078;
    }
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_RelayHandler_<JoinAllocationAsync>d__17>__
  ;
  FUN_042ca4b0(in_stack_00000008 + 0x68,&stack0x000003a0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyChannel_<ProcessEvent>d__18>__
              );
  lVar11 = *(long *)puVar3;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_02dcfd74(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar10 + 8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  *(int *)(unaff_x20 + 0x2a8) = *(int *)(unaff_x20 + 0x2a8) + 1;
  uVar9 = 1;
LAB_05fdf078:
  *(undefined1 *)(in_stack_00000020 + 0x7b) = uVar9;
  *(int *)(in_stack_00000020 + 0x24) = *(int *)(unaff_x20 + 0x2a8) + -1;
  return;
}


