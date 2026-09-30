/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 051ef0bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  undefined *puVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar2;
  long *unaff_x21;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_066093f8);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9178);
  *(undefined1 *)(unaff_x22 + 0xaf8) = 1;
  puVar1 = PTR_DAT_065c9178;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  __ptr = (void *)FUN_051e9fc0();
  __ptr_00 = (void *)FUN_051e9fc0();
  uVar2 = FUN_051ef15c(__ptr,__ptr_00);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  free(__ptr);
  free(__ptr_00);
  return uVar2;
}


