/*
FUNCTION_NAME: UI.Menu.RewardPopup.View.ClaimRewardsPopupButton$$CreateAnimationPayload
ENTRY_POINT: 0420e7b8
PROGRAM: m3ar-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void UI_Menu_RewardPopup_View_ClaimRewardsPopupButton__CreateAnimationPayload
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  long *in_stack_00000010;
  ulong in_stack_00000018;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0420e808;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar4 = (undefined8 *)FUN_0406ae20();
LAB_0420e808:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 == 0) {
    *unaff_x19 = 1;
    *(ulong *)(unaff_x19 + 0xc) = in_stack_00000018;
    *(long **)(unaff_x19 + 10) = in_stack_00000010;
    UI_Menu_LevelPopup_StartLevelTopPanel__OnDisable(unaff_x19 + 2,&stack0x00000010);
    return;
  }
  if (DAT_09539e0e == '\0') {
    FUN_0403162c(PTR_DAT_08f67c08);
    DAT_09539e0e = '\x01';
  }
  plVar8 = in_stack_00000010;
  if (in_stack_00000010 != (long *)0x0) {
    lVar5 = *in_stack_00000010;
    uVar10 = in_stack_00000018 & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0420e8a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,2);
LAB_0420e8a0:
    (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  if (*(long *)(unaff_x20 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  uVar6 = FUN_04285d78(*(long *)(unaff_x20 + 0x58),0);
  puVar1 = PTR_DAT_08f6bf98;
  if ((uVar6 & 1) != 0) {
    plVar8 = *(long **)(unaff_x20 + 0xa8);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f6bf98) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x10) * 0x10 + 0x138);
          goto LAB_0420e958;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f6bf98,0x10);
LAB_0420e958:
    uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar8 = *(long **)(unaff_x20 + 0xa8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_0420ee20;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,8);
LAB_0420ee20:
      iVar3 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (*(long *)(unaff_x20 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0xa0) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      if (*(int *)(lVar5 + 0x18) <= iVar3) goto LAB_0420ece8;
      lVar5 = *(long *)(unaff_x20 + 0xe8);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      }
      plVar8 = *(long **)(unaff_x20 + 0xa8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xd) * 0x10 + 0x138);
            goto LAB_0420eeb8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,0xd);
LAB_0420eeb8:
      (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      plVar8 = *(long **)(unaff_x20 + 0xb0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar8;
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + 0x68);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f6c028) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0420ef2c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f6c028,0);
LAB_0420ef2c:
      (*(code *)*puVar4)(plVar8,uVar11,puVar4[1]);
      plVar8 = *(long **)(unaff_x20 + 0xa8);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      lVar5 = *plVar8;
      lVar9 = *(long *)(unaff_x20 + 0x28);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
            goto LAB_0420ef98;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar1,8);
LAB_0420ef98:
      uVar6 = (*(code *)*puVar4)(plVar8,puVar4[1]);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c(uVar6,uVar6 & 0xffffffff);
      }
      auVar12 = FUN_0420f270(0x3f000000,lVar9);
      puVar1 = PTR_DAT_08f67a58;
      if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      _in_stack_00000010 = auVar12;
      if (DAT_09539e0c == '\0') {
        FUN_0403162c(PTR_DAT_08f67a58);
        DAT_09539e0c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_09539e0d == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0d = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0420f08c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,0);
LAB_0420f08c:
        iVar3 = (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
        if (iVar3 == 0) {
          *unaff_x19 = 2;
          *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
          UI_Menu_LevelPopup_StartLevelTopPanel__OnDisable(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
      if (DAT_09539e0e == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0e = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0420e9c0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,2);
LAB_0420e9c0:
        (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      auVar12 = FUN_0420c85c();
      puVar1 = PTR_DAT_08f67a58;
      if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      _in_stack_00000010 = auVar12;
      if (DAT_09539e0c == '\0') {
        FUN_0403162c(PTR_DAT_08f67a58);
        DAT_09539e0c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_09539e0d == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0d = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0420eab4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,0);
LAB_0420eab4:
        iVar3 = (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
        if (iVar3 == 0) {
          *unaff_x19 = 3;
          *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
          UI_Menu_LevelPopup_StartLevelTopPanel__OnDisable(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
      if (DAT_09539e0e == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0e = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0420eb4c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,2);
LAB_0420eb4c:
        (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      auVar12 = FUN_0420c8f8();
      puVar1 = PTR_DAT_08f67a58;
      if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      _in_stack_00000010 = auVar12;
      if (DAT_09539e0c == '\0') {
        FUN_0403162c(PTR_DAT_08f67a58);
        DAT_09539e0c = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      if (DAT_09539e0d == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0d = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0420ec3c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,0);
LAB_0420ec3c:
        iVar3 = (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
        if (iVar3 == 0) {
          *unaff_x19 = 4;
          *(undefined1 (*) [16])(unaff_x19 + 10) = _in_stack_00000010;
          UI_Menu_LevelPopup_StartLevelTopPanel__OnDisable(unaff_x19 + 2,&stack0x00000010);
          return;
        }
      }
      if (DAT_09539e0e == '\0') {
        FUN_0403162c(PTR_DAT_08f67c08);
        DAT_09539e0e = '\x01';
      }
      plVar8 = in_stack_00000010;
      if (in_stack_00000010 != (long *)0x0) {
        lVar5 = *in_stack_00000010;
        uVar10 = in_stack_00000018 & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67c08) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_0420ecd4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_0406ae20(in_stack_00000010,*(long *)PTR_DAT_08f67c08,2);
LAB_0420ecd4:
        (*(code *)*puVar4)(plVar8,uVar10,puVar4[1]);
      }
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
  }
LAB_0420ece8:
  lVar5 = *(long *)(unaff_x20 + 0xf8);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
  }
  cVar2 = DAT_09539e13;
  *(undefined1 *)(unaff_x20 + 0xe0) = 1;
  *unaff_x19 = 0xfffffffe;
  if (cVar2 == '\0') {
    FUN_0403162c(PTR_DAT_08f67a78);
    DAT_09539e13 = '\x01';
  }
  plVar8 = *(long **)(unaff_x19 + 2);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f67a78) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0420ed8c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08f67a78,2);
LAB_0420ed8c:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}


