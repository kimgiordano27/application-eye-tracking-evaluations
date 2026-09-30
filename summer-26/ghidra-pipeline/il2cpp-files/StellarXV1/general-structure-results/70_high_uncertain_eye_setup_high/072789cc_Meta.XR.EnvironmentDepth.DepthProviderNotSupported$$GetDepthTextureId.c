/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.DepthProviderNotSupported$$GetDepthTextureId
ENTRY_POINT: 072789cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_DepthProviderNotSupported__GetDepthTextureId
               (long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint in_w9;
  uint uVar11;
  uint uVar12;
  long in_x10;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar21;
  uint uVar22;
  long lVar23;
  
  uVar14 = *(uint *)(in_x10 + 0x18);
  if (uVar14 != 0) {
    if (-1 < *(int *)(unaff_x19 + 0x30)) {
      uVar18 = (ulong)*(byte *)(in_x10 + 0x20);
      uVar15 = 1;
      do {
        if (uVar14 == uVar15) goto LAB_07279024;
        uVar17 = (ulong)*(byte *)(in_x10 + (int)uVar15 + 0x20);
        uVar18 = uVar17 | uVar18 << 8;
        if (in_w9 <= (uint)uVar18) goto LAB_07279024;
        *(int *)(param_1 + 0x20 + uVar18 * 4) = *(int *)(param_1 + 0x20 + uVar18 * 4) + 1;
        bVar1 = (int)uVar15 <= *(int *)(unaff_x19 + 0x30);
        uVar18 = uVar17;
        uVar15 = uVar15 + 1;
      } while (bVar1);
    }
    lVar16 = 0;
    uVar15 = in_w9;
    if (in_w9 < 2) {
      uVar15 = 1;
    }
    lVar23 = param_1 + 0x20;
    do {
      if ((ulong)uVar15 * 4 + -4 == lVar16) goto LAB_07279024;
      lVar10 = param_1 + lVar16;
      lVar16 = lVar16 + 4;
      *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x24);
    } while (lVar16 != 0x40000);
    if (uVar14 != 1) {
      iVar7 = *(int *)(unaff_x19 + 0x30);
      if (0 < iVar7) {
        uVar15 = uVar14;
        if (uVar14 < 3) {
          uVar15 = 2;
        }
        uVar18 = 0;
        lVar16 = 0x200000000;
        uVar17 = (ulong)*(byte *)(in_x10 + 0x21);
        do {
          if (uVar15 - 2 == uVar18) goto LAB_07279024;
          uVar20 = (ulong)*(byte *)(in_x10 + (lVar16 >> 0x20) + 0x20);
          uVar17 = uVar20 | uVar17 << 8;
          if (in_w9 <= (uint)uVar17) goto LAB_07279024;
          lVar10 = *(long *)(unaff_x19 + 0x98);
          uVar12 = *(int *)(lVar23 + uVar17 * 4) - 1;
          *(uint *)(lVar23 + uVar17 * 4) = uVar12;
          if (lVar10 == 0) goto LAB_07279028;
          if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_07279024;
          lVar16 = lVar16 + 0x100000000;
          *(int *)(lVar10 + (long)(int)uVar12 * 4 + 0x20) = (int)uVar18;
          uVar18 = uVar18 + 1;
          iVar7 = *(int *)(unaff_x19 + 0x30);
          uVar17 = uVar20;
        } while ((long)uVar18 < (long)iVar7);
      }
      if ((iVar7 + 1U < uVar14) &&
         (uVar6 = CONCAT11(*(undefined1 *)(in_x10 + (int)(iVar7 + 1U) + 0x20),
                           *(undefined1 *)(in_x10 + 0x21)), uVar6 < in_w9)) {
        lVar16 = *(long *)(unaff_x19 + 0x98);
        uVar14 = *(int *)(lVar23 + (ulong)uVar6 * 4) - 1;
        *(uint *)(lVar23 + (ulong)uVar6 * 4) = uVar14;
        if (lVar16 == 0) {
LAB_07279028:
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        if (uVar14 < *(uint *)(lVar16 + 0x18)) {
          *(undefined4 *)(lVar16 + (long)(int)uVar14 * 4 + 0x20) = *(undefined4 *)(unaff_x19 + 0x30)
          ;
          if (unaff_x20 == 0) goto LAB_07279028;
          uVar17 = *(ulong *)(unaff_x20 + 0x18);
          uVar18 = 0;
          do {
            if ((uVar17 & 0xffffffff) == uVar18) goto LAB_07279024;
            *(int *)(unaff_x20 + 0x20 + uVar18 * 4) = (int)uVar18;
            uVar18 = uVar18 + 1;
          } while (uVar18 != 0x100);
          uVar14 = 0x16c;
          do {
            uVar15 = (int)uVar14 / 3 + ((int)uVar14 >> 0x1f);
            if ((int)uVar14 < 0x300) {
              uVar11 = (uint)uVar17;
              uVar12 = 0;
              uVar22 = uVar15;
              uVar21 = uVar15;
              if (uVar15 <= uVar11) {
                uVar21 = uVar11;
              }
              do {
                if (uVar22 == uVar21) goto LAB_07279024;
                iVar7 = *(int *)(unaff_x20 + (long)(int)uVar22 * 4 + 0x20);
                uVar13 = iVar7 * 0x100;
                uVar8 = uVar12;
                do {
                  if (uVar11 <= uVar8) goto LAB_07279024;
                  iVar2 = *(int *)(unaff_x20 + (long)(int)uVar8 * 4 + 0x20);
                  uVar4 = iVar2 * 0x100;
                  if ((((in_w9 <= uVar4 + 0x100) || (in_w9 <= uVar4)) || (in_w9 <= uVar13 + 0x100))
                     || (in_w9 <= uVar13)) goto LAB_07279024;
                  uVar9 = uVar8;
                  if (*(int *)(param_1 + (long)(int)(uVar4 + 0x100) * 4 + 0x20) -
                      *(int *)(param_1 + (long)(int)uVar4 * 4 + 0x20) <=
                      *(int *)(param_1 + 0x20 + (long)(int)(uVar13 + 0x100) * 4) -
                      *(int *)(param_1 + 0x20 + (long)(int)uVar13 * 4)) break;
                  uVar9 = uVar8 - uVar15;
                  *(int *)(unaff_x20 + (long)(int)(uVar15 + uVar8) * 4 + 0x20) = iVar2;
                  bVar1 = (int)uVar15 <= (int)uVar8;
                  uVar8 = uVar9;
                } while (bVar1);
                if (uVar11 <= uVar15 + uVar9) goto LAB_07279024;
                uVar12 = uVar12 + 1;
                *(int *)(unaff_x20 + (long)(int)(uVar15 + uVar9) * 4 + 0x20) = iVar7;
                bVar1 = (int)uVar22 < 0xff;
                uVar22 = uVar22 + 1;
              } while (bVar1);
            }
            uVar12 = uVar14 - 3;
            uVar14 = uVar15;
          } while (2 < uVar12);
          uVar18 = 0;
          lVar16 = unaff_x21 + 0x20;
          while (uVar18 < *(uint *)(unaff_x20 + 0x18)) {
            lVar23 = 0;
            uVar15 = *(uint *)(unaff_x20 + uVar18 * 4 + 0x20);
            uVar14 = uVar15 * 0x100;
            uVar20 = (ulong)(int)uVar14;
            uVar17 = (uVar20 >> 8) << 10 | 0x20;
            do {
              uVar21 = uVar14 + (int)lVar23;
              uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
              if (uVar12 <= uVar21) goto LAB_07279024;
              uVar22 = *(uint *)(param_1 + uVar17 + lVar23 * 4);
              if ((uVar22 >> 0x15 & 1) == 0) {
                uVar11 = uVar14 + (int)lVar23 + 1;
                if (uVar12 <= uVar11) goto LAB_07279024;
                if ((((int)uVar22 <
                      (int)((*(uint *)(param_1 + (long)(int)uVar11 * 4 + 0x20) & 0xffdfffff) - 1))
                    && (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                       *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
                   (*(char *)(unaff_x19 + 0xcc) != '\0')) {
                  return;
                }
                param_1 = *(long *)(unaff_x19 + 0xa8);
                if (param_1 == 0) goto LAB_07279028;
                uVar12 = (uint)*(undefined8 *)(param_1 + 0x18);
                if (uVar12 <= uVar21) goto LAB_07279024;
                lVar10 = param_1 + uVar17;
                *(uint *)(lVar10 + lVar23 * 4) = *(uint *)(lVar10 + lVar23 * 4) | 0x200000;
              }
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0x100);
            uVar21 = *(uint *)(param_2 + 0x18);
            if (uVar21 <= uVar15) break;
            *(undefined1 *)(param_2 + (int)uVar15 + 0x20) = 1;
            if (uVar18 != 0xff) {
              if ((uVar12 <= uVar14) || (uVar12 <= uVar14 + 0x100)) break;
              uVar13 = *(uint *)(param_1 + uVar20 * 4 + 0x20) & 0xffdfffff;
              uVar22 = (*(uint *)(param_1 + (long)(int)(uVar14 + 0x100) * 4 + 0x20) & 0xffdfffff) -
                       uVar13;
              uVar11 = 0;
              do {
                uVar8 = uVar11;
                uVar11 = uVar8 + 1;
              } while (0xfffe < (int)uVar22 >> (uVar8 & 0x1f));
              if (0 < (int)uVar22) {
                lVar23 = *(long *)(unaff_x19 + 0x98);
                if (lVar23 == 0) goto LAB_07279028;
                uVar17 = 0;
                uVar11 = 0;
                if (uVar13 <= *(uint *)(lVar23 + 0x18)) {
                  uVar11 = *(uint *)(lVar23 + 0x18) - uVar13;
                }
                do {
                  if (uVar11 == uVar17) goto LAB_07279024;
                  lVar10 = *(long *)(unaff_x19 + 0x90);
                  if (lVar10 == 0) goto LAB_07279028;
                  uVar4 = *(uint *)(lVar10 + 0x18);
                  uVar9 = *(uint *)(lVar23 + (long)(int)(uVar13 + (uint)uVar17) * 4 + 0x20);
                  if (uVar4 <= uVar9) goto LAB_07279024;
                  uVar5 = (uint)uVar17 >> (ulong)(uVar8 & 0x1f);
                  *(uint *)(lVar10 + (long)(int)uVar9 * 4 + 0x20) = uVar5;
                  if ((int)uVar9 < 0x14) {
                    uVar9 = uVar9 + *(int *)(unaff_x19 + 0x30) + 1;
                    if (uVar4 <= uVar9) goto LAB_07279024;
                    *(uint *)(lVar10 + (long)(int)uVar9 * 4 + 0x20) = uVar5;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar22 != uVar17);
              }
              if (0xffff < (int)(uVar22 - 1) >> (uVar8 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
                FUN_07277358();
              }
              if (param_1 == 0) goto LAB_07279028;
            }
            uVar17 = 0;
            uVar22 = uVar15;
            do {
              if (uVar12 <= uVar22) goto LAB_07279024;
              if (unaff_x21 == 0) goto LAB_07279028;
              uVar11 = *(uint *)(unaff_x21 + 0x18);
              if (uVar11 <= uVar17) goto LAB_07279024;
              lVar23 = (long)(int)uVar22;
              uVar22 = uVar22 + 0x100;
              *(uint *)(lVar16 + uVar17 * 4) = *(uint *)(param_1 + lVar23 * 4 + 0x20) & 0xffdfffff;
              uVar17 = uVar17 + 1;
            } while (uVar17 != 0x100);
            if (param_1 == 0) goto LAB_07279028;
            uVar12 = *(uint *)(param_1 + 0x18);
            if ((uVar12 <= uVar14) || (uVar14 = uVar14 + 0x100, uVar12 <= uVar14)) break;
            lVar23 = param_1 + 0x20;
            uVar22 = *(uint *)(lVar23 + uVar20 * 4) & 0xffdfffff;
            if ((int)uVar22 < (int)(*(uint *)(lVar23 + (long)(int)uVar14 * 4) & 0xffdfffff)) {
              lVar10 = *(long *)(unaff_x19 + 0x88);
              lVar19 = *(long *)(unaff_x19 + 0x98);
              do {
                if (lVar19 == 0) goto LAB_07279028;
                if (*(uint *)(lVar19 + 0x18) <= uVar22) goto LAB_07279024;
                if (lVar10 == 0) goto LAB_07279028;
                uVar13 = *(uint *)(lVar19 + (long)(int)uVar22 * 4 + 0x20);
                if (*(uint *)(lVar10 + 0x18) <= uVar13) goto LAB_07279024;
                bVar3 = *(byte *)(lVar10 + (int)uVar13 + 0x20);
                uVar17 = (ulong)bVar3;
                if (uVar21 <= bVar3) goto LAB_07279024;
                if (*(char *)(param_2 + uVar17 + 0x20) == '\0') {
                  if (uVar11 <= bVar3) goto LAB_07279024;
                  if (uVar13 == 0) {
                    iVar7 = *(int *)(unaff_x19 + 0x30);
                  }
                  else {
                    iVar7 = uVar13 - 1;
                  }
                  uVar13 = *(uint *)(unaff_x21 + uVar17 * 4 + 0x20);
                  if (*(uint *)(lVar19 + 0x18) <= uVar13) goto LAB_07279024;
                  *(int *)(lVar19 + (long)(int)uVar13 * 4 + 0x20) = iVar7;
                  *(int *)(lVar16 + uVar17 * 4) = *(int *)(lVar16 + uVar17 * 4) + 1;
                }
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 < (int)(*(uint *)(lVar23 + (long)(int)uVar14 * 4) & 0xffdfffff));
            }
            lVar10 = 0;
            do {
              uVar14 = uVar15 + (int)lVar10;
              if (uVar12 <= uVar14) goto LAB_07279024;
              lVar10 = lVar10 + 0x100;
              *(uint *)(lVar23 + (long)(int)uVar14 * 4) =
                   *(uint *)(lVar23 + (long)(int)uVar14 * 4) | 0x200000;
            } while (lVar10 != 0x10000);
            uVar18 = uVar18 + 1;
            if (uVar18 == 0x100) {
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


