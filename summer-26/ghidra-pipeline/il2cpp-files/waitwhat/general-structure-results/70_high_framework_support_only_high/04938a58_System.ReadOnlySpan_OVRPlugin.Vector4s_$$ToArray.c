/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4s>$$ToArray
ENTRY_POINT: 04938a58
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


void System_ReadOnlySpan<OVRPlugin_Vector4s>__ToArray(long param_1)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x690));
  *(undefined1 *)(unaff_x21 + 0xfa8) = 1;
  Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x22);
  FUN_056d3a24();
  puVar1 = PTR_DAT_070f4690;
  if (unaff_x19 != 0) {
    FUN_03a25910();
    Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
              (*(undefined8 *)puVar1);
    FUN_056d3a24();
    FUN_03a25910();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


