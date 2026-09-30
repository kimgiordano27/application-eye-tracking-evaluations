/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 073ed864
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x073edd4c) */

float OVRPlugin__GetEyeGazesState
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                float param_5,float param_6)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int in_w8;
  float *pfVar5;
  long unaff_x19;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float fVar13;
  float unaff_s9;
  float fVar14;
  float fVar15;
  float unaff_s10;
  float unaff_s11;
  float fVar16;
  float unaff_s14;
  float fVar17;
  float fVar18;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  param_3 = param_3 - param_4;
  fVar16 = in_s16 * param_5 - in_s17 * unaff_s15;
  fStack0000000000000034 = param_6;
  fStack0000000000000038 = in_s17;
  fStack000000000000003c = in_s16;
  if (in_w8 == 0) {
    FUN_03c8f898(PTR_DAT_08e722b0);
                    /* catch() { ... } // from try @ 073ed8ac with catch @ 073ed890
                       catch() { ... } // from try @ 073ed8c4 with catch @ 073ed890
                       catch() { ... } // from try @ 073ed8e0 with catch @ 073ed890
                       catch() { ... } // from try @ 073ed91c with catch @ 073ed890 */
    *(undefined1 *)(unaff_x19 + 0xea2) = 1;
  }
  puVar4 = PTR_DAT_08e722b0;
                    /* try { // try from 073ed8a4 to 074ed8ab has its CatchHandler @ 073ed8c4 */
                    /* try { // try from 073ed8ac to 074ed8bf has its CatchHandler @ 073ed890 */
  fVar7 = fVar16 * fVar16 + unaff_s14 * unaff_s14 + param_3 * param_3;
  fVar6 = **(float **)(*(long *)PTR_DAT_08e722b0 + 0xb8);
  fVar14 = unaff_s15;
  fVar13 = fStack000000000000008c;
  fVar17 = fStack0000000000000088;
  fVar11 = fStack0000000000000038;
  fVar12 = fStack000000000000003c;
  fVar10 = fStack0000000000000034;
  fVar8 = unaff_s10;
  fVar9 = unaff_s9;
  fVar1 = unaff_s8;
  fVar18 = unaff_s11;
  fStack000000000000001c = fStack000000000000002c;
  fVar15 = fStack0000000000000028;
                    /* try { // try from 073ed8c0 to 074ed8c3 has its CatchHandler @ 073ed8c4 */
  if (fVar6 <= fVar7) {
                    /* catch(type#1 @ 088de0a8) { ... } // from try @ 073ed8a4 with catch @ 073ed8c4
                       catch(type#1 @ 088de0a8) { ... } // from try @ 073ed8c0 with catch @ 073ed8c4
                       try { // try from 073ed8c4 to 074ed8db has its CatchHandler @ 073ed890 */
    fVar8 = unaff_s11 * fVar16 +
            fStack0000000000000028 * unaff_s14 + fStack000000000000002c * param_3;
                    /* try { // try from 073ed8dc to 074ed8df has its CatchHandler @ 073ed90c */
                    /* try { // try from 073ed8e0 to 074ed90f has its CatchHandler @ 073ed890 */
    fStack000000000000001c = fStack000000000000002c - (param_3 * fVar8) / fVar7;
    fVar9 = unaff_s8 * fVar16 + unaff_s10 * unaff_s14 + unaff_s9 * param_3;
    fVar10 = fStack0000000000000034 * fVar16 +
             fStack000000000000003c * unaff_s14 + fStack0000000000000038 * param_3;
    fVar11 = fStack000000000000008c * fVar16 +
             unaff_s15 * unaff_s14 + fStack0000000000000088 * param_3;
    fVar14 = unaff_s15 - (unaff_s14 * fVar11) / fVar7;
    fVar13 = fStack000000000000008c - (fVar16 * fVar11) / fVar7;
    fVar17 = fStack0000000000000088 - (param_3 * fVar11) / fVar7;
    fVar11 = fStack0000000000000038 - (param_3 * fVar10) / fVar7;
    fVar12 = fStack000000000000003c - (unaff_s14 * fVar10) / fVar7;
    fVar10 = fStack0000000000000034 - (fVar16 * fVar10) / fVar7;
    fVar8 = unaff_s10 - (unaff_s14 * fVar9) / fVar7;
    fVar9 = unaff_s9 - (param_3 * fVar9) / fVar7;
    fVar1 = unaff_s8 - (fVar16 * fVar9) / fVar7;
    fVar18 = unaff_s11 - (fVar16 * fVar8) / fVar7;
    fVar15 = fStack0000000000000028 - (unaff_s14 * fVar8) / fVar7;
  }
  fStack000000000000000c = unaff_s11;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_0941112a == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_0941112a = '\x01';
    fVar6 = **(float **)(*(long *)puVar4 + 0xb8);
  }
  puVar2 = PTR_DAT_08e68e18;
  fVar16 = fVar13 * fVar13 + fVar14 * fVar14 + fVar17 * fVar17;
  if (fVar6 <= fVar16) {
    fVar6 = (fVar18 - fVar1) * fVar13 +
            (fVar15 - fVar8) * fVar14 + (fStack000000000000001c - fVar9) * fVar17;
    fVar14 = (fVar14 * fVar6) / fVar16;
    fVar17 = (fVar17 * fVar6) / fVar16;
    fVar16 = (fVar13 * fVar6) / fVar16;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar14 = *pfVar5;
    fVar17 = pfVar5[1];
    fVar16 = pfVar5[2];
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  puVar3 = PTR_DAT_08e6a6b8;
  if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar13 = DAT_018b0528;
  fVar6 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11);
  if (fVar6 <= DAT_018b0528) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar12 = fVar12 / fVar6;
    fVar11 = fVar11 / fVar6;
    fVar10 = fVar10 / fVar6;
  }
  if (DAT_094100b4 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b4 = '\x01';
  }
  fVar15 = (fVar8 + fVar14) - fVar15;
  fVar8 = (fVar9 + fVar17) - fStack000000000000001c;
  fVar18 = (fVar1 + fVar16) - fVar18;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar16 = SQRT(fVar18 * fVar18 + fVar15 * fVar15 + fVar8 * fVar8);
  if (fVar16 <= fVar13) {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar15 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar18 = pfVar5[2];
  }
  else {
    fVar15 = fVar15 / fVar16;
    fVar8 = fVar8 / fVar16;
    fVar18 = fVar18 / fVar16;
  }
  if (DAT_094100b5 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if ((*(int *)(*(long *)puVar3 + 0xe0) == 0) && (thunk_FUN_03cd7500(), DAT_094100b5 == '\0')) {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_094100b5 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  fVar6 = (fVar16 / (fVar10 * fVar18 + fVar12 * fVar15 + fVar11 * fVar8)) / fVar6;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  fVar16 = fStack0000000000000034 * fVar6;
  if (DAT_0941112a == '\0') {
    FUN_03c8f898(PTR_DAT_08e722b0);
    DAT_0941112a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar6;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar6;
  fVar11 = fStack000000000000008c * fStack000000000000008c +
           unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  fVar16 = fStack000000000000000c + fVar16;
  if (**(float **)(*(long *)puVar4 + 0xb8) <= fVar11) {
    fVar8 = fStack000000000000008c * (fVar16 - fStack0000000000000014) +
            unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - unaff_s9);
    fVar12 = (unaff_s15 * fVar8) / fVar11;
    fVar10 = (fStack0000000000000088 * fVar8) / fVar11;
    fVar8 = (fStack000000000000008c * fVar8) / fVar11;
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar8 = pfVar5[2];
  }
  if (0.0 <= fStack000000000000008c * fVar8 + unaff_s15 * fVar12 + fStack0000000000000088 * fVar10)
  {
    if (fVar11 < fVar12 * fVar12 + fVar10 * fVar10 + fVar8 * fVar8) {
      fVar12 = unaff_s15;
      fVar10 = fStack0000000000000088;
      fVar8 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_0940fff5 == '\0') {
      FUN_03c8f898(PTR_DAT_08e68e18);
      DAT_0940fff5 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar12 = *pfVar5;
    fVar10 = pfVar5[1];
    fVar8 = pfVar5[2];
  }
  if (DAT_09410538 == '\0') {
    FUN_03c8f898(PTR_DAT_08e6a6b8);
    DAT_09410538 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar12);
  fStack000000000000002c = fStack000000000000002c - (unaff_s9 + fVar10);
  fVar16 = fVar16 - (fStack0000000000000014 + fVar8);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  return SQRT(fVar16 * fVar16 +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


