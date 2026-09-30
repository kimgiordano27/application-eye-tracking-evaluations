/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 069558a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionAdvertisement(long param_1)

{
  long in_x9;
  long in_x10;
  long *plVar1;
  uint in_w11;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_w11 < (uint)in_x9) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = unaff_x20;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      plVar1 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = plVar1;
  if ((uint)*(byte *)(*unaff_x20 + 0x130) < (uint)in_x9) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + in_x9 * 8 + -8) != param_1) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),unaff_x20);
  return;
}


