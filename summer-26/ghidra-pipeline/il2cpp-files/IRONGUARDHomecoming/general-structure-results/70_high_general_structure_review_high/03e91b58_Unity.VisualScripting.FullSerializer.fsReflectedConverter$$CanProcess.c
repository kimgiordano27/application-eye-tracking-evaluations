/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsReflectedConverter$$CanProcess
ENTRY_POINT: 03e91b58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_14;telemetry_or_network_hits_2
*/


float Unity_VisualScripting_FullSerializer_fsReflectedConverter__CanProcess(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  int iVar6;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar7;
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
  
  thunk_FUN_01ee6d7c();
  FUN_03e8a66c();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
                    /* try { // try from 03e91b6c to 03f91c27 has its CatchHandler @ 03e91b6c
                       catch() { ... } // from try @ 03e91b6c with catch @ 03e91b6c
                       catch() { ... } // from try @ 03e91cb8 with catch @ 03e91b6c
                       catch() { ... } // from try @ 03e91d04 with catch @ 03e91b6c
                       catch() { ... } // from try @ 03e91d44 with catch @ 03e91b6c
                       catch() { ... } // from try @ 03e91d74 with catch @ 03e91b6c */
    thunk_FUN_01ee6d7c();
  }
  uVar2 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh();
  fVar7 = 0.0;
  if ((uVar2 & 1) == 0) {
    iVar6 = 4;
    if ((unaff_x20 & 1) == 0) {
      iVar6 = 0;
    }
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(0);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = FUN_0404e8a4();
    if ((uVar2 & 1) == 0) {
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0404e8a4();
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar7 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        iVar1 = -0x80000000;
        if (fVar7 != INFINITY) {
          iVar1 = (int)fVar7;
        }
        iVar6 = iVar1 + iVar6;
      }
      fVar7 = (float)iVar6;
      fVar17 = 1.0;
    }
    else {
      if (DAT_04836648 == '\0') {
        thunk_FUN_01efb3a4(Method_Unity_Burst_SharedStatic<float>_get_Data__);
        DAT_04836648 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)Method_Unity_Burst_SharedStatic<float>_get_Data__ + 0xb8);
      fVar7 = *pfVar5;
      fVar17 = pfVar5[1];
      fVar16 = pfVar5[2];
      fVar15 = pfVar5[3];
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_03e91488();
      uVar3 = FUN_0404ed98();
                    /* try { // try from 03e91c28 to 03f91c2f has its CatchHandler @ 03e91d0c */
      uVar2 = FUN_0404e8a4();
      fVar8 = 0.0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0404e8a4();
      fVar9 = 0.0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar9 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar9 = fVar8 * fVar9;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0404e8a4();
      fVar10 = 0.0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar10 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar10 = fVar8 * fVar10;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0404e8a4();
      fVar11 = 0.0;
      if ((uVar2 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
        fVar11 = fVar8 * fVar11;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar10 = fVar9 + fVar10 + fVar11;
      uVar2 = FUN_0404e8a4();
      fVar8 = 0.0;
      if ((uVar2 & 1) == 0) {
        fVar11 = 0.0;
      }
      else {
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *unaff_x21;
        }
        uVar2 = FUN_022ee1a4(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe0),
                             *(undefined8 *)StringLiteral_549);
        fVar11 = 0.0;
        fVar8 = 0.0;
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar2 = FUN_0404e8a4();
          fVar8 = 0.0;
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists()
            ;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar11 = fVar8 * fVar11;
          fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar8 = fVar8 * fVar12;
        }
      }
      fVar8 = fVar8 + fVar9 + fVar11;
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar2 = FUN_0404e8a4();
      if ((uVar2 & 1) != 0) {
        lVar4 = *unaff_x21;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar4 = *unaff_x21;
        }
        uVar2 = FUN_022ee1a4(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe8),
                             *(undefined8 *)StringLiteral_549);
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar2 = FUN_0404e8a4();
          fVar8 = 0.0;
          if ((uVar2 & 1) != 0) {
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            fVar8 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists()
            ;
          }
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          fVar11 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar12 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar13 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar14 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
          fVar9 = fVar9 + fVar8 * fVar13 + fVar8 * fVar14;
          fVar13 = fVar9 - fVar8 * fVar11;
          fVar14 = fVar9 - fVar8 * fVar12;
          fVar11 = fVar8 * fVar11 + fVar9;
          fVar9 = fVar8 * fVar12 + fVar9;
          if (fVar7 <= fVar13) {
            fVar7 = fVar13;
          }
          if (fVar17 <= fVar14) {
            fVar17 = fVar14;
          }
          if (fVar16 <= fVar11) {
            fVar16 = fVar11;
          }
          if (fVar15 <= fVar9) {
            fVar15 = fVar9;
          }
        }
      }
      if (fVar7 <= fVar10) {
        fVar7 = fVar10;
      }
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      if (fVar16 <= fVar10) {
        fVar16 = fVar10;
      }
      if (fVar15 <= fVar10) {
        fVar15 = fVar10;
      }
      fVar8 = (float)iVar6;
      fVar10 = (float)NEON_fminnm(fVar7 + fVar8,0x3f800000);
      fVar9 = (float)NEON_fminnm(fVar17 + fVar8,0x3f800000);
      fVar7 = (float)NEON_fminnm(fVar16 + fVar8,0x3f800000);
      fVar17 = (float)NEON_fminnm(fVar15 + fVar8,0x3f800000);
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar15 = (float)UnityEngine_UIElements_VisualElementFocusRing__SortAndFlattenScopeLists();
      fVar16 = fVar10 * fVar15;
      if (fVar10 * fVar15 <= fVar9 * fVar15) {
        fVar16 = fVar9 * fVar15;
      }
      fVar8 = fVar7 * fVar15;
      if (fVar7 * fVar15 <= fVar16) {
        fVar8 = fVar16;
      }
      fVar7 = fVar17 * fVar15;
      if (fVar17 * fVar15 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar17 = 1.25;
    }
    fVar7 = fVar7 + fVar17;
  }
  return fVar7;
}


