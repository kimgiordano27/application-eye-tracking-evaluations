/*
FUNCTION_NAME: FUN_04937904
ENTRY_POINT: 04937904
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_04937904(long param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_07548fa2 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f1790);
    DAT_07548fa2 = 1;
  }
  if (*(long *)(param_1 + 0x4c8) != 0) {
    lVar1 = FUN_06b1e310(*(long *)(param_1 + 0x4c8),0);
    if (lVar1 == param_1) {
      if (*(long *)(param_1 + 0x4c8) == 0) goto System_ReadOnlySpan<OVRPlugin_Vector3f>__CopyTo;
      FUN_06b2a300(*(long *)(param_1 + 0x4c8),0);
    }
    *(undefined8 *)(param_1 + 0x4c8) = 0;
  }
  if (param_2 == (long *)0x0) {
    param_2 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)PTR_DAT_070f1790);
    FUN_06b2235c(param_2,0);
    if (param_2 == (long *)0x0) goto System_ReadOnlySpan<OVRPlugin_Vector3f>__CopyTo;
    FUN_06b21f6c(param_2,1,0);
  }
  *(long **)(param_1 + 0x4c8) = param_2;
  (**(code **)(*param_2 + 0x248))(param_2,1,*(undefined8 *)(*param_2 + 0x250));
  lVar2 = *(long *)(param_1 + 0x4c8);
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
  }
  if (lVar2 != 0) {
    FUN_06b243cc(lVar2,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x1d8),0);
    FUN_06b29a20(param_1,*(undefined8 *)(param_1 + 0x4c8),0);
    return;
  }
System_ReadOnlySpan<OVRPlugin_Vector3f>__CopyTo:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


