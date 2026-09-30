/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 045066a0
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


long Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (void)

{
  long lVar1;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  
  if (*(int *)(unaff_x21 + 0x18) - unaff_w20 < unaff_w19) {
    FUN_0595040c(0x17,0);
  }
                    /* try { // try from 045066d0 to 046067ef has its CatchHandler @ 045066d0
                       catch() { ... } // from try @ 045066d0 with catch @ 045066d0
                       catch() { ... } // from try @ 04506910 with catch @ 045066d0
                       catch() { ... } // from try @ 045069a8 with catch @ 045066d0
                       catch() { ... } // from try @ 04506a00 with catch @ 045066d0 */
  if ((*(ushort *)(**(long **)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  lVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_04504d18(lVar1,unaff_w19,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x148));
  if (lVar1 != 0) {
    FUN_0595261c(*(undefined8 *)(unaff_x21 + 0x10),unaff_w20,*(undefined8 *)(lVar1 + 0x10),0,
                 unaff_w19,0);
    *(int *)(lVar1 + 0x18) = unaff_w19;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


