/*
FUNCTION_NAME: Haptics.HapticsController$$RequestPermission
ENTRY_POINT: 08934c50
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 Haptics_HapticsController__RequestPermission(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac495f0);
    *(undefined1 *)(unaff_x20 + 0x796) = 1;
  }
  uVar1 = thunk_FUN_04983f60(*unaff_x21);
  FUN_08934ba0();
                    /* try { // try from 08934c84 to 08a34cc3 has its CatchHandler @ 08934bd4 */
  return uVar1;
}


