/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_78
ENTRY_POINT: 033fe328
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fe3a0) */

uint OVRPlugin_<>c__<_cctor>b__786_78(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w22;
  long lVar6;
  long *unaff_x25;
  uint unaff_w26;
  undefined8 in_stack_00000000;
  
  if (param_2 != 1) {
    if (in_stack_00000000._4_1_ != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01e7f0d0(param_1);
  }
  plVar5 = (long *)__cxa_begin_catch(param_1);
  lVar6 = *plVar5;
  __cxa_end_catch();
  bVar4 = true;
  while( true ) {
    if (in_stack_00000000._4_1_ != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
    }
    if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db68(lVar6);
    }
    if (!bVar4) break;
    do {
      iVar3 = *(int *)(unaff_x19 + 0x1c);
      unaff_w26 = unaff_w26 - 1;
      thunk_FUN_01da0934();
      if ((int)unaff_w26 < iVar3) {
        unaff_w22 = 0;
        goto LAB_033fe13c;
      }
      lVar6 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
    } while (*(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) != unaff_x20);
    in_stack_00000000._4_1_ = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc();
    lVar6 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    uVar2 = *(uint *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar2 = uVar2 & unaff_w26;
    if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (*(long *)(lVar6 + (long)(int)uVar2 * 8 + 0x20) == 0) {
      lVar6 = 0;
      bVar4 = false;
      unaff_w22 = 0;
    }
    else {
      lVar6 = *(long *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = uVar2 & unaff_w26;
      if (*(uint *)(lVar6 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      thunk_FUN_01da0934();
      puVar1 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
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
      bVar4 = false;
      lVar6 = 0;
      unaff_w22 = 1;
    }
  }
LAB_033fe13c:
  return unaff_w22 & 1;
}


