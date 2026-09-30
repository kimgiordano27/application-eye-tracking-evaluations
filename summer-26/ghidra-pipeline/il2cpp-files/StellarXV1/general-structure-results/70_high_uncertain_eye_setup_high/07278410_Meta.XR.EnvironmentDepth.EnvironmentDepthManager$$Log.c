/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$Log
ENTRY_POINT: 07278410
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log
               (long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  
  puVar19 = PTR_DAT_092c1350;
  if ((DAT_0988f747 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c1350);
    DAT_0988f747 = 1;
  }
  lVar20 = FUN_04077674(*(undefined8 *)puVar19,1000);
  if (lVar20 != 0) {
    if (*(int *)(lVar20 + 0x18) == 0) {
LAB_072787d8:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    uVar30 = 1;
    puVar23 = (undefined4 *)(lVar20 + 0x20);
    *puVar23 = param_2;
    *(undefined4 *)(lVar20 + 0x24) = param_3;
    *(undefined4 *)(lVar20 + 0x28) = param_4;
    while( true ) {
      if (999 < uVar30) {
                    /* WARNING: Subroutine does not return */
        FUN_07277358();
      }
      uVar17 = uVar30 - 1;
      if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_072787d8;
      puVar29 = puVar23 + (ulong)uVar17 * 3;
      uVar8 = *puVar29;
      uVar9 = puVar29[1];
      uVar26 = puVar29[2];
      if (0x13 < (int)(uVar9 - uVar8) && (int)uVar26 < 0xb) break;
LAB_072784d4:
      FUN_07277db4(param_1,uVar8,uVar9,uVar26);
      uVar30 = uVar17;
      if ((*(int *)(param_1 + 200) < *(int *)(param_1 + 0xc4)) &&
         (*(char *)(param_1 + 0xcc) != '\0')) {
        return;
      }
LAB_072787ac:
      if ((int)uVar30 < 1) {
        return;
      }
    }
    lVar21 = *(long *)(param_1 + 0x98);
    lVar22 = *(long *)(param_1 + 0x88);
    lVar3 = lVar21 + 0x20;
    uVar31 = uVar26;
LAB_0727851c:
    if (lVar21 != 0) {
      uVar10 = *(uint *)(lVar21 + 0x18);
      if (uVar8 < uVar10) {
        if (lVar22 != 0) {
          uVar26 = uVar31 + 1;
          uVar11 = *(uint *)(lVar22 + 0x18);
          uVar27 = uVar26 + *(int *)(lVar3 + (long)(int)uVar8 * 4);
          if ((((uVar27 < uVar11) && (uVar9 < uVar10)) &&
              (uVar25 = uVar26 + *(int *)(lVar3 + (long)(int)uVar9 * 4), uVar25 < uVar11)) &&
             (((uint)((int)(uVar9 + uVar8) >> 1) < uVar10 &&
              (uVar4 = uVar26 + *(int *)(lVar3 + ((long)((ulong)(uVar9 + uVar8) << 0x20) >> 0x21) *
                                                 4), uVar4 < uVar11)))) {
            bVar13 = *(byte *)(lVar22 + (int)uVar27 + 0x20);
            bVar14 = *(byte *)(lVar22 + (int)uVar25 + 0x20);
            bVar15 = *(byte *)(lVar22 + (int)uVar4 + 0x20);
            bVar16 = bVar13;
            if (bVar13 <= bVar14) {
              bVar16 = bVar14;
            }
            if (bVar14 <= bVar13) {
              bVar13 = bVar14;
            }
            if (bVar15 <= bVar16) {
              bVar16 = bVar15;
            }
            uVar4 = uVar9;
            uVar27 = uVar8;
            uVar28 = uVar9;
            uVar25 = uVar8;
            if (bVar13 <= bVar16) {
              bVar13 = bVar16;
            }
            do {
              if ((int)uVar27 <= (int)uVar4) {
                uVar6 = uVar25;
                if (uVar25 <= uVar10) {
                  uVar6 = uVar10;
                }
                do {
                  uVar7 = uVar27;
                  if (uVar27 <= uVar10) {
                    uVar7 = uVar10;
                  }
                  while( true ) {
                    if (uVar7 == uVar27) goto LAB_072787d8;
                    piVar24 = (int *)(lVar21 + (long)(int)uVar27 * 4 + 0x20);
                    iVar12 = *piVar24;
                    uVar5 = uVar26 + iVar12;
                    if (uVar11 <= uVar5) goto LAB_072787d8;
                    bVar16 = *(byte *)(lVar22 + (int)uVar5 + 0x20);
                    if (bVar16 == bVar13) break;
                    if ((bVar13 <= bVar16) || (uVar27 = uVar27 + 1, (int)uVar4 < (int)uVar27))
                    goto joined_r0x072785c8;
                  }
                  if (uVar25 == uVar6) goto LAB_072787d8;
                  lVar2 = lVar21 + (long)(int)uVar25 * 4;
                  uVar27 = uVar27 + 1;
                  uVar25 = uVar25 + 1;
                  *piVar24 = *(int *)(lVar2 + 0x20);
                  *(int *)(lVar2 + 0x20) = iVar12;
                } while ((int)uVar27 <= (int)uVar4);
              }
joined_r0x072785c8:
              if ((int)uVar4 < (int)uVar27) {
                if ((int)uVar28 < (int)uVar25) {
                  *puVar29 = uVar8;
                  puVar29[1] = uVar9;
                  puVar29[2] = uVar26;
                  if (((int)(uVar9 - uVar8) < 0x14) ||
                     (bVar1 = 9 < (int)uVar31, uVar31 = uVar26, bVar1)) goto LAB_072784d4;
                  goto LAB_0727851c;
                }
                iVar12 = uVar25 - uVar8;
                if ((int)(uVar27 - uVar25) <= (int)(uVar25 - uVar8)) {
                  iVar12 = uVar27 - uVar25;
                }
                FUN_0727839c(param_1,uVar8,uVar27 - iVar12);
                iVar18 = uVar28 - uVar4;
                iVar12 = uVar9 - uVar28;
                if (iVar18 <= (int)(uVar9 - uVar28)) {
                  iVar12 = iVar18;
                }
                FUN_0727839c(param_1,uVar27,(uVar9 - iVar12) + 1);
                uVar10 = *(uint *)(lVar20 + 0x18);
                if (uVar10 <= uVar17) break;
                iVar12 = (uVar8 - uVar25) + uVar27;
                puVar29[2] = uVar31;
                *puVar29 = uVar8;
                puVar29[1] = iVar12 - 1;
                if (uVar10 <= uVar30) break;
                piVar24 = puVar23 + (ulong)uVar30 * 3;
                *piVar24 = iVar12;
                piVar24[1] = uVar9 - iVar18;
                piVar24[2] = uVar26;
                if (uVar10 <= uVar30 + 1) break;
                piVar24 = puVar23 + (ulong)(uVar30 + 1) * 3;
                *piVar24 = (uVar9 - iVar18) + 1;
                piVar24[1] = uVar9;
                piVar24[2] = uVar31;
                uVar30 = uVar30 + 2;
                goto LAB_072787ac;
              }
              if (uVar10 <= uVar4) break;
              piVar24 = (int *)(lVar21 + (long)(int)uVar4 * 4 + 0x20);
              iVar12 = *piVar24;
              if (uVar11 <= uVar26 + iVar12) break;
              bVar16 = *(byte *)(lVar22 + (int)(uVar26 + iVar12) + 0x20);
              if (bVar16 == bVar13) {
                if (uVar10 <= uVar28) break;
                lVar2 = lVar21 + (long)(int)uVar28 * 4;
                uVar4 = uVar4 - 1;
                uVar28 = uVar28 - 1;
                *piVar24 = *(int *)(lVar2 + 0x20);
                *(int *)(lVar2 + 0x20) = iVar12;
                goto joined_r0x072785c8;
              }
              if (bVar13 <= bVar16) {
                uVar4 = uVar4 - 1;
                goto joined_r0x072785c8;
              }
              if (uVar10 <= uVar27) break;
              lVar2 = lVar21 + (long)(int)uVar27 * 4;
              iVar18 = *(int *)(lVar2 + 0x20);
              *(int *)(lVar2 + 0x20) = iVar12;
              *piVar24 = iVar18;
              uVar4 = uVar4 - 1;
              uVar27 = uVar27 + 1;
            } while( true );
          }
          goto LAB_072787d8;
        }
        goto LAB_072787dc;
      }
      goto LAB_072787d8;
    }
  }
LAB_072787dc:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


