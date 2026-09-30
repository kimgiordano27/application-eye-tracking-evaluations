/*
FUNCTION_NAME: FUN_05123158
ENTRY_POINT: 05123158
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05123504) */
/* WARNING: Removing unreachable block (ram,0x05123558) */

void FUN_05123158(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  
  puVar2 = PTR_DAT_06780aa0;
  puVar1 = PTR_DAT_06780a98;
  if ((DAT_06b79bf0 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780250);
    FUN_02d6084c(PTR_DAT_06780aa0);
    FUN_02d6084c(PTR_DAT_06780a98);
    FUN_02d6084c(PTR_DAT_06780b68);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06780258);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(PTR_DAT_067680d0);
    FUN_02d6084c(PTR_DAT_0677d990);
    FUN_02d6084c(PTR_DAT_0677da10);
    FUN_02d6084c(PTR_DAT_0677df18);
    DAT_06b79bf0 = 1;
  }
  lVar14 = *(long *)(param_1 + 0x30);
  uVar8 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04894d4c(uVar8,*(undefined8 *)puVar2);
  if (lVar14 != 0) {
    puVar15 = (undefined8 *)(lVar14 + 0xb8);
    *puVar15 = uVar8;
    thunk_FUN_02dd37b4(puVar15,uVar8);
    puVar1 = PTR_DAT_0675f3d0;
    if ((param_3 != 0) && (*(long *)(param_3 + 0xd8) != 0)) {
      plVar9 = (long *)FUN_04387c28(*(long *)(param_3 + 0xd8),*(undefined8 *)PTR_DAT_06780250);
      puVar5 = PTR_DAT_06780b68;
      puVar4 = PTR_DAT_06780258;
      puVar3 = PTR_DAT_067680d0;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar14 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_051232e8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar2,0);
LAB_051232e8:
        uVar12 = (*(code *)*puVar15)(plVar9,puVar15[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_051234f8;
          lVar14 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 == 0) goto LAB_051234d0;
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_051234b8;
        }
        lVar14 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto OVRManager__ShutdownInsightPassthrough;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar4,0);
OVRManager__ShutdownInsightPassthrough:
        lVar14 = (*(code *)*puVar15)(plVar9,puVar15[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(char *)(lVar14 + 0x80) == '\0') {
          if ((((*(ulong *)(lVar14 + 0x88) >> 0x20 == 1) &&
               ((*(ulong *)(lVar14 + 0x88) & 0xff) != 0)) || ((*(byte *)(lVar14 + 0x94) & 1) != 0))
             || (*(long *)(lVar14 + 0xb0) != 0)) {
            bVar6 = true;
          }
          else {
            bVar6 = *(long *)(lVar14 + 0xc0) != 0;
          }
          uVar8 = *(undefined8 *)(lVar14 + 0x40);
          uVar7 = FUN_05101ee4(lVar14,0);
          lVar10 = FUN_05122044(param_1,uVar8,uVar7,!bVar6);
          lVar11 = FUN_050f7004(lVar14,0);
          if (lVar11 != 0) {
            uVar8 = FUN_050f7004(lVar14,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar8 = FUN_05141898(uVar8,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            *(undefined8 *)(lVar10 + 0xf0) = uVar8;
            thunk_FUN_02dd37b4();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          plVar16 = *(long **)(*(long *)(param_1 + 0x30) + 0xb8);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          lVar11 = *plVar16;
          uVar8 = *(undefined8 *)(lVar14 + 0x30);
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_0512346c;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_02d9a5d4(plVar16,*(long *)puVar5,5);
LAB_0512346c:
          (*(code *)*puVar15)(plVar16,uVar8,lVar10,puVar15[1]);
        }
      } while( true );
    }
  }
LAB_05123550:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_051234b8:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_051234ec;
    }
  }
LAB_051234d0:
  puVar15 = (undefined8 *)FUN_02d9a5d4(plVar9,*(long *)puVar1,0);
LAB_051234ec:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
LAB_051234f8:
  uVar12 = FUN_050f1f10(param_2,0);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_05123550;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 0;
  }
  return;
}


