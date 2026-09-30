/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetLayerRecommendedResolution
ENTRY_POINT: 06979540
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_GetLayerRecommendedResolution(void)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
  fVar4 = atan2f(*(float *)(unaff_x21 + 0x20),fStack0000000000000014);
  lVar2 = *(long *)(unaff_x19 + 0x68);
  fVar4 = fVar4 * DAT_015c595c * DAT_015c5d68;
  fVar7 = *(float *)(unaff_x21 + 0x1c) * fVar4;
  *(float *)(unaff_x21 + 0x14) = fVar7;
  fVar4 = -(*(float *)(unaff_x21 + 0x1c) * fVar4);
  if (0.0 <= fVar7) {
    fVar4 = fVar7;
    unaff_s10 = unaff_s8;
  }
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x30) != 0)) {
    fVar9 = *(float *)(lVar2 + 0x20);
    fVar7 = unaff_s14 * unaff_s13 * fStack0000000000000010;
    fVar4 = (float)FUN_07c42008(fVar4,*(long *)(lVar2 + 0x30),0);
    cVar1 = *(char *)(unaff_x19 + 0x9c);
    *(float *)(unaff_x21 + 0x10) = fStack000000000000000c * fVar7 * -(unaff_s10 * fVar4);
    if ((cVar1 == '\0') ||
       (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= in_stack_00000018)) ||
        (DAT_015c5840 <= fStack0000000000000008)))) {
      *(undefined1 *)(unaff_x19 + 0x408) = 0;
    }
    else {
      if ((*(long *)(unaff_x19 + 0x20) == 0) || (lVar2 = *(long *)(unaff_x19 + 0x30), lVar2 == 0))
      goto LAB_0697980c;
      fVar4 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar2 + 0x58);
      fVar5 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
              (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar4;
      fVar6 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
              (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar4;
      fVar4 = *(float *)(unaff_x19 + 0x270) - fVar4 * *(float *)(unaff_x19 + 0x28c);
      if (*(char *)(unaff_x19 + 0x408) == '\0') {
        *(float *)(unaff_x19 + 0x414) = fVar4;
        *(undefined1 *)(unaff_x19 + 0x408) = 1;
        *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar6,fVar5);
      }
      else {
        fVar8 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
        fVar5 = (*(float *)(unaff_x19 + 0x40c) - fVar5) * fVar8;
        fVar6 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar6) * fVar8;
        fVar8 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar4) * fVar8;
        if (ABS(*(float *)(lVar2 + 0x48)) < 0.5) {
          lVar2 = *(long *)(unaff_x19 + 0x40);
          if (lVar2 == 0) goto LAB_0697980c;
          *(float *)(lVar2 + 0x10) =
               *(float *)(lVar2 + 0x10) +
               fVar8 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
               fVar5 * *(float *)(unaff_x19 + 0x290) +
               fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x294);
        }
        lVar2 = *(long *)(unaff_x19 + 0x38);
        if (lVar2 == 0) goto LAB_0697980c;
        *(float *)(lVar2 + 0x10) =
             *(float *)(lVar2 + 0x10) +
             fVar8 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
             fVar5 * *(float *)(unaff_x19 + 0x29c) +
             fVar6 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
      }
    }
    lVar2 = *(long *)(unaff_x19 + 0x40);
    if (lVar2 != 0) {
      fVar5 = *(float *)(lVar2 + 0x10);
      fVar4 = unaff_s9;
      if ((fVar5 <= unaff_s9) && (fVar4 = -unaff_s9, -unaff_s9 <= fVar5)) {
        fVar4 = fVar5;
      }
      lVar3 = *(long *)(unaff_x19 + 0x38);
      *(float *)(lVar2 + 0x10) = fVar4;
      if (lVar3 != 0) {
        fVar7 = fVar7 * fVar9;
        fVar9 = *(float *)(lVar3 + 0x10);
        fVar4 = fVar7;
        if ((fVar9 <= fVar7) && (fVar4 = -fVar7, -fVar7 <= fVar9)) {
          fVar4 = fVar9;
        }
        *(float *)(lVar3 + 0x10) = fVar4;
        fVar7 = *(float *)(unaff_x19 + 0x94);
        fVar4 = *(float *)(lVar3 + 0x18);
        *(float *)(lVar2 + 0x10) = *(float *)(lVar2 + 0x10) * *(float *)(lVar2 + 0x18);
        fVar4 = *(float *)(lVar3 + 0x10) * fVar4;
        *(float *)(lVar3 + 0x10) = fVar4;
        if (0.0 < fVar7) {
          fVar9 = 1.0;
          if (ABS(*(float *)(lVar2 + 0x14)) <= 1.0) {
            fVar9 = ABS(*(float *)(lVar2 + 0x14));
          }
          fVar9 = powf(fVar9,*(float *)(unaff_x19 + 0x98));
          fVar4 = fVar4 * (1.0 - fVar7 * fVar9);
          *(float *)(lVar3 + 0x10) = fVar4;
        }
        fVar7 = *(float *)(lVar2 + 0x10);
        *(ulong *)(unaff_x19 + 0x3c8) =
             CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar4 +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar7,
                      (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar4 +
                      (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar7);
        *(float *)(unaff_x19 + 0x3d0) =
             *(float *)(unaff_x19 + 0x2a4) * fVar4 + *(float *)(unaff_x19 + 0x298) * fVar7;
        if (*(char *)(unaff_x19 + 0x458) != '\0') {
          *(undefined1 *)(unaff_x19 + 0x458) = 0;
        }
        return;
      }
    }
  }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


