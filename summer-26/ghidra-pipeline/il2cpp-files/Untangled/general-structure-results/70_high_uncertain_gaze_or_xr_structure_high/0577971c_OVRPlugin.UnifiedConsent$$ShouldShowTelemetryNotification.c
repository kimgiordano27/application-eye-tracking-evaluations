/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 0577971c
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long *plVar3;
  long unaff_x21;
  
  plVar3 = (long *)*unaff_x20;
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d5a000);
    FUN_02f07e70(PTR_DAT_06d36fa0);
    *(undefined1 *)(unaff_x21 + 0xec0) = 1;
  }
  puVar1 = PTR_DAT_06d36fa0;
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  __ptr = (void *)FUN_057759cc(param_2);
  uVar2 = FUN_057797a4();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


