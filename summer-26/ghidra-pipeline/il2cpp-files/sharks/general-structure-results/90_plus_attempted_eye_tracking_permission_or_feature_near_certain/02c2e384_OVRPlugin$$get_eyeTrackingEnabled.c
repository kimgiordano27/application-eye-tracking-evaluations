/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 02c2e384
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int in_w8;
  undefined8 in_x9;
  int iVar3;
  ulong in_x11;
  ulong in_x12;
  int *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_x12;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = in_x11;
  iVar3 = (int)(SUB168(auVar1 * auVar2,8) >> 3);
  if (in_w8 == iVar3 * 10) {
    *unaff_x20 = in_x9;
    *unaff_x21 = iVar3;
    *unaff_x19 = *unaff_x19 + -1;
  }
  return;
}


