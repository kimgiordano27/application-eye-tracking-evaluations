/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 056b992c
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xc68));
  *(undefined1 *)(unaff_x22 + 0x530) = 1;
  if ((char)unaff_x20[0xc] == '\0') {
    FUN_056cd68c();
    return;
  }
  if ((unaff_x21 & 0xff) != 0) {
    FUN_056b985c((int)(unaff_x21 >> 0x20));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x056b99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x238))();
  return;
}


