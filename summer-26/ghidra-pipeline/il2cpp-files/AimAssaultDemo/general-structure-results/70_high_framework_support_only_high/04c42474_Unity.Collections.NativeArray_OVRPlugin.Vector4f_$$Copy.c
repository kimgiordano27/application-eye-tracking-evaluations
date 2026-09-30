/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04c42474
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)thunk_FUN_03799158(param_2,*(long *)(*(long *)(param_1 + 0x10) + 0x80) + 0x40);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c4242c with catch @ 04c42484
                       try { // try from 04c42484 to 04d4249b has its CatchHandler @ 04c423e4 */
  if (*plVar1 != 0) {
                    /* try { // try from 04c4249c to 04d424b3 has its CatchHandler @ 04c42528 */
    FUN_045873ec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


