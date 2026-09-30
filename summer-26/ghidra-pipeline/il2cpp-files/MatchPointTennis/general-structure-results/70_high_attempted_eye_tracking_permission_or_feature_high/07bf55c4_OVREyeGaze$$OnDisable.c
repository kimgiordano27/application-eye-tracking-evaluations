/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 07bf55c4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(long param_1,undefined8 param_2)

{
  undefined4 unaff_w19;
  undefined8 uStack0000000000000000;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined1 in_stack_00000048 [16];
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  
  uStack000000000000000c = in_stack_00000048._4_4_;
  uStack0000000000000010 = in_stack_00000048._8_4_;
  uStack0000000000000000 = param_2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  in_stack_00000060 = param_2;
  uStack000000000000006c = uStack000000000000000c;
  in_stack_00000070 = uStack0000000000000010;
  FUN_07321edc(param_1,unaff_w19,&stack0x00000060,*(undefined8 *)PTR_DAT_09f4e700);
  return;
}


