/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 05db3854
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x21;
  
  puVar1 = PTR_DAT_072b1ef8;
  if ((*(byte *)(unaff_x21 + 0x839) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072b1ef8);
    *(undefined1 *)(unaff_x21 + 0x839) = 1;
  }
  FUN_044119fc(param_1,param_2,*(undefined8 *)puVar1);
  return;
}


