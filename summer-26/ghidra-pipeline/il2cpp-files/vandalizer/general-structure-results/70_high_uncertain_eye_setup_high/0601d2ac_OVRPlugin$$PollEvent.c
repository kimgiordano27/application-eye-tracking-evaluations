/*
FUNCTION_NAME: OVRPlugin$$PollEvent
ENTRY_POINT: 0601d2ac
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0601d3b4) */

float OVRPlugin__PollEvent
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                long param_5)

{
  float *pfVar1;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float fVar5;
  float unaff_s14;
  undefined8 in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  param_1 = unaff_s13 - param_1;
  in_stack_00000018 = unaff_s14 - in_stack_00000018;
  if (*(int *)(param_5 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
                    /* try { // try from 0601d2cc to 0611d2d7 has its CatchHandler @ 0601d5bc */
  fVar5 = SQRT(in_stack_00000018 * in_stack_00000018 + unaff_s9 * unaff_s9 + param_1 * param_1);
  if (fVar5 <= unaff_s8) {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
                    /* try { // try from 0601d318 to 0611d32b has its CatchHandler @ 0601d5bc */
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar2 = *pfVar1;
    param_1 = pfVar1[1];
    in_stack_00000018 = pfVar1[2];
  }
  else {
    fVar2 = unaff_s9 / fVar5;
                    /* try { // try from 0601d2f0 to 0611d2ff has its CatchHandler @ 0601d5b8 */
    param_1 = param_1 / fVar5;
    in_stack_00000018 = in_stack_00000018 / fVar5;
  }
  if (DAT_07a3f7a9 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3f7a9 = '\x01';
  }
                    /* try { // try from 0601d364 to 0611d38f has its CatchHandler @ 0601d5d4 */
  if ((*(int *)(*unaff_x22 + 0xe4) == 0) &&
     (Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(), DAT_07a3f7a9 == '\0')) {
    FUN_031f20f4(PTR_DAT_0759b370);
                    /* try { // try from 0601d390 to 0611d58f has its CatchHandler @ 0601d010 */
    DAT_07a3f7a9 = '\x01';
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar5 = (fVar5 / (unaff_s11 * in_stack_00000018 + param_4 * fVar2 + unaff_s10 * param_1)) /
          unaff_s12;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x37f) == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x23 + 0x37f) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar5;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar5;
  fVar2 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + fStack0000000000000034 * fVar5;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar2) {
    fVar4 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - in_stack_00000020._4_4_) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar5 = (fStack0000000000000030 * fVar4) / fVar2;
    fVar3 = (fStack0000000000000088 * fVar4) / fVar2;
    fVar4 = (fStack000000000000008c * fVar4) / fVar2;
  }
  else {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (0.0 <= fStack000000000000008c * fVar4 +
             fStack0000000000000030 * fVar5 + fStack0000000000000088 * fVar3) {
    if (fVar2 < fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) {
      fVar5 = fStack0000000000000030;
      fVar3 = fStack0000000000000088;
      fVar4 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    fVar5 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (in_stack_00000020._4_4_ + fVar5);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar3);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar4);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


