/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_111
ENTRY_POINT: 033ff178
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


/* WARNING: Removing unreachable block (ram,0x033ff21c) */
/* WARNING: Removing unreachable block (ram,0x033ff004) */
/* WARNING: Removing unreachable block (ram,0x033ff0b4) */
/* WARNING: Removing unreachable block (ram,0x033ff030) */
/* WARNING: Removing unreachable block (ram,0x033ff120) */
/* WARNING: Removing unreachable block (ram,0x033ff044) */
/* WARNING: Removing unreachable block (ram,0x033ff128) */
/* WARNING: Removing unreachable block (ram,0x033ff054) */
/* WARNING: Removing unreachable block (ram,0x033ff0e4) */
/* WARNING: Removing unreachable block (ram,0x033ff07c) */
/* WARNING: Removing unreachable block (ram,0x033ff130) */
/* WARNING: Removing unreachable block (ram,0x033ff088) */
/* WARNING: Removing unreachable block (ram,0x033ff138) */
/* WARNING: Removing unreachable block (ram,0x033ff094) */
/* WARNING: Removing unreachable block (ram,0x033fefc0) */
/* WARNING: Removing unreachable block (ram,0x033fefd8) */
/* WARNING: Removing unreachable block (ram,0x033fefe8) */
/* WARNING: Removing unreachable block (ram,0x033fefec) */

undefined4 OVRPlugin_<>c__<_cctor>b__786_111(void)

{
  bool in_ZR;
  long *plVar1;
  long lVar2;
  long *unaff_x27;
  undefined8 in_stack_00000008;
  
  if (!in_ZR) {
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0();
  }
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  }
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db68(lVar2);
}


