/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 07a342f8
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


float OVRPlugin__set_cpuLevel(float param_1)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float unaff_s13;
  float unaff_s15;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if ((in_ZR || in_NG != in_OV) || (fVar3 = 0.0, param_1 <= 0.0)) {
    if (DAT_098854e8 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e8 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar3 = 0.0;
    fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c +
                 in_stack_00000010 * in_stack_00000010 +
                 fStack0000000000000020 * fStack0000000000000020) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 fStack0000000000000024 * fStack0000000000000024));
    if (DAT_01aeb584 <= fVar1) {
      fVar1 = (fStack000000000000002c * unaff_s13 +
              in_stack_00000010 * fStack0000000000000028 +
              fStack0000000000000020 * fStack0000000000000024) / fVar1;
      fVar3 = 1.0;
      if (fVar1 <= 1.0) {
        fVar3 = fVar1;
      }
      fVar4 = -1.0;
      if (-1.0 <= fVar1) {
        fVar4 = fVar3;
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      dVar2 = acos((double)fVar4);
      fVar3 = (float)dVar2 * DAT_01aec2c8;
    }
    fVar3 = ABS(unaff_s15) / fVar3;
  }
  return fVar3;
}


