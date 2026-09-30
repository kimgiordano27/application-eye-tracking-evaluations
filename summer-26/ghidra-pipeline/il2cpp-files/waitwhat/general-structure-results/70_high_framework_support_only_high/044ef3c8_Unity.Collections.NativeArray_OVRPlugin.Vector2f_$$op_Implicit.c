/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$op_Implicit
ENTRY_POINT: 044ef3c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_Vector2f>__op_Implicit(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  long unaff_x20;
  
  FUN_03188a78();
                    /* try { // try from 044ef3cc to 045ef3f3 has its CatchHandler @ 044ef33c */
  *(undefined1 *)(unaff_x20 + 0x27f) = 1;
  plVar3 = (long *)(unaff_x19 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (DAT_07258ec0);
                    /* try { // try from 044ef3f4 to 045ef403 has its CatchHandler @ 044ef404 */
    FUN_05971910(uVar2,0);
    FUN_031c05a4(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


