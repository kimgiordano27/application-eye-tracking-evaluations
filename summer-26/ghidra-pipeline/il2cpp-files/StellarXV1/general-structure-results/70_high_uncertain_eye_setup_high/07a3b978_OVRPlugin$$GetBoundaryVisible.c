/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryVisible
ENTRY_POINT: 07a3b978
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


float OVRPlugin__GetBoundaryVisible
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float param_7)

{
  undefined *puVar1;
  int in_w8;
  long lVar2;
  float *pfVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s14;
  float in_s16;
  float in_s17;
  float in_s18;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  undefined8 in_stack_00000010;
  float fStack0000000000000018;
  float fStack000000000000001c;
  undefined4 uStack00000000000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  
  param_5 = param_5 - param_6;
  param_7 = param_7 - param_1;
  param_2 = (in_s17 + in_s16) - param_2;
  param_3 = (param_4 - in_s18) - param_3;
  if (in_w8 == 0) {
    FUN_04077588(PTR_DAT_09285d60);
    *(undefined1 *)(unaff_x19 + 0x4ec) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar7 = param_7;
  fVar8 = param_2;
  fStack0000000000000008 =
       (float)FUN_089b9694(param_5,param_7,param_2,param_3,*(undefined4 *)(lVar2 + 0x48),
                           *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  puVar1 = PTR_DAT_09285d58;
  fVar6 = unaff_s14 * unaff_s14 +
          in_stack_00000010._4_4_ * in_stack_00000010._4_4_ +
          fStack0000000000000018 * fStack0000000000000018;
  if (**(float **)(*(long *)PTR_DAT_09285d58 + 0xb8) <= fVar6) {
    fVar4 = unaff_s14 * fVar8 +
            in_stack_00000010._4_4_ * fStack0000000000000008 + fStack0000000000000018 * fVar7;
    fStack0000000000000008 = fStack0000000000000008 - (in_stack_00000010._4_4_ * fVar4) / fVar6;
    fVar7 = fVar7 - (fStack0000000000000018 * fVar4) / fVar6;
    fVar8 = fVar8 - (unaff_s14 * fVar4) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x21 + 0x4e7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar4 = SQRT(fVar8 * fVar8 + fStack0000000000000008 * fStack0000000000000008 + fVar7 * fVar7);
  fStack000000000000000c = param_5;
  if (fVar4 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x23 + 0x4f1) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fStack0000000000000008 = *pfVar3;
    fStack0000000000000004 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fStack0000000000000008 = fStack0000000000000008 / fVar4;
    fStack0000000000000004 = fVar7 / fVar4;
    fVar8 = fVar8 / fVar4;
  }
  if (*(char *)(unaff_x19 + 0x4ec) == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    *(undefined1 *)(unaff_x19 + 0x4ec) = 1;
  }
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  fVar7 = (float)FUN_089b9694(uStack00000000000000a0,fStack00000000000000a4,fStack00000000000000a8,
                              uStack00000000000000ac,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  if (DAT_098854e6 == '\0') {
    FUN_04077588(PTR_DAT_09285d58);
    DAT_098854e6 = '\x01';
  }
  fVar4 = fStack000000000000000c;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar6) {
    fVar5 = unaff_s14 * fStack00000000000000a8 +
            in_stack_00000010._4_4_ * fVar7 + fStack0000000000000018 * fStack00000000000000a4;
    fVar7 = fVar7 - (in_stack_00000010._4_4_ * fVar5) / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 - (fStack0000000000000018 * fVar5) / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 - (unaff_s14 * fVar5) / fVar6;
  }
  if (*(char *)(unaff_x21 + 0x4e7) == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    *(undefined1 *)(unaff_x21 + 0x4e7) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = SQRT(fStack00000000000000a8 * fStack00000000000000a8 +
               fVar7 * fVar7 + fStack00000000000000a4 * fStack00000000000000a4);
  if (fVar6 <= fStack000000000000001c) {
    if (*(char *)(unaff_x23 + 0x4f1) == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      *(undefined1 *)(unaff_x23 + 0x4f1) = 1;
    }
    pfVar3 = *(float **)(*unaff_x22 + 0xb8);
    fVar7 = *pfVar3;
    fStack00000000000000a4 = pfVar3[1];
    fStack00000000000000a8 = pfVar3[2];
  }
  else {
    fVar7 = fVar7 / fVar6;
    fStack00000000000000a4 = fStack00000000000000a4 / fVar6;
    fStack00000000000000a8 = fStack00000000000000a8 / fVar6;
  }
  fVar6 = (float)FUN_089b8dac(fStack0000000000000008,fStack0000000000000004,fVar8,fVar7,
                              fStack00000000000000a4,fStack00000000000000a8,0);
  return (param_2 * fStack0000000000000004 + fVar4 * fVar7 + param_3 * fVar6) - param_7 * fVar8;
}


