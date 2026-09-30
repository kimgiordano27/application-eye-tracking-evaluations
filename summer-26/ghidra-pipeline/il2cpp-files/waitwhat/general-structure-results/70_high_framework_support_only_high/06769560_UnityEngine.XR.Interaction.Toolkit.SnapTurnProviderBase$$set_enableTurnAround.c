/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase$$set_enableTurnAround
ENTRY_POINT: 06769560
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_SnapTurnProviderBase__set_enableTurnAround(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 067693b0 with catch @ 06769560 */
                    /* catch() { ... } // from try @ 06769370 with catch @ 06769564 */
  plVar7 = *(long **)(unaff_x20 + 0xff8);
  if ((*(byte *)(unaff_x21 + 0x5d6) & 1) == 0) {
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(PTR_DAT_07110870);
    FUN_03188a78(PTR_DAT_070f2ff8);
    FUN_03188a78(Sentry_SentrySdk_TypeInfo);
    FUN_03188a78(Sentry_SentrySession_TypeInfo);
    FUN_03188a78(Sentry_SentrySpan_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x5d6) = 1;
  }
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar2 = PTR_DAT_07110870;
  if (*(int *)(*plVar7 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_0674c560(0);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_045c6304(&stack0x00000010,uVar4,4,1,*(undefined8 *)puVar2);
  *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000010;
  iVar5 = FUN_0674c560(0);
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  iVar1 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar1 = iVar5;
  }
  FUN_069a776c(lVar6,0x200,iVar1 >> 2,0x10,0);
  *(long *)(unaff_x19 + 0x88) = lVar6;
  if (lVar6 != 0) {
    thunk_FUN_069a84dc(lVar6,*(undefined8 *)Sentry_SentrySpan_TypeInfo,0);
    FUN_0674c568(0);
    FUN_045c6304();
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    iVar5 = FUN_0674c568(0);
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar3);
    iVar1 = iVar5 + 3;
    if (-1 < iVar5) {
      iVar1 = iVar5;
    }
    FUN_069a776c(lVar6,0x200,iVar1 >> 2,0x10,0);
    *(long *)(unaff_x19 + 0xa0) = lVar6;
    if (lVar6 != 0) {
      thunk_FUN_069a84dc(lVar6,*(undefined8 *)Sentry_SentrySession_TypeInfo,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


