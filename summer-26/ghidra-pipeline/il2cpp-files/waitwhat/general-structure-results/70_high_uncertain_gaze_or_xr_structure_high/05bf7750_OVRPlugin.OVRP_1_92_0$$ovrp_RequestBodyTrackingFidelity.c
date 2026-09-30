/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 05bf7750
PROGRAM: waitwhat-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = FUN_05bf77c0();
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_05bf7958(), (uVar2 & 1) == 0)) &&
     (puVar1 = PTR_DAT_070c2418, *(char *)(unaff_x19 + 0x90) == '\0')) {
    *(undefined1 *)(unaff_x19 + 0x90) = 1;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0698f0e8(*(undefined8 *)PTR_DAT_07116f38,0);
    return;
  }
  return;
}


