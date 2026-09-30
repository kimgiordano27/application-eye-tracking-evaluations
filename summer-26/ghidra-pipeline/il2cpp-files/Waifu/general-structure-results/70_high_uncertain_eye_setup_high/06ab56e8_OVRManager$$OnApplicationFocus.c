/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 06ab56e8
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


void OVRManager__OnApplicationFocus(ulong param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x189) = 1;
  }
  if (unaff_x20 != (long *)0x0) {
    if (*(byte *)(DAT_083cf7d8 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) {
      plVar4 = unaff_x20;
      if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(DAT_083cf7d8 + 0x130) * 8 + -8)
          != DAT_083cf7d8) {
        plVar4 = (long *)0x0;
      }
      goto LAB_06ab5748;
    }
  }
  plVar4 = (long *)0x0;
LAB_06ab5748:
  puVar5 = (undefined8 *)(param_2 + 0x30);
  *puVar5 = plVar4;
  if (DAT_08908cd0 == 0) {
    *(long **)(param_2 + 0x38) = unaff_x20;
  }
  else {
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar5 = (undefined8 *)(param_2 + 0x38);
    *puVar5 = unaff_x20;
    puVar1 = &DAT_0873ccb0 + ((ulong)puVar5 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


