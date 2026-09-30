/*
FUNCTION_NAME: Oculus.Interaction.PokeInteractor$$DoPostprocess
ENTRY_POINT: 07ae6980
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Oculus_Interaction_PokeInteractor__DoPostprocess(void)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 in_w8;
  long lVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  *unaff_x19 = in_w8;
LAB_07ae6d30:
  uVar6 = FUN_0714066c(&stack0x00000020,*unaff_x22);
  if ((uVar6 & 1) != 0) {
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar9 = *(long *)(unaff_x20 + 0x80);
                    /* try { // try from 07ae6d48 to 07be6d5f has its CatchHandler @ 07ae6734 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x20 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
                    /* try { // try from 07ae6d60 to 07be6d77 has its CatchHandler @ 07ae6dbc */
    if (*(short *)(lVar9 + (long)(int)*(uint *)(unaff_x20 + 0x8c) * 2 + 0x20) == 0x2f) {
      FUN_07ae17a8();
      *(int *)(unaff_x20 + 0x8c) = *(int *)(unaff_x20 + 0x8c) + 1;
LAB_07ae6da8:
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_0795995c(unaff_x19 + 2,0);
      return;
    }
  }
LAB_07ae6bf8:
  puVar4 = PTR_DAT_09f43628;
  puVar3 = PTR_DAT_09f435f0;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar9 = *(long *)(unaff_x20 + 0x80);
  do {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar2 = *(uint *)(unaff_x20 + 0x8c);
    if (*(uint *)(lVar9 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar1 = *(ushort *)(lVar9 + (long)(int)uVar2 * 2 + 0x20);
    if (uVar1 < 0xb) {
      if (uVar1 == 0) {
                    /* try { // try from 07ae6c80 to 07be6c83 has its CatchHandler @ 07ae6dcc */
                    /* try { // try from 07ae6c84 to 07be6ccf has its CatchHandler @ 07ae6734 */
                    /* catch() { ... } // from try @ 07ae6b6c with catch @ 07ae6c88 */
        if (*(uint *)(unaff_x20 + 0x88) == uVar2) break;
      }
      else if (uVar1 == 10) {
        if (*(char *)((long)unaff_x19 + 0x31) == '\0') {
          FUN_07ade848();
          goto LAB_07ae6c94;
        }
        FUN_07ae17a8();
        goto LAB_07ae6da8;
      }
LAB_07ae6c8c:
                    /* catch() { ... } // from try @ 07ae67e0 with catch @ 07ae6c8c */
                    /* catch() { ... } // from try @ 07ae6830 with catch @ 07ae6c90
                       catch() { ... } // from try @ 07ae687c with catch @ 07ae6c90 */
      *(uint *)(unaff_x20 + 0x8c) = uVar2 + 1;
    }
    else {
                    /* try { // try from 07ae6c5c to 07be6c6b has its CatchHandler @ 07ae6c78 */
      if (uVar1 != 0x2a) {
        if (uVar1 != 0xd) goto LAB_07ae6c8c;
                    /* catch() { ... } // from try @ 07ae6978 with catch @ 07ae6ca4 */
        if (*(char *)((long)unaff_x19 + 0x31) != '\0') {
          FUN_07ae17a8();
          goto LAB_07ae6da8;
        }
                    /* catch() { ... } // from try @ 07ae6988 with catch @ 07ae6ca8 */
                    /* catch() { ... } // from try @ 07ae697c with catch @ 07ae6cac */
                    /* catch() { ... } // from try @ 07ae6940 with catch @ 07ae6cb0 */
                    /* catch() { ... } // from try @ 07ae68e4 with catch @ 07ae6cb4 */
        lVar9 = FUN_07ad9470();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar10 = FUN_07ab3be8(lVar9,0,0);
                    /* try { // try from 07ae6cd0 to 07be6cd3 has its CatchHandler @ 07ae6dac */
        uVar6 = FUN_0795b3e4();
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 3;
          *(undefined1 (*) [16])(unaff_x19 + 0x16) = auVar10;
          thunk_FUN_044bb4b4(unaff_x19 + 0x16,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04b62948(unaff_x19 + 2);
          return;
        }
        FUN_0795b400();
        goto LAB_07ae6bf8;
      }
                    /* catch() { ... } // from try @ 07ae6a14 with catch @ 07ae6c70 */
      *(uint *)(unaff_x20 + 0x8c) = uVar2 + 1;
                    /* catch() { ... } // from try @ 07ae6a2c with catch @ 07ae6c74 */
                    /* catch() { ... } // from try @ 07ae6c5c with catch @ 07ae6c78 */
      if (*(char *)((long)unaff_x19 + 0x31) == '\0') {
        lVar9 = FUN_07ad9570();
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        auVar10 = FUN_06894b08(lVar9,0,*unaff_x23);
                    /* try { // try from 07ae6d20 to 07be6d47 has its CatchHandler @ 07ae6dcc */
        _in_stack_00000020 = auVar10;
        uVar6 = FUN_07140620(&stack0x00000020,*unaff_x24);
        if ((uVar6 & 1) == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 0xe) = _in_stack_00000020;
          thunk_FUN_044bb4b4(unaff_x19 + 0xe,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_04b554a0(unaff_x19 + 2,&stack0x00000020);
          return;
        }
        goto LAB_07ae6d30;
      }
    }
LAB_07ae6c94:
                    /* catch() { ... } // from try @ 07ae67e8 with catch @ 07ae6c94
                       catch() { ... } // from try @ 07ae6b68 with catch @ 07ae6c94 */
    lVar9 = *(long *)(unaff_x20 + 0x80);
                    /* catch() { ... } // from try @ 07ae6a78 with catch @ 07ae6c98
                       catch() { ... } // from try @ 07ae6b70 with catch @ 07ae6c98 */
  } while( true );
  lVar9 = FUN_07ad920c();
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  auVar10 = DG_Tweening_Core_TweenerCore<Vector3,_Vector3,_VectorOptions>__SetFrom
                      (lVar9,0,*(undefined8 *)puVar4);
  _in_stack_00000010 = auVar10;
  uVar6 = FUN_07140da4(&stack0x00000010,*(undefined8 *)puVar3);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000010;
    thunk_FUN_044bb4b4(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_04b55978(unaff_x19 + 2,&stack0x00000010);
    return;
  }
  iVar5 = FUN_07140df0(&stack0x00000010,*(undefined8 *)PTR_DAT_09f435e8);
  if (iVar5 == 0) {
    if (*(char *)((long)unaff_x19 + 0x31) == '\0') {
      thunk_FUN_044adef4(PTR_DAT_09f488b0);
      uVar7 = FUN_07acf760();
      uVar8 = thunk_FUN_044adef4(PTR_DAT_09f48c50);
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar7,uVar8);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07ae17a8();
    goto LAB_07ae6da8;
  }
  goto LAB_07ae6bf8;
}


