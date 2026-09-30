/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionDiscovery
ENTRY_POINT: 0575e6ac
PROGRAM: Untangled-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StopColocationSessionDiscovery(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xa95) = 1;
  if (*(long **)(unaff_x19 + 0x10) != (long *)0x0) {
    lVar2 = **(long **)(unaff_x19 + 0x10);
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d56c58 + 0x130);
    if (bVar1 <= *(byte *)(lVar2 + 0x130)) {
      return *(long *)(*(long *)(lVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d56c58;
    }
  }
  return false;
}


