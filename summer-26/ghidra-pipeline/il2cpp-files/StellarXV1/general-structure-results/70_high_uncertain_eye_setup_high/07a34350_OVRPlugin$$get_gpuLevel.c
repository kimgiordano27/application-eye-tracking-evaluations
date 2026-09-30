/*
FUNCTION_NAME: OVRPlugin$$get_gpuLevel
ENTRY_POINT: 07a34350
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


float OVRPlugin__get_gpuLevel
                (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
                float param_6)

{
  int in_w8;
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
  
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
    param_5 = fStack0000000000000020;
    param_6 = in_stack_00000010;
  }
  fVar3 = 0.0;
  fVar1 = SQRT((fStack000000000000002c * fStack000000000000002c + param_1) *
               (unaff_s13 * unaff_s13 + param_3 + param_4));
  if (DAT_01aeb584 <= fVar1) {
    fVar1 = (fStack000000000000002c * unaff_s13 +
            param_6 * fStack0000000000000028 + param_5 * fStack0000000000000024) / fVar1;
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
  return ABS(unaff_s15) / fVar3;
}


