/*
FUNCTION_NAME: Pico.Platform.CLIB$$ppf_User_RequestUserPermissions
ENTRY_POINT: 06445874
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Pico_Platform_CLIB__ppf_User_RequestUserPermissions(void)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03784d20();
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,0);
}


