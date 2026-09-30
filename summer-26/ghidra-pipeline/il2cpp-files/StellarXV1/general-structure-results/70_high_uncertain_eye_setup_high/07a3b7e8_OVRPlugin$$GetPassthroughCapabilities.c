/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilities
ENTRY_POINT: 07a3b7e8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetPassthroughCapabilities
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  fVar13 = param_2;
  fVar7 = param_3;
  fStack000000000000000c = param_5;
  fStack0000000000000010 = param_6;
  fVar6 = (float)FUN_07a3a8e8();
  fVar10 = fVar7;
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  param_1 = param_1 - fVar6;
  param_2 = param_2 - fVar13;
  param_3 = param_3 - fVar7;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar3 = PTR_DAT_09285d60;
  fStack000000000000001c = DAT_01aecf88;
  fVar7 = SQRT(param_3 * param_3 + param_1 * param_1 + param_2 * param_2);
  fVar13 = DAT_01aecf88;
  if (fVar7 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    param_1 = *pfVar5;
    param_2 = pfVar5[1];
    param_3 = pfVar5[2];
  }
  else {
    param_1 = param_1 / fVar7;
    param_2 = param_2 / fVar7;
    param_3 = param_3 / fVar7;
  }
  FUN_07a3aa04(param_8,param_9);
  fStack0000000000000014 = param_1;
  fVar7 = (float)FUN_089b8dac(0);
  fVar11 = (fStack0000000000000010 * fVar13 + param_4 * param_1 + param_7 * fVar7) -
           fStack000000000000000c * fVar10;
  fVar12 = (param_4 * fVar10 + fStack000000000000000c * param_1 + param_7 * fVar13) -
           fStack0000000000000010 * fVar7;
  fVar6 = (fStack000000000000000c * fVar7 + fStack0000000000000010 * param_1 + param_7 * fVar10) -
          param_4 * fVar13;
  fVar13 = ((param_7 * param_1 - param_4 * fVar7) - fStack000000000000000c * fVar13) -
           fStack0000000000000010 * fVar10;
  if (DAT_098854ec == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ec = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
  fVar7 = fVar12;
  fStack0000000000000010 = fVar6;
  fStack0000000000000008 =
       (float)FUN_089b9694(fVar11,fVar12,fVar6,fVar13,*(undefined4 *)(lVar4 + 0x48),
                           *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  puVar2 = PTR_DAT_09285d58;
  fVar10 = param_3 * param_3 + fStack0000000000000014 * fStack0000000000000014 + param_2 * param_2;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar10) {
    fVar8 = param_3 * fVar6 + fStack0000000000000014 * fStack0000000000000008 + param_2 * fVar7;
    fStack0000000000000008 = fStack0000000000000008 - (fStack0000000000000014 * fVar8) / fVar10;
    fVar7 = fVar7 - (param_2 * fVar8) / fVar10;
    fVar6 = fVar6 - (param_3 * fVar8) / fVar10;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar8 = SQRT(fVar6 * fVar6 + fStack0000000000000008 * fStack0000000000000008 + fVar7 * fVar7);
  fStack000000000000000c = fVar11;
  if (fVar8 <= fStack000000000000001c) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fStack0000000000000008 = *pfVar5;
    fStack0000000000000004 = pfVar5[1];
    fVar6 = pfVar5[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar8;
    fStack0000000000000004 = fVar7 / fVar8;
    fVar6 = fVar6 / fVar8;
  }
  if (DAT_098854ec == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854ec = '\x01';
  }
  lVar4 = *(long *)(*(long *)puVar3 + 0xb8);
  fVar7 = (float)FUN_089b9694(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar4 + 0x48),
                              *(undefined4 *)(lVar4 + 0x4c),*(undefined4 *)(lVar4 + 0x50),0);
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar8 = fStack0000000000000010;
  fVar11 = fStack000000000000000c;
  if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar10) {
    fVar9 = param_3 * fStack00000000000000a8 +
            fStack0000000000000014 * fVar7 + param_2 * fStack00000000000000a4;
    fVar7 = fVar7 - (fStack0000000000000014 * fVar9) / fVar10;
    fStack00000000000000a4 = fStack00000000000000a4 - (param_2 * fVar9) / fVar10;
    fStack00000000000000a8 = fStack00000000000000a8 - (param_3 * fVar9) / fVar10;
  }
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar10 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
                fVar7 * fVar7 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar10 <= fStack000000000000001c) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    pfVar5 = *(float **)(*(long *)puVar3 + 0xb8);
    fVar7 = *pfVar5;
    fStack00000000000000a4 = pfVar5[1];
    fStack00000000000000a8 = pfVar5[2];
  }
  else {
    fVar7 = fVar7 / fVar10;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar10;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar10;
  }
  fVar10 = (float)FUN_089b8dac(fStack0000000000000008,fStack0000000000000004,fVar6,fVar7,
                               fStack00000000000000a4,fStack00000000000000a8,0);
  return (fVar8 * fStack0000000000000004 + fVar11 * fVar7 + fVar13 * fVar10) - fVar12 * fVar6;
}


