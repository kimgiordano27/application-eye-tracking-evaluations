/*
FUNCTION_NAME: FUN_06aabf2c
ENTRY_POINT: 06aabf2c
PROGRAM: Waifu-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


void FUN_06aabf2c(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if ((DAT_086e2134 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cc4c8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2134 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(DAT_083cf7d8 + 0x130) <= *(byte *)(*param_2 + 0x130)) {
      plVar5 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_083cf7d8 + 0x130) * 8 + -8) !=
          DAT_083cf7d8) {
        plVar5 = (long *)0x0;
      }
      goto OVRManager__set_foveatedRenderingLevel;
    }
  }
  plVar5 = (long *)0x0;
OVRManager__set_foveatedRenderingLevel:
  plVar6 = (long *)(param_1 + 0xc0);
  *plVar6 = (long)plVar5;
  if (DAT_08908cd0 == 0) {
    *(long **)(param_1 + 200) = param_2;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar5 = (long *)(param_1 + 200);
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
  uVar4 = FUN_0339898c(param_2,DAT_083cc4c8);
  puVar7 = (undefined8 *)(param_1 + 0xd0);
  *puVar7 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


