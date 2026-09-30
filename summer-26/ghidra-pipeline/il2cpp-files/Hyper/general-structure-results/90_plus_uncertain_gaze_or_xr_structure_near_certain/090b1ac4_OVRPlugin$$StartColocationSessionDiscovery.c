/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 090b1ac4
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x21;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xf78));
  *(undefined1 *)(unaff_x21 + 0x312) = 1;
  uVar1 = FUN_05affce8();
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_049ee3d8();
  uVar1 = FUN_05affce8();
  *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x50),uVar1);
  return;
}


