/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 074a1d8c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_03db619c();
    }
    FUN_074a1ae0(unaff_x19);
    lVar1 = (long)unaff_w22;
    unaff_w22 = unaff_w22 + 1;
    if ((unaff_x21 <= lVar1) || (unaff_x19 = FUN_074a1a0c(), unaff_x19 == 0)) break;
    in_w8 = *(int *)(*unaff_x20 + 0xe0);
  }
  return;
}


