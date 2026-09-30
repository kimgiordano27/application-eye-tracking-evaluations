/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 05be8144
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


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_07116bc0;
  if ((DAT_0754ed95 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_07116bc8);
    FUN_03188a78(PTR_DAT_07116bd0);
    FUN_03188a78(PTR_DAT_07116bd8);
    FUN_03188a78(PTR_DAT_07116bc0);
    DAT_0754ed95 = 1;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar2;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07116bd8,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar5;
  }
  puVar2 = PTR_DAT_07116bc8;
  if (param_1 != 0) {
    iVar1 = *(int *)(*(long *)PTR_DAT_07116bd0 + 0xe4);
    *(long *)(param_1 + 0x78) = lVar5;
    if (iVar1 == 0) {
      thunk_FUN_031e5338();
    }
    FUN_050661bc(param_1,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


