/*
FUNCTION_NAME: OVRManager$$add_HMDUnmounted
ENTRY_POINT: 07a1e570
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDUnmounted(void)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  float fVar4;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float fVar7;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  *(undefined1 *)(unaff_x20 + 0x4e7) = 1;
  fVar5 = unaff_s9 - unaff_s12;
  fVar6 = unaff_s10 - unaff_s13;
  fVar7 = unaff_s11 - unaff_s14;
                    /* try { // try from 07a1e58c to 07b1e593 has its CatchHandler @ 07a1e62c */
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
                    /* try { // try from 07a1e5a0 to 07b1e5a3 has its CatchHandler @ 07a1e620 */
  fVar4 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
  if (fVar4 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
                    /* try { // try from 07a1e610 to 07b1e613 has its CatchHandler @ 07a1e634 */
      FUN_04077588(PTR_DAT_09285d60);
                    /* try { // try from 07a1e614 to 07b1e617 has its CatchHandler @ 07a1e61c */
                    /* try { // try from 07a1e618 to 07b1e61b has its CatchHandler @ 07a1e624 */
      DAT_098854f1 = '\x01';
    }
                    /* catch() { ... } // from try @ 07a1e614 with catch @ 07a1e61c
                       try { // try from 07a1e61c to 07b1e64f has its CatchHandler @ 07a1e300 */
                    /* catch() { ... } // from try @ 07a1e5a0 with catch @ 07a1e620 */
                    /* catch() { ... } // from try @ 07a1e5d4 with catch @ 07a1e624
                       catch() { ... } // from try @ 07a1e618 with catch @ 07a1e624 */
                    /* catch() { ... } // from try @ 07a1e53c with catch @ 07a1e628 */
    pfVar1 = *(float **)(*(long *)PTR_DAT_09285d60 + 0xb8);
                    /* catch() { ... } // from try @ 07a1e58c with catch @ 07a1e62c */
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
                    /* catch() { ... } // from try @ 07a1e528 with catch @ 07a1e630 */
    fVar7 = pfVar1[2];
  }
  else {
    fVar5 = fVar5 / fVar4;
    fVar6 = fVar6 / fVar4;
    fVar7 = fVar7 / fVar4;
  }
                    /* catch() { ... } // from try @ 07a1e554 with catch @ 07a1e634
                       catch() { ... } // from try @ 07a1e610 with catch @ 07a1e634 */
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_089c6d28(*(long *)(unaff_x19 + 0x30),1,0);
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if (lVar3 != 0) {
      *(float *)(lVar3 + 0x40) = fVar5;
      *(float *)(lVar3 + 0x44) = fVar6;
      *(float *)(lVar3 + 0x48) = fVar7;
      lVar2 = *(long *)(unaff_x19 + 0x30);
      *(undefined1 *)(lVar3 + 0x4c) = 1;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


