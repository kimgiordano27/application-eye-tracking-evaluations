/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 01d80c20
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d80c94) */

undefined8 OVRPlugin__IsWideMotionModeHandPosesEnabled(void)

{
  long *plVar1;
  int unaff_w20;
  long lVar2;
  long unaff_x21;
  
  FUN_01c43f5c();
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (unaff_w20 != 1) {
    FUN_01c44000(&stack0x00000008,0);
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  FUN_01c44000(&stack0x00000008,0);
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc52c(lVar2);
}


