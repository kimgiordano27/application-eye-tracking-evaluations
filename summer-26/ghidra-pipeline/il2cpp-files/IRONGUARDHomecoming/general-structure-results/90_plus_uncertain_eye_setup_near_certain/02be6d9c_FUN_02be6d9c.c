/*
FUNCTION_NAME: FUN_02be6d9c
ENTRY_POINT: 02be6d9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02be7404) */

void FUN_02be6d9c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *__dest;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong auStack_a0 [4];
  ulong local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long local_68;
  
  auStack_a0[2] = tpidr_el0;
  local_68 = *(long *)(auStack_a0[2] + 0x28);
  local_80 = param_3;
  if ((DAT_04831439 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04831439 = 1;
  }
  lVar15 = *(long *)(param_4 + 0x20);
  lVar9 = *(long *)(lVar15 + 0xc0);
  uVar11 = (ulong)*(uint *)(*(long *)(lVar9 + 0xa8) + 0xfc);
  uVar16 = (ulong)*(uint *)(*(long *)(lVar9 + 0x70) + 0xfc);
  auStack_a0[1] = (ulong)*(uint *)(*(long *)(lVar9 + 0x78) + 0xfc);
  puVar8 = (undefined8 *)((long)auStack_a0 - (uVar16 + 0xf & 0x1fffffff0));
  __dest = (undefined8 *)((long)puVar8 - (auStack_a0[1] + 0xf & 0x1fffffff0));
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  puVar12 = (undefined8 *)((long)__dest - uVar10);
  pvVar14 = (void *)((long)puVar12 - uVar10);
  memset(pvVar14,0,uVar11);
  if (param_2 == (long *)0x0) {
    (**(code **)**(undefined8 **)(lVar15 + 0xc0))(param_1,0,local_80);
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  lVar9 = *(long *)(*(long *)(lVar15 + 0xc0) + 0x48);
  auStack_a0[3] = param_1;
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  uVar3 = local_80;
  lVar15 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
  if (uVar10 != 0) {
    piVar7 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar9) {
        puVar5 = (undefined8 *)(lVar15 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_02be6f04;
      }
      uVar10 = uVar10 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
FUN_02be6f04:
  local_80 = uVar16;
  uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  (**(code **)**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0))(auStack_a0[3],uVar4,uVar3);
  puVar2 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
LAB_02be73f4:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = thunk_FUN_01ecaf38(param_2,0);
  uVar17 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar2);
  }
  uVar17 = FUN_03579868(uVar17,0);
  uVar10 = FUN_03582560(uVar6,uVar17,0);
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar10 & 1) == 0) {
    lVar9 = *(long *)(lVar9 + 0x88);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar15 = *param_2;
    uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar15 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be717c;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
LAB_02be717c:
    plVar13 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02be71e4;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar2,0);
LAB_02be71e4:
      uVar10 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if ((uVar10 & 1) == 0) goto LAB_02be7328;
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar15 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar7 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            lVar9 = lVar15 + (long)*piVar7 * 0x10 + 0x138;
            goto LAB_02be725c;
          }
          uVar10 = uVar10 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar10 != 0);
      }
      lVar9 = FUN_01ecb238(plVar13,lVar9,0);
LAB_02be725c:
      lVar9 = *(long *)(lVar9 + 8);
      local_78 = puVar12;
      (**(code **)(lVar9 + 0x10))(*(undefined8 *)(lVar9 + 8),lVar9,plVar13,&local_78,puVar12);
      memcpy(pvVar14,puVar12,uVar11);
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xb0);
      local_78 = puVar8;
      (*(code *)puVar5[2])(*puVar5,puVar5,pvVar14,&local_78,puVar8);
      puVar5 = *(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0xc0);
      local_78 = __dest;
      (*(code *)puVar5[2])(*puVar5,puVar5,pvVar14,&local_78,__dest);
      lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
      local_78 = puVar8;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x70) + 0x28)) {
        local_78 = (undefined8 *)*puVar8;
      }
      puStack_70 = __dest;
      if (-1 < *(int *)(*(long *)(lVar9 + 0x78) + 0x28)) {
        puStack_70 = (undefined8 *)*__dest;
      }
      puVar5 = *(undefined8 **)(lVar9 + 0x80);
      (*(code *)puVar5[2])(*puVar5,puVar5,param_1,&local_78);
    } while( true );
  }
  lVar9 = *(long *)(lVar9 + 0x30);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  uVar11 = local_80;
  uVar10 = auStack_a0[1];
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  uVar1 = *(uint *)(param_2 + 4);
  if (0 < (int)uVar1) {
    plVar13 = (long *)param_2[3];
    if (plVar13 == (long *)0x0) goto LAB_02be73f4;
    uVar16 = 0;
    do {
      if (*(uint *)(plVar13 + 3) <= uVar16) goto LAB_02be73c8;
      piVar7 = (int *)thunk_FUN_01ee7388((long)plVar13 + uVar16 * *(uint *)(*plVar13 + 0x104) + 0x20
                                         ,*(undefined8 *)
                                           (*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                     0x68) + 0x80));
      if (-1 < *piVar7) {
        if (*(uint *)(plVar13 + 3) <= uVar16) {
LAB_02be73c8:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        pvVar14 = (void *)thunk_FUN_01ee7388((long)plVar13 +
                                             uVar16 * *(uint *)(*plVar13 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x40);
        memcpy(puVar8,pvVar14,uVar11);
        if (*(uint *)(plVar13 + 3) <= uVar16) goto LAB_02be73c8;
        pvVar14 = (void *)thunk_FUN_01ee7388((long)plVar13 +
                                             uVar16 * *(uint *)(*plVar13 + 0x104) + 0x20,
                                             *(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20)
                                                                          + 0xc0) + 0x68) + 0x80) +
                                             0x60);
        memcpy(__dest,pvVar14,uVar10);
        lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
        local_78 = puVar8;
        if (-1 < *(int *)(*(long *)(lVar9 + 0x70) + 0x28)) {
          local_78 = (undefined8 *)*puVar8;
        }
        puVar12 = *(undefined8 **)(lVar9 + 0x80);
        puStack_70 = __dest;
        if (-1 < *(int *)(*(long *)(lVar9 + 0x78) + 0x28)) {
          puStack_70 = (undefined8 *)*__dest;
        }
        (*(code *)puVar12[2])(*puVar12,puVar12,param_1,&local_78);
      }
      uVar16 = uVar16 + 1;
    } while (uVar1 != uVar16);
  }
  goto LAB_02be7394;
LAB_02be7328:
  if (plVar13 != (long *)0x0) {
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_02be7384;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02be7384:
    (*(code *)*puVar8)(plVar13,puVar8[1]);
  }
LAB_02be7394:
  if (*(long *)(auStack_a0[2] + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


