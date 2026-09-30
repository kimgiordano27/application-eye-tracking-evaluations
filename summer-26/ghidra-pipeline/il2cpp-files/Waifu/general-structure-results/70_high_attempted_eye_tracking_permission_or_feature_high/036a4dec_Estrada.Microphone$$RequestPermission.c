/*
FUNCTION_NAME: Estrada.Microphone$$RequestPermission
ENTRY_POINT: 036a4dec
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void Estrada_Microphone__RequestPermission(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_079b2acc(0xff800000,param_1,DAT_08446dc0,0xffffffff);
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  FUN_07a22574(*(long *)(unaff_x19 + 0x30),0);
  if (*(char *)(unaff_x19 + 0x29) != '\0') {
    uVar1 = FUN_06660dbc(*(undefined8 *)(unaff_x19 + 0x20),DAT_08446db0,0);
    FUN_07a06638(uVar1,DAT_08459648,0);
    return;
  }
  return;
}


