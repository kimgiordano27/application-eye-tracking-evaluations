/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnTrackableUpdated$$Invoke
ENTRY_POINT: 05af7914
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnTrackableUpdated__Invoke(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc();
  }
  uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  plVar5 = (long *)FUN_05e26f18(uVar10,0);
  if (plVar5 == (long *)0x0) {
LAB_05af7d7c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  uVar6 = (**(code **)(*plVar5 + 0x298))();
  if ((uVar6 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar10 = FUN_05e26f18(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978(*unaff_x24);
    }
    plVar5 = (long *)FUN_05e59d90(uVar10);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    lVar4 = **(long **)(lVar4 + 0xc0);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)) {
      return plVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03643084(plVar5);
  }
  if (unaff_x20 == (long *)0x0) goto LAB_05af7d7c;
  uVar6 = (**(code **)(*unaff_x20 + 0x3b8))();
  if ((uVar6 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x438))();
    uVar11 = *(undefined8 *)PTR_DAT_07a02540;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_05e26f18(uVar11,0);
    uVar6 = FUN_05e30794(uVar10,uVar11,0);
    if ((uVar6 & 1) != 0) {
      lVar4 = (**(code **)(*unaff_x20 + 0x458))();
      if (lVar4 == 0) goto LAB_05af7d7c;
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_05af7d80:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      plVar5 = *(long **)(lVar4 + 0x20);
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
      plVar7 = (long *)FUN_05e26f18(uVar10,0);
      plVar8 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
      if (plVar8 == (long *)0x0) goto LAB_05af7d7c;
      if ((plVar5 != (long *)0x0) &&
         (lVar4 = thunk_FUN_0367fd24(plVar5,*(undefined8 *)(*plVar8 + 0x40)), lVar4 == 0)) {
        uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
        FUN_03642acc(uVar10,0);
      }
      if ((int)plVar8[3] == 0) goto LAB_05af7d80;
      plVar8[4] = (long)plVar5;
      thunk_FUN_036b7ad0(plVar8 + 4,plVar5);
      if ((plVar7 == (long *)0x0) ||
         (plVar7 = (long *)(**(code **)(*plVar7 + 0x948))
                                     (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x950)),
         plVar7 == (long *)0x0)) goto LAB_05af7d7c;
      uVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar5,*(undefined8 *)(*plVar7 + 0x2a0));
      if ((uVar6 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07a03018;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_05e26f18(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_036a1978(*unaff_x24);
        }
        goto LAB_05af7cb0;
      }
    }
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x598))();
  if ((uVar6 & 1) == 0) goto LAB_05af7d10;
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
        if (uVar3 != 7) goto LAB_05af7c60;
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03028;
      }
      else {
        lVar4 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_07a03010;
      }
    }
    else {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_07a02ff0;
    }
  }
  else {
LAB_05af7c60:
    if (uVar3 != 5) {
LAB_05af7d10:
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      plVar5 = (long *)thunk_FUN_0367fe20();
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0367c9fc(lVar4);
      }
      FUN_04a58bc0(plVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar4 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_07a03020;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_05e26f18(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
LAB_05af7cb0:
  uVar10 = FUN_05e59d90(uVar10);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  plVar5 = (long *)FUN_03156018(uVar10,lVar4);
  return plVar5;
}


