/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 060b8bb0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_ShareSpacesComplete(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  long unaff_x22;
  undefined4 uVar8;
  
  FUN_03642964();
  *(undefined1 *)(unaff_x22 + 0x987) = 1;
  puVar2 = PTR_DAT_07a23d20;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  lVar4 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_07a23d20) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_060b8c18;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060b8c18:
  lVar4 = (*(code *)*puVar3)();
  *unaff_x20 = 0;
  *unaff_x21 = 0;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_060b8c80;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060b8c80:
  uVar6 = (*(code *)*puVar3)();
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((uVar6 & 1) == 0) {
    if (iVar1 == 3) {
      lVar4 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_060b8e44;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0367cd30();
      goto LAB_060b8e44;
    }
    if (iVar1 != 2) {
      return;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_060b8dcc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060b8dcc:
    uVar8 = (*(code *)*puVar3)();
    *unaff_x21 = uVar8;
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) goto LAB_060b8e1c;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_060b8d78;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30();
LAB_060b8d78:
    uVar8 = (*(code *)*puVar3)();
    *unaff_x21 = uVar8;
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar2) goto LAB_060b8e1c;
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_0367cd30();
  unaff_x21 = unaff_x20;
LAB_060b8e44:
  uVar8 = (*(code *)*puVar3)();
  *unaff_x21 = uVar8;
  return;
LAB_060b8e1c:
  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
  unaff_x21 = unaff_x20;
  goto LAB_060b8e44;
}


