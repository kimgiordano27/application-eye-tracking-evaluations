/*
FUNCTION_NAME: FUN_03b3f4f4
ENTRY_POINT: 03b3f4f4
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


void FUN_03b3f4f4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = StringLiteral_12050;
  local_70 = param_1;
  uStack_68 = param_2;
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
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130._0_8_ = 0;
  local_130._8_8_ = 0;
  FUN_0261752c(&local_1b0,&local_70,*(undefined8 *)puVar1);
  uStack_88 = uStack_1a8;
  local_90 = local_1b0;
  local_80 = local_1a0;
  while( true ) {
    while( true ) {
      uVar5 = FUN_02c795c0(&local_90,*(undefined8 *)puVar2);
      if ((uVar5 & 1) == 0) {
        FUN_02c795bc(&local_90,*(undefined8 *)StringLiteral_12051);
        return;
      }
      FUN_02c795ec(&local_1b0,&local_90,*(undefined8 *)puVar3);
      uVar11 = local_1a0;
      uVar8 = uStack_1a8;
      uVar9 = local_1b0;
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
      FUN_03b269ac(&local_1b0,param_4,param_5,uVar9,param_6,0);
      memcpy(&local_110,&local_1b0,0x80);
      if ((char)local_110 != '\0') {
        FUN_03336788(&local_1b0,&local_110,*(undefined8 *)StringLiteral_11703);
        uVar11 = uStack_140;
        uVar8 = local_148;
      }
      local_120 = uVar8;
      uStack_118 = uVar11;
      auVar12 = FUN_03b4e320(&local_120,uVar4,0);
      local_130 = auVar12;
      uVar9 = FUN_03b4f0c4(local_130,0);
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


