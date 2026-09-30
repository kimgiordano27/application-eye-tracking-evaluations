/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 06b03c8c
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(long param_1)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  undefined4 unaff_w19;
  
  if (*(int *)(*(long *)(param_1 + 0x548) + 0xe0) == 0) {
    FUN_033b9870();
  }
  __ptr = (void *)FUN_06afc048();
  __ptr_00 = (void *)FUN_06afc048();
  uVar1 = FUN_06b03d04(__ptr,__ptr_00,unaff_w19);
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ce7b0);
  }
  free(__ptr);
  free(__ptr_00);
  return uVar1;
}


