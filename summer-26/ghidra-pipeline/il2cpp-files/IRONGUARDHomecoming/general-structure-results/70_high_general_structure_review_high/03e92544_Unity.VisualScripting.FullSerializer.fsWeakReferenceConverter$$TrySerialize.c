/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsWeakReferenceConverter$$TrySerialize
ENTRY_POINT: 03e92544
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_13;telemetry_or_network_hits_4
*/


float Unity_VisualScripting_FullSerializer_fsWeakReferenceConverter__TrySerialize(void)

{
  undefined1 in_CY;
  ulong uVar1;
  uint uVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar3;
  long *unaff_x22;
  uint *unaff_x23;
  uint unaff_w24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float in_stack_00000088;
  
  while (!(bool)in_CY) {
                    /* try { // try from 03e92548 to 03f92553 has its CatchHandler @ 03e9280c */
    lVar3 = *unaff_x26;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar3 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 03e92568 to 03f92573 has its CatchHandler @ 03e92850 */
    fVar4 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                             (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
    fVar4 = unaff_s13 * fVar4;
    do {
                    /* try { // try from 03e92588 to 03f92593 has its CatchHandler @ 03e92810 */
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e925a4 to 03f925ab has its CatchHandler @ 03e92854 */
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 03e925c4 to 03f925cb has its CatchHandler @ 03e92814 */
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *unaff_x22;
        }
                    /* try { // try from 03e925e0 to 03f925e7 has its CatchHandler @ 03e927f4 */
        uVar1 = FUN_022ee1a4(unaff_x20,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe0),*unaff_x25);
        if ((uVar1 & 1) != 0) {
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
                    /* try { // try from 03e92600 to 03f9260b has its CatchHandler @ 03e92804 */
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e92620 to 03f9262b has its CatchHandler @ 03e92818 */
          uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          if ((uVar1 & 1) != 0) {
            if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
            lVar3 = *unaff_x26;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e9265c to 03f92663 has its CatchHandler @ 03e927dc */
            in_stack_00000010 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          }
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
                    /* try { // try from 03e92680 to 03f92687 has its CatchHandler @ 03e927d8 */
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e926a4 to 03f926ab has its CatchHandler @ 03e927d4 */
          fVar5 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          if (*unaff_x26 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e926c8 to 03f926cf has its CatchHandler @ 03e927d0 */
          unaff_s8 = in_stack_00000010 * fVar5;
          fStack0000000000000024 =
               (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                (*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80),0);
          fStack0000000000000024 = in_stack_00000010 * fStack0000000000000024;
        }
      }
                    /* try { // try from 03e926ec to 03f926f3 has its CatchHandler @ 03e927cc */
      fVar5 = in_stack_00000088 + in_stack_00000028._4_4_ + fVar4;
      fVar9 = fStack0000000000000024 + in_stack_00000088 + unaff_s8;
                    /* try { // try from 03e92704 to 03f92707 has its CatchHandler @ 03e927ec */
                    /* try { // try from 03e92708 to 03f92733 has its CatchHandler @ 03e91f64 */
      if (fVar5 <= fVar9) {
        fVar5 = fVar9;
      }
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e92734 to 03f92737 has its CatchHandler @ 03e928d8 */
                    /* try { // try from 03e92738 to 03f9273b has its CatchHandler @ 03e928d4 */
                    /* try { // try from 03e9273c to 03f9273f has its CatchHandler @ 03e928c8 */
                    /* try { // try from 03e92740 to 03f92743 has its CatchHandler @ 03e928c4 */
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),0);
                    /* try { // try from 03e92744 to 03f92747 has its CatchHandler @ 03e928c0 */
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 03e92748 to 03f9274b has its CatchHandler @ 03e928bc */
        lVar3 = *unaff_x22;
                    /* try { // try from 03e9274c to 03f9274f has its CatchHandler @ 03e928b8 */
                    /* try { // try from 03e92750 to 03f92753 has its CatchHandler @ 03e928b4 */
        if (*(int *)(lVar3 + 0xe0) == 0) {
                    /* try { // try from 03e92754 to 03f92757 has its CatchHandler @ 03e928b0 */
          thunk_FUN_01ee6d7c();
                    /* try { // try from 03e92758 to 03f9275b has its CatchHandler @ 03e928a0 */
          lVar3 = *unaff_x22;
        }
                    /* try { // try from 03e9275c to 03f9275f has its CatchHandler @ 03e9289c */
                    /* try { // try from 03e92760 to 03f92763 has its CatchHandler @ 03e92890 */
                    /* try { // try from 03e92764 to 03f92767 has its CatchHandler @ 03e9288c */
                    /* try { // try from 03e92768 to 03f9276b has its CatchHandler @ 03e92880 */
                    /* try { // try from 03e9276c to 03f9276f has its CatchHandler @ 03e9287c */
        uVar1 = FUN_022ee1a4(unaff_x20,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe8),*unaff_x25);
                    /* try { // try from 03e92770 to 03f92773 has its CatchHandler @ 03e92864 */
        if ((uVar1 & 1) != 0) {
                    /* try { // try from 03e92774 to 03f92777 has its CatchHandler @ 03e92860 */
                    /* try { // try from 03e92778 to 03f9277b has its CatchHandler @ 03e9285c */
                    /* try { // try from 03e9277c to 03f9277f has its CatchHandler @ 03e92858 */
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
                    /* try { // try from 03e92780 to 03f92783 has its CatchHandler @ 03e92848 */
                    /* try { // try from 03e92784 to 03f92787 has its CatchHandler @ 03e92844 */
          lVar3 = *unaff_x26;
                    /* try { // try from 03e92788 to 03f9278b has its CatchHandler @ 03e92840 */
                    /* try { // try from 03e9278c to 03f9278f has its CatchHandler @ 03e9283c */
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 03e92790 to 03f92793 has its CatchHandler @ 03e92828 */
            thunk_FUN_01ee6d7c();
          }
                    /* try { // try from 03e92794 to 03f92797 has its CatchHandler @ 03e92824 */
          if (lVar3 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e92798 to 03f9279b has its CatchHandler @ 03e92820 */
          uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0);
          if ((uVar1 & 1) != 0) {
            if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
            lVar3 = *unaff_x26;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            in_stack_00000008._4_4_ =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0);
          }
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18),0);
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          if (*unaff_x26 == 0) {
LAB_03e92a40:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar6 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c),
                                    0);
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a54;
          if (*unaff_x26 == 0) goto LAB_03e92a40;
          fVar7 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20),
                                    0);
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a54;
          if (*unaff_x26 == 0) goto LAB_03e92a40;
          fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),
                                    0);
          fVar7 = in_stack_00000088 + in_stack_00000008._4_4_ * fVar7 +
                  in_stack_00000008._4_4_ * fVar8;
          fVar8 = fVar7 - in_stack_00000008._4_4_ * fVar9;
          fVar10 = fVar7 - in_stack_00000008._4_4_ * fVar6;
          fVar9 = in_stack_00000008._4_4_ * fVar9 + fVar7;
          fVar7 = in_stack_00000008._4_4_ * fVar6 + fVar7;
          if (unaff_s15 <= fVar8) {
            unaff_s15 = fVar8;
          }
          if (unaff_s9 <= fVar10) {
            unaff_s9 = fVar10;
          }
          if (unaff_s14 <= fVar9) {
            unaff_s14 = fVar9;
          }
          if (unaff_s10 <= fVar7) {
            unaff_s10 = fVar7;
          }
          unaff_s11 = 0x3f800000;
        }
      }
      if (unaff_s15 <= fVar5) {
        unaff_s15 = fVar5;
      }
      if (unaff_s9 <= fVar5) {
        unaff_s9 = fVar5;
      }
      if (unaff_s14 <= fVar5) {
        unaff_s14 = fVar5;
      }
      unaff_s15 = (float)NEON_fminnm(fStack0000000000000020 + unaff_s15,unaff_s11);
      if (unaff_s10 <= fVar5) {
        unaff_s10 = fVar5;
      }
      unaff_s9 = (float)NEON_fminnm(fStack0000000000000020 + unaff_s9,unaff_s11);
      unaff_s14 = (float)NEON_fminnm(fStack0000000000000020 + unaff_s14,unaff_s11);
      fVar5 = unaff_s15;
      if (unaff_s15 <= unaff_s12) {
        fVar5 = unaff_s12;
      }
      unaff_s12 = fVar5;
      fVar5 = unaff_s9;
      if (unaff_s9 <= in_stack_00000030._4_4_) {
        fVar5 = in_stack_00000030._4_4_;
      }
      fVar9 = unaff_s14;
      if (unaff_s14 <= fStack0000000000000038) {
        fVar9 = fStack0000000000000038;
      }
      unaff_s10 = (float)NEON_fminnm(fStack0000000000000020 + unaff_s10,unaff_s11);
      fVar6 = unaff_s10;
      if (unaff_s10 <= fStack000000000000003c) {
        fVar6 = fStack000000000000003c;
      }
      unaff_w24 = unaff_w24 + 1;
      uVar2 = (uint)*(undefined8 *)unaff_x23;
      if ((int)uVar2 <= (int)unaff_w24) {
        if (uVar2 != 0) {
          lVar3 = *(long *)(unaff_x19 + 0x20);
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 != 0) {
            fVar5 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                     (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
            fVar4 = unaff_s15 * fVar5;
            if (unaff_s15 * fVar5 <= unaff_s9 * fVar5) {
              fVar4 = unaff_s9 * fVar5;
            }
            fVar9 = unaff_s14 * fVar5;
            if (unaff_s14 * fVar5 <= fVar4) {
              fVar9 = fVar4;
            }
            fVar4 = unaff_s10 * fVar5;
            if (unaff_s10 * fVar5 <= fVar9) {
              fVar4 = fVar9;
            }
            return fVar4 + 0.25;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
LAB_03e92a54:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (uVar2 <= unaff_w24) goto LAB_03e92a30;
      unaff_x26 = (long *)(unaff_x19 + (long)(int)unaff_w24 * 8 + 0x20);
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03e91488(lVar3);
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      if (*unaff_x26 == 0) goto LAB_03e92a38;
      unaff_x20 = FUN_0404ed98(*unaff_x26,0);
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      if (*unaff_x26 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
      if ((uVar1 & 1) != 0) {
        if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
        lVar3 = *unaff_x26;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar3 == 0) goto LAB_03e92a38;
        unaff_s13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                     (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
      }
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
      if ((uVar1 & 1) != 0) {
        if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
        lVar3 = *unaff_x26;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar3 == 0) goto LAB_03e92a38;
        in_stack_00000088 =
             (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                              (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
        in_stack_00000088 = unaff_s13 * in_stack_00000088;
      }
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
      if ((uVar1 & 1) != 0) {
        if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
        lVar3 = *unaff_x26;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar3 == 0) goto LAB_03e92a38;
        in_stack_00000028._4_4_ =
             (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                              (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
        in_stack_00000028._4_4_ = unaff_s13 * in_stack_00000028._4_4_;
      }
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
      in_stack_00000030._4_4_ = fVar5;
      fStack0000000000000038 = fVar9;
      fStack000000000000003c = fVar6;
    } while ((uVar1 & 1) == 0);
    in_CY = *unaff_x23 <= unaff_w24;
  }
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


