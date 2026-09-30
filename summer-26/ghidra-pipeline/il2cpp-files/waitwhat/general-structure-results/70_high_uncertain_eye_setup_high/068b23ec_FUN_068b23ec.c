/*
FUNCTION_NAME: FUN_068b23ec
ENTRY_POINT: 068b23ec
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


void FUN_068b23ec(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_070c2278;
  if ((DAT_0755913b & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2278);
    FUN_03188a78(OVRPlugin_OVRP_1_56_0_TypeInfo);
    DAT_0755913b = 1;
  }
  lVar2 = *(long *)puVar1;
  *(undefined4 *)(param_2 + 0x264) = param_1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_06986514(0);
  if ((uVar3 & 1) != 0) {
    FUN_068aeefc(param_2);
    lVar2 = *(long *)(param_2 + 0x198);
    if (lVar2 == 0) {
LAB_068b24b0:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(long *)(lVar2 + 0x88) == 0) {
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
      FUN_06916424(lVar4,0);
      if (lVar4 == 0) goto LAB_068b24b0;
      uVar5 = *(undefined4 *)(param_2 + 0x260);
      *(long *)(lVar2 + 0x88) = lVar4;
      *(undefined4 *)(lVar4 + 0x10) = uVar5;
      *(undefined4 *)(lVar4 + 0x14) = param_1;
    }
    else {
      *(undefined4 *)(*(long *)(lVar2 + 0x88) + 0x14) = param_1;
    }
  }
  return;
}


