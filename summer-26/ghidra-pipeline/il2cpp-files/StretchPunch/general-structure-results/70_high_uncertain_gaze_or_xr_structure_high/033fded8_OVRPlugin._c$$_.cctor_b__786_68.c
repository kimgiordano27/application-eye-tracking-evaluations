/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_68
ENTRY_POINT: 033fded8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_1;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fdf40) */

void OVRPlugin_<>c__<_cctor>b__786_68(undefined8 param_1,int param_2)

{
  long *plVar1;
  long unaff_x19;
  long lVar2;
  long *unaff_x25;
  char in_stack_00000008;
  
  if (param_2 != 1) {
    if (in_stack_00000008 != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008 != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x19 + 0x24,0);
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68(lVar2);
  }
  return;
}


