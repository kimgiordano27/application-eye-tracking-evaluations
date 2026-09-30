/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartEyeTracking
ENTRY_POINT: 090d3fd0
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartEyeTracking(float param_1)

{
  undefined8 *unaff_x19;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  if ((SQRT(param_1 + unaff_s12 * unaff_s12 + unaff_s13 * unaff_s13 + unaff_s14 * unaff_s14) <
       **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8)) && (DAT_0b31f57b == '\0')) {
    FUN_04947ee4(PTR_DAT_0ac0f100);
    DAT_0b31f57b = '\x01';
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  unaff_x19[2] = 0;
  FUN_0a188128();
  return;
}


