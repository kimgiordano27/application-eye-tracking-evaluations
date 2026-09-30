/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_base_t_request_get
ENTRY_POINT: 05fe0a34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_base_t_request_get(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  short *psVar8;
  long lVar9;
  int unaff_w19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  short *psVar10;
  long unaff_x26;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  
  FUN_02dcfd74();
  uStack0000000000000014 = unaff_w21;
  lVar7 = FUN_036ee4c4(*(undefined8 *)(unaff_x22 + 0x40),
                       *(undefined8 *)(*(long *)(unaff_x24 + 0x38) + 0x10));
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar4 = PTR_DAT_06a0f5d8;
  if ((int)unaff_x20 < 0) {
    FUN_05508bc8(0);
  }
  else if ((int)unaff_x20 != 0) {
    lVar7 = lVar7 + (long)unaff_w19 * 0x18;
    lVar12 = 0;
    do {
      iVar11 = 0;
      psVar10 = (short *)(lVar7 + lVar12 * 0x18);
      while( true ) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        iVar1 = *(int *)(*(long *)puVar6 + 0xe4);
        if (*(int *)(unaff_x23 + 400) <= iVar11) {
          if (iVar1 == 0) {
            thunk_FUN_02df485c();
          }
          FUN_03b53408(unaff_x23 + 0xd0,psVar10,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                      );
          goto LAB_05fe0b58;
        }
        if (iVar1 == 0) {
          thunk_FUN_02df485c();
        }
        psVar8 = (short *)FUN_03b5343c(unaff_x23 + 0xd0,iVar11,*(undefined8 *)puVar5);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar4);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar10 == *psVar8) && (*(int *)(psVar8 + 8) == *(int *)(psVar10 + 8))) &&
           (*(int *)(psVar8 + 10) == *(int *)(psVar10 + 10))) break;
        iVar11 = iVar11 + 1;
      }
      lVar9 = *(long *)puVar4;
      in_stack_00000058 = *(undefined4 *)(psVar8 + 4);
      uVar2 = *(uint *)(lVar7 + lVar12 * 0x18 + 0xc);
      if ((*(uint *)(psVar8 + 6) & 4) != 0) {
        uVar2 = uVar2 & 0xfffffffe;
      }
      *(uint *)(psVar8 + 6) = uVar2 | *(uint *)(psVar8 + 6);
      in_stack_00000050 = *(undefined8 *)psVar8;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_05fc90c4(&stack0x00000030,&stack0x00000050,*(undefined4 *)(psVar10 + 2),0);
      *(undefined4 *)(psVar8 + 4) = in_stack_00000038;
      *(undefined8 *)psVar8 = in_stack_00000030;
LAB_05fe0b58:
      lVar12 = lVar12 + 1;
    } while (lVar12 != unaff_x20);
  }
  if (DAT_06dc487e == '\0') {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__);
    DAT_06dc487e = '\x01';
  }
  lVar12 = *(long *)
            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_SwapElements<PlayerInput>__;
  iVar11 = *(int *)(unaff_x26 + 0x40);
  uVar2 = *(uint *)(unaff_x26 + 0x44);
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02dcfd74(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = FUN_036ee4c4(*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(lVar7 + 0x10));
  puVar6 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<uint>__;
  puVar5 = Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputBinding>__;
  puVar4 = PTR_DAT_06a0f5d8;
  if ((int)uVar2 < 0) {
    FUN_05508bc8(0);
  }
  else if (uVar2 != 0) {
    lVar7 = lVar7 + (long)iVar11 * 0x18;
    uVar13 = 0;
    do {
      psVar10 = (short *)(lVar7 + uVar13 * 0x18);
      iVar11 = 0;
      while( true ) {
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        iVar1 = *(int *)(*(long *)puVar6 + 0xe4);
        if (*(int *)(unaff_x23 + 400) <= iVar11) {
          if (iVar1 == 0) {
            thunk_FUN_02df485c();
          }
          FUN_03b53408(unaff_x23 + 0xd0,psVar10,
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<JoinAllocation>,_DaHandler_<JoinSessionAsync>d__12>__
                      );
          goto LAB_05fe0d4c;
        }
        if (iVar1 == 0) {
          thunk_FUN_02df485c();
        }
        psVar8 = (short *)FUN_03b5343c(unaff_x23 + 0xd0,iVar11,*(undefined8 *)puVar5);
        if (DAT_06dc4939 == '\0') {
          FUN_02d965b8(puVar4);
          DAT_06dc4939 = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (((*psVar10 == *psVar8) && (*(int *)(psVar8 + 8) == *(int *)(psVar10 + 8))) &&
           (*(int *)(psVar8 + 10) == *(int *)(psVar10 + 10))) break;
        iVar11 = iVar11 + 1;
      }
      lVar12 = *(long *)puVar4;
      in_stack_00000048 = *(undefined4 *)(psVar8 + 4);
      uVar3 = *(uint *)(lVar7 + uVar13 * 0x18 + 0xc);
      if ((*(uint *)(psVar8 + 6) & 4) != 0) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      *(uint *)(psVar8 + 6) = uVar3 | *(uint *)(psVar8 + 6);
      in_stack_00000040 = *(undefined8 *)psVar8;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      FUN_05fc90c4(&stack0x00000030,&stack0x00000040,*(undefined4 *)(psVar10 + 2),0);
      *(undefined4 *)(psVar8 + 4) = in_stack_00000038;
      *(undefined8 *)psVar8 = in_stack_00000030;
LAB_05fe0d4c:
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar2);
  }
  FUN_05fdea24(unaff_x22);
  FUN_05fdc214(unaff_x22,uStack0000000000000014,0);
  return unaff_x25;
}


