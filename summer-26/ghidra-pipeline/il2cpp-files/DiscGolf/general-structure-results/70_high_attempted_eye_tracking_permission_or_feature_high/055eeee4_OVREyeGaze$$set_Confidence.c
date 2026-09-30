/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 055eeee4
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


void OVREyeGaze__set_Confidence(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  ulong in_stack_00000018;
  
  FUN_05411dc0();
  in_stack_00000000 = unaff_x20;
  LeanTween__value();
  uVar2 = FUN_02d966a4(*unaff_x22,0x56bb);
  FUN_05411dc0(uVar2,*unaff_x21,0);
  LeanTween__value((ulong)&stack0x00000000 | 8,uVar2);
  uVar1 = DAT_010fbe48;
  unaff_x19[1] = uVar2;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018 & 0xffffffffffffff00;
  unaff_x19[2] = uVar1;
  return;
}


