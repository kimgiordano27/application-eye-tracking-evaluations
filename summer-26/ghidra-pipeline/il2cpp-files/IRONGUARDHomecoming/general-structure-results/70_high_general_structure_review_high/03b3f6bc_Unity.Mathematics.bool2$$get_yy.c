/*
FUNCTION_NAME: Unity.Mathematics.bool2$$get_yy
ENTRY_POINT: 03b3f6bc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void Unity_Mathematics_bool2__get_yy(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar6;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  char in_stack_000000b0;
  
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x20) =
         *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
    thunk_FUN_01f51358();
    plVar3 = (long *)thunk_FUN_01ecaf38();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
    if (*(uint *)(param_1 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)Method_System_Net_CommandStream_WriteCallback__
    ;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x38) = unaff_x20;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x40) =
         *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 6) break;
    *(undefined8 *)(param_1 + 0x48) = unaff_x19;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)StringLiteral_12054;
    thunk_FUN_01f51358();
    if (*(uint *)(param_1 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x58) = unaff_x24;
    thunk_FUN_01f51358((undefined8 *)(param_1 + 0x58),unaff_x24);
    if (*(uint *)(param_1 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(param_1 + 0x60) =
         *(undefined8 *)
          Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
    ;
    thunk_FUN_01f51358();
    uVar4 = FUN_0340efe8(param_1,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar4,0);
    while( true ) {
      uVar2 = FUN_02c795c0(&stack0x00000130,*unaff_x28);
      if ((uVar2 & 1) == 0) {
        FUN_02c795bc(&stack0x00000130,*(undefined8 *)StringLiteral_12051);
        return;
      }
      FUN_02c795ec(&stack0x00000010,&stack0x00000130,*unaff_x29);
      uVar6 = in_stack_00000020;
      uVar4 = in_stack_00000018;
      unaff_x24 = in_stack_00000010;
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar3 = (long *)thunk_FUN_01ecaf38();
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar3 = (long *)(**(code **)(*plVar3 + 0x6b8))
                                 (plVar3,unaff_x24,0x35,*(undefined8 *)(*plVar3 + 0x6c0));
      uVar2 = FUN_034b148c(plVar3,0,0);
      if ((uVar2 & 1) != 0) break;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar1 = FUN_03585170(uVar5,0);
      FUN_03b269ac(&stack0x00000010);
      memcpy(&stack0x000000b0,&stack0x00000010,0x80);
      if (in_stack_000000b0 != '\0') {
        FUN_03336788(&stack0x00000010,&stack0x000000b0,*(undefined8 *)StringLiteral_11703);
        uVar6 = in_stack_00000080;
        uVar4 = in_stack_00000078;
      }
      in_stack_000000a0 = uVar4;
      in_stack_000000a8 = uVar6;
      auVar7 = FUN_03b4e320(&stack0x000000a0,uVar1,0);
      _in_stack_00000090 = auVar7;
      FUN_03b4f0c4(&stack0x00000090,0);
      FUN_034b14f4(plVar3);
    }
    param_1 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


