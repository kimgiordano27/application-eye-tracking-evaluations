/*
FUNCTION_NAME: OVRTelemetry.NullTelemetryClient$$DestroyMarkerHandle
ENTRY_POINT: 074daf2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 131
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_4
*/


void OVRTelemetry_NullTelemetryClient__DestroyMarkerHandle(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xbed) = 1;
  FUN_071bc31c();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uVar1 = OVRPlugin_OVRP_1_78_0__ovrp_GetEyeTrackingEnabled();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  uVar1 = OVRPlugin_OVRP_1_78_0__ovrp_GetEyeGazesState();
  *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
  thunk_FUN_03d1023c((undefined8 *)(unaff_x19 + 0x18),uVar1);
  return;
}


