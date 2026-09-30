/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$CacheCameraRig
ENTRY_POINT: 089f2a7c
PROGRAM: Hyper-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__CacheCameraRig
               (long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_088ef30c(param_2,10,0);
    FUN_088eeb34(param_2,*(undefined8 *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId(*(long *)(param_1 + 0x10),param_2,0);
    return;
  }
  return;
}


