/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_63
ENTRY_POINT: 033fdcbc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fde00) */

void OVRPlugin_<>c__<_cctor>b__786_63(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  uint unaff_w26;
  int unaff_w27;
  ulong unaff_x28;
  char in_stack_00000008;
  
  while( true ) {
    if ((unaff_x24 != 0) &&
       (lVar3 = thunk_FUN_01de26bc(unaff_x24,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_x28) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    *unaff_x23 = unaff_x24;
    thunk_FUN_01e10808(unaff_x23,unaff_x24);
    unaff_x28 = unaff_x28 + 1;
    unaff_x23 = unaff_x23 + 1;
    lVar3 = *unaff_x21;
    thunk_FUN_01da0934();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x28) {
      thunk_FUN_01da0934();
      *unaff_x21 = (long)unaff_x22;
      thunk_FUN_01e10808();
      thunk_FUN_01da0934();
      *(undefined4 *)(unaff_x19 + 0x1c) = 0;
      thunk_FUN_01da0934();
      iVar2 = *(int *)(unaff_x19 + 0x18);
      *(uint *)(unaff_x19 + 0x20) = unaff_w26;
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(uint *)(unaff_x19 + 0x18) = iVar2 << 1 | 1;
      lVar3 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar1 = uVar1 & unaff_w26;
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      thunk_FUN_01da0934();
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
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
    lVar3 = *unaff_x21;
    thunk_FUN_01da0934();
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar1 = uVar1 & unaff_w27 + (int)unaff_x28;
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_x24 = *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


