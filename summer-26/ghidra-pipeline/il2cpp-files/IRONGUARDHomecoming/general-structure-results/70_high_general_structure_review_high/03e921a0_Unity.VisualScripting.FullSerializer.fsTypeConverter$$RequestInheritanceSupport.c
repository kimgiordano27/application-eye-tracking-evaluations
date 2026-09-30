/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$RequestInheritanceSupport
ENTRY_POINT: 03e921a0
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


float Unity_VisualScripting_FullSerializer_fsTypeConverter__RequestInheritanceSupport
                (ulong param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  float *pfVar6;
  long unaff_x21;
  long unaff_x22;
  long *plVar7;
  ulong *puVar8;
  uint uVar9;
  long *plVar10;
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
  float fVar24;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  
  plVar7 = *(long **)(unaff_x22 + 0xdc0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_549);
    thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
    *(undefined1 *)(unaff_x21 + 0xa92) = 1;
  }
  lVar2 = *plVar7;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar2 = *plVar7;
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
  puVar8 = (ulong *)(param_2 + 0x18);
  fVar11 = 4.0;
  if ((param_3 & 1) == 0) {
    fVar11 = 0.0;
  }
  if (*(uint *)puVar8 == 0) goto LAB_03e92a54;
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(int *)(*plVar7 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar2 != 0) {
    uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x50),0);
    if ((uVar3 & 1) == 0) {
      if (DAT_04836648 == '\0') {
        thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
        DAT_04836648 = '\x01';
      }
      puVar1 = StringLiteral_549;
      pfVar6 = *(float **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
      fVar12 = *pfVar6;
      fVar22 = pfVar6[1];
      fVar24 = pfVar6[2];
      fVar23 = pfVar6[3];
      uVar5 = *(uint *)puVar8;
      uVar3 = (ulong)uVar5;
      if (0 < (int)uVar5) {
        fStack0000000000000088 = 0.0;
        fStack000000000000002c = 0.0;
        fStack0000000000000028 = 0.0;
        fStack0000000000000010 = 0.0;
        uVar9 = 0;
        fVar13 = 0.0;
        fStack000000000000000c = 0.0;
        fVar14 = 0.0;
        fStack0000000000000024 = 0.0;
        fVar19 = fVar12;
        fStack0000000000000034 = fVar22;
        fStack0000000000000038 = fVar24;
        fStack000000000000003c = fVar23;
        do {
          if ((uint)uVar3 <= uVar9) {
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar10 = (long *)(param_2 + (long)(int)uVar9 * 8 + 0x20);
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03e91488(lVar2);
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          if (*plVar10 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_0404ed98(*plVar10,0);
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          if (*plVar10 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(*plVar10,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xcc),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar2 = *plVar10;
            if (*(int *)(*plVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xcc),0);
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xc),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar2 = *plVar10;
            if (*(int *)(*plVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack0000000000000088 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xc),0);
            fStack0000000000000088 = fVar13 * fStack0000000000000088;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x40),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar2 = *plVar10;
            if (*(int *)(*plVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack000000000000002c =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x40),0);
            fStack000000000000002c = fVar13 * fStack000000000000002c;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x3c),0);
          if ((uVar3 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar2 = *plVar10;
            if (*(int *)(*plVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar2 == 0) goto LAB_03e92a38;
            fStack0000000000000028 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x3c),0);
            fStack0000000000000028 = fVar13 * fStack0000000000000028;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x78),0);
          if ((uVar3 & 1) != 0) {
            lVar2 = *plVar7;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar2 = *plVar7;
            }
            uVar3 = FUN_022ee1a4(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xe0),
                                 *(undefined8 *)puVar1);
            if ((uVar3 & 1) != 0) {
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar2 = *plVar10;
              if (*(int *)(*plVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xd0),0);
              if ((uVar3 & 1) != 0) {
                if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
                lVar2 = *plVar10;
                if (*(int *)(*plVar7 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar2 == 0) goto LAB_03e92a38;
                fStack0000000000000010 =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xd0),0);
              }
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar2 = *plVar10;
              if (*(int *)(*plVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              fVar14 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x78),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              if (*plVar10 == 0) goto LAB_03e92a38;
              fVar14 = fStack0000000000000010 * fVar14;
              fStack0000000000000024 =
                   (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar10,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x80),0);
              fStack0000000000000024 = fStack0000000000000010 * fStack0000000000000024;
            }
          }
          fVar15 = fStack0000000000000088 + fStack000000000000002c + fStack0000000000000028;
          fVar20 = fStack0000000000000024 + fStack0000000000000088 + fVar14;
          if (fVar15 <= fVar20) {
            fVar15 = fVar20;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar2 = *plVar10;
          if (*(int *)(*plVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar2 == 0) goto LAB_03e92a38;
          uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x24),0);
          if ((uVar3 & 1) != 0) {
            lVar2 = *plVar7;
            if (*(int *)(lVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar2 = *plVar7;
            }
            uVar3 = FUN_022ee1a4(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0xe8),
                                 *(undefined8 *)puVar1);
            if ((uVar3 & 1) != 0) {
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar2 = *plVar10;
              if (*(int *)(*plVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              uVar3 = FUN_0404e8a4(lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xd4),0);
              if ((uVar3 & 1) != 0) {
                if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
                lVar2 = *plVar10;
                if (*(int *)(*plVar7 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar2 == 0) goto LAB_03e92a38;
                fStack000000000000000c =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0xd4),0);
              }
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar2 = *plVar10;
              if (*(int *)(*plVar7 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar2 == 0) goto LAB_03e92a38;
              fVar20 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x18),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              if (*plVar10 == 0) {
LAB_03e92a40:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar16 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x1c),
                                         0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a54;
              if (*plVar10 == 0) goto LAB_03e92a40;
              fVar17 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x20),
                                         0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a54;
              if (*plVar10 == 0) goto LAB_03e92a40;
              fVar18 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x24),
                                         0);
              fVar17 = fStack0000000000000088 + fStack000000000000000c * fVar17 +
                       fStack000000000000000c * fVar18;
              fVar18 = fVar17 - fStack000000000000000c * fVar20;
              fVar21 = fVar17 - fStack000000000000000c * fVar16;
              fVar20 = fStack000000000000000c * fVar20 + fVar17;
              fVar17 = fStack000000000000000c * fVar16 + fVar17;
              if (fVar12 <= fVar18) {
                fVar12 = fVar18;
              }
              if (fVar22 <= fVar21) {
                fVar22 = fVar21;
              }
              if (fVar24 <= fVar20) {
                fVar24 = fVar20;
              }
              if (fVar23 <= fVar17) {
                fVar23 = fVar17;
              }
            }
          }
          if (fVar12 <= fVar15) {
            fVar12 = fVar15;
          }
          if (fVar22 <= fVar15) {
            fVar22 = fVar15;
          }
          if (fVar24 <= fVar15) {
            fVar24 = fVar15;
          }
          fVar12 = (float)NEON_fminnm(fVar11 + fVar12,0x3f800000);
          if (fVar23 <= fVar15) {
            fVar23 = fVar15;
          }
          fVar22 = (float)NEON_fminnm(fVar11 + fVar22,0x3f800000);
          fVar24 = (float)NEON_fminnm(fVar11 + fVar24,0x3f800000);
          fVar15 = fVar12;
          if (fVar12 <= fVar19) {
            fVar15 = fVar19;
          }
          fVar19 = fVar15;
          fVar15 = fVar22;
          if (fVar22 <= fStack0000000000000034) {
            fVar15 = fStack0000000000000034;
          }
          fVar20 = fVar24;
          if (fVar24 <= fStack0000000000000038) {
            fVar20 = fStack0000000000000038;
          }
          fVar23 = (float)NEON_fminnm(fVar11 + fVar23,0x3f800000);
          fVar16 = fVar23;
          if (fVar23 <= fStack000000000000003c) {
            fVar16 = fStack000000000000003c;
          }
          uVar3 = *puVar8;
          uVar9 = uVar9 + 1;
          uVar5 = (uint)uVar3;
          fStack0000000000000034 = fVar15;
          fStack0000000000000038 = fVar20;
          fStack000000000000003c = fVar16;
        } while ((int)uVar9 < (int)uVar5);
      }
      if (uVar5 == 0) goto LAB_03e92a54;
      lVar2 = *(long *)(param_2 + 0x20);
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar2 != 0) {
        fVar19 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x54),0);
        fVar11 = fVar12 * fVar19;
        if (fVar12 * fVar19 <= fVar22 * fVar19) {
          fVar11 = fVar22 * fVar19;
        }
        fVar12 = fVar24 * fVar19;
        if (fVar24 * fVar19 <= fVar11) {
          fVar12 = fVar11;
        }
        fVar11 = fVar23 * fVar19;
        if (fVar23 * fVar19 <= fVar12) {
          fVar11 = fVar12;
        }
        return fVar11 + 0.25;
      }
    }
    else {
      if (*(uint *)puVar8 == 0) {
LAB_03e92a54:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar2 = *(long *)(param_2 + 0x20);
      if (*(int *)(*plVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar2 != 0) {
        fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar2,*(undefined4 *)(*(long *)(*plVar7 + 0xb8) + 0x50),0);
        return fVar11 + fVar12;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


