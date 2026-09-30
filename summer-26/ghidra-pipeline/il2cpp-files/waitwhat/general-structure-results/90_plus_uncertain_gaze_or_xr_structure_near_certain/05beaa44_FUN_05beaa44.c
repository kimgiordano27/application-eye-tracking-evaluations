/*
FUNCTION_NAME: FUN_05beaa44
ENTRY_POINT: 05beaa44
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05beaa44(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_0754ed52 & 1) == 0) {
    FUN_03188a78(PTR_DAT_071122b8);
    DAT_0754ed52 = 1;
  }
  plVar1 = (long *)FUN_05bea628(param_1);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_071122b8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
        goto OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08(plVar1,*(long *)PTR_DAT_071122b8,7);
OVRPlugin_UnifiedConsent__ShouldShowTelemetryConsentWindow:
                    /* WARNING: Could not recover jumptable at 0x05beaae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return;
}


