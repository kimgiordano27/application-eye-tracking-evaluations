/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.SnapTurnProviderBase$$Awake
ENTRY_POINT: 06769578
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_SnapTurnProviderBase__Awake(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
                    /* catch() { ... } // from try @ 067692fc with catch @ 06769578 */
                    /* catch() { ... } // from try @ 0676930c with catch @ 0676957c */
                    /* catch() { ... } // from try @ 0676931c with catch @ 06769580 */
  FUN_03188a78(PTR_DAT_07110870);
                    /* catch() { ... } // from try @ 0676932c with catch @ 06769584 */
                    /* catch() { ... } // from try @ 0676933c with catch @ 06769588 */
                    /* catch() { ... } // from try @ 06769100 with catch @ 0676958c */
  FUN_03188a78(PTR_DAT_070f2ff8);
                    /* catch() { ... } // from try @ 06769110 with catch @ 06769590 */
                    /* catch() { ... } // from try @ 06769128 with catch @ 06769594 */
                    /* catch() { ... } // from try @ 06769154 with catch @ 06769598 */
  FUN_03188a78(Sentry_SentrySdk_TypeInfo);
                    /* catch() { ... } // from try @ 06769174 with catch @ 0676959c */
                    /* catch() { ... } // from try @ 067694a8 with catch @ 067695a0 */
  FUN_03188a78(Sentry_SentrySession_TypeInfo);
  FUN_03188a78(Sentry_SentrySpan_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x5d6) = 1;
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar2 = PTR_DAT_07110870;
                    /* try { // try from 067695bc to 068695bf has its CatchHandler @ 067695d8 */
                    /* try { // try from 067695c0 to 068695db has its CatchHandler @ 06768e30 */
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 067695bc with catch @ 067695d8 */
    thunk_FUN_031e5338();
  }
                    /* try { // try from 067695dc to 068695e3 has its CatchHandler @ 067695ec */
  uVar4 = FUN_0674c560(0);
                    /* try { // try from 067695e4 to 068695ef has its CatchHandler @ 06768e30 */
                    /* catch() { ... } // from try @ 067695dc with catch @ 067695ec */
                    /* try { // try from 067695f0 to 068696a7 has its CatchHandler @ 067695f0
                       catch() { ... } // from try @ 067695f0 with catch @ 067695f0
                       catch() { ... } // from try @ 0676995c with catch @ 067695f0
                       catch() { ... } // from try @ 067699ac with catch @ 067695f0
                       catch() { ... } // from try @ 06769a18 with catch @ 067695f0
                       catch() { ... } // from try @ 06769a3c with catch @ 067695f0 */
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
                    /* try { // try from 067696a8 to 068696ab has its CatchHandler @ 067699c0 */
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


