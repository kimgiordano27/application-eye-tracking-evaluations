/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_RequestBodyTrackingFidelity
ENTRY_POINT: 05db5c90
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_92_0__ovrp_RequestBodyTrackingFidelity(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0();
  thunk_FUN_032e1da0(PTR_DAT_072b1a48);
  *(undefined1 *)(unaff_x21 + 0x7a2) = 1;
  puVar1 = PTR_DAT_072b20e8;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05da72e4();
  uVar2 = FUN_05da62e8();
  uVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_05db5cf8(uVar3,uVar2);
  return uVar3;
}


