/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$Invoke
ENTRY_POINT: 05af6c70
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


long * Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__Invoke
                 (ulong param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x19;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0367c9fc();
  }
  puVar3 = PTR_DAT_079f4610;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
  }
  puVar4 = PTR_DAT_079fd458;
  plVar6 = (long *)FUN_05e26f18(uVar13,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_05af7250;
  }
  uVar13 = FUN_05e26f18(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar7 = FUN_05e30794(plVar6,uVar13,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_05e26f18(lVar8 + 0x20,0);
    uVar7 = FUN_05e30794(plVar6,uVar13,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar6,0);
      goto LAB_05af6d78;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_05e26f18(uVar13,0);
    if (plVar11 == (long *)0x0) {
Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar7 = (**(code **)(*plVar11 + 0x298))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x2a0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0)
      goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
      uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
      if ((uVar7 & 1) != 0) {
        uVar13 = (**(code **)(*plVar6 + 0x438))(plVar6,*(undefined8 *)(*plVar6 + 0x440));
        uVar14 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_05e26f18(uVar14,0);
        uVar7 = FUN_05e30794(uVar13,uVar14,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
          if (lVar8 == 0)
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05af725c:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar11 = *(long **)(lVar8 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar11);
            }
          }
          uVar13 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar9 = (long *)FUN_05e26f18(uVar13,0);
          plVar10 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar10 == (long *)0x0)
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          if ((plVar11 != (long *)0x0) &&
             (lVar8 = thunk_FUN_0367fd24(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar13 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_05af725c;
          plVar10[4] = (long)plVar11;
          thunk_FUN_036b7ad0(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x948))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x950)),
             plVar9 == (long *)0x0))
          goto Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__EndInvoke;
          uVar7 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2a0));
          if ((uVar7 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar13 = FUN_05e26f18(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)puVar4);
            }
            goto LAB_05af718c;
          }
        }
      }
      uVar7 = (**(code **)(*plVar6 + 0x598))(plVar6,*(undefined8 *)(*plVar6 + 0x5a0));
      if ((uVar7 & 1) == 0) goto LAB_05af71ec;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e4c8a4(plVar6,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_05e32ff8(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_05af713c;
            lVar8 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar8 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar8 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05af713c:
        if (uVar5 != 5) {
LAB_05af71ec:
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar6 = (long *)thunk_FUN_0367fe20();
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_0367c9fc(lVar8);
          }
          FUN_04a587e4(plVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
          return plVar6;
        }
        lVar8 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar13 = FUN_05e26f18(uVar13,0);
      plVar11 = plVar6;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar4);
      }
LAB_05af718c:
      uVar13 = FUN_05e59d90(uVar13,plVar11,0);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc(lVar8);
      }
      lVar8 = **(long **)(lVar8 + 0xc0);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0367c9fc(lVar8);
      }
      plVar6 = (long *)FUN_03156018(uVar13,lVar8);
      return plVar6;
    }
    uVar13 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar13 = FUN_05e26f18(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar4);
    }
    plVar6 = (long *)FUN_05e59d90(uVar13,plVar6,0);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc(lVar8);
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar6,0);
LAB_05af6d78:
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0367c9fc();
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  lVar8 = *plVar11;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0367c9fc(lVar8);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
LAB_05af7250:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar6);
    }
  }
  return plVar6;
}


