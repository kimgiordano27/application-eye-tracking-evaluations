/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 036a48dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_x9;
  
  if (in_x9 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(param_1);
  }
                    /* try { // try from 036a48f8 to 037a4903 has its CatchHandler @ 036a4968 */
  thunk_FUN_01f51358();
  return;
}


