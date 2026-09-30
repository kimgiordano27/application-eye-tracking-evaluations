/*
FUNCTION_NAME: OVRTelemetry.MarkersAttribute$$.ctor
ENTRY_POINT: 074db060
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRTelemetry_MarkersAttribute___ctor(ulong param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09223d10);
    *(undefined1 *)(unaff_x22 + 0xbef) = 1;
  }
  FUN_071bc31c(param_2,0);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  bVar1 = OVRPlugin_OVRP_1_78_0__ovrp_SetControllerHapticsPcm(param_3,0);
  *(byte *)(param_2 + 0x10) = bVar1 & 1;
  return;
}


