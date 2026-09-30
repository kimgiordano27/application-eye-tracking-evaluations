/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 05db69c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x1e0));
  *(undefined1 *)(unaff_x21 + 1999) = 1;
  puVar1 = PTR_DAT_072b21e0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_05da72e4();
  uVar2 = FUN_05da6ba0();
  uVar3 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
  FUN_05dcae8c(uVar3,uVar2,0);
  return uVar3;
}


