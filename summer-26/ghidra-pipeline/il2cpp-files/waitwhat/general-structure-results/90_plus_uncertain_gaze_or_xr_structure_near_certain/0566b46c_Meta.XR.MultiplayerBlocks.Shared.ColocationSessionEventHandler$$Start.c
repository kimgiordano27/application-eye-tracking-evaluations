/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 0566b46c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int in_w9;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w9 == 0) {
    thunk_FUN_031e5338(param_1);
  }
  uVar2 = FUN_0594a30c();
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_070f6480;
      goto LAB_0566b4f4;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_070f64a0;
      goto LAB_0566b4f4;
    }
    if (uVar2 == 7) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_070f64b8;
      goto LAB_0566b4f4;
    }
  }
  if (uVar2 != 5) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4(lVar3);
    }
    FUN_0475be60(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return uVar5;
  }
  lVar3 = *(long *)(unaff_x25 + 0xe0);
  puVar4 = (undefined8 *)PTR_DAT_070f64b0;
LAB_0566b4f4:
  uVar5 = *puVar4;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar5 = FUN_0593e698(uVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
  uVar5 = FUN_0597090c(uVar5);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  uVar5 = FUN_02d37100(uVar5,lVar3);
  return uVar5;
}


