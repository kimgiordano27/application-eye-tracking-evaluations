/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_TestBoundaryPoint
ENTRY_POINT: 06af770c
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_8_0__ovrp_TestBoundaryPoint(long param_1,undefined8 *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  
  if (0 < *(int *)(param_1 + 200)) {
    iVar5 = 0;
    do {
      FUN_06aca5d4(param_1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 200));
  }
  *param_2 = *(undefined8 *)(param_1 + 0xd8);
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)param_2 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)param_2 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(long *)(param_1 + 0xd8) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar4 != 0)) {
    return 0 < *(int *)(lVar4 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


