/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_SetVirtualKeyboardModelVisibility
ENTRY_POINT: 069791fc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_SetVirtualKeyboardModelVisibility
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  char cVar1;
  bool bVar2;
  float in_w8;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int iVar6;
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
  float unaff_s8;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_s13;
  float fVar20;
  float unaff_s14;
  float fVar21;
  float fVar22;
  float fStack0000000000000004;
  
  param_2 = param_2 / unaff_s13;
  fVar7 = (param_1 * unaff_s14) / unaff_s13;
  fVar16 = param_3;
  if (param_2 <= param_3) {
    fVar16 = param_2;
  }
  fVar9 = param_4;
  if (0.0 <= param_2) {
    fVar9 = fVar16;
  }
  fVar16 = INFINITY;
  if (fVar9 != in_w8) {
    fVar16 = ABS(SQRT(fVar9));
  }
  if (fVar7 <= param_3) {
    param_3 = fVar7;
  }
  if (0.0 <= fVar7) {
    param_4 = param_3;
  }
  fVar7 = INFINITY;
  if (param_4 != in_w8) {
    fVar7 = ABS(SQRT(param_4));
  }
  if (param_5 != 0) {
    FUN_07d306c8(param_5,0);
    lVar3 = *(long *)(unaff_x19 + 0x40);
    if (lVar3 != 0) {
      fVar8 = *(float *)(lVar3 + 0x20);
      fVar9 = -fVar8;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        fVar15 = *(float *)(*(long *)(unaff_x19 + 0x38) + 0x20);
        fVar8 = -fVar15;
        if (0.0 <= fVar15) {
          fVar8 = fVar15;
        }
        fVar13 = (*(float *)(unaff_x19 + 1000) / DAT_015c5d50) * 1.5;
        fVar15 = 1.5;
        if ((1.5 <= fVar13) && (fVar15 = fVar13, 10.0 < fVar13)) {
          fVar15 = 10.0;
        }
        if (fVar15 <= fVar9) {
          fVar15 = fVar9;
        }
        fVar14 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x288) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(unaff_x19 + 0x54) >> 0x20) +
                 *(float *)(unaff_x19 + 0x284) * *(float *)(unaff_x19 + 0x50) +
                 (float)*(undefined8 *)(unaff_x19 + 0x288) *
                 (float)*(undefined8 *)(unaff_x19 + 0x54);
        fVar13 = 0.0;
        if (0.0 <= fVar14) {
          fVar13 = fVar14;
        }
        if ((*(long *)(unaff_x19 + 0x68) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
          fVar19 = 0.0;
          fVar22 = 0.0;
          fVar16 = unaff_s8 * unaff_s13 * fVar16;
          fVar14 = fVar16 * *(float *)(*(long *)(unaff_x19 + 0x68) + 0x20);
          if (0 < *(int *)(unaff_x19 + 200)) {
            iVar6 = 0;
            fVar17 = 1.0 / (float)*(int *)(unaff_x19 + 200);
            fVar20 = 1.0 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x4c);
            fVar18 = *(float *)(unaff_x19 + 0x74) + *(float *)(unaff_x19 + 0x90);
            fVar21 = *(float *)(unaff_x19 + 1000) * fVar17;
            fStack0000000000000004 = unaff_s13;
            do {
              lVar3 = *(long *)(unaff_x19 + 0x30);
              if (lVar3 == 0) goto LAB_0697980c;
              cVar1 = *(char *)(unaff_x19 + 0x9c);
              fVar10 = fVar21 * *(float *)(unaff_x19 + 0x70);
              fVar22 = fVar22 + fVar10;
              fVar10 = *(float *)(lVar3 + 0x48) + fVar20 * fVar10;
              *(float *)(lVar3 + 0x48) = fVar10;
              if (cVar1 != '\0') {
                lVar5 = *(long *)(unaff_x19 + 0x40);
                if (lVar5 == 0) goto LAB_0697980c;
                fVar12 = -1.0;
                lVar4 = *(long *)(unaff_x19 + 0x68);
                fVar10 = -((fVar10 * *(float *)(lVar3 + 0x58) - *(float *)(lVar5 + 0x20)) *
                          (1.0 / fVar15));
                fVar11 = *(float *)(lVar5 + 0x1c) * fVar10;
                *(float *)(lVar5 + 0x14) = fVar11;
                fVar10 = -(*(float *)(lVar5 + 0x1c) * fVar10);
                if (0.0 <= fVar11) {
                  fVar12 = 1.0;
                  fVar10 = fVar11;
                }
                if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x30), lVar3 == 0))
                goto LAB_0697980c;
                fVar10 = (float)FUN_07c42008(fVar10,lVar3,0);
                fVar12 = fVar16 * -(fVar12 * fVar10);
                fVar10 = fVar14;
                if ((fVar12 <= fVar14) && (fVar10 = fVar12, fVar12 < -fVar14)) {
                  fVar10 = -fVar14;
                }
                lVar3 = *(long *)(unaff_x19 + 0x30);
                if (lVar3 == 0) goto LAB_0697980c;
                fVar19 = fVar19 + fVar17 * fVar10;
                fVar10 = fVar21 * fVar10 * *(float *)(lVar3 + 0x58);
                fVar22 = fVar22 + fVar10;
                fVar10 = *(float *)(lVar3 + 0x48) - fVar20 * fVar10;
                *(float *)(lVar3 + 0x48) = fVar10;
              }
              if (0.0 < fVar18) {
                bVar2 = fVar10 < 0.0;
                fVar12 = -fVar18;
                if (!bVar2) {
                  fVar12 = fVar18;
                }
                fVar22 = fVar22 - fVar21 * fVar12;
                fVar10 = fVar10 - fVar20 * fVar21 * fVar12;
                if (fVar10 >= 0.0 && bVar2 || fVar10 < 0.0 && !bVar2) {
                  fVar10 = 0.0;
                }
                *(float *)(lVar3 + 0x48) = fVar10;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(unaff_x19 + 200));
            lVar3 = *(long *)(unaff_x19 + 0x40);
            unaff_s13 = fStack0000000000000004;
            if (lVar3 == 0) goto LAB_0697980c;
          }
          fVar16 = 0.0;
          cVar1 = *(char *)(unaff_x19 + 0x9c);
          *(float *)(lVar3 + 0x10) = fVar19;
          if (cVar1 != '\0') {
            lVar5 = *(long *)(unaff_x19 + 0x30);
            if (lVar5 == 0) goto LAB_0697980c;
            fVar16 = *(float *)(lVar3 + 0x1c) *
                     -((*(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x58) -
                       *(float *)(lVar3 + 0x20)) * (1.0 / fVar15));
          }
          fVar19 = -1.0;
          lVar5 = *(long *)(unaff_x19 + 0x38);
          *(float *)(unaff_x19 + 0x78) = -fVar22;
          fVar22 = 1.0;
          if (fVar16 <= 1.0) {
            fVar22 = fVar16;
          }
          fVar17 = fVar19;
          if (-1.0 <= fVar16) {
            fVar17 = fVar22;
          }
          *(float *)(lVar3 + 0x14) = fVar17;
          if (lVar5 != 0) {
            fVar16 = atan2f(*(float *)(lVar5 + 0x20),fVar15);
            lVar3 = *(long *)(unaff_x19 + 0x68);
            fVar16 = fVar16 * DAT_015c595c * DAT_015c5d68;
            fVar15 = *(float *)(lVar5 + 0x1c) * fVar16;
            *(float *)(lVar5 + 0x14) = fVar15;
            fVar16 = -(*(float *)(lVar5 + 0x1c) * fVar16);
            if (0.0 <= fVar15) {
              fVar19 = 1.0;
              fVar16 = fVar15;
            }
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
              fVar15 = *(float *)(lVar3 + 0x20);
              fVar7 = unaff_s14 * unaff_s13 * fVar7;
              fVar16 = (float)FUN_07c42008(fVar16,*(long *)(lVar3 + 0x30),0);
              cVar1 = *(char *)(unaff_x19 + 0x9c);
              *(float *)(lVar5 + 0x10) = fVar13 * fVar7 * -(fVar19 * fVar16);
              if ((cVar1 == '\0') ||
                 (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= fVar9)) ||
                  (DAT_015c5840 <= fVar8)))) {
                *(undefined1 *)(unaff_x19 + 0x408) = 0;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar3 = *(long *)(unaff_x19 + 0x30), lVar3 == 0)) goto LAB_0697980c;
                fVar16 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar3 + 0x58);
                fVar9 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                        (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar16;
                fVar8 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar16;
                fVar16 = *(float *)(unaff_x19 + 0x270) - fVar16 * *(float *)(unaff_x19 + 0x28c);
                if (*(char *)(unaff_x19 + 0x408) == '\0') {
                  *(float *)(unaff_x19 + 0x414) = fVar16;
                  *(undefined1 *)(unaff_x19 + 0x408) = 1;
                  *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar8,fVar9);
                }
                else {
                  fVar13 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
                  fVar9 = (*(float *)(unaff_x19 + 0x40c) - fVar9) * fVar13;
                  fVar8 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar8) * fVar13;
                  fVar13 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar16) *
                           fVar13;
                  if (ABS(*(float *)(lVar3 + 0x48)) < 0.5) {
                    lVar3 = *(long *)(unaff_x19 + 0x40);
                    if (lVar3 == 0) goto LAB_0697980c;
                    *(float *)(lVar3 + 0x10) =
                         *(float *)(lVar3 + 0x10) +
                         fVar13 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                         fVar9 * *(float *)(unaff_x19 + 0x290) +
                         fVar8 * (float)*(undefined8 *)(unaff_x19 + 0x294);
                  }
                  lVar3 = *(long *)(unaff_x19 + 0x38);
                  if (lVar3 == 0) goto LAB_0697980c;
                  *(float *)(lVar3 + 0x10) =
                       *(float *)(lVar3 + 0x10) +
                       fVar13 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                       fVar9 * *(float *)(unaff_x19 + 0x29c) +
                       fVar8 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
                }
              }
              lVar3 = *(long *)(unaff_x19 + 0x40);
              if (lVar3 != 0) {
                fVar9 = *(float *)(lVar3 + 0x10);
                fVar16 = fVar14;
                if ((fVar9 <= fVar14) && (fVar16 = -fVar14, -fVar14 <= fVar9)) {
                  fVar16 = fVar9;
                }
                lVar5 = *(long *)(unaff_x19 + 0x38);
                *(float *)(lVar3 + 0x10) = fVar16;
                if (lVar5 != 0) {
                  fVar7 = fVar7 * fVar15;
                  fVar9 = *(float *)(lVar5 + 0x10);
                  fVar16 = fVar7;
                  if ((fVar9 <= fVar7) && (fVar16 = -fVar7, -fVar7 <= fVar9)) {
                    fVar16 = fVar9;
                  }
                  *(float *)(lVar5 + 0x10) = fVar16;
                  fVar7 = *(float *)(unaff_x19 + 0x94);
                  fVar16 = *(float *)(lVar5 + 0x18);
                  *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x18);
                  fVar16 = *(float *)(lVar5 + 0x10) * fVar16;
                  *(float *)(lVar5 + 0x10) = fVar16;
                  if (0.0 < fVar7) {
                    fVar9 = 1.0;
                    if (ABS(*(float *)(lVar3 + 0x14)) <= 1.0) {
                      fVar9 = ABS(*(float *)(lVar3 + 0x14));
                    }
                    fVar9 = powf(fVar9,*(float *)(unaff_x19 + 0x98));
                    fVar16 = fVar16 * (1.0 - fVar7 * fVar9);
                    *(float *)(lVar5 + 0x10) = fVar16;
                  }
                  fVar7 = *(float *)(lVar3 + 0x10);
                  *(ulong *)(unaff_x19 + 0x3c8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar16
                                + (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar7
                                ,(float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar16 +
                                 (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar7);
                  *(float *)(unaff_x19 + 0x3d0) =
                       *(float *)(unaff_x19 + 0x2a4) * fVar16 +
                       *(float *)(unaff_x19 + 0x298) * fVar7;
                  if (*(char *)(unaff_x19 + 0x458) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x458) = 0;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


