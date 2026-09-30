/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardScale
ENTRY_POINT: 0639185c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetVirtualKeyboardScale(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char cVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x25;
  long *unaff_x26;
  long in_stack_00000018;
  
code_r0x0639185c:
  puVar3 = (undefined8 *)(param_1 + 0x138);
  do {
    uVar2 = (*(code *)*puVar3)(unaff_x19,puVar3[1]);
    if ((uVar2 & 1) == 0) {
      FUN_06391de0();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
                    /* try { // try from 06391878 to 064918ab has its CatchHandler @ 063918ac */
    plVar9 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_063918cc;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 06391704 with catch @ 063918ac
                       catch() { ... } // from try @ 06391738 with catch @ 063918ac
                       catch() { ... } // from try @ 063917d4 with catch @ 063918ac
                       catch() { ... } // from try @ 06391878 with catch @ 063918ac */
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x25,0);
LAB_063918cc:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar9 == (long *)0x0) {
LAB_06391950:
      lVar7 = *(long *)(in_stack_00000018 + 0x40);
      cVar6 = '\0';
      if (lVar7 != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        cVar6 = *(char *)(lVar7 + 0x20);
      }
      if (cVar6 != '\0') {
        lVar7 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar4 = FUN_061d52c8(0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *(long *)(unaff_x21 + 0x10);
        if (lVar7 == 0) {
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6568);
          lVar7 = thunk_FUN_037a15ac(PTR_DAT_07d8f8f0);
        }
        else {
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6568);
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
        uVar4 = FUN_06334b04(uVar5,uVar4,lVar7,uVar10,0);
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar5 = thunk_FUN_037788cc();
        FUN_062d6d20(uVar5,uVar4,0);
        uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,uVar4);
      }
    }
    else {
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26))
      goto LAB_06391950;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      if (*(long *)(unaff_x21 + 0x10) == 0) {
        uVar4 = FUN_06376e90(plVar9);
        *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
        thunk_FUN_037aeb94();
        plVar9 = *(long **)(in_stack_00000018 + 0x58);
        *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar9;
        uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x22) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06391a2c;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar9,*unaff_x22,0);
LAB_06391a2c:
        uVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if ((uVar2 & 1) != 0) {
          plVar9 = *(long **)(in_stack_00000018 + 0x58);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar7 = *plVar9;
          uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar2 == 0) goto LAB_06391ae4;
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          break;
        }
        FUN_06391d30();
        *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
        thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x58),0);
        unaff_x25 = (long *)PTR_DAT_07d9b068;
        unaff_x26 = (long *)PTR_DAT_07db4d40;
      }
      else {
        lVar7 = FUN_06377518(plVar9,*(long *)(unaff_x21 + 0x10),0);
        if (lVar7 != 0) {
          *(long *)(in_stack_00000018 + 0x18) = lVar7;
          thunk_FUN_037aeb94((long *)(in_stack_00000018 + 0x18));
          *(undefined4 *)(in_stack_00000018 + 0x10) = 1;
          return 1;
        }
        lVar7 = *(long *)(in_stack_00000018 + 0x40);
        cVar6 = '\0';
        if (lVar7 != 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          cVar6 = *(char *)(lVar7 + 0x20);
        }
        if (cVar6 != '\0') {
          lVar7 = thunk_FUN_037a15ac(PTR_DAT_07d88078);
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar4 = FUN_061d52c8(0);
          uVar10 = *(undefined8 *)(unaff_x21 + 0x10);
          uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6558);
          uVar4 = FUN_063349e4(uVar5,uVar4,uVar10,0);
          thunk_FUN_037a15ac(PTR_DAT_07d967c8);
          uVar5 = thunk_FUN_037788cc();
          FUN_062d6d20(uVar5,uVar4,0);
          uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar5,uVar4);
        }
      }
    }
    unaff_x19 = *(long **)(in_stack_00000018 + 0x50);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *unaff_x19;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          param_1 = param_1 + (long)*piVar8 * 0x10;
          goto code_r0x0639185c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(unaff_x19,*unaff_x22,0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar8 = piVar8 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07db5420) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06391b00;
    }
  }
LAB_06391ae4:
  puVar3 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07db5420,0);
LAB_06391b00:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


