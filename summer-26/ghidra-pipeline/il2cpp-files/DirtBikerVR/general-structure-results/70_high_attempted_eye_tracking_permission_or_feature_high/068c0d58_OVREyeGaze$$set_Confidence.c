/*
FUNCTION_NAME: OVREyeGaze$$set_Confidence
ENTRY_POINT: 068c0d58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__set_Confidence(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  FUN_05748f30(param_1,2,*unaff_x24);
  *(undefined8 *)(unaff_x19 + 0x108) = param_1;
  thunk_FUN_03afed3c(unaff_x19 + 0x108,param_1);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xdc);
  uVar2 = thunk_FUN_03ac74bc(*unaff_x23);
  FUN_0574689c(uVar2,3,uVar1,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
  thunk_FUN_03afed3c(unaff_x19 + 0x110,uVar2);
  return;
}


