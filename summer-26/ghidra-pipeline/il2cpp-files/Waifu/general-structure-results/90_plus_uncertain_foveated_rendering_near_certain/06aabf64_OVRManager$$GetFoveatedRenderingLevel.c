/*
FUNCTION_NAME: OVRManager$$GetFoveatedRenderingLevel
ENTRY_POINT: 06aabf64
PROGRAM: Waifu-libil2cpp.so
SCORE: 120
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_4;functionality_foveated_rendering
*/


void OVRManager__GetFoveatedRenderingLevel(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined1 unaff_w22;
  
  FUN_0335b6c8(&DAT_083cf7d8,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x134) = unaff_w22;
  if (unaff_x20 != (long *)0x0) {
    if (*(byte *)(DAT_083cf7d8 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) {
      plVar5 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(DAT_083cf7d8 + 0x130) * 8 + -8)
          != DAT_083cf7d8) {
        plVar5 = (long *)0x0;
      }
      goto OVRManager__set_foveatedRenderingLevel;
    }
  }
  plVar5 = (long *)0x0;
OVRManager__set_foveatedRenderingLevel:
  puVar6 = (undefined8 *)(unaff_x19 + 0xc0);
  *puVar6 = plVar5;
  if (DAT_08908cd0 == 0) {
    *(long **)(unaff_x19 + 200) = unaff_x20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined8 *)(unaff_x19 + 200);
    *puVar6 = unaff_x20;
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = FUN_0339898c();
  puVar6 = (undefined8 *)(unaff_x19 + 0xd0);
  *puVar6 = uVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


