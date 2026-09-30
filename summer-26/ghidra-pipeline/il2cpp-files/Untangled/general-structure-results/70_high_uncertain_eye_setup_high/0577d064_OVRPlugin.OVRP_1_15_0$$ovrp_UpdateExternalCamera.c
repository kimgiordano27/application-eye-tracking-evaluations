/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 0577d064
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(void)

{
  void *__ptr;
  undefined8 uVar1;
  int in_w8;
  long unaff_x25;
  long *plVar2;
  
  plVar2 = *(long **)(unaff_x25 + 4000);
  if (in_w8 == 0) {
    thunk_FUN_02f12b58();
  }
  __ptr = (void *)FUN_057759cc();
  uVar1 = FUN_0577d0d4();
  if (*(int *)(*plVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58(*plVar2);
  }
  free(__ptr);
  return uVar1;
}


