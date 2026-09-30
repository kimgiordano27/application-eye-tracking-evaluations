/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 06391924
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetVirtualKeyboardModelAnimationStates(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  char cVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000018;
  
  do {
    if (param_1 != 0) {
      *(long *)(in_stack_00000018 + 0x18) = param_1;
      thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x18));
      *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
      return 1;
    }
    lVar6 = *(long *)(in_stack_00000018 + 0x40);
    cVar5 = '\0';
    if (lVar6 != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      cVar5 = *(char *)(lVar6 + 0x20);
    }
    if (cVar5 != '\0') {
      lVar6 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar3 = FUN_061d52c8(0);
      uVar10 = *(undefined8 *)(unaff_x21 + 0x10);
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6558);
      uVar3 = FUN_063349e4(uVar4,uVar3,uVar10,0);
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar4 = thunk_FUN_037788cc();
      FUN_062d6d20(uVar4,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar3);
    }
LAB_0639180c:
    plVar9 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06391860;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06391860:
    uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      FUN_06391de0();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar9 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_063918cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x25,0);
LAB_063918cc:
    plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar9 == (long *)0x0) {
LAB_06391950:
      lVar6 = *(long *)(in_stack_00000018 + 0x40);
      cVar5 = '\0';
      if (lVar6 != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        cVar5 = *(char *)(lVar6 + 0x20);
      }
      if (cVar5 != '\0') {
        lVar6 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar3 = FUN_061d52c8(0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *(long *)(unaff_x21 + 0x10);
        if (lVar6 == 0) {
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6568);
          lVar6 = thunk_FUN_037a15ac(PTR_DAT_07d8f8f0);
        }
        else {
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6568);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar9 = (long *)thunk_FUN_0374b7cc(plVar9,0);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        uVar3 = FUN_06334b04(uVar4,uVar3,lVar6,uVar10,0);
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar4 = thunk_FUN_037788cc();
        FUN_062d6d20(uVar4,uVar3,0);
        uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar4,uVar3);
      }
      goto LAB_0639180c;
    }
    bVar1 = *(byte *)(*unaff_x26 + 0x130);
    if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26))
    goto LAB_06391950;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
      uVar3 = FUN_06376e90(plVar9);
      *(undefined8 *)(in_stack_00000018 + 0x58) = uVar3;
      thunk_FUN_037aeb94();
      plVar9 = *(long **)(in_stack_00000018 + 0x58);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06391a2c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06391a2c:
      uVar7 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if ((uVar7 & 1) != 0) {
        plVar9 = *(long **)(in_stack_00000018 + 0x58);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_06391ae4;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        break;
      }
      FUN_06391d30();
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x58),0);
      unaff_x25 = (long *)PTR_DAT_07d9b068;
      unaff_x26 = (long *)PTR_DAT_07db4d40;
      goto LAB_0639180c;
    }
    param_1 = FUN_06377518(plVar9,*(long *)(unaff_x21 + 0x10),0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db5420) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06391b00;
    }
  }
LAB_06391ae4:
  puVar2 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07db5420,0);
LAB_06391b00:
  (*(code *)*puVar2)(plVar9,puVar2[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


