/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_64
ENTRY_POINT: 033fdd28
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


/* WARNING: Removing unreachable block (ram,0x033fde00) */

void OVRPlugin_<>c__<_cctor>b__786_64(void)

{
  uint uVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  int unaff_w21;
  long lVar2;
  long *unaff_x25;
  uint unaff_w26;
  char in_stack_00000008;
  
  thunk_FUN_01da0934();
  *(uint *)(unaff_x19 + 0x18) = unaff_w21 << 1 | 1;
  lVar2 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  thunk_FUN_01da0934();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = uVar1 & unaff_w26;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033fde10 to 034fde1f has its CatchHandler @ 033fde24 */
    FUN_01d7db78();
  }
  thunk_FUN_01da0934();
  *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
  thunk_FUN_01e10808();
  thunk_FUN_01da0934();
  *(uint *)(unaff_x19 + 0x20) = unaff_w26 + 1;
  if (in_stack_00000008 != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
  }
  return;
}


