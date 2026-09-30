/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_SetInsightPassthroughStyle2
ENTRY_POINT: 069794bc
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


void OVRPlugin_OVRP_1_84_0__ovrp_SetInsightPassthroughStyle2(long param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  int unaff_w20;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  do {
    *(float *)(param_1 + 0x48) = param_2;
    do {
      unaff_w20 = unaff_w20 + 1;
      if (*(int *)(unaff_x19 + 200) <= unaff_w20) {
        fVar7 = 0.0;
        lVar3 = *(long *)(unaff_x19 + 0x40);
        if (lVar3 != 0) {
          cVar1 = *(char *)(unaff_x19 + 0x9c);
          *(float *)(lVar3 + 0x10) = unaff_s12;
          if (cVar1 != '\0') {
            lVar4 = *(long *)(unaff_x19 + 0x30);
            if (lVar4 == 0) goto LAB_0697980c;
            fVar7 = *(float *)(lVar3 + 0x1c) *
                    -((*(float *)(lVar4 + 0x48) * *(float *)(lVar4 + 0x58) -
                      *(float *)(lVar3 + 0x20)) * in_stack_00000020);
          }
          fVar5 = -1.0;
          lVar4 = *(long *)(unaff_x19 + 0x38);
          *(float *)(unaff_x19 + 0x78) = -unaff_s15;
          fVar8 = 1.0;
          if (fVar7 <= 1.0) {
            fVar8 = fVar7;
          }
          fVar6 = fVar5;
          if (-1.0 <= fVar7) {
            fVar6 = fVar8;
          }
          *(float *)(lVar3 + 0x14) = fVar6;
          if (lVar4 != 0) {
            fVar7 = atan2f(*(float *)(lVar4 + 0x20),fStack0000000000000014);
            lVar3 = *(long *)(unaff_x19 + 0x68);
            fVar7 = fVar7 * DAT_015c595c * DAT_015c5d68;
            fVar8 = *(float *)(lVar4 + 0x1c) * fVar7;
            *(float *)(lVar4 + 0x14) = fVar8;
            fVar7 = -(*(float *)(lVar4 + 0x1c) * fVar7);
            if (0.0 <= fVar8) {
              fVar5 = 1.0;
              fVar7 = fVar8;
            }
            if ((lVar3 != 0) && (*(long *)(lVar3 + 0x30) != 0)) {
              fVar8 = *(float *)(lVar3 + 0x20);
              fStack0000000000000000 =
                   fStack0000000000000000 * fStack0000000000000004 * fStack0000000000000010;
              fVar7 = (float)FUN_07c42008(fVar7,*(long *)(lVar3 + 0x30),0);
              cVar1 = *(char *)(unaff_x19 + 0x9c);
              *(float *)(lVar4 + 0x10) =
                   fStack000000000000000c * fStack0000000000000000 * -(fVar5 * fVar7);
              if ((cVar1 == '\0') ||
                 (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= fStack0000000000000018)
                   ) || (DAT_015c5840 <= fStack0000000000000008)))) {
                *(undefined1 *)(unaff_x19 + 0x408) = 0;
              }
              else {
                if ((*(long *)(unaff_x19 + 0x20) == 0) ||
                   (lVar3 = *(long *)(unaff_x19 + 0x30), lVar3 == 0)) goto LAB_0697980c;
                fVar7 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar3 + 0x58);
                fVar5 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                        (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar7;
                fVar6 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar7;
                fVar7 = *(float *)(unaff_x19 + 0x270) - fVar7 * *(float *)(unaff_x19 + 0x28c);
                if (*(char *)(unaff_x19 + 0x408) == '\0') {
                  *(float *)(unaff_x19 + 0x414) = fVar7;
                  *(undefined1 *)(unaff_x19 + 0x408) = 1;
                  *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar6,fVar5);
                }
                else {
                  fVar9 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
                  fVar5 = (*(float *)(unaff_x19 + 0x40c) - fVar5) * fVar9;
                  fVar6 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar6) * fVar9;
                  fVar9 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar7) *
                          fVar9;
                  if (ABS(*(float *)(lVar3 + 0x48)) < 0.5) {
                    lVar3 = *(long *)(unaff_x19 + 0x40);
                    if (lVar3 == 0) goto LAB_0697980c;
                    *(float *)(lVar3 + 0x10) =
                         *(float *)(lVar3 + 0x10) +
                         fVar9 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                         fVar5 * *(float *)(unaff_x19 + 0x290) +
                         fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x294);
                  }
                  lVar3 = *(long *)(unaff_x19 + 0x38);
                  if (lVar3 == 0) goto LAB_0697980c;
                  *(float *)(lVar3 + 0x10) =
                       *(float *)(lVar3 + 0x10) +
                       fVar9 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                       fVar5 * *(float *)(unaff_x19 + 0x29c) +
                       fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
                }
              }
              lVar3 = *(long *)(unaff_x19 + 0x40);
              if (lVar3 != 0) {
                fVar5 = *(float *)(lVar3 + 0x10);
                fVar7 = unaff_s9;
                if ((fVar5 <= unaff_s9) && (fVar7 = -unaff_s9, -unaff_s9 <= fVar5)) {
                  fVar7 = fVar5;
                }
                lVar4 = *(long *)(unaff_x19 + 0x38);
                *(float *)(lVar3 + 0x10) = fVar7;
                if (lVar4 != 0) {
                  fStack0000000000000000 = fStack0000000000000000 * fVar8;
                  fVar5 = *(float *)(lVar4 + 0x10);
                  fVar7 = fStack0000000000000000;
                  if ((fVar5 <= fStack0000000000000000) &&
                     (fVar7 = -fStack0000000000000000, -fStack0000000000000000 <= fVar5)) {
                    fVar7 = fVar5;
                  }
                  *(float *)(lVar4 + 0x10) = fVar7;
                  fVar5 = *(float *)(unaff_x19 + 0x94);
                  fVar7 = *(float *)(lVar4 + 0x18);
                  *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x18);
                  fVar7 = *(float *)(lVar4 + 0x10) * fVar7;
                  *(float *)(lVar4 + 0x10) = fVar7;
                  if (0.0 < fVar5) {
                    fVar8 = 1.0;
                    if (ABS(*(float *)(lVar3 + 0x14)) <= 1.0) {
                      fVar8 = ABS(*(float *)(lVar3 + 0x14));
                    }
                    fVar8 = powf(fVar8,*(float *)(unaff_x19 + 0x98));
                    fVar7 = fVar7 * (1.0 - fVar5 * fVar8);
                    *(float *)(lVar4 + 0x10) = fVar7;
                  }
                  fVar5 = *(float *)(lVar3 + 0x10);
                  *(ulong *)(unaff_x19 + 0x3c8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar7 +
                                (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar5,
                                (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar7 +
                                (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar5);
                  *(float *)(unaff_x19 + 0x3d0) =
                       *(float *)(unaff_x19 + 0x2a4) * fVar7 + *(float *)(unaff_x19 + 0x298) * fVar5
                  ;
                  if (*(char *)(unaff_x19 + 0x458) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x458) = 0;
                  }
                  return;
                }
              }
            }
          }
        }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      param_1 = *(long *)(unaff_x19 + 0x30);
      if (param_1 == 0) goto LAB_0697980c;
      cVar1 = *(char *)(unaff_x19 + 0x9c);
      fVar7 = unaff_s14 * *(float *)(unaff_x19 + 0x70);
      unaff_s15 = unaff_s15 + fVar7;
      param_2 = *(float *)(param_1 + 0x48) + unaff_s13 * fVar7;
      *(float *)(param_1 + 0x48) = param_2;
      if (cVar1 != '\0') {
        lVar3 = *(long *)(unaff_x19 + 0x40);
        if (lVar3 == 0) goto LAB_0697980c;
        fVar5 = -1.0;
        lVar4 = *(long *)(unaff_x19 + 0x68);
        fVar7 = -((param_2 * *(float *)(param_1 + 0x58) - *(float *)(lVar3 + 0x20)) *
                 in_stack_00000020);
        fVar8 = *(float *)(lVar3 + 0x1c) * fVar7;
        *(float *)(lVar3 + 0x14) = fVar8;
        fVar7 = -(*(float *)(lVar3 + 0x1c) * fVar7);
        if (0.0 <= fVar8) {
          fVar5 = 1.0;
          fVar7 = fVar8;
        }
        if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x30), lVar3 == 0)) goto LAB_0697980c;
        fVar7 = (float)FUN_07c42008(fVar7,lVar3,0);
        fVar5 = fStack000000000000007c * -(fVar5 * fVar7);
        fVar7 = unaff_s9;
        if ((fVar5 <= unaff_s9) && (fVar7 = fVar5, fVar5 < fStack000000000000001c)) {
          fVar7 = fStack000000000000001c;
        }
        param_1 = *(long *)(unaff_x19 + 0x30);
        if (param_1 == 0) goto LAB_0697980c;
        unaff_s12 = unaff_s12 + unaff_s8 * fVar7;
        fVar7 = unaff_s14 * fVar7 * *(float *)(param_1 + 0x58);
        unaff_s15 = unaff_s15 + fVar7;
        param_2 = *(float *)(param_1 + 0x48) - unaff_s13 * fVar7;
        *(float *)(param_1 + 0x48) = param_2;
      }
    } while (unaff_s10 <= 0.0);
    bVar2 = param_2 < 0.0;
    fVar7 = fStack0000000000000078;
    if (!bVar2) {
      fVar7 = unaff_s10;
    }
    unaff_s15 = unaff_s15 - unaff_s14 * fVar7;
    param_2 = param_2 - unaff_s13 * unaff_s14 * fVar7;
    if (param_2 >= 0.0 && bVar2 || param_2 < 0.0 && !bVar2) {
      param_2 = 0.0;
    }
  } while( true );
}


