/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 070b74a8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x070b7968) */

void System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor
               (undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  void *__src;
  undefined8 uVar11;
  undefined4 local_11c;
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  long **pplStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  
  if ((DAT_09545481 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08f65880);
    DAT_09545481 = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  uVar5 = 0;
  if (param_2 != (long *)0x0) {
    uVar5 = param_1;
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_2 == (long *)0x0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec(lVar7);
    }
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_070b7598;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(param_2,lVar7,0);
LAB_070b7598:
    uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  FUN_070b7414(uVar5,uVar3,param_3,**(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0));
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(1,0);
  }
  uVar5 = thunk_FUN_0404145c(param_2,0);
  uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x58);
  if (*(int *)(*(long *)(PTR_DAT_08f65618 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)(PTR_DAT_08f65618 + 0xe0));
  }
  uVar11 = FUN_074f3c94(uVar11,0);
  uVar9 = FUN_074fd3f4(uVar5,uVar11,0);
  lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
  if ((uVar9 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec(lVar7);
    }
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c(param_2);
    }
    uVar1 = *(uint *)(param_2 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar7 = param_2[3];
    if (lVar7 != 0) {
      uVar9 = 0;
      __src = (void *)(lVar7 + 0x2c);
      do {
        if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        if (-1 < *(int *)((long)__src + -0xc)) {
          uVar3 = *(undefined4 *)((long)__src + -4);
          memcpy(&local_11c,__src,0x58);
          FUN_070b8df0(param_1,uVar3,&local_11c,2,
                       *(undefined8 *)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) +
                                                      0x80) + 0x20) + 0xc0) + 0x118));
        }
        uVar9 = uVar9 + 1;
        __src = (void *)((long)__src + 100);
      } while (uVar1 != uVar9);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  lVar7 = *(long *)(lVar7 + 0x88);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0406aaec(lVar7);
  }
  lVar8 = *param_2;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto FUN_070b7750;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0406ae20(param_2,lVar7,0);
FUN_070b7750:
  plVar6 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  puVar2 = PTR_DAT_08f65880;
  pplStack_b8 = &local_58;
  local_c0 = 0;
  do {
    local_58 = plVar6;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_070b77c8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar6,*(long *)puVar2,0);
LAB_070b77c8:
    uVar9 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar6 = local_58;
    if ((uVar9 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return;
      }
      lVar7 = *local_58;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 == 0) goto LAB_070b7900;
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x98);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0406aaec(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_070b784c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar6,lVar7,0);
LAB_070b784c:
    (*(code *)*puVar4)(&local_11c,plVar6,puVar4[1]);
    uVar3 = local_11c;
    memcpy(&local_b0,auStack_118,0x58);
    lVar7 = *(long *)(*(long *)(param_4 + 0x20) + 0xc0);
    memcpy(&local_11c,&local_b0,0x58);
    FUN_070b8df0(param_1,uVar3,&local_11c,2,
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(lVar7 + 0x80) + 0x20) + 0xc0) + 0x118));
    plVar6 = local_58;
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_070b791c;
    }
  }
LAB_070b7900:
  puVar4 = (undefined8 *)FUN_0406ae20(local_58,*(long *)PTR_DAT_08f65868,0);
LAB_070b791c:
  (*(code *)*puVar4)(plVar6,puVar4[1]);
  return;
}


