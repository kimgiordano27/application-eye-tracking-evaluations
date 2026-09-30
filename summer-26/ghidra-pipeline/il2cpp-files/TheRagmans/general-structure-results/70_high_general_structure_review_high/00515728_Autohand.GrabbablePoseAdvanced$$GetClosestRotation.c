/*
FUNCTION_NAME: Autohand.GrabbablePoseAdvanced$$GetClosestRotation
ENTRY_POINT: 00515728
PROGRAM: TheRagmans-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_GrabbablePoseAdvanced__GetClosestRotation(void)

{
  long *plVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  size_t unaff_x27;
  void *unaff_x28;
  long *unaff_x29;
  ulong in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
code_r0x00515728:
  plVar1 = (long *)((long)unaff_x28 + unaff_x24 * 0x10);
  *plVar1 = unaff_x25;
  plVar1[1] = unaff_x20;
  if (0 < (long)unaff_x27) {
    memcpy(unaff_x28,unaff_x26,unaff_x27);
  }
  *unaff_x19 = unaff_x28;
  unaff_x19[1] = plVar1 + 2;
  unaff_x19[2] = (void *)((long)unaff_x28 + unaff_x21 * 0x10);
  if (unaff_x29 != unaff_x26) {
    lVar4 = (long)unaff_x26 - (long)unaff_x29;
    do {
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0);
  }
  if (unaff_x26 != (long *)0x0) {
    operator_delete(unaff_x26);
  }
LAB_00515780:
  do {
    unaff_x25 = FUN_00551460();
    if (unaff_x25 == 0) {
      return;
    }
    lVar4 = *(long *)(unaff_x25 + 0x10);
    if (((lVar4 == 0) || ((*(ushort *)(lVar4 + 0x4c) & 7) != 6)) &&
       ((*(long *)(unaff_x25 + 0x18) == 0 ||
        ((*(ushort *)(*(long *)(unaff_x25 + 0x18) + 0x4c) & 7) != 6)))) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0x10;
    }
  } while ((uVar5 & unaff_w22) == 0);
  if (unaff_x23 == unaff_x20) goto LAB_00515664;
  if ((lVar4 == 0) || (uVar2 = *(ushort *)(lVar4 + 0x4c), (uVar2 & 7) == 1)) goto LAB_0051564c;
  goto LAB_0051566c;
LAB_0051564c:
  if ((*(long *)(unaff_x25 + 0x18) == 0) ||
     ((*(ushort *)(*(long *)(unaff_x25 + 0x18) + 0x4c) & 7) == 1)) goto LAB_00515780;
LAB_00515664:
  if (lVar4 == 0) {
    if ((*(long *)(unaff_x25 + 0x18) == 0) ||
       ((*(byte *)(*(long *)(unaff_x25 + 0x18) + 0x4c) >> 4 & 1) == 0)) goto LAB_00515688;
  }
  else {
    uVar2 = *(ushort *)(lVar4 + 0x4c);
LAB_0051566c:
    if ((uVar2 >> 4 & 1) == 0) {
LAB_00515688:
      if ((unaff_w22 >> 2 & 1) == 0) goto LAB_00515780;
      goto LAB_0051568c;
    }
  }
  if ((in_stack_00000000 & 0x100000000) != 0) goto LAB_00515780;
LAB_0051568c:
  uVar3 = FUN_004e85e4(in_stack_00000008,in_stack_00000010,*(undefined8 *)(unaff_x25 + 8));
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_005157d4(), (uVar3 & 1) != 0)) goto LAB_00515780;
  unaff_x29 = (long *)unaff_x19[1];
  if (unaff_x29 < (long *)unaff_x19[2]) {
    *unaff_x29 = unaff_x25;
    unaff_x29[1] = unaff_x20;
    unaff_x19[1] = unaff_x29 + 2;
    goto LAB_00515780;
  }
  unaff_x26 = (long *)*unaff_x19;
  unaff_x27 = (long)unaff_x29 - (long)unaff_x26;
  unaff_x24 = (long)unaff_x27 >> 4;
  unaff_x21 = unaff_x24 + 1;
  if (unaff_x21 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_004e1b28();
  }
  lVar4 = (long)unaff_x19[2] - (long)unaff_x26;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar3 = lVar4 >> 3;
    if (unaff_x21 <= uVar3) {
      unaff_x21 = uVar3;
    }
    if (unaff_x21 == 0) {
      unaff_x28 = (void *)0x0;
      goto code_r0x00515728;
    }
    if (unaff_x21 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004e07a8("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
  }
  else {
    unaff_x21 = 0xfffffffffffffff;
  }
  unaff_x28 = operator_new(unaff_x21 << 4);
  goto code_r0x00515728;
}


