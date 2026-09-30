/*
FUNCTION_NAME: FUN_068b3d20
ENTRY_POINT: 068b3d20
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


void FUN_068b3d20(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60 [2];
  undefined8 uStack_4c;
  undefined8 local_3c [2];
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_070c1b68;
  if ((DAT_0755915e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c22b0);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(PTR_DAT_070f13a0);
    FUN_03188a78(OVRPlugin_Sizef_TypeInfo);
    FUN_03188a78(PTR_DAT_070c4180);
    DAT_0755915e = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar2 = FUN_069d8404(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = FUN_069d3b50(param_1,0);
  if (lVar3 != 0) {
    uVar4 = thunk_FUN_069dc13c(lVar3,0);
    uVar4 = FUN_057bf780(*(undefined8 *)PTR_DAT_070c4180,uVar4,
                         *(undefined8 *)OVRPlugin_Sizef_TypeInfo,0);
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c22b0);
    FUN_069d76f4(lVar3,uVar4,0);
    if (lVar3 != 0) {
      lVar3 = FUN_069d6e00(lVar3,0);
      *(long *)(param_1 + 0x50) = lVar3;
      uVar4 = FUN_069d3a80(param_1,0);
      if (lVar3 != 0) {
        FUN_069e7a48(lVar3,uVar4,0,0);
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_070f13a0 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        FUN_069e53e4(local_3c,0);
        local_60[0] = local_3c[0];
        uStack_4c = uStack_28;
        FUN_06824ae4(uVar4,local_60,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


