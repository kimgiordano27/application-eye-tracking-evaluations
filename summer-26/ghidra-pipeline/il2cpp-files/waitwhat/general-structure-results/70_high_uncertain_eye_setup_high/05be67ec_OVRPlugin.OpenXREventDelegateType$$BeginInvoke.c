/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$BeginInvoke
ENTRY_POINT: 05be67ec
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


void OVRPlugin_OpenXREventDelegateType__BeginInvoke(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0754ed21 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07114df8);
    FUN_03188a78(PTR_DAT_07114c58);
    FUN_03188a78(PTR_DAT_07116b60);
    FUN_03188a78(PTR_DAT_07116b68);
    DAT_0754ed21 = 1;
  }
  puVar1 = PTR_DAT_07116b60;
  if (*(char *)(param_1 + 0x60) != '\0') {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07114c58);
    FUN_05110878(uVar2,param_1,*(undefined8 *)puVar1,0);
    FUN_05b6ec78(uVar2,0);
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_07114df8);
      FUN_05110878(uVar2,param_1,*(undefined8 *)PTR_DAT_07116b68,0);
      FUN_05b71bd0(lVar3,uVar2,0);
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
  }
  return;
}


