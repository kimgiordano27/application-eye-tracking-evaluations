/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsTypeConverter$$RequestCycleSupport
ENTRY_POINT: 03e92198
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


float Unity_VisualScripting_FullSerializer_fsTypeConverter__RequestCycleSupport
                (long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  float *pfVar7;
  long unaff_x21;
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
  
  puVar2 = PTR_DAT_04579dc0;
  if ((*(byte *)(unaff_x21 + 0xa92) & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_549);
    thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
    *(undefined1 *)(unaff_x21 + 0xa92) = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 300) == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03e8a66c();
  }
  if (param_1 == 0) {
    return 0.0;
  }
  puVar8 = (ulong *)(param_1 + 0x18);
  fVar11 = 4.0;
  if ((param_2 & 1) == 0) {
    fVar11 = 0.0;
  }
  if (*(uint *)puVar8 == 0) goto LAB_03e92a54;
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  if (lVar3 != 0) {
    uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50),0);
    if ((uVar4 & 1) == 0) {
      if (DAT_04836648 == '\0') {
        thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
        DAT_04836648 = '\x01';
      }
      puVar1 = StringLiteral_549;
      pfVar7 = *(float **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
      fVar12 = *pfVar7;
      fVar22 = pfVar7[1];
      fVar24 = pfVar7[2];
      fVar23 = pfVar7[3];
      uVar6 = *(uint *)puVar8;
      uVar4 = (ulong)uVar6;
      if (0 < (int)uVar6) {
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
          if ((uint)uVar4 <= uVar9) {
LAB_03e92a30:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar10 = (long *)(param_1 + (long)(int)uVar9 * 8 + 0x20);
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_03e91488(lVar3);
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          if (*plVar10 == 0) {
LAB_03e92a38:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar5 = FUN_0404ed98(*plVar10,0);
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          if (*plVar10 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(*plVar10,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xcc),0)
          ;
          if ((uVar4 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar3 = *plVar10;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar3,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0xcc),0);
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0);
          if ((uVar4 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar3 = *plVar10;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            fStack0000000000000088 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),0)
            ;
            fStack0000000000000088 = fVar13 * fStack0000000000000088;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40),0);
          if ((uVar4 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar3 = *plVar10;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            fStack000000000000002c =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40),0
                                  );
            fStack000000000000002c = fVar13 * fStack000000000000002c;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c),0);
          if ((uVar4 & 1) != 0) {
            if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
            lVar3 = *plVar10;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (lVar3 == 0) goto LAB_03e92a38;
            fStack0000000000000028 =
                 (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c),0
                                  );
            fStack0000000000000028 = fVar13 * fStack0000000000000028;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x78),0);
          if ((uVar4 & 1) != 0) {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar2;
            }
            uVar4 = FUN_022ee1a4(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe0),
                                 *(undefined8 *)puVar1);
            if ((uVar4 & 1) != 0) {
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar3 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar3 == 0) goto LAB_03e92a38;
              uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0),0
                                  );
              if ((uVar4 & 1) != 0) {
                if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
                lVar3 = *plVar10;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar3 == 0) goto LAB_03e92a38;
                fStack0000000000000010 =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar3,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0xd0),0);
              }
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar3 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar3 == 0) goto LAB_03e92a38;
              fVar14 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar3,*(undefined4 *)
                                                (*(long *)(*(long *)puVar2 + 0xb8) + 0x78),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              if (*plVar10 == 0) goto LAB_03e92a38;
              fVar14 = fStack0000000000000010 * fVar14;
              fStack0000000000000024 =
                   (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                    (*plVar10,*(undefined4 *)
                                               (*(long *)(*(long *)puVar2 + 0xb8) + 0x80),0);
              fStack0000000000000024 = fStack0000000000000010 * fStack0000000000000024;
            }
          }
          fVar15 = fStack0000000000000088 + fStack000000000000002c + fStack0000000000000028;
          fVar20 = fStack0000000000000024 + fStack0000000000000088 + fVar14;
          if (fVar15 <= fVar20) {
            fVar15 = fVar20;
          }
          if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
          lVar3 = *plVar10;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (lVar3 == 0) goto LAB_03e92a38;
          uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24),0);
          if ((uVar4 & 1) != 0) {
            lVar3 = *(long *)puVar2;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar3 = *(long *)puVar2;
            }
            uVar4 = FUN_022ee1a4(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe8),
                                 *(undefined8 *)puVar1);
            if ((uVar4 & 1) != 0) {
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar3 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar3 == 0) goto LAB_03e92a38;
              uVar4 = FUN_0404e8a4(lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd4),0
                                  );
              if ((uVar4 & 1) != 0) {
                if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
                lVar3 = *plVar10;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                if (lVar3 == 0) goto LAB_03e92a38;
                fStack000000000000000c =
                     (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                      (lVar3,*(undefined4 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0xd4),0);
              }
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              lVar3 = *plVar10;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              if (lVar3 == 0) goto LAB_03e92a38;
              fVar20 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (lVar3,*(undefined4 *)
                                                (*(long *)(*(long *)puVar2 + 0xb8) + 0x18),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a30;
              if (*plVar10 == 0) {
LAB_03e92a40:
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              fVar16 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a54;
              if (*plVar10 == 0) goto LAB_03e92a40;
              fVar17 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x20),0);
              if (*(uint *)puVar8 <= uVar9) goto LAB_03e92a54;
              if (*plVar10 == 0) goto LAB_03e92a40;
              fVar18 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                        (*plVar10,*(undefined4 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x24),0);
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
          uVar4 = *puVar8;
          uVar9 = uVar9 + 1;
          uVar6 = (uint)uVar4;
          fStack0000000000000034 = fVar15;
          fStack0000000000000038 = fVar20;
          fStack000000000000003c = fVar16;
        } while ((int)uVar9 < (int)uVar6);
      }
      if (uVar6 == 0) goto LAB_03e92a54;
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 != 0) {
        fVar19 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x54),0
                                  );
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
      lVar3 = *(long *)(param_1 + 0x20);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar3 != 0) {
        fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists
                                  (lVar3,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x50),0
                                  );
        return fVar11 + fVar12;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


