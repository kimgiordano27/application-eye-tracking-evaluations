/*
FUNCTION_NAME: OVRPlugin$$get_batteryStatus
ENTRY_POINT: 0566a980
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566ac74) */

void OVRPlugin__get_batteryStatus(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long lVar14;
  long unaff_x21;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  FUN_02d965b8(PTR_DAT_069fbff0);
  FUN_02d965b8(System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<ERSplatmap>_TypeInfo);
  FUN_02d965b8(System_Collections_Generic_List<ERTerrain>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x62d) = 1;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  plVar5 = (long *)FUN_0564de84(0x10,0);
  lVar14 = *(long *)(unaff_x19 + 0x148);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar1 = *(int *)(lVar14 + 0x18);
  *(undefined4 *)(lVar14 + 0x18) = 0;
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (0 < iVar1) {
    FUN_0550afb4(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
    lVar14 = *(long *)(unaff_x19 + 0x148);
  }
  puVar3 = System_Collections_Generic_List<ERSplatmap>_TypeInfo;
  lVar15 = *(long *)(unaff_x19 + 0xe0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if ((int)*(ulong *)(lVar15 + 0x18) < 1) {
    bVar4 = true;
  }
  else {
    uVar16 = 0;
    uVar9 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    bVar4 = true;
    do {
      if (uVar9 <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar17 = *(long *)(lVar15 + uVar16 * 8 + 0x20);
      if ((lVar17 != 0) && (uVar2 = *(uint *)(lVar17 + 0x18), 0 < (int)uVar2)) {
        lVar18 = 0;
        do {
          if (uVar2 <= (uint)lVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar10 = *(long *)(lVar17 + 0x20 + lVar18 * 8);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar10 = *(long *)(lVar10 + 0x28);
          if ((lVar10 != 0) && (uVar9 = FUN_0634b3c4(lVar10,0), (uVar9 & 1) != 0)) {
            if (lVar14 == 0) {
LAB_0566ac68:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar11 = *(long *)(lVar14 + 0x10);
            lVar12 = *(long *)puVar3;
            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_0566ac68;
            uVar2 = *(uint *)(lVar14 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar14 + 0x18) = uVar2 + 1;
              plVar6 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
              *plVar6 = lVar10;
              LeanTween__value(plVar6,lVar10);
            }
            else {
              FUN_040101ec(lVar14,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            if (bVar4) {
              bVar4 = *(char *)(lVar10 + 0x71) != '\0';
            }
            else {
              bVar4 = false;
            }
          }
          uVar2 = *(uint *)(lVar17 + 0x18);
          lVar18 = lVar18 + 1;
        } while ((int)lVar18 < (int)uVar2);
      }
      uVar9 = (ulong)*(uint *)(lVar15 + 0x18);
      uVar16 = uVar16 + 1;
    } while ((long)uVar16 < (long)(int)*(uint *)(lVar15 + 0x18));
  }
  plVar6 = *(long **)(unaff_x19 + 0x150);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar7 = (**(code **)(*plVar6 + 0x188))(plVar6,bVar4,*(undefined8 *)(*plVar6 + 400));
  plVar6 = *(long **)(unaff_x19 + 0x198);
  if (plVar6 != (long *)0x0) {
    lVar15 = *plVar6;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_0566aba8;
        }
        uVar16 = uVar16 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02dd004c(plVar6,*(long *)
                                  System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo,3);
LAB_0566aba8:
    uVar7 = (*(code *)*puVar8)(plVar6,puVar8[1]);
  }
  FUN_0566cac0(uVar7,lVar14);
  FUN_0566c810();
  if (plVar5 != (long *)0x0) {
    lVar14 = *plVar5;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar16 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0566ac2c;
        }
        uVar16 = uVar16 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar16 != 0);
    }
    puVar8 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_069fbff0,0);
LAB_0566ac2c:
    (*(code *)*puVar8)(plVar5,puVar8[1]);
  }
  return;
}


