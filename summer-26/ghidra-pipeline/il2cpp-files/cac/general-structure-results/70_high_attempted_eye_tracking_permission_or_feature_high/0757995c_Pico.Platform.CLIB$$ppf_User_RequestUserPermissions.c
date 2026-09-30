/*
FUNCTION_NAME: Pico.Platform.CLIB$$ppf_User_RequestUserPermissions
ENTRY_POINT: 0757995c
PROGRAM: cac-libil2cpp.so
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
  long *unaff_x20;
  
  uVar1 = thunk_FUN_03f4e68c(*unaff_x20);
  FUN_074f9228(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_03f86000(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


