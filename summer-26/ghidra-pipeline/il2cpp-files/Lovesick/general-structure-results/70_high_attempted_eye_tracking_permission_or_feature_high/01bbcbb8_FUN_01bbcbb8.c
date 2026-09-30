/*
FUNCTION_NAME: FUN_01bbcbb8
ENTRY_POINT: 01bbcbb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_01bbcbb8(long param_1,undefined4 param_2)

{
  float local_24;
  
  if ((DAT_0377e766 & 1) == 0) {
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    DAT_0377e766 = 1;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_0132138c(*(long *)(param_1 + 0x50),param_2,&local_24,*(undefined8 *)OVREyeGaze_TypeInfo);
    fmodf(local_24,360.0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


