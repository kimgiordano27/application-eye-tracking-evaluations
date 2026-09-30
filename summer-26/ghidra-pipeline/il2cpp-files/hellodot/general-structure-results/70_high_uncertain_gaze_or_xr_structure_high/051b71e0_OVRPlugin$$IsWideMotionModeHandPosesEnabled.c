/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 051b71e0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b725c) */

float OVRPlugin__IsWideMotionModeHandPosesEnabled
                (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4)

{
  int in_w8;
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s13;
  float unaff_s15;
  float in_stack_00000010;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
    param_3 = in_stack_00000010;
    param_4 = fStack0000000000000020;
  }
  fVar1 = SQRT(unaff_s8 *
               (unaff_s13 * unaff_s13 +
               fStack0000000000000028 * fStack0000000000000028 +
               fStack0000000000000024 * fStack0000000000000024));
  fVar3 = 0.0;
  if (DAT_013ddc5c <= fVar1) {
    fVar1 = (fStack000000000000002c * unaff_s13 +
            param_3 * fStack0000000000000028 + param_4 * fStack0000000000000024) / fVar1;
    if (fVar1 < -1.0) {
      fVar1 = -1.0;
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    dVar2 = acos((double)fVar1);
    fVar3 = (float)dVar2 * DAT_013de5cc;
  }
  return ABS(unaff_s15) / fVar3;
}


