/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions$$RequestUserAuthorisation
ENTRY_POINT: 049f22d4
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void RenderHeads_Media_AVProVideo_RequestPermissions__RequestUserAuthorisation(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  FUN_049f2158();
  lVar1 = *(long *)(unaff_x21 + 0x38) * unaff_x20;
  if (*(long *)(unaff_x21 + 0x28) == 0) {
    DAT_0b3462c8 = DAT_0b3462c8 + lVar1;
  }
  else {
    DAT_0b3462c0 = DAT_0b3462c0 + lVar1;
  }
  return;
}


