/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 05be142c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(code *param_1,undefined8 param_2)

{
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + 0xcc0) = param_2;
                    /* try { // try from 05be1438 to 05ce143f has its CatchHandler @ 05be17bc */
  (*param_1)(unaff_w20,unaff_w19);
  return;
}


