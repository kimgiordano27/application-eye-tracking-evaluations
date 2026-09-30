/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 01f941a8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  long unaff_x24;
  undefined8 *unaff_x26;
  uint unaff_w29;
  
  if (unaff_w29 < *(uint *)(unaff_x24 + 0x18)) {
    return *unaff_x26;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


