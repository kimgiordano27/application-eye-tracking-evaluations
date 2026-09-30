/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 07a34b28
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EnqueueSubmitLayer
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack000000000000000c;
  float fStack0000000000000014;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack000000000000007c;
  float fStack00000000000000a0;
  float fStack00000000000000a4;
  float in_stack_000000a8;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  float in_stack_000000b8;
  
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  param_4 = param_4 - param_1;
  fVar11 = param_5 - param_2;
  param_6 = param_6 - param_3;
  fStack0000000000000014 = param_5;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar2 = PTR_DAT_09285d60;
  fStack000000000000007c = DAT_01aecf88;
  fVar5 = SQRT(param_6 * param_6 + param_4 * param_4 + fVar11 * fVar11);
  fStack000000000000000c = fVar11;
  if (fVar5 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar9 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar5 = pfVar3[2];
  }
  else {
    fVar9 = param_4 / fVar5;
    fVar11 = fVar11 / fVar5;
    fVar5 = param_6 / fVar5;
  }
  fStack000000000000001c = fStack00000000000000a4;
  fStack0000000000000024 = param_6;
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  fStack00000000000000a0 = fStack00000000000000a0 - param_1;
  fVar10 = fStack000000000000001c - param_2;
  in_stack_000000a8 = in_stack_000000a8 - param_3;
  fStack000000000000002c = param_2;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar8 = SQRT(in_stack_000000a8 * in_stack_000000a8 +
               fStack00000000000000a0 * fStack00000000000000a0 + fVar10 * fVar10);
  if (fVar8 <= fStack000000000000007c) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)puVar2 + 0xb8);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar6 = fStack00000000000000a0 / fVar8;
    fVar7 = fVar10 / fVar8;
    fVar8 = in_stack_000000a8 / fVar8;
  }
  if (ABS(fVar5 * fVar8 + fVar9 * fVar6 + fVar11 * fVar7) <= DAT_01aec284) {
    fVar9 = fStack0000000000000024 * fVar10;
    fVar5 = fStack0000000000000024 * fStack00000000000000a0;
    fVar11 = fStack000000000000000c * in_stack_000000a8;
    fStack00000000000000a0 = fStack000000000000000c * fStack00000000000000a0;
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    fVar11 = fVar11 - fVar9;
    fVar5 = fVar5 - param_4 * in_stack_000000a8;
    fStack00000000000000a0 = param_4 * fVar10 - fStack00000000000000a0;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (SQRT(fStack00000000000000a0 * fStack00000000000000a0 + fVar11 * fVar11 + fVar5 * fVar5) <=
        fStack000000000000007c) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      uVar4 = *(undefined8 *)puVar2;
    }
  }
  else {
    if (DAT_098854e7 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e7 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (SQRT(in_stack_000000b8 * in_stack_000000b8 +
             fStack00000000000000b0 * fStack00000000000000b0 +
             fStack00000000000000b4 * fStack00000000000000b4) <= fStack000000000000007c) {
      if (DAT_098854f1 == '\0') {
        FUN_04077588(PTR_DAT_09285d60);
        DAT_098854f1 = '\x01';
      }
      uVar4 = *(undefined8 *)puVar2;
    }
  }
  return;
}


