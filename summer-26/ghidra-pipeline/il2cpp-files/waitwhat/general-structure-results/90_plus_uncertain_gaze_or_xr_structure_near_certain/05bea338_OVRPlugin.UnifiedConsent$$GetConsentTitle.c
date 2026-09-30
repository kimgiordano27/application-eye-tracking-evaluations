/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$GetConsentTitle
ENTRY_POINT: 05bea338
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


void OVRPlugin_UnifiedConsent__GetConsentTitle(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x23;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x538));
  FUN_03188a78(PTR_DAT_07116c18);
  FUN_03188a78(PTR_DAT_07116c00);
  *(undefined1 *)(unaff_x20 + 0xd49) = 1;
  lVar3 = *unaff_x23;
  *(undefined4 *)(unaff_x19 + 0xb0) = 0x40a00000;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *unaff_x23;
  }
  puVar2 = PTR_DAT_07113448;
  puVar1 = PTR_DAT_07112b20;
  puVar4 = *(undefined8 **)(lVar3 + 0xb8);
  lVar5 = puVar4[1];
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar4 = *(undefined8 **)(*unaff_x23 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)PTR_DAT_070c2c58);
    FUN_058a163c(lVar5,uVar6,*(undefined8 *)PTR_DAT_07116c18,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar5;
  }
  uVar6 = *(undefined8 *)puVar1;
  *(long *)(unaff_x19 + 0xb8) = lVar5;
  uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
  FUN_05be5b08();
  lVar3 = *(long *)puVar2;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar6;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar3 = *(long *)puVar2;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar6 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070ce538,
                         *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
    lVar3 = *(long *)puVar2;
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar6;
    puVar1 = PTR_DAT_07116c10;
    if (**(long **)(lVar3 + 0xb8) != 0) {
      uVar6 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116c10,
                           *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
      lVar3 = *(long *)puVar2;
      *(undefined8 *)(unaff_x19 + 0xd8) = uVar6;
      if (**(long **)(lVar3 + 0xb8) != 0) {
        uVar6 = FUN_03188b1c(*(undefined8 *)puVar1,*(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18)
                            );
        lVar3 = *(long *)puVar2;
        *(undefined8 *)(unaff_x19 + 0xe0) = uVar6;
        puVar1 = PTR_DAT_07116578;
        if (**(long **)(lVar3 + 0xb8) != 0) {
          uVar6 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116578,
                               *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
          lVar3 = *(long *)puVar2;
          *(undefined8 *)(unaff_x19 + 0x140) = uVar6;
          if (**(long **)(lVar3 + 0xb8) != 0) {
            uVar6 = FUN_03188b1c(*(undefined8 *)puVar1,
                                 *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
            lVar3 = *(long *)puVar2;
            *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
            if (**(long **)(lVar3 + 0xb8) != 0) {
              uVar6 = FUN_03188b1c(*(undefined8 *)puVar1,
                                   *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
              lVar3 = *(long *)puVar2;
              *(undefined8 *)(unaff_x19 + 0x150) = uVar6;
              puVar1 = PTR_DAT_07116bb8;
              if (**(long **)(lVar3 + 0xb8) != 0) {
                uVar6 = FUN_03188b1c(*(undefined8 *)PTR_DAT_07116c08,
                                     *(undefined4 *)(**(long **)(lVar3 + 0xb8) + 0x18));
                lVar3 = *(long *)puVar1;
                *(undefined8 *)(unaff_x19 + 0x158) = uVar6;
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_031e5338(lVar3);
                }
                OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin();
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


