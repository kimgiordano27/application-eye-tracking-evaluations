/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$TrySerialize
ENTRY_POINT: 03e921a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_4
*/


float Unity_VisualScripting_FullSerializer_fsTypeConverter__TrySerialize(ulong param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  float *pfVar6;
  ulong unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  ulong *puVar7;
  uint uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_549);
    thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
    *(undefined1 *)(unaff_x21 + 0xa92) = 1;
  }
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
                    /* try { // try from 03e921dc to 03f921f3 has its CatchHandler @ 03e928e4 */
    thunk_FUN_01ee6d7c();
    lVar2 = *unaff_x22;
  }
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 300) == '\0') {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03e8a66c();
  }
  if (param_2 == 0) {
    return 0.0;
  }
  puVar7 = (ulong *)(param_2 + 0x18);
                    /* try { // try from 03e92208 to 03f9221f has its CatchHandler @ 03e928e8 */
  fVar10 = 4.0;
  if ((unaff_x20 & 1) == 0) {
    fVar10 = 0.0;
  }
  if (*(uint *)puVar7 == 0) goto LAB_03e92a54;
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar2 != 0) {
                    /* try { // try from 03e9222c to 03f92243 has its CatchHandler @ 03e928ec */
    uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50),0);
    if ((uVar3 & 1) == 0) {
      if (DAT_04836648 == '\0') {
                    /* try { // try from 03e922bc to 03f922cb has its CatchHandler @ 03e928ac */
        thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
        DAT_04836648 = '\x01';
      }
      puVar1 = StringLiteral_549;
      pfVar6 = *(float **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
      fVar11 = *pfVar6;
      fVar21 = pfVar6[1];
      fVar23 = pfVar6[2];
      fVar22 = pfVar6[3];
      uVar5 = *(uint *)puVar7;
      uVar3 = (ulong)uVar5;
      if (0 < (int)uVar5) {
        fStack0000000000000088 = 0.0;
        fStack000000000000002c = 0.0;
        fStack0000000000000028 = 0.0;
        fStack0000000000000010 = 0.0;
        uVar8 = 0;
        fVar12 = 0.0;
        fStack000000000000000c = 0.0;
        fVar13 = 0.0;
        fStack0000000000000024 = 0.0;
        fVar18 = fVar11;
        fStack0000000000000034 = fVar21;
        fStack0000000000000038 = fVar23;
        fStack000000000000003c = fVar22;
        do {
          if ((uint)uVar3 <= uVar8) {
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar9 = (long *)(param_2 + (long)(int)uVar8 * 8 + 0x20);
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03e91488(lVar2);
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          if (*plVar9 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_0404ed98(*plVar9,0);
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          if (*plVar9 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(*plVar9,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
            lVar2 = *plVar9;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xcc),0)
            ;
          }
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
            lVar2 = *plVar9;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack0000000000000088 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xc),0);
            fStack0000000000000088 = fVar12 * fStack0000000000000088;
          }
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
            lVar2 = *plVar9;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack000000000000002c =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x40),0);
            fStack000000000000002c = fVar12 * fStack000000000000002c;
          }
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
            lVar2 = *plVar9;
            if (*(int *)(*unaff_x22 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack0000000000000028 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x3c),0);
            fStack0000000000000028 = fVar12 * fStack0000000000000028;
          }
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),0);
          if ((uVar3 & 1) != 0) {
            lVar2 = *unaff_x22;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar2 = *unaff_x22;
            }
            uVar3 = FUN_022ee1a4(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xe0),
                                 *(undefined8 *)puVar1);
            if ((uVar3 & 1) != 0) {
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              lVar2 = *plVar9;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0);
              if ((uVar3 & 1) != 0) {
                if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
                lVar2 = *plVar9;
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar2 == 0) goto LAB_03e92a38;
                fStack0000000000000010 =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd0),0)
                ;
              }
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              lVar2 = *plVar9;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x78),
                                         0);
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              if (*plVar9 == 0) goto LAB_03e92a38;
              fVar13 = fStack0000000000000010 * fVar13;
              fStack0000000000000024 =
                   (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar9,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x80),0)
              ;
              fStack0000000000000024 = fStack0000000000000010 * fStack0000000000000024;
            }
          }
          fVar14 = fStack0000000000000088 + fStack000000000000002c + fStack0000000000000028;
          fVar19 = fStack0000000000000024 + fStack0000000000000088 + fVar13;
          if (fVar14 <= fVar19) {
            fVar14 = fVar19;
          }
          if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
          lVar2 = *plVar9;
          if (*(int *)(*unaff_x22 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x24),0);
          if ((uVar3 & 1) != 0) {
            lVar2 = *unaff_x22;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar2 = *unaff_x22;
            }
            uVar3 = FUN_022ee1a4(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xe8),
                                 *(undefined8 *)puVar1);
            if ((uVar3 & 1) != 0) {
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              lVar2 = *plVar9;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0);
              if ((uVar3 & 1) != 0) {
                if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
                lVar2 = *plVar9;
                if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar2 == 0) goto LAB_03e92a38;
                fStack000000000000000c =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xd4),0)
                ;
              }
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              lVar2 = *plVar9;
              if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              fVar19 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18),
                                         0);
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a30;
              if (*plVar9 == 0) {
LAB_03e92a40:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar15 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar9,*(undefined4 *)
                                                  (*(long *)(*unaff_x22 + 0xb8) + 0x1c),0);
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a54;
              if (*plVar9 == 0) goto LAB_03e92a40;
              fVar16 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar9,*(undefined4 *)
                                                  (*(long *)(*unaff_x22 + 0xb8) + 0x20),0);
              if (*(uint *)puVar7 <= uVar8) goto LAB_03e92a54;
              if (*plVar9 == 0) goto LAB_03e92a40;
              fVar17 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar9,*(undefined4 *)
                                                  (*(long *)(*unaff_x22 + 0xb8) + 0x24),0);
              fVar16 = fStack0000000000000088 + fStack000000000000000c * fVar16 +
                       fStack000000000000000c * fVar17;
              fVar17 = fVar16 - fStack000000000000000c * fVar19;
              fVar20 = fVar16 - fStack000000000000000c * fVar15;
              fVar19 = fStack000000000000000c * fVar19 + fVar16;
              fVar16 = fStack000000000000000c * fVar15 + fVar16;
              if (fVar11 <= fVar17) {
                fVar11 = fVar17;
              }
              if (fVar21 <= fVar20) {
                fVar21 = fVar20;
              }
              if (fVar23 <= fVar19) {
                fVar23 = fVar19;
              }
              if (fVar22 <= fVar16) {
                fVar22 = fVar16;
              }
            }
          }
          if (fVar11 <= fVar14) {
            fVar11 = fVar14;
          }
          if (fVar21 <= fVar14) {
            fVar21 = fVar14;
          }
          if (fVar23 <= fVar14) {
            fVar23 = fVar14;
          }
          fVar11 = (float)NEON_fminnm(fVar10 + fVar11,0x3f800000);
          if (fVar22 <= fVar14) {
            fVar22 = fVar14;
          }
          fVar21 = (float)NEON_fminnm(fVar10 + fVar21,0x3f800000);
          fVar23 = (float)NEON_fminnm(fVar10 + fVar23,0x3f800000);
          fVar14 = fVar11;
          if (fVar11 <= fVar18) {
            fVar14 = fVar18;
          }
          fVar18 = fVar14;
          fVar14 = fVar21;
          if (fVar21 <= fStack0000000000000034) {
            fVar14 = fStack0000000000000034;
          }
          fVar19 = fVar23;
          if (fVar23 <= fStack0000000000000038) {
            fVar19 = fStack0000000000000038;
          }
          fVar22 = (float)NEON_fminnm(fVar10 + fVar22,0x3f800000);
          fVar15 = fVar22;
          if (fVar22 <= fStack000000000000003c) {
            fVar15 = fStack000000000000003c;
          }
          uVar3 = *puVar7;
          uVar8 = uVar8 + 1;
          uVar5 = (uint)uVar3;
          fStack0000000000000034 = fVar14;
          fStack0000000000000038 = fVar19;
          fStack000000000000003c = fVar15;
        } while ((int)uVar8 < (int)uVar5);
      }
      if (uVar5 == 0) goto LAB_03e92a54;
      lVar2 = *(long *)(param_2 + 0x20);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar2 != 0) {
        fVar18 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x54),0);
        fVar10 = fVar11 * fVar18;
        if (fVar11 * fVar18 <= fVar21 * fVar18) {
          fVar10 = fVar21 * fVar18;
        }
        fVar11 = fVar23 * fVar18;
        if (fVar23 * fVar18 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar10 = fVar22 * fVar18;
        if (fVar22 * fVar18 <= fVar11) {
          fVar10 = fVar11;
        }
        return fVar10 + 0.25;
      }
    }
    else {
      if (*(uint *)puVar7 == 0) {
LAB_03e92a54:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 03e92250 to 03f92267 has its CatchHandler @ 03e928e0 */
      lVar2 = *(long *)(param_2 + 0x20);
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar2 != 0) {
                    /* try { // try from 03e92278 to 03f9227f has its CatchHandler @ 03e928a8 */
        fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0x50),0);
        return fVar10 + fVar11;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


