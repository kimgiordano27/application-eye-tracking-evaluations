/*
FUNCTION_NAME: UnityEngine.Mesh$$SetTrianglesImpl
ENTRY_POINT: 068aefac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_20;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_7
*/


void UnityEngine_Mesh__SetTrianglesImpl(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  
  lVar2 = FUN_069d3b50();
  if (lVar2 != 0) {
    lVar2 = FUN_03ac2e98(lVar2,*(undefined8 *)OVRPlugin_OVRP_1_55_1_TypeInfo);
    *(long *)(unaff_x19 + 0x198) = lVar2;
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x30) = *(undefined1 *)(unaff_x19 + 0x221);
      if (*(long *)(lVar2 + 0x38) == 0) {
        uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
        FUN_06916424(uVar3,0);
        *(undefined8 *)(lVar2 + 0x38) = uVar3;
        lVar2 = *(long *)(unaff_x19 + 0x198);
        if (lVar2 == 0) goto LAB_068af1b0;
      }
      if (*(long *)(lVar2 + 0x38) != 0) {
        lVar4 = *(long *)(lVar2 + 0x48);
        uVar3 = *(undefined8 *)(unaff_x19 + 0x224);
        *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(unaff_x19 + 0x22c);
        *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x10) = uVar3;
        if (lVar4 == 0) {
          uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
          FUN_06916424(uVar3,0);
          *(undefined8 *)(lVar2 + 0x48) = uVar3;
          lVar2 = *(long *)(unaff_x19 + 0x198);
          if (lVar2 == 0) goto LAB_068af1b0;
        }
        if (*(long *)(lVar2 + 0x48) != 0) {
          uVar1 = *(undefined1 *)(unaff_x19 + 0x238);
          lVar4 = *(long *)(lVar2 + 0x58);
          *(undefined8 *)(*(long *)(lVar2 + 0x48) + 0x10) = *(undefined8 *)(unaff_x19 + 0x230);
          *(undefined1 *)(lVar2 + 0x50) = uVar1;
          if (lVar4 == 0) {
            uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
            FUN_06916424(uVar3,0);
            *(undefined8 *)(lVar2 + 0x58) = uVar3;
            lVar2 = *(long *)(unaff_x19 + 0x198);
            if (lVar2 == 0) goto LAB_068af1b0;
          }
          if (*(long *)(lVar2 + 0x58) != 0) {
            uVar1 = *(undefined1 *)(unaff_x19 + 0x244);
            lVar4 = *(long *)(lVar2 + 0x68);
            *(undefined8 *)(*(long *)(lVar2 + 0x58) + 0x10) = *(undefined8 *)(unaff_x19 + 0x23c);
            *(undefined1 *)(lVar2 + 0x60) = uVar1;
            if (lVar4 == 0) {
              uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
              FUN_06916424(uVar3,0);
              *(undefined8 *)(lVar2 + 0x68) = uVar3;
              lVar2 = *(long *)(unaff_x19 + 0x198);
              if (lVar2 == 0) goto LAB_068af1b0;
            }
            if (*(long *)(lVar2 + 0x68) != 0) {
              uVar1 = *(undefined1 *)(unaff_x19 + 0x250);
              lVar4 = *(long *)(lVar2 + 0x78);
              *(undefined8 *)(*(long *)(lVar2 + 0x68) + 0x10) = *(undefined8 *)(unaff_x19 + 0x248);
              *(undefined1 *)(lVar2 + 0x70) = uVar1;
              if (lVar4 == 0) {
                uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
                FUN_06916424(uVar3,0);
                *(undefined8 *)(lVar2 + 0x78) = uVar3;
                lVar2 = *(long *)(unaff_x19 + 0x198);
                if (lVar2 == 0) goto LAB_068af1b0;
              }
              if (*(long *)(lVar2 + 0x78) != 0) {
                uVar1 = *(undefined1 *)(unaff_x19 + 0x25c);
                lVar4 = *(long *)(lVar2 + 0x88);
                *(undefined8 *)(*(long *)(lVar2 + 0x78) + 0x10) = *(undefined8 *)(unaff_x19 + 0x254)
                ;
                *(undefined1 *)(lVar2 + 0x80) = uVar1;
                if (lVar4 == 0) {
                  uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
                  FUN_06916424(uVar3,0);
                  *(undefined8 *)(lVar2 + 0x88) = uVar3;
                  lVar2 = *(long *)(unaff_x19 + 0x198);
                  if (lVar2 == 0) goto LAB_068af1b0;
                }
                if (*(long *)(lVar2 + 0x88) != 0) {
                  uVar3 = *(undefined8 *)(unaff_x19 + 0x260);
                  *(undefined1 *)(lVar2 + 0x90) = *(undefined1 *)(unaff_x19 + 0x268);
                  *(undefined8 *)(*(long *)(lVar2 + 0x88) + 0x10) = uVar3;
                  FUN_06916f70(lVar2);
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


