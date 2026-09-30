/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 04c24834
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation(long param_1)

{
  long lVar1;
  
  lVar1 = thunk_FUN_02c7737c(*(undefined8 *)(param_1 + 0x810));
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  thunk_FUN_02c7737c(PTR_DAT_065ce860);
                    /* try { // try from 04c2485c to 04d2495b has its CatchHandler @ 04c2461c */
  FUN_0411bec4();
  return;
}


