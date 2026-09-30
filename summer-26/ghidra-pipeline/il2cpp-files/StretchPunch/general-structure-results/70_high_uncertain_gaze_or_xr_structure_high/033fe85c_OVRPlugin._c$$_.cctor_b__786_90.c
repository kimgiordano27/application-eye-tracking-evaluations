/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_90
ENTRY_POINT: 033fe85c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_possible_biometrics_hits_1
*/


void OVRPlugin_<>c__<_cctor>b__786_90(void)

{
  long unaff_x23;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  if (in_stack_00000008._4_1_ != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  }
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db68();
}


