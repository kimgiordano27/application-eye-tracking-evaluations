/*
FUNCTION_NAME: FUN_03c04154
ENTRY_POINT: 03c04154
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_1
*/


long FUN_03c04154(undefined8 *param_1)

{
  void *__dest;
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  undefined1 auStack_3a0 [208];
  undefined1 auStack_2d0 [208];
  undefined1 auStack_200 [208];
  ulong local_130;
  undefined8 uStack_128;
  undefined *puVar8;
  
  if ((DAT_04839b61 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_14342);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(StringLiteral_14343);
    thunk_FUN_01efb3a4(StringLiteral_14357);
    thunk_FUN_01efb3a4(Method_System_Collections_CompatibleComparer_Compare__);
    thunk_FUN_01efb3a4(StringLiteral_11800);
    thunk_FUN_01efb3a4(StringLiteral_13135);
    thunk_FUN_01efb3a4(StringLiteral_14358);
    thunk_FUN_01efb3a4(StringLiteral_14359);
    thunk_FUN_01efb3a4(StringLiteral_14346);
    thunk_FUN_01efb3a4(StringLiteral_14340);
    thunk_FUN_01efb3a4(StringLiteral_14339);
    thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vabdq_s8__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_System_Enum_ToObject__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(StringLiteral_14360);
    thunk_FUN_01efb3a4(StringLiteral_14354);
    thunk_FUN_01efb3a4(StringLiteral_14361);
    thunk_FUN_01efb3a4(StringLiteral_14362);
    thunk_FUN_01efb3a4(StringLiteral_14363);
    thunk_FUN_01efb3a4(StringLiteral_14364);
    thunk_FUN_01efb3a4(StringLiteral_14365);
    thunk_FUN_01efb3a4(StringLiteral_14366);
    thunk_FUN_01efb3a4(StringLiteral_14367);
    DAT_04839b61 = 1;
  }
  memset(auStack_2d0,0,0xd0);
  uVar3 = FUN_0340eec4(param_1[9],0);
  puVar8 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((uVar3 & 1) == 0) {
    uVar11 = param_1[9];
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar11 = FUN_01f08bd8(uVar11,0,*(undefined8 *)Method_System_Enum_ToObject__,
                          *(undefined8 *)StringLiteral_14358);
    uVar3 = FUN_03582560(uVar11,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_01f08890(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                           ,5);
      if (lVar4 == 0) goto LAB_03c049ac;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_03c049b0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)StringLiteral_14363;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x20));
      if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_03c049b0;
      *(undefined8 *)(lVar4 + 0x28) = param_1[9];
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28));
      if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_03c049b0;
      *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)StringLiteral_14365;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
      if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_03c049b0;
      *(undefined8 *)(lVar4 + 0x38) = *param_1;
      thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38));
      if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_03c049b0;
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)StringLiteral_14366;
      thunk_FUN_01f51358();
      uVar11 = FUN_0340efe8(lVar4,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__);
      }
      FUN_0403ea2c(uVar11,0);
      lVar4 = *(long *)puVar8;
      goto LAB_03c04454;
    }
    uVar12 = *(undefined8 *)StringLiteral_11800;
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar6 = (long *)FUN_03579868(uVar12,0);
    if (plVar6 == (long *)0x0) goto LAB_03c049ac;
    uVar3 = (**(code **)(*plVar6 + 0x2a8))(plVar6,uVar11,*(undefined8 *)(*plVar6 + 0x2b0));
    if ((uVar3 & 1) == 0) {
      uVar11 = thunk_FUN_01efb3a4(
                                 Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 );
      uVar11 = FUN_01f08890(uVar11,5);
      FUN_01bc50c0();
      uVar12 = thunk_FUN_01efb3a4(
                                 Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                 );
      FUN_01bc5408(uVar11,0,uVar12);
      uVar12 = param_1[9];
      FUN_01bc50c0(uVar11);
      FUN_01bc5408(uVar11,1,uVar12);
      FUN_01bc50c0(uVar11);
      uVar12 = thunk_FUN_01efb3a4(StringLiteral_14365);
      FUN_01bc5408(uVar11,2,uVar12);
      uVar12 = *param_1;
      FUN_01bc50c0(uVar11);
      FUN_01bc5408(uVar11,3,uVar12);
      FUN_01bc50c0(uVar11);
      uVar12 = thunk_FUN_01efb3a4(StringLiteral_11801);
      FUN_01bc5408(uVar11,4,uVar12);
      uVar11 = FUN_0340efe8(uVar11,0);
      goto LAB_03c049d0;
    }
  }
  else {
    uVar3 = FUN_0340eec4(param_1[1],0);
    uVar11 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
LAB_03c04454:
      uVar11 = *(undefined8 *)StringLiteral_13135;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar11 = FUN_03579868(uVar11,0);
    }
  }
  uVar12 = *param_1;
  lVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Collections_CompatibleComparer_Compare__);
  FUN_03c03c24(lVar4,uVar12,uVar11);
  puVar8 = StringLiteral_14354;
  if (lVar4 == 0) goto LAB_03c049ac;
  *(undefined8 *)(lVar4 + 0x98) = param_1[7];
  thunk_FUN_01f51358();
  *(undefined8 *)(lVar4 + 0xa0) = param_1[8];
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0xa0));
  *(uint *)(lVar4 + 0xa8) =
       *(uint *)(lVar4 + 0xa8) & 0xfffffffc | (uint)*(byte *)(param_1 + 0xb) |
       (uint)*(byte *)((long)param_1 + 0x59) << 1;
  uStack_128 = 0;
  local_130 = 0;
  FUN_03b412f4(&local_130,param_1[10],0);
  *(undefined8 *)(lVar4 + 0x30) = uStack_128;
  *(ulong *)(lVar4 + 0x28) = local_130;
  thunk_FUN_01f51358(lVar4 + 0x28,0);
  lVar5 = *(long *)puVar8;
  uVar11 = param_1[6];
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar8;
  }
  puVar2 = StringLiteral_14342;
  lVar13 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar13 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar8;
    }
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    lVar13 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_14343);
    FUN_02e6c62c(lVar13,uVar12,*(undefined8 *)StringLiteral_14360,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar8 + 0xb8) + 8);
    *plVar6 = lVar13;
    thunk_FUN_01f51358(plVar6,lVar13);
  }
  uVar11 = FUN_02295020(uVar11,lVar13,*(undefined8 *)puVar2);
  *(undefined8 *)(lVar4 + 0x88) = uVar11;
  thunk_FUN_01f51358();
  uVar3 = FUN_0340eec4(param_1[3],0);
  if ((uVar3 & 1) == 0) {
    local_130 = local_130 & 0xffffffff00000000;
    FUN_03b496d4(&local_130,param_1[3],0);
    *(undefined4 *)(lVar4 + 0x38) = (undefined4)local_130;
  }
  uVar3 = FUN_0340eec4(param_1[1],0);
  if ((uVar3 & 1) == 0) {
    uStack_128 = 0;
    local_130 = 0;
    FUN_03b412f4(&local_130,param_1[1],0);
    FUN_02f0c694(lVar4 + 0x48,local_130,uStack_128,*(undefined8 *)StringLiteral_14357);
  }
  puVar8 = StringLiteral_14357;
  lVar5 = param_1[2];
  if ((lVar5 != 0) && (0 < (int)*(ulong *)(lVar5 + 0x18))) {
    uVar3 = 0;
    uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar3) goto LAB_03c049b0;
      uStack_128 = 0;
      local_130 = 0;
      FUN_03b412f4(&local_130,*(undefined8 *)(lVar5 + 0x20 + uVar3 * 8),0);
      FUN_02f0c694(lVar4 + 0x48,local_130,uStack_128,*(undefined8 *)puVar8);
      uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  uVar3 = FUN_0340eec4(param_1[4],0);
  if ((uVar3 & 1) != 0) {
LAB_03c0477c:
    uVar3 = FUN_0340eec4(param_1[5],0);
    if ((uVar3 & 1) == 0) {
      if (param_1[5] == 0) goto LAB_03c049ac;
      uVar11 = FUN_034127bc(param_1[5],0);
      uVar3 = thunk_FUN_0340e318(uVar11,*(undefined8 *)StringLiteral_14367,0);
      if ((uVar3 & 1) == 0) {
        uVar3 = thunk_FUN_0340e318(uVar11,*(undefined8 *)StringLiteral_14361,0);
        if ((uVar3 & 1) == 0) {
          uVar12 = param_1[4];
          uVar11 = thunk_FUN_01efb3a4(StringLiteral_14371);
          puVar8 = StringLiteral_14372;
          goto LAB_03c04b10;
        }
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
      local_130 = local_130 & 0xffffffffffff0000;
      FUN_0332afdc(&local_130,uVar11,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabdq_s8__);
      FUN_03c02fac(lVar4,local_130 & 0xffff);
    }
    puVar8 = StringLiteral_14340;
    if (param_1[0xc] == 0) {
      return lVar4;
    }
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_14339);
    FUN_031e2de8(lVar5,*(undefined8 *)puVar8);
    puVar8 = StringLiteral_14359;
    lVar13 = param_1[0xc];
    if (lVar13 != 0) {
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (0 < (int)uVar1) {
        uVar15 = 0;
        lVar10 = 0;
        do {
          if (uVar1 <= uVar15) goto LAB_03c049b0;
          lVar16 = *(long *)(lVar13 + (long)(int)uVar15 * 8 + 0x20);
          if (lVar16 == 0) goto LAB_03c049ac;
          uVar3 = FUN_0340eec4(*(undefined8 *)(lVar16 + 0x10),0);
          if ((uVar3 & 1) == 0) {
            lVar10 = lVar16;
          }
          if ((uVar3 & 1) != 0) {
            uVar12 = *param_1;
            uVar11 = thunk_FUN_01efb3a4(StringLiteral_14368);
            uVar11 = FUN_03405678(uVar11,uVar12,0);
            goto LAB_03c049d0;
          }
          if (lVar10 == 0) goto LAB_03c049ac;
          FUN_03c092c0(auStack_2d0);
          memcpy(auStack_3a0,auStack_2d0,0xd0);
          if (lVar5 == 0) goto LAB_03c049ac;
          lVar14 = *(long *)puVar8;
          memcpy(auStack_200,auStack_3a0,0xd0);
          lVar10 = *(long *)(lVar5 + 0x10);
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_03c049ac;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
            __dest = (void *)(lVar10 + (long)(int)uVar1 * 0xd0 + 0x20);
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            memcpy(__dest,auStack_200,0xd0);
            thunk_FUN_01f51358(__dest,0);
          }
          else {
            uVar11 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
            memcpy(&local_130,auStack_200,0xd0);
            FUN_031e3738(lVar5,&local_130,uVar11);
          }
          uVar1 = *(uint *)(lVar13 + 0x18);
          uVar15 = uVar15 + 1;
          lVar10 = lVar16;
        } while ((int)uVar15 < (int)uVar1);
      }
      if (lVar5 != 0) {
        uVar11 = FUN_031e57ec(lVar5,*(undefined8 *)StringLiteral_14346);
        *(undefined8 *)(lVar4 + 0x90) = uVar11;
        thunk_FUN_01f51358();
        return lVar4;
      }
    }
LAB_03c049ac:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (param_1[4] == 0) goto LAB_03c049ac;
  uVar11 = FUN_034127bc(param_1[4],0);
  uVar3 = thunk_FUN_0340e318(uVar11,*(undefined8 *)StringLiteral_14362,0);
  if ((uVar3 & 1) != 0) {
    uVar11 = 0;
LAB_03c0476c:
    local_130 = local_130 & 0xffffffffffff0000;
    FUN_0332afdc(&local_130,uVar11,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabdq_s8__)
    ;
    *(undefined2 *)(lVar4 + 0x40) = (undefined2)local_130;
    goto LAB_03c0477c;
  }
  uVar3 = thunk_FUN_0340e318(uVar11,*(undefined8 *)StringLiteral_14364,0);
  if ((uVar3 & 1) != 0) {
    uVar11 = 1;
    goto LAB_03c0476c;
  }
  uVar12 = param_1[4];
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_14369);
  puVar8 = StringLiteral_14370;
LAB_03c04b10:
  uVar7 = thunk_FUN_01efb3a4(puVar8);
  uVar11 = FUN_0340ebc0(uVar11,uVar12,uVar7,0);
LAB_03c049d0:
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
  uVar12 = thunk_FUN_01f117cc();
  FUN_0356adc8(uVar12,uVar11,0);
  uVar11 = thunk_FUN_01efb3a4(StringLiteral_14358);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar12,uVar11);
}


