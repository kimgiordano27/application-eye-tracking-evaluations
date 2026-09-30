/*
FUNCTION_NAME: FUN_0748223c
ENTRY_POINT: 0748223c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_8
*/


undefined8 FUN_0748223c(long param_1,long *param_2,void *param_3,char param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  undefined1 auStack_130 [208];
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_07a4fbac(5);
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_0748215c(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar12 = *(long **)(param_1 + 0x30);
  lVar14 = *(long *)(param_1 + 0x18);
  if (plVar12 == (long *)0x0) {
    if (param_2 == (long *)0x0) goto LAB_07482728;
    uVar2 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
  }
  else {
    lVar4 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_04481fb8(lVar4);
    }
    lVar6 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar15 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_07482334;
        }
        uVar9 = uVar9 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac(plVar12,lVar4,1);
LAB_07482334:
    uVar2 = (*(code *)*puVar3)(plVar12,param_2,puVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_07482728;
  uVar13 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar11 = 0;
  if (uVar13 != 0) {
    iVar11 = (int)uVar2 / (int)uVar13;
  }
  uVar5 = uVar2 - iVar11 * uVar13;
  if (uVar13 <= uVar5) {
System_Action<PathOptions,_object,_Quaternion,_object>__Invoke:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  piVar15 = (int *)(lVar4 + (ulong)uVar5 * 4 + 0x20);
  uVar13 = *piVar15 - 1;
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)FUN_0474fcf8(*(undefined8 *)
                                    (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
    if (lVar14 == 0) goto LAB_07482728;
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar13 < uVar5) {
      iVar11 = 0;
      do {
        uVar5 = (uint)uVar7;
        lVar4 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0xe0 + 0x20) == uVar2) {
          if (plVar12 == (long *)0x0) goto LAB_07482728;
          uVar9 = (**(code **)(*plVar12 + 0x1b8))
                            (plVar12,*(undefined8 *)(lVar14 + lVar4 * 0xe0 + 0x28),param_2,
                             *(undefined8 *)(*plVar12 + 0x1c0));
          if ((uVar9 & 1) != 0) {
            if (param_4 == '\x02') goto LAB_07482710;
            if (param_4 != '\x01') {
              return 0;
            }
            memcpy(auStack_130,param_3,0xd0);
            if ((*(uint *)(lVar14 + 0x18) <= uVar13) ||
               (memcpy((void *)(lVar14 + lVar4 * 0xe0 + 0x30),auStack_130,0xd0),
               *(uint *)(lVar14 + 0x18) <= uVar13))
            goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
            goto LAB_07482700;
          }
          uVar5 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar5 <= uVar13) goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
        uVar13 = *(uint *)(lVar14 + lVar4 * 0xe0 + 0x24);
        if ((int)uVar5 <= iVar11) {
          FUN_07a5fa88(0);
        }
        uVar7 = *(undefined8 *)(lVar14 + 0x18);
        iVar11 = iVar11 + 1;
        uVar5 = (uint)uVar7;
      } while (uVar13 < uVar5);
    }
  }
  else {
    if (lVar14 == 0) goto LAB_07482728;
    uVar7 = *(undefined8 *)(lVar14 + 0x18);
    uVar5 = (uint)uVar7;
    if (uVar13 < uVar5) {
      iVar11 = 0;
      do {
        uVar5 = (uint)uVar7;
        lVar4 = (long)(int)uVar13;
        if (*(uint *)(lVar14 + (long)(int)uVar13 * 0xe0 + 0x20) == uVar2) {
          lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
          uVar7 = *(undefined8 *)(lVar14 + lVar4 * 0xe0 + 0x28);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04481fb8(lVar6);
          }
          lVar8 = *plVar12;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0748241c;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_044822ac(plVar12,lVar6,0);
LAB_0748241c:
          uVar9 = (*(code *)*puVar3)(plVar12,uVar7,param_2,puVar3[1]);
          if ((uVar9 & 1) != 0) {
            if (param_4 == '\x02') {
LAB_07482710:
              FUN_07a5f984(param_2,0);
              return 0;
            }
            if (param_4 != '\x01') {
              return 0;
            }
            memcpy(auStack_130,param_3,0xd0);
            if ((uVar13 < *(uint *)(lVar14 + 0x18)) &&
               (memcpy((void *)(lVar14 + lVar4 * 0xe0 + 0x30),auStack_130,0xd0),
               uVar13 < *(uint *)(lVar14 + 0x18))) {
LAB_07482700:
              thunk_FUN_044bb4b4(lVar14 + lVar4 * 0xe0 + 0x30,0);
              return 1;
            }
            goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
          }
          uVar5 = *(uint *)(lVar14 + 0x18);
        }
        if (uVar5 <= uVar13) goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
        uVar13 = *(uint *)(lVar14 + lVar4 * 0xe0 + 0x24);
        if ((int)uVar5 <= iVar11) {
          FUN_07a5fa88(0);
        }
        uVar7 = *(undefined8 *)(lVar14 + 0x18);
        iVar11 = iVar11 + 1;
        uVar5 = (uint)uVar7;
      } while (uVar13 < uVar5);
    }
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar13 = *(uint *)(param_1 + 0x20);
    if (uVar13 == uVar5) {
      FUN_07482b08(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
      if (lVar4 == 0) goto LAB_07482728;
      uVar5 = *(uint *)(lVar4 + 0x18);
      iVar11 = 0;
      if (uVar5 != 0) {
        iVar11 = (int)uVar2 / (int)uVar5;
      }
      uVar1 = uVar2 - iVar11 * uVar5;
      if (uVar5 <= uVar1) goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
      lVar14 = *(long *)(param_1 + 0x18);
      piVar15 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar13 + 1;
    }
    if (lVar14 == 0) {
LAB_07482728:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar13)
    goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
    lVar4 = (long)(int)uVar13;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar13 = *(uint *)(param_1 + 0x24);
    if (*(uint *)(lVar14 + 0x18) <= uVar13)
    goto System_Action<PathOptions,_object,_Quaternion,_object>__Invoke;
    lVar4 = (long)(int)uVar13;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar14 + lVar4 * 0xe0 + 0x24);
  }
  lVar14 = lVar14 + lVar4 * 0xe0;
  *(uint *)(lVar14 + 0x20) = uVar2;
  iVar11 = *piVar15;
  *(long *)(lVar14 + 0x28) = (long)param_2;
  *(int *)(lVar14 + 0x24) = iVar11 + -1;
  thunk_FUN_044bb4b4((long *)(lVar14 + 0x28),param_2);
  memmove((void *)(lVar14 + 0x30),param_3,0xd0);
  thunk_FUN_044bb4b4((void *)(lVar14 + 0x30),0);
  *piVar15 = uVar13 + 1;
  return 1;
}


