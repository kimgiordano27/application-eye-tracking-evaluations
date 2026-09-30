/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$EndInvoke
ENTRY_POINT: 05be6868
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__EndInvoke(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  FUN_05110878();
  FUN_05b6ec78(param_1,0);
  lVar2 = *(long *)(unaff_x19 + 0x58);
  if (lVar2 != 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07114df8);
    FUN_05110878();
    FUN_05b71bd0(lVar2,uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
  }
  return;
}


