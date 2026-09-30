/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFoveatedRendering
ENTRY_POINT: 033c39f8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 107
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_useDynamicFoveatedRendering(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined **in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x033c39f8:
                    /* catch() { ... } // from try @ 033c33bc with catch @ 033c39f8 */
  uVar13 = *(undefined8 *)in_x9[0x181];
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
                    /* try { // try from 033c3a10 to 034c3a13 has its CatchHandler @ 033c3a20 */
  uVar13 = FUN_033a87c8(uVar13,0);
                    /* catch() { ... } // from try @ 033c3a10 with catch @ 033c3a20 */
  uVar4 = FUN_033aa3b4(unaff_x22,uVar13,0);
  uVar10 = unaff_x26;
  if ((uVar4 & 1) != 0) goto LAB_033c3bac;
                    /* try { // try from 033c3a2c to 034c3a37 has its CatchHandler @ 033c3a4c */
  if ((uint)unaff_x26 < *(uint *)(unaff_x19 + 0x18)) {
                    /* try { // try from 033c3a38 to 034c3a43 has its CatchHandler @ 033c31f0 */
    plVar14 = *(long **)(unaff_x25 + unaff_x26 * 8);
    if (plVar14 == (long *)0x0) {
LAB_033c3af4:
      if (unaff_x22 == (long *)0x0) {
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar4 = FUN_033ac7d8(unaff_x22,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*unaff_x22 + 0x288))
                          (unaff_x22,plVar14,*(undefined8 *)(*unaff_x22 + 0x290));
      }
      else {
        if ((plVar14 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310)),
           lVar5 == 0)) goto LAB_033c3de8;
        uVar4 = FUN_033ab100(lVar5,0);
        if ((uVar4 & 1) == 0) goto LAB_033c3bd4;
        uVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
        uVar6 = (**(code **)(*unaff_x22 + 0x308))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x310));
        if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
          thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
        }
        uVar4 = FUN_033c3e90(uVar13,uVar6);
      }
      if ((uVar4 & 1) != 0) goto LAB_033c3bac;
    }
    else {
                    /* try { // try from 033c3a44 to 034c3a4b has its CatchHandler @ 033c3a4c */
                    /* catch() { ... } // from try @ 033c3a2c with catch @ 033c3a4c
                       catch() { ... } // from try @ 033c3a44 with catch @ 033c3a4c */
                    /* try { // try from 033c3a50 to 034c4393 has its CatchHandler @ 033c3a50
                       catch() { ... } // from try @ 033c3a50 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c43d8 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c446c with catch @ 033c3a50
                       catch() { ... } // from try @ 033c44d8 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c456c with catch @ 033c3a50
                       catch() { ... } // from try @ 033c4584 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c4658 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c4688 with catch @ 033c3a50
                       catch() { ... } // from try @ 033c46e0 with catch @ 033c3a50 */
      bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
      if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)StringLiteral_6170)) goto LAB_033c3af4;
      if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto thunk_FUN_01d7db78;
      plVar8 = (long *)*unaff_x24;
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)StringLiteral_1554)) {
          plVar14 = (long *)FUN_0330c7a4(plVar14,plVar8,0);
          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*unaff_x29);
          }
          uVar4 = FUN_033aa3b4(plVar14,0,0);
          if ((uVar4 & 1) == 0) goto LAB_033c3af4;
        }
      }
    }
LAB_033c3bd4:
    while( true ) {
      iVar3 = *(int *)(unaff_x19 + 0x18);
      while( true ) {
        if ((int)unaff_x26 == iVar3) {
          uVar9 = *(uint *)(unaff_x20 + 3);
          if (uVar9 <= unaff_w27) goto thunk_FUN_01d7db78;
          lVar5 = *unaff_x24;
          if (lVar5 != 0) {
            lVar7 = thunk_FUN_01de26bc(lVar5,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar7 == 0) {
              uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
              FUN_01d7da3c(uVar13,0);
            }
            uVar9 = *(uint *)(unaff_x20 + 3);
          }
          if (uVar9 <= in_stack_00000008._4_4_) goto thunk_FUN_01d7db78;
          lVar7 = (long)(int)in_stack_00000008._4_4_;
          unaff_x20[lVar7 + 4] = lVar5;
          in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
          thunk_FUN_01e10808(unaff_x20 + lVar7 + 4,lVar5);
        }
        do {
          unaff_w27 = unaff_w27 + 1;
          uVar9 = (uint)unaff_x20[3];
          if ((int)uVar9 <= (int)unaff_w27) {
            if (in_stack_00000008._4_4_ == 0) {
              return 0;
            }
            if (in_stack_00000008._4_4_ == 1) {
              if (uVar9 != 0) goto LAB_033c3dc0;
              goto thunk_FUN_01d7db78;
            }
            if (unaff_x19 == 0) goto LAB_033c3de8;
            lVar5 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,*(undefined4 *)(unaff_x19 + 0x18))
            ;
            iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
            if (iVar3 < 1) goto LAB_033c3cc4;
            if (lVar5 == 0) goto LAB_033c3de8;
            uVar9 = *(uint *)(lVar5 + 0x18);
            uVar10 = 0;
            goto LAB_033c3cac;
          }
          if (uVar9 <= unaff_w27) goto thunk_FUN_01d7db78;
          unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
          plVar14 = (long *)*unaff_x24;
          if (((plVar14 == (long *)0x0) ||
              (unaff_x21 = (**(code **)(*plVar14 + 0x3b8))
                                     (plVar14,*(undefined8 *)(*plVar14 + 0x3c0)), unaff_x21 == 0))
             || (unaff_x19 == 0)) goto LAB_033c3de8;
          iVar3 = *(int *)(unaff_x19 + 0x18);
          iVar11 = (int)*(undefined8 *)(unaff_x21 + 0x18);
        } while (iVar11 != iVar3);
        if (0 < iVar11) break;
        unaff_x26 = 0;
      }
      if (iVar11 == 0) break;
      unaff_x26 = 0;
      unaff_x28 = unaff_x21 + 0x20;
      while( true ) {
        plVar14 = *(long **)(unaff_x28 + unaff_x26 * 8);
        if (plVar14 == (long *)0x0) goto LAB_033c3de8;
        unaff_x22 = (long *)(**(code **)(*plVar14 + 0x1d8))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
        if ((*(uint *)(unaff_x19 + 0x18) <= (uint)unaff_x26) ||
           (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26)) goto thunk_FUN_01d7db78;
        uVar4 = FUN_0330c348(*(undefined8 *)(unaff_x25 + unaff_x26 * 8),
                             *(undefined8 *)(unaff_x28 + unaff_x26 * 8),0);
        uVar10 = unaff_x26;
        if ((uVar4 & 1) == 0) {
          param_1 = *unaff_x29;
          in_x9 = &StringLiteral_2092;
          goto code_r0x033c39f8;
        }
LAB_033c3bac:
        unaff_x26 = uVar10 + 1;
        if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)unaff_x26) break;
        if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x26) goto thunk_FUN_01d7db78;
      }
      unaff_x26 = (ulong)((int)uVar10 + 1);
    }
  }
  goto thunk_FUN_01d7db78;
  while( true ) {
    *(int *)(lVar5 + 0x20 + uVar10 * 4) = (int)uVar10;
    uVar10 = uVar10 + 1;
    if ((long)iVar3 <= (long)uVar10) break;
LAB_033c3cac:
    if (uVar9 <= uVar10) goto thunk_FUN_01d7db78;
  }
LAB_033c3cc4:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar9 = 0;
  }
  else {
    lVar7 = 0;
    uVar9 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar9) || ((unaff_x20[3] & 0xffffffffU) <= lVar7 + 1U))
      goto thunk_FUN_01d7db78;
      lVar12 = unaff_x20[lVar7 + 5];
      lVar15 = unaff_x20[(long)(int)uVar9 + 4];
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_033c0e28(lVar15,lVar5,0,lVar12,lVar5,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar9 = (int)lVar7 + 1;
      }
      lVar7 = lVar7 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar7);
    if (bVar2) {
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar13 = thunk_FUN_01de27b8();
      uVar6 = thunk_FUN_01dd295c(StringLiteral_6016);
      FUN_033063d0(uVar13,uVar6,0);
      uVar6 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar6);
    }
  }
  if (uVar9 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar9;
LAB_033c3dc0:
    return unaff_x20[4];
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


