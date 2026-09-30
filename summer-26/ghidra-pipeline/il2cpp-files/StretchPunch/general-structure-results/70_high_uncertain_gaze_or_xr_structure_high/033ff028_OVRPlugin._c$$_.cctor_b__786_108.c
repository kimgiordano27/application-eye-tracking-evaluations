/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_108
ENTRY_POINT: 033ff028
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;validity_or_gating_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033ff1d8) */
/* WARNING: Removing unreachable block (ram,0x033ff004) */

uint OVRPlugin_<>c__<_cctor>b__786_108(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int unaff_w20;
  long lVar4;
  long *unaff_x22;
  long unaff_x23;
  uint *unaff_x24;
  uint unaff_w25;
  int iVar5;
  long *unaff_x27;
  uint unaff_w28;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if ((int)unaff_w25 < unaff_w20) {
    uVar2 = *(uint *)(unaff_x23 + 0x18);
    thunk_FUN_01da0934();
    lVar4 = *(long *)(unaff_x23 + 0x10);
    thunk_FUN_01da0934();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & unaff_w25;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
    thunk_FUN_01da0934();
    *unaff_x22 = lVar4;
    thunk_FUN_01e10808();
    if (*unaff_x22 == 0) {
      iVar5 = 2;
    }
    else {
      lVar4 = *(long *)(unaff_x23 + 0x10);
      thunk_FUN_01da0934();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *puVar3 = 0;
      thunk_FUN_01e10808(puVar3,0);
      unaff_w28 = 1;
      iVar5 = 7;
    }
  }
  else {
    thunk_FUN_01da0934();
    *unaff_x24 = unaff_w25;
    *unaff_x22 = 0;
    thunk_FUN_01e10808();
    iVar5 = 8;
    *in_stack_00000000 = 1;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  }
  if (iVar5 == 2) {
    iVar5 = *(int *)(unaff_x23 + 0x1c);
    thunk_FUN_01da0934();
    iVar1 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_01da0934();
    if (iVar5 < iVar1) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported();
      unaff_w28 = 0;
      *in_stack_00000000 = 1;
      goto LAB_033ff1b4;
    }
  }
  else if (iVar5 == 7) goto LAB_033ff1b4;
  unaff_w28 = 0;
LAB_033ff1b4:
  return unaff_w28 & 1;
}


