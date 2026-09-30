/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$GetTweak
ENTRY_POINT: 0644ecb4
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


long * Meta_XR_ImmersiveDebugger_UserInterface_Member__GetTweak(undefined8 param_1)

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
  
  plVar13 = *(long **)(unaff_x24 + 0xe00);
  plVar4 = (long *)FUN_0675ff58(param_1,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*plVar13 + 0x130);
    if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13)) goto LAB_0644f260;
  }
  uVar5 = FUN_0675ff58(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar6 = FUN_067690d8(plVar4,uVar5,0);
  if ((uVar6 & 1) == 0) {
    lVar7 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_0675ff58(lVar7 + 0x20,0);
    uVar6 = FUN_067690d8(plVar4,uVar5,0);
    if ((uVar6 & 1) != 0) {
      plVar4 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084974a0);
      FUN_066fc4ac(plVar4,0);
      goto FUN_0644ed88;
    }
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03ac4090();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
    }
    plVar8 = (long *)FUN_0675ff58(uVar5,0);
    if (plVar8 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = (**(code **)(*plVar8 + 0x2b8))(plVar8,plVar4,*(undefined8 *)(*plVar8 + 0x2c0));
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
      uVar6 = (**(code **)(*plVar4 + 0x3d8))(plVar4,*(undefined8 *)(*plVar4 + 0x3e0));
      if ((uVar6 & 1) != 0) {
        uVar5 = (**(code **)(*plVar4 + 0x458))(plVar4,*(undefined8 *)(*plVar4 + 0x460));
        uVar12 = *(undefined8 *)PTR_DAT_08495bc0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
        }
        uVar12 = FUN_0675ff58(uVar12,0);
        uVar6 = FUN_067690d8(uVar5,uVar12,0);
        if ((uVar6 & 1) != 0) {
          lVar7 = (**(code **)(*plVar4 + 0x478))(plVar4,*(undefined8 *)(*plVar4 + 0x480));
          if (lVar7 == 0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_0644f26c:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar8 = *(long **)(lVar7 + 0x20);
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar13 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *plVar13)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar8);
            }
          }
          uVar5 = *(undefined8 *)PTR_DAT_08497498;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar9 = (long *)FUN_0675ff58(uVar5,0);
          plVar10 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
          if (plVar10 == (long *)0x0)
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          if ((plVar8 != (long *)0x0) &&
             (lVar7 = thunk_FUN_03ac73c0(plVar8,*(undefined8 *)(*plVar10 + 0x40)), lVar7 == 0)) {
            uVar5 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar5,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_0644f26c;
          plVar10[4] = (long)plVar8;
          thunk_FUN_03afed3c(plVar10 + 4,plVar8);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x978))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x980)),
             plVar9 == (long *)0x0))
          goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
          uVar6 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar8,*(undefined8 *)(*plVar9 + 0x2c0));
          if ((uVar6 & 1) != 0) {
            uVar5 = *(undefined8 *)PTR_DAT_084974b0;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar5 = FUN_0675ff58(uVar5,0);
            if (*(int *)(*plVar13 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*plVar13);
            }
            goto LAB_0644f19c;
          }
        }
      }
      uVar6 = (**(code **)(*plVar4 + 0x5b8))(plVar4,*(undefined8 *)(*plVar4 + 0x5c0));
      if ((uVar6 & 1) == 0) goto LAB_0644f1fc;
      if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_067850a4(plVar4,0);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
      }
      uVar3 = FUN_0676b950(uVar5,0);
      if (uVar3 < 0xd) {
        uVar2 = 1 << (ulong)(uVar3 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar3 != 7) goto LAB_0644f14c;
            lVar7 = *(long *)(unaff_x25 + 0xe0);
            puVar11 = (undefined8 *)PTR_DAT_084974c0;
          }
          else {
            lVar7 = *(long *)(unaff_x25 + 0xe0);
            puVar11 = (undefined8 *)PTR_DAT_084974a8;
          }
        }
        else {
          lVar7 = *(long *)(unaff_x25 + 0xe0);
          puVar11 = (undefined8 *)PTR_DAT_08497488;
        }
      }
      else {
LAB_0644f14c:
        if (uVar3 != 5) {
LAB_0644f1fc:
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03ac4090();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          plVar4 = (long *)thunk_FUN_03ac74bc();
          lVar7 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03ac4090(lVar7);
          }
          FUN_053acd24(plVar4,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x38));
          return plVar4;
        }
        lVar7 = *(long *)(unaff_x25 + 0xe0);
        puVar11 = (undefined8 *)PTR_DAT_084974b8;
      }
      uVar5 = *puVar11;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar5 = FUN_0675ff58(uVar5,0);
      plVar8 = plVar4;
      if (*(int *)(*plVar13 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*plVar13);
      }
LAB_0644f19c:
      uVar5 = FUN_06792398(uVar5,plVar8,0);
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090(lVar7);
      }
      lVar7 = **(long **)(lVar7 + 0xc0);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03ac4090(lVar7);
      }
      plVar4 = (long *)FUN_035255bc(uVar5,lVar7);
      return plVar4;
    }
    uVar5 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar5 = FUN_0675ff58(uVar5,0);
    if (*(int *)(*plVar13 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*plVar13);
    }
    plVar4 = (long *)FUN_06792398(uVar5,plVar4,0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03ac4090(lVar7);
    }
    plVar13 = *(long **)(lVar7 + 0xc0);
  }
  else {
    plVar4 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08497480);
    FUN_066fc3ac(plVar4,0);
FUN_0644ed88:
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03ac4090();
    }
    plVar13 = *(long **)(lVar7 + 0xc0);
  }
  lVar7 = *plVar13;
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03ac4090(lVar7);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar7 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)) {
LAB_0644f260:
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar4);
    }
  }
  return plVar4;
}


