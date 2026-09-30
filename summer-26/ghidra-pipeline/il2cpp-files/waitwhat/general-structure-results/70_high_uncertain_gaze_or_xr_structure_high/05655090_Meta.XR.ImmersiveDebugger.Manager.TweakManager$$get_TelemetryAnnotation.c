/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakManager$$get_TelemetryAnnotation
ENTRY_POINT: 05655090
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
Meta_XR_ImmersiveDebugger_Manager_TweakManager__get_TelemetryAnnotation
          (long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  lVar4 = (**(code **)(param_1 + 0x468))(param_2,*(undefined8 *)(param_1 + 0x470));
  if (lVar4 == 0) {
LAB_056553a0:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_056553a4:
                    /* WARNING: Subroutine does not return */
    FUN_03188ce0();
  }
  plVar9 = *(long **)(lVar4 + 0x20);
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar9);
    }
  }
  uVar10 = *(undefined8 *)PTR_DAT_070f6490;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  plVar5 = (long *)FUN_0593e698(uVar10,0);
  plVar6 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
  if (plVar6 == (long *)0x0) goto LAB_056553a0;
  if ((plVar9 != (long *)0x0) &&
     (lVar4 = thunk_FUN_031c3cac(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
    uVar10 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
    FUN_03188b9c(uVar10,0);
  }
  if ((int)plVar6[3] == 0) goto LAB_056553a4;
  plVar6[4] = (long)plVar9;
  if ((plVar5 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x938))
                                 (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x940)),
     plVar5 == (long *)0x0)) goto LAB_056553a0;
  uVar7 = (**(code **)(*plVar5 + 0x2a8))(plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x2b0));
  if ((uVar7 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_070f64a8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0593e698(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    goto LAB_056552d4;
  }
  uVar7 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar7 & 1) == 0) goto LAB_05655334;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0594a30c(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_05655284;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_070f64b8;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_070f64a0;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_070f6480;
    }
  }
  else {
LAB_05655284:
    if (uVar3 != 5) {
LAB_05655334:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar10 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4(lVar4);
      }
      FUN_04754734(uVar10,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar10 = FUN_0593e698(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_056552d4:
  uVar10 = FUN_0597090c(uVar10);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  uVar10 = FUN_02d37100(uVar10,lVar4);
  return uVar10;
}


