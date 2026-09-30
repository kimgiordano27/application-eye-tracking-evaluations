/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_SetMrcAudioSampleRate
ENTRY_POINT: 05be4dbc
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_SetMrcAudioSampleRate(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  plVar7 = *(long **)(unaff_x22 + 0xb30);
  if ((*(byte *)(unaff_x20 + 0xd04) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_07116b38);
    FUN_03188a78(PTR_DAT_07116b40);
    FUN_03188a78(PTR_DAT_07116b48);
    FUN_03188a78(PTR_DAT_07116b30);
    *(undefined1 *)(unaff_x20 + 0xd04) = 1;
  }
  lVar3 = *plVar7;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *plVar7;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*plVar7 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07116b48,0);
    *(long *)(*(long *)(*plVar7 + 0xb8) + 8) = lVar5;
  }
  puVar2 = PTR_DAT_07116b38;
  if (param_1 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_07116b40 + 0xe4);
    *(long *)(param_1 + 0x70) = lVar5;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_050661bc(param_1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


