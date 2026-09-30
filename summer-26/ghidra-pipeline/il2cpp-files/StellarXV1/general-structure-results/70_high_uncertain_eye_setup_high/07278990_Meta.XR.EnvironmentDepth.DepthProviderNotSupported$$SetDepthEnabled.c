/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$SetDepthEnabled
ENTRY_POINT: 07278990
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__SetDepthEnabled(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar22;
  uint uVar23;
  
  if (param_1 != 0) {
    uVar13 = *(ulong *)(param_1 + 0x18);
    lVar16 = 0;
    do {
      if ((uVar13 & 0xffffffff) * 4 - lVar16 == 0) goto LAB_07279024;
      lVar19 = param_1 + lVar16;
      lVar16 = lVar16 + 4;
      *(undefined4 *)(lVar19 + 0x20) = 0;
    } while (lVar16 != 0x40004);
    lVar16 = *(long *)(unaff_x19 + 0x88);
    if (lVar16 != 0) {
      uVar17 = *(uint *)(lVar16 + 0x18);
      if (uVar17 != 0) {
        uVar11 = (uint)uVar13;
        if (-1 < *(int *)(unaff_x19 + 0x30)) {
          uVar13 = (ulong)*(byte *)(lVar16 + 0x20);
          uVar15 = 1;
          do {
            if (uVar17 == uVar15) goto LAB_07279024;
            uVar20 = (ulong)*(byte *)(lVar16 + (int)uVar15 + 0x20);
            uVar13 = uVar20 | uVar13 << 8;
            if (uVar11 <= (uint)uVar13) goto LAB_07279024;
            *(int *)(param_1 + 0x20 + uVar13 * 4) = *(int *)(param_1 + 0x20 + uVar13 * 4) + 1;
            bVar1 = (int)uVar15 <= *(int *)(unaff_x19 + 0x30);
            uVar13 = uVar20;
            uVar15 = uVar15 + 1;
          } while (bVar1);
        }
        lVar19 = 0;
        uVar15 = uVar11;
        if (uVar11 < 2) {
          uVar15 = 1;
        }
        lVar6 = param_1 + 0x20;
        do {
          if ((ulong)uVar15 * 4 + -4 == lVar19) goto LAB_07279024;
          lVar10 = param_1 + lVar19;
          lVar19 = lVar19 + 4;
          *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x24);
        } while (lVar19 != 0x40000);
        if (uVar17 != 1) {
          iVar7 = *(int *)(unaff_x19 + 0x30);
          if (0 < iVar7) {
            uVar15 = uVar17;
            if (uVar17 < 3) {
              uVar15 = 2;
            }
            uVar13 = 0;
            lVar19 = 0x200000000;
            uVar20 = (ulong)*(byte *)(lVar16 + 0x21);
            do {
              if (uVar15 - 2 == uVar13) goto LAB_07279024;
              uVar21 = (ulong)*(byte *)(lVar16 + (lVar19 >> 0x20) + 0x20);
              uVar20 = uVar21 | uVar20 << 8;
              if (uVar11 <= (uint)uVar20) goto LAB_07279024;
              lVar10 = *(long *)(unaff_x19 + 0x98);
              uVar22 = *(int *)(lVar6 + uVar20 * 4) - 1;
              *(uint *)(lVar6 + uVar20 * 4) = uVar22;
              if (lVar10 == 0) goto LAB_07279028;
              if (*(uint *)(lVar10 + 0x18) <= uVar22) goto LAB_07279024;
              lVar19 = lVar19 + 0x100000000;
              *(int *)(lVar10 + (long)(int)uVar22 * 4 + 0x20) = (int)uVar13;
              uVar13 = uVar13 + 1;
              iVar7 = *(int *)(unaff_x19 + 0x30);
              uVar20 = uVar21;
            } while ((long)uVar13 < (long)iVar7);
          }
          if ((iVar7 + 1U < uVar17) &&
             (uVar5 = CONCAT11(*(undefined1 *)(lVar16 + (int)(iVar7 + 1U) + 0x20),
                               *(undefined1 *)(lVar16 + 0x21)), uVar5 < uVar11)) {
            lVar16 = *(long *)(unaff_x19 + 0x98);
            uVar17 = *(int *)(lVar6 + (ulong)uVar5 * 4) - 1;
            *(uint *)(lVar6 + (ulong)uVar5 * 4) = uVar17;
            if (lVar16 == 0) goto LAB_07279028;
            if (uVar17 < *(uint *)(lVar16 + 0x18)) {
              *(undefined4 *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                   *(undefined4 *)(unaff_x19 + 0x30);
              if (unaff_x20 == 0) goto LAB_07279028;
              uVar20 = *(ulong *)(unaff_x20 + 0x18);
              uVar13 = 0;
              do {
                if ((uVar20 & 0xffffffff) == uVar13) goto LAB_07279024;
                *(int *)(unaff_x20 + 0x20 + uVar13 * 4) = (int)uVar13;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x100);
              uVar17 = 0x16c;
              do {
                uVar15 = (int)uVar17 / 3 + ((int)uVar17 >> 0x1f);
                if ((int)uVar17 < 0x300) {
                  uVar14 = (uint)uVar20;
                  uVar22 = 0;
                  uVar12 = uVar15;
                  uVar23 = uVar15;
                  if (uVar15 <= uVar14) {
                    uVar23 = uVar14;
                  }
                  do {
                    if (uVar12 == uVar23) goto LAB_07279024;
                    iVar7 = *(int *)(unaff_x20 + (long)(int)uVar12 * 4 + 0x20);
                    uVar18 = iVar7 * 0x100;
                    uVar8 = uVar22;
                    do {
                      if (uVar14 <= uVar8) goto LAB_07279024;
                      iVar2 = *(int *)(unaff_x20 + (long)(int)uVar8 * 4 + 0x20);
                      uVar4 = iVar2 * 0x100;
                      if ((((uVar11 <= uVar4 + 0x100) || (uVar11 <= uVar4)) ||
                          (uVar11 <= uVar18 + 0x100)) || (uVar11 <= uVar18)) goto LAB_07279024;
                      uVar9 = uVar8;
                      if (*(int *)(param_1 + (long)(int)(uVar4 + 0x100) * 4 + 0x20) -
                          *(int *)(param_1 + (long)(int)uVar4 * 4 + 0x20) <=
                          *(int *)(param_1 + 0x20 + (long)(int)(uVar18 + 0x100) * 4) -
                          *(int *)(param_1 + 0x20 + (long)(int)uVar18 * 4)) break;
                      uVar9 = uVar8 - uVar15;
                      *(int *)(unaff_x20 + (long)(int)(uVar15 + uVar8) * 4 + 0x20) = iVar2;
                      bVar1 = (int)uVar15 <= (int)uVar8;
                      uVar8 = uVar9;
                    } while (bVar1);
                    if (uVar14 <= uVar15 + uVar9) goto LAB_07279024;
                    uVar22 = uVar22 + 1;
                    *(int *)(unaff_x20 + (long)(int)(uVar15 + uVar9) * 4 + 0x20) = iVar7;
                    bVar1 = (int)uVar12 < 0xff;
                    uVar12 = uVar12 + 1;
                  } while (bVar1);
                }
                uVar22 = uVar17 - 3;
                uVar17 = uVar15;
              } while (2 < uVar22);
              uVar13 = 0;
              lVar16 = unaff_x21 + 0x20;
              while (uVar13 < *(uint *)(unaff_x20 + 0x18)) {
                lVar19 = 0;
                uVar11 = *(uint *)(unaff_x20 + uVar13 * 4 + 0x20);
                uVar17 = uVar11 * 0x100;
                uVar21 = (ulong)(int)uVar17;
                uVar20 = (uVar21 >> 8) << 10 | 0x20;
                do {
                  uVar22 = uVar17 + (int)lVar19;
                  uVar15 = (uint)*(undefined8 *)(param_1 + 0x18);
                  if (uVar15 <= uVar22) goto LAB_07279024;
                  uVar23 = *(uint *)(param_1 + uVar20 + lVar19 * 4);
                  if ((uVar23 >> 0x15 & 1) == 0) {
                    uVar12 = uVar17 + (int)lVar19 + 1;
                    if (uVar15 <= uVar12) goto LAB_07279024;
                    if ((((int)uVar23 <
                          (int)((*(uint *)(param_1 + (long)(int)uVar12 * 4 + 0x20) & 0xffdfffff) - 1
                               )) &&
                        (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                        *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
                       (*(char *)(unaff_x19 + 0xcc) != '\0')) {
                      return;
                    }
                    param_1 = *(long *)(unaff_x19 + 0xa8);
                    if (param_1 == 0) goto LAB_07279028;
                    uVar15 = (uint)*(undefined8 *)(param_1 + 0x18);
                    if (uVar15 <= uVar22) goto LAB_07279024;
                    lVar6 = param_1 + uVar20;
                    *(uint *)(lVar6 + lVar19 * 4) = *(uint *)(lVar6 + lVar19 * 4) | 0x200000;
                  }
                  lVar19 = lVar19 + 1;
                } while (lVar19 != 0x100);
                uVar22 = *(uint *)(param_2 + 0x18);
                if (uVar22 <= uVar11) break;
                *(undefined1 *)(param_2 + (int)uVar11 + 0x20) = 1;
                if (uVar13 != 0xff) {
                  if ((uVar15 <= uVar17) || (uVar15 <= uVar17 + 0x100)) break;
                  uVar14 = *(uint *)(param_1 + uVar21 * 4 + 0x20) & 0xffdfffff;
                  uVar23 = (*(uint *)(param_1 + (long)(int)(uVar17 + 0x100) * 4 + 0x20) & 0xffdfffff
                           ) - uVar14;
                  uVar12 = 0;
                  do {
                    uVar18 = uVar12;
                    uVar12 = uVar18 + 1;
                  } while (0xfffe < (int)uVar23 >> (uVar18 & 0x1f));
                  if (0 < (int)uVar23) {
                    lVar19 = *(long *)(unaff_x19 + 0x98);
                    if (lVar19 == 0) goto LAB_07279028;
                    uVar20 = 0;
                    uVar12 = 0;
                    if (uVar14 <= *(uint *)(lVar19 + 0x18)) {
                      uVar12 = *(uint *)(lVar19 + 0x18) - uVar14;
                    }
                    do {
                      if (uVar12 == uVar20) goto LAB_07279024;
                      lVar6 = *(long *)(unaff_x19 + 0x90);
                      if (lVar6 == 0) goto LAB_07279028;
                      uVar8 = *(uint *)(lVar6 + 0x18);
                      uVar4 = *(uint *)(lVar19 + (long)(int)(uVar14 + (uint)uVar20) * 4 + 0x20);
                      if (uVar8 <= uVar4) goto LAB_07279024;
                      uVar9 = (uint)uVar20 >> (ulong)(uVar18 & 0x1f);
                      *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
                      if ((int)uVar4 < 0x14) {
                        uVar4 = uVar4 + *(int *)(unaff_x19 + 0x30) + 1;
                        if (uVar8 <= uVar4) goto LAB_07279024;
                        *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
                      }
                      uVar20 = uVar20 + 1;
                    } while (uVar23 != uVar20);
                  }
                  if (0xffff < (int)(uVar23 - 1) >> (uVar18 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
                    FUN_07277358();
                  }
                  if (param_1 == 0) goto LAB_07279028;
                }
                uVar20 = 0;
                uVar23 = uVar11;
                do {
                  if (uVar15 <= uVar23) goto LAB_07279024;
                  if (unaff_x21 == 0) goto LAB_07279028;
                  uVar12 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar12 <= uVar20) goto LAB_07279024;
                  lVar19 = (long)(int)uVar23;
                  uVar23 = uVar23 + 0x100;
                  *(uint *)(lVar16 + uVar20 * 4) =
                       *(uint *)(param_1 + lVar19 * 4 + 0x20) & 0xffdfffff;
                  uVar20 = uVar20 + 1;
                } while (uVar20 != 0x100);
                if (param_1 == 0) goto LAB_07279028;
                uVar15 = *(uint *)(param_1 + 0x18);
                if ((uVar15 <= uVar17) || (uVar17 = uVar17 + 0x100, uVar15 <= uVar17)) break;
                lVar19 = param_1 + 0x20;
                uVar23 = *(uint *)(lVar19 + uVar21 * 4) & 0xffdfffff;
                if ((int)uVar23 < (int)(*(uint *)(lVar19 + (long)(int)uVar17 * 4) & 0xffdfffff)) {
                  lVar6 = *(long *)(unaff_x19 + 0x88);
                  lVar10 = *(long *)(unaff_x19 + 0x98);
                  do {
                    if (lVar10 == 0) goto LAB_07279028;
                    if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_07279024;
                    if (lVar6 == 0) goto LAB_07279028;
                    uVar14 = *(uint *)(lVar10 + (long)(int)uVar23 * 4 + 0x20);
                    if (*(uint *)(lVar6 + 0x18) <= uVar14) goto LAB_07279024;
                    bVar3 = *(byte *)(lVar6 + (int)uVar14 + 0x20);
                    uVar20 = (ulong)bVar3;
                    if (uVar22 <= bVar3) goto LAB_07279024;
                    if (*(char *)(param_2 + uVar20 + 0x20) == '\0') {
                      if (uVar12 <= bVar3) goto LAB_07279024;
                      if (uVar14 == 0) {
                        iVar7 = *(int *)(unaff_x19 + 0x30);
                      }
                      else {
                        iVar7 = uVar14 - 1;
                      }
                      uVar14 = *(uint *)(unaff_x21 + uVar20 * 4 + 0x20);
                      if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_07279024;
                      *(int *)(lVar10 + (long)(int)uVar14 * 4 + 0x20) = iVar7;
                      *(int *)(lVar16 + uVar20 * 4) = *(int *)(lVar16 + uVar20 * 4) + 1;
                    }
                    uVar23 = uVar23 + 1;
                  } while ((int)uVar23 <
                           (int)(*(uint *)(lVar19 + (long)(int)uVar17 * 4) & 0xffdfffff));
                }
                lVar6 = 0;
                do {
                  uVar17 = uVar11 + (int)lVar6;
                  if (uVar15 <= uVar17) goto LAB_07279024;
                  lVar6 = lVar6 + 0x100;
                  *(uint *)(lVar19 + (long)(int)uVar17 * 4) =
                       *(uint *)(lVar19 + (long)(int)uVar17 * 4) | 0x200000;
                } while (lVar6 != 0x10000);
                uVar13 = uVar13 + 1;
                if (uVar13 == 0x100) {
                  return;
                }
              }
            }
          }
        }
      }
LAB_07279024:
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
  }
LAB_07279028:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


