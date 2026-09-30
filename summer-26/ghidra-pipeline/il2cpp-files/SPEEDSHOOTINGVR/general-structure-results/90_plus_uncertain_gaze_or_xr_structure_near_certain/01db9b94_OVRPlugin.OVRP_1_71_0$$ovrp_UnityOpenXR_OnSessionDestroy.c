/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionDestroy
ENTRY_POINT: 01db9b94
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionDestroy(void)

{
  long *unaff_x23;
  
  OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported();
  if (DAT_0247da80 == '\0') {
    FUN_00fdc2e4(PTR_DAT_0234bc90);
    DAT_0247da80 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  return;
}


