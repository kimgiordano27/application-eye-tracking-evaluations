/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<RippleCursorEffectManager.InteractorState>$$Dispose
ENTRY_POINT: 049b0c54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<RippleCursorEffectManager_InteractorState>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  int *piVar10;
  long unaff_x20;
  long unaff_x21;
  int iVar11;
  long *unaff_x23;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  long unaff_x26;
  undefined8 *unaff_x28;
  uint unaff_w29;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uStack000000000000000c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  
  do {
    in_x9 = in_x9 + -1;
    piVar10 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02f421d0();
      goto LAB_049b0c90;
    }
    plVar4 = (long *)(in_x10 + 2);
    in_x10 = piVar10;
  } while (*plVar4 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar10 + 1) * 0x10 + 0x138);
LAB_049b0c90:
  uVar2 = (*(code *)*puVar3)();
  lVar6 = *(long *)(unaff_x20 + 0x10);
  if (lVar6 == 0) goto LAB_049b1050;
  uVar14 = *(uint *)(lVar6 + 0x18);
  uVar2 = uVar2 & 0x7fffffff;
  iVar11 = 0;
  if (uVar14 != 0) {
    iVar11 = (int)uVar2 / (int)uVar14;
  }
  uVar12 = uVar2 - iVar11 * uVar14;
  if (uVar12 < uVar14) {
    piVar10 = (int *)(lVar6 + (ulong)uVar12 * 4 + 0x20);
    uVar14 = *piVar10 - 1;
    if (unaff_x23 == (long *)0x0) {
      if (unaff_x26 == 0) goto LAB_049b1050;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar11 = 0;
        lVar6 = unaff_x26 + 0x20;
        do {
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x24) == uVar2) {
            plVar4 = (long *)FUN_0363acb8(*(undefined8 *)
                                           (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x18));
            if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_049b104c;
            if (plVar4 == (long *)0x0) goto LAB_049b1050;
            uVar8 = (**(code **)(*plVar4 + 0x1b8))
                              (plVar4,*(undefined4 *)(lVar6 + (long)(int)uVar14 * 0x24 + 8),
                               uStack000000000000002c,*(undefined8 *)(*plVar4 + 0x1c0));
            if ((uVar8 & 1) != 0) {
              if ((unaff_w29 & 0xff) == 2) {
                puVar3 = (undefined8 *)&stack0x00000028;
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                uStack0000000000000028 = uStack000000000000002c;
                goto LAB_049b1034;
              }
              if ((unaff_w29 & 0xff) != 1) {
                return 0;
              }
              if (*(uint *)(unaff_x26 + 0x18) <= uVar14) goto LAB_049b104c;
              uVar13 = unaff_x28[2];
              uVar16 = unaff_x28[1];
              uVar15 = *unaff_x28;
              lVar6 = lVar6 + (long)(int)uVar14 * 0x24;
              goto LAB_049b0ffc;
            }
            uVar12 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_049b104c;
          uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x24 + 4);
          if ((int)uVar12 <= iVar11) {
            FUN_050f65d8(0);
          }
          uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar11 = iVar11 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    else {
      if (unaff_x26 == 0) goto LAB_049b1050;
      uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
      uVar12 = (uint)uVar13;
      if (uVar14 < uVar12) {
        iVar11 = 0;
        lVar6 = unaff_x26 + 0x20;
        uStack000000000000000c = unaff_w29;
        do {
          uVar12 = (uint)uVar13;
          if (*(uint *)(lVar6 + (long)(int)uVar14 * 0x24) == uVar2) {
            lVar5 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c(lVar5);
            }
            lVar7 = *unaff_x23;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar5) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_049b0d84;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_02f421d0();
LAB_049b0d84:
            uVar8 = (*(code *)*puVar3)();
            if ((uVar8 & 1) != 0) {
              if ((uStack000000000000000c & 0xff) == 2) {
                puVar3 = (undefined8 *)((long)&stack0x00000020 + 4);
                lVar6 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
                in_stack_00000020._4_4_ = uStack000000000000002c;
LAB_049b1034:
                uVar13 = thunk_FUN_02f44ec4(*(undefined8 *)(lVar6 + 0x70),puVar3);
                FUN_050f64d4(uVar13,0);
                return 0;
              }
              if ((uStack000000000000000c & 0xff) != 1) {
                return 0;
              }
              if (uVar14 < *(uint *)(unaff_x26 + 0x18)) {
                lVar6 = lVar6 + (long)(int)uVar14 * 0x24;
                uVar13 = unaff_x28[2];
                uVar16 = unaff_x28[1];
                uVar15 = *unaff_x28;
LAB_049b0ffc:
                *(undefined8 *)(lVar6 + 0x1c) = uVar13;
                *(undefined8 *)(lVar6 + 0x14) = uVar16;
                *(undefined8 *)(lVar6 + 0xc) = uVar15;
                return 1;
              }
              goto LAB_049b104c;
            }
            uVar12 = *(uint *)(unaff_x26 + 0x18);
          }
          if (uVar12 <= uVar14) goto LAB_049b104c;
          uVar14 = *(uint *)(lVar6 + (long)(int)uVar14 * 0x24 + 4);
          if ((int)uVar12 <= iVar11) {
            FUN_050f65d8(0);
          }
          uVar13 = *(undefined8 *)(unaff_x26 + 0x18);
          iVar11 = iVar11 + 1;
          uVar12 = (uint)uVar13;
        } while (uVar14 < uVar12);
      }
    }
    if (*(int *)(unaff_x20 + 0x28) < 1) {
      uVar14 = *(uint *)(unaff_x20 + 0x20);
      if (uVar14 == uVar12) {
        FUN_049b13d8();
        lVar5 = *(long *)(unaff_x20 + 0x10);
        *(uint *)(unaff_x20 + 0x20) = uVar12 + 1;
        if (lVar5 == 0) goto LAB_049b1050;
        uVar12 = *(uint *)(lVar5 + 0x18);
        iVar11 = 0;
        if (uVar12 != 0) {
          iVar11 = (int)uVar2 / (int)uVar12;
        }
        uVar1 = uVar2 - iVar11 * uVar12;
        if (uVar12 <= uVar1) goto LAB_049b104c;
        lVar6 = *(long *)(unaff_x20 + 0x18);
        piVar10 = (int *)(lVar5 + (ulong)uVar1 * 4 + 0x20);
      }
      else {
        lVar6 = *(long *)(unaff_x20 + 0x18);
        *(uint *)(unaff_x20 + 0x20) = uVar14 + 1;
      }
      if (lVar6 == 0) {
LAB_049b1050:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_049b104c;
      lVar6 = lVar6 + (long)(int)uVar14 * 0x24;
    }
    else {
      uVar14 = *(uint *)(unaff_x20 + 0x24);
      *(int *)(unaff_x20 + 0x28) = *(int *)(unaff_x20 + 0x28) + -1;
      if (uVar12 <= uVar14) goto LAB_049b104c;
      lVar6 = unaff_x26 + (long)(int)uVar14 * 0x24;
      *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(lVar6 + 0x24);
    }
    *(uint *)(lVar6 + 0x20) = uVar2;
    *(int *)(lVar6 + 0x24) = *piVar10 + -1;
    *(undefined4 *)(lVar6 + 0x28) = uStack000000000000002c;
    uVar15 = unaff_x28[1];
    uVar13 = *unaff_x28;
    *(undefined8 *)(lVar6 + 0x3c) = unaff_x28[2];
    *(undefined8 *)(lVar6 + 0x34) = uVar15;
    *(undefined8 *)(lVar6 + 0x2c) = uVar13;
    *piVar10 = uVar14 + 1;
    return 1;
  }
LAB_049b104c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


