/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetPassthroughCapabilityFlags
ENTRY_POINT: 05bf4fd8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetPassthroughCapabilityFlags(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  *(undefined1 *)(unaff_x20 + 0xde8) = 1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar4,uVar5,*(undefined8 *)PTR_DAT_07116e20,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar4;
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_07116e18 + 0xe4);
    *(long *)(unaff_x19 + 0x70) = lVar4;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_050661bc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


