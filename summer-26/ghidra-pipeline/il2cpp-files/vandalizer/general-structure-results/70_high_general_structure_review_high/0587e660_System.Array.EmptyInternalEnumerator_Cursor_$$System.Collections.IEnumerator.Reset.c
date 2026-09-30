/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<Cursor>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0587e660
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<Cursor>__System_Collections_IEnumerator_Reset
          (long param_1,undefined8 param_2,undefined8 *param_3,char param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w8;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined4 unaff_w24;
  uint uVar14;
  long lVar15;
  int *piVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  *(int *)(param_1 + 0x2c) = in_w8 + 1;
  if (in_x9 == 0) {
    FUN_0587e554(param_1,0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10));
  }
  plVar13 = *(long **)(param_1 + 0x30);
  lVar15 = *(long *)(param_1 + 0x18);
  if (plVar13 == (long *)0x0) {
    uVar4 = FUN_03881938(&stack0x00000028,
                         *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x188));
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
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
          goto System_Array_EmptyInternalEnumerator<CustomAttributeNamedArgument>__Dispose;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_0322c1e8(plVar13,lVar6,1);
System_Array_EmptyInternalEnumerator<CustomAttributeNamedArgument>__Dispose:
    uVar4 = (*(code *)*puVar5)(plVar13,unaff_w24,puVar5[1]);
  }
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) goto LAB_0587eb28;
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
      if (lVar15 == 0) goto LAB_0587eb28;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        do {
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x28 + 0x20) == uVar4) {
            plVar13 = (long *)FUN_04056ed0(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(lVar15 + 0x18) <= uVar14)
            goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
            if (plVar13 == (long *)0x0) goto LAB_0587eb28;
            uVar11 = (**(code **)(*plVar13 + 0x1b8))
                               (plVar13,*(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x28),
                                in_stack_00000028,*(undefined8 *)(*plVar13 + 0x1c0));
            if ((uVar11 & 1) != 0) {
              if (param_4 == '\x02') goto LAB_0587eaf8;
              if (param_4 != '\x01') {
                return 0;
              }
              in_stack_00000020 = param_3[2];
              in_stack_00000018 = param_3[1];
              in_stack_00000010 = *param_3;
              if (*(uint *)(lVar15 + 0x18) <= uVar14)
              goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
              lVar8 = lVar15 + lVar6 * 0x28;
              *(undefined8 *)(lVar8 + 0x40) = in_stack_00000020;
              *(undefined8 *)(lVar8 + 0x38) = in_stack_00000018;
              *(undefined8 *)(lVar8 + 0x30) = in_stack_00000010;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) goto LAB_0587eae8;
              goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x28 + 0x24);
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
      if (lVar15 == 0) goto LAB_0587eb28;
      uVar9 = *(undefined8 *)(lVar15 + 0x18);
      uVar7 = (uint)uVar9;
      if (uVar14 < uVar7) {
        iVar17 = 0;
        do {
          uVar3 = in_stack_00000028;
          uVar7 = (uint)uVar9;
          lVar6 = (long)(int)uVar14;
          if (*(uint *)(lVar15 + (long)(int)uVar14 * 0x28 + 0x20) == uVar4) {
            lVar8 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 8);
            uVar1 = *(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x28);
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
                  goto LAB_0587e818;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_0322c1e8(plVar13,lVar8,0);
LAB_0587e818:
            uVar11 = (*(code *)*puVar5)(plVar13,uVar1,uVar3,puVar5[1]);
            if ((uVar11 & 1) != 0) {
              if (param_4 == '\x02') {
LAB_0587eaf8:
                in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,in_stack_00000028);
                uVar9 = thunk_FUN_0322ed78(*(undefined8 *)
                                            (*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x70),
                                           &stack0x00000010);
                FUN_05e22d24(uVar9,0);
                return 0;
              }
              if (param_4 != '\x01') {
                return 0;
              }
              in_stack_00000020 = param_3[2];
              in_stack_00000018 = param_3[1];
              in_stack_00000010 = *param_3;
              if (uVar14 < *(uint *)(lVar15 + 0x18)) {
                lVar8 = lVar15 + lVar6 * 0x28;
                *(undefined8 *)(lVar8 + 0x40) = in_stack_00000020;
                *(undefined8 *)(lVar8 + 0x38) = in_stack_00000018;
                *(undefined8 *)(lVar8 + 0x30) = in_stack_00000010;
                if (uVar14 < *(uint *)(lVar15 + 0x18)) {
LAB_0587eae8:
                  thunk_FUN_0329bf60(lVar15 + lVar6 * 0x28 + 0x30,0);
                  return 1;
                }
              }
              goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
            }
            uVar7 = *(uint *)(lVar15 + 0x18);
          }
          if (uVar7 <= uVar14) goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
          uVar14 = *(uint *)(lVar15 + lVar6 * 0x28 + 0x24);
          if ((int)uVar7 <= iVar17) {
            FUN_05e22e28(0);
          }
          uVar9 = *(undefined8 *)(lVar15 + 0x18);
          iVar17 = iVar17 + 1;
          uVar7 = (uint)uVar9;
        } while (uVar14 < uVar7);
      }
    }
    if (*(int *)(param_1 + 0x28) < 1) {
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == uVar7) {
        FUN_0587eed4(param_1,*(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x1b0));
        lVar6 = *(long *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
        if (lVar6 == 0) goto LAB_0587eb28;
        uVar7 = *(uint *)(lVar6 + 0x18);
        iVar17 = 0;
        if (uVar7 != 0) {
          iVar17 = (int)uVar4 / (int)uVar7;
        }
        uVar2 = uVar4 - iVar17 * uVar7;
        if (uVar7 <= uVar2) goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
        lVar15 = *(long *)(param_1 + 0x18);
        piVar16 = (int *)(lVar6 + (ulong)uVar2 * 4 + 0x20);
      }
      else {
        lVar15 = *(long *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x20) = uVar14 + 1;
      }
      if (lVar15 == 0) {
LAB_0587eb28:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
      lVar6 = (long)(int)uVar14;
    }
    else {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      uVar14 = *(uint *)(param_1 + 0x24);
      if (*(uint *)(lVar15 + 0x18) <= uVar14)
      goto System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor;
      lVar6 = (long)(int)uVar14;
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(lVar15 + lVar6 * 0x28 + 0x24);
    }
    lVar15 = lVar15 + lVar6 * 0x28;
    *(uint *)(lVar15 + 0x20) = uVar4;
    *(int *)(lVar15 + 0x24) = *piVar16 + -1;
    *(undefined4 *)(lVar15 + 0x28) = in_stack_00000028;
    uVar18 = param_3[1];
    uVar9 = *param_3;
    *(undefined8 *)(lVar15 + 0x40) = param_3[2];
    *(undefined8 *)(lVar15 + 0x38) = uVar18;
    *(undefined8 *)(lVar15 + 0x30) = uVar9;
    thunk_FUN_0329bf60(lVar15 + 0x30,0);
    *piVar16 = uVar14 + 1;
    return 1;
  }
System_Array_EmptyInternalEnumerator<DataSourceContext>___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


