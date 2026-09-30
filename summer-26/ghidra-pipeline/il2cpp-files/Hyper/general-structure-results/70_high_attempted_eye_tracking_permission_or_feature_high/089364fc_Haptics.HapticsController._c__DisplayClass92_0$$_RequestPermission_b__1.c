/*
FUNCTION_NAME: Haptics.HapticsController.<>c__DisplayClass92_0$$<RequestPermission>b__1
ENTRY_POINT: 089364fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


long Haptics_HapticsController_<>c__DisplayClass92_0__<RequestPermission>b__1(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_0b32b7b8 & 1) == 0) {
                    /* try { // try from 08936510 to 08a36597 has its CatchHandler @ 089365e4 */
    FUN_04947ee4(PTR_DAT_0ac496a8);
    DAT_0b32b7b8 = 1;
  }
  puVar1 = PTR_DAT_0ac496a8;
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(long *)PTR_DAT_0ac496a8;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  }
  return lVar2;
}


