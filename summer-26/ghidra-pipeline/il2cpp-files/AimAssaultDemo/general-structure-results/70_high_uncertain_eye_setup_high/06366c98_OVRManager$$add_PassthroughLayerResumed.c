/*
FUNCTION_NAME: OVRManager$$add_PassthroughLayerResumed
ENTRY_POINT: 06366c98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06367028) */
/* WARNING: Removing unreachable block (ram,0x0636707c) */

void OVRManager__add_PassthroughLayerResumed(long param_1,undefined8 param_2,long param_3)

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
  long unaff_x22;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  
  puVar2 = PTR_DAT_07db52c8;
  puVar1 = PTR_DAT_07db52c0;
  if ((*(byte *)(unaff_x22 + 0x42e) & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db4a70);
    FUN_0373b518(PTR_DAT_07db52c8);
    FUN_0373b518(PTR_DAT_07db52c0);
    FUN_0373b518(PTR_DAT_07db5390);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07db4a78);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07d96690);
    FUN_0373b518(PTR_DAT_07db2200);
    FUN_0373b518(PTR_DAT_07db2280);
    FUN_0373b518(PTR_DAT_07db2760);
    *(undefined1 *)(unaff_x22 + 0x42e) = 1;
  }
  lVar14 = *(long *)(param_1 + 0x30);
  uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
  FUN_05b0e950(uVar8,*(undefined8 *)puVar2);
  if (lVar14 != 0) {
    puVar15 = (undefined8 *)(lVar14 + 0xb8);
    *puVar15 = uVar8;
    thunk_FUN_037aeb94(puVar15,uVar8);
    puVar1 = PTR_DAT_07d896f8;
    if ((param_3 != 0) && (*(long *)(param_3 + 0xd8) != 0)) {
      plVar9 = (long *)FUN_05450738(*(long *)(param_3 + 0xd8),*(undefined8 *)PTR_DAT_07db4a70);
      puVar5 = PTR_DAT_07db5390;
      puVar4 = PTR_DAT_07db4a78;
      puVar3 = PTR_DAT_07d96690;
      puVar2 = PTR_DAT_07d89700;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      do {
        lVar14 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06366e0c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar2,0);
LAB_06366e0c:
        uVar12 = (*(code *)*puVar15)(plVar9,puVar15[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_0636701c;
          lVar14 = *plVar9;
          uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar12 == 0) goto LAB_06366ff4;
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_06366fdc;
        }
        lVar14 = *plVar9;
        uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
              puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_06366e68;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar15 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar4,0);
LAB_06366e68:
        lVar14 = (*(code *)*puVar15)(plVar9,puVar15[1]);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
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
          uVar7 = FUN_06345a08(lVar14,0);
          lVar10 = FUN_06365b68(param_1,uVar8,uVar7,!bVar6);
          lVar11 = FUN_0633ab28(lVar14,0);
          if (lVar11 != 0) {
            uVar8 = FUN_0633ab28(lVar14,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_03798b70();
            }
            uVar8 = FUN_063853bc(uVar8,0);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0373b7b4();
            }
            *(undefined8 *)(lVar10 + 0xf0) = uVar8;
            thunk_FUN_037aeb94();
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar16 = *(long **)(*(long *)(param_1 + 0x30) + 0xb8);
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          lVar11 = *plVar16;
          uVar8 = *(undefined8 *)(lVar14 + 0x30);
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
                puVar15 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                goto LAB_06366f90;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar15 = (undefined8 *)FUN_0377596c(plVar16,*(long *)puVar5,5);
LAB_06366f90:
          (*(code *)*puVar15)(plVar16,uVar8,lVar10,puVar15[1]);
        }
      } while( true );
    }
  }
LAB_06367074:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_06366fdc:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar15 = (undefined8 *)(lVar14 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_06367010;
    }
  }
LAB_06366ff4:
  puVar15 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar1,0);
LAB_06367010:
  (*(code *)*puVar15)(plVar9,puVar15[1]);
LAB_0636701c:
  uVar12 = FUN_06335a34(param_2,0);
  if ((uVar12 & 1) != 0) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_06367074;
    *(undefined1 *)(*(long *)(param_1 + 0x30) + 0xd0) = 0;
  }
  return;
}


