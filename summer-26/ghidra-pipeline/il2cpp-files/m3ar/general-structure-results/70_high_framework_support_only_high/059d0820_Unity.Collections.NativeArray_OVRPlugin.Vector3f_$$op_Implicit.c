/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$op_Implicit
ENTRY_POINT: 059d0820
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__op_Implicit(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  
                    /* try { // try from 059d0824 to 05ad0827 has its CatchHandler @ 059d08d8 */
  uVar1 = FUN_040316d0(param_1,unaff_w21);
                    /* try { // try from 059d0828 to 05ad08af has its CatchHandler @ 059d05a0 */
  if (0 < *(int *)(unaff_x19 + 0x18)) {
    FUN_07508590(*(undefined8 *)(unaff_x19 + 0x10),0,uVar1,0,*(int *)(unaff_x19 + 0x18),0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
  return;
}


