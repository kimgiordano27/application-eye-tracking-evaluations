/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 052952f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  undefined4 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_03e23438();
  uVar1 = uStack0000000000000008;
  in_stack_00000028 = unaff_x20[1];
  in_stack_00000020 = *unaff_x20;
  in_stack_00000038 = unaff_x20[3];
  in_stack_00000030 = unaff_x20[2];
  FUN_03e23438((long)&stack0x00000000 + 4,&stack0x00000020,*unaff_x21);
  uVar3 = in_stack_00000018;
  uVar2 = FUN_060df954(uStack0000000000000010,uStack0000000000000014,in_stack_00000018,0);
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  FUN_060fda18(in_stack_00000000._4_4_,uVar1,uStack000000000000000c,uVar2,uStack0000000000000014,
               uVar3,in_s3);
  return;
}


