/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetEyeTrackingEnabled
ENTRY_POINT: 056a439c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined4 OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 unaff_w19;
  long unaff_x21;
  
  if (*(long *)(unaff_x21 + 0x8f8) == 0) {
    uVar2 = thunk_FUN_02dd33e4();
    *(undefined8 *)(unaff_x21 + 0x8f8) = uVar2;
  }
  uVar2 = thunk_FUN_02dd3690();
  uVar1 = (**(code **)(unaff_x21 + 0x8f8))(unaff_w19,uVar2);
  thunk_FUN_02dd3684(uVar2);
  return uVar1;
}


