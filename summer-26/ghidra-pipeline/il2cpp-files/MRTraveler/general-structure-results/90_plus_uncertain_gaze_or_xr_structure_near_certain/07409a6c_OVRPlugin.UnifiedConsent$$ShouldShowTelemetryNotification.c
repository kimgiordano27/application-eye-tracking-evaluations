/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 07409a6c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint unaff_w19;
  long *unaff_x20;
  undefined8 uVar3;
  long *unaff_x23;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(param_1);
  }
  uVar1 = FUN_085dfaac();
  if ((uVar1 & 1) == 0) {
    do {
      unaff_w19 = unaff_w19 - 1;
      if ((int)unaff_w19 < 0) goto LAB_07409a90;
      lVar2 = *unaff_x20;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      uVar3 = *(undefined8 *)(lVar2 + (ulong)unaff_w19 * 8 + 0x20);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      uVar1 = FUN_085dfaac(uVar3);
    } while ((uVar1 & 1) == 0);
  }
  else {
LAB_07409a90:
    unaff_w19 = 0xffffffff;
  }
  return unaff_w19;
}


