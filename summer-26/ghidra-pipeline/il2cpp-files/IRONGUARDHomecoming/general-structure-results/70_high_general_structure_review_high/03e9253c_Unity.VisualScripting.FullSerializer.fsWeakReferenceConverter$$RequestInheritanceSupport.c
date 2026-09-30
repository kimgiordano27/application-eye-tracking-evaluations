/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsWeakReferenceConverter$$RequestInheritanceSupport
ENTRY_POINT: 03e9253c
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


float Unity_VisualScripting_FullSerializer_fsWeakReferenceConverter__RequestInheritanceSupport(void)

{
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
  
  while (unaff_w24 < *unaff_x23) {
    lVar3 = *unaff_x26;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar3 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    fVar4 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                             (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
    fVar4 = unaff_s13 * fVar4;
    do {
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
      if ((uVar1 & 1) != 0) {
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *unaff_x22;
        }
        uVar1 = FUN_022ee1a4(unaff_x20,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe0),*unaff_x25);
        if ((uVar1 & 1) != 0) {
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          if ((uVar1 & 1) != 0) {
            if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
            lVar3 = *unaff_x26;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            in_stack_00000010 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          }
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          fVar5 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          if (*unaff_x26 == 0) goto LAB_03e92a38;
          unaff_s8 = in_stack_00000010 * fVar5;
          fStack0000000000000024 =
               (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                (*unaff_x26,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80),0);
          fStack0000000000000024 = in_stack_00000010 * fStack0000000000000024;
        }
      }
      fVar5 = in_stack_00000088 + in_stack_00000028._4_4_ + fVar4;
      fVar9 = fStack0000000000000024 + in_stack_00000088 + unaff_s8;
      if (fVar5 <= fVar9) {
        fVar5 = fVar9;
      }
      if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
      lVar3 = *unaff_x26;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 == 0) goto LAB_03e92a38;
      uVar1 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),0);
      if ((uVar1 & 1) != 0) {
        lVar3 = *unaff_x22;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *unaff_x22;
        }
        uVar1 = FUN_022ee1a4(unaff_x20,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe8),*unaff_x25);
        if ((uVar1 & 1) != 0) {
          if (*unaff_x23 <= unaff_w24) goto LAB_03e92a30;
          lVar3 = *unaff_x26;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
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
  }
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


