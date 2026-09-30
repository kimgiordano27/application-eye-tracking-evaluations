/*
FUNCTION_NAME: FUN_02f49b5c
ENTRY_POINT: 02f49b5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f49fcc) */
/* WARNING: Removing unreachable block (ram,0x02f49f38) */
/* WARNING: Removing unreachable block (ram,0x02f49fd8) */
/* WARNING: Removing unreachable block (ram,0x02f49f60) */

void FUN_02f49b5c(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_64 [4];
  
  puVar2 = PTR_DAT_03cbe5e8;
  if ((DAT_0412ab61 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cdb5d0);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03d23cb8);
    FUN_01ab69ac(PTR_DAT_03cc4e90);
    FUN_01ab69ac(PTR_DAT_03d23ee8);
    FUN_01ab69ac(PTR_DAT_03cfe690);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    DAT_0412ab61 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar7 = FUN_02786d28(param_1,0,0);
  puVar4 = PTR_DAT_03cfe690;
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_03cfe690;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar4;
  }
  uVar15 = **(undefined8 **)(lVar8 + 0xb8);
  local_64[0] = '\0';
  FUN_027e0bd8(uVar15,local_64,0);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar8 = *(long *)puVar4;
  }
  plVar9 = (long *)**(long **)(lVar8 + 0xb8);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar9 = (long *)(**(code **)(*plVar9 + 0x328))(plVar9,*(undefined8 *)(*plVar9 + 0x330));
  puVar6 = PTR_DAT_03cdb5d0;
  puVar5 = PTR_DAT_03cc4e90;
  puVar4 = PTR_DAT_03cbed20;
  bVar1 = false;
LAB_02f49ca4:
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar13 = *plVar9;
  lVar8 = *(long *)puVar4;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == lVar8) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_02f49cf4;
      }
      uVar7 = uVar7 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar7 != 0);
  }
  puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar8,0);
LAB_02f49cf4:
  uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  puVar3 = PTR_DAT_03cbed08;
  if ((uVar7 & 1) != 0) {
    lVar13 = *plVar9;
    lVar8 = *(long *)puVar4;
    uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar7 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar13 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_02f49d54;
        }
        uVar7 = uVar7 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)FUN_01a472ec(plVar9,lVar8,1);
LAB_02f49d54:
    plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*plVar11 + 0x40) != *(long *)(*(long *)puVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar12 = (long *)thunk_FUN_01a89fbc();
    plVar11 = (long *)*plVar12;
    lVar8 = *(long *)puVar2;
    if (plVar11 == (long *)0x0) {
LAB_02f49da0:
      plVar11 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar11 + 0x130) < *(byte *)(lVar8 + 0x130)) goto LAB_02f49da0;
      if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8)
      {
        plVar11 = (long *)0x0;
      }
    }
    plVar12 = (long *)plVar12[1];
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar8);
    }
    uVar7 = FUN_02787b20(plVar11,0,0);
    if ((uVar7 & 1) == 0) goto LAB_02f49e04;
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar7 = (**(code **)(*param_1 + 0x388))(param_1,plVar11,*(undefined8 *)(*param_1 + 0x390));
    if ((uVar7 & 1) == 0) goto LAB_02f49e04;
    goto LAB_02f49e38;
  }
  plVar9 = (long *)thunk_FUN_01a89d6c(plVar9,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar9 == (long *)0x0) goto LAB_02f49f28;
  lVar8 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar7 == 0) goto LAB_02f49f00;
  piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  goto LAB_02f49ee8;
LAB_02f49e04:
  uVar16 = *(undefined8 *)puVar5;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar16 = FUN_0277b678(uVar16,0);
  uVar7 = FUN_02786d28(plVar11,uVar16,0);
  if ((uVar7 & 1) != 0) {
LAB_02f49e38:
    if (plVar12 != (long *)0x0) {
      if (*plVar12 != *(long *)PTR_DAT_03d23ee8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar12);
      }
      do {
        plVar11 = (long *)plVar12[5];
        if ((plVar11 != (long *)0x0) && (*plVar11 == *(long *)PTR_DAT_03d23cb8)) {
          uVar7 = FUN_02f453d4(plVar11,param_1);
          if ((uVar7 & 1) != 0) {
            bVar1 = true;
            FUN_02f46430(plVar11,param_1);
          }
          break;
        }
        plVar12 = (long *)plVar12[4];
        bVar1 = true;
      } while (plVar12 != (long *)0x0);
    }
  }
  goto LAB_02f49ca4;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar14 = piVar14 + 4;
    if (uVar7 == 0) break;
LAB_02f49ee8:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_02f49f1c;
    }
  }
LAB_02f49f00:
  puVar10 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar3,0);
LAB_02f49f1c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_02f49f28:
  if (local_64[0] != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar15,0);
  }
  puVar2 = PTR_DAT_03cfe690;
  if (bVar1) {
    lVar8 = *(long *)PTR_DAT_03cfe690;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar8 = *(long *)puVar2;
    }
    FusionStats__get_GraphColorBad(*(long *)(lVar8 + 0xb8) + 0x20,0);
    FUN_02f4ffa8(param_1);
  }
  return;
}


