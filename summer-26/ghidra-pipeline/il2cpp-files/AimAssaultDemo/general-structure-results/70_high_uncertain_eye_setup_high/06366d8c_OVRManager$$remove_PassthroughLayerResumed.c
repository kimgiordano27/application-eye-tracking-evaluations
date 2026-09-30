/*
FUNCTION_NAME: OVRManager$$remove_PassthroughLayerResumed
ENTRY_POINT: 06366d8c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06367028) */
/* WARNING: Removing unreachable block (ram,0x0636707c) */

void OVRManager__remove_PassthroughLayerResumed(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *plVar13;
  long unaff_x25;
  long *plVar14;
  
  plVar14 = *(long **)(unaff_x25 + 0x6f8);
  plVar5 = (long *)FUN_05450738(param_2,*param_1);
  puVar4 = PTR_DAT_07db5390;
  puVar3 = PTR_DAT_07db4a78;
  puVar2 = PTR_DAT_07d96690;
  puVar1 = PTR_DAT_07d89700;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06366e0c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_06366e0c:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_0636701c;
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06366ff4;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06366e68;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,0);
LAB_06366e68:
    lVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    if (*(char *)(lVar10 + 0x80) == '\0') {
      FUN_06345a08(lVar10,0);
      lVar7 = FUN_06365b68();
      lVar8 = FUN_0633ab28(lVar10,0);
      if (lVar8 != 0) {
        uVar9 = FUN_0633ab28(lVar10,0);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = FUN_063853bc(uVar9,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(lVar7 + 0xf0) = uVar9;
        thunk_FUN_037aeb94();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar13 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xb8);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar8 = *plVar13;
      uVar9 = *(undefined8 *)(lVar10 + 0x30);
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_06366f90;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_0377596c(plVar13,*(long *)puVar4,5);
LAB_06366f90:
      (*(code *)*puVar6)(plVar13,uVar9,lVar7,puVar6[1]);
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *plVar14) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06367010;
    }
  }
LAB_06366ff4:
  puVar6 = (undefined8 *)FUN_0377596c(plVar5,*plVar14,0);
LAB_06367010:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0636701c:
  uVar11 = FUN_06335a34();
  if ((uVar11 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


