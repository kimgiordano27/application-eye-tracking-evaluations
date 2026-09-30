/*
FUNCTION_NAME: UniJSON.JsonNode$$Equals
ENTRY_POINT: 02f49bfc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02f49fcc) */
/* WARNING: Removing unreachable block (ram,0x02f49f38) */
/* WARNING: Removing unreachable block (ram,0x02f49fd8) */
/* WARNING: Removing unreachable block (ram,0x02f49f60) */

void UniJSON_JsonNode__Equals(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x27;
  char cStack000000000000001c;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar6 = FUN_02786d28();
  puVar3 = PTR_DAT_03cfe690;
  if ((uVar6 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_03cfe690;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  uVar14 = **(undefined8 **)(lVar7 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_027e0bd8(uVar14,&stack0x0000001c,0);
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar7 = *(long *)puVar3;
  }
  plVar8 = (long *)**(long **)(lVar7 + 0xb8);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  plVar8 = (long *)(**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
  puVar5 = PTR_DAT_03cdb5d0;
  puVar4 = PTR_DAT_03cc4e90;
  puVar3 = PTR_DAT_03cbed20;
  bVar1 = false;
LAB_02f49ca4:
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar12 = *plVar8;
  lVar7 = *(long *)puVar3;
  uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar6 != 0) {
    piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar7) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_02f49cf4;
      }
      uVar6 = uVar6 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar6 != 0);
  }
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,0);
LAB_02f49cf4:
  uVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
  puVar2 = PTR_DAT_03cbed08;
  if ((uVar6 & 1) != 0) {
    lVar12 = *plVar8;
    lVar7 = *(long *)puVar3;
    uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar6 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar7) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_02f49d54;
        }
        uVar6 = uVar6 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_01a472ec(plVar8,lVar7,1);
LAB_02f49d54:
    plVar10 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(*plVar10 + 0x40) != *(long *)(*(long *)puVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0();
    }
    plVar11 = (long *)thunk_FUN_01a89fbc();
    plVar10 = (long *)*plVar11;
    lVar7 = *unaff_x27;
    if (plVar10 == (long *)0x0) {
LAB_02f49da0:
      plVar10 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_02f49da0;
      if (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
      {
        plVar10 = (long *)0x0;
      }
    }
    plVar11 = (long *)plVar11[1];
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar7);
    }
    uVar6 = FUN_02787b20(plVar10,0,0);
    if ((uVar6 & 1) == 0) goto LAB_02f49e04;
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar6 = (**(code **)(*unaff_x19 + 0x388))();
    if ((uVar6 & 1) == 0) goto LAB_02f49e04;
    goto LAB_02f49e38;
  }
  plVar8 = (long *)thunk_FUN_01a89d6c(plVar8,*(undefined8 *)PTR_DAT_03cbed08);
  if (plVar8 == (long *)0x0) goto LAB_02f49f28;
  lVar7 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 == 0) goto LAB_02f49f00;
  piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  goto LAB_02f49ee8;
LAB_02f49e04:
  uVar15 = *(undefined8 *)puVar4;
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar15 = FUN_0277b678(uVar15,0);
  uVar6 = FUN_02786d28(plVar10,uVar15,0);
  if ((uVar6 & 1) != 0) {
LAB_02f49e38:
    if (plVar11 != (long *)0x0) {
      if (*plVar11 != *(long *)PTR_DAT_03d23ee8) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar11);
      }
      do {
        plVar10 = (long *)plVar11[5];
        if ((plVar10 != (long *)0x0) && (*plVar10 == *(long *)PTR_DAT_03d23cb8)) {
          uVar6 = FUN_02f453d4(plVar10);
          if ((uVar6 & 1) != 0) {
            bVar1 = true;
            FUN_02f46430(plVar10);
          }
          break;
        }
        plVar11 = (long *)plVar11[4];
        bVar1 = true;
      } while (plVar11 != (long *)0x0);
    }
  }
  goto LAB_02f49ca4;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar13 = piVar13 + 4;
    if (uVar6 == 0) break;
LAB_02f49ee8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02f49f1c;
    }
  }
LAB_02f49f00:
  puVar9 = (undefined8 *)FUN_01a472ec(plVar8,*(long *)puVar2,0);
LAB_02f49f1c:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_02f49f28:
  if (cStack000000000000001c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar14,0);
  }
  puVar3 = PTR_DAT_03cfe690;
  if (bVar1) {
    lVar7 = *(long *)PTR_DAT_03cfe690;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar7 = *(long *)puVar3;
    }
    FusionStats__get_GraphColorBad(*(long *)(lVar7 + 0xb8) + 0x20,0);
    FUN_02f4ffa8();
  }
  return;
}


