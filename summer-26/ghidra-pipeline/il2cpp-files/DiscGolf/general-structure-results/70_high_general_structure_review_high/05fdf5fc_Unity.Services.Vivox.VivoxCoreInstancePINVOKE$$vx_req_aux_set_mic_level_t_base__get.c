/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_aux_set_mic_level_t_base__get
ENTRY_POINT: 05fdf5fc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


ulong Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_aux_set_mic_level_t_base__get
                (long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *__src;
  void *__src_00;
  short *psVar7;
  uint *puVar8;
  ulong uVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  undefined4 unaff_w21;
  ulong uVar13;
  long lVar14;
  short *unaff_x24;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  uint unaff_w27;
  ulong uVar18;
  uint in_stack_00000388;
  int in_stack_000004e8;
  
  if ((*(byte *)(unaff_x20 + 0x899) & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EnsureCapacity<Finger>__);
    FUN_02d965b8(Method_Mono_Security_ASN1Convert_ToDateTime__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<string,_InternedString>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Joystick,_Joystick>__
                );
    FUN_02d965b8(PTR_DAT_06a0f5d8);
    *(undefined1 *)(unaff_x20 + 0x899) = 1;
  }
  memset(&stack0x000004ec,0,0xc4);
  memset(&stack0x00000428,0,0xc4);
  if (param_1 == 0) {
LAB_05fdfe7c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  __src = (void *)FUN_042c6444(param_1 + 0x18,unaff_w27,
                               *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
  if (*(int *)((long)__src + 4) != 2) {
    uVar18 = 3;
    goto LAB_05fdf810;
  }
  __src_00 = (void *)FUN_042c2cd0(param_1 + 0x60,unaff_w21,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EraseAt<InputRemoting_RemoteSender>__
                                 );
  if ((0 < *(int *)((long)__src + 0x3c)) || (0 < *(int *)((long)__src + 0x44))) {
    if ((*(int *)((long)__src_00 + 0x2ac) != *(int *)((long)__src + 100)) ||
       (((*(int *)((long)__src_00 + 0x2b0) != *(int *)((long)__src + 0x68) ||
         (*(int *)((long)__src_00 + 0x2b4) != *(int *)((long)__src + 0x6c))) ||
        (*(int *)((long)__src_00 + 0x2b8) != *(int *)((long)__src + 0x70))))) {
      uVar18 = 1;
      goto LAB_05fdf810;
    }
    if ((*(char *)((long)__src_00 + 0x2c0) != '\0') && (*(char *)((long)__src + 0x7d) != '\0')) {
      psVar7 = (short *)FUN_042c6b48(param_1 + 0x40,*(undefined4 *)((long)__src + 0x38),
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_EnsureCapacity<Finger>__
                                    );
      memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      unaff_x24 = (short *)FUN_03b5343c(&stack0x00000428,0,
                                        *(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__
                                       );
      if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_06a0f5d8);
      }
      if (*psVar7 != *unaff_x24) {
        uVar18 = 4;
        goto LAB_05fdf810;
      }
    }
    if (*(char *)((long)__src_00 + 0x2c1) != *(char *)((long)__src + 8)) {
      uVar18 = 8;
      goto LAB_05fdf810;
    }
    iVar1 = *(int *)((long)__src_00 + 700);
    memmove(&stack0x000003a0,__src,0x80);
    if (-1 < iVar1) {
LAB_05fdf910:
      uVar18 = 9;
      goto LAB_05fdf810;
    }
    if (-1 < iVar1) {
      memmove(&stack0x000003a0,__src,0x80);
      FUN_05fee208(&stack0x00000388,&stack0x000003a0,param_1,0);
      memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
      uVar2 = *(undefined4 *)((long)__src_00 + 700);
      if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      puVar8 = (uint *)FUN_03b5343c(&stack0x00000428,uVar2,
                                    *(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__
                                   );
      uVar3 = *puVar8;
      if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (((uVar3 ^ in_stack_00000388) & 0xffff) != 0) goto LAB_05fdf910;
    }
    if ((*(char *)((long)__src_00 + 0x2c2) != *(char *)((long)__src + 0x7f)) ||
       ((*(char *)((long)__src_00 + 0x2c2) != '\0' &&
        (((*(int *)((long)__src_00 + 0x2c4) != *(int *)((long)__src + 0x10) ||
          (*(int *)((long)__src_00 + 0x2c8) != *(int *)((long)__src + 0x14))) ||
         (*(int *)((long)__src_00 + 0x2cc) != *(int *)((long)__src + 0x18))))))) {
      uVar18 = 10;
      goto LAB_05fdf810;
    }
  }
  if (DAT_06dc4872 == '\0') {
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                );
    DAT_06dc4872 = '\x01';
  }
  iVar1 = *(int *)((long)__src + 0x28);
  uVar3 = *(uint *)((long)__src + 0x2c);
  uVar12 = (ulong)uVar3;
  uVar13 = *(ulong *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
  ;
  lVar11 = *(long *)(uVar13 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(uVar13);
    lVar11 = *(long *)(uVar13 + 0x38);
  }
  lVar11 = FUN_036ee4d8(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar11 + 0x10));
  if ((int)uVar3 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar3 != 0) {
    uVar18 = 2;
    puVar8 = (uint *)(lVar11 + (long)iVar1 * 0xc + 8);
    do {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_05fdfe7c;
      uVar3 = *puVar8;
      uVar17 = *(undefined8 *)(puVar8 + -2);
      uVar13 = uVar13 & 0xffffffff00000000 | (ulong)uVar3;
      lVar11 = FUN_05fdfe80(*(long *)(param_1 + 0x10),uVar17,uVar13);
      if ((*(int *)((long)__src_00 + 0x298) <= *(int *)(lVar11 + 4)) &&
         (*(int *)(lVar11 + 4) < *(int *)((long)__src_00 + 0x29c) + 1)) {
        unaff_x24 = (short *)((ulong)unaff_x24 & 0xffffffff00000000 | (ulong)uVar3);
        uVar9 = FUN_05fdcdd8(__src,uVar17,unaff_x24,param_1,0);
        if ((uVar9 & 1) == 0) goto LAB_05fdf810;
      }
      uVar12 = uVar12 - 1;
      puVar8 = puVar8 + 3;
    } while (uVar12 != 0);
  }
  memset(&stack0x000004ec,0,0xc4);
  memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  if (*(int *)(*(long *)Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__ +
              0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  if (DAT_06dc487b == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487b = '\x01';
  }
  iVar16 = 8 - in_stack_000004e8;
  iVar1 = *(int *)((long)__src + 0x38);
  uVar3 = *(uint *)((long)__src + 0x3c);
  lVar14 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = FUN_036ee4c4(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar11 + 0x10));
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar4 = PTR_DAT_06a0f5d8;
  if ((int)uVar3 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar3 != 0) {
    uVar18 = 0;
    do {
      psVar7 = (short *)(lVar11 + (long)iVar1 * 0x18 + uVar18 * 0x18);
      iVar15 = 0;
      while( true ) {
        memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_000004e8 <= iVar15) break;
        memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        psVar10 = (short *)FUN_03b5343c(&stack0x00000428,iVar15,*(undefined8 *)puVar5);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar4);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar7 == *psVar10) && (*(int *)(psVar10 + 8) == *(int *)(psVar7 + 8))) &&
           (*(int *)(psVar10 + 10) == *(int *)(psVar7 + 10))) goto LAB_05fdfc34;
        iVar15 = iVar15 + 1;
      }
      if (iVar16 == 0) goto LAB_05fdfe08;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408(&stack0x000004ec,psVar7,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                  );
      iVar16 = iVar16 + -1;
LAB_05fdfc34:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
  }
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  lVar14 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  iVar1 = *(int *)((long)__src + 0x40);
  uVar3 = *(uint *)((long)__src + 0x44);
  lVar11 = *(long *)(lVar14 + 0x38);
  if (lVar11 == 0) {
    FUN_02dcfd74(lVar14);
    lVar11 = *(long *)(lVar14 + 0x38);
  }
  lVar11 = FUN_036ee4c4(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar11 + 0x10));
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar4 = PTR_DAT_06a0f5d8;
  if ((int)uVar3 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar3 != 0) {
    uVar18 = 0;
    do {
      psVar7 = (short *)(lVar11 + (long)iVar1 * 0x18 + uVar18 * 0x18);
      iVar15 = 0;
      while( true ) {
        memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (in_stack_000004e8 <= iVar15) break;
        memcpy(&stack0x00000428,(void *)((long)__src_00 + 0xd0),0xc4);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        psVar10 = (short *)FUN_03b5343c(&stack0x00000428,iVar15,*(undefined8 *)puVar5);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar4);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar7 == *psVar10) && (*(int *)(psVar10 + 8) == *(int *)(psVar7 + 8))) &&
           (*(int *)(psVar10 + 10) == *(int *)(psVar7 + 10))) goto LAB_05fdfdec;
        iVar15 = iVar15 + 1;
      }
      if (iVar16 == 0) goto LAB_05fdfe08;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_03b53408(&stack0x000004ec,psVar7,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                  );
      iVar16 = iVar16 + -1;
LAB_05fdfdec:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
  }
  memcpy(&stack0x00000038,__src,0x80);
  memmove(&stack0x000000b8,__src_00,0x2d0);
  uVar18 = FUN_05fdff94(param_1,&stack0x000000b8,&stack0x00000038);
  if (((uVar18 & 1) == 0) && (8 < *(int *)((long)__src_00 + 0x2a0) + 1)) {
    uVar18 = 6;
  }
  else {
    uVar18 = 0xc;
  }
LAB_05fdf810:
  return uVar18 | (ulong)unaff_w27 << 0x20;
LAB_05fdfe08:
  uVar18 = 5;
  goto LAB_05fdf810;
}


