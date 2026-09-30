/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 05be81c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar2 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar3,uVar4,*(undefined8 *)PTR_DAT_07116bd8,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar3;
  }
  if (unaff_x19 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_07116bd0 + 0xe4);
    *(long *)(unaff_x19 + 0x78) = lVar3;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_050661bc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


