/*
FUNCTION_NAME: OVRTelemetryMarker$$Dispose
ENTRY_POINT: 04fbec90
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


undefined8 OVRTelemetryMarker__Dispose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int in_w8;
  undefined8 *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04fb08f8();
  uVar1 = FUN_04faf70c();
  uVar2 = thunk_FUN_02b79644(*unaff_x20);
  OVRTelemetryMarker_OVRTelemetryMarkerState__set_Result(uVar2,uVar1);
  return uVar2;
}


