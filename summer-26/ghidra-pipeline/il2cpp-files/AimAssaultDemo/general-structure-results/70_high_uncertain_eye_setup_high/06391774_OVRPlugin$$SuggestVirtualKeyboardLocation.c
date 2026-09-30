/*
FUNCTION_NAME: OVRPlugin$$SuggestVirtualKeyboardLocation
ENTRY_POINT: 06391774
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SuggestVirtualKeyboardLocation(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  char cVar6;
  long lVar7;
  ulong uVar8;
  long in_x10;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x21;
  long *unaff_x22;
  long in_stack_00000018;
  
  uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar8 != 0) {
                    /* try { // try from 06391784 to 06491787 has its CatchHandler @ 06391794 */
    piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 06391784 with catch @ 06391794 */
      if (*(long *)(piVar9 + -2) == **(long **)(in_x10 + 0x2e8)) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_063917cc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_063917cc:
                    /* try { // try from 063917d4 to 06491807 has its CatchHandler @ 063918ac */
  uVar4 = (*(code *)*puVar3)();
  *(undefined8 *)(in_stack_00000018 + 0x50) = uVar4;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffd;
  plVar11 = (long *)PTR_DAT_07db4d40;
  plVar2 = (long *)PTR_DAT_07d9b068;
LAB_0639180c:
  do {
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* try { // try from 06391820 to 06491823 has its CatchHandler @ 06391838 */
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06391860;
        }
                    /* catch() { ... } // from try @ 06391820 with catch @ 06391838 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar10,*unaff_x22,0);
LAB_06391860:
    uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      FUN_06391de0();
      *(undefined8 *)(in_stack_00000018 + 0x50) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x50),0);
      return 0;
    }
    plVar10 = *(long **)(in_stack_00000018 + 0x50);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *plVar2) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_063918cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(plVar10,*plVar2,0);
LAB_063918cc:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 == (long *)0x0) {
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
        if (plVar10 != (long *)0x0) {
          plVar11 = (long *)thunk_FUN_0374b7cc(plVar10,0);
          if (plVar11 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            uVar4 = FUN_06334b04(uVar5,uVar4,lVar7,uVar12,0);
            thunk_FUN_037a15ac(PTR_DAT_07d967c8);
            uVar5 = thunk_FUN_037788cc();
            FUN_062d6d20(uVar5,uVar4,0);
            uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
            FUN_0373b680(uVar5,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      goto LAB_0639180c;
    }
    bVar1 = *(byte *)(*plVar11 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *plVar11))
    goto LAB_06391950;
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(long *)(unaff_x21 + 0x10) == 0) {
      uVar4 = FUN_06376e90(plVar10);
      *(undefined8 *)(in_stack_00000018 + 0x58) = uVar4;
      thunk_FUN_037aeb94();
      plVar11 = *(long **)(in_stack_00000018 + 0x58);
      *(undefined4 *)(in_stack_00000018 + 0x10) = 0xfffffffc;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06391a2c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar11,*unaff_x22,0);
LAB_06391a2c:
      uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if ((uVar8 & 1) != 0) {
        plVar11 = *(long **)(in_stack_00000018 + 0x58);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        lVar7 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_06391ae4;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        break;
      }
      FUN_06391d30();
      *(undefined8 *)(in_stack_00000018 + 0x58) = 0;
      thunk_FUN_037aeb94((undefined8 *)(in_stack_00000018 + 0x58),0);
      plVar11 = (long *)PTR_DAT_07db4d40;
      plVar2 = (long *)PTR_DAT_07d9b068;
    }
    else {
      lVar7 = FUN_06377518(plVar10,*(long *)(unaff_x21 + 0x10),0);
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
        uVar12 = *(undefined8 *)(unaff_x21 + 0x10);
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db6558);
        uVar4 = FUN_063349e4(uVar5,uVar4,uVar12,0);
        thunk_FUN_037a15ac(PTR_DAT_07d967c8);
        uVar5 = thunk_FUN_037788cc();
        FUN_062d6d20(uVar5,uVar4,0);
        uVar4 = thunk_FUN_037a15ac(PTR_DAT_07db6560);
                    /* WARNING: Subroutine does not return */
        FUN_0373b680(uVar5,uVar4);
      }
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db5420) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06391b00;
    }
  }
LAB_06391ae4:
  puVar3 = (undefined8 *)FUN_0377596c(plVar11,*(long *)PTR_DAT_07db5420,0);
LAB_06391b00:
  (*(code *)*puVar3)(plVar11,puVar3[1]);
  *(undefined8 *)(in_stack_00000018 + 0x18) = extraout_x1;
  thunk_FUN_037aeb94();
  *(undefined4 *)(in_stack_00000018 + 0x10) = 2;
  return 1;
}


