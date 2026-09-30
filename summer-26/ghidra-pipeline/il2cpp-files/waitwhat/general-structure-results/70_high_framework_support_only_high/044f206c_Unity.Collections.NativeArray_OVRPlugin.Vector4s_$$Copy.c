/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Copy
ENTRY_POINT: 044f206c
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


long Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Copy(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  
                    /* try { // try from 044f2074 to 045f2083 has its CatchHandler @ 044f2084 */
  if ((*(byte *)(unaff_x20 + 0x282) & 1) == 0) {
    FUN_03188a78(&DAT_07258ec0);
                    /* catch() { ... } // from try @ 044f2034 with catch @ 044f2084
                       catch() { ... } // from try @ 044f2074 with catch @ 044f2084 */
                    /* try { // try from 044f2088 to 045f208b has its CatchHandler @ 044f2094 */
    *(undefined1 *)(unaff_x20 + 0x282) = 1;
  }
                    /* try { // try from 044f208c to 045f2097 has its CatchHandler @ 044f1fbc */
  plVar3 = (long *)(param_1 + 0x20);
  lVar1 = *plVar3;
  if (lVar1 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 044f2088 with catch @ 044f2094
                        */
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (DAT_07258ec0);
    FUN_05971910(uVar2,0);
    FUN_031c05a4(plVar3,uVar2,0);
    lVar1 = *plVar3;
  }
  return lVar1;
}


