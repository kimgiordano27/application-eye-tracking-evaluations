/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 05ae37f0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster___cctor(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  lVar4 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x460));
  if (lVar4 == 0) {
LAB_05ae3b08:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05ae3b0c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  plVar9 = *(long **)(lVar4 + 0x20);
  if (plVar9 != (long *)0x0) {
    bVar1 = *(byte *)(*unaff_x24 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar9);
    }
  }
  uVar10 = *(undefined8 *)PTR_DAT_07a03000;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  plVar5 = (long *)FUN_05e26f18(uVar10,0);
  plVar6 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
  if (plVar6 == (long *)0x0) goto LAB_05ae3b08;
  if ((plVar9 != (long *)0x0) &&
     (lVar4 = thunk_FUN_0367fd24(plVar9,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0)) {
    uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
    FUN_03642acc(uVar10,0);
  }
  if ((int)plVar6[3] == 0) goto LAB_05ae3b0c;
  plVar6[4] = (long)plVar9;
  thunk_FUN_036b7ad0(plVar6 + 4,plVar9);
  if ((plVar5 == (long *)0x0) ||
     (plVar5 = (long *)(**(code **)(*plVar5 + 0x948))
                                 (plVar5,plVar6,*(undefined8 *)(*plVar5 + 0x950)),
     plVar5 == (long *)0x0)) goto LAB_05ae3b08;
  uVar7 = (**(code **)(*plVar5 + 0x298))(plVar5,plVar9,*(undefined8 *)(*plVar5 + 0x2a0));
  if ((uVar7 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_07a03018;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    goto LAB_05ae3a3c;
  }
  uVar7 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar7 & 1) == 0) goto LAB_05ae3a9c;
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
        if (uVar3 != 7) goto LAB_05ae39ec;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar8 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05ae39ec:
    if (uVar3 != 5) {
LAB_05ae3a9c:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      uVar10 = thunk_FUN_0367fe20();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      FUN_04a5249c(uVar10,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return uVar10;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar8 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar10 = *puVar8;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05ae3a3c:
  uVar10 = FUN_05e59d90(uVar10);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  uVar10 = FUN_03156018(uVar10,lVar4);
  return uVar10;
}


