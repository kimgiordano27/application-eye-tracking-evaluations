/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$Raycast
ENTRY_POINT: 05b1cd90
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


long * Meta_XR_MRUtilityKit_MRUKRoom__Raycast(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x19;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x25;
  long lVar14;
  
  lVar14 = *(long *)(unaff_x25 + 0x610);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(lVar14 + 0xe0));
  }
  puVar3 = PTR_DAT_079fd458;
  plVar5 = (long *)FUN_05e26f18(uVar11,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3))
    goto LAB_05b1d364;
  }
  uVar11 = FUN_05e26f18(*(long *)(lVar14 + 0x18) + 0x20,0);
  uVar6 = FUN_05e30794(plVar5,uVar11,0);
  if ((uVar6 & 1) == 0) {
    lVar12 = *(long *)(lVar14 + 0x90);
    if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar11 = FUN_05e26f18(lVar12 + 0x20,0);
    uVar6 = FUN_05e30794(plVar5,uVar11,0);
    if ((uVar6 & 1) != 0) {
      plVar5 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar5,0);
      goto LAB_05b1ce8c;
    }
    lVar12 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0367c9fc();
    }
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(lVar14 + 0xe0));
    }
    plVar9 = (long *)FUN_05e26f18(uVar11,0);
    if (plVar9 == (long *)0x0) {
LAB_05b1d36c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = (**(code **)(*plVar9 + 0x298))(plVar9,plVar5,*(undefined8 *)(*plVar9 + 0x2a0));
    if ((uVar6 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_05b1d36c;
      uVar6 = (**(code **)(*plVar5 + 0x3b8))(plVar5,*(undefined8 *)(*plVar5 + 0x3c0));
      if ((uVar6 & 1) != 0) {
        uVar11 = (**(code **)(*plVar5 + 0x438))(plVar5,*(undefined8 *)(*plVar5 + 0x440));
        uVar13 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(lVar14 + 0xe0));
        }
        uVar13 = FUN_05e26f18(uVar13,0);
        uVar6 = FUN_05e30794(uVar11,uVar13,0);
        if ((uVar6 & 1) != 0) {
          lVar12 = (**(code **)(*plVar5 + 0x458))(plVar5,*(undefined8 *)(*plVar5 + 0x460));
          if (lVar12 == 0) goto LAB_05b1d36c;
          if (*(int *)(lVar12 + 0x18) == 0) {
LAB_05b1d370:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar9 = *(long **)(lVar12 + 0x20);
          if (plVar9 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
            if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar9);
            }
          }
          uVar11 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar7 = (long *)FUN_05e26f18(uVar11,0);
          plVar8 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar8 == (long *)0x0) goto LAB_05b1d36c;
          if ((plVar9 != (long *)0x0) &&
             (lVar12 = thunk_FUN_0367fd24(plVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
            uVar11 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar11,0);
          }
          if ((int)plVar8[3] == 0) goto LAB_05b1d370;
          plVar8[4] = (long)plVar9;
          thunk_FUN_036b7ad0(plVar8 + 4,plVar9);
          if ((plVar7 == (long *)0x0) ||
             (plVar7 = (long *)(**(code **)(*plVar7 + 0x948))
                                         (plVar7,plVar8,*(undefined8 *)(*plVar7 + 0x950)),
             plVar7 == (long *)0x0)) goto LAB_05b1d36c;
          uVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,plVar9,*(undefined8 *)(*plVar7 + 0x2a0));
          if ((uVar6 & 1) != 0) {
            uVar11 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar11 = FUN_05e26f18(uVar11,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)puVar3);
            }
            goto LAB_05b1d2a0;
          }
        }
      }
      uVar6 = (**(code **)(*plVar5 + 0x598))(plVar5,*(undefined8 *)(*plVar5 + 0x5a0));
      if ((uVar6 & 1) == 0) goto LAB_05b1d300;
      if (*(int *)(*(long *)(lVar14 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_05e4c8a4(plVar5,0);
      if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(lVar14 + 0xe0));
      }
      uVar4 = FUN_05e32ff8(uVar11,0);
      if (uVar4 < 0xd) {
        uVar2 = 1 << (ulong)(uVar4 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar4 != 7) goto LAB_05b1d250;
            lVar14 = *(long *)(lVar14 + 0xe0);
            puVar10 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0xe0);
            puVar10 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar14 = *(long *)(lVar14 + 0xe0);
          puVar10 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05b1d250:
        if (uVar4 != 5) {
LAB_05b1d300:
          lVar14 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar5 = (long *)thunk_FUN_0367fe20();
          lVar14 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
            lVar14 = FUN_0367c9fc(lVar14);
          }
          FUN_04a64d90(plVar5,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x38));
          return plVar5;
        }
        lVar14 = *(long *)(lVar14 + 0xe0);
        puVar10 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar11 = *puVar10;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar11 = FUN_05e26f18(uVar11,0);
      plVar9 = plVar5;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar3);
      }
LAB_05b1d2a0:
      uVar11 = FUN_05e59d90(uVar11,plVar9,0);
      lVar14 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_0367c9fc(lVar14);
      }
      lVar14 = **(long **)(lVar14 + 0xc0);
      if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_0367c9fc(lVar14);
      }
      plVar5 = (long *)FUN_03156018(uVar11,lVar14);
      return plVar5;
    }
    uVar11 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(lVar14 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar11 = FUN_05e26f18(uVar11,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar3);
    }
    plVar5 = (long *)FUN_05e59d90(uVar11,plVar5,0);
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_0367c9fc(lVar14);
    }
    plVar9 = *(long **)(lVar14 + 0xc0);
  }
  else {
    plVar5 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar5,0);
LAB_05b1ce8c:
    lVar14 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
      lVar14 = FUN_0367c9fc();
    }
    plVar9 = *(long **)(lVar14 + 0xc0);
  }
  lVar14 = *plVar9;
  if ((*(ushort *)(lVar14 + 0x135) & 1) == 0) {
    lVar14 = FUN_0367c9fc(lVar14);
  }
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8 + -8) != lVar14))
    {
LAB_05b1d364:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar5);
    }
  }
  return plVar5;
}


