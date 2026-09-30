/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 06955b0c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionDiscovery(long param_1)

{
  byte bVar1;
  long in_x10;
  long *plVar2;
  long unaff_x19;
  long *unaff_x20;
  
  bVar1 = *(byte *)(param_1 + 0x130);
  if (*(byte *)(in_x10 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = unaff_x20;
    if (*(long *)(*(long *)(in_x10 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
      plVar2 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x20) = plVar2;
  if (*(byte *)(*unaff_x20 + 0x130) < bVar1) {
    unaff_x20 = (long *)0x0;
  }
  else if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != param_1) {
    unaff_x20 = (long *)0x0;
  }
  thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x20),unaff_x20);
  return;
}


