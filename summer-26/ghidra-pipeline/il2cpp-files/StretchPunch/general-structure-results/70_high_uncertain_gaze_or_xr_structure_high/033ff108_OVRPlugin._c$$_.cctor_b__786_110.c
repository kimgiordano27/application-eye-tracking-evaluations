/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_110
ENTRY_POINT: 033ff108
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_2;functionality_possible_biometrics_hits_1
*/


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
/* WARNING: Removing unreachable block (ram,0x033ff0ec) */
/* WARNING: Removing unreachable block (ram,0x033ff0f4) */
/* WARNING: Removing unreachable block (ram,0x033ff100) */
/* WARNING: Removing unreachable block (ram,0x033ff104) */

uint OVRPlugin_<>c__<_cctor>b__786_110(void)

{
  int iVar1;
  int iVar2;
  long unaff_x23;
  int unaff_w25;
  long unaff_x26;
  long *unaff_x27;
  uint unaff_w28;
  undefined1 *in_stack_00000000;
  
  OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  if (unaff_x26 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db68(unaff_x26);
  }
  if (unaff_w25 == 2) {
    iVar1 = *(int *)(unaff_x23 + 0x1c);
    thunk_FUN_01da0934();
    iVar2 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_01da0934();
    if (iVar1 < iVar2) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported();
      unaff_w28 = 0;
      *in_stack_00000000 = 1;
      goto LAB_033ff1b4;
    }
  }
  else if (unaff_w25 == 7) goto LAB_033ff1b4;
  unaff_w28 = 0;
LAB_033ff1b4:
  return unaff_w28 & 1;
}


