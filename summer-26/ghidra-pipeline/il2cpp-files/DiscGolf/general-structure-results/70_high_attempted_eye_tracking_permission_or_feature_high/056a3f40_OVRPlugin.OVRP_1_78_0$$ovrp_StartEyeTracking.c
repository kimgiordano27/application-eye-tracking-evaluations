/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 056a3f40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


long OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  FUN_056a9400();
  lVar1 = thunk_FUN_02dd3144(*unaff_x20);
  FUN_0552aca4(lVar1,0);
  *(undefined8 *)(lVar1 + 0x18) = in_stack_00000010;
  *(undefined8 *)(lVar1 + 0x10) = in_stack_00000008;
  return lVar1;
}


