/*
FUNCTION_NAME: FUN_06af1290
ENTRY_POINT: 06af1290
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06af1290(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  
  if ((DAT_086e24b1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086e24b1 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(DAT_083cf7d8 + 0x130) <= *(byte *)(*param_2 + 0x130)) {
      plVar5 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_083cf7d8 + 0x130) * 8 + -8) !=
          DAT_083cf7d8) {
        plVar5 = (long *)0x0;
      }
      goto OVRPlugin_GetBoneSkeleton3Delegate__Invoke;
    }
  }
  plVar5 = (long *)0x0;
OVRPlugin_GetBoneSkeleton3Delegate__Invoke:
  plVar4 = (long *)(param_1 + 0x50);
  *plVar4 = (long)plVar5;
  if (DAT_08908cd0 == 0) {
    *(long **)(param_1 + 0x58) = param_2;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar4 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)(param_1 + 0x58);
    *plVar5 = (long)param_2;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


