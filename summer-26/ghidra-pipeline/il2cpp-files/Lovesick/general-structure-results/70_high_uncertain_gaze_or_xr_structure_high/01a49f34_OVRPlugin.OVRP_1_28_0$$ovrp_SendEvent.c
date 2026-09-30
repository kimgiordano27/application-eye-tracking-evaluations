/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_SendEvent
ENTRY_POINT: 01a49f34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_28_0__ovrp_SendEvent(void)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  long *unaff_x21;
  
  __ptr = (void *)FUN_01a44d20();
  __ptr_00 = (void *)FUN_01a44d20();
  uVar1 = FUN_01a49f98(__ptr,__ptr_00);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_00d32864(*unaff_x21);
  }
  free(__ptr);
  free(__ptr_00);
  return uVar1;
}


