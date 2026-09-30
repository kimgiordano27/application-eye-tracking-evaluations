/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 05138440
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_04f2d31c(param_1,0);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000000;
    thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_032e8404(unaff_x19 + 2);
  }
  else {
    FUN_04f2d338();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar2 = FUN_05136ba8();
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    auVar3 = FUN_0507b064(lVar2,0,0);
    uVar1 = FUN_04f2d31c();
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined1 (*) [16])(unaff_x19 + 0x12) = auVar3;
      thunk_FUN_02dd37b4(unaff_x19 + 0x12,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_032e8404(unaff_x19 + 2);
    }
    else {
      FUN_04f2d338();
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f2db0c(unaff_x19 + 2,0);
    }
  }
  return;
}


