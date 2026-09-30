/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$ovrp_GetActiveController
ENTRY_POINT: 06af7d34
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_9_0__ovrp_GetActiveController(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong in_x9;
  uint in_w10;
  long unaff_x20;
  
  puVar1 = (ulong *)(param_1 + (in_x9 >> 0x12 & 0x7fff) * 8 + (ulong)(in_w10 & 0xffff | 0x40000));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << (in_x9 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (unaff_x20 != 0) {
    if (DAT_086ecee8 == (code *)0x0) {
      DAT_086ecee8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_loop(System.Boolean)");
    }
    (*DAT_086ecee8)();
    FUN_079bc29c(DAT_0842d1f0,12000,1,48000,0,0,0);
    if (DAT_086ecea8 == (code *)0x0) {
      DAT_086ecea8 = (code *)FUN_033d1b68("UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)"
                                         );
    }
    (*DAT_086ecea8)();
    OVRPlugin_OVRP_1_9_0__ovrp_GetBoundaryGeometry2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


