/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$TryDeserialize
ENTRY_POINT: 03e922dc
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


float Unity_VisualScripting_FullSerializer_fsTypeConverter__TryDeserialize(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  long *unaff_x22;
  ulong *unaff_x23;
  uint uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float unaff_s9;
  float fVar17;
  float fVar18;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  
  puVar1 = StringLiteral_549;
  fVar18 = *(float *)(param_1 + 8);
  fVar17 = *(float *)(param_1 + 0xc);
  uVar3 = (uint)*unaff_x23;
  uVar4 = (ulong)uVar3;
  fStack0000000000000030 = unaff_s15;
  fStack0000000000000034 = unaff_s9;
  fStack0000000000000038 = fVar18;
  fStack000000000000003c = fVar17;
  if (0 < (int)uVar3) {
    fStack0000000000000088 = 0.0;
                    /* try { // try from 03e92300 to 03f92307 has its CatchHandler @ 03e927e4 */
    fStack000000000000002c = 0.0;
    fStack0000000000000028 = 0.0;
    fStack0000000000000010 = 0.0;
                    /* try { // try from 03e92320 to 03f92327 has its CatchHandler @ 03e92808 */
    uVar6 = 0;
    fVar8 = 0.0;
    fStack000000000000000c = 0.0;
    fVar9 = 0.0;
    fStack0000000000000024 = 0.0;
    fVar15 = unaff_s15;
    fStack0000000000000034 = unaff_s9;
    do {
                    /* try { // try from 03e92340 to 03f9235f has its CatchHandler @ 03e927e8 */
      fStack0000000000000030 = fVar15;
      if ((uint)uVar4 <= uVar6) {
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar7 = (long *)(unaff_x19 + (long)(int)uVar6 * 8 + 0x20);
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03e91488(lVar5);
                    /* try { // try from 03e9236c to 03f92373 has its CatchHandler @ 03e927e0 */
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      if (*plVar7 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = FUN_0404ed98(*plVar7,0);
                    /* try { // try from 03e92384 to 03f9238f has its CatchHandler @ 03e92808 */
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      if (*plVar7 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(*plVar7,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 03e923b4 to 03f923bf has its CatchHandler @ 03e92884 */
        if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
        lVar5 = *plVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar5 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e923d8 to 03f923e3 has its CatchHandler @ 03e92878 */
        fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                 (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
      }
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 03e92414 to 03f92417 has its CatchHandler @ 03e927f0 */
      if (lVar5 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
      if ((uVar4 & 1) != 0) {
                    /* try { // try from 03e92438 to 03f92443 has its CatchHandler @ 03e92894 */
        if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
        lVar5 = *plVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar5 == 0) goto LAB_03e92a38;
                    /* try { // try from 03e9245c to 03f92467 has its CatchHandler @ 03e92898 */
        fStack0000000000000088 =
             (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                              (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
        fStack0000000000000088 = fVar8 * fStack0000000000000088;
      }
                    /* try { // try from 03e9247c to 03f92487 has its CatchHandler @ 03e92868 */
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 03e92494 to 03f9249f has its CatchHandler @ 03e9282c */
        thunk_FUN_01ee6d7c();
      }
      if (lVar5 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
      if ((uVar4 & 1) != 0) {
        if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
        lVar5 = *plVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar5 == 0) goto LAB_03e92a38;
        fStack000000000000002c =
             (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                              (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
        fStack000000000000002c = fVar8 * fStack000000000000002c;
      }
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar5 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
      if ((uVar4 & 1) != 0) {
        if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
        lVar5 = *plVar7;
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar5 == 0) goto LAB_03e92a38;
        fStack0000000000000028 =
             (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                              (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
        fStack0000000000000028 = fVar8 * fStack0000000000000028;
      }
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar5 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *unaff_x22;
        }
        uVar4 = FUN_022ee1a4(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xe0),
                             *(undefined8 *)puVar1);
        if ((uVar4 & 1) != 0) {
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          lVar5 = *plVar7;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar5 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          if ((uVar4 & 1) != 0) {
            if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
            lVar5 = *plVar7;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar5 == 0) goto LAB_03e92a38;
            fStack0000000000000010 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
          }
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          lVar5 = *plVar7;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar5 == 0) goto LAB_03e92a38;
          fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                   (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          if (*plVar7 == 0) goto LAB_03e92a38;
          fVar9 = fStack0000000000000010 * fVar9;
          fStack0000000000000024 =
               (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                (*plVar7,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80),0);
          fStack0000000000000024 = fStack0000000000000010 * fStack0000000000000024;
        }
      }
      fVar10 = fStack0000000000000088 + fStack000000000000002c + fStack0000000000000028;
      fVar14 = fStack0000000000000024 + fStack0000000000000088 + fVar9;
      if (fVar10 <= fVar14) {
        fVar10 = fVar14;
      }
      if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
      lVar5 = *plVar7;
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar5 == 0) goto LAB_03e92a38;
      uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),0);
      if ((uVar4 & 1) != 0) {
        lVar5 = *unaff_x22;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *unaff_x22;
        }
        uVar4 = FUN_022ee1a4(uVar2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0xe8),
                             *(undefined8 *)puVar1);
        if ((uVar4 & 1) != 0) {
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          lVar5 = *plVar7;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar5 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0);
          if ((uVar4 & 1) != 0) {
            if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
            lVar5 = *plVar7;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar5 == 0) goto LAB_03e92a38;
            fStack000000000000000c =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0);
          }
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          lVar5 = *plVar7;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar5 == 0) goto LAB_03e92a38;
          fVar14 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18),0);
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a30;
          if (*plVar7 == 0) {
LAB_03e92a40:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar7,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x1c),0)
          ;
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a54;
          if (*plVar7 == 0) goto LAB_03e92a40;
          fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar7,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20),0)
          ;
          if ((uint)*unaff_x23 <= uVar6) goto LAB_03e92a54;
          if (*plVar7 == 0) goto LAB_03e92a40;
          fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar7,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),0)
          ;
          fVar12 = fStack0000000000000088 + fStack000000000000000c * fVar12 +
                   fStack000000000000000c * fVar13;
          fVar13 = fVar12 - fStack000000000000000c * fVar14;
          fVar16 = fVar12 - fStack000000000000000c * fVar11;
          fVar14 = fStack000000000000000c * fVar14 + fVar12;
          fVar12 = fStack000000000000000c * fVar11 + fVar12;
          if (unaff_s15 <= fVar13) {
            unaff_s15 = fVar13;
          }
          if (unaff_s9 <= fVar16) {
            unaff_s9 = fVar16;
          }
          if (fVar18 <= fVar14) {
            fVar18 = fVar14;
          }
          if (fVar17 <= fVar12) {
            fVar17 = fVar12;
          }
        }
      }
      if (unaff_s15 <= fVar10) {
        unaff_s15 = fVar10;
      }
      if (unaff_s9 <= fVar10) {
        unaff_s9 = fVar10;
      }
      if (fVar18 <= fVar10) {
        fVar18 = fVar10;
      }
      unaff_s15 = (float)NEON_fminnm(in_stack_00000020 + unaff_s15,0x3f800000);
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      unaff_s9 = (float)NEON_fminnm(in_stack_00000020 + unaff_s9,0x3f800000);
      fVar18 = (float)NEON_fminnm(in_stack_00000020 + fVar18,0x3f800000);
      fVar10 = unaff_s15;
      if (unaff_s15 <= fVar15) {
        fVar10 = fVar15;
      }
      fVar15 = fVar10;
      fVar10 = unaff_s9;
      if (unaff_s9 <= fStack0000000000000034) {
        fVar10 = fStack0000000000000034;
      }
      fVar14 = fVar18;
      if (fVar18 <= fStack0000000000000038) {
        fVar14 = fStack0000000000000038;
      }
      fVar17 = (float)NEON_fminnm(in_stack_00000020 + fVar17,0x3f800000);
      fVar11 = fVar17;
      if (fVar17 <= fStack000000000000003c) {
        fVar11 = fStack000000000000003c;
      }
      uVar4 = *unaff_x23;
      uVar6 = uVar6 + 1;
      uVar3 = (uint)uVar4;
      fStack0000000000000030 = fVar15;
      fStack0000000000000034 = fVar10;
      fStack0000000000000038 = fVar14;
      fStack000000000000003c = fVar11;
    } while ((int)uVar6 < (int)uVar3);
  }
  if (uVar3 != 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    if (lVar5 != 0) {
      fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                               (lVar5,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
      fVar15 = unaff_s15 * fVar8;
      if (unaff_s15 * fVar8 <= unaff_s9 * fVar8) {
        fVar15 = unaff_s9 * fVar8;
      }
      fVar9 = fVar18 * fVar8;
      if (fVar18 * fVar8 <= fVar15) {
        fVar9 = fVar15;
      }
      fVar18 = fVar17 * fVar8;
      if (fVar17 * fVar8 <= fVar9) {
        fVar18 = fVar9;
      }
      return fVar18 + 0.25;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03e92a54:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


