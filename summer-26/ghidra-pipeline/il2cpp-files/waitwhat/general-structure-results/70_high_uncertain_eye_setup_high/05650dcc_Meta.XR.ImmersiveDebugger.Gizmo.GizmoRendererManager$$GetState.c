/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 05650dcc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w10 == 0) {
    thunk_FUN_031e5338(param_1);
  }
  FUN_0593e698();
  uVar4 = FUN_05947b18();
  if ((uVar4 & 1) == 0) {
LAB_05650f40:
    uVar4 = (**(code **)(*unaff_x20 + 0x5a8))();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar9 = FUN_05963974();
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
      }
      uVar3 = FUN_0594a30c(uVar9,0);
      if (uVar3 < 0xd) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if ((uVar2 & 0x740) != 0) {
          uVar9 = FUN_05651008(PTR_DAT_070f6480,*(undefined8 *)(unaff_x25 + 0xe0));
          return uVar9;
        }
        if ((uVar2 & 0x1800) != 0) {
          uVar9 = FUN_05651008(PTR_DAT_070f64a0,*(undefined8 *)(unaff_x25 + 0xe0));
          return uVar9;
        }
        if (uVar3 == 7) {
          uVar9 = FUN_05651008(PTR_DAT_070f64b8,*(undefined8 *)(unaff_x25 + 0xe0));
          return uVar9;
        }
      }
      if (uVar3 == 5) {
        uVar9 = FUN_06cd5a74(&PTR_DAT_070f6000,*(undefined8 *)(unaff_x25 + 0xe0));
        return uVar9;
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    uVar9 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_031c09d4(lVar5);
    }
    FUN_04752df0(uVar9,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
    return uVar9;
  }
  lVar5 = (**(code **)(*unaff_x20 + 0x468))();
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05651114:
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
    uVar9 = *(undefined8 *)PTR_DAT_070f6490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    plVar6 = (long *)FUN_0593e698(uVar9,0);
    plVar7 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
    if (plVar7 != (long *)0x0) {
      if ((plVar8 != (long *)0x0) &&
         (lVar5 = thunk_FUN_031c3cac(plVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
        uVar9 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar9,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05651114;
      plVar7[4] = (long)plVar8;
      if (plVar6 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x938))
                                   (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x940));
        if (plVar6 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x2b0));
          if ((uVar4 & 1) != 0) {
            uVar9 = *(undefined8 *)PTR_DAT_070f64a8;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_031e5338();
            }
            uVar9 = FUN_0593e698(uVar9,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_031e5338(*unaff_x24);
            }
            uVar9 = FUN_0597090c(uVar9,plVar8,0);
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4(lVar5);
            }
            lVar5 = **(long **)(lVar5 + 0xc0);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_031c09d4(lVar5);
            }
            uVar9 = FUN_02d37100(uVar9,lVar5);
            return uVar9;
          }
          goto LAB_05650f40;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


