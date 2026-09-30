/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 07c8c350
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

float OVRPlugin__DestroyDynamicObjectTracker
                (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  undefined *puVar1;
  undefined *puVar2;
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
  float unaff_s12;
  float fVar9;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar10;
  float in_s16;
  float fVar11;
  undefined8 in_stack_00000008;
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
  
  fVar8 = unaff_s15;
  fVar6 = fStack000000000000008c;
  fVar10 = fStack0000000000000088;
  fVar7 = fStack0000000000000038;
  fVar11 = fStack000000000000003c;
  fVar5 = in_stack_00000030._4_4_;
                    /* try { // try from 07c8c368 to 07d8c373 has its CatchHandler @ 07c8c4b8 */
  if (param_1 <= param_2) {
                    /* try { // try from 07c8c378 to 07d8c37b has its CatchHandler @ 07c8c3ec */
                    /* try { // try from 07c8c37c to 07d8c383 has its CatchHandler @ 07c8c3e8 */
    fVar5 = in_stack_00000030._4_4_ * unaff_s12 +
            fStack000000000000003c * unaff_s14 + fStack0000000000000038 * unaff_s13;
                    /* try { // try from 07c8c394 to 07d8c3a7 has its CatchHandler @ 07c8c4b8 */
    fVar11 = fStack000000000000003c - (unaff_s14 * fVar5) / param_2;
                    /* try { // try from 07c8c3a8 to 07d8c3ab has its CatchHandler @ 07c8bdc8 */
    fVar7 = fStack0000000000000038 - (unaff_s13 * fVar5) / param_2;
                    /* try { // try from 07c8c3ac to 07d8c3af has its CatchHandler @ 07c8c3d4 */
    fVar5 = in_stack_00000030._4_4_ - (unaff_s12 * fVar5) / param_2;
                    /* catch() { ... } // from try @ 07c8bfac with catch @ 07c8c3c8 */
                    /* catch() { ... } // from try @ 07c8bf94 with catch @ 07c8c3cc */
                    /* catch() { ... } // from try @ 07c8bf78 with catch @ 07c8c3d0 */
                    /* catch() { ... } // from try @ 07c8c3ac with catch @ 07c8c3d4 */
                    /* catch() { ... } // from try @ 07c8bf48 with catch @ 07c8c3d8 */
    fVar6 = fStack000000000000008c * unaff_s12 +
            unaff_s15 * unaff_s14 + fStack0000000000000088 * unaff_s13;
                    /* catch() { ... } // from try @ 07c8c37c with catch @ 07c8c3e8 */
                    /* catch() { ... } // from try @ 07c8c378 with catch @ 07c8c3ec */
                    /* catch() { ... } // from try @ 07c8c1a8 with catch @ 07c8c3fc */
    fVar8 = unaff_s15 - (unaff_s14 * fVar6) / param_2;
                    /* catch() { ... } // from try @ 07c8c210 with catch @ 07c8c400 */
    fVar10 = fStack0000000000000088 - (unaff_s13 * fVar6) / param_2;
                    /* catch() { ... } // from try @ 07c8c054 with catch @ 07c8c404 */
    fVar6 = fStack000000000000008c - (unaff_s12 * fVar6) / param_2;
  }
                    /* catch() { ... } // from try @ 07c8bff4 with catch @ 07c8c408 */
  fStack0000000000000010 = unaff_s9;
  fStack0000000000000014 = unaff_s8;
  fStack0000000000000024 = unaff_s10;
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8();
    DAT_0a51c0c3 = '\x01';
    param_1 = **(float **)(*unaff_x19 + 0xb8);
  }
  puVar1 = PTR_DAT_09f1e740;
  fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar10 * fVar10;
  if (param_1 <= fVar4) {
    fVar9 = (fStack0000000000000018 - (unaff_s8 - param_3)) * fVar6 +
            (in_stack_00000020 - in_s16) * fVar8 +
            (fStack000000000000001c - (unaff_s9 - param_5)) * fVar10;
    fVar8 = (fVar8 * fVar9) / fVar4;
    fVar10 = (fVar10 * fVar9) / fVar4;
    fVar4 = (fVar6 * fVar9) / fVar4;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar4 = pfVar3[2];
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar6 = DAT_01c7607c;
  fVar9 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar7 * fVar7);
  if (fVar9 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  else {
    fVar11 = fVar11 / fVar9;
    fVar7 = fVar7 / fVar9;
    fVar5 = fVar5 / fVar9;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  in_stack_00000020 = (in_s16 + fVar8) - in_stack_00000020;
  fStack000000000000001c = ((unaff_s9 - param_5) + fVar10) - fStack000000000000001c;
  fStack0000000000000018 = ((unaff_s8 - param_3) + fVar4) - fStack0000000000000018;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar8 = SQRT(fStack0000000000000018 * fStack0000000000000018 +
               in_stack_00000020 * in_stack_00000020 +
               fStack000000000000001c * fStack000000000000001c);
  if (fVar8 <= fVar6) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    in_stack_00000020 = *pfVar3;
    fStack000000000000001c = pfVar3[1];
    fStack0000000000000018 = pfVar3[2];
  }
  else {
    in_stack_00000020 = in_stack_00000020 / fVar8;
    fStack000000000000001c = fStack000000000000001c / fVar8;
    fStack0000000000000018 = fStack0000000000000018 / fVar8;
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
  fVar9 = (fVar8 / (fVar5 * fStack0000000000000018 +
                   fVar11 * in_stack_00000020 + fVar7 * fStack000000000000001c)) / fVar9;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 + fStack000000000000003c * fVar9;
  fStack000000000000002c = fStack000000000000002c + fStack0000000000000038 * fVar9;
  fVar7 = fStack000000000000008c * fStack000000000000008c +
          unaff_s15 * unaff_s15 + fStack0000000000000088 * fStack0000000000000088;
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + in_stack_00000030._4_4_ * fVar9;
  if (**(float **)(*unaff_x19 + 0xb8) <= fVar7) {
    fVar8 = fStack000000000000008c * (in_stack_00000008._4_4_ - fStack0000000000000014) +
            unaff_s15 * (fStack0000000000000028 - fStack0000000000000024) +
            fStack0000000000000088 * (fStack000000000000002c - fStack0000000000000010);
    fVar11 = (unaff_s15 * fVar8) / fVar7;
    fVar5 = (fStack0000000000000088 * fVar8) / fVar7;
    fVar8 = (fStack000000000000008c * fVar8) / fVar7;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (0.0 <= fStack000000000000008c * fVar8 + unaff_s15 * fVar11 + fStack0000000000000088 * fVar5) {
    if (fVar7 < fVar11 * fVar11 + fVar5 * fVar5 + fVar8 * fVar8) {
      fVar11 = unaff_s15;
      fVar5 = fStack0000000000000088;
      fVar8 = fStack000000000000008c;
    }
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar11 = *pfVar3;
    fVar5 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  fStack0000000000000028 = fStack0000000000000028 - (fStack0000000000000024 + fVar11);
  fStack000000000000002c = fStack000000000000002c - (fStack0000000000000010 + fVar5);
  in_stack_00000008._4_4_ = in_stack_00000008._4_4_ - (fStack0000000000000014 + fVar8);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(in_stack_00000008._4_4_ * in_stack_00000008._4_4_ +
              fStack000000000000002c * fStack000000000000002c +
              fStack0000000000000028 * fStack0000000000000028);
}


