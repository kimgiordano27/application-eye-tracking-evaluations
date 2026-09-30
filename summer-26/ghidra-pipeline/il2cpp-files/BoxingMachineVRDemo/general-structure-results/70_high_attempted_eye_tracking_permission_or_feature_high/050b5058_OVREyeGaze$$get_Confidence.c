/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 050b5058
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_050a4ed0();
  uVar2 = thunk_FUN_02dc61f4(PTR_DAT_0677e7d0);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar1,uVar2);
}


