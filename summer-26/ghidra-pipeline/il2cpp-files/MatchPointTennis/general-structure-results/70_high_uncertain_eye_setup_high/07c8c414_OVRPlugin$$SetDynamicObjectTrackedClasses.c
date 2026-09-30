/*
FUNCTION_NAME: OVRPlugin$$SetDynamicObjectTrackedClasses
ENTRY_POINT: 07c8c414
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c8c738) */

float OVRPlugin__SetDynamicObjectTrackedClasses(float param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int in_w8;
  long lVar3;
  float *pfVar4;
  long *unaff_x19;
  long unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float fVar10;
  float fVar11;
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
  
  if (in_w8 == 0) {
                    /* try { // try from 07c8c428 to 07d8c42b has its CatchHandler @ 07c8c43c */
    FUN_04447ba8();
    lVar3 = *unaff_x19;
    *(undefined1 *)(unaff_x23 + 0xc3) = 1;
                    /* catch() { ... } // from try @ 07c8c428 with catch @ 07c8c43c */
    param_1 = **(float **)(lVar3 + 0xb8);
    in_s16 = unaff_s10;
  }
  puVar1 = PTR_DAT_09f1e740;
  fVar6 = unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s15 * unaff_s15;
                    /* try { // try from 07c8c47c to 07d8c4a3 has its CatchHandler @ 07c8c4b8 */
  if (param_1 <= fVar6) {
    fVar5 = (fStack0000000000000018 - in_s18) * unaff_s8 +
            (fStack0000000000000020 - in_s16) * unaff_s9 +
            (fStack000000000000001c - in_s17) * unaff_s15;
    fVar8 = (unaff_s9 * fVar5) / fVar6;
    fVar11 = (unaff_s15 * fVar5) / fVar6;
    fVar6 = (unaff_s8 * fVar5) / fVar6;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
                    /* try { // try from 07c8c4a4 to 07d8c4af has its CatchHandler @ 07c8bdc8 */
                    /* try { // try from 07c8c4b0 to 07d8c4b7 has its CatchHandler @ 07c8c4b8 */
      DAT_0a51bf43 = '\x01';
      in_s16 = unaff_s10;
    }
                    /* catch() { ... } // from try @ 07c8c368 with catch @ 07c8c4b8
                       catch() { ... } // from try @ 07c8c394 with catch @ 07c8c4b8
                       catch() { ... } // from try @ 07c8c47c with catch @ 07c8c4b8
                       catch() { ... } // from try @ 07c8c4b0 with catch @ 07c8c4b8 */
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar4;
    fVar11 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
    in_s16 = unaff_s10;
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    in_s16 = unaff_s10;
  }
  fVar5 = DAT_01c7607c;
  fVar10 = SQRT(in_s20 * in_s20 + in_s19 * in_s19 + fStack0000000000000008 * fStack0000000000000008)
  ;
  if (fVar10 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
      in_s16 = unaff_s10;
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar7 = *pfVar4;
    fStack0000000000000008 = pfVar4[1];
    fVar9 = pfVar4[2];
  }
  else {
    fVar7 = in_s19 / fVar10;
    fStack0000000000000008 = fStack0000000000000008 / fVar10;
    fVar9 = in_s20 / fVar10;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  fStack0000000000000020 = (in_s16 + fVar8) - fStack0000000000000020;
  fStack000000000000001c = (in_s17 + fVar11) - fStack000000000000001c;
  fStack0000000000000018 = (in_s18 + fVar6) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar6 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               fStack0000000000000020 * fStack0000000000000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar6 <= fVar5) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fStack0000000000000020 = *pfVar4;
    fStack000000000000001c = pfVar4[1];
    fStack0000000000000018 = pfVar4[2];
  }
  else {
    fStack0000000000000020 = fStack0000000000000020 / fVar6;
    fStack000000000000001c = fStack000000000000001c / fVar6;
    fStack0000000000000018 = fStack0000000000000018 / fVar6;
  }
  if (DAT_0a51c009 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if ((*(int *)(*(long *)puVar2 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c009 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar10 = (fVar6 / (fVar9 * fStack0000000000000018 +
                    fVar7 * fStack0000000000000020 + fStack0000000000000008 * fStack000000000000001c
                    )) / fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  if (*(char *)(unaff_x23 + 0xc3) == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    *(undefined1 *)(unaff_x23 + 0xc3) = 1;
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar10;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar10;
  fVar6 = fStack000000000000008c * fStack000000000000008c +
          fStack0000000000000030 * fStack0000000000000030 +
          fStack0000000000000088 * fStack0000000000000088;
  fStack000000000000000c = fStack000000000000000c + fStack0000000000000034 * fVar10;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar6) {
    fVar11 = fStack000000000000008c * (fStack000000000000000c - fStack0000000000000014) +
             fStack0000000000000030 * (fStack0000000000000028 - fStack0000000000000024) +
             fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar5 = (fStack0000000000000030 * fVar11) / fVar6;
    fVar8 = (fStack0000000000000088 * fVar11) / fVar6;
    fVar11 = (fStack000000000000008c * fVar11) / fVar6;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar5 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar11 = pfVar4[2];
  }
  if (0.0 <= fStack000000000000008c * fVar11 +
             fStack0000000000000030 * fVar5 + fStack0000000000000088 * fVar8) {
    if (fVar6 < fVar5 * fVar5 + fVar8 * fVar8 + fVar11 * fVar11) {
      fVar5 = fStack0000000000000030;
      fVar8 = fStack0000000000000088;
      fVar11 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar5 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar11 = pfVar4[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar5);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar8);
  fStack000000000000000c = fStack000000000000000c - (fStack0000000000000014 + fVar11);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(fStack000000000000000c * fStack000000000000000c +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


