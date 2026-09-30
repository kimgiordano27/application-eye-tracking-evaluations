/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 01987a88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__StartEyeTracking(void)

{
  long lVar1;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x401) = in_w8;
  lVar1 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    **(long **)(*unaff_x20 + 0xb8) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


