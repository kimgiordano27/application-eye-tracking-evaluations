/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__786_107
ENTRY_POINT: 033fefbc
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

uint OVRPlugin_<>c__<_cctor>b__786_107(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  uint *unaff_x24;
  int iVar6;
  long *unaff_x27;
  uint unaff_w28;
  undefined1 *in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    iVar6 = *(int *)(unaff_x23 + 0x1c);
    thunk_FUN_01da0934();
    iVar1 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_01da0934();
    if (iVar1 <= iVar6) goto LAB_033ff19c;
    in_stack_00000008._4_1_ = '\0';
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    OVRPlugin_OVRP_1_92_0__ovrp_GetFaceTracking2Supported
              (unaff_x23 + 0x24,unaff_w21,(long)&stack0x00000008 + 4);
    if (in_stack_00000008._4_1_ == '\0') {
      unaff_w28 = 0;
      *in_stack_00000000 = 1;
      goto LAB_033ff1b4;
    }
    uVar2 = *unaff_x24;
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    thunk_FUN_01d9987c();
    iVar6 = *(int *)(unaff_x23 + 0x20);
    thunk_FUN_01da0934();
    if ((int)uVar2 < iVar6) {
      uVar3 = *(uint *)(unaff_x23 + 0x18);
      thunk_FUN_01da0934();
      lVar5 = *(long *)(unaff_x23 + 0x10);
      thunk_FUN_01da0934();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar3 = uVar3 & uVar2;
      if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
      thunk_FUN_01da0934();
      *unaff_x22 = lVar5;
      thunk_FUN_01e10808();
      if (*unaff_x22 == 0) {
        iVar6 = 2;
      }
      else {
        lVar5 = *(long *)(unaff_x23 + 0x10);
        thunk_FUN_01da0934();
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        puVar4 = (undefined8 *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
        *puVar4 = 0;
        thunk_FUN_01e10808(puVar4,0);
        unaff_w28 = 1;
        iVar6 = 7;
      }
    }
    else {
      thunk_FUN_01da0934();
      *unaff_x24 = uVar2;
      *unaff_x22 = 0;
      thunk_FUN_01e10808();
      iVar6 = 8;
      *in_stack_00000000 = 1;
    }
    if (in_stack_00000008._4_1_ != '\0') {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      OVRPlugin_OVRP_1_93_0__ovrp_IsSetWideMotionModeHandPosesEnabled(unaff_x23 + 0x24,0);
    }
  } while (iVar6 == 2);
  if (iVar6 != 7) {
LAB_033ff19c:
    unaff_w28 = 0;
  }
LAB_033ff1b4:
  return unaff_w28 & 1;
}


