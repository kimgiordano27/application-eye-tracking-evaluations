/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$SendAnchorShareRequest
ENTRY_POINT: 056774b0
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


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__SendAnchorShareRequest
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *unaff_x24;
  long unaff_x25;
  
  plVar3 = (long *)(**(code **)(param_1 + 0x938))(param_2,param_3,*(undefined8 *)(param_1 + 0x940));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_0593e698(uVar7,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_05677628;
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar4 & 1) == 0) goto LAB_05677688;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_0594a30c(uVar7,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) == 0) {
      if ((uVar1 & 0x1800) == 0) {
        if (uVar2 != 7) goto LAB_056775d8;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar5 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_056775d8:
    if (uVar2 != 5) {
LAB_05677688:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      FUN_0475fcf0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar7;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar5 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar7 = *puVar5;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_0593e698(uVar7,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_05677628:
  uVar7 = FUN_0597090c(uVar7);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  uVar7 = FUN_02d37100(uVar7,lVar6);
  return uVar7;
}


