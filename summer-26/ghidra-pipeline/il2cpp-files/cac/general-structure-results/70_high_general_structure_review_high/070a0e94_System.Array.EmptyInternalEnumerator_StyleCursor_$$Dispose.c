/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StyleCursor>$$Dispose
ENTRY_POINT: 070a0e94
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<StyleCursor>__Dispose(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint in_w9;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  int unaff_w20;
  long unaff_x24;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 *in_stack_00000010;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  iVar3 = 0;
  if (in_w9 != 0) {
    iVar3 = unaff_w20 / (int)in_w9;
  }
  uVar2 = unaff_w20 - iVar3 * in_w9;
  if (in_w9 <= uVar2) {
LAB_070a10d8:
                    /* WARNING: Subroutine does not return */
    FUN_03f13634();
  }
  uVar11 = *(int *)(param_1 + (ulong)uVar2 * 4 + 0x20) - 1;
  if (-1 < (int)uVar11) {
    uVar12 = 0xffffffff;
    do {
      lVar6 = *(long *)(unaff_x24 + 0x18);
      if (lVar6 == 0) goto LAB_070a10d4;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_070a10d8;
      lVar6 = lVar6 + 0x20;
      piVar13 = (int *)(lVar6 + (ulong)uVar11 * 0x18);
      uVar14 = (ulong)uVar11;
      if (*piVar13 == unaff_w20) {
        plVar10 = *(long **)(unaff_x24 + 0x30);
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)FUN_044a67fc(*(undefined8 *)
                                          (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) +
                                          0x18));
          if (plVar10 == (long *)0x0) goto LAB_070a10d4;
          uVar8 = (**(code **)(*plVar10 + 0x1b8))
                            (plVar10,*(undefined4 *)(lVar6 + uVar14 * 0x18 + 8),
                             in_stack_00000028._4_4_,*(undefined8 *)(*plVar10 + 0x1c0));
        }
        else {
          lVar5 = *(long *)(*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 8);
          uVar1 = *(undefined4 *)(lVar6 + uVar14 * 0x18 + 8);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f4b260(lVar5);
          }
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar5) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_070a0fc8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f4b594(plVar10,lVar5,0);
LAB_070a0fc8:
          uVar8 = (*(code *)*puVar4)(plVar10,uVar1,in_stack_00000028._4_4_,puVar4[1]);
        }
        if ((uVar8 & 1) != 0) {
          if ((int)(uint)uVar12 < 0) {
            lVar5 = *(long *)(unaff_x24 + 0x10);
            if (lVar5 == 0) goto LAB_070a10d4;
            if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_070a10d8;
            *(int *)(lVar5 + (ulong)uVar2 * 4 + 0x20) = *(int *)(lVar6 + uVar14 * 0x18 + 4) + 1;
          }
          else {
            lVar5 = *(long *)(unaff_x24 + 0x18);
            if (lVar5 == 0) {
LAB_070a10d4:
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            if (*(uint *)(lVar5 + 0x18) <= (uint)uVar12) goto LAB_070a10d8;
            *(undefined4 *)(lVar5 + uVar12 * 0x18 + 0x24) =
                 *(undefined4 *)(lVar6 + uVar14 * 0x18 + 4);
          }
          lVar6 = lVar6 + uVar14 * 0x18;
          *in_stack_00000010 = *(undefined8 *)(lVar6 + 0x10);
          thunk_FUN_03f86000();
          uVar1 = *(undefined4 *)(unaff_x24 + 0x24);
          *piVar13 = -1;
          *(undefined4 *)(lVar6 + 4) = uVar1;
          *(undefined8 *)(lVar6 + 0x10) = 0;
          *(uint *)(unaff_x24 + 0x24) = uVar11;
          *(ulong *)(unaff_x24 + 0x28) =
               CONCAT44((int)((ulong)*(undefined8 *)(unaff_x24 + 0x28) >> 0x20) + 1,
                        (int)*(undefined8 *)(unaff_x24 + 0x28) + 1);
          return 1;
        }
      }
      uVar12 = (ulong)uVar11;
      uVar11 = *(uint *)(lVar6 + uVar14 * 0x18 + 4);
    } while (-1 < (int)uVar11);
  }
  *in_stack_00000010 = 0;
  return 0;
}


