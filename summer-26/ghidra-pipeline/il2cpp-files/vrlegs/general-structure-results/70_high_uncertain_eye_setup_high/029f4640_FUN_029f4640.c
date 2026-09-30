/*
FUNCTION_NAME: FUN_029f4640
ENTRY_POINT: 029f4640
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029f4b08) */
/* WARNING: Removing unreachable block (ram,0x029f4a38) */
/* WARNING: Removing unreachable block (ram,0x029f4b10) */

void FUN_029f4640(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char local_64 [4];
  
  if ((DAT_04127fa9 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbec30);
    FUN_01ab69ac(PTR_DAT_03d09938);
    FUN_01ab69ac(PTR_DAT_03d09840);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03d09940);
    FUN_01ab69ac(PTR_DAT_03d09948);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03ccf278);
    FUN_01ab69ac(PTR_DAT_03d09950);
    FUN_01ab69ac(PTR_DAT_03d09958);
    FUN_01ab69ac(PTR_DAT_03d09960);
    DAT_04127fa9 = 1;
  }
  local_64[0] = '\0';
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    return;
  }
  uVar5 = FUN_027b45f4(*(undefined8 *)(param_1 + 0x58),0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x68);
  if ((plVar6 == (long *)0x0) ||
     (plVar6 = (long *)(**(code **)(*plVar6 + 0x178))
                                 (plVar6,param_2,*(undefined8 *)(*plVar6 + 0x180)),
     plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar9 = *plVar6;
  uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar5 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03d09940) {
        puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_029f47b8;
      }
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar5 != 0);
  }
  puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03d09940,0);
LAB_029f47b8:
  plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
  puVar4 = PTR_DAT_03d09950;
  puVar3 = PTR_DAT_03d09948;
  puVar2 = PTR_DAT_03d09840;
  puVar1 = PTR_DAT_03cbed20;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  do {
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029f4838;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar1,0);
LAB_029f4838:
    uVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 == 0) goto LAB_029f4adc;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_029f4894;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)puVar3,0);
LAB_029f4894:
    uVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar9 = FUN_021c7f50(*(long *)(param_1 + 0x38),*(undefined8 *)puVar2);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029e1b54(uVar8,lVar9,*(undefined4 *)(lVar9 + 0x18));
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    local_64[0] = '\0';
    FUN_027e0bd8(uVar8,local_64,0);
    lVar10 = *(long *)(param_1 + 0x28);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar10 + 0x20) < 0x31) {
      FUN_02265dfc(lVar10,lVar9,*(undefined8 *)puVar4);
      if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_027de940(*(long *)(param_1 + 0x30),0);
    }
    else {
      plVar12 = *(long **)(param_1 + 0x78);
      lVar13 = *(long *)PTR_DAT_03cbec30;
      lVar10 = *(long *)(lVar13 + 0x38);
      if (lVar10 == 0) {
        FUN_01a47054(lVar13);
        lVar10 = *(long *)(lVar13 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      lVar10 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01a46ff8();
      }
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar13 = *plVar12;
      uVar14 = **(undefined8 **)(lVar10 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar13 + 0x12e);
      uVar15 = *(undefined8 *)PTR_DAT_03d09960;
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03ccf278) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_029f49dc;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar7 = (undefined8 *)FUN_01a472ec(plVar12,*(long *)PTR_DAT_03ccf278,0);
LAB_029f49dc:
      (*(code *)*puVar7)(plVar12,uVar15,uVar14,puVar7[1]);
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_021c7fbc(*(long *)(param_1 + 0x38),lVar9,*(undefined8 *)PTR_DAT_03d09938);
    }
    if (local_64[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar8,0);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_029f4af8;
    }
  }
LAB_029f4adc:
  puVar7 = (undefined8 *)FUN_01a472ec(plVar6,*(long *)PTR_DAT_03cbed08,0);
LAB_029f4af8:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


