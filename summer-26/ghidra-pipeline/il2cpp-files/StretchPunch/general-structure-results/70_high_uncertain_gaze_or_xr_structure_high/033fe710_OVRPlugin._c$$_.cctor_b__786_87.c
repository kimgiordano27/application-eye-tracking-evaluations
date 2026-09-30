/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_87
ENTRY_POINT: 033fe710
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x033fe850) */

bool OVRPlugin_<>c__<_cctor>b__786_87(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  long *unaff_x19;
  long unaff_x21;
  int *unaff_x22;
  long *unaff_x25;
  bool bVar6;
  long lVar7;
  undefined8 in_stack_00000008;
  
  do {
    thunk_FUN_01e10808(param_1,param_2);
    bVar5 = false;
    bVar6 = true;
LAB_033fe754:
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled();
    }
    if (!bVar5) {
      return bVar6;
    }
    while( true ) {
      iVar1 = *(int *)(unaff_x21 + 0x20);
      thunk_FUN_01da0934();
      iVar2 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar1 <= iVar2) {
        *unaff_x19 = 0;
        goto LAB_033fe814;
      }
      thunk_FUN_01da0934();
      thunk_FUN_01d9987c();
      iVar3 = *(int *)(unaff_x21 + 0x1c);
      thunk_FUN_01da0934();
      if (iVar1 <= iVar3) break;
      uVar4 = *(uint *)(unaff_x21 + 0x18);
      thunk_FUN_01da0934();
      lVar7 = *(long *)(unaff_x21 + 0x10);
      thunk_FUN_01da0934();
      if (lVar7 == 0) goto LAB_033fe848;
      uVar4 = uVar4 & iVar1 - 1U;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_033fe84c;
      lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x19 = lVar7;
      thunk_FUN_01e10808();
      if (*unaff_x19 != 0) {
        lVar7 = *(long *)(unaff_x21 + 0x10);
        thunk_FUN_01da0934();
        if (lVar7 == 0) {
LAB_033fe848:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_033fe84c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        unaff_x19 = (long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
        *unaff_x19 = 0;
LAB_033fe814:
        thunk_FUN_01e10808(unaff_x19,0);
        return iVar2 < iVar1;
      }
    }
    in_stack_00000008._4_1_ = '\0';
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f92dc();
    iVar2 = *(int *)(unaff_x21 + 0x1c);
    thunk_FUN_01da0934();
    if (iVar1 <= iVar2) {
      thunk_FUN_01da0934();
      *unaff_x22 = iVar1;
      *unaff_x19 = 0;
      thunk_FUN_01e10808();
      bVar5 = false;
      bVar6 = false;
      goto LAB_033fe754;
    }
    uVar4 = *(uint *)(unaff_x21 + 0x18);
    thunk_FUN_01da0934();
    lVar7 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_01da0934();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar4 = uVar4 & iVar1 - 1U;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar7 = *(long *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
    thunk_FUN_01da0934();
    *unaff_x19 = lVar7;
    thunk_FUN_01e10808();
    if (*unaff_x19 == 0) {
      bVar5 = true;
      goto LAB_033fe754;
    }
    lVar7 = *(long *)(unaff_x21 + 0x10);
    thunk_FUN_01da0934();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    param_1 = (undefined8 *)(lVar7 + (long)(int)uVar4 * 8 + 0x20);
    *param_1 = 0;
    param_2 = 0;
  } while( true );
}


