/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionDiscovery
ENTRY_POINT: 05d2c878
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StartColocationSessionDiscovery(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x20 + 0xd40);
  if ((*(byte *)(unaff_x19 + 0x958) & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb8d40);
    *(undefined1 *)(unaff_x19 + 0x958) = 1;
  }
  uVar1 = thunk_FUN_0301080c(*plVar2);
  FUN_05b32c00(uVar1,0);
  **(undefined8 **)(*plVar2 + 0xb8) = uVar1;
  thunk_FUN_03048534(*(undefined8 *)(*plVar2 + 0xb8),uVar1);
  return;
}


