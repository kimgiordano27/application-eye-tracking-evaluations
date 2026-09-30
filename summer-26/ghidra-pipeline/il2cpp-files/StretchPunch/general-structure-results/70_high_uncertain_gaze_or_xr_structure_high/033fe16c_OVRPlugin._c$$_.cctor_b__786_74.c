/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_74
ENTRY_POINT: 033fe16c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe35c) */

undefined4 OVRPlugin_<>c__<_cctor>b__786_74(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar4;
  long lVar5;
  long *unaff_x25;
  uint unaff_w26;
  char cStack0000000000000004;
  
  while( true ) {
    lVar5 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & unaff_w26;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (*(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) == unaff_x20) break;
    iVar3 = *(int *)(unaff_x19 + 0x1c);
    unaff_w26 = unaff_w26 - 1;
    thunk_FUN_01da0934();
    if ((int)unaff_w26 < iVar3) {
      return 0;
    }
  }
  cStack0000000000000004 = '\0';
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f92dc();
  lVar5 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_01da0934();
  uVar2 = *(uint *)(unaff_x19 + 0x18);
  thunk_FUN_01da0934();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar2 = uVar2 & unaff_w26;
  if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (*(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & unaff_w26;
    if (*(uint *)(lVar5 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    thunk_FUN_01da0934();
    puVar1 = (undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
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
    uVar4 = 1;
  }
  if (cStack0000000000000004 == '\0') {
    return uVar4;
  }
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  return uVar4;
}


