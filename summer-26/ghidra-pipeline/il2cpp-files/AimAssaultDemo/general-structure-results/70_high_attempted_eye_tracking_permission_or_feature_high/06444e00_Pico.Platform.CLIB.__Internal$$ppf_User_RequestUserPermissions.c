/*
FUNCTION_NAME: Pico.Platform.CLIB.__Internal$$ppf_User_RequestUserPermissions
ENTRY_POINT: 06444e00
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Pico_Platform_CLIB___Internal__ppf_User_RequestUserPermissions(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06444e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x40));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


