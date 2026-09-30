/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
ENTRY_POINT: 05648370
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                 (long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  long unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_031e5338(param_1);
  }
  puVar3 = PTR_DAT_070f1540;
  plVar5 = (long *)FUN_0593e698();
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05648928;
  }
  uVar6 = FUN_0593e698(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar7 = FUN_05947b18(plVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_0593e698(lVar8 + 0x20,0);
    uVar7 = FUN_05947b18(plVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      plVar5 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)PTR_DAT_070f6498);
      FUN_058df8a8(plVar5,0);
      goto LAB_0564845c;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
    }
    plVar11 = (long *)FUN_0593e698(uVar6,0);
    if (plVar11 == (long *)0x0) {
LAB_05648930:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar7 = (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar5,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_05648930;
      uVar7 = (**(code **)(*plVar5 + 0x3c8))(plVar5,*(undefined8 *)(*plVar5 + 0x3d0));
      if ((uVar7 & 1) != 0) {
        uVar6 = (**(code **)(*plVar5 + 0x448))(plVar5,*(undefined8 *)(*plVar5 + 0x450));
        uVar13 = *(undefined8 *)PTR_DAT_070ca570;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
        }
        uVar13 = FUN_0593e698(uVar13,0);
        uVar7 = FUN_05947b18(uVar6,uVar13,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = (**(code **)(*plVar5 + 0x468))(plVar5,*(undefined8 *)(*plVar5 + 0x470));
          if (lVar8 == 0) goto LAB_05648930;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05648934:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar11 = *(long **)(lVar8 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_03189058(plVar11);
            }
          }
          uVar6 = *(undefined8 *)PTR_DAT_070f6490;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          plVar9 = (long *)FUN_0593e698(uVar6,0);
          plVar10 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
          if (plVar10 == (long *)0x0) goto LAB_05648930;
          if ((plVar11 != (long *)0x0) &&
             (lVar8 = thunk_FUN_031c3cac(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar6 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar6,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_05648934;
          plVar10[4] = (long)plVar11;
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x938))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x940)),
             plVar9 == (long *)0x0)) goto LAB_05648930;
          uVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2b0));
          if ((uVar7 & 1) != 0) {
            uVar6 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar6 = FUN_0593e698(uVar6,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar3);
            }
            goto LAB_05648864;
          }
        }
      }
      uVar7 = (**(code **)(*plVar5 + 0x5a8))(plVar5,*(undefined8 *)(*plVar5 + 0x5b0));
      if ((uVar7 & 1) == 0) goto LAB_056488c4;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_05963974(plVar5,0);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
      }
      uVar4 = FUN_0594a30c(uVar6,0);
      if (uVar4 < 0xd) {
        uVar2 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar4 != 7) goto LAB_05648814;
            lVar8 = *(long *)(unaff_x25 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_070f64b8;
          }
          else {
            lVar8 = *(long *)(unaff_x25 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_070f64a0;
          }
        }
        else {
          lVar8 = *(long *)(unaff_x25 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_070f6480;
        }
      }
      else {
LAB_05648814:
        if (uVar4 != 5) {
LAB_056488c4:
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_031c09d4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          plVar5 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     ();
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_031c09d4(lVar8);
          }
          FUN_04750804(plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
          return plVar5;
        }
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_070f64b0;
      }
      uVar6 = *puVar12;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar6 = FUN_0593e698(uVar6,0);
      plVar11 = plVar5;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar3);
      }
LAB_05648864:
      uVar6 = FUN_0597090c(uVar6,plVar11,0);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
      }
      lVar8 = **(long **)(lVar8 + 0xc0);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_031c09d4(lVar8);
      }
      plVar5 = (long *)FUN_02d37100(uVar6,lVar8);
      return plVar5;
    }
    uVar6 = *(undefined8 *)PTR_DAT_070f6488;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar6 = FUN_0593e698(uVar6,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_0597090c(uVar6,plVar5,0);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4(lVar8);
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  else {
    plVar5 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_070f6478);
    FUN_058df7a8(plVar5,0);
LAB_0564845c:
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_031c09d4();
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  lVar8 = *plVar11;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_031c09d4(lVar8);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
LAB_05648928:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar5);
    }
  }
  return plVar5;
}


