/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$AddGizmoRenderer
ENTRY_POINT: 0565ba7c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__AddGizmoRenderer
          (long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar4 = (**(code **)(param_1 + 0x448))(param_2,*(undefined8 *)(param_1 + 0x450));
  uVar11 = *(undefined8 *)PTR_DAT_070ca570;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar11 = FUN_0593e698(uVar11,0);
  uVar5 = FUN_05947b18(uVar4,uVar11,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = (**(code **)(*unaff_x20 + 0x468))();
    if (lVar6 == 0) {
LAB_0565bde4:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0565bde8:
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    plVar10 = *(long **)(lVar6 + 0x20);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_03189058(plVar10);
      }
    }
    uVar4 = *(undefined8 *)PTR_DAT_070f6490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    plVar7 = (long *)FUN_0593e698(uVar4,0);
    plVar8 = (long *)FUN_03188b1c(*(undefined8 *)PTR_DAT_070d0448,1);
    if (plVar8 == (long *)0x0) goto LAB_0565bde4;
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = thunk_FUN_031c3cac(plVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_031d1698();
                    /* WARNING: Subroutine does not return */
      FUN_03188b9c(uVar4,0);
    }
    if ((int)plVar8[3] == 0) goto LAB_0565bde8;
    plVar8[4] = (long)plVar10;
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x938))
                                   (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x940)),
       plVar7 == (long *)0x0)) goto LAB_0565bde4;
    uVar5 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2b0));
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_070f64a8;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_0593e698(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_031e5338(*unaff_x24);
      }
      goto LAB_0565bd18;
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x5a8))();
  if ((uVar5 & 1) == 0) goto LAB_0565bd78;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_05963974();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0594a30c(uVar4,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_0565bcc8;
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
LAB_0565bcc8:
    if (uVar3 != 5) {
LAB_0565bd78:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar4 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_031c09d4(lVar6);
      }
      FUN_04756d90(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar4;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_070f64b0;
  }
  uVar4 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  uVar4 = FUN_0593e698(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338(*unaff_x24);
  }
LAB_0565bd18:
  uVar4 = FUN_0597090c(uVar4);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_031c09d4(lVar6);
  }
  uVar4 = FUN_02d37100(uVar4,lVar6);
  return uVar4;
}


