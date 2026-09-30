/*
FUNCTION_NAME: FUN_056ef480
ENTRY_POINT: 056ef480
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


undefined8 FUN_056ef480(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(5);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (param_2 == (long *)0x0)
      goto System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose;
      uVar4 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    }
    else {
      lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar7 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_056ef550;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_0367cd30(plVar12,lVar6,1);
LAB_056ef550:
      uVar4 = (*(code *)*puVar5)(plVar12,param_2,puVar5[1]);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 == 0) {
System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar14 = *(uint *)(lVar6 + 0x18);
    uVar4 = uVar4 & 0x7fffffff;
    iVar3 = 0;
    if (uVar14 != 0) {
      iVar3 = (int)uVar4 / (int)uVar14;
    }
    uVar2 = uVar4 - iVar3 * uVar14;
    if (uVar14 <= uVar2) {
System_Array_EmptyInternalEnumerator<InstanceHandle>__MoveNext:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    uVar14 = *(int *)(lVar6 + (ulong)uVar2 * 4 + 0x20) - 1;
    if (-1 < (int)uVar14) {
      uVar9 = 0xffffffff;
      do {
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar6 == 0) goto System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose;
        if (*(uint *)(lVar6 + 0x18) <= uVar14)
        goto System_Array_EmptyInternalEnumerator<InstanceHandle>__MoveNext;
        lVar6 = lVar6 + 0x20;
        puVar16 = (uint *)(lVar6 + (ulong)uVar14 * 0x18);
        uVar15 = (ulong)uVar14;
        if (*puVar16 == uVar4) {
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)FUN_03b1c798(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar12 == (long *)0x0)
            goto System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose;
            uVar10 = (**(code **)(*plVar12 + 0x1b8))
                               (plVar12,*(undefined8 *)(lVar6 + uVar15 * 0x18 + 8),param_2,
                                *(undefined8 *)(*plVar12 + 0x1c0));
          }
          else {
            lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar13 = *(undefined8 *)(lVar6 + uVar15 * 0x18 + 8);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_0367c9fc(lVar7);
            }
            lVar8 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar7) {
                  puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                  goto FUN_056ef69c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_0367cd30(plVar12,lVar7,0);
FUN_056ef69c:
            uVar10 = (*(code *)*puVar5)(plVar12,uVar13,param_2,puVar5[1]);
          }
          if ((uVar10 & 1) != 0) {
            if ((int)(uint)uVar9 < 0) {
              lVar7 = *(long *)(param_1 + 0x10);
              if (lVar7 == 0) goto System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose;
              if (*(uint *)(lVar7 + 0x18) <= uVar2)
              goto System_Array_EmptyInternalEnumerator<InstanceHandle>__MoveNext;
              *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar15 * 0x18 + 4) + 1;
            }
            else {
              lVar7 = *(long *)(param_1 + 0x18);
              if (lVar7 == 0) goto System_Array_EmptyInternalEnumerator<InstanceHandle>__Dispose;
              if (*(uint *)(lVar7 + 0x18) <= (uint)uVar9)
              goto System_Array_EmptyInternalEnumerator<InstanceHandle>__MoveNext;
              *(undefined4 *)(lVar7 + uVar9 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar6 + uVar15 * 0x18 + 4);
            }
            uVar1 = *(undefined4 *)(param_1 + 0x24);
            lVar6 = lVar6 + uVar15 * 0x18;
            *puVar16 = 0xffffffff;
            *(undefined4 *)(lVar6 + 4) = uVar1;
            *(undefined8 *)(lVar6 + 8) = 0;
            *(uint *)(param_1 + 0x24) = uVar14;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar9 = (ulong)uVar14;
        uVar14 = *(uint *)(lVar6 + uVar15 * 0x18 + 4);
      } while (-1 < (int)uVar14);
    }
  }
  return 0;
}


