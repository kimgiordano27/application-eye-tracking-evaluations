/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnEnable
ENTRY_POINT: 08a0b1dc
PROGRAM: Hyper-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnEnable
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


