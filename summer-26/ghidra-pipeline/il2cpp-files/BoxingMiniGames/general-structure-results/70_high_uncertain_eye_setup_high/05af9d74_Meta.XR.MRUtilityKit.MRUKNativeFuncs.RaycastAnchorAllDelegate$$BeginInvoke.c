/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorAllDelegate$$BeginInvoke
ENTRY_POINT: 05af9d74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorAllDelegate__BeginInvoke
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
  
  uVar4 = (**(code **)(param_1 + 0x438))(param_2,*(undefined8 *)(param_1 + 0x440));
  uVar11 = *(undefined8 *)PTR_DAT_07a02540;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar11 = FUN_05e26f18(uVar11,0);
  uVar5 = FUN_05e30794(uVar4,uVar11,0);
  if ((uVar5 & 1) != 0) {
    lVar6 = (**(code **)(*unaff_x20 + 0x458))();
    if (lVar6 == 0) {
LAB_05afa0e8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05afa0ec:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    plVar10 = *(long **)(lVar6 + 0x20);
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x24 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
        FUN_03643084(plVar10);
      }
    }
    uVar4 = *(undefined8 *)PTR_DAT_07a03000;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    plVar7 = (long *)FUN_05e26f18(uVar4,0);
    plVar8 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
    if (plVar8 == (long *)0x0) goto LAB_05afa0e8;
    if ((plVar10 != (long *)0x0) &&
       (lVar6 = thunk_FUN_0367fd24(plVar10,*(undefined8 *)(*plVar8 + 0x40)), lVar6 == 0)) {
      uVar4 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar4,0);
    }
    if ((int)plVar8[3] == 0) goto LAB_05afa0ec;
    plVar8[4] = (long)plVar10;
    thunk_FUN_036b7ad0(plVar8 + 4,plVar10);
    if ((plVar7 == (long *)0x0) ||
       (plVar7 = (long *)(**(code **)(*plVar7 + 0x948))
                                   (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x950)),
       plVar7 == (long *)0x0)) goto LAB_05afa0e8;
    uVar5 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar10,*(undefined8 *)(*plVar7 + 0x2a0));
    if ((uVar5 & 1) != 0) {
      uVar4 = *(undefined8 *)PTR_DAT_07a03018;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
      goto LAB_05afa01c;
    }
  }
  uVar5 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar5 & 1) == 0) goto LAB_05afa07c;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_05e32ff8(uVar4,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_05af9fcc;
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
LAB_05af9fcc:
    if (uVar3 != 5) {
LAB_05afa07c:
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar4 = thunk_FUN_0367fe20();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      FUN_04a59718(uVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
      return uVar4;
    }
    lVar6 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar4 = *puVar9;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e26f18(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05afa01c:
  uVar4 = FUN_05e59d90(uVar4);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  lVar6 = **(long **)(lVar6 + 0xc0);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  uVar4 = FUN_03156018(uVar4,lVar6);
  return uVar4;
}


