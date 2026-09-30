/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 01dbe504
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  
  FUN_00fdc2e4(PTR_DAT_023535b0);
  FUN_00fdc2e4(PTR_DAT_0235a8d8);
  FUN_00fdc2e4(PTR_DAT_0235a7a0);
  *(undefined1 *)(unaff_x19 + 0xa82) = 1;
  puVar1 = PTR_DAT_0235a7a0;
  lVar2 = *(long *)PTR_DAT_0235a7a0;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023535b0);
    FUN_01da9ee4(lVar2,0,*(undefined8 *)PTR_DAT_0235a8d8);
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar3 = *(long *)puVar1;
    }
    plVar4 = (long *)(*(long *)(lVar3 + 0xb8) + 8);
    *plVar4 = lVar2;
    thunk_FUN_0106e12c(plVar4,lVar2);
  }
  return lVar2;
}


