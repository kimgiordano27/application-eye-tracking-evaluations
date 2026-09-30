/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 05ad0114
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
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
  
  FUN_05e26f18(param_1,0);
  uVar4 = FUN_05e30794();
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
    FUN_05dc2944(plVar5,0);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc();
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
LAB_05ad0164:
    lVar6 = *plVar8;
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6))
      {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar5);
      }
    }
    return plVar5;
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_05e26f18(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_05ad062c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar4 = (**(code **)(*plVar5 + 0x298))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    plVar5 = (long *)FUN_05e59d90(uVar10);
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_0367c9fc(lVar6);
    }
    plVar8 = *(long **)(lVar6 + 0xc0);
    goto LAB_05ad0164;
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05ad062c;
  uVar4 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x438))();
    uVar11 = *(undefined8 *)PTR_DAT_07a02540;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_05e26f18(uVar11,0);
    uVar4 = FUN_05e30794(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar6 == 0) goto LAB_05ad062c;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05ad0630:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar5 = *(long **)(lVar6 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03643084(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_07a03000;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      plVar8 = (long *)FUN_05e26f18(uVar10,0);
      plVar7 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
      if (plVar7 == (long *)0x0) goto LAB_05ad062c;
      if ((plVar5 != (long *)0x0) &&
         (lVar6 = thunk_FUN_0367fd24(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
        uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_05ad0630;
      plVar7[4] = (long)plVar5;
      thunk_FUN_036b7ad0(plVar7 + 4,plVar5);
      if ((plVar8 == (long *)0x0) ||
         (plVar8 = (long *)(**(code **)(*plVar8 + 0x948))
                                     (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x950)),
         plVar8 == (long *)0x0)) goto LAB_05ad062c;
      uVar4 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar5,*(undefined8 *)(*plVar8 + 0x2a0));
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07a03018;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_05e26f18(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_036a1978(*unaff_x24);
        }
        goto LAB_05ad0560;
      }
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar4 & 1) == 0) goto LAB_05ad05c0;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_05e32ff8(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_05ad0510;
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar6 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar6 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05ad0510:
    if (uVar3 != 5) {
LAB_05ad05c0:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fe20();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      FUN_04a4c064(plVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05ad0560:
  uVar10 = FUN_05e59d90(uVar10);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  plVar5 = (long *)FUN_03156018(uVar10,lVar6);
  return plVar5;
}


