/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnSessionListUpdated
ENTRY_POINT: 05663d98
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


long * Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnSessionListUpdated
                 (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((*(byte *)(unaff_x20 + 0x556) & 1) == 0) {
    FUN_03188a78(&DAT_07251f60);
    FUN_03188a78(&DAT_07244310);
    FUN_03188a78(&DAT_07244578);
    FUN_03188a78(&DAT_07244860);
    FUN_03188a78(&DAT_07256ff8);
    FUN_03188a78(&DAT_07244db8);
    FUN_03188a78(&DAT_07245038);
    FUN_03188a78(&DAT_07245040);
    FUN_03188a78(&DAT_0725a8a8);
    FUN_03188a78(&DAT_072455b8);
    FUN_03188a78(&DAT_072456f8);
    FUN_03188a78(&DAT_07250578);
    *(undefined1 *)(unaff_x20 + 0x556) = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4();
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if (*(int *)(DAT_07562970 + 0xe4) == 0) {
    thunk_FUN_031e5338(DAT_07562970);
  }
  puVar3 = PTR_DAT_070f1540;
  plVar6 = (long *)FUN_0593e698(uVar12,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_0566441c;
  }
  uVar12 = FUN_0593e698(DAT_075628a8 + 0x20,0);
  uVar7 = FUN_05947b18(plVar6,uVar12,0);
  lVar5 = DAT_07562920;
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_07562970 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar12 = FUN_0593e698(lVar5 + 0x20,0);
    uVar7 = FUN_05947b18(plVar6,uVar12,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (DAT_07256ff8);
      FUN_058df8a8(plVar6,0);
      goto LAB_05663f50;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(DAT_07562970 + 0xe4) == 0) {
      thunk_FUN_031e5338(DAT_07562970);
    }
    plVar10 = (long *)FUN_0593e698(uVar12,0);
    if (plVar10 == (long *)0x0) {
LAB_05664424:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,plVar6,*(undefined8 *)(*plVar10 + 0x2b0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05664424;
      uVar7 = (**(code **)(*plVar6 + 0x3c8))(plVar6,*(undefined8 *)(*plVar6 + 0x3d0));
      if ((uVar7 & 1) != 0) {
        uVar12 = (**(code **)(*plVar6 + 0x448))(plVar6,*(undefined8 *)(*plVar6 + 0x450));
        uVar13 = *(undefined8 *)PTR_DAT_070ca570;
        if (*(int *)(DAT_07562970 + 0xe4) == 0) {
          thunk_FUN_031e5338(DAT_07562970);
        }
        uVar13 = FUN_0593e698(uVar13,0);
        uVar7 = FUN_05947b18(uVar12,uVar13,0);
        if ((uVar7 & 1) != 0) {
          lVar5 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
          if (lVar5 == 0) goto LAB_05664424;
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05664428:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar10 = *(long **)(lVar5 + 0x20);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_03189058(plVar10);
            }
          }
          uVar12 = *(undefined8 *)PTR_DAT_070f6490;
          if (*(int *)(DAT_07562970 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          plVar8 = (long *)FUN_0593e698(uVar12,0);
          plVar9 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
          if (plVar9 == (long *)0x0) goto LAB_05664424;
          if ((plVar10 != (long *)0x0) &&
             (lVar5 = thunk_FUN_031c3cac(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
            uVar12 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar12,0);
          }
          if ((int)plVar9[3] == 0) goto LAB_05664428;
          plVar9[4] = (long)plVar10;
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x938))
                                         (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x940)),
             plVar8 == (long *)0x0)) goto LAB_05664424;
          uVar7 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2b0));
          if ((uVar7 & 1) != 0) {
            uVar12 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(DAT_07562970 + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar12 = FUN_0593e698(uVar12,0);
            plVar6 = plVar10;
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar3);
            }
            goto LAB_05664358;
          }
        }
      }
      uVar7 = (**(code **)(*plVar6 + 0x5a8))(plVar6,*(undefined8 *)(*plVar6 + 0x5b0));
      if ((uVar7 & 1) != 0) {
        if (*(int *)(DAT_07562928 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar12 = FUN_05963974(plVar6,0);
        if (*(int *)(DAT_07562970 + 0xe4) == 0) {
          thunk_FUN_031e5338(DAT_07562970);
        }
        uVar4 = FUN_0594a30c(uVar12,0);
        if (((uVar4 < 0xd) &&
            (((uVar2 = 1 << (ulong)(uVar4 & 0x1f), puVar11 = (undefined8 *)PTR_DAT_070f6480,
              (uVar2 & 0x740) != 0 ||
              (puVar11 = (undefined8 *)PTR_DAT_070f64a0, (uVar2 & 0x1800) != 0)) ||
             (puVar11 = (undefined8 *)PTR_DAT_070f64b8, uVar4 == 7)))) ||
           (puVar11 = (undefined8 *)PTR_DAT_070f64b0, uVar4 == 5)) {
          uVar12 = *puVar11;
          if (*(int *)(DAT_07562970 + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          uVar12 = FUN_0593e698(uVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_031e5338(*(long *)puVar3);
          }
LAB_05664358:
          uVar12 = FUN_0597090c(uVar12,plVar6,0);
          lVar5 = *(long *)(param_1 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4(lVar5);
          }
          lVar5 = **(long **)(lVar5 + 0xc0);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4(lVar5);
          }
          plVar6 = (long *)FUN_02d37100(uVar12,lVar5);
          return plVar6;
        }
      }
      lVar5 = *(long *)(param_1 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      plVar6 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 ();
      lVar5 = *(long *)(param_1 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      FUN_04759938(plVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      return plVar6;
    }
    uVar12 = *(undefined8 *)PTR_DAT_070f6488;
    if (*(int *)(DAT_07562970 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar12 = FUN_0593e698(uVar12,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar3);
    }
    plVar6 = (long *)FUN_0597090c(uVar12,plVar6,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  else {
    plVar6 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (DAT_07251f60);
    FUN_058df7a8(plVar6,0);
LAB_05663f50:
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    plVar10 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar10;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_0566441c:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar6);
    }
  }
  return plVar6;
}


