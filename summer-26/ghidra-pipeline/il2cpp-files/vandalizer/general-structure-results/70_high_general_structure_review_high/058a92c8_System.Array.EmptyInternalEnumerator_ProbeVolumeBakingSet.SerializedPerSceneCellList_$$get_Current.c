/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$get_Current
ENTRY_POINT: 058a92c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>__get_Current
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long unaff_x21;
  long *plVar13;
  undefined4 unaff_w24;
  uint uVar14;
  undefined8 *unaff_x25;
  long lVar15;
  int *piVar16;
  uint unaff_w29;
  int iVar17;
  undefined8 uVar18;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  FUN_058a9194(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10));
  plVar13 = *(long **)(unaff_x20 + 0x30);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_05e1e2bc((long)&stack0x00000028 + 4,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x188));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0322bef4(lVar6);
    }
    lVar8 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_058a9364;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar13,lVar6,1);
LAB_058a9364:
    uVar4 = (*(code *)*puVar5)(plVar13,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_058a971c;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar17 = 0;
  if (uVar14 != 0) {
    iVar17 = (int)uVar4 / (int)uVar14;
  }
  uVar7 = uVar4 - iVar17 * uVar14;
  if (uVar7 < uVar14) {
    piVar16 = (int *)(lVar6 + (ulong)uVar7 * 4 + 0x20);
    uVar14 = *piVar16 - 1;
    if (plVar13 == (long *)0x0) {
      if (lVar15 == 0) goto LAB_058a971c;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x24 + 0x20) == uVar4) {
            plVar13 = (long *)FUN_03e98388(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_058a9718;
            if (plVar13 == (long *)0x0) goto LAB_058a971c;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar15 + lVar6 * 0x24 + 0x28),
                                in_stack_00000028._4_4_,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar11 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_058a96ec;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) goto LAB_058a96e0;
              goto LAB_058a9718;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto LAB_058a9718;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x24 + 0x24);
          if ((int)uVar7 <= iVar17) {
            FUN_05e22e28(0);
          }
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          iVar17 = iVar17 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar14 < uVar7);
      }
    }
    else {
      if (lVar15 == 0) goto LAB_058a971c;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar3 = in_stack_00000028._4_4_;
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x24 + 0x20) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar15 + lVar6 * 0x24 + 0x28);
            if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_0322bef4(lVar8);
            }
            lVar10 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto 
                  System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_Reset
                  ;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar13,lVar8,0);

            System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_Reset
            :
            uVar11 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
            if ((uVar11 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
LAB_058a96ec:
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
                uVar9 = thunk_FUN_0322ed78(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           &stack0x00000010);
                FUN_05e22d24(uVar9,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
LAB_058a96e0:
                lVar15 = lVar15 + lVar6 * 0x24;
                *(undefined8 *)(lVar15 + 0x3c) = in_stack_00000020;
                *(undefined8 *)(lVar15 + 0x34) = in_stack_00000018;
                *(undefined8 *)(lVar15 + 0x2c) = in_stack_00000010;
                return 1;
              }
              goto LAB_058a9718;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto LAB_058a9718;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x24 + 0x24);
          if ((int)uVar7 <= iVar17) {
            FUN_05e22e28(0);
          }
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          iVar17 = iVar17 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar14 < uVar7);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar7) {
        FUN_058a9ac8();
        lVar6 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_058a971c;
        uVar7 = *(uint *)(lVar6 + 0x18);
        iVar17 = 0;
        if (uVar7 != 0) {
          iVar17 = (int)uVar4 / (int)uVar7;
        }
        uVar2 = uVar4 - iVar17 * uVar7;
        if (uVar7 <= uVar2) goto LAB_058a9718;
        lVar15 = *(long *)(unaff_x20 + 0x18);
        piVar16 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar15 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (lVar15 == 0) {
LAB_058a971c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_058a9718;
      lVar6 = (long)(int)uVar14;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_058a9718;
      lVar6 = (long)(int)uVar14;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar15 + lVar6 * 0x24 + 0x24);
    }
    lVar15 = lVar15 + lVar6 * 0x24;
    *(uint *)(lVar15 + 0x20) = uVar4;
    *(int *)(lVar15 + 0x24) = *piVar16 + -1;
    *(undefined4 *)(lVar15 + 0x28) = in_stack_00000028._4_4_;
    uVar18 = unaff_x25[1];
    uVar9 = *unaff_x25;
    *(undefined8 *)(lVar15 + 0x3c) = unaff_x25[2];
    *(undefined8 *)(lVar15 + 0x34) = uVar18;
    *(undefined8 *)(lVar15 + 0x2c) = uVar9;
    *piVar16 = uVar14 + 1;
    return 1;
  }
LAB_058a9718:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


