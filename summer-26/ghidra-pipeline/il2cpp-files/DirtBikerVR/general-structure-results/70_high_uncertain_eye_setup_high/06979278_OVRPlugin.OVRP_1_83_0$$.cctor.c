/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$.cctor
ENTRY_POINT: 06979278
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


void OVRPlugin_OVRP_1_83_0___cctor(long param_1,float param_2,float param_3)

{
  char cVar1;
  bool in_NG;
  bool bVar2;
  long lVar3;
  long lVar4;
  long in_x9;
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
  float unaff_s8;
  float fVar14;
  float unaff_s9;
  float fVar15;
  float unaff_s10;
  float fVar16;
  float fVar17;
  float unaff_s13;
  float fVar18;
  float unaff_s14;
  float fVar19;
  float fVar20;
  float fStack0000000000000004;
  
  if (!in_NG) {
    param_3 = param_2;
  }
  if (in_x9 != 0) {
    fVar13 = *(float *)(in_x9 + 0x20);
    fVar7 = -fVar13;
    if (0.0 <= fVar13) {
      fVar7 = fVar13;
    }
    fVar11 = (*(float *)(unaff_x19 + 1000) / DAT_015c5d50) * 1.5;
    fVar13 = 1.5;
    if ((1.5 <= fVar11) && (fVar13 = fVar11, 10.0 < fVar11)) {
      fVar13 = 10.0;
    }
                    /* try { // try from 069792cc to 06a792f3 has its CatchHandler @ 06979460 */
    if (fVar13 <= param_3) {
      fVar13 = param_3;
    }
    fVar12 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x288) >> 0x20) *
             (float)((ulong)*(undefined8 *)(unaff_x19 + 0x54) >> 0x20) +
             *(float *)(unaff_x19 + 0x284) * *(float *)(unaff_x19 + 0x50) +
             (float)*(undefined8 *)(unaff_x19 + 0x288) * (float)*(undefined8 *)(unaff_x19 + 0x54);
    fVar11 = 0.0;
    if (0.0 <= fVar12) {
      fVar11 = fVar12;
    }
    if ((*(long *)(unaff_x19 + 0x68) != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
      fVar17 = 0.0;
      fVar20 = 0.0;
      fVar12 = unaff_s8 * unaff_s13 * unaff_s9;
      fVar15 = fVar12 * *(float *)(*(long *)(unaff_x19 + 0x68) + 0x20);
      if (0 < *(int *)(unaff_x19 + 200)) {
        iVar6 = 0;
        fVar14 = 1.0 / (float)*(int *)(unaff_x19 + 200);
        fVar18 = 1.0 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x4c);
        fVar16 = *(float *)(unaff_x19 + 0x74) + *(float *)(unaff_x19 + 0x90);
        fVar19 = *(float *)(unaff_x19 + 1000) * fVar14;
        fStack0000000000000004 = unaff_s13;
        do {
          lVar3 = *(long *)(unaff_x19 + 0x30);
          if (lVar3 == 0) goto LAB_0697980c;
          cVar1 = *(char *)(unaff_x19 + 0x9c);
          fVar8 = fVar19 * *(float *)(unaff_x19 + 0x70);
          fVar20 = fVar20 + fVar8;
          fVar8 = *(float *)(lVar3 + 0x48) + fVar18 * fVar8;
          *(float *)(lVar3 + 0x48) = fVar8;
          if (cVar1 != '\0') {
            lVar5 = *(long *)(unaff_x19 + 0x40);
            if (lVar5 == 0) goto LAB_0697980c;
            fVar10 = -1.0;
            lVar4 = *(long *)(unaff_x19 + 0x68);
            fVar8 = -((fVar8 * *(float *)(lVar3 + 0x58) - *(float *)(lVar5 + 0x20)) * (1.0 / fVar13)
                     );
            fVar9 = *(float *)(lVar5 + 0x1c) * fVar8;
            *(float *)(lVar5 + 0x14) = fVar9;
            fVar8 = -(*(float *)(lVar5 + 0x1c) * fVar8);
            if (0.0 <= fVar9) {
              fVar10 = 1.0;
              fVar8 = fVar9;
            }
            if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x30), lVar3 == 0)) goto LAB_0697980c;
            fVar8 = (float)FUN_07c42008(fVar8,lVar3,0);
            fVar10 = fVar12 * -(fVar10 * fVar8);
            fVar8 = fVar15;
            if ((fVar10 <= fVar15) && (fVar8 = fVar10, fVar10 < -fVar15)) {
              fVar8 = -fVar15;
            }
            lVar3 = *(long *)(unaff_x19 + 0x30);
            if (lVar3 == 0) goto LAB_0697980c;
            fVar17 = fVar17 + fVar14 * fVar8;
            fVar8 = fVar19 * fVar8 * *(float *)(lVar3 + 0x58);
            fVar20 = fVar20 + fVar8;
            fVar8 = *(float *)(lVar3 + 0x48) - fVar18 * fVar8;
            *(float *)(lVar3 + 0x48) = fVar8;
          }
          if (0.0 < fVar16) {
            bVar2 = fVar8 < 0.0;
            fVar10 = -fVar16;
            if (!bVar2) {
              fVar10 = fVar16;
            }
            fVar20 = fVar20 - fVar19 * fVar10;
            fVar8 = fVar8 - fVar18 * fVar19 * fVar10;
            if (fVar8 >= 0.0 && bVar2 || fVar8 < 0.0 && !bVar2) {
              fVar8 = 0.0;
            }
            *(float *)(lVar3 + 0x48) = fVar8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_x19 + 200));
        param_1 = *(long *)(unaff_x19 + 0x40);
        unaff_s13 = fStack0000000000000004;
        if (param_1 == 0) goto LAB_0697980c;
      }
      fVar12 = 0.0;
      cVar1 = *(char *)(unaff_x19 + 0x9c);
      *(float *)(param_1 + 0x10) = fVar17;
      if (cVar1 != '\0') {
        lVar3 = *(long *)(unaff_x19 + 0x30);
        if (lVar3 == 0) goto LAB_0697980c;
        fVar12 = *(float *)(param_1 + 0x1c) *
                 -((*(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x58) - *(float *)(param_1 + 0x20)
                   ) * (1.0 / fVar13));
      }
      fVar17 = -1.0;
      lVar3 = *(long *)(unaff_x19 + 0x38);
      *(float *)(unaff_x19 + 0x78) = -fVar20;
      fVar20 = 1.0;
      if (fVar12 <= 1.0) {
        fVar20 = fVar12;
      }
      fVar14 = fVar17;
      if (-1.0 <= fVar12) {
        fVar14 = fVar20;
      }
      *(float *)(param_1 + 0x14) = fVar14;
      if (lVar3 != 0) {
        fVar13 = atan2f(*(float *)(lVar3 + 0x20),fVar13);
        lVar5 = *(long *)(unaff_x19 + 0x68);
        fVar13 = fVar13 * DAT_015c595c * DAT_015c5d68;
        fVar12 = *(float *)(lVar3 + 0x1c) * fVar13;
        *(float *)(lVar3 + 0x14) = fVar12;
        fVar13 = -(*(float *)(lVar3 + 0x1c) * fVar13);
        if (0.0 <= fVar12) {
          fVar17 = 1.0;
          fVar13 = fVar12;
        }
        if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
          fVar20 = *(float *)(lVar5 + 0x20);
          fVar12 = unaff_s14 * unaff_s13 * unaff_s10;
          fVar13 = (float)FUN_07c42008(fVar13,*(long *)(lVar5 + 0x30),0);
          cVar1 = *(char *)(unaff_x19 + 0x9c);
          *(float *)(lVar3 + 0x10) = fVar11 * fVar12 * -(fVar17 * fVar13);
          if ((cVar1 == '\0') ||
             (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= param_3)) ||
              (DAT_015c5840 <= fVar7)))) {
            *(undefined1 *)(unaff_x19 + 0x408) = 0;
          }
          else {
            if ((*(long *)(unaff_x19 + 0x20) == 0) ||
               (lVar3 = *(long *)(unaff_x19 + 0x30), lVar3 == 0)) goto LAB_0697980c;
            fVar7 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar3 + 0x58);
            fVar13 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                     (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar7;
            fVar11 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar7;
            fVar7 = *(float *)(unaff_x19 + 0x270) - fVar7 * *(float *)(unaff_x19 + 0x28c);
            if (*(char *)(unaff_x19 + 0x408) == '\0') {
              *(float *)(unaff_x19 + 0x414) = fVar7;
              *(undefined1 *)(unaff_x19 + 0x408) = 1;
              *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar11,fVar13);
            }
            else {
              fVar17 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
              fVar13 = (*(float *)(unaff_x19 + 0x40c) - fVar13) * fVar17;
              fVar11 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar11) * fVar17;
              fVar17 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar7) * fVar17
              ;
              if (ABS(*(float *)(lVar3 + 0x48)) < 0.5) {
                lVar3 = *(long *)(unaff_x19 + 0x40);
                if (lVar3 == 0) goto LAB_0697980c;
                *(float *)(lVar3 + 0x10) =
                     *(float *)(lVar3 + 0x10) +
                     fVar17 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                     fVar13 * *(float *)(unaff_x19 + 0x290) +
                     fVar11 * (float)*(undefined8 *)(unaff_x19 + 0x294);
              }
              lVar3 = *(long *)(unaff_x19 + 0x38);
              if (lVar3 == 0) goto LAB_0697980c;
              *(float *)(lVar3 + 0x10) =
                   *(float *)(lVar3 + 0x10) +
                   fVar17 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                   fVar13 * *(float *)(unaff_x19 + 0x29c) +
                   fVar11 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
            }
          }
          lVar3 = *(long *)(unaff_x19 + 0x40);
          if (lVar3 != 0) {
            fVar13 = *(float *)(lVar3 + 0x10);
            fVar7 = fVar15;
            if ((fVar13 <= fVar15) && (fVar7 = -fVar15, -fVar15 <= fVar13)) {
              fVar7 = fVar13;
            }
            lVar5 = *(long *)(unaff_x19 + 0x38);
            *(float *)(lVar3 + 0x10) = fVar7;
            if (lVar5 != 0) {
              fVar12 = fVar12 * fVar20;
              fVar13 = *(float *)(lVar5 + 0x10);
              fVar7 = fVar12;
              if ((fVar13 <= fVar12) && (fVar7 = -fVar12, -fVar12 <= fVar13)) {
                fVar7 = fVar13;
              }
              *(float *)(lVar5 + 0x10) = fVar7;
              fVar13 = *(float *)(unaff_x19 + 0x94);
              fVar7 = *(float *)(lVar5 + 0x18);
              *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x18);
              fVar7 = *(float *)(lVar5 + 0x10) * fVar7;
              *(float *)(lVar5 + 0x10) = fVar7;
              if (0.0 < fVar13) {
                fVar11 = 1.0;
                if (ABS(*(float *)(lVar3 + 0x14)) <= 1.0) {
                  fVar11 = ABS(*(float *)(lVar3 + 0x14));
                }
                fVar11 = powf(fVar11,*(float *)(unaff_x19 + 0x98));
                fVar7 = fVar7 * (1.0 - fVar13 * fVar11);
                *(float *)(lVar5 + 0x10) = fVar7;
              }
              fVar13 = *(float *)(lVar3 + 0x10);
              *(ulong *)(unaff_x19 + 0x3c8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar7 +
                            (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar13,
                            (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar7 +
                            (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar13);
              *(float *)(unaff_x19 + 0x3d0) =
                   *(float *)(unaff_x19 + 0x2a4) * fVar7 + *(float *)(unaff_x19 + 0x298) * fVar13;
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
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


