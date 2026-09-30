/*
FUNCTION_NAME: RequestPermissions$$RequestMicrophonePermission
ENTRY_POINT: 07d3ff8c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


byte RequestPermissions__RequestMicrophonePermission
               (float *param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
               undefined1 param_5 [16])

{
  bool in_NG;
  byte bVar1;
  byte unaff_w20;
  byte unaff_w21;
  float fVar2;
  float fVar3;
  float unaff_s8;
  float unaff_s10;
  float unaff_s11;
  
  fVar2 = param_4._0_4_ - param_5._0_4_;
  fVar3 = param_4._4_4_ - param_5._4_4_;
  if (param_2 <= *param_1 * unaff_s10) {
    param_2 = *param_1 * unaff_s10;
  }
  bVar1 = FUN_095a4fa0(0,0);
                    /* try { // try from 07d3ffcc to 07e3ffff has its CatchHandler @ 07d400f8 */
  return (bVar1 | unaff_w20 | unaff_w21 | !in_NG | param_2 <= ABS(unaff_s11 - unaff_s8) |
                  0.0 < fVar2 * fVar2 + fVar3 * fVar3) & 1;
}


