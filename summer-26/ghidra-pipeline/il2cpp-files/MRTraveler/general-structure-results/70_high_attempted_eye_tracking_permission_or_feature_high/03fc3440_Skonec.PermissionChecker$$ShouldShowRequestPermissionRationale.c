/*
FUNCTION_NAME: Skonec.PermissionChecker$$ShouldShowRequestPermissionRationale
ENTRY_POINT: 03fc3440
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Skonec_PermissionChecker__ShouldShowRequestPermissionRationale
               (undefined8 param_1,undefined8 param_2)

{
  long *unaff_x21;
  undefined1 unaff_w22;
  long unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000000 = param_1;
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  thunk_FUN_03d233cc(param_2,0);
  thunk_FUN_03d233cc(unaff_x23 + 0x18);
  uStack0000000000000020 = CONCAT71(uStack0000000000000020._1_7_,unaff_w22);
  uStack0000000000000000 = CONCAT44(uStack0000000000000000._4_4_,0xffffffff);
  if (*(long *)(*unaff_x21 + 0x38) == 0) {
    FUN_03cf12a0();
  }
  FUN_03fc34a4();
  FUN_03dbedd4();
  return;
}


