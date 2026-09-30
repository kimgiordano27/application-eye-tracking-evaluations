/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_GetUnifiedConsent
ENTRY_POINT: 05bea2bc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_106_0__ovrp_GetUnifiedConsent(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_07116c00;
  if ((DAT_0754ed49 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2c58);
    FUN_03188a78(PTR_DAT_07113448);
    FUN_03188a78(PTR_DAT_07112b20);
    FUN_03188a78(PTR_DAT_07116bb8);
    FUN_03188a78(PTR_DAT_07116c08);
    FUN_03188a78(PTR_DAT_07116c10);
    FUN_03188a78(PTR_DAT_07116578);
    FUN_03188a78(PTR_DAT_070ce538);
    FUN_03188a78(PTR_DAT_07116c18);
    FUN_03188a78(PTR_DAT_07116c00);
    DAT_0754ed49 = 1;
  }
  lVar4 = *(long *)puVar3;
  *(undefined4 *)(param_1 + 0xb0) = 0x40a00000;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_07113448;
  puVar1 = PTR_DAT_07112b20;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar5 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar6,uVar7,*(undefined8 *)PTR_DAT_07116c18,0);
    *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar6;
  }
  uVar7 = *(undefined8 *)puVar1;
  *(long *)(param_1 + 0xb8) = lVar6;
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar7);
  FUN_05be5b08();
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0xc0) = uVar7;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar2;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070ce538,
                         *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
    lVar4 = *(long *)puVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar7;
    puVar3 = PTR_DAT_07116c10;
    if (**(long **)(lVar4 + 0xb8) != 0) {
      uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116c10,
                           *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
      lVar4 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0xd8) = uVar7;
      if (**(long **)(lVar4 + 0xb8) != 0) {
        uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,*(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18)
                            );
        lVar4 = *(long *)puVar2;
        *(undefined8 *)(param_1 + 0xe0) = uVar7;
        puVar3 = PTR_DAT_07116578;
        if (**(long **)(lVar4 + 0xb8) != 0) {
          uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116578,
                               *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
          lVar4 = *(long *)puVar2;
          *(undefined8 *)(param_1 + 0x140) = uVar7;
          if (**(long **)(lVar4 + 0xb8) != 0) {
            uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,
                                 *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
            lVar4 = *(long *)puVar2;
            *(undefined8 *)(param_1 + 0x148) = uVar7;
            if (**(long **)(lVar4 + 0xb8) != 0) {
              uVar7 = FUN_03188b1c(*(undefined8 *)puVar3,
                                   *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
              lVar4 = *(long *)puVar2;
              *(undefined8 *)(param_1 + 0x150) = uVar7;
              puVar3 = PTR_DAT_07116bb8;
              if (**(long **)(lVar4 + 0xb8) != 0) {
                uVar7 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116c08,
                                     *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
                lVar4 = *(long *)puVar3;
                *(undefined8 *)(param_1 + 0x158) = uVar7;
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_031e5338(lVar4);
                }
                OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(param_1);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


