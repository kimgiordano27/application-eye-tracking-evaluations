/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 0566b3d8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (*in_x9)();
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_0593e698(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_0566b530;
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar3 & 1) == 0) goto LAB_0566b590;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0594a30c(uVar6,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_0566b4e0;
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar4 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_0566b4e0:
    if (uVar2 != 5) {
LAB_0566b590:
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      FUN_0475be60(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return uVar6;
    }
    lVar5 = *(long *)(unaff_x25 + 0xe0);
    puVar4 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar6 = *puVar4;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar6 = FUN_0593e698(uVar6,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_0566b530:
  uVar6 = FUN_0597090c(uVar6);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  lVar5 = **(long **)(lVar5 + 0xc0);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  uVar6 = FUN_02d37100(uVar6,lVar5);
  return uVar6;
}


