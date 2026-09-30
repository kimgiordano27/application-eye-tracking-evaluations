/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$RegisterTexture
ENTRY_POINT: 0644ebd0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Member__RegisterTexture(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((*(byte *)(unaff_x20 + 0xff) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08497480);
    FUN_03a8a718(PTR_DAT_08497488);
    FUN_03a8a718(PTR_DAT_08497490);
    FUN_03a8a718(PTR_DAT_08497498);
    FUN_03a8a718(PTR_DAT_084974a0);
    FUN_03a8a718(PTR_DAT_084974a8);
    FUN_03a8a718(PTR_DAT_084974b0);
    FUN_03a8a718(PTR_DAT_08495bc0);
    FUN_03a8a718(PTR_DAT_08492e00);
    FUN_03a8a718(PTR_DAT_084974b8);
    FUN_03a8a718(PTR_DAT_084974c0);
    FUN_03a8a718(PTR_DAT_0848d968);
    *(undefined1 *)(unaff_x20 + 0xff) = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090();
  }
  puVar3 = PTR_DAT_08486760;
  uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  puVar4 = PTR_DAT_08492e00;
  plVar7 = (long *)FUN_0675ff58(uVar13,0);
  if (plVar7 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_0644f260;
  }
  uVar13 = FUN_0675ff58(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar8 = FUN_067690d8(plVar7,uVar13,0);
  if ((uVar8 & 1) == 0) {
    lVar6 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(lVar6 + 0x20,0);
    uVar8 = FUN_067690d8(plVar7,uVar13,0);
    if ((uVar8 & 1) != 0) {
      plVar7 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084974a0);
      FUN_066fc4ac(plVar7,0);
      goto FUN_0644ed88;
    }
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_0675ff58(uVar13,0);
    if (plVar11 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar8 = (**(code **)(*plVar11 + 0x2b8))(plVar11,plVar7,*(undefined8 *)(*plVar11 + 0x2c0));
    if ((uVar8 & 1) == 0) {
      if (plVar7 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
      uVar8 = (**(code **)(*plVar7 + 0x3d8))(plVar7,*(undefined8 *)(*plVar7 + 0x3e0));
      if ((uVar8 & 1) != 0) {
        uVar13 = (**(code **)(*plVar7 + 0x458))(plVar7,*(undefined8 *)(*plVar7 + 0x460));
        uVar14 = *(undefined8 *)PTR_DAT_08495bc0;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_0675ff58(uVar14,0);
        uVar8 = FUN_067690d8(uVar13,uVar14,0);
        if ((uVar8 & 1) != 0) {
          lVar6 = (**(code **)(*plVar7 + 0x478))(plVar7,*(undefined8 *)(*plVar7 + 0x480));
          if (lVar6 == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0644f26c:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar11 = *(long **)(lVar6 + 0x20);
          if (plVar11 != (long *)0x0) {
            bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar11);
            }
          }
          uVar13 = *(undefined8 *)PTR_DAT_08497498;
          if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar9 = (long *)FUN_0675ff58(uVar13,0);
          plVar10 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
          if (plVar10 == (long *)0x0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          if ((plVar11 != (long *)0x0) &&
             (lVar6 = thunk_FUN_03ac73c0(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar6 == 0)) {
            uVar13 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_0644f26c;
          plVar10[4] = (long)plVar11;
          thunk_FUN_03afed3c(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x978))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x980)),
             plVar9 == (long *)0x0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          uVar8 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2c0));
          if ((uVar8 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_084974b0;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_0675ff58(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar4);
            }
            goto LAB_0644f19c;
          }
        }
      }
      uVar8 = (**(code **)(*plVar7 + 0x5b8))(plVar7,*(undefined8 *)(*plVar7 + 0x5c0));
      if ((uVar8 & 1) == 0) goto LAB_0644f1fc;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_067850a4(plVar7,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_0676b950(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_0644f14c;
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_084974c0;
          }
          else {
            lVar6 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_084974a8;
          }
        }
        else {
          lVar6 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_08497488;
        }
      }
      else {
LAB_0644f14c:
        if (uVar5 != 5) {
LAB_0644f1fc:
          lVar6 = *(long *)(param_1 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03ac4090();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          plVar7 = (long *)thunk_FUN_03ac74bc();
          lVar6 = *(long *)(param_1 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_03ac4090(lVar6);
          }
          FUN_053acd24(plVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x38));
          return plVar7;
        }
        lVar6 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_084974b8;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_0675ff58(uVar13,0);
      plVar11 = plVar7;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar4);
      }
LAB_0644f19c:
      uVar13 = FUN_06792398(uVar13,plVar11,0);
      lVar6 = *(long *)(param_1 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      lVar6 = **(long **)(lVar6 + 0xc0);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      plVar7 = (long *)FUN_035255bc(uVar13,lVar6);
      return plVar7;
    }
    uVar13 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar4);
    }
    plVar7 = (long *)FUN_06792398(uVar13,plVar7,0);
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090(lVar6);
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  else {
    plVar7 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08497480);
    FUN_066fc3ac(plVar7,0);
FUN_0644ed88:
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03ac4090();
    }
    plVar11 = *(long **)(lVar6 + 0xc0);
  }
  lVar6 = *plVar11;
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03ac4090(lVar6);
  }
  if (plVar7 != (long *)0x0) {
    if ((*(byte *)(*plVar7 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
LAB_0644f260:
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar7);
    }
  }
  return plVar7;
}


