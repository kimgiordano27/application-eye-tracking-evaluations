/*
FUNCTION_NAME: OVRManager$$add_VrFocusAcquired
ENTRY_POINT: 06364bc8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06364e58) */
/* WARNING: Removing unreachable block (ram,0x06364f84) */

void OVRManager__add_VrFocusAcquired(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_0373b518(PTR_DAT_07d9b068);
  FUN_0373b518(PTR_DAT_07d89700);
  FUN_0373b518(PTR_DAT_07db52a8);
  FUN_0373b518(PTR_DAT_07db52a0);
  *(undefined1 *)(unaff_x22 + 0x419) = 1;
  plVar5 = (long *)thunk_FUN_037788cc(*unaff_x23);
  FUN_049ce6c0(plVar5,*unaff_x20);
  puVar3 = PTR_DAT_07db52e0;
  if (unaff_x21 == (long *)0x0) goto LAB_06364f7c;
  iVar4 = (**(code **)(*unaff_x21 + 0x228))();
  if (iVar4 == 2) {
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07db52e8) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06364c90;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c();
LAB_06364c90:
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar2 = PTR_DAT_07d9b068;
    puVar1 = PTR_DAT_07d89700;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    do {
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06364d00;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,0);
LAB_06364d00:
      uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar11 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_06364ed4;
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_06364e24;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_06364e0c;
      }
      lVar9 = *plVar7;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_06364d5c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar2,0);
LAB_06364d5c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
      uVar8 = FUN_0636137c();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_06364dcc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,2);
LAB_06364dcc:
      (*(code *)*puVar6)(plVar5,uVar8,puVar6[1]);
    } while( true );
  }
  lVar9 = FUN_0636137c();
  if (lVar9 != 0) {
    if (plVar5 == (long *)0x0) goto LAB_06364f7c;
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_06364ec4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,2);
LAB_06364ec4:
    (*(code *)*puVar6)(plVar5,lVar9,puVar6[1]);
  }
  goto LAB_06364ed4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_06364e0c:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06364e40;
    }
  }
LAB_06364e24:
  puVar6 = (undefined8 *)FUN_0377596c(plVar7,*(long *)PTR_DAT_07d896f8,0);
LAB_06364e40:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_06364ed4:
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06364f24;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,0);
LAB_06364f24:
    iVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (iVar4 < 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      plVar7 = (long *)(*(long *)(unaff_x19 + 0x28) + 0xf8);
      *plVar7 = (long)plVar5;
      thunk_FUN_037aeb94(plVar7,plVar5);
      return;
    }
  }
LAB_06364f7c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


