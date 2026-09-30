/*
FUNCTION_NAME: Cognitive3D.ActiveSession.RenderEyetracking.IVRSystem._GetMatrix34TrackedDeviceProperty$$Invoke
ENTRY_POINT: 04317df0
PROGRAM: m3ar-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


bool Cognitive3D_ActiveSession_RenderEyetracking_IVRSystem__GetMatrix34TrackedDeviceProperty__Invoke
               (undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = FUN_074c32b4(param_1,0);
  if (lVar2 < unaff_x20) {
                    /* try { // try from 04317e00 to 04417e0f has its CatchHandler @ 04317efc */
    bVar1 = *(long *)(unaff_x19 + 0x18) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


