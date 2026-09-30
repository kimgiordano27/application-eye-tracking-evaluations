/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 06a408a4
PROGRAM: Waifu-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__get_EyeTrackingEnabled(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if (DAT_086ef188 == (code *)0x0) {
    DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
  }
  uVar1 = (*DAT_086ef188)();
  FUN_06a5e4b0(uVar1,0,0);
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
  return 1;
}


