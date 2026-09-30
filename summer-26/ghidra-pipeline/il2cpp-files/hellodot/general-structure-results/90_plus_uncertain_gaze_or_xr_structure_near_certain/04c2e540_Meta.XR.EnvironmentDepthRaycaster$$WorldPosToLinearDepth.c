/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToLinearDepth
ENTRY_POINT: 04c2e540
PROGRAM: hellodot-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToLinearDepth
               (long param_1,undefined4 param_2,undefined8 param_3)

{
                    /* try { // try from 04c2e540 to 04d2e547 has its CatchHandler @ 04c2e590 */
                    /* try { // try from 04c2e548 to 04d2e57f has its CatchHandler @ 04c2e4b8 */
  FUN_04f7383c(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}


