/*
FUNCTION_NAME: Oculus.Avatar2.CAPI$$ovrAvatar2Behavior_UpdateGazeTargetPositions
ENTRY_POINT: 05546ae8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_5;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


int Oculus_Avatar2_CAPI__ovrAvatar2Behavior_UpdateGazeTargetPositions(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  uint unaff_w19;
  int iVar3;
  long unaff_x21;
  long *unaff_x22;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  long in_stack_00000018;
  
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_055462c8(&stack0x00000008,unaff_w19 >> 0x10 & 0xff,2);
  iVar3 = iStack0000000000000010;
  if (iStack0000000000000014 == 0 && iStack000000000000000c == 0) {
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (iStack0000000000000008 < 0) {
      iVar3 = -iVar3;
      if (0 < iVar3) goto LAB_05546b70;
    }
    else if (iVar3 < 0) goto LAB_05546b70;
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000018) {
      return iVar3;
    }
  }
  else {
LAB_05546b70:
    thunk_FUN_02dfd288(PTR_DAT_06a00c58);
    uVar1 = thunk_FUN_02dd3144();
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a1e8e0);
    FUN_054f7768(uVar1,uVar2,0);
    if (*(long *)(unaff_x21 + 0x28) == in_stack_00000018) {
      uVar2 = thunk_FUN_02dfd288(System_Globalization_CultureData_var);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar1,uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


