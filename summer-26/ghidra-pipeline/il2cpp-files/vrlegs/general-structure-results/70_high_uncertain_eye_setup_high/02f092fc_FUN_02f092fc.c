/*
FUNCTION_NAME: FUN_02f092fc
ENTRY_POINT: 02f092fc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f098fc) */
/* WARNING: Removing unreachable block (ram,0x02f09794) */
/* WARNING: Removing unreachable block (ram,0x02f095b0) */
/* WARNING: Removing unreachable block (ram,0x02f098bc) */
/* WARNING: Removing unreachable block (ram,0x02f09910) */
/* WARNING: Removing unreachable block (ram,0x02f098f4) */

void FUN_02f092fc(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  char local_54 [4];
  
  puVar4 = PTR_DAT_03d22250;
  if ((DAT_0412a907 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03d22250);
    FUN_01ab69ac(PTR_DAT_03d22258);
    DAT_0412a907 = 1;
  }
  local_54[0] = '\0';
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar2 = PTR_DAT_03cbed08;
  uVar6 = FUN_02f0a920();
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar4;
    }
    uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18);
    local_54[0] = '\0';
    FUN_027e0bd8(uVar13,local_54,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar7 = FUN_02f0a39c();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar8 = *(long **)(lVar7 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
    puVar5 = PTR_DAT_03d22258;
    puVar3 = PTR_DAT_03cbed20;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar11 = *plVar8;
      lVar7 = *(long *)puVar3;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02f0944c;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,0);
LAB_02f0944c:
      uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar6 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)puVar2);
        if (plVar8 == (long *)0x0) goto LAB_02f095a4;
        lVar7 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 == 0) goto LAB_02f0957c;
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_02f09564;
      }
      lVar11 = *plVar8;
      lVar7 = *(long *)puVar3;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar7) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_02f094ac;
          }
          uVar6 = uVar6 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_02f094ac:
      plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar10);
      }
      (**(code **)(*plVar10 + 0x1f8))(plVar10,param_1,*(undefined8 *)(*plVar10 + 0x200));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02f0a8c0();
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      }
    } while( true );
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar7 = FUN_02f0a39c();
  if ((lVar7 == 0) || (plVar8 = *(long **)(lVar7 + 0x10), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x388))(plVar8,*(undefined8 *)(*plVar8 + 0x390));
  puVar5 = PTR_DAT_03d22258;
  puVar3 = PTR_DAT_03cbed20;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar11 = *plVar8;
    lVar7 = *(long *)puVar3;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02f09668;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,0);
LAB_02f09668:
    uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if ((uVar6 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)puVar2);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 == 0) goto LAB_02f0985c;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_02f09844;
    }
    lVar11 = *plVar8;
    lVar7 = *(long *)puVar3;
    uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar6 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_02f096c8;
        }
        uVar6 = uVar6 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_02f096c8:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
    if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar10);
    }
    uVar6 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
    if ((uVar6 & 1) == 0) {
      local_54[0] = '\0';
      FUN_027e0bd8(plVar10,local_54,0);
      (**(code **)(*plVar10 + 0x1f8))(plVar10,param_1,*(undefined8 *)(*plVar10 + 0x200));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02f0a8c0();
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      }
      if (local_54[0] != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(plVar10,0);
      }
    }
    else {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,param_1,*(undefined8 *)(*plVar10 + 0x200));
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar6 = FUN_02f0a8c0();
      if ((uVar6 & 1) != 0) {
        (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_02f09564:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02f09598;
    }
  }
LAB_02f0957c:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f09598:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_02f095a4:
  if (local_54[0] == '\0') {
    return;
  }
  OVRManager_<>c__<InitOVRManager>b__424_0(uVar13,0);
  return;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_02f09844:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_02f09878;
    }
  }
LAB_02f0985c:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f09878:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


