/*
FUNCTION_NAME: OVRManager$$remove_HMDLost
ENTRY_POINT: 0636477c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06364ab0) */

void OVRManager__remove_HMDLost(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  long unaff_x22;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)(unaff_x22 + 0x4c0);
  uVar5 = thunk_FUN_037788cc();
  FUN_049ce6c0(uVar5,*puVar11);
  puVar1 = PTR_DAT_07db52e8;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  *(undefined8 *)(unaff_x21 + 0xe0) = uVar5;
  thunk_FUN_037aeb94((undefined8 *)(unaff_x21 + 0xe0),uVar5);
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_063647f8;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar11 = (undefined8 *)FUN_0377596c();
LAB_063647f8:
  puVar1 = PTR_DAT_07d896f8;
  plVar6 = (long *)(*(code *)*puVar11)();
  puVar4 = PTR_DAT_07db3528;
  puVar3 = PTR_DAT_07d9b068;
  puVar2 = PTR_DAT_07d89700;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06364878;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,0);
LAB_06364878:
    uVar8 = (*(code *)*puVar11)(plVar6,puVar11[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar6;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0636499c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_063648d4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar3,0);
LAB_063648d4:
    lVar7 = (*(code *)*puVar11)(plVar6,puVar11[1]);
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar10 = *(long **)(*(long *)(unaff_x20 + 0x28) + 0xe0);
    uVar5 = FUN_06387368(lVar7,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar11 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_06364950;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_0377596c(plVar10,*(long *)puVar4,2);
LAB_06364950:
    (*(code *)*puVar11)(plVar10,uVar5,puVar11[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar11 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_063649b8;
    }
  }
LAB_0636499c:
  puVar11 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar1,0);
LAB_063649b8:
  (*(code *)*puVar11)(plVar6,puVar11[1]);
  return;
}


