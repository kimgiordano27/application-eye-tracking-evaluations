/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$BeginInvoke
ENTRY_POINT: 05af6c84
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__BeginInvoke(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long in_x9;
  long unaff_x19;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x25;
  
  uVar12 = *(undefined8 *)(in_x9 + 0x20);
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  puVar3 = PTR_DAT_079fd458;
  plVar5 = (long *)FUN_05e26f18(uVar12,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05af7250;
  }
  uVar12 = FUN_05e26f18(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_05e30794(plVar5,uVar12,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar12 = FUN_05e26f18(lVar7 + 0x20,0);
    uVar6 = FUN_05e30794(plVar5,uVar12,0);
    if ((uVar6 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar5,0);
      goto LAB_05af6d78;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    plVar10 = (long *)FUN_05e26f18(uVar12,0);
    if (plVar10 == (long *)0x0) {
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar5,*(undefined8 *)(*plVar10 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar5 == (long *)0x0)
      goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
      uVar6 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
      if ((uVar6 & 1) != 0) {
        uVar12 = (**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
        uVar13 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
        }
        uVar13 = FUN_05e26f18(uVar13,0);
        uVar6 = FUN_05e30794(uVar12,uVar13,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
          if (lVar7 == 0)
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05af725c:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar10 = *(long **)(lVar7 + 0x20);
          if (plVar10 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar10);
            }
          }
          uVar12 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar8 = (long *)FUN_05e26f18(uVar12,0);
          plVar9 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar9 == (long *)0x0)
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          if ((plVar10 != (long *)0x0) &&
             (lVar7 = thunk_FUN_0367fd24(plVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar7 == 0)) {
            uVar12 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar12,0);
          }
          if ((int)plVar9[3] == 0) goto LAB_05af725c;
          plVar9[4] = (long)plVar10;
          thunk_FUN_036b7ad0(plVar9 + 4,plVar10);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x948))
                                         (plVar8,plVar9,*(undefined8 *)(*plVar8 + 0x950)),
             plVar8 == (long *)0x0))
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar10,*(undefined8 *)(*plVar8 + 0x2a0));
          if ((uVar6 & 1) != 0) {
            uVar12 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar12 = FUN_05e26f18(uVar12,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)puVar3);
            }
            goto LAB_05af718c;
          }
        }
      }
      uVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
      if ((uVar6 & 1) == 0) goto LAB_05af71ec;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_05e4c8a4(plVar5,0);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
      }
      uVar4 = FUN_05e32ff8(uVar12,0);
      if (uVar4 < 0xd) {
        uVar2 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar4 != 7) goto LAB_05af713c;
            lVar7 = *(long *)(unaff_x25 + 0xe0);
            puVar11 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar7 = *(long *)(unaff_x25 + 0xe0);
            puVar11 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05af713c:
        if (uVar4 != 5) {
LAB_05af71ec:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar5 = (long *)thunk_FUN_0367fe20();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0367c9fc(lVar7);
          }
          FUN_04a587e4(plVar5,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar5;
        }
        lVar7 = *(long *)(unaff_x25 + 0xe0);
        puVar11 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar12 = *puVar11;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar12 = FUN_05e26f18(uVar12,0);
      plVar10 = plVar5;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar3);
      }
LAB_05af718c:
      uVar12 = FUN_05e59d90(uVar12,plVar10,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      lVar7 = **(long **)(lVar7 + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      plVar5 = (long *)FUN_03156018(uVar12,lVar7);
      return plVar5;
    }
    uVar12 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar12 = FUN_05e26f18(uVar12,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05e59d90(uVar12,plVar5,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar5 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar5,0);
LAB_05af6d78:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    plVar10 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar10;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_05af7250:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar5);
    }
  }
  return plVar5;
}


