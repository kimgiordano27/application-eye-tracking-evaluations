/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 069a19cc
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


undefined8 OVRTelemetryConstants_OVRManager___cctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_03a8a718(*(undefined8 *)(param_1 + 0xbc0));
  FUN_03a8a718(PTR_DAT_084b7640);
  *(undefined1 *)(unaff_x21 + 0xfeb) = 1;
  puVar1 = PTR_DAT_084b7bc0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_06994314();
  uVar2 = FUN_06992e40();
  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_069a1a38(uVar3,uVar2);
  return uVar3;
}


