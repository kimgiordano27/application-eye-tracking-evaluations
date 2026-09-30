/*
FUNCTION_NAME: OVRPlugin$$GetSystemHmd3DofModeEnabled
ENTRY_POINT: 0601cf8c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0601d3b4) */

float OVRPlugin__GetSystemHmd3DofModeEnabled(float param_1,float param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_NG;
  float *pfVar3;
  long *unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float unaff_s12;
  float fVar10;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar11;
  float in_s16;
  float fVar12;
  float fVar13;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float in_stack_00000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  fVar12 = unaff_s9;
  fVar5 = unaff_s8;
  if (!in_NG) {
    fVar5 = unaff_s8 * unaff_s12 + unaff_s10 * unaff_s14 + unaff_s9 * unaff_s13;
    in_s16 = unaff_s10 - (unaff_s14 * fVar5) / param_2;
    fVar12 = unaff_s9 - (unaff_s13 * fVar5) / param_2;
    fVar5 = unaff_s8 - (unaff_s12 * fVar5) / param_2;
  }
  fVar8 = unaff_s15;
  fVar7 = fStack000000000000008c;
  fVar11 = fStack0000000000000088;
  fStack0000000000000008 = fStack0000000000000038;
  fVar13 = fStack000000000000003c;
  fVar6 = in_stack_00000030._4_4_;
  if (param_1 <= param_2) {
    fVar6 = in_stack_00000030._4_4_ * unaff_s12 +
            fStack000000000000003c * unaff_s14 + fStack0000000000000038 * unaff_s13;
                    /* try { // try from 0601d010 to 0611d1cf has its CatchHandler @ 0601d010
                       catch() { ... } // from try @ 0601d010 with catch @ 0601d010
                       catch() { ... } // from try @ 0601d390 with catch @ 0601d010
                       catch() { ... } // from try @ 0601d5a0 with catch @ 0601d010
                       catch() { ... } // from try @ 0601d5f8 with catch @ 0601d010
                       catch() { ... } // from try @ 0601d638 with catch @ 0601d010 */
    fVar13 = fStack000000000000003c - (unaff_s14 * fVar6) / param_2;
    fStack0000000000000008 = fStack0000000000000038 - (unaff_s13 * fVar6) / param_2;
    fVar6 = in_stack_00000030._4_4_ - (unaff_s12 * fVar6) / param_2;
    fVar7 = fStack000000000000008c * unaff_s12 +
            unaff_s15 * unaff_s14 + fStack0000000000000088 * unaff_s13;
    fVar8 = unaff_s15 - (unaff_s14 * fVar7) / param_2;
    fVar11 = fStack0000000000000088 - (unaff_s13 * fVar7) / param_2;
    fVar7 = fStack000000000000008c - (unaff_s12 * fVar7) / param_2;
  }
  fStack000000000000000c = unaff_s11;
  fStack0000000000000010 = unaff_s9;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_07a4437f == '\0') {
    FUN_031f20f4();
    DAT_07a4437f = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar2 = PTR_DAT_0759b378;
  fVar4 = fVar7 * fVar7 + fVar8 * fVar8 + fVar11 * fVar11;
  if (param_1 <= fVar4) {
    fVar10 = (fStack0000000000000018 - fVar5) * fVar7 +
             (in_stack_00000020 - in_s16) * fVar8 + (fStack000000000000001c - fVar12) * fVar11;
    fVar8 = (fVar8 * fVar10) / fVar4;
    fVar11 = (fVar11 * fVar10) / fVar4;
    fVar4 = (fVar7 * fVar10) / fVar4;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar8 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  puVar1 = PTR_DAT_0759b370;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar7 = DAT_014ba9b8;
  fVar10 = SQRT(fVar6 * fVar6 + fVar13 * fVar13 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar10 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar13 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar6 = pfVar3[2];
  }
  else {
    fVar13 = fVar13 / fVar10;
    fVar9 = fStack0000000000000008 / fVar10;
    fVar6 = fVar6 / fVar10;
  }
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  in_stack_00000020 = (in_s16 + fVar8) - in_stack_00000020;
  fStack000000000000001c = (fVar12 + fVar11) - fStack000000000000001c;
  fStack0000000000000018 = (fVar5 + fVar4) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar12 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
                in_stack_00000020 * in_stack_00000020 +
                fStack000000000000001c * fStack000000000000001c);
  if (fVar12 <= fVar7) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    in_stack_00000020 = *pfVar3;
    fStack000000000000001c = pfVar3[1];
    fStack0000000000000018 = pfVar3[2];
  }
  else {
    in_stack_00000020 = in_stack_00000020 / fVar12;
    fStack000000000000001c = fStack000000000000001c / fVar12;
    fStack0000000000000018 = fStack0000000000000018 / fVar12;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) &&
     (Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(), DAT_07a3f7a9 == '\0')) {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar10 = (fVar12 / (fVar6 * fStack0000000000000018 +
                     fVar13 * in_stack_00000020 + fVar9 * fStack000000000000001c)) / fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  if (DAT_07a4437f == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    DAT_07a4437f = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar10;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar10;
  fVar12 = fStack000000000000008c * fStack000000000000008c +
           unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  fVar5 = fStack000000000000000c + in_stack_00000030._4_4_ * fVar10;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar12) {
    fVar8 = fStack000000000000008c * (fVar5 - fStack0000000000000014) +
            unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar13 = (unaff_s15 * fVar8) / fVar12;
    fVar6 = (fStack0000000000000088 * fVar8) / fVar12;
    fVar8 = (fStack000000000000008c * fVar8) / fVar12;
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar13 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (0.0 <= fStack000000000000008c * fVar8 + unaff_s15 * fVar13 + fStack0000000000000088 * fVar6) {
    if (fVar12 < fVar13 * fVar13 + fVar6 * fVar6 + fVar8 * fVar8) {
      fVar13 = unaff_s15;
      fVar6 = fStack0000000000000088;
      fVar8 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar13 = *pfVar3;
    fVar6 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar13);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar6);
  fVar5 = fVar5 - (fStack0000000000000014 + fVar8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(fVar5 * fVar5 +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


