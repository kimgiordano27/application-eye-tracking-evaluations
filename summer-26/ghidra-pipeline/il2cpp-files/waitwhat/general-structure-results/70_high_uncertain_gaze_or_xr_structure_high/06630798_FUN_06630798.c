/*
FUNCTION_NAME: FUN_06630798
ENTRY_POINT: 06630798
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


undefined8 FUN_06630798(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_070f1980;
  if ((DAT_07557b08 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1980);
    FUN_03188a78(OVRPlugin_TrackingConfidence___TypeInfo);
    DAT_07557b08 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x38);
  if (lVar5 != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
    }
    uVar3 = FUN_069a7b84(lVar5,0);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)puVar1;
      goto LAB_0663086c;
    }
  }
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)OVRPlugin_TrackingConfidence___TypeInfo);
  FUN_069a776c(uVar4,0x20,1,4,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38) = uVar4;
LAB_0663086c:
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x38);
}


