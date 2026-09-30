/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.DebugManager.ShouldRetrieveInstanceDelegate$$Invoke
ENTRY_POINT: 0645c730
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_Manager_DebugManager_ShouldRetrieveInstanceDelegate__Invoke
                 (long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint in_w10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long *unaff_x24;
  long unaff_x25;
  
  if ((in_w10 < *(byte *)(param_3 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_3 + 0x130) * 8 + -8) != param_3))
  goto LAB_0645ccbc;
  FUN_0675ff58(*(long *)(unaff_x25 + 0x18) + 0x20,0);
  uVar4 = FUN_067690d8();
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_0675ff58(lVar5 + 0x20,0);
    uVar4 = FUN_067690d8();
    if ((uVar4 & 1) != 0) {
      unaff_x20 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084974a0);
      FUN_066fc4ac(unaff_x20,0);
      goto LAB_0645c7e4;
    }
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
    }
    plVar8 = (long *)FUN_0675ff58(uVar10,0);
    if (plVar8 == (long *)0x0) {
LAB_0645ccc4:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = (**(code **)(*plVar8 + 0x2b8))();
    if ((uVar4 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_0645ccc4;
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
          lVar5 = (**(code **)(*unaff_x20 + 0x478))();
          if (lVar5 == 0) goto LAB_0645ccc4;
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0645ccc8:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar8 = *(long **)(lVar5 + 0x20);
          if (plVar8 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x24 + 0x130);
            if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
              FUN_03a8ad40(plVar8);
            }
          }
          uVar10 = *(undefined8 *)PTR_DAT_08497498;
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          plVar6 = (long *)FUN_0675ff58(uVar10,0);
          plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_0848d968,1);
          if (plVar7 == (long *)0x0) goto LAB_0645ccc4;
          if ((plVar8 != (long *)0x0) &&
             (lVar5 = thunk_FUN_03ac73c0(plVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar5 == 0)) {
            uVar10 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
            FUN_03a8a884(uVar10,0);
          }
          if ((int)plVar7[3] == 0) goto LAB_0645ccc8;
          plVar7[4] = (long)plVar8;
          thunk_FUN_03afed3c(plVar7 + 4,plVar8);
          if ((plVar6 == (long *)0x0) ||
             (plVar6 = (long *)(**(code **)(*plVar6 + 0x978))
                                         (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x980)),
             plVar6 == (long *)0x0)) goto LAB_0645ccc4;
          uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,plVar8,*(undefined8 *)(*plVar6 + 0x2c0));
          if ((uVar4 & 1) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_084974b0;
            if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar10 = FUN_0675ff58(uVar10,0);
            if (*(int *)(*unaff_x24 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*unaff_x24);
            }
            goto LAB_0645cbf8;
          }
        }
      }
      uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
      if ((uVar4 & 1) == 0) goto LAB_0645cc58;
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
            if (uVar3 != 7) goto LAB_0645cba8;
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_084974c0;
          }
          else {
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar9 = (undefined8 *)PTR_DAT_084974a8;
          }
        }
        else {
          lVar5 = *(long *)(unaff_x25 + 0xe0);
          puVar9 = (undefined8 *)PTR_DAT_08497488;
        }
      }
      else {
LAB_0645cba8:
        if (uVar3 != 5) {
LAB_0645cc58:
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090();
          }
          if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
            FUN_03ac4090();
          }
          plVar8 = (long *)thunk_FUN_03ac74bc();
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03ac4090(lVar5);
          }
          FUN_053b13cc(plVar8,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
          return plVar8;
        }
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar9 = (undefined8 *)PTR_DAT_084974b8;
      }
      uVar10 = *puVar9;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar10 = FUN_0675ff58(uVar10,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*unaff_x24);
      }
LAB_0645cbf8:
      uVar10 = FUN_06792398(uVar10);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090(lVar5);
      }
      lVar5 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03ac4090(lVar5);
      }
      plVar8 = (long *)FUN_035255bc(uVar10,lVar5);
      return plVar8;
    }
    uVar10 = *(undefined8 *)PTR_DAT_08497490;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar10 = FUN_0675ff58(uVar10,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4(*unaff_x24);
    }
    unaff_x20 = (long *)FUN_06792398(uVar10);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090(lVar5);
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  else {
    unaff_x20 = (long *)thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08497480);
    FUN_066fc3ac(unaff_x20,0);
LAB_0645c7e4:
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03ac4090();
    }
    plVar8 = *(long **)(lVar5 + 0xc0);
  }
  lVar5 = *plVar8;
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03ac4090(lVar5);
  }
  if (unaff_x20 != (long *)0x0) {
    if ((*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5))
    {
LAB_0645ccbc:
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40(unaff_x20);
    }
  }
  return unaff_x20;
}


