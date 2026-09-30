/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$.cctor
ENTRY_POINT: 06979640
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0___cctor
               (long param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               float param_6)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  
                    /* catch() { ... } // from try @ 06979624 with catch @ 06979640 */
                    /* try { // try from 0697964c to 06a79653 has its CatchHandler @ 06979654 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0697964c with catch @ 06979654
                        */
                    /* catch() { ... } // from try @ 0697968c with catch @ 06979658
                       catch() { ... } // from try @ 069796b0 with catch @ 06979658 */
  param_6 = param_6 * *(float *)(unaff_x19 + 0x84);
  fVar3 = (*(float *)(unaff_x19 + 0x40c) - param_2) * param_6;
  fVar4 = ((float)param_5 - param_4) * param_6;
  param_6 = ((float)((ulong)param_5 >> 0x20) - param_3) * param_6;
  if (ABS(*(float *)(param_1 + 0x48)) < 0.5) {
    lVar1 = *(long *)(unaff_x19 + 0x40);
    if (lVar1 == 0) goto LAB_0697980c;
                    /* try { // try from 06979684 to 06a7968b has its CatchHandler @ 0697969c */
                    /* try { // try from 0697968c to 06a796ab has its CatchHandler @ 06979658 */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 06979684 with catch @ 0697969c
                        */
    *(float *)(lVar1 + 0x10) =
         *(float *)(lVar1 + 0x10) +
         param_6 * (float)((ulong)*(undefined8 *)(unaff_x20 + 0x10) >> 0x20) +
         fVar3 * *(float *)(unaff_x19 + 0x290) + fVar4 * (float)*(undefined8 *)(unaff_x20 + 0x10);
  }
  lVar1 = *(long *)(unaff_x19 + 0x38);
  if (lVar1 != 0) {
                    /* try { // try from 069796ac to 06a796af has its CatchHandler @ 069796c8 */
                    /* try { // try from 069796b0 to 06a796d3 has its CatchHandler @ 06979658 */
    *(float *)(lVar1 + 0x10) =
         *(float *)(lVar1 + 0x10) +
         param_6 * (float)((ulong)*(undefined8 *)(unaff_x19 + 0x2a0) >> 0x20) +
         fVar3 * *(float *)(unaff_x19 + 0x29c) + fVar4 * (float)*(undefined8 *)(unaff_x19 + 0x2a0);
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
             CONCAT44((float)((ulong)*(undefined8 *)(unaff_x20 + 0x18) >> 0x20) * fVar3 +
                      (float)((ulong)*(undefined8 *)(unaff_x19 + 0x290) >> 0x20) * fVar4,
                      (float)*(undefined8 *)(unaff_x20 + 0x18) * fVar3 +
                      (float)*(undefined8 *)(unaff_x19 + 0x290) * fVar4);
        *(float *)(unaff_x19 + 0x3d0) =
             *(float *)(unaff_x19 + 0x2a4) * fVar3 + *(float *)(unaff_x19 + 0x298) * fVar4;
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


