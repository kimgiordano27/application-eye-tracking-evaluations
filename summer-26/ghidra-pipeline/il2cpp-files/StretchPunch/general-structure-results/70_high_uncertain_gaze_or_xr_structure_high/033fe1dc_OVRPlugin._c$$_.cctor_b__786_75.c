/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_75
ENTRY_POINT: 033fe1dc
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe2d4) */
/* WARNING: Removing unreachable block (ram,0x033fe124) */
/* WARNING: Removing unreachable block (ram,0x033fe16c) */
/* WARNING: Removing unreachable block (ram,0x033fe358) */
/* WARNING: Removing unreachable block (ram,0x033fe180) */
/* WARNING: Removing unreachable block (ram,0x033fe354) */
/* WARNING: Removing unreachable block (ram,0x033fe190) */
/* WARNING: Removing unreachable block (ram,0x033fe1a0) */
/* WARNING: Removing unreachable block (ram,0x033fe1b0) */
/* WARNING: Removing unreachable block (ram,0x033fe1b4) */
/* WARNING: Removing unreachable block (ram,0x033fe2ec) */
/* WARNING: Removing unreachable block (ram,0x033fe1d4) */
/* WARNING: Removing unreachable block (ram,0x033fe35c) */

undefined4 OVRPlugin_<>c__<_cctor>b__786_75(void)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  uint in_w9;
  long unaff_x19;
  undefined4 uVar4;
  long unaff_x23;
  long lVar5;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 in_stack_00000000;
  
  if (in_w9 <= in_w8) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  if (*(long *)(unaff_x23 + (long)(int)in_w8 * 8 + 0x20) == 0) {
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
  if (in_stack_00000000._4_1_ != '\0') {
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
  }
  return uVar4;
}


