/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.UniversalRenderer$$SetupAfterPostRenderGraphFinalPassDebug
ENTRY_POINT: 06644ae0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Rendering_Universal_UniversalRenderer__SetupAfterPostRenderGraphFinalPassDebug
               (undefined8 param_1,ulong param_2)

{
  undefined4 uVar1;
  long lVar2;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x24;
  long unaff_x25;
  
  for (; (long)unaff_x24 < (long)(int)in_w8; unaff_x24 = unaff_x24 + 1) {
    if (in_w8 <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0(param_1,param_2);
    }
    uVar1 = *(undefined4 *)(unaff_x25 + unaff_x24 * 4);
    FUN_03bedc68();
    param_1 = FUN_06a08a7c(uVar1,0);
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    param_2 = (ulong)((uint)param_1 & 0xff);
  }
  FUN_03bedc68();
  if (unaff_x20 != 0) {
    lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_069a776c(lVar2,0x10,*(undefined4 *)(unaff_x20 + 0x18),4,0);
    *(long *)(unaff_x19 + 0x48) = lVar2;
    if (lVar2 != 0) {
      FUN_069a7e20(lVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


