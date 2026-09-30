/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 07a342a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__get_cpuLevel(void)

{
  long *unaff_x19;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float in_s4;
  float fVar5;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  float unaff_s13;
  float in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  fVar1 = (float)FUN_041ee3bc();
  fVar2 = (float)FUN_041ee3bc(unaff_s11,unaff_s10,0);
  if (((0.0 <= fVar1) || (fVar4 = 1.0, 0.0 <= fVar2)) &&
     ((fVar1 <= 0.0 || (fVar4 = 0.0, fVar2 <= 0.0)))) {
    if (DAT_098854e8 == '\0') {
      FUN_04077588(PTR_DAT_09285ae0);
      DAT_098854e8 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar4 = 0.0;
    fVar2 = SQRT((fStack000000000000002c * fStack000000000000002c +
                 in_stack_00000010 * in_stack_00000010 + in_s4 * in_s4) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 in_stack_00000020._4_4_ * in_stack_00000020._4_4_));
    if (DAT_01aeb584 <= fVar2) {
      fVar2 = (fStack000000000000002c * unaff_s13 +
              in_stack_00000010 * fStack0000000000000028 + in_s4 * in_stack_00000020._4_4_) / fVar2;
      fVar4 = 1.0;
      if (fVar2 <= 1.0) {
        fVar4 = fVar2;
      }
      fVar5 = -1.0;
      if (-1.0 <= fVar2) {
        fVar5 = fVar4;
      }
      if (*(int *)(*unaff_x19 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      dVar3 = acos((double)fVar5);
      fVar4 = (float)dVar3 * DAT_01aec2c8;
    }
    fVar4 = ABS(fVar1) / fVar4;
  }
  return fVar4;
}


