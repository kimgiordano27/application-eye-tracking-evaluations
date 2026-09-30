/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 073e6524
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__Update(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  iVar1 = FUN_073e60b8();
  if (iVar1 < 0) {
    if (*(int *)(*(long *)PTR_DAT_091f9220 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    FUN_08a5bcd8(0);
    uVar2 = 0;
  }
  else {
    if (*(long *)(unaff_x20 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548(0,iVar1);
    }
    uVar2 = FUN_05a39464(*(long *)(unaff_x20 + 0x20),iVar1,*(undefined8 *)PTR_DAT_091f9a00);
    FUN_073fcea8(uVar2,0,0);
    uVar2 = 1;
  }
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return uVar2;
}


