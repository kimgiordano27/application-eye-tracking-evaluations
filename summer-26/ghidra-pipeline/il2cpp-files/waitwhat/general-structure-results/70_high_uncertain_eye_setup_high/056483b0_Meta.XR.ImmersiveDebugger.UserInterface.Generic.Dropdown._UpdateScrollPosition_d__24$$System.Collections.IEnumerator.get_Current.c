/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 056483b0
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_get_Current
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool in_CY;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  if ((!in_CY) || (*(long *)(*(long *)(param_1 + 200) + in_x9 * 8 + -8) != param_3))
  goto LAB_05648928;
  FUN_0593e698(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar4 = FUN_05947b18();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    FUN_0593e698(lVar5 + 0x20,0);
    uVar4 = FUN_05947b18();
    if ((uVar4 & 1) != 0) {
      unaff_x20 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                    (*(undefined8 *)PTR_DAT_070f6498);
      FUN_058df8a8(unaff_x20,0);
      goto LAB_0564845c;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
    }
    plVar8 = (long *)FUN_0593e698(uVar10,0);
    if (plVar8 == (long *)0x0) {
LAB_05648930:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar4 = (**(code **)(*plVar8 + 0x2a8))();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_05648930;
      uVar4 = (**(code **)(*unaff_x20 + 0x3c8))();
      if ((uVar4 & 1) != 0) {
        uVar10 = (**(code **)(*unaff_x20 + 0x448))();
        uVar11 = *(undefined8 *)PTR_DAT_070ca570;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
        }
        uVar11 = FUN_0593e698(uVar11,0);
        uVar4 = FUN_05947b18(uVar10,uVar11,0);
        if ((uVar4 & 1) != 0) {
          lVar5 = (**(code **)(*unaff_x20 + 0x468))();
          if (lVar5 == 0) goto LAB_05648930;
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05648934:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar8 = *(long **)(lVar5 + 0x20);
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03189058(plVar8);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_070f6490;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          plVar6 = (long *)FUN_0593e698(uVar10,0);
          plVar7 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
          if (plVar7 == (long *)0x0) goto LAB_05648930;
          if ((plVar8 != (long *)0x0) &&
             (lVar5 = thunk_FUN_031c3cac(plVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
            uVar10 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_05648934;
          plVar7[4] = (long)plVar8;
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x938))
                                         (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940)),
             plVar6 == (long *)0x0)) goto LAB_05648930;
          uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar4 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar10 = FUN_0593e698(uVar10,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_031e5338(*unaff_x24);
            }
            goto LAB_05648864;
          }
        }
      }
      uVar4 = (**(code **)(*unaff_x20 + 0x5a8))();
      if ((uVar4 & 1) == 0) goto LAB_056488c4;
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
            if (uVar3 != 7) goto LAB_05648814;
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_070f64b8;
          }
          else {
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_070f64a0;
          }
        }
        else {
          lVar5 = *(long *)(unaff_x25 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_070f6480;
        }
      }
      else {
LAB_05648814:
        if (uVar3 != 5) {
LAB_056488c4:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          plVar8 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     ();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_031c09d4(lVar5);
          }
          FUN_04750804(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar8;
        }
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_070f64b0;
      }
      uVar10 = *puVar9;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar10 = FUN_0593e698(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x24);
      }
LAB_05648864:
      uVar10 = FUN_0597090c(uVar10);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      lVar5 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_031c09d4(lVar5);
      }
      plVar8 = (long *)FUN_02d37100(uVar10,lVar5);
      return plVar8;
    }
    uVar10 = *(undefined8 *)PTR_DAT_070f6488;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar10 = FUN_0593e698(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_031e5338(*unaff_x24);
    }
    unaff_x20 = (long *)FUN_0597090c(uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  else {
    unaff_x20 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                  (*(undefined8 *)PTR_DAT_070f6478);
    FUN_058df7a8(unaff_x20,0);
LAB_0564845c:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar8;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_031c09d4(lVar5);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    {
LAB_05648928:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(unaff_x20);
    }
  }
  return unaff_x20;
}


