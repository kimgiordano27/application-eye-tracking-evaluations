/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 05bef508
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


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0xca0));
  FUN_03188a78(PTR_DAT_071122b8);
  *(undefined1 *)(unaff_x20 + 0xdaa) = 1;
  if (*(char *)(unaff_x19 + 0x82) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x19 + 0x38);
  uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)PTR_DAT_070c2c58);
  FUN_058a163c();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_071122b8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
        goto LAB_05bef5c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_031c0d08(plVar6,*(long *)PTR_DAT_071122b8,0x15);
LAB_05bef5c4:
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  FUN_05bef5e8();
  return;
}


