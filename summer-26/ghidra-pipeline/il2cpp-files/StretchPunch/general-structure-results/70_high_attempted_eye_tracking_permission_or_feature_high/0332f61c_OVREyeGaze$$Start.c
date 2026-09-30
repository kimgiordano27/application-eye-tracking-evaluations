/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 0332f61c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(int param_1)

{
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w23;
  undefined8 uVar2;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_w8 != 0) {
      uVar2 = FUN_0332deb0();
      thunk_FUN_01dd295c(StringLiteral_4422);
      FUN_01a94a5c();
      uVar2 = FUN_03330b74(uVar2,in_stack_00000008._4_4_,0);
      uVar1 = thunk_FUN_01dd295c(StringLiteral_6800);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar2,uVar1);
    }
    unaff_w23 = unaff_w23 - param_1;
    if (unaff_w23 < 1) break;
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    param_1 = FUN_0333173c(uVar2);
    in_w8 = in_stack_00000008._4_4_;
  }
  *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)unaff_w20;
  return;
}


