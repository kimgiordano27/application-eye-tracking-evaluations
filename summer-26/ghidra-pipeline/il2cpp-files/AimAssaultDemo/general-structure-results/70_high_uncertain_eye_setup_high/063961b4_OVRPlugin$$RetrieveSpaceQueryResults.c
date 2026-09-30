/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 063961b4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0639665c) */
/* WARNING: Removing unreachable block (ram,0x06396628) */

byte OVRPlugin__RetrieveSpaceQueryResults(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x25;
  byte bVar11;
  int iVar12;
  
  puVar1 = PTR_DAT_07d89700;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar7 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d89700) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_06396210;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar3 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07d89700,0);
LAB_06396210:
  uVar9 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if ((uVar9 & 1) == 0) {
    bVar11 = 0;
  }
  else {
    uVar4 = FUN_06395ea4();
    plVar5 = (long *)thunk_FUN_037787d0(uVar4,*(undefined8 *)PTR_DAT_07db3528);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)FUN_03f781bc(uVar4,*(undefined8 *)PTR_DAT_07db67b0);
    }
    puVar2 = PTR_DAT_07d9b068;
    bVar11 = 0;
    do {
      lVar8 = *param_1;
      lVar7 = *(long *)puVar2;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063962bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(param_1,lVar7,0);
LAB_063962bc:
      (*(code *)*puVar3)(param_1,puVar3[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0639631c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(plVar5,*unaff_x25,0);
LAB_0639631c:
      plVar6 = (long *)(*(code *)*puVar3)(plVar5,puVar3[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar8 = *plVar6;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0639637c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar6,lVar7,0);
LAB_0639637c:
        uVar9 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if ((uVar9 & 1) == 0) {
          iVar12 = 9;
          goto joined_r0x06396418;
        }
        lVar8 = *plVar6;
        lVar7 = *(long *)puVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_063963d8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar6,lVar7,0);
LAB_063963d8:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
        uVar9 = FUN_06396768();
      } while ((uVar9 & 1) == 0);
      bVar11 = 1;
      iVar12 = 8;
joined_r0x06396418:
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
              puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_06396470;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_0377596c(plVar6,*(long *)PTR_DAT_07d896f8,0);
LAB_06396470:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
      }
      if ((iVar12 != 9) && (iVar12 != 0)) goto LAB_06396530;
      lVar8 = *param_1;
      lVar7 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_063964d8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c(param_1,lVar7,0);
LAB_063964d8:
      uVar9 = (*(code *)*puVar3)(param_1,puVar3[1]);
    } while ((uVar9 & 1) != 0);
  }
  iVar12 = 10;
LAB_06396530:
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06396588;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c(param_1,*(long *)PTR_DAT_07d896f8,0);
LAB_06396588:
    (*(code *)*puVar3)(param_1,puVar3[1]);
  }
  return iVar12 == 8 & bVar11;
}


