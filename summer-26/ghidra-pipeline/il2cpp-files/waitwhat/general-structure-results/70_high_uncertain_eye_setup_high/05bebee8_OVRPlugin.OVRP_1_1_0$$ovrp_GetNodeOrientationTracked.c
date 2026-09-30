/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodeOrientationTracked
ENTRY_POINT: 05bebee8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetNodeOrientationTracked(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar10;
  uint uVar11;
  
  lVar6 = FUN_03188b1c(*unaff_x21,0x18);
  lVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*unaff_x19);
  FUN_05971910(lVar7,0);
  puVar4 = PTR_DAT_07116c60;
  puVar3 = PTR_DAT_07116c58;
  puVar2 = PTR_DAT_07116c50;
  puVar1 = PTR_DAT_07113448;
  if (lVar7 != 0) {
    uVar11 = 0;
    *(undefined4 *)(lVar7 + 0x10) = 0;
    while( true ) {
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        lVar8 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar8 + 0xb8);
      uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar3);
      FUN_047b477c(uVar9,lVar7,*(undefined8 *)puVar4,0);
      uVar5 = FUN_03bee648(uVar10,uVar9,*(undefined8 *)puVar2);
      if (lVar6 == 0) break;
      if (*(uint *)(lVar6 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      *(undefined4 *)(lVar6 + (long)(int)uVar11 * 4 + 0x20) = uVar5;
      uVar11 = *(int *)(lVar7 + 0x10) + 1;
      *(uint *)(lVar7 + 0x10) = uVar11;
      if (0x17 < (int)uVar11) {
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


