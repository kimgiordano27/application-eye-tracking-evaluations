/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
ENTRY_POINT: 05fdeafc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_8
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_tx_no_session_t_sessiongroup_handle_set
               (void *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  short *psVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  char cVar9;
  long lVar10;
  void *unaff_x20;
  long unaff_x22;
  long lVar11;
  int iVar12;
  int iVar13;
  long unaff_x24;
  long unaff_x25;
  short *psVar14;
  ulong uVar15;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  int in_stack_0000039c;
  
  memcpy(param_1,unaff_x20,0x2a8);
  memcpy(&stack0x000002dc,&stack0x00000100,0xc4);
  if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__ +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (0 < in_stack_0000039c) {
    if (unaff_x25 == 0) goto LAB_05fdf0bc;
    lVar10 = *(long *)(unaff_x25 + 0x68);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyHandler_<JoinLobbyByCodeAsync>d__84>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    *(undefined4 *)((long)unaff_x20 + 0x2a4) = *(undefined4 *)(lVar10 + 8);
  }
  iVar12 = *(int *)(unaff_x24 + 0x3c);
  *(undefined8 *)(unaff_x22 + 0x44) = 0;
  *(undefined8 *)(unaff_x22 + 0x3c) = 0;
  if ((iVar12 == 0) && (*(int *)(unaff_x24 + 0x44) == 0)) {
    iVar12 = *(int *)((long)unaff_x20 + 0x2a8);
    *(undefined1 *)(unaff_x24 + 0x7b) = 0;
    *(int *)(unaff_x24 + 0x24) = iVar12 + -1;
    return;
  }
  if (*(char *)(unaff_x24 + 0x7d) == '\0') {
    cVar9 = '\0';
    if (*(char *)((long)unaff_x20 + 0x2c0) != '\0') {
      FUN_05fdf0c0();
      cVar9 = *(char *)(unaff_x24 + 0x7d);
      iVar12 = *(int *)(unaff_x24 + 0x3c);
    }
  }
  else {
    cVar9 = '\x01';
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_063804f4(&stack0x00000030,iVar12 + -cVar9,0);
  cVar5 = DAT_06dc487b;
  *(undefined8 *)(unaff_x22 + 0x2c) = in_stack_00000038;
  *(undefined8 *)(unaff_x22 + 0x24) = in_stack_00000030;
  *(undefined8 *)(unaff_x22 + 0x3c) = in_stack_00000048;
  *(undefined8 *)(unaff_x22 + 0x34) = in_stack_00000040;
  if (cVar5 == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487b = '\x01';
  }
  if (unaff_x25 == 0) {
LAB_05fdf0bc:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar12 = *(int *)(unaff_x24 + 0x38);
  uVar1 = *(uint *)(unaff_x24 + 0x3c);
  lVar11 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_02dcfd74(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = FUN_036ee4c4(*(undefined8 *)(unaff_x25 + 0x40),*(undefined8 *)(lVar10 + 0x10));
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar2 = PTR_DAT_06a0f5d8;
  if ((int)uVar1 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar1 != 0) {
    lVar10 = lVar10 + (long)iVar12 * 0x18;
    uVar15 = 0;
    do {
      if (((int)uVar15 != 0) || (*(char *)(unaff_x24 + 0x7d) == '\0')) {
        iVar12 = 0;
        lVar11 = lVar10 + uVar15 * 0x18;
        while( true ) {
          memcpy(&stack0x000002dc,(void *)((long)unaff_x20 + 0xd0),0xc4);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (in_stack_0000039c <= iVar12) break;
          memcpy(&stack0x000002dc,(void *)((long)unaff_x20 + 0xd0),0xc4);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          psVar14 = (short *)FUN_03b5343c(&stack0x000002dc,iVar12,*(undefined8 *)puVar3);
          if (DAT_06dc4939 == '\0') {
            FUN_02d965b8(puVar2);
            DAT_06dc4939 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (((*(short *)(lVar10 + uVar15 * 0x18) == *psVar14) &&
              (*(int *)(psVar14 + 8) == *(int *)(lVar11 + 0x10))) &&
             (*(int *)(psVar14 + 10) == *(int *)(lVar11 + 0x14)))
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_participant_uri_set
          ;
          iVar12 = iVar12 + 1;
        }
        iVar12 = -1;

        Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_participant_uri_set
        :
        if (*(int *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__ +
                    0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_06380640(&stack0x000003c4,(int)uVar15 + (int)-cVar9,iVar12,0);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_063804f4(&stack0x00000030,*(undefined4 *)(unaff_x24 + 0x44),0);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  iVar12 = *(int *)(unaff_x24 + 0x40);
  uVar1 = *(uint *)(unaff_x24 + 0x44);
  lVar11 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_02dcfd74(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  lVar10 = FUN_036ee4c4(*(undefined8 *)(unaff_x25 + 0x40),*(undefined8 *)(lVar10 + 0x10));
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar2 = PTR_DAT_06a0f5d8;
  if ((int)uVar1 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar1 != 0) {
    uVar15 = 0;
    do {
      iVar13 = 0;
      psVar14 = (short *)(lVar10 + (long)iVar12 * 0x18 + uVar15 * 0x18);
      while( true ) {
        memcpy(&stack0x000002dc,(void *)((long)unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_0000039c <= iVar13) break;
        memcpy(&stack0x000002dc,(void *)((long)unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        psVar6 = (short *)FUN_03b5343c(&stack0x000002dc,iVar13,*(undefined8 *)puVar3);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar2);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar14 == *psVar6) && (*(int *)(psVar6 + 8) == *(int *)(psVar14 + 8))) &&
           (*(int *)(psVar6 + 10) == *(int *)(psVar14 + 10))) goto LAB_05fdef70;
        iVar13 = iVar13 + 1;
      }
      iVar13 = -1;
LAB_05fdef70:
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06380640(&stack0x000003a0,uVar15 & 0xffffffff,iVar13,0);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar1);
  }
  if (*(int *)((long)unaff_x20 + 0x2a8) != 0) {
    uVar7 = FUN_042ca320(unaff_x25 + 0x68,
                         *(int *)((long)unaff_x20 + 0x2a8) + *(int *)((long)unaff_x20 + 0x2a4) + -1,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyHandler_<CreateOrJoinLobbyAsync>d__76>__
                        );
    uVar15 = FUN_05fd5a04(&stack0x000003a0,uVar7,0);
    if ((uVar15 & 1) != 0) {
      uVar8 = 0;
      goto LAB_05fdf078;
    }
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_RelayHandler_<JoinAllocationAsync>d__17>__
  ;
  FUN_042ca4b0(unaff_x25 + 0x68,&stack0x000003a0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyChannel_<ProcessEvent>d__18>__
              );
  lVar11 = *(long *)puVar2;
  lVar10 = *(long *)(lVar11 + 0x38);
  if (lVar10 == 0) {
    FUN_02dcfd74(lVar11);
    lVar10 = *(long *)(lVar11 + 0x38);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar10 + 8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  *(int *)((long)unaff_x20 + 0x2a8) = *(int *)((long)unaff_x20 + 0x2a8) + 1;
  uVar8 = 1;
LAB_05fdf078:
  *(undefined1 *)(unaff_x24 + 0x7b) = uVar8;
  *(int *)(unaff_x24 + 0x24) = *(int *)((long)unaff_x20 + 0x2a8) + -1;
  return;
}


