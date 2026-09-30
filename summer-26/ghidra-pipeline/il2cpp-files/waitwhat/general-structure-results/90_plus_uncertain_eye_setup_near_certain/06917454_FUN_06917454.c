/*
FUNCTION_NAME: FUN_06917454
ENTRY_POINT: 06917454
PROGRAM: waitwhat-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_06917454(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_OVRP_1_56_0_TypeInfo;
  if ((bRam000000000755951f & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_03188a78(System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_TypeInfo);
    FUN_03188a78(UnityEngine_UIElements_DropdownMenu_<>c__DisplayClass13_0_TypeInfo);
    bRam000000000755951f = 1;
  }
  lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar1);
  FUN_05971910(lVar3,0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    *(long *)(param_1 + 0x38) = lVar3;
    uVar5 = DAT_012e2358;
    *(undefined8 *)(lVar3 + 0x10) = DAT_012e2358;
    lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
    FUN_05971910(lVar3,0);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)puVar1;
      *(undefined8 *)(lVar3 + 0x10) = uVar5;
      *(long *)(param_1 + 0x48) = lVar3;
      lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
      FUN_05971910(lVar3,0);
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)puVar1;
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        *(long *)(param_1 + 0x58) = lVar3;
        lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar4);
        FUN_05971910(lVar3,0);
        if (lVar3 != 0) {
          uVar4 = *(undefined8 *)puVar1;
          *(long *)(param_1 + 0x68) = lVar3;
          uVar5 = _UNK_012e1bf8;
          *(undefined8 *)(lVar3 + 0x10) = _UNK_012e1bf8;
          lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (uVar4);
          FUN_05971910(lVar3,0);
          if (lVar3 != 0) {
            uVar4 = *(undefined8 *)puVar1;
            *(undefined8 *)(lVar3 + 0x10) = uVar5;
            *(long *)(param_1 + 0x78) = lVar3;
            lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (uVar4);
            FUN_05971910(lVar3,0);
            puVar2 = System_Xml_DtdParser_ParseElementOnlyContent_LocalFrame_TypeInfo;
            puVar1 = UnityEngine_UIElements_DropdownMenu_<>c__DisplayClass13_0_TypeInfo;
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x10) = uVar5;
              *(long *)(param_1 + 0x88) = lVar3;
              uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)puVar1);
              FUN_04ce4180(uVar5,*(undefined8 *)puVar2);
              *(undefined8 *)(param_1 + 0x98) = uVar5;
              thunk_FUN_069d3450(param_1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


