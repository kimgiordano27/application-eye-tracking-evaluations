/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 055eee8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(undefined8 *param_1)

{
  undefined8 uVar1;
  uint in_w9;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *puVar2;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  
  puVar2 = *(undefined8 **)(unaff_x21 + 0x7a8);
  if ((in_w9 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc2e8);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<string,_ExpressionEvaluator_Operator>_TypeInfo
                );
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<string,_DtdParser_UndeclaredNotation>_TypeInfo
                );
    *(undefined1 *)(unaff_x23 + 0x84a) = 1;
  }
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  uVar1 = FUN_02d966a4(*unaff_x22,0x586a);
  FUN_05411dc0(uVar1,*unaff_x20,0);
  in_stack_00000000 = uVar1;
  LeanTween__value();
  uVar1 = FUN_02d966a4(*unaff_x22,0x56bb);
  FUN_05411dc0(uVar1,*puVar2,0);
  in_stack_00000008 = uVar1;
  LeanTween__value((ulong)&stack0x00000000 | 8,uVar1);
  uVar1 = DAT_010fbe48;
  in_stack_00000018 = in_stack_00000018 & 0xffffffffffffff00;
  param_1[1] = in_stack_00000008;
  *param_1 = in_stack_00000000;
  param_1[3] = in_stack_00000018;
  param_1[2] = uVar1;
  return;
}


