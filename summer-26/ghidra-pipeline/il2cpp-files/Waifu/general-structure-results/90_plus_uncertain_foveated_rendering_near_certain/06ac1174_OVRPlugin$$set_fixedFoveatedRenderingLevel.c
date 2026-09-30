/*
FUNCTION_NAME: OVRPlugin$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 06ac1174
PROGRAM: Waifu-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void OVRPlugin__set_fixedFoveatedRenderingLevel(ulong param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c85c8,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x20f) = 1;
  }
  plVar6 = (long *)(param_2 + 0x58);
  plVar5 = (long *)FUN_0687ac10(*plVar6);
  lVar4 = DAT_083c85c8;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 == DAT_083c85c8) {
      *plVar6 = (long)plVar5;
      if (*plVar5 == lVar4) goto LAB_06ac11d8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec();
  }
  *plVar6 = 0;
LAB_06ac11d8:
  if (DAT_08908cd0 != 0) {
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
  return;
}


