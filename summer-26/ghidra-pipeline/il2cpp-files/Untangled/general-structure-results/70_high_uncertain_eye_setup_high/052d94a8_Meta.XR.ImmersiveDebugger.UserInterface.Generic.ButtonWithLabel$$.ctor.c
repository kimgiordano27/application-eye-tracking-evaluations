/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$.ctor
ENTRY_POINT: 052d94a8
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel___ctor
               (float param_1,float param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int in_w8;
  float *pfVar4;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float fVar8;
  float unaff_s10;
  float fVar9;
  float unaff_s11;
  float fStack000000000000004c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float in_stack_00000078;
  
  if (in_w8 == 0) {
    FUN_02f07e70(PTR_DAT_06d03010);
    *(undefined1 *)(unaff_x21 + 0xbf2) = 1;
  }
  puVar3 = PTR_DAT_06d03010;
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = PTR_DAT_06d02c10;
  fVar1 = DAT_013f6c1c;
  fVar5 = SQRT(unaff_s11 * unaff_s11 + param_1 * param_1 + param_2 * param_2);
  if (fVar5 <= DAT_013f6c1c) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fStack000000000000004c = *pfVar4;
    param_2 = pfVar4[1];
    fVar5 = pfVar4[2];
  }
  else {
    fStack000000000000004c = param_1 / fVar5;
    param_2 = param_2 / fVar5;
    fVar5 = unaff_s11 / fVar5;
  }
  if (*(char *)(unaff_x21 + 0xbf2) == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    *(undefined1 *)(unaff_x21 + 0xbf2) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar6 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9);
  if (fVar6 <= fVar1) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar9 = *pfVar4;
    fVar8 = pfVar4[1];
    fVar6 = pfVar4[2];
  }
  else {
    fVar9 = unaff_s10 / fVar6;
    fVar8 = unaff_s9 / fVar6;
    fVar6 = unaff_s8 / fVar6;
  }
  if (*(char *)(unaff_x21 + 0xbf2) == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    *(undefined1 *)(unaff_x21 + 0xbf2) = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  fVar7 = SQRT(in_stack_00000078 * in_stack_00000078 +
               fStack0000000000000070 * fStack0000000000000070 +
               fStack0000000000000074 * fStack0000000000000074);
  if (fVar7 <= fVar1) {
    if (DAT_071babf5 == '\0') {
      FUN_02f07e70(PTR_DAT_06d02c10);
      DAT_071babf5 = '\x01';
    }
    pfVar4 = *(float **)(*(long *)puVar2 + 0xb8);
    fStack0000000000000070 = *pfVar4;
    fStack0000000000000074 = pfVar4[1];
    in_stack_00000078 = pfVar4[2];
  }
  else {
    fStack0000000000000070 = fStack0000000000000070 / fVar7;
    fStack0000000000000074 = fStack0000000000000074 / fVar7;
    in_stack_00000078 = in_stack_00000078 / fVar7;
  }
  return ABS(fVar5 * in_stack_00000078 +
             fStack000000000000004c * fStack0000000000000070 + param_2 * fStack0000000000000074) <
         ABS(fVar5 * fVar6 + fStack000000000000004c * fVar9 + param_2 * fVar8);
}


