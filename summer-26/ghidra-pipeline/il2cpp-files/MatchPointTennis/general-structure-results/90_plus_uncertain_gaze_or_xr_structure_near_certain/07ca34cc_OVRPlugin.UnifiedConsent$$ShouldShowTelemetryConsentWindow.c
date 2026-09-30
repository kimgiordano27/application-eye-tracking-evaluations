/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryConsentWindow
ENTRY_POINT: 07ca34cc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow(undefined8 param_1)

{
  char in_NG;
  char in_OV;
  ulong uVar1;
  uint in_w8;
  long lVar2;
  long unaff_x21;
  uint uVar3;
  
  if (in_NG == in_OV) {
    uVar3 = 0;
    do {
      if (in_w8 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e4c();
      }
      lVar2 = *(long *)(unaff_x21 + (long)(int)uVar3 * 8 + 0x20);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar1 = FUN_07ca35e8(lVar2);
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 07ca351c to 07da3523 has its CatchHandler @ 07ca3920 */
        FUN_07ca3538(param_1,lVar2);
        return;
      }
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)in_w8);
  }
  return;
}


