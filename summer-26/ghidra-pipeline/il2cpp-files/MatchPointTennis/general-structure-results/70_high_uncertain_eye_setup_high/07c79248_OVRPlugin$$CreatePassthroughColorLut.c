/*
FUNCTION_NAME: OVRPlugin$$CreatePassthroughColorLut
ENTRY_POINT: 07c79248
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__CreatePassthroughColorLut
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,undefined8 param_7,float *param_8)

{
  undefined *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack0000000000000014;
  float fStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  float fStack0000000000000090;
  float fStack0000000000000094;
  float in_stack_00000098;
  
  fStack0000000000000014 = param_1;
  fStack0000000000000018 = param_2;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  fStack000000000000001c = fStack0000000000000090;
  fStack0000000000000090 = fStack0000000000000090 - param_4;
  fStack0000000000000094 = fStack0000000000000094 - param_5;
  fVar7 = in_stack_00000098 - param_6;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar6 = fVar7 * fVar7 +
          fStack0000000000000090 * fStack0000000000000090 +
          fStack0000000000000094 * fStack0000000000000094;
  fVar3 = SQRT(fVar6);
  fStack0000000000000024 = param_4;
  fStack000000000000002c = param_6;
  if (fVar3 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
  }
  else {
    fVar8 = fStack0000000000000090 / fVar3;
    fVar9 = fStack0000000000000094 / fVar3;
    fVar10 = fVar7 / fVar3;
  }
  if (DAT_0a51c0c3 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1f580);
    DAT_0a51c0c3 = '\x01';
  }
  fVar4 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
  if (**(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) <= fVar4) {
    fVar5 = (param_3 - fStack000000000000002c) * fVar10 +
            (fStack0000000000000014 - fStack0000000000000024) * fVar8 +
            (fStack0000000000000018 - param_5) * fVar9;
    fVar8 = (fVar8 * fVar5) / fVar4;
    fVar9 = (fVar9 * fVar5) / fVar4;
    fVar4 = (fVar10 * fVar5) / fVar4;
  }
  else {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    pfVar2 = *(float **)(*(long *)PTR_DAT_09f1e740 + 0xb8);
    fVar8 = *pfVar2;
    fVar9 = pfVar2[1];
    fVar4 = pfVar2[2];
  }
  if (fVar7 * fVar4 + fStack0000000000000090 * fVar8 + fStack0000000000000094 * fVar9 <= 0.0) {
    fVar7 = 0.0;
    fStack000000000000001c = fStack0000000000000024;
  }
  else {
    fVar9 = fVar8 * fVar8 + fVar9 * fVar9 + fVar4 * fVar4;
    fVar7 = 1.0;
    if (fVar9 < fVar6) {
      if (DAT_0a51c009 == '\0') {
        FUN_04447ba8(0x3f800000,fStack000000000000001c,in_stack_00000098,PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      if ((*(int *)(*(long *)puVar1 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      fStack000000000000001c = fStack0000000000000024 + fVar8;
      fVar7 = SQRT(fVar9) / fVar3;
    }
  }
  *param_8 = fVar7;
  return fStack000000000000001c;
}


