/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$UpdateIcon
ENTRY_POINT: 05646be0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__UpdateIcon(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((DAT_0754b52d & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f6478);
    FUN_03188a78(PTR_DAT_070f6480);
    FUN_03188a78(PTR_DAT_070f6488);
    FUN_03188a78(PTR_DAT_070f6490);
    FUN_03188a78(PTR_DAT_070f6498);
    FUN_03188a78(PTR_DAT_070f64a0);
    FUN_03188a78(PTR_DAT_070f64a8);
    FUN_03188a78(PTR_DAT_070ca570);
    FUN_03188a78(PTR_DAT_070f1540);
    FUN_03188a78(PTR_DAT_070f64b0);
    FUN_03188a78(PTR_DAT_070f64b8);
    FUN_03188a78(PTR_DAT_070d0448);
    DAT_0754b52d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4();
  }
  puVar3 = PTR_DAT_070c1958;
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_070c1958 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(PTR_DAT_070c1958 + 0xe0));
  }
  puVar4 = PTR_DAT_070f1540;
  plVar7 = (long *)FUN_0593e698(uVar13,0);
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_0564726c;
  }
  uVar13 = FUN_0593e698(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar8 = FUN_05947b18(plVar7,uVar13,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_0593e698(lVar6 + 0x20,0);
    uVar8 = FUN_05947b18(plVar7,uVar13,0);
    if ((uVar8 & 1) != 0) {
      plVar7 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                 (*(undefined8 *)PTR_DAT_070f6498);
      FUN_058df8a8(plVar7,0);
      goto LAB_05646da0;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_0593e698(uVar13,0);
    if (plVar11 == (long *)0x0) {
LAB_05647274:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar8 = (**(code **)(*plVar11 + 0x2a8))(plVar11,plVar7,*(undefined8 *)(*plVar11 + 0x2b0));
    if ((uVar8 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_05647274;
      uVar8 = (**(code **)(*plVar7 + 0x3c8))(plVar7,*(undefined8 *)(*plVar7 + 0x3d0));
      if ((uVar8 & 1) != 0) {
        uVar13 = (**(code **)(*plVar7 + 0x448))(plVar7,*(undefined8 *)(*plVar7 + 0x450));
        uVar14 = *(undefined8 *)PTR_DAT_070ca570;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_031e5338(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_0593e698(uVar14,0);
        uVar8 = FUN_05947b18(uVar13,uVar14,0);
        if ((uVar8 & 1) != 0) {
          lVar6 = (**(code **)(*plVar7 + 0x468))(plVar7,*(undefined8 *)(*plVar7 + 0x470));
          if (lVar6 == 0) goto LAB_05647274;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05647278:
                    /* WARNING: Subroutine does not return */
            FUN_03188ce0();
          }
          plVar11 = *(long **)(lVar6 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03189058(plVar11);
            }
          }
          uVar13 = *(undefined8 *)PTR_DAT_070f6490;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_031e5338();
          }
          plVar9 = (long *)FUN_0593e698(uVar13,0);
          plVar10 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
          if (plVar10 == (long *)0x0) goto LAB_05647274;
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = thunk_FUN_031c3cac(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
            uVar13 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
            FUN_03188b9c(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_05647278;
          plVar10[4] = (long)plVar11;
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x938))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x940)),
             plVar9 == (long *)0x0)) goto LAB_05647274;
          uVar8 = (**(code **)(*plVar9 + 0x2a8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2b0));
          if ((uVar8 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar13 = FUN_0593e698(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_031e5338(*(long *)puVar4);
            }
            goto LAB_056471a8;
          }
        }
      }
      uVar8 = (**(code **)(*plVar7 + 0x5a8))(plVar7,*(undefined8 *)(*plVar7 + 0x5b0));
      if ((uVar8 & 1) == 0) goto LAB_05647208;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar13 = FUN_05963974(plVar7,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_0594a30c(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_05647158;
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_070f64b8;
          }
          else {
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_070f64a0;
          }
        }
        else {
          lVar6 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_070f6480;
        }
      }
      else {
LAB_05647158:
        if (uVar5 != 5) {
LAB_05647208:
          lVar6 = *(long *)(param_1 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          plVar7 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                     ();
          lVar6 = *(long *)(param_1 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_031c09d4(lVar6);
          }
          FUN_04750170(plVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar7;
        }
        lVar6 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_070f64b0;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar13 = FUN_0593e698(uVar13,0);
      plVar11 = plVar7;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)puVar4);
      }
LAB_056471a8:
      uVar13 = FUN_0597090c(uVar13,plVar11,0);
      lVar6 = *(long *)(param_1 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      plVar7 = (long *)FUN_02d37100(uVar13,lVar6);
      return plVar7;
    }
    uVar13 = *(undefined8 *)PTR_DAT_070f6488;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar13 = FUN_0593e698(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338(*(long *)puVar4);
    }
    plVar7 = (long *)FUN_0597090c(uVar13,plVar7,0);
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4(lVar6);
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar7 = (long *)Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                               (*(undefined8 *)PTR_DAT_070f6478);
    FUN_058df7a8(plVar7,0);
LAB_05646da0:
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_031c09d4();
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar11;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_0564726c:
                    /* WARNING: Subroutine does not return */
      FUN_03189058(plVar7);
    }
  }
  return plVar7;
}


