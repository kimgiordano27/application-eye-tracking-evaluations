/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 07ca0c58
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 uVar2;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  uVar1 = thunk_FUN_04485110(uVar2,*unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
  uVar1 = thunk_FUN_04485110(uVar2,*unaff_x23);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar1);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar1 = thunk_FUN_04485110(uVar2,*unaff_x22);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
  uVar1 = thunk_FUN_04485110(uVar2,*unaff_x22);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38),uVar1);
  return;
}


