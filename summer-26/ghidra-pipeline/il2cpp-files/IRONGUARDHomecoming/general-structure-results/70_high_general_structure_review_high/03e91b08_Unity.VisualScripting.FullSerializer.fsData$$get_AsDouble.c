/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsData$$get_AsDouble
ENTRY_POINT: 03e91b08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2
*/


float Unity_VisualScripting_FullSerializer_fsData__get_AsDouble(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  int iVar7;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
  *(undefined1 *)(unaff_x22 + 0xa91) = 1;
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x21;
  }
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 300) == '\0') {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03e8a66c();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar4 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  fVar8 = 0.0;
  if ((uVar4 & 1) == 0) {
    iVar7 = 4;
    if ((unaff_x20 & 1) == 0) {
      iVar7 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(0);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = FUN_0404e8a4();
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_0404e8a4();
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        iVar1 = -0x80000000;
        if (fVar8 != INFINITY) {
          iVar1 = (int)fVar8;
        }
        iVar7 = iVar1 + iVar7;
      }
      fVar8 = (float)iVar7;
      fVar18 = 1.0;
    }
    else {
      if (DAT_04836648 == '\0') {
        thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
        DAT_04836648 = '\x01';
      }
      pfVar6 = *(float **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
      fVar8 = *pfVar6;
      fVar18 = pfVar6[1];
      fVar17 = pfVar6[2];
      fVar16 = pfVar6[3];
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03e91488();
      uVar5 = FUN_0404ed98();
      uVar4 = FUN_0404e8a4();
      fVar9 = 0.0;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_0404e8a4();
      fVar10 = 0.0;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar10 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar10 = fVar9 * fVar10;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_0404e8a4();
      fVar11 = 0.0;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar11 = fVar9 * fVar11;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_0404e8a4();
      fVar12 = 0.0;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar12 = fVar9 * fVar12;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar11 = fVar10 + fVar11 + fVar12;
      uVar4 = FUN_0404e8a4();
      fVar9 = 0.0;
      if ((uVar4 & 1) == 0) {
        fVar12 = 0.0;
      }
      else {
        lVar3 = *unaff_x21;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *unaff_x21;
        }
        uVar4 = FUN_022ee1a4(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe0),
                             *(undefined8 *)StringLiteral_549);
        fVar12 = 0.0;
        fVar9 = 0.0;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_0404e8a4();
          fVar9 = 0.0;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists()
            ;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar12 = fVar9 * fVar12;
          fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar9 = fVar9 * fVar13;
        }
      }
      fVar9 = fVar9 + fVar10 + fVar12;
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_0404e8a4();
      if ((uVar4 & 1) != 0) {
        lVar3 = *unaff_x21;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar3 = *unaff_x21;
        }
        uVar4 = FUN_022ee1a4(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0xe8),
                             *(undefined8 *)StringLiteral_549);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = FUN_0404e8a4();
          fVar9 = 0.0;
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists()
            ;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar14 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar15 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar10 = fVar10 + fVar9 * fVar14 + fVar9 * fVar15;
          fVar14 = fVar10 - fVar9 * fVar12;
          fVar15 = fVar10 - fVar9 * fVar13;
          fVar12 = fVar9 * fVar12 + fVar10;
          fVar10 = fVar9 * fVar13 + fVar10;
          if (fVar8 <= fVar14) {
            fVar8 = fVar14;
          }
          if (fVar18 <= fVar15) {
            fVar18 = fVar15;
          }
          if (fVar17 <= fVar12) {
            fVar17 = fVar12;
          }
          if (fVar16 <= fVar10) {
            fVar16 = fVar10;
          }
        }
      }
      if (fVar8 <= fVar11) {
        fVar8 = fVar11;
      }
      if (fVar18 <= fVar11) {
        fVar18 = fVar11;
      }
      if (fVar17 <= fVar11) {
        fVar17 = fVar11;
      }
      if (fVar16 <= fVar11) {
        fVar16 = fVar11;
      }
      fVar9 = (float)iVar7;
      fVar11 = (float)NEON_fminnm(fVar8 + fVar9,0x3f800000);
      fVar10 = (float)NEON_fminnm(fVar18 + fVar9,0x3f800000);
      fVar8 = (float)NEON_fminnm(fVar17 + fVar9,0x3f800000);
      fVar18 = (float)NEON_fminnm(fVar16 + fVar9,0x3f800000);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar16 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar17 = fVar11 * fVar16;
      if (fVar11 * fVar16 <= fVar10 * fVar16) {
        fVar17 = fVar10 * fVar16;
      }
      fVar9 = fVar8 * fVar16;
      if (fVar8 * fVar16 <= fVar17) {
        fVar9 = fVar17;
      }
      fVar8 = fVar18 * fVar16;
      if (fVar18 * fVar16 <= fVar9) {
        fVar8 = fVar9;
      }
      fVar18 = 1.25;
    }
    fVar8 = fVar8 + fVar18;
  }
  return fVar8;
}


