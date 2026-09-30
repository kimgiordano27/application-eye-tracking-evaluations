/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 06386df8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06387024) */

long OVRPlugin__GetPassthroughCapabilityFlags(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x22;
  
  if ((unaff_x22 == 0) || (plVar5 = (long *)FUN_06395808(), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar9 = *plVar5;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db52e8) {
        puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06386e70;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)PTR_DAT_07db52e8,0);
LAB_06386e70:
  puVar4 = PTR_DAT_07d9b068;
  puVar3 = PTR_DAT_07d89700;
  puVar2 = PTR_DAT_07d896f8;
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  lVar9 = 0;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06386ef0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,0);
LAB_06386ef0:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return lVar9;
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06386fdc;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06386f4c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar4,0);
LAB_06386f4c:
    lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    bVar1 = lVar9 != 0;
    lVar9 = lVar10;
    if (bVar1) {
      thunk_FUN_037a15ac(PTR_DAT_07d967c8);
      uVar7 = thunk_FUN_037788cc();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6280);
      FUN_062d6d20(uVar7,uVar8,0);
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db6288);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar7,uVar8);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06386ff8;
    }
  }
LAB_06386fdc:
  puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
LAB_06386ff8:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return lVar9;
}


