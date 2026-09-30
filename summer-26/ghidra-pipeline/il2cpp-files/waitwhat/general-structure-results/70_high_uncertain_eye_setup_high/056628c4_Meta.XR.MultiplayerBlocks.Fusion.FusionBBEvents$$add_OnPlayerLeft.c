/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnPlayerLeft
ENTRY_POINT: 056628c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnPlayerLeft(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  if ((param_1 & 1) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0593e698(lVar6 + 0x20,0);
    uVar5 = FUN_05947b18();
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
      }
      plVar4 = (long *)FUN_0593e698(uVar10,0);
      if (plVar4 == (long *)0x0) {
LAB_05662e0c:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      uVar5 = (**(code **)(*plVar4 + 0x2a8))();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_070f6488;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar10 = FUN_0593e698(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_031e5338(*unaff_x24);
        }
        plVar4 = (long *)FUN_0597090c(uVar10);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_031c09d4(lVar6);
        }
        plVar8 = *(long **)(lVar6 + 0xc0);
        goto LAB_05662950;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_05662e0c;
      uVar5 = (**(code **)(*unaff_x20 + 0x3c8))();
      if ((uVar5 & 1) != 0) {
        uVar10 = (**(code **)(*unaff_x20 + 0x448))();
        uVar11 = *(undefined8 *)PTR_DAT_070ca570;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
        }
        uVar11 = FUN_0593e698(uVar11,0);
        uVar5 = FUN_05947b18(uVar10,uVar11,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = (**(code **)(*unaff_x20 + 0x468))();
          if (lVar6 == 0) goto LAB_05662e0c;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05662e10:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar4 = *(long **)(lVar6 + 0x20);
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03189058(plVar4);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_070f6490;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          plVar8 = (long *)FUN_0593e698(uVar10,0);
          plVar7 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
          if (plVar7 == (long *)0x0) goto LAB_05662e0c;
          if ((plVar4 != (long *)0x0) &&
             (lVar6 = thunk_FUN_031c3cac(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_05662e10;
          plVar7[4] = (long)plVar4;
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x938))
                                         (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x940)),
             plVar8 == (long *)0x0)) goto LAB_05662e0c;
          uVar5 = (**(code **)(*plVar8 + 0x2a8))(plVar8,plVar4,*(undefined8 *)(*plVar8 + 0x2b0));
          if ((uVar5 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar10 = FUN_0593e698(uVar10,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_031e5338(*unaff_x24);
            }
            goto LAB_05662d40;
          }
        }
      }
      uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
      if ((uVar5 & 1) == 0) goto LAB_05662da0;
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
            if (uVar3 != 7) goto LAB_05662cf0;
            lVar6 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_070f64b8;
          }
          else {
            lVar6 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_070f64a0;
          }
        }
        else {
          lVar6 = *(long *)(unaff_x25 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_070f6480;
        }
      }
      else {
LAB_05662cf0:
        if (uVar3 != 5) {
LAB_05662da0:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          plVar4 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     ();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4(lVar6);
          }
          System_Collections_Generic_Queue<OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideData>__ToArray
                    (plVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar4;
        }
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_070f64b0;
      }
      uVar10 = *puVar9;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar10 = FUN_0593e698(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x24);
      }
LAB_05662d40:
      uVar10 = FUN_0597090c(uVar10);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      plVar4 = (long *)FUN_02d37100(uVar10,lVar6);
      return plVar4;
    }
    plVar4 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (DAT_07256ff8);
    FUN_058df8a8(plVar4,0);
  }
  else {
    plVar4 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (DAT_07251f60);
    FUN_058df7a8(plVar4,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  plVar8 = *(long **)(lVar6 + 0xc0);
LAB_05662950:
  lVar6 = *plVar8;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar4);
    }
  }
  return plVar4;
}


