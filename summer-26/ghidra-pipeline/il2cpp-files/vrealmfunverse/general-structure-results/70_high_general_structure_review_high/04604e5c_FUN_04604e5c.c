/*
FUNCTION_NAME: FUN_04604e5c
ENTRY_POINT: 04604e5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8
FUN_04604e5c(long param_1,undefined8 param_2,undefined8 *param_3,char param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_70;
  undefined8 local_68;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  local_68 = param_2;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_04604d7c(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar11 = *(long **)(param_1 + 0x30);
  lVar15 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(*(long *)(param_5 + 0x20) + 0xc0);
  if (plVar11 == (long *)0x0) {
    uVar2 = FUN_04d98e08(&local_68,*(undefined8 *)(lVar4 + 400));
  }
  else {
    lVar4 = *(long *)(lVar4 + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02b76218(lVar4);
    }
    lVar5 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar4) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          goto 
          System_Collections_Generic_List_Enumerator<SerializedKeyValuePair<object,_int>>__MoveNext;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02b7654c(plVar11,lVar4,1);
System_Collections_Generic_List_Enumerator<SerializedKeyValuePair<object,_int>>__MoveNext:
    uVar2 = (*(code *)*puVar3)(plVar11,param_2,puVar3[1]);
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) goto LAB_0460532c;
  uVar14 = *(uint *)(lVar4 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar9 = 0;
  if (uVar14 != 0) {
    iVar9 = (int)uVar2 / (int)uVar14;
  }
  uVar12 = uVar2 - iVar9 * uVar14;
  if (uVar12 < uVar14) {
    piVar10 = (int *)(lVar4 + (ulong)uVar12 * 4 + 0x20);
    uVar14 = *piVar10 - 1;
    if (plVar11 == (long *)0x0) {
      if (lVar15 == 0) goto LAB_0460532c;
      uVar13 = *(undefined8 *)(lVar15 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar9 = 0;
        lVar4 = lVar15 + 0x20;
        do {
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x38) == uVar2) {
            plVar11 = (long *)FUN_03422040(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_04605328;
            if (plVar11 == (long *)0x0) goto LAB_0460532c;
            uVar7 = (**(code **)(*plVar11 + 0x1b8))
                              (plVar11,*(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x38 + 8),
                               local_68,*(undefined8 *)(*plVar11 + 0x1c0));
            if ((uVar7 & 1) != 0) {
              if (param_4 == '\x02') goto LAB_046052fc;
              if (param_4 != '\x01') {
                return 0;
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_04605328;
              uVar18 = param_3[1];
              uVar17 = *param_3;
              uVar16 = param_3[3];
              uVar13 = param_3[2];
              lVar4 = lVar4 + (long)(int)uVar14 * 0x38;
              *(undefined8 *)(lVar4 + 0x30) = param_3[4];
              *(undefined8 *)(lVar4 + 0x18) = uVar18;
              *(undefined8 *)(lVar4 + 0x10) = uVar17;
              *(undefined8 *)(lVar4 + 0x28) = uVar16;
              *(undefined8 *)(lVar4 + 0x20) = uVar13;
              if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_04605328;
              goto LAB_046052ec;
            }
            uVar12 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_04605328;
          uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x38 + 4);
          if ((int)uVar12 <= iVar9) {
            FUN_04d9cb20(0);
          }
          uVar13 = *(undefined8 *)(lVar15 + 0x18);
          iVar9 = iVar9 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    else {
      if (lVar15 == 0) goto LAB_0460532c;
      uVar13 = *(undefined8 *)(lVar15 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar9 = 0;
        lVar4 = lVar15 + 0x20;
        do {
          uVar16 = local_68;
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar4 + (long)(int)uVar14 * 0x38) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar4 + (long)(int)uVar14 * 0x38 + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02b76218(lVar5);
            }
            lVar6 = *plVar11;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_0460503c;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02b7654c(plVar11,lVar5,0);
LAB_0460503c:
            uVar7 = (*(code *)*puVar3)(plVar11,uVar13,uVar16,puVar3[1]);
            if ((uVar7 & 1) != 0) {
              if (param_4 == '\x02') {
LAB_046052fc:
                local_70 = local_68;
                uVar13 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                   (*(undefined8 *)
                                     (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),&local_70)
                ;
                FUN_04d9ca1c(uVar13,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar14 * 0x38;
                uVar18 = param_3[1];
                uVar17 = *param_3;
                uVar16 = param_3[3];
                uVar13 = param_3[2];
                *(undefined8 *)(lVar4 + 0x30) = param_3[4];
                *(undefined8 *)(lVar4 + 0x18) = uVar18;
                *(undefined8 *)(lVar4 + 0x10) = uVar17;
                *(undefined8 *)(lVar4 + 0x28) = uVar16;
                *(undefined8 *)(lVar4 + 0x20) = uVar13;
                if (uVar14 < *(uint *)(lVar15 + 0x18)) {
LAB_046052ec:
                  thunk_FUN_02bb0e9c(lVar4 + 0x10,0);
                  return 1;
                }
              }
              goto LAB_04605328;
            }
            uVar12 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_04605328;
          uVar14 = *(uint *)(lVar4 + (long)(int)uVar14 * 0x38 + 4);
          if ((int)uVar12 <= iVar9) {
            FUN_04d9cb20(0);
          }
          uVar13 = *(undefined8 *)(lVar15 + 0x18);
          iVar9 = iVar9 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == uVar12) {
        FUN_046056dc(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b8));
        lVar4 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar12 + 1;
        if (lVar4 == 0) goto LAB_0460532c;
        uVar12 = *(uint *)(lVar4 + 0x18);
        iVar9 = 0;
        if (uVar12 != 0) {
          iVar9 = (int)uVar2 / (int)uVar12;
        }
        uVar1 = uVar2 - iVar9 * uVar12;
        if (uVar12 <= uVar1) goto LAB_04605328;
        lVar15 = *(long *)(param_1 + 0x18);
        piVar10 = (int *)(lVar4 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar15 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
      }
      if (lVar15 == 0) {
LAB_0460532c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_04605328;
      lVar15 = lVar15 + (long)(int)uVar14 * 0x38;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x24);
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      if (uVar12 <= uVar14) goto LAB_04605328;
      lVar15 = lVar15 + (long)(int)uVar14 * 0x38;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + 0x24);
    }
    *(uint *)(lVar15 + 0x20) = uVar2;
    *(int *)(lVar15 + 0x24) = *piVar10 + -1;
    *(undefined8 *)(lVar15 + 0x28) = local_68;
    uVar16 = param_3[1];
    uVar13 = *param_3;
    uVar18 = param_3[3];
    uVar17 = param_3[2];
    *(undefined8 *)(lVar15 + 0x50) = param_3[4];
    *(undefined8 *)(lVar15 + 0x38) = uVar16;
    *(undefined8 *)(lVar15 + 0x30) = uVar13;
    *(undefined8 *)(lVar15 + 0x48) = uVar18;
    *(undefined8 *)(lVar15 + 0x40) = uVar17;
    thunk_FUN_02bb0e9c(lVar15 + 0x30,0);
    *piVar10 = uVar14 + 1;
    return 1;
  }
LAB_04605328:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


