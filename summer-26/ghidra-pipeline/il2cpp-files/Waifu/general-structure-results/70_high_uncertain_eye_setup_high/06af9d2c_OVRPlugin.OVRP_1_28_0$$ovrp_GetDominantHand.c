/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 06af9d2c
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


void OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(ulong param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auVar9 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_0335b6c8(&DAT_083c9658,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083e50d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d5110,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x21 + 0x516) = 1;
  }
  if (unaff_x20 == 0) {
    FUN_033d1ba8(&DAT_083cb470);
    uVar5 = thunk_FUN_03398a84();
    uVar6 = FUN_033d1ba8(&DAT_08436518);
    FUN_06869f9c(uVar5,uVar6,0);
    uVar6 = FUN_033d1ba8(&DAT_08404ba0);
                    /* WARNING: Subroutine does not return */
    FUN_033d1c20(uVar5,uVar6);
  }
  if (*(int *)(DAT_083c9658 + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar8 = *(long *)(*(long *)(DAT_083c9658 + 0xb8) + 8);
  auVar9 = FUN_03398a84(DAT_083d5110);
  lVar4 = auVar9._0_8_;
  plVar7 = (long *)(lVar4 + 0x10);
  *plVar7 = unaff_x20;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar7 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (lVar8 != 0) {
    FUN_05e74ba0(lVar8,unaff_w19,lVar4,1,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_083e50d8 + 0x20) + 0xc0) + 0x110));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c(lVar4,auVar9._8_8_,lVar4);
}


