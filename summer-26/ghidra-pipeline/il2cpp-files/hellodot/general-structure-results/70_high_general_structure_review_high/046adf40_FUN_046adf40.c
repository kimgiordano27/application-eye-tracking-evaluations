/*
FUNCTION_NAME: FUN_046adf40
ENTRY_POINT: 046adf40
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 FUN_046adf40(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04f428ec(5);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar13 = *(long **)(param_1 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (param_2 == (long *)0x0) goto LAB_046ae248;
      uVar5 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    }
    else {
      lVar7 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto System_Action<NativeArray<NudgeJobData>>__Invoke;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar7,1);
System_Action<NativeArray<NudgeJobData>>__Invoke:
      uVar5 = (*(code *)*puVar6)(plVar13,param_2,puVar6[1]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) {
LAB_046ae248:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar15 = *(uint *)(lVar7 + 0x18);
    uVar5 = uVar5 & 0x7fffffff;
    iVar4 = 0;
    if (uVar15 != 0) {
      iVar4 = (int)uVar5 / (int)uVar15;
    }
    uVar3 = uVar5 - iVar4 * uVar15;
    if (uVar15 <= uVar3) {
LAB_046ae24c:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    uVar15 = *(int *)(lVar7 + (ulong)uVar3 * 4 + 0x20) - 1;
    if (-1 < (int)uVar15) {
      uVar10 = 0xffffffff;
      do {
        lVar7 = *(long *)(param_1 + 0x18);
        if (lVar7 == 0) goto LAB_046ae248;
        if (*(uint *)(lVar7 + 0x18) <= uVar15) goto LAB_046ae24c;
        puVar16 = (uint *)(lVar7 + (ulong)uVar15 * 0x18 + 0x20);
        uVar17 = (ulong)uVar15;
        if (*puVar16 == uVar5) {
          plVar13 = *(long **)(param_1 + 0x30);
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)FUN_02eb80f0(*(undefined8 *)
                                            (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18));
            if (plVar13 == (long *)0x0) goto LAB_046ae248;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined8 *)(lVar7 + uVar17 * 0x18 + 0x28),param_2,
                                *(undefined8 *)(*plVar13 + 0x1c0));
          }
          else {
            if (plVar13 == (long *)0x0) goto LAB_046ae248;
            lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
            uVar14 = *(undefined8 *)(lVar7 + uVar17 * 0x18 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_02ce0978(lVar8);
            }
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_046ae158;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_02ce0a7c(plVar13,lVar8,0);
LAB_046ae158:
            uVar11 = (*(code *)*puVar6)(plVar13,uVar14,param_2,puVar6[1]);
          }
          if ((uVar11 & 1) != 0) {
            if ((int)(uint)uVar10 < 0) {
              lVar8 = *(long *)(param_1 + 0x10);
              if (lVar8 == 0) goto LAB_046ae248;
              if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_046ae24c;
              *(int *)(lVar8 + (ulong)uVar3 * 4 + 0x20) = *(int *)(lVar7 + uVar17 * 0x18 + 0x24) + 1
              ;
            }
            else {
              lVar8 = *(long *)(param_1 + 0x18);
              if (lVar8 == 0) goto LAB_046ae248;
              if (*(uint *)(lVar8 + 0x18) <= (uint)uVar10) goto LAB_046ae24c;
              *(undefined4 *)(lVar8 + uVar10 * 0x18 + 0x24) =
                   *(undefined4 *)(lVar7 + uVar17 * 0x18 + 0x24);
            }
            *puVar16 = 0xffffffff;
            uVar2 = *(undefined4 *)(param_1 + 0x24);
            lVar7 = lVar7 + uVar17 * 0x18;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined4 *)(lVar7 + 0x24) = uVar2;
            *(uint *)(param_1 + 0x24) = uVar15;
            *(ulong *)(param_1 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_1 + 0x28) + 1);
            return 1;
          }
        }
        uVar1 = *(uint *)(lVar7 + uVar17 * 0x18 + 0x24);
        uVar10 = (ulong)uVar15;
        uVar15 = uVar1;
      } while (-1 < (int)uVar1);
    }
  }
  return 0;
}


