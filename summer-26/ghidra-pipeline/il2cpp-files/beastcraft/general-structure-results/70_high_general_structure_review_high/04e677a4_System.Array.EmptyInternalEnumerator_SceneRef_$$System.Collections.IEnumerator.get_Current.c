/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<SceneRef>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 04e677a4
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


undefined8
System_Array_EmptyInternalEnumerator<SceneRef>__System_Collections_IEnumerator_get_Current
          (undefined1 param_1 [16],undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined4 in_w8;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar12;
  int *piVar13;
  long *unaff_x24;
  long unaff_x25;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 unaff_x29;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uStack000000000000001c;
  long in_stack_00000028;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined8 uStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined4 uStack00000000000000e0;
  
  uStack00000000000000d8 = param_1._8_8_;
  uStack00000000000000d0 = param_1._0_8_;
  uStack00000000000000e0 = in_w8;
  uVar4 = (*(code *)*param_2)();
  lVar7 = *(long *)(unaff_x21 + 0x10);
  if (lVar7 == 0) goto LAB_04e67be0;
  uVar12 = *(uint *)(lVar7 + 0x18);
  uVar4 = uVar4 & 0x7fffffff;
  iVar16 = 0;
  if (uVar12 != 0) {
    iVar16 = (int)uVar4 / (int)uVar12;
  }
  uVar14 = uVar4 - iVar16 * uVar12;
  if (uVar12 <= uVar14) {
LAB_04e67bdc:
                    /* WARNING: Subroutine does not return */
    FUN_02e3cccc();
  }
  piVar13 = (int *)(lVar7 + (ulong)uVar14 * 4 + 0x20);
  uVar12 = *piVar13 - 1;
  uStack000000000000001c = unaff_w19;
  if (unaff_x24 == (long *)0x0) {
    if (unaff_x25 == 0) goto LAB_04e67be0;
    uVar15 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar14 = (uint)uVar15;
    if (uVar12 < uVar14) {
      iVar16 = 0;
      lVar7 = unaff_x25 + 0x20;
      do {
        uVar14 = (uint)uVar15;
        if (*(uint *)(lVar7 + (long)(int)uVar12 * 0x28) == uVar4) {
          plVar6 = (long *)FUN_04e76a4c(*(undefined8 *)
                                         (*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) +
                                         0x18));
          if (*(uint *)(unaff_x25 + 0x18) <= uVar12) goto LAB_04e67bdc;
          if (plVar6 == (long *)0x0) goto LAB_04e67be0;
          lVar8 = lVar7 + (long)(int)uVar12 * 0x28;
          in_stack_000000b8 = unaff_x20[1];
          in_stack_000000b0 = *unaff_x20;
          in_stack_000000c0 = *(undefined4 *)(unaff_x20 + 2);
          uStack00000000000000d8 = *(undefined8 *)(lVar8 + 0x10);
          uStack00000000000000d0 = *(undefined8 *)(lVar8 + 8);
          uStack00000000000000e0 = *(undefined4 *)(lVar8 + 0x18);
          uVar10 = (**(code **)(*plVar6 + 0x1b8))
                             (plVar6,&stack0x000000d0,&stack0x000000b0,
                              *(undefined8 *)(*plVar6 + 0x1c0));
          if ((uVar10 & 1) != 0) {
            if ((uStack000000000000001c & 0xff) == 2) goto LAB_04e67ba4;
            if ((uStack000000000000001c & 0xff) != 1) {
              return 0;
            }
            if (*(uint *)(unaff_x25 + 0x18) <= uVar12) goto LAB_04e67bdc;
            *(undefined8 *)(lVar7 + (long)(int)uVar12 * 0x28 + 0x20) = unaff_x29;
            goto 
            System_Array_EmptyInternalEnumerator<SerializedCommand>__System_Collections_IEnumerator_Reset
            ;
          }
          uVar14 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar14 <= uVar12) goto LAB_04e67bdc;
        uVar12 = *(uint *)(lVar7 + (long)(int)uVar12 * 0x28 + 4);
        if ((int)uVar14 <= iVar16) {
          FUN_0562761c(0);
        }
        uVar15 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar16 = iVar16 + 1;
        uVar14 = (uint)uVar15;
      } while (uVar12 < uVar14);
    }
  }
  else {
    if (unaff_x25 == 0) goto LAB_04e67be0;
    uVar15 = *(undefined8 *)(unaff_x25 + 0x18);
    uVar14 = (uint)uVar15;
    if (uVar12 < uVar14) {
      lVar7 = unaff_x25 + 0x20;
      iVar16 = 0;
      do {
        uVar14 = (uint)uVar15;
        if (*(uint *)(lVar7 + (long)(int)uVar12 * 0x28) == uVar4) {
          lVar8 = lVar7 + (long)(int)uVar12 * 0x28;
          uVar18 = *(undefined8 *)(lVar8 + 0x10);
          uVar15 = *(undefined8 *)(lVar8 + 8);
          uVar1 = *(undefined4 *)(lVar8 + 0x18);
          uVar19 = unaff_x20[1];
          uVar17 = *unaff_x20;
          lVar8 = *(long *)(*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) + 8);
          uVar2 = *(undefined4 *)(unaff_x20 + 2);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02e7568c(lVar8);
          }
          lVar9 = *unaff_x24;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04e678c0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_02e759c0();
LAB_04e678c0:
          in_stack_000000b0 = uVar17;
          in_stack_000000b8 = uVar19;
          in_stack_000000c0 = uVar2;
          uStack00000000000000d0 = uVar15;
          uStack00000000000000d8 = uVar18;
          uStack00000000000000e0 = uVar1;
          uVar10 = (*(code *)*puVar5)();
          if ((uVar10 & 1) != 0) {
            if ((uStack000000000000001c & 0xff) == 2) {
LAB_04e67ba4:
              uStack00000000000000d8 = unaff_x20[1];
              uStack00000000000000d0 = *unaff_x20;
              uStack00000000000000e0 = *(undefined4 *)(unaff_x20 + 2);
              uVar15 = thunk_FUN_02e786f0(*(undefined8 *)
                                           (*(long *)(*(long *)(in_stack_00000028 + 0x20) + 0xc0) +
                                           0x70),&stack0x000000d0);
              FUN_05627518(uVar15,0);
              return 0;
            }
            if ((uStack000000000000001c & 0xff) != 1) {
              return 0;
            }
            if (uVar12 < *(uint *)(unaff_x25 + 0x18)) {
              *(undefined8 *)(lVar7 + (long)(int)uVar12 * 0x28 + 0x20) = unaff_x29;
System_Array_EmptyInternalEnumerator<SerializedCommand>__System_Collections_IEnumerator_Reset:
              thunk_FUN_02ee2be8();
              return 1;
            }
            goto LAB_04e67bdc;
          }
          uVar14 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar14 <= uVar12) goto LAB_04e67bdc;
        uVar12 = *(uint *)(lVar7 + (long)(int)uVar12 * 0x28 + 4);
        if ((int)uVar14 <= iVar16) {
          FUN_0562761c(0);
        }
        uVar15 = *(undefined8 *)(unaff_x25 + 0x18);
        iVar16 = iVar16 + 1;
        uVar14 = (uint)uVar15;
      } while (uVar12 < uVar14);
    }
  }
  if (*(int *)(unaff_x21 + 0x28) < 1) {
    uVar12 = *(uint *)(unaff_x21 + 0x20);
    if (uVar12 == uVar14) {
      FUN_04e67f94();
      lVar8 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x20) = uVar14 + 1;
      if (lVar8 == 0) goto LAB_04e67be0;
      uVar14 = *(uint *)(lVar8 + 0x18);
      iVar16 = 0;
      if (uVar14 != 0) {
        iVar16 = (int)uVar4 / (int)uVar14;
      }
      uVar3 = uVar4 - iVar16 * uVar14;
      if (uVar14 <= uVar3) goto LAB_04e67bdc;
      lVar7 = *(long *)(unaff_x21 + 0x18);
      piVar13 = (int *)(lVar8 + (ulong)uVar3 * 4 + 0x20);
    }
    else {
      lVar7 = *(long *)(unaff_x21 + 0x18);
      *(uint *)(unaff_x21 + 0x20) = uVar12 + 1;
    }
    if (lVar7 == 0) {
LAB_04e67be0:
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_04e67bdc;
    lVar7 = lVar7 + (long)(int)uVar12 * 0x28;
  }
  else {
    uVar12 = *(uint *)(unaff_x21 + 0x24);
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
    if (uVar14 <= uVar12) goto LAB_04e67bdc;
    lVar7 = unaff_x25 + (long)(int)uVar12 * 0x28;
    *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar7 + 0x24);
  }
  *(uint *)(lVar7 + 0x20) = uVar4;
  *(int *)(lVar7 + 0x24) = *piVar13 + -1;
  uVar1 = *(undefined4 *)(unaff_x20 + 2);
  uVar17 = unaff_x20[1];
  uVar15 = *unaff_x20;
  *(undefined8 *)(lVar7 + 0x40) = unaff_x29;
  *(undefined4 *)(lVar7 + 0x38) = uVar1;
  *(undefined8 *)(lVar7 + 0x30) = uVar17;
  *(undefined8 *)(lVar7 + 0x28) = uVar15;
  thunk_FUN_02ee2be8((undefined8 *)(lVar7 + 0x40),unaff_x29);
  *piVar13 = uVar12 + 1;
  return 1;
}


