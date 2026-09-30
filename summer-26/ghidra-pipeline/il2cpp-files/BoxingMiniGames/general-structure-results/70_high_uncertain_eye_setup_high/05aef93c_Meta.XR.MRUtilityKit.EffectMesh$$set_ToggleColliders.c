/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$set_ToggleColliders
ENTRY_POINT: 05aef93c
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


long * Meta_XR_MRUtilityKit_EffectMesh__set_ToggleColliders(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
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
  
  if ((param_1 & 1) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_05e26f18(lVar6 + 0x20,0);
    uVar5 = FUN_05e30794();
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc();
      }
      uVar10 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
      }
      plVar4 = (long *)FUN_05e26f18(uVar10,0);
      if (plVar4 == (long *)0x0) {
LAB_05aefe90:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      uVar5 = (**(code **)(*plVar4 + 0x298))();
      if ((uVar5 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_07a02ff8;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_05e26f18(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_036a1978(*unaff_x24);
        }
        plVar4 = (long *)FUN_05e59d90(uVar10);
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_0367c9fc(lVar6);
        }
        plVar8 = *(long **)(lVar6 + 0xc0);
        goto LAB_05aef9c8;
      }
      if (unaff_x20 == (long *)0x0) goto LAB_05aefe90;
      uVar5 = (**(code **)(*unaff_x20 + 0x3b8))();
      if ((uVar5 & 1) != 0) {
        uVar10 = (**(code **)(*unaff_x20 + 0x438))();
        uVar11 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
        }
        uVar11 = FUN_05e26f18(uVar11,0);
        uVar5 = FUN_05e30794(uVar10,uVar11,0);
        if ((uVar5 & 1) != 0) {
          lVar6 = (**(code **)(*unaff_x20 + 0x458))();
          if (lVar6 == 0) goto LAB_05aefe90;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_05aefe94:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar4 = *(long **)(lVar6 + 0x20);
          if (plVar4 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar4);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar8 = (long *)FUN_05e26f18(uVar10,0);
          plVar7 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar7 == (long *)0x0) goto LAB_05aefe90;
          if ((plVar4 != (long *)0x0) &&
             (lVar6 = thunk_FUN_0367fd24(plVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0)) {
            uVar10 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_05aefe94;
          plVar7[4] = (long)plVar4;
          thunk_FUN_036b7ad0(plVar7 + 4,plVar4);
          if ((plVar8 == (long *)0x0) ||
             (plVar8 = (long *)(**(code **)(*plVar8 + 0x948))
                                         (plVar8,plVar7,*(undefined8 *)(*plVar8 + 0x950)),
             plVar8 == (long *)0x0)) goto LAB_05aefe90;
          uVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,plVar4,*(undefined8 *)(*plVar8 + 0x2a0));
          if ((uVar5 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar10 = FUN_05e26f18(uVar10,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_036a1978(*unaff_x24);
            }
            goto LAB_05aefdc4;
          }
        }
      }
      uVar5 = (**(code **)(*unaff_x20 + 0x598))();
      if ((uVar5 & 1) == 0) goto LAB_05aefe24;
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
            if (uVar3 != 7) goto LAB_05aefd74;
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
LAB_05aefd74:
        if (uVar3 != 5) {
LAB_05aefe24:
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar4 = (long *)thunk_FUN_0367fe20();
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc(lVar6);
          }
          FUN_04a56430(plVar4,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar4;
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
LAB_05aefdc4:
      uVar10 = FUN_05e59d90(uVar10);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0367c9fc(lVar6);
      }
      plVar4 = (long *)FUN_03156018(uVar10,lVar6);
      return plVar4;
    }
    plVar4 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
    FUN_05dc2944(plVar4,0);
  }
  else {
    plVar4 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar4,0);
  }
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc();
  }
  plVar8 = *(long **)(lVar6 + 0xc0);
LAB_05aef9c8:
  lVar6 = *plVar8;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_0367c9fc(lVar6);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar4);
    }
  }
  return plVar4;
}


