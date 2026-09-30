/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 033c39a4
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


long OVRPlugin__set_fixedFoveatedRenderingLevel(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x24;
  long unaff_x25;
  ulong uVar16;
  uint unaff_w27;
  long *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x033c39a4:
                    /* catch() { ... } // from try @ 033c3330 with catch @ 033c39a4 */
  uVar16 = 0;
                    /* catch() { ... } // from try @ 033c36e8 with catch @ 033c39a8 */
  do {
                    /* catch() { ... } // from try @ 033c36a4 with catch @ 033c39ac
                       catch() { ... } // from try @ 033c3908 with catch @ 033c39ac */
    plVar4 = *(long **)(unaff_x21 + 0x20 + uVar16 * 8);
                    /* catch() { ... } // from try @ 033c368c with catch @ 033c39b0
                       catch() { ... } // from try @ 033c3904 with catch @ 033c39b0 */
    if (plVar4 == (long *)0x0) {
LAB_033c3de8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* catch() { ... } // from try @ 033c3620 with catch @ 033c39b4
                       catch() { ... } // from try @ 033c3900 with catch @ 033c39b4 */
                    /* catch() { ... } // from try @ 033c3840 with catch @ 033c39b8 */
                    /* catch() { ... } // from try @ 033c339c with catch @ 033c39bc */
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
                    /* catch() { ... } // from try @ 033c3364 with catch @ 033c39c0 */
    uVar10 = (uint)uVar16;
                    /* catch() { ... } // from try @ 033c37d8 with catch @ 033c39c4 */
                    /* catch() { ... } // from try @ 033c3508 with catch @ 033c39c8 */
                    /* catch() { ... } // from try @ 033c34dc with catch @ 033c39cc */
                    /* catch() { ... } // from try @ 033c37d4 with catch @ 033c39d0 */
                    /* catch() { ... } // from try @ 033c37d0 with catch @ 033c39d4 */
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(unaff_x21 + 0x18) <= uVar10))
    goto thunk_FUN_01d7db78;
                    /* catch() { ... } // from try @ 033c37c4 with catch @ 033c39d8 */
                    /* catch() { ... } // from try @ 033c349c with catch @ 033c39dc */
                    /* catch() { ... } // from try @ 033c3384 with catch @ 033c39e0 */
                    /* catch() { ... } // from try @ 033c37c0 with catch @ 033c39e4 */
                    /* catch() { ... } // from try @ 033c35a4 with catch @ 033c39e8 */
    uVar5 = FUN_0330c348(*(undefined8 *)(unaff_x25 + uVar16 * 8),
                         *(undefined8 *)(unaff_x21 + 0x20 + uVar16 * 8),0);
                    /* catch() { ... } // from try @ 033c3414 with catch @ 033c39ec */
    if ((uVar5 & 1) == 0) {
                    /* catch() { ... } // from try @ 033c3470 with catch @ 033c39f0 */
                    /* catch() { ... } // from try @ 033c3544 with catch @ 033c39f4 */
      uVar13 = *(undefined8 *)StringLiteral_2477;
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar13 = FUN_033a87c8(uVar13,0);
      uVar5 = FUN_033aa3b4(plVar4,uVar13,0);
      if ((uVar5 & 1) == 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto thunk_FUN_01d7db78;
        plVar14 = *(long **)(unaff_x25 + uVar16 * 8);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)StringLiteral_6170 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
              *(long *)StringLiteral_6170)) {
            if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto thunk_FUN_01d7db78;
            plVar9 = (long *)*unaff_x24;
            if (plVar9 == (long *)0x0) goto LAB_033c3bd4;
            bVar1 = *(byte *)(*(long *)StringLiteral_1554 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)StringLiteral_1554)) goto LAB_033c3bd4;
            plVar14 = (long *)FUN_0330c7a4(plVar14,plVar9,0);
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01dc4f30(*unaff_x29);
            }
            uVar5 = FUN_033aa3b4(plVar14,0,0);
            if ((uVar5 & 1) != 0) goto LAB_033c3bd4;
          }
        }
        if (plVar4 == (long *)0x0) goto LAB_033c3de8;
        uVar5 = FUN_033ac7d8(plVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar4 + 0x288))(plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x290));
        }
        else {
          if ((plVar14 == (long *)0x0) ||
             (lVar6 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310)),
             lVar6 == 0)) goto LAB_033c3de8;
          uVar5 = FUN_033ab100(lVar6,0);
          if ((uVar5 & 1) == 0) goto LAB_033c3bd4;
          uVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
          uVar7 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
          if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
            thunk_FUN_01dc4f30(*(long *)StringLiteral_8523);
          }
          uVar5 = FUN_033c3e90(uVar13,uVar7);
        }
        if ((uVar5 & 1) == 0) goto LAB_033c3bd4;
      }
    }
    uVar16 = uVar16 + 1;
    if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar16) break;
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)uVar16) goto thunk_FUN_01d7db78;
  } while( true );
  uVar16 = (ulong)(uVar10 + 1);
LAB_033c3bd4:
  iVar3 = *(int *)(unaff_x19 + 0x18);
  while( true ) {
    if ((int)uVar16 == iVar3) {
      uVar10 = *(uint *)(unaff_x20 + 3);
      if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
      lVar6 = *unaff_x24;
      if (lVar6 != 0) {
        lVar8 = thunk_FUN_01de26bc(lVar6,*(undefined8 *)(*unaff_x20 + 0x40));
        if (lVar8 == 0) {
          uVar13 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
          FUN_01d7da3c(uVar13,0);
        }
        uVar10 = *(uint *)(unaff_x20 + 3);
      }
      if (uVar10 <= in_stack_00000008._4_4_) goto thunk_FUN_01d7db78;
      lVar8 = (long)(int)in_stack_00000008._4_4_;
      unaff_x20[lVar8 + 4] = lVar6;
      in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
      thunk_FUN_01e10808(unaff_x20 + lVar8 + 4,lVar6);
    }
    do {
      unaff_w27 = unaff_w27 + 1;
      uVar10 = (uint)unaff_x20[3];
      if ((int)uVar10 <= (int)unaff_w27) {
        if (in_stack_00000008._4_4_ == 0) {
          return 0;
        }
        if (in_stack_00000008._4_4_ == 1) {
          if (uVar10 != 0) goto LAB_033c3dc0;
          goto thunk_FUN_01d7db78;
        }
        if (unaff_x19 == 0) goto LAB_033c3de8;
        lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_151,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_033c3cc4;
        if (lVar6 == 0) goto LAB_033c3de8;
        uVar10 = *(uint *)(lVar6 + 0x18);
        uVar16 = 0;
        goto LAB_033c3cac;
      }
      if (uVar10 <= unaff_w27) goto thunk_FUN_01d7db78;
      unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
      plVar4 = (long *)*unaff_x24;
      if (((plVar4 == (long *)0x0) ||
          (unaff_x21 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0)),
          unaff_x21 == 0)) || (unaff_x19 == 0)) goto LAB_033c3de8;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      iVar11 = (int)*(undefined8 *)(unaff_x21 + 0x18);
    } while (iVar11 != iVar3);
    if (0 < iVar11) break;
    uVar16 = 0;
  }
  if (iVar11 == 0) goto thunk_FUN_01d7db78;
  goto code_r0x033c39a4;
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar16 * 4) = (int)uVar16;
    uVar16 = uVar16 + 1;
    if ((long)iVar3 <= (long)uVar16) break;
LAB_033c3cac:
    if (uVar10 <= uVar16) goto thunk_FUN_01d7db78;
  }
LAB_033c3cc4:
  if ((int)in_stack_00000008._4_4_ < 2) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto thunk_FUN_01d7db78;
      lVar12 = unaff_x20[lVar8 + 5];
      lVar15 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)StringLiteral_8523 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      iVar3 = FUN_033c0e28(lVar15,lVar6,0,lVar12,lVar6,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)in_stack_00000008._4_4_ - 1 != lVar8);
    if (bVar2) {
      thunk_FUN_01dd295c(StringLiteral_5868);
      uVar13 = thunk_FUN_01de27b8();
      uVar7 = thunk_FUN_01dd295c(StringLiteral_6016);
      FUN_033063d0(uVar13,uVar7,0);
      uVar7 = thunk_FUN_01dd295c(StringLiteral_8819);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar13,uVar7);
    }
  }
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_033c3dc0:
    return unaff_x20[4];
  }
thunk_FUN_01d7db78:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


