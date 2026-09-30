/*
FUNCTION_NAME: OVRPlugin$$GetBoundaryGeometry2
ENTRY_POINT: 05bc0cf4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBoundaryGeometry2(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_07116438;
  puVar1 = PTR_DAT_07116430;
  puVar6 = *(undefined8 **)(unaff_x23 + 0xc58);
  if ((*(byte *)(unaff_x22 + 0xab8) & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_07116440);
    FUN_03188a78(PTR_DAT_07116448);
    FUN_03188a78(PTR_DAT_07113d38);
    FUN_03188a78(PTR_DAT_07113d40);
    FUN_03188a78(PTR_DAT_071162f0);
    FUN_03188a78(PTR_DAT_07116430);
    FUN_03188a78(PTR_DAT_07116438);
    *(undefined1 *)(unaff_x22 + 0xab8) = 1;
  }
  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(*puVar6);
  FUN_058a163c(uVar3,param_1,*(undefined8 *)puVar1,0);
  FUN_05aebbe0(param_1,param_1 + 9,uVar3,0);
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
    uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_07116448);
    FUN_04d68204(uVar3,*(undefined8 *)PTR_DAT_07116440);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar3;
    (**(code **)(*param_1 + 0x368))
              (param_1,**(undefined8 **)(*(long *)puVar2 + 0xb8),*(undefined8 *)(*param_1 + 0x370));
  }
  if (param_1[0x19] != 0) {
    lVar4 = FUN_03a2de08(param_1[0x19],*(undefined8 *)PTR_DAT_07113d38);
    param_1[0x27] = lVar4;
    if (param_1[0x24] == 0) {
      lVar4 = FUN_069d3b50(param_1,0);
      if (lVar4 == 0) goto LAB_05bc0eb8;
      uVar3 = FUN_03ac2e98(lVar4,*(undefined8 *)PTR_DAT_07113d40);
      FUN_05bc0ebc(param_1,uVar3);
    }
    puVar1 = PTR_DAT_071162f0;
    if (param_1[0x19] != 0) {
      lVar5 = param_1[0x26];
      uVar3 = FUN_069d3a80(param_1[0x19],0);
      lVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar1);
      FUN_05bbfabc(lVar4,lVar5,uVar3);
      param_1[0x28] = lVar4;
      FUN_05aebc84(param_1,param_1 + 9,0);
      return;
    }
  }
LAB_05bc0eb8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


