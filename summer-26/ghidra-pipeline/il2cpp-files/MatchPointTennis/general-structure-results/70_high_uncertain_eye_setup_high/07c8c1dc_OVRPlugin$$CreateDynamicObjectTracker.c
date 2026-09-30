/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTracker
ENTRY_POINT: 07c8c1dc
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

float OVRPlugin__CreateDynamicObjectTracker
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float in_stack_00000018;
  
                    /* try { // try from 07c8c210 to 07d8c237 has its CatchHandler @ 07c8c400 */
  param_4 = param_4 - param_1;
  param_5 = param_5 - param_2;
  param_6 = param_6 - param_3;
  fStack0000000000000014 = fStack0000000000000014 - fStack0000000000000004;
  in_stack_00000018 = in_stack_00000018 - in_stack_00000008;
  fStack0000000000000010 = fStack0000000000000010 - fStack0000000000000000;
                    /* try { // try from 07c8c240 to 07d8c243 has its CatchHandler @ 07c8c248 */
                    /* try { // try from 07c8c244 to 07d8c263 has its CatchHandler @ 07c8bdc8 */
                    /* catch() { ... } // from try @ 07c8c240 with catch @ 07c8c248 */
                    /* catch() { ... } // from try @ 07c8c13c with catch @ 07c8c24c */
  fVar16 = param_5 * in_stack_00000018 - param_6 * fStack0000000000000014;
                    /* catch() { ... } // from try @ 07c8c110 with catch @ 07c8c250 */
                    /* catch() { ... } // from try @ 07c8c0b4 with catch @ 07c8c254 */
  fVar15 = param_6 * fStack0000000000000010 - param_4 * in_stack_00000018;
  fVar14 = param_4 * fStack0000000000000014 - param_5 * fStack0000000000000010;
                    /* try { // try from 07c8c264 to 07d8c267 has its CatchHandler @ 07c8c3b8 */
                    /* try { // try from 07c8c268 to 07d8c367 has its CatchHandler @ 07c8bdc8 */
  if (DAT_0a5233ad == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a5233ad = '\x01';
  }
  puVar3 = PTR_DAT_09f1f580;
  fVar6 = fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15;
  fVar5 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8);
  fVar13 = fStack0000000000000010;
  fVar10 = in_stack_00000018;
  fVar17 = fStack0000000000000014;
  fVar7 = param_5;
  fVar21 = param_4;
  fVar9 = param_6;
  fVar18 = fStack0000000000000000;
  fVar19 = fStack0000000000000004;
  fVar20 = in_stack_00000008;
  fVar8 = param_3;
  fVar11 = param_2;
  fVar12 = param_1;
  if (fVar5 <= fVar6) {
    fVar7 = param_3 * fVar14 + param_1 * fVar16 + param_2 * fVar15;
    fVar12 = param_1 - (fVar16 * fVar7) / fVar6;
    fVar11 = param_2 - (fVar15 * fVar7) / fVar6;
    fVar8 = param_3 - (fVar14 * fVar7) / fVar6;
    fVar7 = in_stack_00000008 * fVar14 +
            fStack0000000000000000 * fVar16 + fStack0000000000000004 * fVar15;
    fVar18 = fStack0000000000000000 - (fVar16 * fVar7) / fVar6;
    fVar19 = fStack0000000000000004 - (fVar15 * fVar7) / fVar6;
    fVar20 = in_stack_00000008 - (fVar14 * fVar7) / fVar6;
    fVar9 = param_6 * fVar14 + param_4 * fVar16 + param_5 * fVar15;
    fVar21 = param_4 - (fVar16 * fVar9) / fVar6;
    fVar7 = param_5 - (fVar15 * fVar9) / fVar6;
    fVar9 = param_6 - (fVar14 * fVar9) / fVar6;
    fVar10 = in_stack_00000018 * fVar14 +
             fStack0000000000000010 * fVar16 + fStack0000000000000014 * fVar15;
    fVar13 = fStack0000000000000010 - (fVar16 * fVar10) / fVar6;
    fVar17 = fStack0000000000000014 - (fVar15 * fVar10) / fVar6;
    fVar10 = in_stack_00000018 - (fVar14 * fVar10) / fVar6;
  }
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
    fVar5 = **(float **)(*(long *)puVar3 + 0xb8);
  }
  puVar1 = PTR_DAT_09f1e740;
  fVar14 = fVar10 * fVar10 + fVar13 * fVar13 + fVar17 * fVar17;
  if (fVar5 <= fVar14) {
    fVar15 = (fVar8 - fVar20) * fVar10 + (fVar12 - fVar18) * fVar13 + (fVar11 - fVar19) * fVar17;
    fVar16 = (fVar13 * fVar15) / fVar14;
    fVar13 = (fVar17 * fVar15) / fVar14;
    fVar14 = (fVar10 * fVar15) / fVar14;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar16 = *pfVar4;
    fVar13 = pfVar4[1];
    fVar14 = pfVar4[2];
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar2 = PTR_DAT_09f1e748;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar15 = DAT_01c7607c;
  fVar10 = SQRT(fVar9 * fVar9 + fVar21 * fVar21 + fVar7 * fVar7);
  if (fVar10 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar21 = *pfVar4;
    fVar7 = pfVar4[1];
    fVar9 = pfVar4[2];
  }
  else {
    fVar21 = fVar21 / fVar10;
    fVar7 = fVar7 / fVar10;
    fVar9 = fVar9 / fVar10;
  }
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  fVar12 = (fVar18 + fVar16) - fVar12;
  fVar11 = (fVar19 + fVar13) - fVar11;
  fVar8 = (fVar20 + fVar14) - fVar8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar14 = SQRT(fVar8 * fVar8 + fVar12 * fVar12 + fVar11 * fVar11);
  if (fVar14 <= fVar15) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar12 = *pfVar4;
    fVar11 = pfVar4[1];
    fVar8 = pfVar4[2];
  }
  else {
    fVar12 = fVar12 / fVar14;
    fVar11 = fVar11 / fVar14;
    fVar8 = fVar8 / fVar14;
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
  fVar10 = (fVar14 / (fVar9 * fVar8 + fVar21 * fVar12 + fVar7 * fVar11)) / fVar10;
  if (fVar10 < 0.0) {
    fVar10 = 0.0;
  }
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  param_1 = param_1 + param_4 * fVar10;
  param_2 = param_2 + param_5 * fVar10;
  fVar14 = in_stack_00000018 * in_stack_00000018 +
           fStack0000000000000010 * fStack0000000000000010 +
           fStack0000000000000014 * fStack0000000000000014;
  param_3 = param_3 + param_6 * fVar10;
  if (**(float **)(*(long *)puVar3 + 0xb8) <= fVar14) {
    fVar7 = in_stack_00000018 * (param_3 - in_stack_00000008) +
            fStack0000000000000010 * (param_1 - fStack0000000000000000) +
            fStack0000000000000014 * (param_2 - fStack0000000000000004);
    fVar15 = (fStack0000000000000010 * fVar7) / fVar14;
    fVar16 = (fStack0000000000000014 * fVar7) / fVar14;
    fVar7 = (in_stack_00000018 * fVar7) / fVar14;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar4;
    fVar16 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  if (0.0 <= in_stack_00000018 * fVar7 +
             fStack0000000000000010 * fVar15 + fStack0000000000000014 * fVar16) {
    if (fVar14 < fVar15 * fVar15 + fVar16 * fVar16 + fVar7 * fVar7) {
      fVar15 = fStack0000000000000010;
      fVar16 = fStack0000000000000014;
      fVar7 = in_stack_00000018;
    }
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar1 + 0xb8);
    fVar15 = *pfVar4;
    fVar16 = pfVar4[1];
    fVar7 = pfVar4[2];
  }
  if (DAT_0a51c00a == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51c00a = '\x01';
  }
  param_1 = param_1 - (fStack0000000000000000 + fVar15);
  param_2 = param_2 - (fStack0000000000000004 + fVar16);
  param_3 = param_3 - (in_stack_00000008 + fVar7);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  return SQRT(param_3 * param_3 + param_2 * param_2 + param_1 * param_1);
}


