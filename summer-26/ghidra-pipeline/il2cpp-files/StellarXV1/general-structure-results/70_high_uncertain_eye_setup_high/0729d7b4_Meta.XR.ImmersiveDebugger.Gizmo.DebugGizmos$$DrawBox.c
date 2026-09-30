/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$DrawBox
ENTRY_POINT: 0729d7b4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__DrawBox(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  long unaff_x21;
  ulong uVar16;
  ulong uVar17;
  int iStack0000000000000004;
  
  if ((*(byte *)(unaff_x21 + 0x865) & 1) == 0) {
    FUN_04077588(PTR_DAT_092c21c0);
    *(undefined1 *)(unaff_x21 + 0x865) = 1;
  }
  puVar4 = PTR_DAT_092c21c0;
  uVar9 = (ulong)*(uint *)(param_1 + 0xa0);
  iStack0000000000000004 = 0;
  uVar12 = 0;
  do {
    uVar17 = 0;
    do {
      uVar13 = uVar12;
      if (0 < (int)uVar9) {
        uVar16 = 0;
        do {
          if ((uVar16 == 0) || ((long)uVar17 < (long)*(int *)(param_1 + 0xa4))) {
            lVar10 = *(long *)(param_1 + 0xd8);
            if (lVar10 == 0) goto LAB_0729db58;
            if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0729db54;
            lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_0729db58;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_0729db54;
            iVar2 = *(int *)(lVar10 + uVar17 * 4 + 0x20);
            if (iVar2 == 0) {
              if (0 < *(int *)(param_1 + 0xa8)) {
                lVar10 = *(long *)(param_1 + 0xc0);
                if (lVar10 == 0) goto LAB_0729db58;
                if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0729db54;
                lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0729db58;
                uVar3 = *(uint *)(lVar10 + 0x18);
                lVar14 = 0;
                uVar12 = uVar13;
                do {
                  if (uVar3 <= uVar12) goto LAB_0729db54;
                  lVar8 = (long)(int)uVar12;
                  lVar14 = lVar14 + 1;
                  uVar12 = uVar12 + 0x20;
                  *(undefined4 *)(lVar10 + lVar8 * 4 + 0x20) = 0;
                } while (lVar14 < *(int *)(param_1 + 0xa8));
              }
            }
            else if (iVar2 < 0) {
              if (param_2 == (long *)0x0) {
LAB_0729db58:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar14 = *param_2;
              lVar10 = *(long *)puVar4;
              uVar9 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar9 != 0) {
                piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar15 + -2) == lVar10) {
                    puVar7 = (undefined8 *)(lVar14 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
                    goto LAB_0729da58;
                  }
                  uVar9 = uVar9 - 1;
                  piVar15 = piVar15 + 4;
                } while (uVar9 != 0);
              }
              puVar7 = (undefined8 *)FUN_040b1e00(param_2,lVar10,0xe);
LAB_0729da58:
              iVar2 = -iVar2;
              iVar6 = (*(code *)*puVar7)(param_2,iVar2,puVar7[1]);
              lVar10 = *(long *)(param_1 + 0xc0);
              iVar1 = iVar2;
              if (iVar2 < 0) {
                iVar1 = iVar2 + 1;
              }
              if (lVar10 == 0) goto LAB_0729db58;
              if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0729db54;
              lVar10 = *(long *)(lVar10 + uVar16 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_0729db58;
              uVar12 = *(uint *)(lVar10 + 0x18);
              if (uVar12 <= uVar13) {
LAB_0729db54:
                    /* WARNING: Subroutine does not return */
                FUN_04077838();
              }
              iVar2 = (1 << (ulong)((iVar2 % 2 + (iVar1 >> 1)) - 1U & 0x1f)) + 1;
              iVar1 = 0;
              if (iVar2 != 0) {
                iVar1 = iVar6 / iVar2;
              }
              *(int *)(lVar10 + (long)(int)uVar13 * 4 + 0x20) = iVar6 - iVar1 * iVar2;
              if (uVar12 <= uVar13 + 0x20) goto LAB_0729db54;
              iVar6 = 0;
              if (iVar2 != 0) {
                iVar6 = iVar1 / iVar2;
              }
              *(int *)(lVar10 + (long)(int)(uVar13 + 0x20) * 4 + 0x20) = iVar1 - iVar6 * iVar2;
              if (uVar12 <= uVar13 + 0x40) goto LAB_0729db54;
              *(int *)(lVar10 + (long)(int)(uVar13 + 0x40) * 4 + 0x20) = iVar6;
            }
            else if (0 < *(int *)(param_1 + 0xa8)) {
              lVar10 = 0;
              do {
                lVar14 = *(long *)(param_1 + 0xc0);
                if (lVar14 == 0) goto LAB_0729db58;
                if (*(uint *)(lVar14 + 0x18) <= uVar16) goto LAB_0729db54;
                if (param_2 == (long *)0x0) goto LAB_0729db58;
                lVar11 = *param_2;
                lVar8 = *(long *)puVar4;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                lVar14 = *(long *)(lVar14 + uVar16 * 8 + 0x20);
                if (uVar9 != 0) {
                  piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar15 + -2) == lVar8) {
                      puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 0xe) * 0x10 + 0x138);
                      goto LAB_0729d8e8;
                    }
                    uVar9 = uVar9 - 1;
                    piVar15 = piVar15 + 4;
                  } while (uVar9 != 0);
                }
                puVar7 = (undefined8 *)FUN_040b1e00(param_2,lVar8,0xe);
LAB_0729d8e8:
                uVar5 = (*(code *)*puVar7)(param_2,iVar2,puVar7[1]);
                if (lVar14 == 0) goto LAB_0729db58;
                uVar12 = uVar13 + (int)lVar10 * 0x20;
                if (*(uint *)(lVar14 + 0x18) <= uVar12) goto LAB_0729db54;
                lVar10 = lVar10 + 1;
                *(undefined4 *)(lVar14 + (long)(int)uVar12 * 4 + 0x20) = uVar5;
              } while (lVar10 < *(int *)(param_1 + 0xa8));
            }
          }
          else if (0 < *(int *)(param_1 + 0xa8)) {
            lVar10 = *(long *)(param_1 + 0xc0);
            if (lVar10 == 0) goto LAB_0729db58;
            if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_0729db54;
            lVar14 = *(long *)(lVar10 + 0x20);
            if (lVar14 == 0) goto LAB_0729db58;
            lVar8 = *(long *)(lVar10 + 0x28);
            uVar3 = *(uint *)(lVar14 + 0x18);
            lVar10 = 0;
            uVar12 = uVar13;
            do {
              if (uVar3 <= uVar12) goto LAB_0729db54;
              if (lVar8 == 0) goto LAB_0729db58;
              lVar11 = (long)(int)uVar12;
              if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_0729db54;
              lVar10 = lVar10 + 1;
              uVar12 = uVar12 + 0x20;
              *(undefined4 *)(lVar8 + lVar11 * 4 + 0x20) =
                   *(undefined4 *)(lVar14 + lVar11 * 4 + 0x20);
            } while (lVar10 < *(int *)(param_1 + 0xa8));
          }
          uVar9 = (ulong)*(int *)(param_1 + 0xa0);
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)uVar9);
      }
      uVar17 = uVar17 + 1;
      uVar12 = uVar13 + 1;
    } while (uVar17 != 0x20);
    iStack0000000000000004 = iStack0000000000000004 + 1;
    uVar12 = (uVar13 + *(int *)(param_1 + 0xa8) * 0x20) - 0x1f;
    if (iStack0000000000000004 == 0xc) {
      return;
    }
  } while( true );
}


