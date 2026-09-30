/*
FUNCTION_NAME: FUN_068a923c
ENTRY_POINT: 068a923c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_9;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_9
*/


void FUN_068a923c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = OVRPlugin_OVRP_0_5_0_TypeInfo;
  if ((DAT_075590d1 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_0_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c9c68);
    FUN_03188a78(OVRPlugin_OVRP_0_5_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_101_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_102_0_TypeInfo);
    DAT_075590d1 = 1;
  }
  lVar2 = **(long **)(*(long *)puVar1 + 0xb8);
  if (lVar2 == 0) {
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_068a9030(uVar3,0,*(undefined8 *)OVRPlugin_OVRP_1_102_0_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_070c9c68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = FUN_03a21ea8(uVar3,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo);
    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
  }
  *param_1 = lVar2;
  return;
}


