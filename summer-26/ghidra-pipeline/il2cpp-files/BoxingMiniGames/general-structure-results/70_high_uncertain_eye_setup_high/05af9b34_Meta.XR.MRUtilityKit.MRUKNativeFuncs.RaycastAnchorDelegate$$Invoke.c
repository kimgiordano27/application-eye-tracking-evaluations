/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastAnchorDelegate$$Invoke
ENTRY_POINT: 05af9b34
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


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastAnchorDelegate__Invoke(undefined8 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long unaff_x19;
  undefined8 uVar12;
  long unaff_x24;
  long *plVar13;
  long unaff_x25;
  
  plVar13 = *(long **)(unaff_x24 + 0x458);
  plVar4 = (long *)FUN_05e26f18(param_1,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*plVar13 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13)) goto LAB_05afa0e0;
  }
  uVar5 = FUN_05e26f18(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_05e30794(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_05e26f18(lVar7 + 0x20,0);
    uVar6 = FUN_05e30794(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar4,0);
      goto LAB_05af9c08;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    plVar8 = (long *)FUN_05e26f18(uVar5,0);
    if (plVar8 == (long *)0x0) {
LAB_05afa0e8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar4,*(undefined8 *)(*plVar8 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_05afa0e8;
      uVar6 = (**(code **)(*plVar4 + 0x3b8))(plVar4,*(undefined8 *)(*plVar4 + 0x3c0));
      if ((uVar6 & 1) != 0) {
        uVar5 = (**(code **)(*plVar4 + 0x438))(plVar4,*(undefined8 *)(*plVar4 + 0x440));
        uVar12 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
        }
        uVar12 = FUN_05e26f18(uVar12,0);
        uVar6 = FUN_05e30794(uVar5,uVar12,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
          if (lVar7 == 0) goto LAB_05afa0e8;
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05afa0ec:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar8 = *(long **)(lVar7 + 0x20);
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar13 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar8);
            }
          }
          uVar5 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar9 = (long *)FUN_05e26f18(uVar5,0);
          plVar10 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar10 == (long *)0x0) goto LAB_05afa0e8;
          if ((plVar8 != (long *)0x0) &&
             (lVar7 = thunk_FUN_0367fd24(plVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar5,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_05afa0ec;
          plVar10[4] = (long)plVar8;
          thunk_FUN_036b7ad0(plVar10 + 4,plVar8);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x948))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x950)),
             plVar9 == (long *)0x0)) goto LAB_05afa0e8;
          uVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x2a0));
          if ((uVar6 & 1) != 0) {
            uVar5 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar5 = FUN_05e26f18(uVar5,0);
            if (*(int *)(*plVar13 + 0xe4) == 0) {
              thunk_FUN_036a1978(*plVar13);
            }
            goto LAB_05afa01c;
          }
        }
      }
      uVar6 = (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
      if ((uVar6 & 1) == 0) goto LAB_05afa07c;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar5 = FUN_05e4c8a4(plVar4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
      }
      uVar3 = FUN_05e32ff8(uVar5,0);
      if (uVar3 < 0xd) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar3 != 7) goto LAB_05af9fcc;
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
LAB_05af9fcc:
        if (uVar3 != 5) {
LAB_05afa07c:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar4 = (long *)thunk_FUN_0367fe20();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0367c9fc(lVar7);
          }
          FUN_04a59718(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        lVar7 = *(long *)(unaff_x25 + 0xe0);
        puVar11 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar5 = FUN_05e26f18(uVar5,0);
      plVar8 = plVar4;
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        thunk_FUN_036a1978(*plVar13);
      }
LAB_05afa01c:
      uVar5 = FUN_05e59d90(uVar5,plVar8,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      lVar7 = **(long **)(lVar7 + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      plVar4 = (long *)FUN_03156018(uVar5,lVar7);
      return plVar4;
    }
    uVar5 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar5 = FUN_05e26f18(uVar5,0);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_036a1978(*plVar13);
    }
    plVar4 = (long *)FUN_05e59d90(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    plVar13 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar4,0);
LAB_05af9c08:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    plVar13 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar13;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_05afa0e0:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar4);
    }
  }
  return plVar4;
}


