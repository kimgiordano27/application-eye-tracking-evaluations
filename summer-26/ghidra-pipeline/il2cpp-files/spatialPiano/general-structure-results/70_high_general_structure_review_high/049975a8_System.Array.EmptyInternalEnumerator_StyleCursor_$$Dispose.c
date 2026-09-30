/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<StyleCursor>$$Dispose
ENTRY_POINT: 049975a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<StyleCursor>__Dispose(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *piVar7;
  uint uVar8;
  ulong unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar9;
  ulong unaff_x27;
  int *unaff_x28;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x049975a8:
  uVar9 = (uint)unaff_x27;
  uVar8 = (uint)unaff_x19;
  uVar10 = *(undefined8 *)(in_x9 + 8);
  uVar11 = *(undefined8 *)(in_x9 + 0x10);
  lVar4 = *(long *)(param_1 + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
  }
  lVar5 = *unaff_x21;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0499765c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_02f421d0(unaff_x22,lVar4,0);
LAB_0499765c:
  uVar6 = (*(code *)*puVar2)(unaff_x22,uVar10,uVar11,unaff_x25,unaff_x26,puVar2[1]);
  do {
    if ((uVar6 & 1) != 0) {
      if ((int)uVar8 < 0) {
        lVar4 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar4 != 0) {
          if ((uint)in_stack_00000008 < *(uint *)(lVar4 + 0x18)) {
            *(int *)(lVar4 + in_stack_00000008 * 4 + 0x20) =
                 *(int *)(unaff_x29 + (unaff_x20 & 0xffffffff) * 0x30 + 4) + 1;
            goto LAB_04997730;
          }
          goto LAB_04997784;
        }
      }
      else {
        lVar4 = *(long *)(in_stack_00000028 + 0x18);
        if (lVar4 != 0) {
          if (uVar8 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + (ulong)uVar8 * 0x30 + 0x24) =
                 *(undefined4 *)(unaff_x29 + (unaff_x20 & 0xffffffff) * 0x30 + 4);
LAB_04997730:
            lVar4 = unaff_x29 + (unaff_x20 & 0xffffffff) * 0x30;
            uVar11 = *(undefined8 *)(lVar4 + 0x20);
            uVar10 = *(undefined8 *)(lVar4 + 0x18);
            in_stack_00000010[2] = *(undefined8 *)(lVar4 + 0x28);
            in_stack_00000010[1] = uVar11;
            *in_stack_00000010 = uVar10;
            *unaff_x28 = -1;
            uVar1 = *(undefined4 *)(in_stack_00000028 + 0x24);
            *(undefined8 *)(lVar4 + 0x20) = 0;
            *(undefined8 *)(lVar4 + 0x28) = 0;
            *(undefined4 *)(lVar4 + 4) = uVar1;
            *(undefined8 *)(lVar4 + 0x18) = 0;
            *(uint *)(in_stack_00000028 + 0x24) = uVar9;
            *(ulong *)(in_stack_00000028 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000028 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000028 + 0x28) + 1);
            return 1;
          }
LAB_04997784:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
LAB_04997780:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    do {
      unaff_x19 = unaff_x27 & 0xffffffff;
      uVar8 = (uint)unaff_x27;
      uVar9 = *(uint *)(unaff_x29 + (unaff_x20 & 0xffffffff) * 0x30 + 4);
      unaff_x20 = (ulong)uVar9;
      if ((int)uVar9 < 0) {
        *in_stack_00000010 = 0;
        in_stack_00000010[1] = 0;
        in_stack_00000010[2] = 0;
        return 0;
      }
      lVar4 = *(long *)(in_stack_00000028 + 0x18);
      if (lVar4 == 0) goto LAB_04997780;
      if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_04997784;
      unaff_x29 = lVar4 + 0x20;
      unaff_x28 = (int *)(unaff_x29 + unaff_x20 * 0x30);
      unaff_x27 = unaff_x20;
    } while (*unaff_x28 != in_stack_00000018._4_4_);
    unaff_x21 = *(long **)(in_stack_00000028 + 0x30);
    if (unaff_x21 != (long *)0x0) break;
    plVar3 = (long *)FUN_04991570(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0) + 0x18));
    if (plVar3 == (long *)0x0) goto LAB_04997780;
    lVar4 = unaff_x29 + unaff_x20 * 0x30;
    uVar6 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),
                       in_stack_00000030,in_stack_00000038,*(undefined8 *)(*plVar3 + 0x1c0));
  } while( true );
  in_x9 = unaff_x29 + unaff_x20 * 0x30;
  param_1 = *(long *)(*(long *)(in_stack_00000020 + 0x20) + 0xc0);
  unaff_x22 = unaff_x21;
  unaff_x25 = in_stack_00000030;
  unaff_x26 = in_stack_00000038;
  goto code_r0x049975a8;
}


