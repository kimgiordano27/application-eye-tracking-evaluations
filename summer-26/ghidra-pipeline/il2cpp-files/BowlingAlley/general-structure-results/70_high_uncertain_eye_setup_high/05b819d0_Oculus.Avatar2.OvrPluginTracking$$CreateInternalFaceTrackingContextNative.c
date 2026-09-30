/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$CreateInternalFaceTrackingContextNative
ENTRY_POINT: 05b819d0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float Oculus_Avatar2_OvrPluginTracking__CreateInternalFaceTrackingContextNative
                (undefined8 param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float *pfVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  
                    /* try { // try from 05b819d0 to 05c819e3 has its CatchHandler @ 05b81a88 */
  _fStack0000000000000040 = param_1;
                    /* try { // try from 05b819e4 to 05c819e7 has its CatchHandler @ 05b81424 */
  if ((unaff_x20 != 0) && (lVar3 = FUN_06be6b04(), lVar3 != 0)) {
                    /* try { // try from 05b819e8 to 05c819eb has its CatchHandler @ 05b81a0c */
                    /* try { // try from 05b819ec to 05c819f3 has its CatchHandler @ 05b81a24 */
    fVar7 = (float)FUN_06bf4ce0(lVar3,0);
    fVar10 = param_3;
    fVar11 = param_4;
                    /* try { // try from 05b819f4 to 05c819fb has its CatchHandler @ 05b81a08 */
                    /* catch() { ... } // from try @ 05b81990 with catch @ 05b819fc
                       try { // try from 05b819fc to 05c81a3f has its CatchHandler @ 05b81424 */
    lVar3 = FUN_06be6b04();
                    /* catch() { ... } // from try @ 05b819f4 with catch @ 05b81a08 */
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 05b819e8 with catch @ 05b81a0c */
                    /* catch() { ... } // from try @ 05b81748 with catch @ 05b81a10 */
      fVar8 = (float)FUN_06bf4868(lVar3,0);
                    /* catch() { ... } // from try @ 05b816d8 with catch @ 05b81a14 */
                    /* catch() { ... } // from try @ 05b81934 with catch @ 05b81a18 */
                    /* catch() { ... } // from try @ 05b816bc with catch @ 05b81a1c */
                    /* catch() { ... } // from try @ 05b81714 with catch @ 05b81a20 */
                    /* catch() { ... } // from try @ 05b819ec with catch @ 05b81a24 */
      if (DAT_076cd827 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07279c00);
        DAT_076cd827 = '\x01';
      }
                    /* try { // try from 05b81a40 to 05c81a43 has its CatchHandler @ 05b81a64 */
                    /* try { // try from 05b81a44 to 05c81a6b has its CatchHandler @ 05b81424 */
      if (*(int *)(*(long *)PTR_DAT_07279c00 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      fVar9 = SQRT(param_4 * param_4 + fVar7 * fVar7 + param_3 * param_3);
      if (fVar9 <= DAT_013a01c0) {
        if (DAT_076cd829 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_072795b0);
          DAT_076cd829 = '\x01';
        }
        pfVar6 = *(float **)(*(long *)PTR_DAT_072795b0 + 0xb8);
        fVar7 = *pfVar6;
        param_3 = pfVar6[1];
        param_4 = pfVar6[2];
      }
      else {
        fVar7 = fVar7 / fVar9;
        param_3 = param_3 / fVar9;
        param_4 = param_4 / fVar9;
      }
      fVar2 = fStack0000000000000038;
      fVar9 = fStack0000000000000030;
      fVar14 = param_4 * fStack0000000000000044 +
               fVar7 * fStack000000000000003c + param_3 * fStack0000000000000040;
      if (DAT_076ce2ba == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07279bf8);
        DAT_076ce2ba = '\x01';
      }
      fVar12 = ABS(fVar14);
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar13 = **(float **)(*(long *)PTR_DAT_07279bf8 + 0xb8) * 8.0;
      fVar1 = fVar12 * DAT_013a03a0;
      if (fVar12 * DAT_013a03a0 <= fVar13) {
        fVar1 = fVar13;
      }
      if ((ABS(0.0 - fVar14) < fVar1) ||
         (((fVar11 * param_4 + fVar8 * fVar7 + fVar10 * param_3) -
          (param_4 * fVar2 + fVar7 * fVar9 + param_3 * fStack0000000000000034)) / fVar14 <= 0.0)) {
        if (DAT_076ce198 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07279af0);
          DAT_076ce198 = '\x01';
        }
        fVar10 = **(float **)(*(long *)PTR_DAT_07279af0 + 0xb8);
      }
      else {
        fVar10 = (float)UnityEngine_UIElements_BaseVerticalCollectionView__get_virtualizationController
                                  (&stack0x00000030,0);
        if ((*(long *)(unaff_x19 + 0x20) == 0) ||
           (lVar3 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar3 == 0)) goto LAB_05b81ca0;
        uVar4 = FUN_06bf4764(lVar3,0);
        if (*(int *)(*unaff_x22 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*unaff_x22);
        }
        uVar5 = FUN_06be9890(uVar4,0,0);
        fVar11 = 1.0;
        if ((uVar5 & 1) != 0) {
          if (((*(long *)(unaff_x19 + 0x20) == 0) ||
              (lVar3 = FUN_06be6b04(*(long *)(unaff_x19 + 0x20),0), lVar3 == 0)) ||
             (lVar3 = FUN_06bf4764(lVar3,0), lVar3 == 0)) goto LAB_05b81ca0;
          fVar11 = (float)FUN_06bf6348(lVar3,0);
        }
        fVar10 = unaff_s9 - fVar10;
        if (fVar10 <= -fVar10) {
          fVar10 = -fVar10;
        }
        fVar10 = fVar10 / fVar11;
      }
      return fVar10;
    }
  }
LAB_05b81ca0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


