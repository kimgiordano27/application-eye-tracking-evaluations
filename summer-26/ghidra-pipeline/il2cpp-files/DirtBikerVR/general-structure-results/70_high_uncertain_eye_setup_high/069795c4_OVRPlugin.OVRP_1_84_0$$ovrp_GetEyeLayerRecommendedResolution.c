/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_GetEyeLayerRecommendedResolution
ENTRY_POINT: 069795c4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_GetEyeLayerRecommendedResolution(undefined4 param_1)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float in_stack_00000008;
  
  *(undefined4 *)(unaff_x21 + 0x10) = param_1;
                    /* catch() { ... } // from try @ 06979604 with catch @ 069795d0
                       catch() { ... } // from try @ 06979628 with catch @ 069795d0 */
  if ((((in_w8 == 0) || (*(char *)(unaff_x19 + 0x458) != '\0')) || (DAT_015c5840 <= unaff_s12)) ||
     (DAT_015c5840 <= in_stack_00000008)) {
    *(undefined1 *)(unaff_x19 + 0x408) = 0;
  }
  else {
                    /* try { // try from 069795fc to 06a79603 has its CatchHandler @ 06979614 */
    if ((*(long *)(unaff_x19 + 0x20) == 0) || (lVar1 = *(long *)(unaff_x19 + 0x30), lVar1 == 0))
    goto LAB_0697980c;
                    /* try { // try from 06979604 to 06a79623 has its CatchHandler @ 069795d0 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 069795fc with catch @ 06979614
                        */
    fVar3 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x20) + *(float *)(lVar1 + 0x58);
                    /* try { // try from 06979624 to 06a79627 has its CatchHandler @ 06979640 */
                    /* try { // try from 06979628 to 06a7964b has its CatchHandler @ 069795d0 */
    fVar4 = (float)*(undefined8 *)(unaff_x19 + 0x268) - (float)*unaff_x20 * fVar3;
    fVar5 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x268) >> 0x20) -
            (float)((ulong)*unaff_x20 >> 0x20) * fVar3;
    fVar3 = *(float *)(unaff_x19 + 0x270) - fVar3 * *(float *)(unaff_x19 + 0x28c);
    if (*(char *)(unaff_x19 + 0x408) == '\0') {
      *(float *)(unaff_x19 + 0x414) = fVar3;
      *(undefined1 *)(unaff_x19 + 0x408) = 1;
      *(ulong *)(unaff_x19 + 0x40c) = CONCAT44(fVar5,fVar4);
    }
    else {
      fVar6 = *(float *)(unaff_x19 + 0x3ec) * *(float *)(unaff_x19 + 0x84);
      fVar4 = (*(float *)(unaff_x19 + 0x40c) - fVar4) * fVar6;
      fVar5 = ((float)*(undefined8 *)(unaff_x19 + 0x410) - fVar5) * fVar6;
      fVar6 = ((float)((ulong)*(undefined8 *)(unaff_x19 + 0x410) >> 0x20) - fVar3) * fVar6;
      if (ABS(*(float *)(lVar1 + 0x48)) < 0.5) {
        lVar1 = *(long *)(unaff_x19 + 0x40);
        if (lVar1 == 0) goto LAB_0697980c;
        *(float *)(lVar1 + 0x10) =
             *(float *)(lVar1 + 0x10) +
             fVar6 * (float)((ulong)unaff_x20[2] >> 0x20) +
             fVar4 * *(float *)(unaff_x19 + 0x290) + fVar5 * (float)unaff_x20[2];
      }
      lVar1 = *(long *)(unaff_x19 + 0x38);
      if (lVar1 == 0) goto LAB_0697980c;
      *(float *)(lVar1 + 0x10) =
           *(float *)(lVar1 + 0x10) +
           fVar6 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
           fVar4 * *(float *)(unaff_x19 + 0x29c) + fVar5 * (float)*(undefined8 *)(unaff_x19 + 0x2a0)
      ;
    }
  }
  lVar1 = *(long *)(unaff_x19 + 0x40);
  if (lVar1 != 0) {
    fVar4 = *(float *)(lVar1 + 0x10);
    fVar3 = unaff_s9;
    if ((fVar4 <= unaff_s9) && (fVar3 = -unaff_s9, -unaff_s9 <= fVar4)) {
      fVar3 = fVar4;
    }
    lVar2 = *(long *)(unaff_x19 + 0x38);
    *(float *)(lVar1 + 0x10) = fVar3;
    if (lVar2 != 0) {
      fVar4 = unaff_s8 * unaff_s10;
      fVar5 = *(float *)(lVar2 + 0x10);
      fVar3 = fVar4;
      if ((fVar5 <= fVar4) && (fVar3 = -fVar4, -fVar4 <= fVar5)) {
        fVar3 = fVar5;
      }
      *(float *)(lVar2 + 0x10) = fVar3;
      fVar4 = *(float *)(unaff_x19 + 0x94);
      fVar3 = *(float *)(lVar2 + 0x18);
      *(float *)(lVar1 + 0x10) = *(float *)(lVar1 + 0x10) * *(float *)(lVar1 + 0x18);
      fVar3 = *(float *)(lVar2 + 0x10) * fVar3;
      *(float *)(lVar2 + 0x10) = fVar3;
      if (0.0 < fVar4) {
        fVar5 = 1.0;
        if (ABS(*(float *)(lVar1 + 0x14)) <= 1.0) {
          fVar5 = ABS(*(float *)(lVar1 + 0x14));
        }
        fVar5 = powf(fVar5,*(float *)(unaff_x19 + 0x98));
        fVar3 = fVar3 * (1.0 - fVar4 * fVar5);
        *(float *)(lVar2 + 0x10) = fVar3;
      }
      fVar4 = *(float *)(lVar1 + 0x10);
      *(ulong *)(unaff_x19 + 0x3c8) =
           CONCAT44((float)((ulong)unaff_x20[3] >> 0x20) * fVar3 +
                    (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar4,
                    (float)unaff_x20[3] * fVar3 + (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar4)
      ;
      *(float *)(unaff_x19 + 0x3d0) =
           *(float *)(unaff_x19 + 0x2a4) * fVar3 + *(float *)(unaff_x19 + 0x298) * fVar4;
      if (*(char *)(unaff_x19 + 0x458) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x458) = 0;
      }
      return;
    }
  }
LAB_0697980c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


