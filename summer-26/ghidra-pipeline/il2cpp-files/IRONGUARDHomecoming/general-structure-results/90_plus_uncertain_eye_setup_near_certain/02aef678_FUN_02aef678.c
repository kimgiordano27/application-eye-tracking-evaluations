/*
FUNCTION_NAME: FUN_02aef678
ENTRY_POINT: 02aef678
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_14;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02aefb24) */

void FUN_02aef678(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((DAT_04831121 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    DAT_04831121 = 1;
  }
  uVar6 = 0;
  if (param_2 != (long *)0x0) {
    uVar6 = param_1;
  }
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_5c = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
    uVar6 = param_1;
  }
  else {
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02aef76c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
LAB_02aef76c:
    uVar4 = (*(code *)*puVar5)(param_2,puVar5[1]);
  }
  FUN_02aef5cc(uVar6,uVar4,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0357c5b0(1,0);
  }
  uVar6 = thunk_FUN_01ecaf38(param_2,0);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar3);
  }
  uVar13 = FUN_03579868(uVar13,0);
  uVar11 = FUN_03582560(uVar6,uVar13,0);
  lVar9 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar11 & 1) == 0) {
    lVar9 = *(long *)(lVar9 + 0x88);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02aef920;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0);
LAB_02aef920:
    plVar7 = (long *)(*(code *)*puVar5)(param_2,puVar5[1]);
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar5 = (undefined8 *)((ulong)&local_b0 | 4);
    puVar14 = (ulong *)((ulong)&local_70 | 4);
    do {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02aef998;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_02aef998:
      uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar11 & 1) == 0) goto LAB_02aefa70;
      lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01ecaf44(lVar9);
      }
      lVar10 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02aefa10;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_02aefa10:
      (*(code *)*puVar8)(&local_b0,plVar7,puVar8[1]);
      local_70 = *puVar5;
      uVar11 = local_b0 & 0xffffffff;
      uStack_68 = (undefined4)puVar5[1];
      uStack_5c = (undefined4)*(undefined8 *)((long)puVar5 + 0x14);
      local_58 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0x14) >> 0x20);
      uStack_64 = (undefined4)*(undefined8 *)((long)puVar5 + 0xc);
      local_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0xc) >> 0x20);
      local_a0 = puVar14[2];
      uStack_a8 = puVar14[1];
      local_b0 = *puVar14;
      FUN_02af0aa0(param_1,uVar11,&local_b0,2,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                  0x80) + 0x20) + 0xc0) + 0xf8));
    } while( true );
  }
  lVar9 = *(long *)(lVar9 + 0x30);
  if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_01ecaf44(lVar9);
  }
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_2);
  }
  uVar1 = *(uint *)(param_2 + 4);
  if (0 < (int)uVar1) {
    lVar9 = param_2[3];
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar11 = 0;
    puVar14 = (ulong *)(lVar9 + 0x30);
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (-1 < (int)puVar14[-2]) {
        local_a0 = puVar14[2];
        uStack_a8 = puVar14[1];
        local_b0 = *puVar14;
        local_90 = local_b0;
        uStack_88 = uStack_a8;
        local_80 = local_a0;
        FUN_02af0aa0(param_1,(int)puVar14[-1],&local_b0,2,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                    0x80) + 0x20) + 0xc0) + 0xf8));
      }
      uVar11 = uVar11 + 1;
      puVar14 = puVar14 + 5;
    } while (uVar1 != uVar11);
  }
  goto LAB_02aefadc;
LAB_02aefa70:
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02aefacc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_02aefacc:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
LAB_02aefadc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


