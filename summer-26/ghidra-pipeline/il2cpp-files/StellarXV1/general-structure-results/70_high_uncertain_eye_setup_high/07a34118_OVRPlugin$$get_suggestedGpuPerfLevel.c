/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 07a34118
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_suggestedGpuPerfLevel(undefined1 param_1 [16],float param_2)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  undefined4 uStack0000000000000090;
  float fStack0000000000000094;
  float fStack0000000000000098;
  undefined4 uStack000000000000009c;
  
  fVar3 = (float)FUN_089b9694(0);
  if (*(char *)(unaff_x19 + 0x4ec) == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    *(undefined1 *)(unaff_x19 + 0x4ec) = 1;
  }
  lVar2 = *(long *)(*unaff_x20 + 0xb8);
  fStack0000000000000024 = fStack0000000000000094;
  fVar4 = (float)FUN_089b9694(uStack0000000000000090,fStack0000000000000094,fStack0000000000000098,
                              uStack000000000000009c,*(undefined4 *)(lVar2 + 0x48),
                              *(undefined4 *)(lVar2 + 0x4c),*(undefined4 *)(lVar2 + 0x50),0);
  fVar7 = unaff_s9 * fStack0000000000000024;
  fVar8 = fVar3 * fStack0000000000000024;
  fStack000000000000002c = unaff_s9;
  if (DAT_098854e7 == '\0') {
    FUN_04077588(PTR_DAT_09285ae0);
    DAT_098854e7 = '\x01';
  }
  puVar1 = PTR_DAT_09285ae0;
  fVar7 = param_2 * fStack0000000000000098 - fVar7;
  fVar9 = unaff_s9 * fVar4 - fVar3 * fStack0000000000000098;
  fVar8 = fVar8 - param_2 * fVar4;
  if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar6 = fStack000000000000002c;
  fVar7 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9);
  if (fVar7 <= DAT_01aecf88) {
    if (DAT_098854f1 == '\0') {
      FUN_04077588(PTR_DAT_09285d60);
      DAT_098854f1 = '\x01';
    }
    fVar9 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar9 = fVar9 / fVar7;
  }
  fStack0000000000000004 = fVar9;
  fVar7 = (float)FUN_041ee3bc(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fVar3,param_2,fVar6,0);
  fStack0000000000000004 = fVar9;
  fVar8 = (float)FUN_041ee3bc(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fVar4,fStack0000000000000024,fStack0000000000000098,0);
  if (((0.0 <= fVar7) || (fVar9 = 1.0, 0.0 <= fVar8)) &&
     ((fVar7 <= 0.0 || (fVar9 = 0.0, fVar8 <= 0.0)))) {
    if (DAT_098854e8 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e8 = '\x01';
    }
    fVar6 = fStack0000000000000024 * fStack0000000000000024;
    fVar8 = fStack000000000000002c * fStack000000000000002c;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar9 = 0.0;
    fVar8 = SQRT((fVar8 + fVar3 * fVar3 + param_2 * param_2) *
                 (fStack0000000000000098 * fStack0000000000000098 + fVar4 * fVar4 + fVar6));
    if (DAT_01aeb584 <= fVar8) {
      fVar8 = (fStack000000000000002c * fStack0000000000000098 +
              fVar3 * fVar4 + param_2 * fStack0000000000000024) / fVar8;
      fVar3 = 1.0;
      if (fVar8 <= 1.0) {
        fVar3 = fVar8;
      }
      fVar4 = -1.0;
      if (-1.0 <= fVar8) {
        fVar4 = fVar3;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      dVar5 = acos((double)fVar4);
      fVar9 = (float)dVar5 * DAT_01aec2c8;
    }
    fVar9 = ABS(fVar7) / fVar9;
  }
  return fVar9;
}


