/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 0909e4e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint OVRPlugin__ResetAppPerfStats(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  uint uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (param_1 == 0) {
LAB_0909e988:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar3 = OVRPassthroughLayer_BaseGeneratedStyleHandler__Update(param_1,0);
  uVar4 = FUN_090be954(param_1,0);
  puVar2 = PTR_DAT_0ac75968;
  if (unaff_x20 == (long *)0x0) goto LAB_0909e988;
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
                    /* try { // try from 0909e528 to 0919e533 has its CatchHandler @ 0909e668 */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
                    /* try { // try from 0909e538 to 0919e54b has its CatchHandler @ 0909e670 */
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac75968) {
                    /* try { // try from 0909e564 to 0919e57b has its CatchHandler @ 0909e668 */
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_0909e568;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e568:
  iVar5 = (*(code *)*puVar7)();
  puVar1 = PTR_DAT_0ac75960;
  if (iVar5 == 0) {
                    /* try { // try from 0909e5b8 to 0919e5bb has its CatchHandler @ 0909e638 */
    if (*(int *)(*(long *)PTR_DAT_0ac75960 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    if (DAT_0b330359 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac75960);
      DAT_0b330359 = '\x01';
    }
    lVar8 = *(long *)puVar1;
                    /* try { // try from 0909e5f4 to 0919e60b has its CatchHandler @ 0909e634 */
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar8 = *(long *)puVar1;
    }
    lVar8 = *(long *)(lVar8 + 0xb8);
                    /* try { // try from 0909e614 to 0919e617 has its CatchHandler @ 0909e660 */
                    /* try { // try from 0909e618 to 0919e61b has its CatchHandler @ 0909e654 */
    in_stack_00000048 = *(undefined8 *)(lVar8 + 0x38);
    in_stack_00000040 = *(undefined8 *)(lVar8 + 0x30);
                    /* try { // try from 0909e61c to 0919e61f has its CatchHandler @ 0909e64c */
    in_stack_00000050 = *(undefined8 *)(lVar8 + 0x40);
                    /* try { // try from 0909e620 to 0919e623 has its CatchHandler @ 0909e65c */
                    /* try { // try from 0909e624 to 0919e627 has its CatchHandler @ 0909e648 */
                    /* try { // try from 0909e628 to 0919e62b has its CatchHandler @ 0909e63c */
    uVar9 = FUN_090be980(param_1,&stack0x00000040,uVar3,0);
                    /* try { // try from 0909e62c to 0919e62f has its CatchHandler @ 0909e630 */
    if ((uVar9 & 1) == 0) {
                    /* catch() { ... } // from try @ 0909e34c with catch @ 0909e630
                       catch() { ... } // from try @ 0909e62c with catch @ 0909e630
                       try { // try from 0909e630 to 0919e68b has its CatchHandler @ 0909e184 */
                    /* catch() { ... } // from try @ 0909e394 with catch @ 0909e634
                       catch() { ... } // from try @ 0909e5f4 with catch @ 0909e634 */
                    /* catch() { ... } // from try @ 0909e5b8 with catch @ 0909e638 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0909e628 with catch @ 0909e63c */
        thunk_FUN_049a583c();
      }
                    /* catch() { ... } // from try @ 0909e28c with catch @ 0909e640 */
                    /* catch() { ... } // from try @ 0909e440 with catch @ 0909e644
                       catch() { ... } // from try @ 0909e5a4 with catch @ 0909e644 */
      if (DAT_0b330359 == '\0') {
                    /* catch() { ... } // from try @ 0909e624 with catch @ 0909e648 */
                    /* catch() { ... } // from try @ 0909e61c with catch @ 0909e64c */
        FUN_04947ee4(PTR_DAT_0ac75960);
        DAT_0b330359 = '\x01';
      }
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        lVar8 = *(long *)puVar1;
      }
      lVar8 = *(long *)(lVar8 + 0xb8);
      in_stack_00000028 = *(undefined8 *)(lVar8 + 0x38);
      in_stack_00000020 = *(undefined8 *)(lVar8 + 0x30);
      in_stack_00000030 = *(undefined8 *)(lVar8 + 0x40);
      uVar9 = FUN_090be980(param_1,&stack0x00000020,uVar4,0);
      if ((uVar9 & 1) == 0) {
        return 3;
      }
    }
    return 0;
  }
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
                    /* try { // try from 0909e588 to 0919e58b has its CatchHandler @ 0909e650 */
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_0909e6b4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
                    /* try { // try from 0909e5a4 to 0919e5af has its CatchHandler @ 0909e644 */
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e6b4:
  (*(code *)*puVar7)();
  uVar9 = FUN_0909e98c();
  if ((uVar9 & 1) != 0) {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto FUN_0909e720;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68();
FUN_0909e720:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar9 = FUN_090be980(param_1,&stack0x00000040,uVar3,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
            goto LAB_0909e7b8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e7b8:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar6 = OVRPassthroughLayer_ColorLutHandler__ApplyStyleSettings(param_1,&stack0x00000020,0);
      uVar6 = uVar6 & 1;
      goto LAB_0909e7ec;
    }
  }
  uVar6 = 0;
LAB_0909e7ec:
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 7) * 0x10 + 0x138);
        goto LAB_0909e83c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e83c:
  (*(code *)*puVar7)();
  uVar9 = OVRPlugin__IsControllerDrivenHandPosesEnabled();
  uVar11 = uVar6;
  if ((uVar9 & 1) != 0) {
    lVar8 = *unaff_x20;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
          goto LAB_0909e8a8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e8a8:
    (*(code *)*puVar7)(&stack0x00000008);
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    uVar9 = FUN_090be980(param_1,&stack0x00000040,uVar4,0);
    if ((uVar9 & 1) == 0) {
      lVar8 = *unaff_x20;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 9) * 0x10 + 0x138);
            goto LAB_0909e930;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_04980e68();
LAB_0909e930:
      (*(code *)*puVar7)(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      uVar9 = FUN_090bf24c(param_1,&stack0x00000020,0);
      uVar11 = uVar6 | 2;
      if ((uVar9 & 1) == 0) {
        uVar11 = uVar6;
      }
    }
  }
  return uVar11;
}


