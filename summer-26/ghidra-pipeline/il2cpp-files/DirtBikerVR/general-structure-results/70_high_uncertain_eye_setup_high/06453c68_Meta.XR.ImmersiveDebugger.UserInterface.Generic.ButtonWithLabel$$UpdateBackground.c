/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$UpdateBackground
ENTRY_POINT: 06453c68
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel__UpdateBackground
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
    param_2 = FUN_03ac4090();
  }
  puVar3 = PTR_DAT_08486760;
  uVar13 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x20);
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*(long *)(PTR_DAT_08486760 + 0xe0));
  }
  puVar4 = PTR_DAT_08492e00;
  plVar6 = (long *)FUN_0675ff58(uVar13,0);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4))
    goto LAB_06454248;
  }
  uVar13 = FUN_0675ff58(*(long *)(puVar3 + 0x18) + 0x20,0);
  uVar7 = FUN_067690d8(plVar6,uVar13,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)(puVar3 + 0x90);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(lVar8 + 0x20,0);
    uVar7 = FUN_067690d8(plVar6,uVar13,0);
    if ((uVar7 & 1) != 0) {
      plVar6 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084974a0);
      FUN_066fc4ac(plVar6,0);
      goto LAB_06453d70;
    }
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090();
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
    }
    plVar11 = (long *)FUN_0675ff58(uVar13,0);
    if (plVar11 == (long *)0x0) {
LAB_06454250:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar7 = (**(code **)(*plVar11 + 0x2b8))(plVar11,plVar6,*(undefined8 *)(*plVar11 + 0x2c0));
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_06454250;
      uVar7 = (**(code **)(*plVar6 + 0x3d8))(plVar6,*(undefined8 *)(*plVar6 + 0x3e0));
      if ((uVar7 & 1) != 0) {
        uVar13 = (**(code **)(*plVar6 + 0x458))(plVar6,*(undefined8 *)(*plVar6 + 0x460));
        uVar14 = *(undefined8 *)PTR_DAT_08495bc0;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
        }
        uVar14 = FUN_0675ff58(uVar14,0);
        uVar7 = FUN_067690d8(uVar13,uVar14,0);
        if ((uVar7 & 1) != 0) {
          lVar8 = (**(code **)(*plVar6 + 0x478))(plVar6,*(undefined8 *)(*plVar6 + 0x480));
          if (lVar8 == 0) goto LAB_06454250;
          if (*(int *)(lVar8 + 0x18) == 0) {
LAB_06454254:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar11 = *(long **)(lVar8 + 0x20);
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
          if (plVar10 == (long *)0x0) goto LAB_06454250;
          if ((plVar11 != (long *)0x0) &&
             (lVar8 = thunk_FUN_03ac73c0(plVar11,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
            uVar13 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar13,0);
          }
          if ((int)plVar10[3] == 0) goto LAB_06454254;
          plVar10[4] = (long)plVar11;
          thunk_FUN_03afed3c(plVar10 + 4,plVar11);
          if ((plVar9 == (long *)0x0) ||
             (plVar9 = (long *)(**(code **)(*plVar9 + 0x978))
                                         (plVar9,plVar10,*(undefined8 *)(*plVar9 + 0x980)),
             plVar9 == (long *)0x0)) goto LAB_06454250;
          uVar7 = (**(code **)(*plVar9 + 0x2b8))(plVar9,plVar11,*(undefined8 *)(*plVar9 + 0x2c0));
          if ((uVar7 & 1) != 0) {
            uVar13 = *(undefined8 *)PTR_DAT_084974b0;
            if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar13 = FUN_0675ff58(uVar13,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)puVar4);
            }
            goto LAB_06454184;
          }
        }
      }
      uVar7 = (**(code **)(*plVar6 + 0x5b8))(plVar6,*(undefined8 *)(*plVar6 + 0x5c0));
      if ((uVar7 & 1) == 0) goto LAB_064541e4;
      if (*(int *)(*(long *)(puVar3 + 0x98) + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_067850a4(plVar6,0);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(puVar3 + 0xe0));
      }
      uVar5 = FUN_0676b950(uVar13,0);
      if (uVar5 < 0xd) {
        uVar2 = 1 << (ulong)(uVar5 & 0x1f);
        if ((uVar2 & 0x740) == 0) {
          if ((uVar2 & 0x1800) == 0) {
            if (uVar5 != 7) goto LAB_06454134;
            lVar8 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_084974c0;
          }
          else {
            lVar8 = *(long *)(puVar3 + 0xe0);
            puVar12 = (undefined8 *)PTR_DAT_084974a8;
          }
        }
        else {
          lVar8 = *(long *)(puVar3 + 0xe0);
          puVar12 = (undefined8 *)PTR_DAT_08497488;
        }
      }
      else {
LAB_06454134:
        if (uVar5 != 5) {
LAB_064541e4:
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03ac4090();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          plVar6 = (long *)thunk_FUN_03ac74bc();
          lVar8 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03ac4090(lVar8);
          }
          FUN_053ae71c(plVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
          return plVar6;
        }
        lVar8 = *(long *)(puVar3 + 0xe0);
        puVar12 = (undefined8 *)PTR_DAT_084974b8;
      }
      uVar13 = *puVar12;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar13 = FUN_0675ff58(uVar13,0);
      plVar11 = plVar6;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)puVar4);
      }
LAB_06454184:
      uVar13 = FUN_06792398(uVar13,plVar11,0);
      lVar8 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090(lVar8);
      }
      lVar8 = **(long **)(lVar8 + 0xc0);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03ac4090(lVar8);
      }
      plVar6 = (long *)FUN_035255bc(uVar13,lVar8);
      return plVar6;
    }
    uVar13 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar13 = FUN_0675ff58(uVar13,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)puVar4);
    }
    plVar6 = (long *)FUN_06792398(uVar13,plVar6,0);
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090(lVar8);
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  else {
    plVar6 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08497480);
    FUN_066fc3ac(plVar6,0);
LAB_06453d70:
    lVar8 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03ac4090();
    }
    plVar11 = *(long **)(lVar8 + 0xc0);
  }
  lVar8 = *plVar11;
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03ac4090(lVar8);
  }
  if (plVar6 != (long *)0x0) {
    if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(lVar8 + 0x130)) ||
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)) {
LAB_06454248:
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(plVar6);
    }
  }
  return plVar6;
}


