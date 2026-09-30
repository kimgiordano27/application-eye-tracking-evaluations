/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_SaveSpaceList
ENTRY_POINT: 06978aac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_SaveSpaceList
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 *unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s11;
  float fVar9;
  float unaff_s13;
  float fVar10;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
                    /* try { // try from 06978aac to 06a78aaf has its CatchHandler @ 06978ae4 */
                    /* try { // try from 06978ab0 to 06a78ab3 has its CatchHandler @ 06978acc */
  fVar8 = *(float *)(param_1 + 0x10);
                    /* try { // try from 06978ab4 to 06a78ab7 has its CatchHandler @ 06978ad4 */
  fVar9 = *(float *)(unaff_x19 + 0x340);
                    /* catch() { ... } // from try @ 06978a60 with catch @ 06978ab8
                       try { // try from 06978ab8 to 06a78b03 has its CatchHandler @ 06978738 */
                    /* catch() { ... } // from try @ 06978a80 with catch @ 06978abc */
  fVar6 = *(float *)(unaff_x19 + 0x344);
                    /* catch() { ... } // from try @ 06978a0c with catch @ 06978ac0 */
  fVar10 = *(float *)(unaff_x19 + 0x348);
                    /* catch() { ... } // from try @ 069789b0 with catch @ 06978ac4 */
  fVar7 = *(float *)(unaff_x19 + 0x8c);
                    /* catch() { ... } // from try @ 069789a0 with catch @ 06978ac8 */
  if (*(char *)(unaff_x20 + 0xd90) == '\0') {
                    /* catch() { ... } // from try @ 06978ab0 with catch @ 06978acc */
                    /* catch() { ... } // from try @ 06978a2c with catch @ 06978ad0 */
                    /* catch() { ... } // from try @ 06978998 with catch @ 06978ad4
                       catch() { ... } // from try @ 06978ab4 with catch @ 06978ad4 */
    FUN_03a8a718(PTR_DAT_08487160);
                    /* catch() { ... } // from try @ 06978910 with catch @ 06978ad8 */
                    /* catch() { ... } // from try @ 06978930 with catch @ 06978adc */
    *(undefined1 *)(unaff_x20 + 0xd90) = 1;
  }
                    /* catch() { ... } // from try @ 06978940 with catch @ 06978ae0 */
                    /* catch() { ... } // from try @ 06978aac with catch @ 06978ae4 */
                    /* catch() { ... } // from try @ 06978aa4 with catch @ 06978ae8 */
                    /* catch() { ... } // from try @ 06978928 with catch @ 06978aec
                       catch() { ... } // from try @ 06978aa8 with catch @ 06978aec */
  fVar5 = fVar10 * fVar10 + fVar9 * fVar9 + fVar6 * fVar6;
                    /* try { // try from 06978b04 to 06a78b1b has its CatchHandler @ 06978b94 */
  if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar5) {
    fVar8 = fVar10 * fVar7 * ((fStack0000000000000018 - unaff_s13) * fVar8 * fVar6 -
                             (fStack0000000000000010 - unaff_s11) * fVar8 * fVar9) +
            fVar9 * fVar7 * ((fStack0000000000000010 - unaff_s11) * fVar8 * fVar10 -
                            (fStack0000000000000014 - param_4) * fVar8 * fVar6) +
            fVar6 * fVar7 * ((fStack0000000000000014 - param_4) * fVar8 * fVar9 -
                            (fStack0000000000000018 - unaff_s13) * fVar8 * fVar10);
    fVar7 = (fVar9 * fVar8) / fVar5;
    fVar6 = (fVar6 * fVar8) / fVar5;
    fVar5 = (fVar10 * fVar8) / fVar5;
  }
  else {
    if (DAT_08974d8f == '\0') {
                    /* try { // try from 06978b1c to 06a78b83 has its CatchHandler @ 06978738 */
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar7 = *pfVar2;
    fVar6 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (*(long *)(unaff_x19 + 0xa0) != 0) {
    FUN_07d32824(fVar7,fVar6,fVar5,*(long *)(unaff_x19 + 0xa0),0);
    if (*(char *)(unaff_x19 + 0x9c) != '\0') {
      if ((*(long *)(unaff_x19 + 0x20) == 0) || (*(long *)(unaff_x19 + 0xa0) == 0))
      goto LAB_06978e5c;
      fVar6 = *(float *)(unaff_x19 + 0xa8);
      fVar7 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
      FUN_07d32a2c(*(undefined4 *)(unaff_x19 + 0x3c8),*(undefined4 *)(unaff_x19 + 0x3cc),
                   *(undefined4 *)(unaff_x19 + 0x3d0),
                   *(float *)(unaff_x19 + 0x5c) + fVar7 * fVar6 * *(float *)(unaff_x19 + 0x284),
                   (float)*(undefined8 *)(unaff_x19 + 0x60) +
                   (float)*(undefined8 *)(unaff_x19 + 0x288) * fVar6 * fVar7,
                   (float)((ulong)*(undefined8 *)(unaff_x19 + 0x60) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(unaff_x19 + 0x288) >> 0x20) * fVar6 * fVar7,
                   *(long *)(unaff_x19 + 0xa0),0);
      uVar4 = *(undefined8 *)(unaff_x19 + 0x3b8);
      if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar1 = FUN_07c9c218(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x3b8) == 0) goto LAB_06978e5c;
        fVar7 = *(float *)(unaff_x19 + 0xb8);
        fVar6 = -((float)((ulong)*(undefined8 *)(unaff_x19 + 0x3c8) >> 0x20) +
                 (float)((ulong)*unaff_x22 >> 0x20)) * fVar7;
        FUN_07d32a2c(CONCAT44(fVar6,-((float)*(undefined8 *)(unaff_x19 + 0x3c8) + (float)*unaff_x22)
                                    * fVar7),fVar6,
                     -((*(float *)(unaff_x19 + 0x3d0) + *(float *)(unaff_x19 + 0x3dc)) * fVar7),
                     *(undefined4 *)(unaff_x19 + 0x5c),*(undefined4 *)(unaff_x19 + 0x60),
                     *(undefined4 *)(unaff_x19 + 100),*(long *)(unaff_x19 + 0x3b8),0);
      }
    }
    lVar3 = *(long *)(unaff_x19 + 0x30);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
      FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x30c),*(undefined4 *)(unaff_x19 + 0x310),
                   *(undefined4 *)(unaff_x19 + 0x314),*(undefined4 *)(lVar3 + 0x30),
                   *(undefined4 *)(lVar3 + 0x34),*(undefined4 *)(lVar3 + 0x38),
                   *(undefined4 *)(lVar3 + 0x3c),*(long *)(lVar3 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x28), lVar3 != 0)) {
        fVar6 = *(float *)(unaff_x19 + 0x324);
        fVar7 = *(float *)(unaff_x19 + 0x318);
        fVar8 = *(float *)(unaff_x19 + 800);
        fVar9 = *(float *)(unaff_x19 + 0x31c);
        FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x30c),*(undefined4 *)(unaff_x19 + 0x310),
                     *(undefined4 *)(unaff_x19 + 0x314),
                     (fStack0000000000000024 * fVar6 + fStack000000000000001c * fVar7 +
                     fStack0000000000000020 * fVar8) - in_stack_00000028 * fVar9,
                     (in_stack_00000028 * fVar7 +
                     fStack0000000000000020 * fVar6 + fStack000000000000001c * fVar9) -
                     fStack0000000000000024 * fVar8,
                     (fStack0000000000000024 * fVar9 +
                     in_stack_00000028 * fVar6 + fStack000000000000001c * fVar8) -
                     fStack0000000000000020 * fVar7,
                     ((fStack000000000000001c * fVar6 - fStack0000000000000024 * fVar7) -
                     fStack0000000000000020 * fVar9) - in_stack_00000028 * fVar8,lVar3,0);
        if (((*(long *)(unaff_x19 + 0x30) != 0) &&
            (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x30) + 0x40), lVar3 != 0)) &&
           (lVar3 = FUN_07c98f88(lVar3,0), lVar3 != 0)) {
          fVar6 = *(float *)(unaff_x19 + 0x280);
          fVar7 = *(float *)(unaff_x19 + 0x274);
          fVar8 = *(float *)(unaff_x19 + 0x27c);
          fVar9 = *(float *)(unaff_x19 + 0x278);
          FUN_07cad038(*(undefined4 *)(unaff_x19 + 0x268),*(undefined4 *)(unaff_x19 + 0x26c),
                       *(undefined4 *)(unaff_x19 + 0x270),
                       (fStack0000000000000024 * fVar6 + fStack000000000000001c * fVar7 +
                       fStack0000000000000020 * fVar8) - in_stack_00000028 * fVar9,
                       (in_stack_00000028 * fVar7 +
                       fStack0000000000000020 * fVar6 + fStack000000000000001c * fVar9) -
                       fStack0000000000000024 * fVar8,
                       (fStack0000000000000024 * fVar9 +
                       in_stack_00000028 * fVar6 + fStack000000000000001c * fVar8) -
                       fStack0000000000000020 * fVar7,
                       ((fStack000000000000001c * fVar6 - fStack0000000000000024 * fVar7) -
                       fStack0000000000000020 * fVar9) - in_stack_00000028 * fVar8,lVar3,0);
          return;
        }
      }
    }
  }
LAB_06978e5c:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


