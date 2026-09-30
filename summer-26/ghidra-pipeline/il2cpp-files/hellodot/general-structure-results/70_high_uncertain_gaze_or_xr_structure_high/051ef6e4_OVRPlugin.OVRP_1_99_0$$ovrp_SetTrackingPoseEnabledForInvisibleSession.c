/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 051ef6e4
PROGRAM: hellodot-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(void)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  undefined1 in_w8;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0xb50) = in_w8;
  puVar1 = PTR_DAT_065c9178;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  __ptr = (void *)FUN_051e9fc0();
  uVar2 = FUN_051ef744();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


