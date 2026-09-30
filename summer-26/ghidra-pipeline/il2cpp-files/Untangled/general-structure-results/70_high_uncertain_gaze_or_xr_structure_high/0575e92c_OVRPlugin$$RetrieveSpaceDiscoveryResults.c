/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceDiscoveryResults
ENTRY_POINT: 0575e92c
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin__RetrieveSpaceDiscoveryResults(void)

{
  undefined8 uVar1;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x21;
  
  *(undefined1 *)(unaff_x19 + 0x18) = in_w8;
  FUN_05692f24();
  FUN_056f1adc();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = Meta_XR_MetaXRFeature__OnSessionStateChange();
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x10),uVar1);
  return;
}


