/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 01a4fa4c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


bool OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(undefined8 param_1)

{
  int iVar1;
  
  if (DAT_0377b628 == (code *)0x0) {
    DAT_0377b628 = (code *)thunk_FUN_00d625b4();
  }
                    /* try { // try from 01a4faac to 01b4fb63 has its CatchHandler @ 01a500c4 */
  iVar1 = (*DAT_0377b628)(param_1);
  return iVar1 != 0;
}


