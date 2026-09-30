/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_RaycastTarget
ENTRY_POINT: 05f35b08
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_RaycastTarget(void)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = FUN_0625ad04();
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(unaff_x25 + 0x90);
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_062519f8(lVar5 + 0x20,0);
    uVar3 = FUN_0625ad04();
    if ((uVar3 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678();
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
      }
      plVar4 = (long *)FUN_062519f8(uVar9,0);
      if (plVar4 == (long *)0x0) {
LAB_05f35fac:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      uVar3 = (**(code **)(*plVar4 + 0x2a8))();
      if ((uVar3 & 1) == 0) {
        if (unaff_x20 == (long *)0x0) goto LAB_05f35fac;
        uVar3 = (**(code **)(*unaff_x20 + 0x3c8))();
        if ((uVar3 & 1) == 0) {
LAB_05f35e90:
          uVar3 = (**(code **)(*unaff_x20 + 0x5b8))();
          if ((uVar3 & 1) == 0) {
switchD_05f35f08_default:
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678();
            }
            if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
              FUN_03775678();
            }
            plVar4 = (long *)thunk_FUN_037788cc();
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_03775678(lVar5);
            }
            FUN_04f0b42c(plVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
            return plVar4;
          }
          if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar9 = FUN_06276e18();
          if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
          }
          uVar2 = FUN_0625d834(uVar9,0);
          switch(uVar2) {
          case 5:
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar8 = (undefined8 *)PTR_DAT_07d98338;
            break;
          case 6:
          case 8:
          case 9:
          case 10:
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar8 = (undefined8 *)PTR_DAT_07d98300;
            break;
          case 7:
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar8 = (undefined8 *)PTR_DAT_07d98340;
            break;
          case 0xb:
          case 0xc:
            lVar5 = *(long *)(unaff_x25 + 0xe0);
            puVar8 = (undefined8 *)PTR_DAT_07d98320;
            break;
          default:
            goto switchD_05f35f08_default;
          }
          goto LAB_05f35c08;
        }
        uVar9 = (**(code **)(*unaff_x20 + 0x458))();
        uVar10 = *(undefined8 *)PTR_DAT_07d98330;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
        }
        uVar10 = FUN_062519f8(uVar10,0);
        uVar3 = FUN_0625ad04(uVar9,uVar10,0);
        if ((uVar3 & 1) == 0) goto LAB_05f35e90;
        lVar5 = (**(code **)(*unaff_x20 + 0x478))();
        if (lVar5 == 0) goto LAB_05f35fac;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_05f35fb0:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        plVar4 = *(long **)(lVar5 + 0x20);
        if (plVar4 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x24 + 0x130);
          if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x24)) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar4);
          }
        }
        uVar9 = *(undefined8 *)PTR_DAT_07d98310;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        plVar7 = (long *)FUN_062519f8(uVar9,0);
        plVar6 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d92630,1);
        if (plVar6 == (long *)0x0) goto LAB_05f35fac;
        if ((plVar4 != (long *)0x0) &&
           (lVar5 = thunk_FUN_037787d0(plVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)) {
          uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar9,0);
        }
        if ((int)plVar6[3] == 0) goto LAB_05f35fb0;
        plVar6[4] = (long)plVar4;
        thunk_FUN_037aeb94(plVar6 + 4,plVar4);
        if ((plVar7 == (long *)0x0) ||
           (plVar7 = (long *)(**(code **)(*plVar7 + 0x978))
                                       (plVar7,plVar6,*(undefined8 *)(*plVar7 + 0x980)),
           plVar7 == (long *)0x0)) goto LAB_05f35fac;
        uVar3 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar4,*(undefined8 *)(*plVar7 + 0x2b0));
        if ((uVar3 & 1) == 0) goto LAB_05f35e90;
        uVar9 = *(undefined8 *)PTR_DAT_07d98328;
        if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_062519f8(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x24);
        }
      }
      else {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar8 = (undefined8 *)PTR_DAT_07d98308;
LAB_05f35c08:
        uVar9 = *puVar8;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_062519f8(uVar9,0);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_03798b70(*unaff_x24);
        }
      }
      plVar4 = (long *)FUN_06284508(uVar9);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03775678(lVar5);
      }
      plVar7 = *(long **)(lVar5 + 0xc0);
      goto LAB_05f35c6c;
    }
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d98318);
    FUN_061efe40(plVar4,0);
  }
  else {
    plVar4 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d982f8);
    FUN_061efd40(plVar4,0);
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678();
  }
  plVar7 = *(long **)(lVar5 + 0xc0);
LAB_05f35c6c:
  lVar5 = *plVar7;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03775678(lVar5);
  }
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4);
    }
  }
  return plVar4;
}


