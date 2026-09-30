/*
FUNCTION_NAME: FUN_06769544
ENTRY_POINT: 06769544
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06769544(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_070f2ff8;
                    /* catch() { ... } // from try @ 067691ec with catch @ 06769544 */
  if ((DAT_075585d6 & 1) == 0) {
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    FUN_03188a78(PTR_DAT_07110870);
    FUN_03188a78(PTR_DAT_070f2ff8);
    FUN_03188a78(Sentry_SentrySdk_TypeInfo);
    FUN_03188a78(Sentry_SentrySession_TypeInfo);
    FUN_03188a78(Sentry_SentrySpan_TypeInfo);
    DAT_075585d6 = 1;
  }
  puVar4 = OVRPlugin_TrackingConfidence___TypeInfo;
  puVar3 = PTR_DAT_07110870;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_0674c560(0);
  local_40 = 0;
  uStack_38 = 0;
  FUN_045c6304(&local_40,uVar5,4,1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x80) = uStack_38;
  *(undefined8 *)(param_1 + 0x78) = local_40;
  iVar6 = FUN_0674c560(0);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar4);
  iVar1 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar1 = iVar6;
  }
  FUN_069a776c(lVar7,0x200,iVar1 >> 2,0x10,0);
  *(long *)(param_1 + 0x88) = lVar7;
  if (lVar7 != 0) {
    thunk_FUN_069a84dc(lVar7,*(undefined8 *)Sentry_SentrySpan_TypeInfo,0);
    uVar5 = FUN_0674c568(0);
    local_50 = 0;
    uStack_48 = 0;
    FUN_045c6304(&local_50,uVar5,4,1,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x98) = uStack_48;
    *(undefined8 *)(param_1 + 0x90) = local_50;
    iVar6 = FUN_0674c568(0);
    lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar4);
    iVar1 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar1 = iVar6;
    }
    FUN_069a776c(lVar7,0x200,iVar1 >> 2,0x10,0);
    *(long *)(param_1 + 0xa0) = lVar7;
    if (lVar7 != 0) {
      thunk_FUN_069a84dc(lVar7,*(undefined8 *)Sentry_SentrySession_TypeInfo,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


