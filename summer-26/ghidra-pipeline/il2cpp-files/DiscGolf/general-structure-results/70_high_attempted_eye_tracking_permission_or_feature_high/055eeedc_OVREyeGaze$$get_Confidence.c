/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 055eeedc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 uStack0000000000000018;
  uint7 uStack0000000000000019;
  
  FUN_05411dc0(param_1,param_2,0);
  in_stack_00000000 = param_1;
  LeanTween__value();
  uVar1 = FUN_02d966a4(*unaff_x22,0x56bb);
  FUN_05411dc0(uVar1,*unaff_x21,0);
  in_stack_00000008 = uVar1;
  LeanTween__value((ulong)&stack0x00000000 | 8,uVar1);
  uVar1 = DAT_010fbe48;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = (ulong)uStack0000000000000019 << 8;
  unaff_x19[2] = uVar1;
  return;
}


