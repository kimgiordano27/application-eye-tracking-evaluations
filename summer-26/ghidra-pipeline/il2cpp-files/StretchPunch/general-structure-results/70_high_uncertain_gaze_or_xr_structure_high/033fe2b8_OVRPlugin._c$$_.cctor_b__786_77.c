/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_77
ENTRY_POINT: 033fe2b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe2b0) */

uint OVRPlugin_<>c__<_cctor>b__786_77(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long lVar4;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  uint unaff_w26;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  while( true ) {
    if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(unaff_x23);
    }
    if (unaff_w24 == 0) break;
    do {
      iVar3 = *(int *)(unaff_x19 + 0x1c);
      unaff_w26 = unaff_w26 - 1;
      thunk_FUN_01da0934();
      if ((int)unaff_w26 < iVar3) {
        unaff_w22 = 0;
        goto LAB_033fe13c;
      }
      lVar4 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    } while (*(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) != unaff_x20);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc();
    lVar4 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & unaff_w26;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (*(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) == 0) {
      unaff_w22 = 0;
    }
    else {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      thunk_FUN_01da0934();
      puVar1 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_01e10808(puVar1,0);
      uVar2 = *(uint *)(unaff_x19 + 0x20);
      thunk_FUN_01da0934();
      if (unaff_w26 == uVar2) {
        iVar3 = *(int *)(unaff_x19 + 0x20);
        thunk_FUN_01da0934();
        thunk_FUN_01da0934();
        *(int *)(unaff_x19 + 0x20) = iVar3 + -1;
      }
      else {
        uVar2 = *(uint *)(unaff_x19 + 0x1c);
        thunk_FUN_01da0934();
        if (unaff_w26 == uVar2) {
          iVar3 = *(int *)(unaff_x19 + 0x1c);
          thunk_FUN_01da0934();
          thunk_FUN_01da0934();
          *(int *)(unaff_x19 + 0x1c) = iVar3 + 1;
        }
      }
      unaff_w22 = 1;
    }
    unaff_w24 = 0;
    unaff_x23 = 0;
  }
LAB_033fe13c:
  return unaff_w22 & 1;
}


