/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 05bc0dd8
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


void OVRPlugin__GetAppPerfStats(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  long *unaff_x21;
  
  FUN_04d68204(param_2,*param_1);
  **(undefined8 **)(*unaff_x21 + 0xb8) = unaff_x20;
  (**(code **)(*unaff_x19 + 0x368))();
  if (unaff_x19[0x19] != 0) {
    lVar2 = FUN_03a2de08(unaff_x19[0x19],*(undefined8 *)PTR_DAT_07113d38);
    unaff_x19[0x27] = lVar2;
    if (unaff_x19[0x24] == 0) {
      lVar2 = FUN_069d3b50();
      if (lVar2 == 0) goto LAB_05bc0eb8;
      FUN_03ac2e98(lVar2,*(undefined8 *)PTR_DAT_07113d40);
      FUN_05bc0ebc();
    }
    puVar1 = PTR_DAT_071162f0;
    if (unaff_x19[0x19] != 0) {
      lVar4 = unaff_x19[0x26];
      uVar3 = FUN_069d3a80(unaff_x19[0x19],0);
      lVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar1);
      FUN_05bbfabc(lVar2,lVar4,uVar3);
      unaff_x19[0x28] = lVar2;
      FUN_05aebc84();
      return;
    }
  }
LAB_05bc0eb8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


