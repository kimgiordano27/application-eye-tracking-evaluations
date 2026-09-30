/*
FUNCTION_NAME: FUN_02133a48
ENTRY_POINT: 02133a48
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_02133a48(int *param_1,undefined8 *******param_2,uint param_3,int param_4,int param_5,
                 long param_6)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long local_90;
  undefined8 *******local_88;
  int *local_80;
  uint local_78;
  undefined4 uStack_74;
  int local_6c;
  long local_68;
  
  local_90 = tpidr_el0;
  local_68 = *(long *)(local_90 + 0x28);
  plVar13 = *(long **)(param_6 + 0x38);
  local_88 = param_2;
  if (plVar13 == (long *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Globalization_Bootstring_Encode__);
    plVar13 = *(long **)(param_6 + 0x38);
    if (plVar13 == (long *)0x0) {
      FUN_01ecafa0(param_6);
      plVar13 = *(long **)(param_6 + 0x38);
    }
  }
  lVar14 = *plVar13;
  uVar3 = *(ushort *)(lVar14 + 0x135);
  lVar7 = lVar14;
  if ((uVar3 & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
    uVar3 = *(ushort *)(**(long **)(param_6 + 0x38) + 0x135);
    lVar7 = **(long **)(param_6 + 0x38);
  }
  lVar17 = (long)&local_90 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar14 = lVar7;
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
    uVar3 = *(ushort *)(**(long **)(param_6 + 0x38) + 0x135);
    lVar14 = **(long **)(param_6 + 0x38);
  }
  lVar16 = lVar17 - ((ulong)(*(int *)(lVar7 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  lVar7 = lVar14;
  if ((uVar3 & 1) == 0) {
    lVar14 = FUN_01ecaf44(lVar14);
    uVar3 = *(ushort *)(**(long **)(param_6 + 0x38) + 0x135);
    lVar7 = **(long **)(param_6 + 0x38);
  }
  lVar14 = lVar16 - ((ulong)(*(int *)(lVar14 + 0xfc) + 0x10) + 0xf & 0x1fffffff0);
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_01ecaf44(lVar7);
  }
  iVar2 = *(int *)(lVar7 + 0xfc);
  if ((int)param_3 < 0) {
    plVar13 = *(long **)(param_6 + 0x38);
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      plVar13 = *(long **)(param_6 + 0x38);
    }
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      param_2 = &local_88;
    }
    FUN_01f09244(lVar7,plVar13[1],lVar17,param_2,0,&local_78);
    param_3 = local_78;
  }
  if (param_4 < 0) {
    if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    param_4 = *param_1;
  }
  if (param_3 != 0) {
    plVar13 = *(long **)(param_6 + 0x38);
    lVar7 = *plVar13;
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
      plVar13 = *(long **)(param_6 + 0x38);
    }
    pppppppuVar1 = local_88;
    if (-1 < *(int *)(*plVar13 + 0x28)) {
      pppppppuVar1 = &local_88;
    }
    FUN_01f09244(lVar7,plVar13[1],lVar16,pppppppuVar1,0,&local_78);
    puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
    if ((int)local_78 < (int)(param_3 + param_5)) {
      local_78 = param_3;
      uVar8 = thunk_FUN_01efb3a4(
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                );
      uVar8 = thunk_FUN_01f113fc(uVar8,&local_78);
      local_80 = (int *)CONCAT44(local_80._4_4_,param_5);
      uVar9 = thunk_FUN_01efb3a4(puVar4);
      uVar9 = thunk_FUN_01f113fc(uVar9,&local_80);
      uVar10 = FUN_01bc4c80(*(undefined8 *)(param_6 + 0x38),0);
      pppppppuVar1 = local_88;
      if (-1 < *(int *)(**(long **)(param_6 + 0x38) + 0x28)) {
        pppppppuVar1 = &local_88;
      }
      local_6c = FUN_01bc50f0(uVar10,(*(long **)(param_6 + 0x38))[1],lVar14,pppppppuVar1);
      uVar10 = thunk_FUN_01efb3a4(puVar4);
      uVar10 = thunk_FUN_01f113fc(uVar10,&local_6c);
      uVar11 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_0__);
      uVar8 = FUN_0340f334(uVar11,uVar8,uVar9,uVar10,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar9 = thunk_FUN_01f117cc();
      uVar10 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
      FUN_034f3578(uVar9,uVar10,uVar8,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar9,param_6);
    }
    lVar7 = *(long *)(param_6 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44();
    }
    iVar5 = FUN_02f1e588(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x68));
    iVar12 = *param_1;
    if (iVar5 < (int)(iVar12 + param_3)) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar6 = FUN_0356bc8c(iVar12 + param_3,10,0);
      lVar7 = *(long *)(param_6 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ecaf44(lVar7);
      }
      FUN_02f1e5d4(param_1,uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28));
    }
    if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ecaf44();
    }
    iVar12 = *param_1;
    if (param_4 < iVar12) {
      uVar8 = *(undefined8 *)(param_1 + 2);
      uVar9 = *(undefined8 *)(param_1 + 4);
      if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ecaf44();
        iVar12 = *param_1;
      }
      FUN_032ea8c8(uVar8,uVar9,param_4,uVar8,uVar9,param_4 + param_3,iVar12 - param_4,
                   *(undefined8 *)Method_System_Globalization_Bootstring_Encode__);
    }
    if (0 < (int)param_3) {
      uVar15 = (ulong)param_3;
      do {
        plVar13 = *(long **)(param_6 + 0x38);
        lVar7 = *plVar13;
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
          plVar13 = *(long **)(param_6 + 0x38);
        }
        pppppppuVar1 = local_88;
        if (-1 < *(int *)(*plVar13 + 0x28)) {
          pppppppuVar1 = &local_88;
        }
        local_80 = &local_6c;
        local_6c = param_5;
        FUN_01f09244(lVar7,plVar13[2],lVar14 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),
                     pppppppuVar1,&local_80,&local_78);
        lVar7 = *(long *)(param_6 + 0x20);
        uVar8 = CONCAT44(uStack_74,local_78);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01ecaf44();
        }
        uVar8 = FUN_02f1fe48(uVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20));
        uVar15 = uVar15 - 1;
        param_5 = param_5 + 1;
        *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_4 * 8) = uVar8;
        param_4 = param_4 + 1;
      } while (uVar15 != 0);
    }
    *param_1 = *param_1 + param_3;
  }
  if (*(long *)(local_90 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


