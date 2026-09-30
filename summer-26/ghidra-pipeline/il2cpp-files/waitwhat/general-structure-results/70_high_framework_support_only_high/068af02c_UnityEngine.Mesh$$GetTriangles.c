/*
FUNCTION_NAME: UnityEngine.Mesh$$GetTriangles
ENTRY_POINT: 068af02c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void UnityEngine_Mesh__GetTriangles(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long in_x10;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  if (in_x10 == 0) {
    uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
    FUN_06916424(uVar2,0);
    *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
    unaff_x20 = *(long *)(unaff_x19 + 0x198);
    if (unaff_x20 == 0) goto LAB_068af1b0;
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x238);
    lVar3 = *(long *)(unaff_x20 + 0x58);
    *(undefined8 *)(*(long *)(unaff_x20 + 0x48) + 0x10) = *(undefined8 *)(unaff_x19 + 0x230);
    *(undefined1 *)(unaff_x20 + 0x50) = uVar1;
    if (lVar3 == 0) {
      uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
      FUN_06916424(uVar2,0);
      *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
      unaff_x20 = *(long *)(unaff_x19 + 0x198);
      if (unaff_x20 == 0) goto LAB_068af1b0;
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      uVar1 = *(undefined1 *)(unaff_x19 + 0x244);
      lVar3 = *(long *)(unaff_x20 + 0x68);
      *(undefined8 *)(*(long *)(unaff_x20 + 0x58) + 0x10) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined1 *)(unaff_x20 + 0x60) = uVar1;
      if (lVar3 == 0) {
        uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
        FUN_06916424(uVar2,0);
        *(undefined8 *)(unaff_x20 + 0x68) = uVar2;
        unaff_x20 = *(long *)(unaff_x19 + 0x198);
        if (unaff_x20 == 0) goto LAB_068af1b0;
      }
      if (*(long *)(unaff_x20 + 0x68) != 0) {
        uVar1 = *(undefined1 *)(unaff_x19 + 0x250);
        lVar3 = *(long *)(unaff_x20 + 0x78);
        *(undefined8 *)(*(long *)(unaff_x20 + 0x68) + 0x10) = *(undefined8 *)(unaff_x19 + 0x248);
        *(undefined1 *)(unaff_x20 + 0x70) = uVar1;
        if (lVar3 == 0) {
          uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
          FUN_06916424(uVar2,0);
          *(undefined8 *)(unaff_x20 + 0x78) = uVar2;
          unaff_x20 = *(long *)(unaff_x19 + 0x198);
          if (unaff_x20 == 0) goto LAB_068af1b0;
        }
        if (*(long *)(unaff_x20 + 0x78) != 0) {
          uVar1 = *(undefined1 *)(unaff_x19 + 0x25c);
          lVar3 = *(long *)(unaff_x20 + 0x88);
          *(undefined8 *)(*(long *)(unaff_x20 + 0x78) + 0x10) = *(undefined8 *)(unaff_x22 + 0x30);
          *(undefined1 *)(unaff_x20 + 0x80) = uVar1;
          if (lVar3 == 0) {
            uVar2 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                              (*(undefined8 *)OVRPlugin_OVRP_1_56_0_TypeInfo);
            FUN_06916424(uVar2,0);
            *(undefined8 *)(unaff_x20 + 0x88) = uVar2;
            unaff_x20 = *(long *)(unaff_x19 + 0x198);
            if (unaff_x20 == 0) goto LAB_068af1b0;
          }
          if (*(long *)(unaff_x20 + 0x88) != 0) {
            uVar2 = *(undefined8 *)(unaff_x19 + 0x260);
            *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x268);
            *(undefined8 *)(*(long *)(unaff_x20 + 0x88) + 0x10) = uVar2;
            FUN_06916f70(unaff_x20);
            return;
          }
        }
      }
    }
  }
LAB_068af1b0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


