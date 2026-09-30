/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 07417738
PROGRAM: MRTraveler-libil2cpp.so
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
OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 uVar2;
  long unaff_x21;
  long *plVar3;
  long unaff_x22;
  
  plVar3 = *(long **)(unaff_x21 + 0x158);
  if ((*(byte *)(unaff_x22 + 400) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08eae158);
    FUN_03c8f898(PTR_DAT_08e80830);
    *(undefined1 *)(unaff_x22 + 400) = 1;
  }
  puVar1 = PTR_DAT_08e80830;
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  __ptr = (void *)FUN_0740f4a0(param_2);
  uVar2 = FUN_074177d4(param_1,__ptr);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  free(__ptr);
  return uVar2;
}


