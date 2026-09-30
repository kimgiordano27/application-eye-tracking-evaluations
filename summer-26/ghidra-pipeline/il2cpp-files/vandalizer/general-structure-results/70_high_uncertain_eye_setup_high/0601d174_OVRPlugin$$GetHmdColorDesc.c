/*
FUNCTION_NAME: OVRPlugin$$GetHmdColorDesc
ENTRY_POINT: 0601d174
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0601d3b4) */

float OVRPlugin__GetHmdColorDesc(float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  float *pfVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s10;
  float unaff_s11;
  float fVar5;
  float fVar6;
  float unaff_s13;
  float fVar7;
  float unaff_s15;
  float in_s16;
  float in_s17;
  float in_s18;
  float in_s19;
  float in_s20;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000088;
  float fStack000000000000008c;
  
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  puVar1 = PTR_DAT_0759b370;
                    /* try { // try from 0601d1d0 to 0611d1d7 has its CatchHandler @ 0601d5d0 */
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
                    /* try { // try from 0601d1ec to 0611d1ef has its CatchHandler @ 0601d5a4 */
                    /* try { // try from 0601d1f0 to 0611d1fb has its CatchHandler @ 0601d5cc */
    in_s16 = unaff_s10;
    in_s17 = unaff_s11;
    in_s18 = unaff_s13;
  }
  fVar4 = DAT_014ba9b8;
                    /* try { // try from 0601d200 to 0611d20b has its CatchHandler @ 0601d5c4 */
                    /* try { // try from 0601d210 to 0611d217 has its CatchHandler @ 0601d5c8 */
  fVar6 = SQRT(in_s20 * in_s20 + in_s19 * in_s19 + fStack0000000000000008 * fStack0000000000000008);
  if (fVar6 <= DAT_014ba9b8) {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
                    /* try { // try from 0601d250 to 0611d25b has its CatchHandler @ 0601d5b8 */
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
      in_s16 = unaff_s10;
      in_s17 = unaff_s11;
      in_s18 = unaff_s13;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar3 = *pfVar2;
    fStack0000000000000008 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  else {
    fVar3 = in_s19 / fVar6;
    fStack0000000000000008 = fStack0000000000000008 / fVar6;
    fVar5 = in_s20 / fVar6;
  }
                    /* try { // try from 0601d270 to 0611d27b has its CatchHandler @ 0601d5b4 */
  if (DAT_07a3ca81 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3ca81 = '\x01';
  }
  fStack0000000000000020 = (in_s16 + param_3 / param_2) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + (unaff_s15 * param_1) / param_2) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + (unaff_s8 * param_1) / param_2) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar7 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar7 <= fVar4) {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fStack0000000000000020 = *pfVar2;
    fStack000000000000001c = pfVar2[1];
    fStack0000000000000018 = pfVar2[2];
  }
  else {
    fStack0000000000000020 = fStack0000000000000020 / fVar7;
    fStack000000000000001c = fStack000000000000001c / fVar7;
    fStack0000000000000018 = fStack0000000000000018 / fVar7;
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
  fVar6 = (fVar7 / (fVar5 * fStack0000000000000018 +
                   fVar3 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c)
          ) / fVar6;
  if (fVar6 < 0.0) {
    fVar6 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0x37f) == '\0') {
    FUN_031f20f4(PTR_DAT_075b9420);
    *(undefined1 *)(unaff_x23 + 0x37f) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar6;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar6;
  fVar4 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar6;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar4) {
    fVar5 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
            fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar6 = (fStack0000000000000030 * fVar5) / fVar4;
    fVar3 = (fStack0000000000000088 * fVar5) / fVar4;
    fVar5 = (fStack000000000000008c * fVar5) / fVar4;
  }
  else {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar6 = *pfVar2;
    fVar3 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (0.0 <= fStack000000000000008c * fVar5 +
             fStack0000000000000030 * fVar6 + fStack0000000000000088 * fVar3) {
    if (fVar4 < fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5) {
      fVar6 = fStack0000000000000030;
      fVar3 = fStack0000000000000088;
      fVar5 = fStack000000000000008c;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar2 = *(float **)(*unaff_x20 + 0xb8);
    fVar6 = *pfVar2;
    fVar3 = pfVar2[1];
    fVar5 = pfVar2[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar6);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar3);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar5);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


