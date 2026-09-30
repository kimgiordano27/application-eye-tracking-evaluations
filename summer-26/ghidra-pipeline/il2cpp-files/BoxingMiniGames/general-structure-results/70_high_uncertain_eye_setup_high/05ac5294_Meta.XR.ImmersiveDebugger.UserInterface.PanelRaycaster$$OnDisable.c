/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnDisable
ENTRY_POINT: 05ac5294
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


long * Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnDisable(undefined8 *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x19;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  
  FUN_03642964(*param_1);
  FUN_03642964(PTR_DAT_07a03008);
  FUN_03642964(PTR_DAT_07a03010);
  FUN_03642964(PTR_DAT_07a03018);
  FUN_03642964(PTR_DAT_07a02540);
  FUN_03642964(PTR_DAT_079fd458);
  FUN_03642964(PTR_DAT_07a03020);
  FUN_03642964(PTR_DAT_07a03028);
  FUN_03642964(PTR_DAT_079f7098);
  *(undefined1 *)(unaff_x20 + 0xcf6) = 1;
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc();
  }
  puVar4 = PTR_DAT_079f4610;
  uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_079f4610 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(PTR_DAT_079f4610 + 0xe0));
  }
  puVar5 = PTR_DAT_079fd458;
  plVar8 = (long *)FUN_05e26f18(uVar16,0);
  if (plVar8 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5))
    goto LAB_05ac591c;
  }
  uVar16 = FUN_05e26f18(*(long *)(puVar4 + 0x18) + 0x20,0);
  uVar9 = FUN_05e30794(plVar8,uVar16,0);
  if ((uVar9 & 1) == 0) {
    lVar7 = *(long *)(puVar4 + 0x90);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar16 = FUN_05e26f18(lVar7 + 0x20,0);
    uVar9 = FUN_05e30794(plVar8,uVar16,0);
    if ((uVar9 & 1) != 0) {
      plVar8 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a03008);
      FUN_05dc2944(plVar8,0);
      goto LAB_05ac5418;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(puVar4 + 0xe0));
    }
    plVar12 = (long *)FUN_05e26f18(uVar16,0);
    if (plVar12 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar9 = (**(code **)(*plVar12 + 0x298))(plVar12,plVar8,*(undefined8 *)(*plVar12 + 0x2a0));
    if ((uVar9 & 1) == 0) {
      if (plVar8 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor;
      uVar9 = (**(code **)(*plVar8 + 0x3b8))(plVar8,*(undefined8 *)(*plVar8 + 0x3c0));
      if ((uVar9 & 1) != 0) {
        uVar16 = (**(code **)(*plVar8 + 0x438))(plVar8,*(undefined8 *)(*plVar8 + 0x440));
        uVar17 = *(undefined8 *)PTR_DAT_07a02540;
        if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_036a1978(*(long *)(puVar4 + 0xe0));
        }
        uVar17 = FUN_05e26f18(uVar17,0);
        uVar9 = FUN_05e30794(uVar16,uVar17,0);
        if ((uVar9 & 1) != 0) {
          lVar7 = (**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
          if (lVar7 == 0)
          goto Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor;
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_05ac5928:
                    /* WARNING: Subroutine does not return */
            FUN_03642c20();
          }
          plVar12 = *(long **)(lVar7 + 0x20);
          if (plVar12 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_03643084(plVar12);
            }
          }
          uVar16 = *(undefined8 *)PTR_DAT_07a03000;
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          plVar10 = (long *)FUN_05e26f18(uVar16,0);
          plVar11 = (long *)FUN_03642a4c(*(undefined8 *)PTR_DAT_079f7098,1);
          if (plVar11 == (long *)0x0)
          goto Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor;
          if ((plVar12 != (long *)0x0) &&
             (lVar7 = thunk_FUN_0367fd24(plVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar7 == 0)) {
            uVar16 = thunk_FUN_0368dc04();
                    /* WARNING: Subroutine does not return */
            FUN_03642acc(uVar16,0);
          }
          if ((int)plVar11[3] == 0) goto LAB_05ac5928;
          plVar11[4] = (long)plVar12;
          thunk_FUN_036b7ad0(plVar11 + 4,plVar12);
          if ((plVar10 == (long *)0x0) ||
             (plVar10 = (long *)(**(code **)(*plVar10 + 0x948))
                                          (plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x950)),
             plVar10 == (long *)0x0))
          goto Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate___ctor;
          uVar9 = (**(code **)(*plVar10 + 0x298))(plVar10,plVar12,*(undefined8 *)(*plVar10 + 0x2a0))
          ;
          if ((uVar9 & 1) != 0) {
            uVar16 = *(undefined8 *)PTR_DAT_07a03018;
            if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            uVar16 = FUN_05e26f18(uVar16,0);
            plVar8 = plVar12;
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              thunk_FUN_036a1978(*(long *)puVar5);
            }
            goto LAB_05ac582c;
          }
        }
      }
      uVar9 = (**(code **)(*plVar8 + 0x598))(plVar8,*(undefined8 *)(*plVar8 + 0x5a0));
      if ((uVar9 & 1) == 0) goto LAB_05ac588c;
      if (*(int *)(*(long *)(puVar4 + 0x98) + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar16 = FUN_05e4c8a4(plVar8,0);
      if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)(puVar4 + 0xe0));
      }
      uVar6 = FUN_05e32ff8(uVar16,0);
      if (uVar6 < 0xd) {
        uVar3 = 1 << (ulong)(uVar6 & 0x1f);
        if ((uVar3 & 0x740) == 0) {
          if ((uVar3 & 0x1800) == 0) {
            if (uVar6 != 7) goto LAB_05ac57dc;
            lVar7 = *(long *)(puVar4 + 0xe0);
            puVar13 = (undefined8 *)PTR_DAT_07a03028;
          }
          else {
            lVar7 = *(long *)(puVar4 + 0xe0);
            puVar13 = (undefined8 *)PTR_DAT_07a03010;
          }
        }
        else {
          lVar7 = *(long *)(puVar4 + 0xe0);
          puVar13 = (undefined8 *)PTR_DAT_07a02ff0;
        }
      }
      else {
LAB_05ac57dc:
        if (uVar6 != 5) {
LAB_05ac588c:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_0367c9fc();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_0367c9fc();
          }
          plVar8 = (long *)thunk_FUN_0367fe20();
          lVar14 = *(long *)(unaff_x19 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x135);
          lVar7 = lVar14;
          if ((uVar2 & 1) == 0) {
            lVar14 = FUN_0367c9fc(lVar14);
            uVar2 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135);
            lVar7 = *(long *)(unaff_x19 + 0x20);
          }
          pcVar15 = (code *)**(undefined8 **)(*(long *)(lVar14 + 0xc0) + 0x38);
          if ((uVar2 & 1) == 0) {
            lVar7 = FUN_0367c9fc(lVar7);
          }
          (*pcVar15)(plVar8,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar8;
        }
        lVar7 = *(long *)(puVar4 + 0xe0);
        puVar13 = (undefined8 *)PTR_DAT_07a03020;
      }
      uVar16 = *puVar13;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar16 = FUN_05e26f18(uVar16,0);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978(*(long *)puVar5);
      }
LAB_05ac582c:
      uVar16 = FUN_05e59d90(uVar16,plVar8,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      lVar7 = **(long **)(lVar7 + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_0367c9fc(lVar7);
      }
      plVar8 = (long *)FUN_03156018(uVar16,lVar7);
      return plVar8;
    }
    uVar16 = *(undefined8 *)PTR_DAT_07a02ff8;
    if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar16 = FUN_05e26f18(uVar16,0);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)puVar5);
    }
    plVar8 = (long *)FUN_05e59d90(uVar16,plVar8,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc(lVar7);
    }
    plVar12 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar8 = (long *)thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_07a02fe8);
    FUN_05dc2844(plVar8,0);
LAB_05ac5418:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_0367c9fc();
    }
    plVar12 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar12;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_0367c9fc(lVar7);
  }
  if (plVar8 != (long *)0x0) {
    if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_05ac591c:
                    /* WARNING: Subroutine does not return */
      FUN_03643084(plVar8);
    }
  }
  return plVar8;
}


