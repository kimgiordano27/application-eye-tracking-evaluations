/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 06398314
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long OVRPlugin__RequestSceneCapture(long param_1)

{
  undefined4 uVar1;
  long unaff_x19;
  
  FUN_062855bc();
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = FUN_0628930c(0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(unaff_x19 + 0x38);
  thunk_FUN_037aeb94();
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x19 + 0x48);
  thunk_FUN_037aeb94();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x19 + 0x30);
  thunk_FUN_037aeb94();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x19 + 0x58);
  thunk_FUN_037aeb94();
  return param_1;
}


