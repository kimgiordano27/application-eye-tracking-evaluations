/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_UpdatePassthroughColorLut
ENTRY_POINT: 06979428
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_UpdatePassthroughColorLut(undefined1 param_1 [16],float param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  int unaff_w20;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
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
  
  while( true ) {
                    /* try { // try from 06979428 to 06a7942b has its CatchHandler @ 06979450 */
                    /* try { // try from 0697942c to 06a7947b has its CatchHandler @ 06979138 */
    if ((param_2 <= unaff_s11) && (unaff_s11 = param_2, param_2 < fStack000000000000001c)) {
      unaff_s11 = fStack000000000000001c;
    }
    lVar4 = *(long *)(unaff_x19 + 0x30);
    if (lVar4 == 0) break;
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06979428 with catch @ 06979450
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 0697935c with catch @ 06979454
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06979380 with catch @ 06979458
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06979330 with catch @ 0697945c
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069792cc with catch @ 06979460
                        */
    unaff_s12 = unaff_s12 + unaff_s8 * unaff_s11;
    fVar8 = unaff_s14 * unaff_s11 * *(float *)(lVar4 + 0x58);
    unaff_s15 = unaff_s15 + fVar8;
    fVar8 = *(float *)(lVar4 + 0x48) - unaff_s13 * fVar8;
    *(float *)(lVar4 + 0x48) = fVar8;
    do {
                    /* try { // try from 0697947c to 06a7947f has its CatchHandler @ 06979488 */
      if (0.0 < unaff_s10) {
        bVar2 = fVar8 < 0.0;
        fVar6 = fStack0000000000000078;
                    /* catch() { ... } // from try @ 0697947c with catch @ 06979488 */
        if (!bVar2) {
          fVar6 = unaff_s10;
        }
                    /* try { // try from 0697948c to 06a79493 has its CatchHandler @ 0697949c */
                    /* try { // try from 06979494 to 06a7949f has its CatchHandler @ 06979138 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0697948c with catch @ 0697949c
                        */
        unaff_s15 = unaff_s15 - unaff_s14 * fVar6;
        fVar8 = fVar8 - unaff_s13 * unaff_s14 * fVar6;
        if (fVar8 >= 0.0 && bVar2 || fVar8 < 0.0 && !bVar2) {
          fVar8 = 0.0;
        }
        *(float *)(lVar4 + 0x48) = fVar8;
      }
      unaff_w20 = unaff_w20 + 1;
      if (*(int *)(unaff_x19 + 200) <= unaff_w20) {
        fVar8 = 0.0;
        lVar4 = *(long *)(unaff_x19 + 0x40);
        if (lVar4 == 0) goto LAB_0697980c;
        cVar1 = *(char *)(unaff_x19 + 0x9c);
        *(float *)(lVar4 + 0x10) = unaff_s12;
        if (cVar1 != '\0') {
          lVar5 = *(long *)(unaff_x19 + 0x30);
          if (lVar5 == 0) goto LAB_0697980c;
          fVar8 = *(float *)(lVar4 + 0x1c) *
                  -((*(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x58) - *(float *)(lVar4 + 0x20))
                   * in_stack_00000020);
        }
        fVar6 = -1.0;
        lVar5 = *(long *)(unaff_x19 + 0x38);
        *(float *)(unaff_x19 + 0x78) = -unaff_s15;
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        fVar7 = fVar6;
        if (-1.0 <= fVar8) {
          fVar7 = fVar9;
        }
        *(float *)(lVar4 + 0x14) = fVar7;
        if (lVar5 == 0) goto LAB_0697980c;
        fVar8 = atan2f(*(float *)(lVar5 + 0x20),fStack0000000000000014);
        lVar4 = *(long *)(unaff_x19 + 0x68);
        fVar8 = fVar8 * DAT_015c595c * DAT_015c5d68;
        fVar9 = *(float *)(lVar5 + 0x1c) * fVar8;
        *(float *)(lVar5 + 0x14) = fVar9;
        fVar8 = -(*(float *)(lVar5 + 0x1c) * fVar8);
        if (0.0 <= fVar9) {
          fVar6 = 1.0;
          fVar8 = fVar9;
        }
        if ((lVar4 == 0) || (*(long *)(lVar4 + 0x30) == 0)) goto LAB_0697980c;
        fVar9 = *(float *)(lVar4 + 0x20);
        fStack0000000000000000 =
             fStack0000000000000000 * fStack0000000000000004 * fStack0000000000000010;
        fVar8 = (float)FUN_07c42008(fVar8,*(long *)(lVar4 + 0x30),0);
        cVar1 = *(char *)(unaff_x19 + 0x9c);
        *(float *)(lVar5 + 0x10) =
             fStack000000000000000c * fStack0000000000000000 * -(fVar6 * fVar8);
        if ((cVar1 == '\0') ||
           (((*(char *)(unaff_x19 + 0x458) != '\0' || (DAT_015c5840 <= fStack0000000000000018)) ||
            (DAT_015c5840 <= fStack0000000000000008)))) {
          *(undefined1 *)(unaff_x19 + 0x408) = 0;
        }
        else {
          if ((*(long *)(unaff_x19 + 0x20) == 0) ||
             (lVar4 = *(long *)(unaff_x19 + 0x30), lVar4 == 0)) goto LAB_0697980c;
          fVar8 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar4 + 0x58);
          fVar6 = (float)*(undefined8 *)(unaff_x19 + 0x268) -
                  (float)*(undefined8 *)(unaff_x19 + 0x284) * fVar8;
          fVar7 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(unaff_x19 + 0x284) >> 0x20) * fVar8;
          fVar8 = *(float *)(unaff_x19 + 0x270) - fVar8 * *(float *)(unaff_x19 + 0x28c);
          if (*(char *)(unaff_x19 + 0x408) == '\0') {
            *(float *)(unaff_x19 + 0x414) = fVar8;
            *(undefined1 *)(unaff_x19 + 0x408) = 1;
            *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar7,fVar6);
          }
          else {
            fVar10 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
            fVar6 = (*(float *)(unaff_x19 + 0x40c) - fVar6) * fVar10;
            fVar7 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar7) * fVar10;
            fVar10 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar8) * fVar10;
            if (ABS(*(float *)(lVar4 + 0x48)) < 0.5) {
              lVar4 = *(long *)(unaff_x19 + 0x40);
              if (lVar4 == 0) goto LAB_0697980c;
              *(float *)(lVar4 + 0x10) =
                   *(float *)(lVar4 + 0x10) +
                   fVar10 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x294) >> 0x20) +
                   fVar6 * *(float *)(unaff_x19 + 0x290) +
                   fVar7 * (float)*(undefined8 *)(unaff_x19 + 0x294);
            }
            lVar4 = *(long *)(unaff_x19 + 0x38);
            if (lVar4 == 0) goto LAB_0697980c;
            *(float *)(lVar4 + 0x10) =
                 *(float *)(lVar4 + 0x10) +
                 fVar10 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
                 fVar6 * *(float *)(unaff_x19 + 0x29c) +
                 fVar7 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
          }
        }
        lVar4 = *(long *)(unaff_x19 + 0x40);
        if (lVar4 != 0) {
          fVar6 = *(float *)(lVar4 + 0x10);
          fVar8 = unaff_s9;
          if ((fVar6 <= unaff_s9) && (fVar8 = -unaff_s9, -unaff_s9 <= fVar6)) {
            fVar8 = fVar6;
          }
          lVar5 = *(long *)(unaff_x19 + 0x38);
          *(float *)(lVar4 + 0x10) = fVar8;
          if (lVar5 != 0) {
            fStack0000000000000000 = fStack0000000000000000 * fVar9;
            fVar6 = *(float *)(lVar5 + 0x10);
            fVar8 = fStack0000000000000000;
            if ((fVar6 <= fStack0000000000000000) &&
               (fVar8 = -fStack0000000000000000, -fStack0000000000000000 <= fVar6)) {
              fVar8 = fVar6;
            }
            *(float *)(lVar5 + 0x10) = fVar8;
            fVar6 = *(float *)(unaff_x19 + 0x94);
            fVar8 = *(float *)(lVar5 + 0x18);
            *(float *)(lVar4 + 0x10) = *(float *)(lVar4 + 0x10) * *(float *)(lVar4 + 0x18);
            fVar8 = *(float *)(lVar5 + 0x10) * fVar8;
            *(float *)(lVar5 + 0x10) = fVar8;
            if (0.0 < fVar6) {
              fVar9 = 1.0;
              if (ABS(*(float *)(lVar4 + 0x14)) <= 1.0) {
                fVar9 = ABS(*(float *)(lVar4 + 0x14));
              }
              fVar9 = powf(fVar9,*(float *)(unaff_x19 + 0x98));
              fVar8 = fVar8 * (1.0 - fVar6 * fVar9);
              *(float *)(lVar5 + 0x10) = fVar8;
            }
            fVar6 = *(float *)(lVar4 + 0x10);
            *(ulong *)(unaff_x19 + 0x3c8) =
                 CONCAT44((float)((ulong)*(undefined8 *)(unaff_x19 + 0x29c) >> 0x20) * fVar8 +
                          (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar6,
                          (float)*(undefined8 *)(unaff_x19 + 0x29c) * fVar8 +
                          (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar6);
            *(float *)(unaff_x19 + 0x3d0) =
                 *(float *)(unaff_x19 + 0x2a4) * fVar8 + *(float *)(unaff_x19 + 0x298) * fVar6;
            if (*(char *)(unaff_x19 + 0x458) != '\0') {
              *(undefined1 *)(unaff_x19 + 0x458) = 0;
            }
            return;
          }
        }
        goto LAB_0697980c;
      }
      lVar4 = *(long *)(unaff_x19 + 0x30);
      if (lVar4 == 0) goto LAB_0697980c;
      cVar1 = *(char *)(unaff_x19 + 0x9c);
      fVar8 = unaff_s14 * *(float *)(unaff_x19 + 0x70);
      unaff_s15 = unaff_s15 + fVar8;
      fVar8 = *(float *)(lVar4 + 0x48) + unaff_s13 * fVar8;
      *(float *)(lVar4 + 0x48) = fVar8;
    } while (cVar1 == '\0');
    lVar5 = *(long *)(unaff_x19 + 0x40);
    if (lVar5 == 0) break;
    fVar6 = -1.0;
    lVar3 = *(long *)(unaff_x19 + 0x68);
    fVar8 = -((fVar8 * *(float *)(lVar4 + 0x58) - *(float *)(lVar5 + 0x20)) * in_stack_00000020);
    fVar9 = *(float *)(lVar5 + 0x1c) * fVar8;
    *(float *)(lVar5 + 0x14) = fVar9;
    fVar8 = -(*(float *)(lVar5 + 0x1c) * fVar8);
    if (0.0 <= fVar9) {
      fVar6 = 1.0;
      fVar8 = fVar9;
    }
    if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) break;
    fVar8 = (float)FUN_07c42008(fVar8,lVar4,0);
    param_2 = fStack000000000000007c * -(fVar6 * fVar8);
    unaff_s11 = unaff_s9;
  }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


