/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 051d9538
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


float OVRPermissionsRequester__RequestPermissions
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  long unaff_x19;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float in_s16;
  float in_s21;
  float in_s22;
  float in_s23;
  float in_s24;
  
  return (*(float *)(unaff_x19 + 0x2c) * ((unaff_s10 * param_1 + in_s16) - unaff_s8 * param_3) +
         param_6 * (((in_s23 - in_s21) - unaff_s9 * param_2) - unaff_s10 * param_3) +
         *(float *)(unaff_x19 + 0x30) * ((unaff_s9 * param_3 + param_5) - unaff_s10 * param_2)) -
         in_s24 * ((unaff_s8 * param_2 + in_s22 + param_4) - unaff_s9 * param_1);
}


