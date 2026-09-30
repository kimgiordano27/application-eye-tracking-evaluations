/*
FUNCTION_NAME: Pico.Platform.CLIB.__Internal$$ppf_User_RequestUserPermissions
ENTRY_POINT: 0501d104
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Pico_Platform_CLIB___Internal__ppf_User_RequestUserPermissions
               (undefined8 param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *(long *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(long *)(param_2 + 0x20) = param_3;
  thunk_FUN_02bb0e9c();
  cVar1 = *(char *)(param_4 + 0x52);
  *(long *)(param_2 + 0x40) = param_2;
  uVar2 = FUN_02b3c920(param_4);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar3 = thunk_FUN_02b86934(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar3,0);
    }
  }
  else if (cVar1 == '\x06') {
    *(code **)(param_2 + 0x18) = FUN_02abb1e4;
    goto LAB_0501d160;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x20);
LAB_0501d160:
  *(code **)(param_2 + 0x38) = FUN_02abb154;
  return;
}


