/*
FUNCTION_NAME: UnityEngine.Mesh$$set_triangles
ENTRY_POINT: 068aef08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_20;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


void UnityEngine_Mesh__set_triangles(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_070c1b68;
  if ((DAT_07559118 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_55_1_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    DAT_07559118 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x198);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar3 = FUN_069d69b8(uVar6,0,0);
  if (((uVar3 & 1) != 0) ||
     (uVar3 = FUN_03a2e25c(param_1,param_1 + 0x198,*(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo),
     (uVar3 & 1) != 0)) {
    return;
  }
  lVar4 = FUN_069d3b50(param_1,0);
  if (lVar4 != 0) {
    lVar4 = FUN_03ac2e98(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    *(long *)(param_1 + 0x198) = lVar4;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x30) = *(undefined1 *)(param_1 + 0x221);
      if (*(long *)(lVar4 + 0x38) == 0) {
        uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
        FUN_06916424(uVar6,0);
        *(undefined8 *)(lVar4 + 0x38) = uVar6;
        lVar4 = *(long *)(param_1 + 0x198);
        if (lVar4 == 0) goto LAB_068af1b0;
      }
      if (*(long *)(lVar4 + 0x38) != 0) {
        lVar5 = *(long *)(lVar4 + 0x48);
        uVar6 = *(undefined8 *)(param_1 + 0x224);
        *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_1 + 0x22c);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x10) = uVar6;
        if (lVar5 == 0) {
          uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
          FUN_06916424(uVar6,0);
          *(undefined8 *)(lVar4 + 0x48) = uVar6;
          lVar4 = *(long *)(param_1 + 0x198);
          if (lVar4 == 0) goto LAB_068af1b0;
        }
        if (*(long *)(lVar4 + 0x48) != 0) {
          uVar1 = *(undefined1 *)(param_1 + 0x238);
          lVar5 = *(long *)(lVar4 + 0x58);
          *(undefined8 *)(*(long *)(lVar4 + 0x48) + 0x10) = *(undefined8 *)(param_1 + 0x230);
          *(undefined1 *)(lVar4 + 0x50) = uVar1;
          if (lVar5 == 0) {
            uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
            FUN_06916424(uVar6,0);
            *(undefined8 *)(lVar4 + 0x58) = uVar6;
            lVar4 = *(long *)(param_1 + 0x198);
            if (lVar4 == 0) goto LAB_068af1b0;
          }
          if (*(long *)(lVar4 + 0x58) != 0) {
            uVar1 = *(undefined1 *)(param_1 + 0x244);
            lVar5 = *(long *)(lVar4 + 0x68);
            *(undefined8 *)(*(long *)(lVar4 + 0x58) + 0x10) = *(undefined8 *)(param_1 + 0x23c);
            *(undefined1 *)(lVar4 + 0x60) = uVar1;
            if (lVar5 == 0) {
              uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
              FUN_06916424(uVar6,0);
              *(undefined8 *)(lVar4 + 0x68) = uVar6;
              lVar4 = *(long *)(param_1 + 0x198);
              if (lVar4 == 0) goto LAB_068af1b0;
            }
            if (*(long *)(lVar4 + 0x68) != 0) {
              uVar1 = *(undefined1 *)(param_1 + 0x250);
              lVar5 = *(long *)(lVar4 + 0x78);
              *(undefined8 *)(*(long *)(lVar4 + 0x68) + 0x10) = *(undefined8 *)(param_1 + 0x248);
              *(undefined1 *)(lVar4 + 0x70) = uVar1;
              if (lVar5 == 0) {
                uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
                FUN_06916424(uVar6,0);
                *(undefined8 *)(lVar4 + 0x78) = uVar6;
                lVar4 = *(long *)(param_1 + 0x198);
                if (lVar4 == 0) goto LAB_068af1b0;
              }
              if (*(long *)(lVar4 + 0x78) != 0) {
                uVar1 = *(undefined1 *)(param_1 + 0x25c);
                lVar5 = *(long *)(lVar4 + 0x88);
                *(undefined8 *)(*(long *)(lVar4 + 0x78) + 0x10) = *(undefined8 *)(param_1 + 0x254);
                *(undefined1 *)(lVar4 + 0x80) = uVar1;
                if (lVar5 == 0) {
                  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
                  FUN_06916424(uVar6,0);
                  *(undefined8 *)(lVar4 + 0x88) = uVar6;
                  lVar4 = *(long *)(param_1 + 0x198);
                  if (lVar4 == 0) goto LAB_068af1b0;
                }
                if (*(long *)(lVar4 + 0x88) != 0) {
                  uVar6 = *(undefined8 *)(param_1 + 0x260);
                  *(undefined1 *)(lVar4 + 0x90) = *(undefined1 *)(param_1 + 0x268);
                  *(undefined8 *)(*(long *)(lVar4 + 0x88) + 0x10) = uVar6;
                  FUN_06916f70(lVar4,param_1,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_068af1b0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


