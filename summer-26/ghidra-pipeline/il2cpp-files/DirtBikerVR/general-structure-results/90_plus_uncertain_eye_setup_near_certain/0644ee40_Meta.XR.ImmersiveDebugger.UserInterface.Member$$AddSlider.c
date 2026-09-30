/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Member$$AddSlider
ENTRY_POINT: 0644ee40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Member__AddSlider(long *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  uVar4 = (**(code **)(*param_1 + 0x2b8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    plVar5 = (long *)FUN_06792398(uVar10);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090(lVar8);
    }
    lVar8 = **(long **)(lVar8 + 0xc0);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090(lVar8);
    }
    if (plVar5 == (long *)0x0) {
      return (long *)0x0;
    }
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      return plVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8ad40(plVar5);
  }
  if (unaff_x20 == (long *)0x0)
  goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
  uVar4 = (**(code **)(*unaff_x20 + 0x3d8))();
  if ((uVar4 & 1) != 0) {
    uVar10 = (**(code **)(*unaff_x20 + 0x458))();
    uVar11 = *(undefined8 *)PTR_DAT_08495bc0;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
    }
    uVar11 = FUN_0675ff58(uVar11,0);
    uVar4 = FUN_067690d8(uVar10,uVar11,0);
    if ((uVar4 & 1) != 0) {
      lVar8 = (**(code **)(*unaff_x20 + 0x478))();
      if (lVar8 == 0) {
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0644f26c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      plVar5 = *(long **)(lVar8 + 0x20);
      if (plVar5 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x24 + 0x130);
        if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8ad40(plVar5);
        }
      }
      uVar10 = *(undefined8 *)PTR_DAT_08497498;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      plVar6 = (long *)FUN_0675ff58(uVar10,0);
      plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
      if (plVar7 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
      if ((plVar5 != (long *)0x0) &&
         (lVar8 = thunk_FUN_03ac73c0(plVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar10,0);
      }
      if ((int)plVar7[3] == 0) goto LAB_0644f26c;
      plVar7[4] = (long)plVar5;
      thunk_FUN_03afed3c(plVar7 + 4,plVar5);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                     (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
         plVar6 == (long *)0x0))
      goto Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster;
      uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar5,*(undefined8 *)(*plVar6 + 0x2c0));
      if ((uVar4 & 1) != 0) {
        uVar10 = *(undefined8 *)PTR_DAT_084974b0;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar10 = FUN_0675ff58(uVar10,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*unaff_x24);
        }
        goto LAB_0644f19c;
      }
    }
  }
  uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
  if ((uVar4 & 1) == 0) goto LAB_0644f1fc;
  if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_067850a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
  }
  uVar3 = FUN_0676b950(uVar10,0);
  if (uVar3 < 0xd) {
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((uVar2 & 0x740) == 0) {
      if ((uVar2 & 0x1800) == 0) {
        if (uVar3 != 7) goto LAB_0644f14c;
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974c0;
      }
      else {
        lVar8 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974a8;
      }
    }
    else {
      lVar8 = *(long *)(unaff_x25 + 0xe0);
      puVar9 = (undefined8 *)PTR_DAT_08497488;
    }
  }
  else {
LAB_0644f14c:
    if (uVar3 != 5) {
LAB_0644f1fc:
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090();
      }
      if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03ac4090();
      }
      plVar5 = (long *)thunk_FUN_03ac74bc();
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090(lVar8);
      }
      FUN_053acd24(plVar5,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      return plVar5;
    }
    lVar8 = *(long *)(unaff_x25 + 0xe0);
    puVar9 = (undefined8 *)PTR_DAT_084974b8;
  }
  uVar10 = *puVar9;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar10 = FUN_0675ff58(uVar10,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
LAB_0644f19c:
  uVar10 = FUN_06792398(uVar10);
  lVar8 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090(lVar8);
  }
  lVar8 = **(long **)(lVar8 + 0xc0);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090(lVar8);
  }
  plVar5 = (long *)FUN_035255bc(uVar10,lVar8);
  return plVar5;
}


