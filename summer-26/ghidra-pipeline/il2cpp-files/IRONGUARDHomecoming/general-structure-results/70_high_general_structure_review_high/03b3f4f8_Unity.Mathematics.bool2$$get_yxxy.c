/*
FUNCTION_NAME: Unity.Mathematics.bool2$$get_yxxy
ENTRY_POINT: 03b3f4f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


void Unity_Mathematics_bool2__get_yxxy
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  char cStack00000000000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  
  puVar1 = StringLiteral_12050;
                    /* try { // try from 03b3f500 to 03c3f503 has its CatchHandler @ 03b3f514 */
                    /* try { // try from 03b3f504 to 03c3f507 has its CatchHandler @ 03b3f510 */
                    /* try { // try from 03b3f508 to 03c3f53b has its CatchHandler @ 03b3f370 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03b3f504 with catch @ 03b3f510
                        */
  uStack0000000000000008 = param_5;
  uStack0000000000000150 = param_1;
  uStack0000000000000158 = param_2;
  if ((DAT_0483944b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_12051);
    thunk_FUN_01efb3a4(StringLiteral_12052);
    thunk_FUN_01efb3a4(StringLiteral_12053);
    thunk_FUN_01efb3a4(StringLiteral_11702);
    thunk_FUN_01efb3a4(StringLiteral_11703);
    thunk_FUN_01efb3a4(StringLiteral_12050);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReceiveCommandResponse__);
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_ReceiveCommandResponseCallback__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                      );
    thunk_FUN_01efb3a4(Method_System_Net_CommandStream_WriteCallback__);
    thunk_FUN_01efb3a4(StringLiteral_12054);
    DAT_0483944b = 1;
  }
  puVar3 = StringLiteral_12053;
  puVar2 = StringLiteral_12052;
  in_stack_00000130 = 0;
  in_stack_00000138 = 0;
  in_stack_00000140 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000b8 = 0;
  _cStack00000000000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  FUN_0261752c(&stack0x00000010,&stack0x00000150,*(undefined8 *)puVar1);
  in_stack_00000138 = in_stack_00000018;
  in_stack_00000130 = in_stack_00000010;
  in_stack_00000140 = in_stack_00000020;
  while( true ) {
    while( true ) {
      uVar5 = FUN_02c795c0(&stack0x00000130,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        FUN_02c795bc(&stack0x00000130,*(undefined8 *)StringLiteral_12051);
        return;
      }
      FUN_02c795ec(&stack0x00000010,&stack0x00000130,*(undefined8 *)puVar3);
      uVar11 = in_stack_00000020;
      uVar8 = in_stack_00000018;
      uVar9 = in_stack_00000010;
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar6 = (long *)thunk_FUN_01ecaf38(param_3,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x6b8))
                                 (plVar6,uVar9,0x35,*(undefined8 *)(*plVar6 + 0x6c0));
      uVar5 = FUN_034b148c(plVar6,0,0);
      if ((uVar5 & 1) != 0) break;
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = (**(code **)(*plVar6 + 600))(plVar6,*(undefined8 *)(*plVar6 + 0x260));
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_03585170(uVar10,0);
      FUN_03b269ac(&stack0x00000010,param_4,uStack0000000000000008,uVar9,param_6,0);
      memcpy(&stack0x000000b0,&stack0x00000010,0x80);
      if (cStack00000000000000b0 != '\0') {
        FUN_03336788(&stack0x00000010,&stack0x000000b0,*(undefined8 *)StringLiteral_11703);
        uVar11 = in_stack_00000080;
        uVar8 = in_stack_00000078;
      }
      in_stack_000000a0 = uVar8;
      in_stack_000000a8 = uVar11;
      auVar12 = FUN_03b4e320(&stack0x000000a0,uVar4,0);
      _in_stack_00000090 = auVar12;
      uVar9 = FUN_03b4f0c4(&stack0x00000090,0);
      FUN_034b14f4(plVar6,param_3,uVar9,0);
    }
    lVar7 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,9);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x20) =
         *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponseCallback__;
    thunk_FUN_01f51358();
    plVar6 = (long *)thunk_FUN_01ecaf38(param_3,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
    if (*(uint *)(lVar7 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x28) = uVar8;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar7 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)Method_System_Net_CommandStream_WriteCallback__;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar7 + 0x18) < 4) break;
    *(undefined8 *)(lVar7 + 0x38) = param_6;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38),param_6);
    if (*(uint *)(lVar7 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x40) =
         *(undefined8 *)Method_System_Net_CommandStream_ReceiveCommandResponse__;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar7 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x48) = param_7;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x48),param_7);
    if (*(uint *)(lVar7 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)StringLiteral_12054;
    thunk_FUN_01f51358();
    if (*(uint *)(lVar7 + 0x18) < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x58) = uVar9;
    thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x58),uVar9);
    if (*(uint *)(lVar7 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar7 + 0x60) =
         *(undefined8 *)
          Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
    ;
    thunk_FUN_01f51358();
    uVar9 = FUN_0340efe8(lVar7,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403ed64(uVar9,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


