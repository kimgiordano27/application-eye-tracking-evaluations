/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 0601cebc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0601d3b4) */

float OVRPlugin__GetLocalTrackingSpaceRecenterCount
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
                float param_6)

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
  float unaff_s9;
  float fVar13;
  float fVar14;
  float unaff_s10;
  float unaff_s11;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  
  param_1 = param_1 - param_2;
  fVar17 = param_6 * unaff_s15 - in_s16 * param_4;
  fVar15 = in_s16 * param_5 - in_s17 * unaff_s15;
  fStack0000000000000034 = param_6;
  fStack0000000000000038 = in_s17;
  fStack000000000000003c = in_s16;
  fStack0000000000000088 = param_5;
  fStack000000000000008c = param_4;
  if (in_w8 == 0) {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x19 + 0x545) = 1;
  }
  puVar4 = PTR_DAT_075b9420;
  fVar7 = fVar15 * fVar15 + param_1 * param_1 + fVar17 * fVar17;
  fVar6 = **(float **)(*(long *)PTR_DAT_075b9420 + 0xb8);
  fVar13 = unaff_s15;
  fVar16 = fStack000000000000008c;
  fVar18 = fStack0000000000000088;
  fVar11 = fStack0000000000000038;
  fVar12 = fStack000000000000003c;
  fVar10 = fStack0000000000000034;
  fVar8 = unaff_s10;
  fVar9 = unaff_s9;
  fVar1 = unaff_s8;
  fVar19 = unaff_s11;
  fStack000000000000001c = fStack000000000000002c;
  fVar14 = fStack0000000000000028;
  if (fVar6 <= fVar7) {
    fVar8 = unaff_s11 * fVar15 + fStack0000000000000028 * param_1 + fStack000000000000002c * fVar17;
    fStack000000000000001c = fStack000000000000002c - (fVar17 * fVar8) / fVar7;
    fVar9 = unaff_s8 * fVar15 + unaff_s10 * param_1 + unaff_s9 * fVar17;
    fVar10 = fStack0000000000000034 * fVar15 +
             fStack000000000000003c * param_1 + fStack0000000000000038 * fVar17;
    fVar11 = fStack000000000000008c * fVar15 + unaff_s15 * param_1 + fStack0000000000000088 * fVar17
    ;
    fVar13 = unaff_s15 - (param_1 * fVar11) / fVar7;
    fVar16 = fStack000000000000008c - (fVar15 * fVar11) / fVar7;
    fVar18 = fStack0000000000000088 - (fVar17 * fVar11) / fVar7;
    fVar11 = fStack0000000000000038 - (fVar17 * fVar10) / fVar7;
    fVar12 = fStack000000000000003c - (param_1 * fVar10) / fVar7;
    fVar10 = fStack0000000000000034 - (fVar15 * fVar10) / fVar7;
    fVar8 = unaff_s10 - (param_1 * fVar9) / fVar7;
    fVar9 = unaff_s9 - (fVar17 * fVar9) / fVar7;
    fVar1 = unaff_s8 - (fVar15 * fVar9) / fVar7;
    fVar19 = unaff_s11 - (fVar15 * fVar8) / fVar7;
    fVar14 = fStack0000000000000028 - (param_1 * fVar8) / fVar7;
  }
  fStack000000000000000c = unaff_s11;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_07a4437f == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a4437f = '\x01';
    fVar6 = **(float **)(*(long *)puVar4 + 0xb8);
  }
  puVar3 = PTR_DAT_0759b378;
  fVar15 = fVar16 * fVar16 + fVar13 * fVar13 + fVar18 * fVar18;
  if (fVar6 <= fVar15) {
    fVar17 = (fVar19 - fVar1) * fVar16 +
             (fVar14 - fVar8) * fVar13 + (fStack000000000000001c - fVar9) * fVar18;
    fVar13 = (fVar13 * fVar17) / fVar15;
    fVar18 = (fVar18 * fVar17) / fVar15;
    fVar15 = (fVar16 * fVar17) / fVar15;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar13 = *pfVar5;
    fVar18 = pfVar5[1];
    fVar15 = pfVar5[2];
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  puVar2 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar17 = DAT_014ba9b8;
  fVar16 = SQRT(fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11);
  if (fVar16 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar12 = *pfVar5;
    fVar11 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar12 = fVar12 / fVar16;
    fVar11 = fVar11 / fVar16;
    fVar10 = fVar10 / fVar16;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  fVar14 = (fVar8 + fVar13) - fVar14;
  fVar8 = (fVar9 + fVar18) - fStack000000000000001c;
  fVar19 = (fVar1 + fVar15) - fVar19;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar15 = SQRT(fVar19 * fVar19 + fVar14 * fVar14 + fVar8 * fVar8);
  if (fVar15 <= fVar17) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar14 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar19 = pfVar5[2];
  }
  else {
    fVar14 = fVar14 / fVar15;
    fVar8 = fVar8 / fVar15;
    fVar19 = fVar19 / fVar15;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) &&
     (Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(), DAT_07a3f7a9 == '\0')) {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar17 = fStack0000000000000088;
  fVar16 = (fVar15 / (fVar10 * fVar19 + fVar12 * fVar14 + fVar11 * fVar8)) / fVar16;
  if (fVar16 < 0.0) {
    fVar16 = 0.0;
  }
  fVar15 = fStack0000000000000034 * fVar16;
  if (DAT_07a4437f == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a4437f = '\x01';
  }
  fVar11 = fStack000000000000008c;
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar16;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar16;
  fVar12 = fStack000000000000008c * fStack000000000000008c + unaff_s15 * unaff_s15 + fVar17 * fVar17
  ;
  fVar15 = fStack000000000000000c + fVar15;
  if (**(float **)(*(long *)puVar4 + 0xb8) <= fVar12) {
    fVar9 = fStack000000000000008c * (fVar15 - fStack0000000000000014) +
            unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
            fVar17 * (fStack000000000000002c - unaff_s9);
    fVar10 = (unaff_s15 * fVar9) / fVar12;
    fVar8 = (fVar17 * fVar9) / fVar12;
    fVar9 = (fStack000000000000008c * fVar9) / fVar12;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar10 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar9 = pfVar5[2];
  }
  if (0.0 <= fVar11 * fVar9 + unaff_s15 * fVar10 + fVar17 * fVar8) {
    if (fVar12 < fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) {
      fVar10 = unaff_s15;
      fVar8 = fVar17;
      fVar9 = fVar11;
    }
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar10 = *pfVar5;
    fVar8 = pfVar5[1];
    fVar9 = pfVar5[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar10);
  fStack000000000000002c = fStack000000000000002c - (unaff_s9 + fVar8);
  fVar15 = fVar15 - (fStack0000000000000014 + fVar9);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(fVar15 * fVar15 +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


