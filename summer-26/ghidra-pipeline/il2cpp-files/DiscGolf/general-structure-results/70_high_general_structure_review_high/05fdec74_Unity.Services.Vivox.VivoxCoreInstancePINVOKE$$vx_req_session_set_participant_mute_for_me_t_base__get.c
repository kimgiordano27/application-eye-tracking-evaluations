/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_participant_mute_for_me_t_base__get
ENTRY_POINT: 05fdec74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_participant_mute_for_me_t_base__get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long in_x9;
  long in_x10;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar8;
  long unaff_x22;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long unaff_x26;
  short *psVar14;
  long lVar15;
  long unaff_x29;
  long *plVar16;
  long in_stack_00000008;
  long lStack0000000000000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  int in_stack_0000039c;
  
  lVar15 = 0;
  plVar16 = *(long **)(unaff_x29 + 0xf80);
  puVar8 = *(undefined8 **)(unaff_x21 + 0xf68);
  plVar9 = *(long **)(unaff_x22 + 0x5d8);
  lStack0000000000000010 = in_x10;
  do {
    if (((int)lVar15 != 0) || (*(char *)(in_stack_00000020 + 0x7d) == '\0')) {
      iVar12 = 0;
      lVar10 = in_x10 + lVar15 * in_x9;
      while( true ) {
        memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_0000039c <= iVar12) break;
        memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*plVar16 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        psVar14 = (short *)FUN_03b5343c(&stack0x000002dc,iVar12,*puVar8);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(plVar9);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*plVar9 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*(short *)(in_x10 + lVar15 * in_x9) == *psVar14) &&
            (*(int *)(psVar14 + 8) == *(int *)(lVar10 + 0x10))) &&
           (*(int *)(psVar14 + 10) == *(int *)(lVar10 + 0x14)))
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
      FUN_06380640(&stack0x000003c4,(int)lVar15 + in_stack_00000018._4_4_,iVar12,0);
      in_x9 = 0x18;
      in_x10 = lStack0000000000000010;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != unaff_x26);
  in_stack_00000050 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  FUN_063804f4(&stack0x00000030,*(undefined4 *)(in_stack_00000020 + 0x44),0);
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  iVar12 = *(int *)(in_stack_00000020 + 0x40);
  uVar1 = *(uint *)(in_stack_00000020 + 0x44);
  lVar10 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar15 = *(long *)(lVar10 + 0x38);
  if (lVar15 == 0) {
    FUN_02dcfd74(lVar10);
    lVar15 = *(long *)(lVar10 + 0x38);
  }
  lVar15 = FUN_036ee4c4(*(undefined8 *)(in_stack_00000008 + 0x40),*(undefined8 *)(lVar15 + 0x10));
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  puVar3 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar2 = PTR_DAT_06a0f5d8;
  if ((int)uVar1 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar1 != 0) {
    uVar11 = 0;
    do {
      iVar13 = 0;
      psVar14 = (short *)(lVar15 + (long)iVar12 * 0x18 + uVar11 * 0x18);
      while( true ) {
        memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_0000039c <= iVar13) break;
        memcpy(&stack0x000002dc,(void *)(unaff_x20 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        psVar5 = (short *)FUN_03b5343c(&stack0x000002dc,iVar13,*(undefined8 *)puVar3);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar2);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar14 == *psVar5) && (*(int *)(psVar5 + 8) == *(int *)(psVar14 + 8))) &&
           (*(int *)(psVar5 + 10) == *(int *)(psVar14 + 10))) goto LAB_05fdef70;
        iVar13 = iVar13 + 1;
      }
      iVar13 = -1;
LAB_05fdef70:
      if (*(int *)(*(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<float>__ +
                  0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_06380640(&stack0x000003a0,uVar11 & 0xffffffff,iVar13,0);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar1);
  }
  if (*(int *)(unaff_x20 + 0x2a8) != 0) {
    uVar6 = FUN_042ca320(in_stack_00000008 + 0x68,
                         *(int *)(unaff_x20 + 0x2a8) + *(int *)(unaff_x20 + 0x2a4) + -1,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyHandler_<CreateOrJoinLobbyAsync>d__76>__
                        );
    uVar11 = FUN_05fd5a04(&stack0x000003a0,uVar6,0);
    if ((uVar11 & 1) != 0) {
      uVar7 = 0;
      goto LAB_05fdf078;
    }
  }
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_RelayHandler_<JoinAllocationAsync>d__17>__
  ;
  FUN_042ca4b0(in_stack_00000008 + 0x68,&stack0x000003a0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<Lobby>,_LobbyChannel_<ProcessEvent>d__18>__
              );
  lVar10 = *(long *)puVar2;
  lVar15 = *(long *)(lVar10 + 0x38);
  if (lVar15 == 0) {
    FUN_02dcfd74(lVar10);
    lVar15 = *(long *)(lVar10 + 0x38);
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar15 + 8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02dcfd18();
  }
  *(int *)(unaff_x20 + 0x2a8) = *(int *)(unaff_x20 + 0x2a8) + 1;
  uVar7 = 1;
LAB_05fdf078:
  *(undefined1 *)(in_stack_00000020 + 0x7b) = uVar7;
  *(int *)(in_stack_00000020 + 0x24) = *(int *)(unaff_x20 + 0x2a8) + -1;
  return;
}


