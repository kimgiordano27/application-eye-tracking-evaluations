/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$get_IsSupported
ENTRY_POINT: 07278984
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


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__get_IsSupported(long param_1,long param_2)

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
  long lVar11;
  uint uVar12;
  uint uVar13;
  long in_x9;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long in_x10;
  long lVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar23;
  uint uVar24;
  
  for (; param_1 != 0x100; param_1 = param_1 + 1) {
    if (in_x9 == param_1) goto LAB_07279024;
    *(undefined1 *)(in_x10 + param_1) = 0;
  }
  lVar11 = *(long *)(unaff_x19 + 0xa8);
  if (lVar11 != 0) {
    uVar14 = *(ulong *)(lVar11 + 0x18);
    lVar17 = 0;
    do {
      if ((uVar14 & 0xffffffff) * 4 - lVar17 == 0) goto LAB_07279024;
      lVar20 = lVar11 + lVar17;
      lVar17 = lVar17 + 4;
      *(undefined4 *)(lVar20 + 0x20) = 0;
    } while (lVar17 != 0x40004);
    lVar17 = *(long *)(unaff_x19 + 0x88);
    if (lVar17 != 0) {
      uVar18 = *(uint *)(lVar17 + 0x18);
      if (uVar18 != 0) {
        uVar12 = (uint)uVar14;
        if (-1 < *(int *)(unaff_x19 + 0x30)) {
          uVar14 = (ulong)*(byte *)(lVar17 + 0x20);
          uVar16 = 1;
          do {
            if (uVar18 == uVar16) goto LAB_07279024;
            uVar21 = (ulong)*(byte *)(lVar17 + (int)uVar16 + 0x20);
            uVar14 = uVar21 | uVar14 << 8;
            if (uVar12 <= (uint)uVar14) goto LAB_07279024;
            *(int *)(lVar11 + 0x20 + uVar14 * 4) = *(int *)(lVar11 + 0x20 + uVar14 * 4) + 1;
            bVar1 = (int)uVar16 <= *(int *)(unaff_x19 + 0x30);
            uVar14 = uVar21;
            uVar16 = uVar16 + 1;
          } while (bVar1);
        }
        lVar20 = 0;
        uVar16 = uVar12;
        if (uVar12 < 2) {
          uVar16 = 1;
        }
        lVar6 = lVar11 + 0x20;
        do {
          if ((ulong)uVar16 * 4 + -4 == lVar20) goto LAB_07279024;
          lVar10 = lVar11 + lVar20;
          lVar20 = lVar20 + 4;
          *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x24);
        } while (lVar20 != 0x40000);
        if (uVar18 != 1) {
          iVar7 = *(int *)(unaff_x19 + 0x30);
          if (0 < iVar7) {
            uVar16 = uVar18;
            if (uVar18 < 3) {
              uVar16 = 2;
            }
            uVar14 = 0;
            lVar20 = 0x200000000;
            uVar21 = (ulong)*(byte *)(lVar17 + 0x21);
            do {
              if (uVar16 - 2 == uVar14) goto LAB_07279024;
              uVar22 = (ulong)*(byte *)(lVar17 + (lVar20 >> 0x20) + 0x20);
              uVar21 = uVar22 | uVar21 << 8;
              if (uVar12 <= (uint)uVar21) goto LAB_07279024;
              lVar10 = *(long *)(unaff_x19 + 0x98);
              uVar23 = *(int *)(lVar6 + uVar21 * 4) - 1;
              *(uint *)(lVar6 + uVar21 * 4) = uVar23;
              if (lVar10 == 0) goto LAB_07279028;
              if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_07279024;
              lVar20 = lVar20 + 0x100000000;
              *(int *)(lVar10 + (long)(int)uVar23 * 4 + 0x20) = (int)uVar14;
              uVar14 = uVar14 + 1;
              iVar7 = *(int *)(unaff_x19 + 0x30);
              uVar21 = uVar22;
            } while ((long)uVar14 < (long)iVar7);
          }
          if ((iVar7 + 1U < uVar18) &&
             (uVar5 = CONCAT11(*(undefined1 *)(lVar17 + (int)(iVar7 + 1U) + 0x20),
                               *(undefined1 *)(lVar17 + 0x21)), uVar5 < uVar12)) {
            lVar17 = *(long *)(unaff_x19 + 0x98);
            uVar18 = *(int *)(lVar6 + (ulong)uVar5 * 4) - 1;
            *(uint *)(lVar6 + (ulong)uVar5 * 4) = uVar18;
            if (lVar17 == 0) goto LAB_07279028;
            if (uVar18 < *(uint *)(lVar17 + 0x18)) {
              *(undefined4 *)(lVar17 + (long)(int)uVar18 * 4 + 0x20) =
                   *(undefined4 *)(unaff_x19 + 0x30);
              if (unaff_x20 == 0) goto LAB_07279028;
              uVar21 = *(ulong *)(unaff_x20 + 0x18);
              uVar14 = 0;
              do {
                if ((uVar21 & 0xffffffff) == uVar14) goto LAB_07279024;
                *(int *)(unaff_x20 + 0x20 + uVar14 * 4) = (int)uVar14;
                uVar14 = uVar14 + 1;
              } while (uVar14 != 0x100);
              uVar18 = 0x16c;
              do {
                uVar16 = (int)uVar18 / 3 + ((int)uVar18 >> 0x1f);
                if ((int)uVar18 < 0x300) {
                  uVar15 = (uint)uVar21;
                  uVar23 = 0;
                  uVar13 = uVar16;
                  uVar24 = uVar16;
                  if (uVar16 <= uVar15) {
                    uVar24 = uVar15;
                  }
                  do {
                    if (uVar13 == uVar24) goto LAB_07279024;
                    iVar7 = *(int *)(unaff_x20 + (long)(int)uVar13 * 4 + 0x20);
                    uVar19 = iVar7 * 0x100;
                    uVar8 = uVar23;
                    do {
                      if (uVar15 <= uVar8) goto LAB_07279024;
                      iVar2 = *(int *)(unaff_x20 + (long)(int)uVar8 * 4 + 0x20);
                      uVar4 = iVar2 * 0x100;
                      if ((((uVar12 <= uVar4 + 0x100) || (uVar12 <= uVar4)) ||
                          (uVar12 <= uVar19 + 0x100)) || (uVar12 <= uVar19)) goto LAB_07279024;
                      uVar9 = uVar8;
                      if (*(int *)(lVar11 + (long)(int)(uVar4 + 0x100) * 4 + 0x20) -
                          *(int *)(lVar11 + (long)(int)uVar4 * 4 + 0x20) <=
                          *(int *)(lVar11 + 0x20 + (long)(int)(uVar19 + 0x100) * 4) -
                          *(int *)(lVar11 + 0x20 + (long)(int)uVar19 * 4)) break;
                      uVar9 = uVar8 - uVar16;
                      *(int *)(unaff_x20 + (long)(int)(uVar16 + uVar8) * 4 + 0x20) = iVar2;
                      bVar1 = (int)uVar16 <= (int)uVar8;
                      uVar8 = uVar9;
                    } while (bVar1);
                    if (uVar15 <= uVar16 + uVar9) goto LAB_07279024;
                    uVar23 = uVar23 + 1;
                    *(int *)(unaff_x20 + (long)(int)(uVar16 + uVar9) * 4 + 0x20) = iVar7;
                    bVar1 = (int)uVar13 < 0xff;
                    uVar13 = uVar13 + 1;
                  } while (bVar1);
                }
                uVar23 = uVar18 - 3;
                uVar18 = uVar16;
              } while (2 < uVar23);
              uVar14 = 0;
              lVar17 = unaff_x21 + 0x20;
              while (uVar14 < *(uint *)(unaff_x20 + 0x18)) {
                lVar20 = 0;
                uVar12 = *(uint *)(unaff_x20 + uVar14 * 4 + 0x20);
                uVar18 = uVar12 * 0x100;
                uVar22 = (ulong)(int)uVar18;
                uVar21 = (uVar22 >> 8) << 10 | 0x20;
                do {
                  uVar23 = uVar18 + (int)lVar20;
                  uVar16 = (uint)*(undefined8 *)(lVar11 + 0x18);
                  if (uVar16 <= uVar23) goto LAB_07279024;
                  uVar24 = *(uint *)(lVar11 + uVar21 + lVar20 * 4);
                  if ((uVar24 >> 0x15 & 1) == 0) {
                    uVar13 = uVar18 + (int)lVar20 + 1;
                    if (uVar16 <= uVar13) goto LAB_07279024;
                    if ((((int)uVar24 <
                          (int)((*(uint *)(lVar11 + (long)(int)uVar13 * 4 + 0x20) & 0xffdfffff) - 1)
                         ) && (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                              *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
                       (*(char *)(unaff_x19 + 0xcc) != '\0')) {
                      return;
                    }
                    lVar11 = *(long *)(unaff_x19 + 0xa8);
                    if (lVar11 == 0) goto LAB_07279028;
                    uVar16 = (uint)*(undefined8 *)(lVar11 + 0x18);
                    if (uVar16 <= uVar23) goto LAB_07279024;
                    lVar6 = lVar11 + uVar21;
                    *(uint *)(lVar6 + lVar20 * 4) = *(uint *)(lVar6 + lVar20 * 4) | 0x200000;
                  }
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 0x100);
                uVar23 = *(uint *)(param_2 + 0x18);
                if (uVar23 <= uVar12) break;
                *(undefined1 *)(param_2 + (int)uVar12 + 0x20) = 1;
                if (uVar14 != 0xff) {
                  if ((uVar16 <= uVar18) || (uVar16 <= uVar18 + 0x100)) break;
                  uVar15 = *(uint *)(lVar11 + uVar22 * 4 + 0x20) & 0xffdfffff;
                  uVar24 = (*(uint *)(lVar11 + (long)(int)(uVar18 + 0x100) * 4 + 0x20) & 0xffdfffff)
                           - uVar15;
                  uVar13 = 0;
                  do {
                    uVar19 = uVar13;
                    uVar13 = uVar19 + 1;
                  } while (0xfffe < (int)uVar24 >> (uVar19 & 0x1f));
                  if (0 < (int)uVar24) {
                    lVar20 = *(long *)(unaff_x19 + 0x98);
                    if (lVar20 == 0) goto LAB_07279028;
                    uVar21 = 0;
                    uVar13 = 0;
                    if (uVar15 <= *(uint *)(lVar20 + 0x18)) {
                      uVar13 = *(uint *)(lVar20 + 0x18) - uVar15;
                    }
                    do {
                      if (uVar13 == uVar21) goto LAB_07279024;
                      lVar6 = *(long *)(unaff_x19 + 0x90);
                      if (lVar6 == 0) goto LAB_07279028;
                      uVar8 = *(uint *)(lVar6 + 0x18);
                      uVar4 = *(uint *)(lVar20 + (long)(int)(uVar15 + (uint)uVar21) * 4 + 0x20);
                      if (uVar8 <= uVar4) goto LAB_07279024;
                      uVar9 = (uint)uVar21 >> (ulong)(uVar19 & 0x1f);
                      *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
                      if ((int)uVar4 < 0x14) {
                        uVar4 = uVar4 + *(int *)(unaff_x19 + 0x30) + 1;
                        if (uVar8 <= uVar4) goto LAB_07279024;
                        *(uint *)(lVar6 + (long)(int)uVar4 * 4 + 0x20) = uVar9;
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar24 != uVar21);
                  }
                  if (0xffff < (int)(uVar24 - 1) >> (uVar19 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
                    FUN_07277358();
                  }
                  if (lVar11 == 0) goto LAB_07279028;
                }
                uVar21 = 0;
                uVar24 = uVar12;
                do {
                  if (uVar16 <= uVar24) goto LAB_07279024;
                  if (unaff_x21 == 0) goto LAB_07279028;
                  uVar13 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar13 <= uVar21) goto LAB_07279024;
                  lVar20 = (long)(int)uVar24;
                  uVar24 = uVar24 + 0x100;
                  *(uint *)(lVar17 + uVar21 * 4) =
                       *(uint *)(lVar11 + lVar20 * 4 + 0x20) & 0xffdfffff;
                  uVar21 = uVar21 + 1;
                } while (uVar21 != 0x100);
                if (lVar11 == 0) goto LAB_07279028;
                uVar16 = *(uint *)(lVar11 + 0x18);
                if ((uVar16 <= uVar18) || (uVar18 = uVar18 + 0x100, uVar16 <= uVar18)) break;
                lVar20 = lVar11 + 0x20;
                uVar24 = *(uint *)(lVar20 + uVar22 * 4) & 0xffdfffff;
                if ((int)uVar24 < (int)(*(uint *)(lVar20 + (long)(int)uVar18 * 4) & 0xffdfffff)) {
                  lVar6 = *(long *)(unaff_x19 + 0x88);
                  lVar10 = *(long *)(unaff_x19 + 0x98);
                  do {
                    if (lVar10 == 0) goto LAB_07279028;
                    if (*(uint *)(lVar10 + 0x18) <= uVar24) goto LAB_07279024;
                    if (lVar6 == 0) goto LAB_07279028;
                    uVar15 = *(uint *)(lVar10 + (long)(int)uVar24 * 4 + 0x20);
                    if (*(uint *)(lVar6 + 0x18) <= uVar15) goto LAB_07279024;
                    bVar3 = *(byte *)(lVar6 + (int)uVar15 + 0x20);
                    uVar21 = (ulong)bVar3;
                    if (uVar23 <= bVar3) goto LAB_07279024;
                    if (*(char *)(param_2 + uVar21 + 0x20) == '\0') {
                      if (uVar13 <= bVar3) goto LAB_07279024;
                      if (uVar15 == 0) {
                        iVar7 = *(int *)(unaff_x19 + 0x30);
                      }
                      else {
                        iVar7 = uVar15 - 1;
                      }
                      uVar15 = *(uint *)(unaff_x21 + uVar21 * 4 + 0x20);
                      if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_07279024;
                      *(int *)(lVar10 + (long)(int)uVar15 * 4 + 0x20) = iVar7;
                      *(int *)(lVar17 + uVar21 * 4) = *(int *)(lVar17 + uVar21 * 4) + 1;
                    }
                    uVar24 = uVar24 + 1;
                  } while ((int)uVar24 <
                           (int)(*(uint *)(lVar20 + (long)(int)uVar18 * 4) & 0xffdfffff));
                }
                lVar6 = 0;
                do {
                  uVar18 = uVar12 + (int)lVar6;
                  if (uVar16 <= uVar18) goto LAB_07279024;
                  lVar6 = lVar6 + 0x100;
                  *(uint *)(lVar20 + (long)(int)uVar18 * 4) =
                       *(uint *)(lVar20 + (long)(int)uVar18 * 4) | 0x200000;
                } while (lVar6 != 0x10000);
                uVar14 = uVar14 + 1;
                if (uVar14 == 0x100) {
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


