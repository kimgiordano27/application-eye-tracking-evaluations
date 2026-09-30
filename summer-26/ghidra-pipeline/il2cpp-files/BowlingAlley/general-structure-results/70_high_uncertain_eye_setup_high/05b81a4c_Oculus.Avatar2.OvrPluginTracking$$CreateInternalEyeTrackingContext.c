/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalEyeTrackingContext
ENTRY_POINT: 05b81a4c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_4
*/


float Oculus_Avatar2_OvrPluginTracking__CreateInternalEyeTrackingContext(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int in_w8;
  float *pfVar7;
  long unaff_x19;
  long *unaff_x22;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s9;
  float fVar12;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar13;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  
  if (in_w8 == 0) {
    thunk_FUN_032cd7c0();
  }
                    /* catch() { ... } // from try @ 05b81a40 with catch @ 05b81a64 */
                    /* try { // try from 05b81a6c to 05c81a73 has its CatchHandler @ 05b81a88 */
  fVar8 = SQRT(unaff_s15 * unaff_s15 + unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14);
                    /* try { // try from 05b81a74 to 05c81a7f has its CatchHandler @ 05b81424 */
  if (fVar8 <= DAT_013a01c0) {
    if (DAT_076cd829 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_072795b0);
      DAT_076cd829 = '\x01';
    }
    pfVar7 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
    fVar11 = *pfVar7;
    fVar13 = pfVar7[1];
    fVar8 = pfVar7[2];
  }
  else {
                    /* try { // try from 05b81a80 to 05c81a87 has its CatchHandler @ 05b81a88 */
    fVar11 = unaff_s13 / fVar8;
    fVar13 = unaff_s14 / fVar8;
                    /* catch() { ... } // from try @ 05b819d0 with catch @ 05b81a88
                       catch() { ... } // from try @ 05b81a6c with catch @ 05b81a88
                       catch() { ... } // from try @ 05b81a80 with catch @ 05b81a88 */
    fVar8 = unaff_s15 / fVar8;
                    /* try { // try from 05b81a8c to 05c82857 has its CatchHandler @ 05b81a8c
                       catch() { ... } // from try @ 05b81a8c with catch @ 05b81a8c
                       catch() { ... } // from try @ 05b82a5c with catch @ 05b81a8c
                       catch() { ... } // from try @ 05b830b0 with catch @ 05b81a8c
                       catch() { ... } // from try @ 05b831b0 with catch @ 05b81a8c
                       catch() { ... } // from try @ 05b831f0 with catch @ 05b81a8c */
  }
  fVar3 = fStack0000000000000038;
  fVar2 = fStack0000000000000030;
  fVar12 = fVar8 * fStack0000000000000044 +
           fVar11 * fStack000000000000003c + fVar13 * fStack0000000000000040;
  if (DAT_076ce2ba == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07279bf8);
    DAT_076ce2ba = '\x01';
  }
  fVar9 = ABS(fVar12);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar10 = **(float **)(*(long *)PTR_DAT_07279bf8 + 0xb8) * 8.0;
  fVar1 = fVar9 * DAT_013a03a0;
  if (fVar9 * DAT_013a03a0 <= fVar10) {
    fVar1 = fVar10;
  }
  if ((ABS(0.0 - fVar12) < fVar1) ||
     (((fStack000000000000000c * fVar8 + fStack0000000000000008 * fVar11 + unaff_s12 * fVar13) -
      (fVar8 * fVar3 + fVar11 * fVar2 + fVar13 * fStack0000000000000034)) / fVar12 <= 0.0)) {
    if (DAT_076ce198 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07279af0);
      DAT_076ce198 = '\x01';
    }
    fVar8 = **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
  }
  else {
    fVar8 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                             (&stack0x00000030,0);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar4 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar4 == 0)) {
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar5 = FUN_06bf4764(lVar4,0);
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x22);
    }
    uVar6 = FUN_06be9890(uVar5,0,0);
    fVar11 = 1.0;
    if ((uVar6 & 1) != 0) {
      if (((*(long *)(unaff_x19 + 0x20) == 0) ||
          (lVar4 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar4 == 0)) ||
         (lVar4 = FUN_06bf4764(lVar4,0), lVar4 == 0)) goto LAB_05b81ca0;
      fVar11 = (float)FUN_06bf6348(lVar4,0);
    }
    fVar8 = unaff_s9 - fVar8;
    if (fVar8 <= -fVar8) {
      fVar8 = -fVar8;
    }
    fVar8 = fVar8 / fVar11;
  }
  return fVar8;
}


