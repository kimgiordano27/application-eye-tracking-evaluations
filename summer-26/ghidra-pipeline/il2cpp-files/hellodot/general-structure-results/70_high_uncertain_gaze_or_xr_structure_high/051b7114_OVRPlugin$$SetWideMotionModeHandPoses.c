/*
FUNCTION_NAME: OVRPlugin$$SetWideMotionModeHandPoses
ENTRY_POINT: 051b7114
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x051b725c) */

float OVRPlugin__SetWideMotionModeHandPoses(long param_1)

{
  long *unaff_x19;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float in_s3;
  float in_s4;
  undefined4 uVar5;
  float unaff_s13;
  undefined4 uStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  
  uVar5 = *(undefined4 *)(param_1 + 8);
  uStack0000000000000008 = uVar5;
  fVar1 = (float)FUN_02faf120(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  uStack0000000000000008 = uVar5;
  fVar2 = (float)FUN_02faf120(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fStack0000000000000028,in_stack_00000020._4_4_,0);
  if (((0.0 <= fVar1) || (fVar4 = 1.0, 0.0 <= fVar2)) &&
     ((fVar1 <= 0.0 || (fVar4 = 0.0, fVar2 <= 0.0)))) {
    if (DAT_06a67854 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
      DAT_06a67854 = '\x01';
    }
    if (*(int *)(*unaff_x19 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    fVar2 = SQRT((fStack000000000000002c * fStack000000000000002c + in_s3 * in_s3 + in_s4 * in_s4) *
                 (unaff_s13 * unaff_s13 +
                 fStack0000000000000028 * fStack0000000000000028 +
                 in_stack_00000020._4_4_ * in_stack_00000020._4_4_));
    fVar4 = 0.0;
    if (DAT_013ddc5c <= fVar2) {
      fVar2 = (fStack000000000000002c * unaff_s13 +
              in_s3 * fStack0000000000000028 + in_s4 * in_stack_00000020._4_4_) / fVar2;
      if (fVar2 < -1.0) {
        fVar2 = -1.0;
      }
      if (*(int *)(*unaff_x19 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      dVar3 = acos((double)fVar2);
      fVar4 = (float)dVar3 * DAT_013de5cc;
    }
    fVar4 = ABS(fVar1) / fVar4;
  }
  return fVar4;
}


