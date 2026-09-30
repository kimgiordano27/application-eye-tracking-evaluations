/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthUtils$$.cctor
ENTRY_POINT: 07278a04
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthUtils___cctor(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint5 uVar6;
  ushort uVar7;
  undefined1 in_CY;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint in_w9;
  uint uVar13;
  uint uVar14;
  long in_x10;
  uint in_w11;
  uint uVar15;
  uint uVar16;
  long in_x12;
  uint in_w13;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint in_w14;
  ulong in_x15;
  long lVar20;
  ulong uVar21;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  
  while (!(bool)in_CY) {
    *(int *)(in_x12 + in_x15 * 4) = *(int *)(in_x12 + in_x15 * 4) + 1;
    uVar16 = in_w13 + 1;
    if (*(int *)(unaff_x19 + 0x30) < (int)in_w13) {
      lVar18 = 0;
      uVar16 = in_w9;
      if (in_w9 < 2) {
        uVar16 = 1;
      }
      lVar24 = param_1 + 0x20;
      goto LAB_07278a40;
    }
    if (in_w11 == uVar16) break;
    bVar3 = *(byte *)(in_x10 + (int)uVar16 + 0x20);
    uVar6 = CONCAT41(in_w14,bVar3);
    in_x15 = (ulong)uVar6;
    in_w13 = uVar16;
    in_w14 = (uint)bVar3;
    in_CY = in_w9 <= (uint)uVar6;
  }
  goto LAB_07279024;
  while( true ) {
    lVar12 = param_1 + lVar18;
    lVar18 = lVar18 + 4;
    *(int *)(lVar12 + 0x24) = *(int *)(lVar12 + 0x20) + *(int *)(lVar12 + 0x24);
    if (lVar18 == 0x40000) break;
LAB_07278a40:
    if ((ulong)uVar16 * 4 + -4 == lVar18) goto LAB_07279024;
  }
  if (in_w11 != 1) {
    iVar8 = *(int *)(unaff_x19 + 0x30);
    if (0 < iVar8) {
      uVar16 = in_w11;
      if (in_w11 < 3) {
        uVar16 = 2;
      }
      uVar19 = 0;
      lVar18 = 0x200000000;
      uVar11 = (ulong)*(byte *)(in_x10 + 0x21);
      do {
        if (uVar16 - 2 == uVar19) goto LAB_07279024;
        uVar21 = (ulong)*(byte *)(in_x10 + (lVar18 >> 0x20) + 0x20);
        uVar11 = uVar21 | uVar11 << 8;
        if (in_w9 <= (uint)uVar11) goto LAB_07279024;
        lVar12 = *(long *)(unaff_x19 + 0x98);
        uVar17 = *(int *)(lVar24 + uVar11 * 4) - 1;
        *(uint *)(lVar24 + uVar11 * 4) = uVar17;
        if (lVar12 == 0) goto LAB_07279028;
        if (*(uint *)(lVar12 + 0x18) <= uVar17) goto LAB_07279024;
        lVar18 = lVar18 + 0x100000000;
        *(int *)(lVar12 + (long)(int)uVar17 * 4 + 0x20) = (int)uVar19;
        uVar19 = uVar19 + 1;
        iVar8 = *(int *)(unaff_x19 + 0x30);
        uVar11 = uVar21;
      } while ((long)uVar19 < (long)iVar8);
    }
    if ((iVar8 + 1U < in_w11) &&
       (uVar7 = CONCAT11(*(undefined1 *)(in_x10 + (int)(iVar8 + 1U) + 0x20),
                         *(undefined1 *)(in_x10 + 0x21)), uVar7 < in_w9)) {
      lVar18 = *(long *)(unaff_x19 + 0x98);
      uVar16 = *(int *)(lVar24 + (ulong)uVar7 * 4) - 1;
      *(uint *)(lVar24 + (ulong)uVar7 * 4) = uVar16;
      if (lVar18 == 0) {
LAB_07279028:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (uVar16 < *(uint *)(lVar18 + 0x18)) {
        *(undefined4 *)(lVar18 + (long)(int)uVar16 * 4 + 0x20) = *(undefined4 *)(unaff_x19 + 0x30);
        if (unaff_x20 == 0) goto LAB_07279028;
        uVar11 = *(ulong *)(unaff_x20 + 0x18);
        uVar19 = 0;
        do {
          if ((uVar11 & 0xffffffff) == uVar19) goto LAB_07279024;
          *(int *)(unaff_x20 + 0x20 + uVar19 * 4) = (int)uVar19;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x100);
        uVar16 = 0x16c;
        do {
          uVar17 = (int)uVar16 / 3 + ((int)uVar16 >> 0x1f);
          if ((int)uVar16 < 0x300) {
            uVar13 = (uint)uVar11;
            uVar14 = 0;
            uVar23 = uVar17;
            uVar22 = uVar17;
            if (uVar17 <= uVar13) {
              uVar22 = uVar13;
            }
            do {
              if (uVar23 == uVar22) goto LAB_07279024;
              iVar8 = *(int *)(unaff_x20 + (long)(int)uVar23 * 4 + 0x20);
              uVar15 = iVar8 * 0x100;
              uVar9 = uVar14;
              do {
                if (uVar13 <= uVar9) goto LAB_07279024;
                iVar2 = *(int *)(unaff_x20 + (long)(int)uVar9 * 4 + 0x20);
                uVar4 = iVar2 * 0x100;
                if ((((in_w9 <= uVar4 + 0x100) || (in_w9 <= uVar4)) || (in_w9 <= uVar15 + 0x100)) ||
                   (in_w9 <= uVar15)) goto LAB_07279024;
                uVar10 = uVar9;
                if (*(int *)(param_1 + (long)(int)(uVar4 + 0x100) * 4 + 0x20) -
                    *(int *)(param_1 + (long)(int)uVar4 * 4 + 0x20) <=
                    *(int *)(param_1 + 0x20 + (long)(int)(uVar15 + 0x100) * 4) -
                    *(int *)(param_1 + 0x20 + (long)(int)uVar15 * 4)) break;
                uVar10 = uVar9 - uVar17;
                *(int *)(unaff_x20 + (long)(int)(uVar17 + uVar9) * 4 + 0x20) = iVar2;
                bVar1 = (int)uVar17 <= (int)uVar9;
                uVar9 = uVar10;
              } while (bVar1);
              if (uVar13 <= uVar17 + uVar10) goto LAB_07279024;
              uVar14 = uVar14 + 1;
              *(int *)(unaff_x20 + (long)(int)(uVar17 + uVar10) * 4 + 0x20) = iVar8;
              bVar1 = (int)uVar23 < 0xff;
              uVar23 = uVar23 + 1;
            } while (bVar1);
          }
          uVar14 = uVar16 - 3;
          uVar16 = uVar17;
        } while (2 < uVar14);
        uVar19 = 0;
        lVar18 = unaff_x21 + 0x20;
        while (uVar19 < *(uint *)(unaff_x20 + 0x18)) {
          lVar24 = 0;
          uVar17 = *(uint *)(unaff_x20 + uVar19 * 4 + 0x20);
          uVar16 = uVar17 * 0x100;
          uVar21 = (ulong)(int)uVar16;
          uVar11 = (uVar21 >> 8) << 10 | 0x20;
          do {
            uVar22 = uVar16 + (int)lVar24;
            uVar14 = (uint)*(undefined8 *)(param_1 + 0x18);
            if (uVar14 <= uVar22) goto LAB_07279024;
            uVar23 = *(uint *)(param_1 + uVar11 + lVar24 * 4);
            if ((uVar23 >> 0x15 & 1) == 0) {
              uVar13 = uVar16 + (int)lVar24 + 1;
              if (uVar14 <= uVar13) goto LAB_07279024;
              if ((((int)uVar23 <
                    (int)((*(uint *)(param_1 + (long)(int)uVar13 * 4 + 0x20) & 0xffdfffff) - 1)) &&
                  (Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Log(),
                  *(int *)(unaff_x19 + 200) < *(int *)(unaff_x19 + 0xc4))) &&
                 (*(char *)(unaff_x19 + 0xcc) != '\0')) {
                return;
              }
              param_1 = *(long *)(unaff_x19 + 0xa8);
              if (param_1 == 0) goto LAB_07279028;
              uVar14 = (uint)*(undefined8 *)(param_1 + 0x18);
              if (uVar14 <= uVar22) goto LAB_07279024;
              lVar12 = param_1 + uVar11;
              *(uint *)(lVar12 + lVar24 * 4) = *(uint *)(lVar12 + lVar24 * 4) | 0x200000;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != 0x100);
          uVar22 = *(uint *)(param_2 + 0x18);
          if (uVar22 <= uVar17) break;
          *(undefined1 *)(param_2 + (int)uVar17 + 0x20) = 1;
          if (uVar19 != 0xff) {
            if ((uVar14 <= uVar16) || (uVar14 <= uVar16 + 0x100)) break;
            uVar15 = *(uint *)(param_1 + uVar21 * 4 + 0x20) & 0xffdfffff;
            uVar23 = (*(uint *)(param_1 + (long)(int)(uVar16 + 0x100) * 4 + 0x20) & 0xffdfffff) -
                     uVar15;
            uVar13 = 0;
            do {
              uVar9 = uVar13;
              uVar13 = uVar9 + 1;
            } while (0xfffe < (int)uVar23 >> (uVar9 & 0x1f));
            if (0 < (int)uVar23) {
              lVar24 = *(long *)(unaff_x19 + 0x98);
              if (lVar24 == 0) goto LAB_07279028;
              uVar11 = 0;
              uVar13 = 0;
              if (uVar15 <= *(uint *)(lVar24 + 0x18)) {
                uVar13 = *(uint *)(lVar24 + 0x18) - uVar15;
              }
              do {
                if (uVar13 == uVar11) goto LAB_07279024;
                lVar12 = *(long *)(unaff_x19 + 0x90);
                if (lVar12 == 0) goto LAB_07279028;
                uVar4 = *(uint *)(lVar12 + 0x18);
                uVar10 = *(uint *)(lVar24 + (long)(int)(uVar15 + (uint)uVar11) * 4 + 0x20);
                if (uVar4 <= uVar10) goto LAB_07279024;
                uVar5 = (uint)uVar11 >> (ulong)(uVar9 & 0x1f);
                *(uint *)(lVar12 + (long)(int)uVar10 * 4 + 0x20) = uVar5;
                if ((int)uVar10 < 0x14) {
                  uVar10 = uVar10 + *(int *)(unaff_x19 + 0x30) + 1;
                  if (uVar4 <= uVar10) goto LAB_07279024;
                  *(uint *)(lVar12 + (long)(int)uVar10 * 4 + 0x20) = uVar5;
                }
                uVar11 = uVar11 + 1;
              } while (uVar23 != uVar11);
            }
            if (0xffff < (int)(uVar23 - 1) >> (uVar9 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
              FUN_07277358();
            }
            if (param_1 == 0) goto LAB_07279028;
          }
          uVar11 = 0;
          uVar23 = uVar17;
          do {
            if (uVar14 <= uVar23) goto LAB_07279024;
            if (unaff_x21 == 0) goto LAB_07279028;
            uVar13 = *(uint *)(unaff_x21 + 0x18);
            if (uVar13 <= uVar11) goto LAB_07279024;
            lVar24 = (long)(int)uVar23;
            uVar23 = uVar23 + 0x100;
            *(uint *)(lVar18 + uVar11 * 4) = *(uint *)(param_1 + lVar24 * 4 + 0x20) & 0xffdfffff;
            uVar11 = uVar11 + 1;
          } while (uVar11 != 0x100);
          if (param_1 == 0) goto LAB_07279028;
          uVar14 = *(uint *)(param_1 + 0x18);
          if ((uVar14 <= uVar16) || (uVar16 = uVar16 + 0x100, uVar14 <= uVar16)) break;
          lVar24 = param_1 + 0x20;
          uVar23 = *(uint *)(lVar24 + uVar21 * 4) & 0xffdfffff;
          if ((int)uVar23 < (int)(*(uint *)(lVar24 + (long)(int)uVar16 * 4) & 0xffdfffff)) {
            lVar12 = *(long *)(unaff_x19 + 0x88);
            lVar20 = *(long *)(unaff_x19 + 0x98);
            do {
              if (lVar20 == 0) goto LAB_07279028;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_07279024;
              if (lVar12 == 0) goto LAB_07279028;
              uVar15 = *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20);
              if (*(uint *)(lVar12 + 0x18) <= uVar15) goto LAB_07279024;
              bVar3 = *(byte *)(lVar12 + (int)uVar15 + 0x20);
              uVar11 = (ulong)bVar3;
              if (uVar22 <= bVar3) goto LAB_07279024;
              if (*(char *)(param_2 + uVar11 + 0x20) == '\0') {
                if (uVar13 <= bVar3) goto LAB_07279024;
                if (uVar15 == 0) {
                  iVar8 = *(int *)(unaff_x19 + 0x30);
                }
                else {
                  iVar8 = uVar15 - 1;
                }
                uVar15 = *(uint *)(unaff_x21 + uVar11 * 4 + 0x20);
                if (*(uint *)(lVar20 + 0x18) <= uVar15) goto LAB_07279024;
                *(int *)(lVar20 + (long)(int)uVar15 * 4 + 0x20) = iVar8;
                *(int *)(lVar18 + uVar11 * 4) = *(int *)(lVar18 + uVar11 * 4) + 1;
              }
              uVar23 = uVar23 + 1;
            } while ((int)uVar23 < (int)(*(uint *)(lVar24 + (long)(int)uVar16 * 4) & 0xffdfffff));
          }
          lVar12 = 0;
          do {
            uVar16 = uVar17 + (int)lVar12;
            if (uVar14 <= uVar16) goto LAB_07279024;
            lVar12 = lVar12 + 0x100;
            *(uint *)(lVar24 + (long)(int)uVar16 * 4) =
                 *(uint *)(lVar24 + (long)(int)uVar16 * 4) | 0x200000;
          } while (lVar12 != 0x10000);
          uVar19 = uVar19 + 1;
          if (uVar19 == 0x100) {
            return;
          }
        }
      }
    }
  }
LAB_07279024:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


