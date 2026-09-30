/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<OnAnchorShareRequestReceived>d__28$$SetStateMachine
ENTRY_POINT: 05679718
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<OnAnchorShareRequestReceived>d__28__SetStateMachine
          (void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  lVar3 = thunk_FUN_031c3cac();
  if (lVar3 == 0) {
    uVar7 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar7,0);
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
  if ((unaff_x22 == (long *)0x0) ||
     (plVar4 = (long *)(**(code **)(*unaff_x22 + 0x938))(), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar5 = (**(code **)(*plVar4 + 0x2a8))();
  if ((uVar5 & 1) != 0) {
    uVar7 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar7 = FUN_0593e698(uVar7,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_056798c0;
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar5 & 1) == 0) goto LAB_05679920;
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
        if (uVar2 != 7)
        goto Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkMessenger;
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar3 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
Meta_XR_MultiplayerBlocks_Colocation_NetworkAdapter__set_NetworkMessenger:
    if (uVar2 != 5) {
LAB_05679920:
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_031c09d4(lVar3);
      }
      FUN_04760898(uVar7,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
      return uVar7;
    }
    lVar3 = *(long *)(unaff_x25 + 0xe0);
    puVar6 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar7 = *puVar6;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar7 = FUN_0593e698(uVar7,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_056798c0:
  uVar7 = FUN_0597090c(uVar7);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_031c09d4(lVar3);
  }
  uVar7 = FUN_02d37100(uVar7,lVar3);
  return uVar7;
}


