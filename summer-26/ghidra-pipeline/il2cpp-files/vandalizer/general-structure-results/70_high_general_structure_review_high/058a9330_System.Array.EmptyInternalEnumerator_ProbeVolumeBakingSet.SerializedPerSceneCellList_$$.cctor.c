/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$.cctor
ENTRY_POINT: 058a9330
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<ProbeVolumeBakingSet_SerializedPerSceneCellList>___cctor(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  uint uVar12;
  undefined8 *unaff_x25;
  long unaff_x26;
  int *piVar13;
  uint unaff_w29;
  int iVar14;
  undefined8 uVar15;
  uint uStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar3 = (undefined8 *)FUN_0322c1e8();
  uVar2 = (*(code *)*puVar3)();
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (lVar7 == 0) goto LAB_058a971c;
  uVar12 = *(uint *)(lVar7 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar14 = 0;
  if (uVar12 != 0) {
    iVar14 = (int)uVar2 / (int)uVar12;
  }
  uVar6 = uVar2 - iVar14 * uVar12;
  if (uVar6 < uVar12) {
    piVar13 = (int *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
    uVar12 = *piVar13 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_058a971c;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x24 + 0x20) == uVar2) {
            plVar4 = (long *)FUN_03e98388(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_058a9718;
            if (plVar4 == (long *)0x0) goto LAB_058a971c;
            uVar10 = (**(code **)(*plVar4 + 0x1b8))
                               (plVar4,*(undefined4 *)(unaff_x26 + lVar7 * 0x24 + 0x28),
                                in_stack_00000028._4_4_,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar10 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) goto LAB_058a96ec;
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) goto LAB_058a96e0;
              goto LAB_058a9718;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_058a9718;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x24 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_05e22e28(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_058a971c;
      uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar6 = (uint)uVar8;
      if (uVar12 < uVar6) {
        iVar14 = 0;
        uStack0000000000000004 = unaff_w29;
        do {
          uVar6 = (uint)uVar8;
          lVar7 = (long)(int)uVar12;
          if (*(uint *)(unaff_x26 + (long)(int)uVar12 * 0x24 + 0x20) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_0322bef4(lVar5);
            }
            lVar9 = *unaff_x23;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                  goto 
                  System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_Reset
                  ;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar3 = (undefined8 *)FUN_0322c1e8();

            System_Array_EmptyInternalEnumerator<ProbeVolumePerSceneData_ObsoleteSerializablePerScenarioDataItem>__System_Collections_IEnumerator_Reset
            :
            uVar10 = (*(code *)*puVar3)();
            if ((uVar10 & 1) != 0) {
              if ((uStack0000000000000004 & 0xff) == 2) {
LAB_058a96ec:
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028._4_4_);
                uVar8 = thunk_FUN_0322ed78(*(undefined8 *)
                                            (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70),
                                           &stack0x00000010);
                FUN_05e22d24(uVar8,0);
                return 0;
              }
              if ((uStack0000000000000004 & 0xff) != 1) {
                return 0;
              }
              in_stack_00000020 = unaff_x25[2];
              in_stack_00000018 = unaff_x25[1];
              in_stack_00000010 = *unaff_x25;
              if (uVar12 < *(uint *)(unaff_x26 + 0x18)) {
LAB_058a96e0:
                lVar7 = unaff_x26 + lVar7 * 0x24;
                *(undefined8 *)(lVar7 + 0x3c) = in_stack_00000020;
                *(undefined8 *)(lVar7 + 0x34) = in_stack_00000018;
                *(undefined8 *)(lVar7 + 0x2c) = in_stack_00000010;
                return 1;
              }
              goto LAB_058a9718;
            }
            uVar6 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar6 <= uVar12) goto LAB_058a9718;
          uVar12 = *(uint *)(unaff_x26 + lVar7 * 0x24 + 0x24);
          if ((int)uVar6 <= iVar14) {
            FUN_05e22e28(0);
          }
          uVar8 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar14 = iVar14 + 1;
          uVar6 = (uint)uVar8;
        } while (uVar12 < uVar6);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar12 = *(uint *)(unaff_x20 + 0x20);
      if (uVar12 == uVar6) {
        FUN_058a9ac8();
        lVar7 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar7 == 0) goto LAB_058a971c;
        uVar6 = *(uint *)(lVar7 + 0x18);
        iVar14 = 0;
        if (uVar6 != 0) {
          iVar14 = (int)uVar2 / (int)uVar6;
        }
        uVar1 = uVar2 - iVar14 * uVar6;
        if (uVar6 <= uVar1) goto LAB_058a9718;
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        piVar13 = (int *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        unaff_x26 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
      }
      if (unaff_x26 == 0) {
LAB_058a971c:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_058a9718;
      lVar7 = (long)(int)uVar12;
    }
    else {
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      uVar12 = *(uint *)(unaff_x20 + 0x24);
      if (*(uint *)(unaff_x26 + 0x18) <= uVar12) goto LAB_058a9718;
      lVar7 = (long)(int)uVar12;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar7 * 0x24 + 0x24);
    }
    lVar7 = unaff_x26 + lVar7 * 0x24;
    *(uint *)(lVar7 + 0x20) = uVar2;
    *(int *)(lVar7 + 0x24) = *piVar13 + -1;
    *(undefined4 *)(lVar7 + 0x28) = in_stack_00000028._4_4_;
    uVar15 = unaff_x25[1];
    uVar8 = *unaff_x25;
    *(undefined8 *)(lVar7 + 0x3c) = unaff_x25[2];
    *(undefined8 *)(lVar7 + 0x34) = uVar15;
    *(undefined8 *)(lVar7 + 0x2c) = uVar8;
    *piVar13 = uVar12 + 1;
    return 1;
  }
LAB_058a9718:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


