/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartDiscoveringColocationSessions>d__21$$SetStateMachine
ENTRY_POINT: 056730c0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartDiscoveringColocationSessions>d__21__SetStateMachine
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x5a8))(param_2,*(undefined8 *)(param_1 + 0x5b0));
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar4 = FUN_05963974();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_0594a30c(uVar4,0);
    if (uVar2 < 0xd) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar1 & 0x740) != 0) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_070f6480;
        goto LAB_05673180;
      }
      if ((uVar1 & 0x1800) != 0) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_070f64a0;
        goto LAB_05673180;
      }
      if (uVar2 == 7) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_070f64b8;
        goto LAB_05673180;
      }
    }
    if (uVar2 == 5) {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_070f64b0;
LAB_05673180:
      uVar4 = *puVar6;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_0593e698(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x24);
      }
      uVar4 = FUN_0597090c(uVar4);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      lVar5 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      uVar4 = FUN_02d37100(uVar4,lVar5);
      return uVar4;
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  FUN_0475e6d0(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return uVar4;
}


