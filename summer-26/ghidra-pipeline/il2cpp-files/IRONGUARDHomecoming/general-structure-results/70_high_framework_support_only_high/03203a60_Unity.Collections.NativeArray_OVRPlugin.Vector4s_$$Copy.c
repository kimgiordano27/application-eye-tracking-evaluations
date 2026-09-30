/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 03203a60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if (0 < *(int *)(unaff_x20 + 0x18)) {
                    /* try { // try from 03203a78 to 03303a8f has its CatchHandler @ 03203aac */
    FUN_0358d498(*unaff_x19,0,param_1,0,*(int *)(unaff_x20 + 0x18),0);
  }
                    /* try { // try from 03203a90 to 03303ac3 has its CatchHandler @ 03203a08 */
  *unaff_x19 = param_1;
  thunk_FUN_01f51358();
  return;
}


