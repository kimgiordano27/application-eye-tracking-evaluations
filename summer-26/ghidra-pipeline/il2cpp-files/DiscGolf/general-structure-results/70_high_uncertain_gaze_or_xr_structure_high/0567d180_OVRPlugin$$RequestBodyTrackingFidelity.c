/*
FUNCTION_NAME: OVRPlugin$$RequestBodyTrackingFidelity
ENTRY_POINT: 0567d180
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestBodyTrackingFidelity(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = 0;
  FUN_05533808();
  uVar1 = uStack0000000000000008;
  uVar2 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_0565704c(uVar2,0,*unaff_x21,0);
  LeanTween__value(unaff_x23 + 8,uVar2);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
  LeanTween__value(unaff_x19 + 0x28,0);
  return;
}


