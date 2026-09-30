/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_CreatePassthroughColorLut
ENTRY_POINT: 06979300
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


void OVRPlugin_OVRP_1_84_0__ovrp_CreatePassthroughColorLut
               (long param_1,float param_2,float param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],float param_6,undefined1 param_7 [16],float param_8,
               float param_9)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_x10;
  long unaff_x19;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s10;
  float fVar13;
  float fVar14;
  float unaff_s13;
  float fVar15;
  float unaff_s14;
  float fVar16;
  float fStack0000000000000004;
  
  if ((in_x10 != 0) && (*(long *)(unaff_x19 + 0x30) != 0)) {
    fVar14 = 0.0;
    fVar16 = 0.0;
                    /* try { // try from 06979330 to 06a7935b has its CatchHandler @ 0697945c */
    fVar10 = unaff_s8 * unaff_s13 * unaff_s9;
    fVar12 = fVar10 * *(float *)(in_x10 + 0x20);
    if (0 < *(int *)(unaff_x19 + 200)) {
                    /* try { // try from 0697935c to 06a79373 has its CatchHandler @ 06979454 */
      iVar6 = 0;
      fVar11 = 1.0 / (float)*(int *)(unaff_x19 + 200);
      fVar15 = 1.0 / *(float *)(*(long *)(unaff_x19 + 0x30) + 0x4c);
      fVar13 = *(float *)(unaff_x19 + 0x74) + *(float *)(unaff_x19 + 0x90);
      param_2 = param_2 * fVar11;
                    /* try { // try from 06979380 to 06a79383 has its CatchHandler @ 06979458 */
                    /* try { // try from 06979384 to 06a79427 has its CatchHandler @ 06979138 */
      fStack0000000000000004 = unaff_s13;
      do {
        lVar3 = *(long *)(unaff_x19 + 0x30);
        if (lVar3 == 0) goto LAB_0697980c;
        cVar1 = *(char *)(unaff_x19 + 0x9c);
        fVar7 = param_2 * *(float *)(unaff_x19 + 0x70);
        fVar16 = fVar16 + fVar7;
        fVar7 = *(float *)(lVar3 + 0x48) + fVar15 * fVar7;
        *(float *)(lVar3 + 0x48) = fVar7;
        if (cVar1 != '\0') {
          lVar5 = *(long *)(unaff_x19 + 0x40);
          if (lVar5 == 0) goto LAB_0697980c;
          fVar9 = -1.0;
          lVar4 = *(long *)(unaff_x19 + 0x68);
          fVar7 = -((fVar7 * *(float *)(lVar3 + 0x58) - *(float *)(lVar5 + 0x20)) * (1.0 / param_6))
          ;
          fVar8 = *(float *)(lVar5 + 0x1c) * fVar7;
          *(float *)(lVar5 + 0x14) = fVar8;
          fVar7 = -(*(float *)(lVar5 + 0x1c) * fVar7);
          if (0.0 <= fVar8) {
            fVar9 = 1.0;
            fVar7 = fVar8;
          }
          if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x30), lVar3 == 0)) goto LAB_0697980c;
          fVar7 = (float)FUN_07c42008(fVar7,lVar3,0);
          fVar9 = fVar10 * -(fVar9 * fVar7);
          fVar7 = fVar12;
          if ((fVar9 <= fVar12) && (fVar7 = fVar9, fVar9 < -fVar12)) {
            fVar7 = -fVar12;
          }
          lVar3 = *(long *)(unaff_x19 + 0x30);
          if (lVar3 == 0) goto LAB_0697980c;
          fVar14 = fVar14 + fVar11 * fVar7;
          fVar7 = param_2 * fVar7 * *(float *)(lVar3 + 0x58);
          fVar16 = fVar16 + fVar7;
          fVar7 = *(float *)(lVar3 + 0x48) - fVar15 * fVar7;
          *(float *)(lVar3 + 0x48) = fVar7;
        }
        if (0.0 < fVar13) {
          bVar2 = fVar7 < 0.0;
          fVar9 = -fVar13;
          if (!bVar2) {
            fVar9 = fVar13;
          }
          fVar16 = fVar16 - param_2 * fVar9;
          fVar7 = fVar7 - fVar15 * param_2 * fVar9;
          if (fVar7 >= 0.0 && bVar2 || fVar7 < 0.0 && !bVar2) {
            fVar7 = 0.0;
          }
          *(float *)(lVar3 + 0x48) = fVar7;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(unaff_x19 + 200));
      param_1 = *(long *)(unaff_x19 + 0x40);
      unaff_s13 = fStack0000000000000004;
      if (param_1 == 0) goto LAB_0697980c;
    }
    fVar10 = 0.0;
    cVar1 = *(char *)(unaff_x19 + 0x9c);
    *(float *)(param_1 + 0x10) = fVar14;
    if (cVar1 != '\0') {
      lVar3 = *(long *)(unaff_x19 + 0x30);
      if (lVar3 == 0) goto LAB_0697980c;
      fVar10 = *(float *)(param_1 + 0x1c) *
               -((*(float *)(lVar3 + 0x48) * *(float *)(lVar3 + 0x58) - *(float *)(param_1 + 0x20))
                * (1.0 / param_6));
    }
    fVar14 = -1.0;
    lVar3 = *(long *)(unaff_x19 + 0x38);
    *(float *)(unaff_x19 + 0x78) = -fVar16;
    fVar16 = 1.0;
    if (fVar10 <= 1.0) {
      fVar16 = fVar10;
    }
    fVar11 = fVar14;
    if (-1.0 <= fVar10) {
      fVar11 = fVar16;
    }
    *(float *)(param_1 + 0x14) = fVar11;
    if (lVar3 != 0) {
      fVar10 = atan2f(*(float *)(lVar3 + 0x20),param_6);
      lVar5 = *(long *)(unaff_x19 + 0x68);
      fVar10 = fVar10 * DAT_015c595c * DAT_015c5d68;
      fVar16 = *(float *)(lVar3 + 0x1c) * fVar10;
      *(float *)(lVar3 + 0x14) = fVar16;
      fVar10 = -(*(float *)(lVar3 + 0x1c) * fVar10);
      if (0.0 <= fVar16) {
        fVar14 = 1.0;
        fVar10 = fVar16;
      }
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x30) != 0)) {
        fVar11 = *(float *)(lVar5 + 0x20);
        fVar16 = unaff_s14 * unaff_s13 * unaff_s10;
        fVar10 = (float)FUN_07c42008(fVar10,*(long *)(lVar5 + 0x30),0);
        cVar1 = *(char *)(unaff_x19 + 0x9c);
        *(float *)(lVar3 + 0x10) = param_3 * fVar16 * -(fVar14 * fVar10);
        if ((cVar1 == '\0') ||
           (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= param_8)) ||
            (DAT_015c5840 <= param_9)))) {
          *(undefined1 *)(unaff_x19 + 0x408) = 0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar3 = *(long *)(unaff_x19 + 0x30), lVar3 == 0)) goto LAB_0697980c;
          fVar10 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar3 + 0x58);
          fVar14 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                   (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar10;
          fVar13 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                   (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar10;
          fVar10 = *(float *)(unaff_x19 + 0x270) - fVar10 * *(float *)(unaff_x19 + 0x28c);
          if (*(char *)(unaff_x19 + 0x408) == '\0') {
            *(float *)(unaff_x19 + 0x414) = fVar10;
            *(undefined1 *)(unaff_x19 + 0x408) = 1;
            *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar13,fVar14);
          }
          else {
            fVar15 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
            fVar14 = (*(float *)(unaff_x19 + 0x40c) - fVar14) * fVar15;
            fVar13 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar13) * fVar15;
            fVar15 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar10) * fVar15;
            if (ABS(*(float *)(lVar3 + 0x48)) < 0.5) {
              lVar3 = *(long *)(unaff_x19 + 0x40);
              if (lVar3 == 0) goto LAB_0697980c;
              *(float *)(lVar3 + 0x10) =
                   *(float *)(lVar3 + 0x10) +
                   fVar15 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                   fVar14 * *(float *)(unaff_x19 + 0x290) +
                   fVar13 * (float)*(undefined8 *)(unaff_x19 + 0x294);
            }
            lVar3 = *(long *)(unaff_x19 + 0x38);
            if (lVar3 == 0) goto LAB_0697980c;
            *(float *)(lVar3 + 0x10) =
                 *(float *)(lVar3 + 0x10) +
                 fVar15 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                 fVar14 * *(float *)(unaff_x19 + 0x29c) +
                 fVar13 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
          }
        }
        lVar3 = *(long *)(unaff_x19 + 0x40);
        if (lVar3 != 0) {
          fVar14 = *(float *)(lVar3 + 0x10);
          fVar10 = fVar12;
          if ((fVar14 <= fVar12) && (fVar10 = -fVar12, -fVar12 <= fVar14)) {
            fVar10 = fVar14;
          }
          lVar5 = *(long *)(unaff_x19 + 0x38);
          *(float *)(lVar3 + 0x10) = fVar10;
          if (lVar5 != 0) {
            fVar16 = fVar16 * fVar11;
            fVar12 = *(float *)(lVar5 + 0x10);
            fVar10 = fVar16;
            if ((fVar12 <= fVar16) && (fVar10 = -fVar16, -fVar16 <= fVar12)) {
              fVar10 = fVar12;
            }
            *(float *)(lVar5 + 0x10) = fVar10;
            fVar12 = *(float *)(unaff_x19 + 0x94);
            fVar10 = *(float *)(lVar5 + 0x18);
            *(float *)(lVar3 + 0x10) = *(float *)(lVar3 + 0x10) * *(float *)(lVar3 + 0x18);
            fVar10 = *(float *)(lVar5 + 0x10) * fVar10;
            *(float *)(lVar5 + 0x10) = fVar10;
            if (0.0 < fVar12) {
              fVar14 = 1.0;
              if (ABS(*(float *)(lVar3 + 0x14)) <= 1.0) {
                fVar14 = ABS(*(float *)(lVar3 + 0x14));
              }
              fVar14 = powf(fVar14,*(float *)(unaff_x19 + 0x98));
              fVar10 = fVar10 * (1.0 - fVar12 * fVar14);
              *(float *)(lVar5 + 0x10) = fVar10;
            }
            fVar12 = *(float *)(lVar3 + 0x10);
            *(ulong *)(unaff_x19 + 0x3c8) =
                 CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar10 +
                          (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar12,
                          (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar10 +
                          (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar12);
            *(float *)(unaff_x19 + 0x3d0) =
                 *(float *)(unaff_x19 + 0x2a4) * fVar10 + *(float *)(unaff_x19 + 0x298) * fVar12;
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


