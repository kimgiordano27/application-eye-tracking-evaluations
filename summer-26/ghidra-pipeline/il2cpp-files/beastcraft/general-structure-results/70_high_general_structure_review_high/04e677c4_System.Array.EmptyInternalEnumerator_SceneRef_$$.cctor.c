/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<SceneRef>$$.cctor
ENTRY_POINT: 04e677c4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<SceneRef>___cctor(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar11;
  int *piVar12;
  long *unaff_x24;
  long unaff_x25;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uStack000000000000001c;
  long in_stack_00000028;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  
  if (param_1 == 0) goto LAB_04e67be0;
  uVar11 = *(uint *)(param_1 + 0x18);
  param_2 = param_2 & 0x7fffffff;
  iVar15 = 0;
  if (uVar11 != 0) {
    iVar15 = (int)param_2 / (int)uVar11;
  }
  uVar13 = param_2 - iVar15 * uVar11;
  if (uVar11 <= uVar13) {
LAB_04e67bdc:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
  piVar12 = (int *)(param_1 + (ulong)uVar13 * 4 + 0x20);
  uVar11 = *piVar12 - 1;
  uStack000000000000001c = unaff_w19;
  if (unaff_x24 == (long *)0x0) {
    if (unaff_x25 == 0) goto LAB_04e67be0;
    uVar14 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar13 = (uint)uVar14;
    if (uVar11 < uVar13) {
      iVar15 = 0;
      lVar8 = unaff_x25 + 0x20;
      do {
        uVar13 = (uint)uVar14;
        if (*(uint *)(lVar8 + (long)(int)uVar11 * 0x28) == param_2) {
          plVar5 = (long *)FUN_04e76a4c(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) +
                                         0x18));
          if (*(uint *)(unaff_x25 + 0x18) <= uVar11) goto LAB_04e67bdc;
          if (plVar5 == (long *)0x0) goto LAB_04e67be0;
          lVar6 = lVar8 + (long)(int)uVar11 * 0x28;
          in_stack_000000b8 = unaff_x20[1];
          in_stack_000000b0 = *unaff_x20;
          in_stack_000000c0 = *(undefined4 *)(unaff_x20 + 2);
          in_stack_000000d8 = *(undefined8 *)(lVar6 + 0x10);
          in_stack_000000d0 = *(undefined8 *)(lVar6 + 8);
          in_stack_000000e0 = *(undefined4 *)(lVar6 + 0x18);
          uVar9 = (**(code **)(*plVar5 + 0x1b8))
                            (plVar5,&stack0x000000d0,&stack0x000000b0,
                             *(undefined8 *)(*plVar5 + 0x1c0));
          if ((uVar9 & 1) != 0) {
            if ((uStack000000000000001c & 0xff) == 2) goto LAB_04e67ba4;
            if ((uStack000000000000001c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(unaff_x25 + 0x18) <= uVar11) goto LAB_04e67bdc;
            *(undefined8 *)(lVar8 + (long)(int)uVar11 * 0x28 + 0x20) = unaff_x29;
            goto 
            System_Array_EmptyInternalEnumerator<SerializedCommand>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar13 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar13 <= uVar11) goto LAB_04e67bdc;
        uVar11 = *(uint *)(lVar8 + (long)(int)uVar11 * 0x28 + 4);
        if ((int)uVar13 <= iVar15) {
          FUN_0562761c(0);
        }
        uVar14 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar15 = iVar15 + 1;
        uVar13 = (uint)uVar14;
      } while (uVar11 < uVar13);
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_04e67be0;
    uVar14 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar13 = (uint)uVar14;
    if (uVar11 < uVar13) {
      lVar8 = unaff_x25 + 0x20;
      iVar15 = 0;
      do {
        uVar13 = (uint)uVar14;
        if (*(uint *)(lVar8 + (long)(int)uVar11 * 0x28) == param_2) {
          lVar6 = lVar8 + (long)(int)uVar11 * 0x28;
          uVar17 = *(undefined8 *)(lVar6 + 0x10);
          uVar14 = *(undefined8 *)(lVar6 + 8);
          uVar1 = *(undefined4 *)(lVar6 + 0x18);
          uVar18 = unaff_x20[1];
          uVar16 = *unaff_x20;
          lVar6 = *(long *)(*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) + 8);
          uVar2 = *(undefined4 *)(unaff_x20 + 2);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_02e7568c(lVar6);
          }
          lVar7 = *unaff_x24;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == lVar6) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04e678c0;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_02e759c0();
LAB_04e678c0:
          in_stack_000000b0 = uVar16;
          in_stack_000000b8 = uVar18;
          in_stack_000000c0 = uVar2;
          in_stack_000000d0 = uVar14;
          in_stack_000000d8 = uVar17;
          in_stack_000000e0 = uVar1;
          uVar9 = (*(code *)*puVar4)();
          if ((uVar9 & 1) != 0) {
            if ((uStack000000000000001c & 0xff) == 2) {
LAB_04e67ba4:
              in_stack_000000d8 = unaff_x20[1];
              in_stack_000000d0 = *unaff_x20;
              in_stack_000000e0 = *(undefined4 *)(unaff_x20 + 2);
              uVar14 = thunk_FUN_02e786f0(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) +
                                           0x70),&stack0x000000d0);
              FUN_05627518(uVar14,0);
              return 0;
            }
            if ((uStack000000000000001c & 0xff) != 1) {
              return 0;
            }
            if (uVar11 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined8 *)(lVar8 + (long)(int)uVar11 * 0x28 + 0x20) = unaff_x29;
System_Array_EmptyInternalEnumerator<SerializedCommand>__System_Collections_IEnumerator_Reset:
              thunk_FUN_02ee2be8();
              return 1;
            }
            goto LAB_04e67bdc;
          }
          uVar13 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar13 <= uVar11) goto LAB_04e67bdc;
        uVar11 = *(uint *)(lVar8 + (long)(int)uVar11 * 0x28 + 4);
        if ((int)uVar13 <= iVar15) {
          FUN_0562761c(0);
        }
        uVar14 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar15 = iVar15 + 1;
        uVar13 = (uint)uVar14;
      } while (uVar11 < uVar13);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar11 = *(uint *)(unaff_x21 + 0x20);
    if (uVar11 == uVar13) {
      FUN_04e67f94();
      lVar6 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar13 + 1;
      if (lVar6 == 0) goto LAB_04e67be0;
      uVar13 = *(uint *)(lVar6 + 0x18);
      iVar15 = 0;
      if (uVar13 != 0) {
        iVar15 = (int)param_2 / (int)uVar13;
      }
      uVar3 = param_2 - iVar15 * uVar13;
      if (uVar13 <= uVar3) goto LAB_04e67bdc;
      lVar8 = *(long *)(unaff_x21 + 0x18);
      piVar12 = (int *)(lVar6 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      lVar8 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar11 + 1;
    }
    if (lVar8 == 0) {
LAB_04e67be0:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_04e67bdc;
    lVar8 = lVar8 + (long)(int)uVar11 * 0x28;
  }
  else {
    uVar11 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar13 <= uVar11) goto LAB_04e67bdc;
    lVar8 = unaff_x25 + (long)(int)uVar11 * 0x28;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar8 + 0x24);
  }
  *(uint *)(lVar8 + 0x20) = param_2;
  *(int *)(lVar8 + 0x24) = *piVar12 + -1;
  uVar1 = *(undefined4 *)(unaff_x20 + 2);
  uVar16 = unaff_x20[1];
  uVar14 = *unaff_x20;
  *(undefined8 *)(lVar8 + 0x40) = unaff_x29;
  *(undefined4 *)(lVar8 + 0x38) = uVar1;
  *(undefined8 *)(lVar8 + 0x30) = uVar16;
  *(undefined8 *)(lVar8 + 0x28) = uVar14;
  thunk_FUN_02ee2be8((undefined8 *)(lVar8 + 0x40),unaff_x29);
  *piVar12 = uVar11 + 1;
  return 1;
}


