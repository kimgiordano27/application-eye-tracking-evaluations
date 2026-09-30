/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetSystemHeadsetType
ENTRY_POINT: 06af7ccc
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetSystemHeadsetType(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  
  uVar4 = FUN_03398188(DAT_083c7bf0,12000);
  puVar5 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar5 = uVar4;
  if (DAT_08908cd0 == 0) {
    *(long *)(unaff_x19 + 0x10) = unaff_x20;
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
    plVar6 = (long *)(unaff_x19 + 0x10);
    *plVar6 = unaff_x20;
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar6 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (DAT_086ecee8 == (code *)0x0) {
    DAT_086ecee8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_loop(System.Boolean)");
  }
  (*DAT_086ecee8)();
  FUN_079bc29c(DAT_0842d1f0,12000,1,48000,0,0,0);
  if (DAT_086ecea8 == (code *)0x0) {
    DAT_086ecea8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)");
  }
  (*DAT_086ecea8)();
  OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2();
  return;
}


