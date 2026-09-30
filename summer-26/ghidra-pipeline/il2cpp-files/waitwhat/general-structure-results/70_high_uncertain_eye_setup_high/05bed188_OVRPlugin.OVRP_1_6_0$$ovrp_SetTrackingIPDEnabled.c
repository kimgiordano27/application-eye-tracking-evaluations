/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetTrackingIPDEnabled
ENTRY_POINT: 05bed188
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_6_0__ovrp_SetTrackingIPDEnabled(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_07116840);
    FUN_03188a78(PTR_DAT_071139d0);
    *(undefined1 *)(unaff_x20 + 0xd84) = 1;
  }
  if (*(long *)(unaff_x19 + 0x70) == 0) {
    lVar1 = FUN_0506e670();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if ((*(char *)(lVar1 + 0x10) != '\0') && (*(char *)(lVar1 + 0x11) != '\0')) {
      uVar2 = FUN_05becd08();
      uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)PTR_DAT_071139d0);
      FUN_05bed220(uVar3,uVar2);
      *(undefined8 *)(unaff_x19 + 0x70) = uVar3;
    }
  }
  return;
}


