/*
FUNCTION_NAME: OVRPlugin$$set_systemDisplayFrequency
ENTRY_POINT: 076cd084
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076cd41c) */

long OVRPlugin__set_systemDisplayFrequency(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  long unaff_x21;
  undefined8 *puVar17;
  ulong uVar18;
  long unaff_x22;
  
  puVar2 = PTR_DAT_08fadcf8;
  puVar17 = *(undefined8 **)(unaff_x21 + 0xcf0);
  if ((*(byte *)(unaff_x22 + 0x1f8) & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f65868);
    FUN_0403162c(PTR_DAT_08fadd00);
    FUN_0403162c(PTR_DAT_08fadd08);
    FUN_0403162c(PTR_DAT_08f65880);
    FUN_0403162c(PTR_DAT_08fadd10);
    FUN_0403162c(PTR_DAT_08fadcf8);
    FUN_0403162c(PTR_DAT_08fadcf0);
    *(undefined1 *)(unaff_x22 + 0x1f8) = 1;
  }
  lVar7 = thunk_FUN_0406deb8(*puVar17);
  FUN_0594ac58(lVar7,*(undefined8 *)puVar2);
  puVar6 = PTR_DAT_08fadd10;
  puVar5 = PTR_DAT_08fadd08;
  puVar4 = PTR_DAT_08fadd00;
  puVar3 = PTR_DAT_08f65880;
  puVar2 = PTR_DAT_08f65868;
  lVar11 = *(long *)(param_1 + 0x40);
  if (lVar11 != 0) {
    uVar1 = *(uint *)(lVar11 + 0x18);
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_04031894();
        }
        lVar16 = *(long *)(lVar11 + uVar14 * 8 + 0x20);
        if (lVar16 == 0) goto LAB_076cd418;
        uVar18 = 0;
        do {
          plVar8 = (long *)FUN_076cc40c(lVar16,uVar18 & 0xffffffff);
          if (plVar8 == (long *)0x0) goto LAB_076cd418;
          lVar10 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar17 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_076cd1d4;
              }
              uVar12 = uVar12 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar12 != 0);
          }
          puVar17 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar4,0);
LAB_076cd1d4:
          plVar8 = (long *)(*(code *)*puVar17)(plVar8,puVar17[1]);
joined_r0x076cd1e8:
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0403188c();
          }
          lVar10 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                puVar17 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_076cd23c;
              }
              uVar12 = uVar12 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar12 != 0);
          }
          puVar17 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar3,0);
LAB_076cd23c:
          uVar12 = (*(code *)*puVar17)(plVar8,puVar17[1]);
          if ((uVar12 & 1) != 0) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar10 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar17 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_076cd2a0;
                }
                uVar12 = uVar12 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar5,0);
LAB_076cd2a0:
            uVar9 = (*(code *)*puVar17)(plVar8,puVar17[1]);
            if (lVar7 == 0) {
LAB_076cd394:
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            lVar10 = *(long *)(lVar7 + 0x10);
            lVar13 = *(long *)puVar6;
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_076cd394;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              *(ulong *)(lVar10 + 0x20) = uVar18;
              *(undefined8 *)(lVar10 + 0x28) = uVar9;
            }
            else {
              FUN_0594b494(lVar7,uVar18,uVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            goto joined_r0x076cd1e8;
          }
          if (plVar8 != (long *)0x0) {
            lVar10 = *plVar8;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
                  puVar17 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_076cd374;
                }
                uVar12 = uVar12 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar12 != 0);
            }
            puVar17 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar2,0);
LAB_076cd374:
            (*(code *)*puVar17)(plVar8,puVar17[1]);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 5);
        uVar1 = *(uint *)(lVar11 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    return lVar7;
  }
LAB_076cd418:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


