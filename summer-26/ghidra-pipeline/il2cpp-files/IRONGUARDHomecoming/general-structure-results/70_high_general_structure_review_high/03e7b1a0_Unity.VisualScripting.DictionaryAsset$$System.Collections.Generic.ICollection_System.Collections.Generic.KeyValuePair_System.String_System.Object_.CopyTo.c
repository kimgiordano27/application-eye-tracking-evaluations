/*
FUNCTION_NAME: Unity.VisualScripting.DictionaryAsset$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.CopyTo
ENTRY_POINT: 03e7b1a0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


float Unity_VisualScripting_DictionaryAsset__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<System_String,System_Object>>_CopyTo
                (long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  long unaff_x19;
  uint unaff_w20;
  uint *unaff_x21;
  int iVar17;
  ulong unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  uint unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  uint unaff_w29;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s8;
  float unaff_s9;
  uint uVar25;
  ulong unaff_d10;
  uint uVar26;
  ulong unaff_d11;
  uint uVar27;
  float fVar28;
  ulong unaff_d12;
  uint uVar29;
  ulong unaff_d13;
  float fVar30;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float *in_stack_00000010;
  uint uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  uint uStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000038;
  float fStack000000000000003c;
  ulong in_stack_00000040;
  float fStack0000000000000048;
  uint uStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint uStack0000000000000070;
  float fStack0000000000000074;
  long *in_stack_00000078;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_00000170;
  uint in_stack_00000bd8;
  uint in_stack_00000bdc;
  undefined8 in_stack_00000be0;
  undefined8 in_stack_00000be8;
  undefined4 in_stack_00000bf0;
  
  uVar5 = in_stack_00000040;
  uVar4 = _uStack0000000000000030;
code_r0x03e7b1a0:
  uVar12 = FUN_02bd799c(param_1,param_2,param_3,param_4);
  if ((uVar12 & 1) != 0) {
    if ((in_stack_000000b8 == 0) ||
       (FUN_03e67c10(unaff_d11,unaff_d12,unaff_d10,unaff_d13,
                     *(undefined4 *)(in_stack_000000b8 + 0x28),
                     *(undefined4 *)(in_stack_000000b8 + 0x2c),
                     *(undefined4 *)(in_stack_000000b8 + 0x30),
                     *(undefined4 *)(in_stack_000000b8 + 0x34),0), in_stack_000000b8 == 0)) {
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
      fStack0000000000000074 = 0.0;
    }
  }
LAB_03e7b1fc:
  *(int *)(unaff_x19 + 0x2fc) = (int)unaff_d10;
  fVar21 = unaff_s15;
  unaff_s15 = unaff_s14;
  uVar9 = in_stack_00000bd8;
  do {
    fVar28 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar28 != 0.0) {
      if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
      goto LAB_03e7bfc0;
      FUN_040cf28c(&stack0x00000be0,lVar13,0);
                    /* try { // try from 03e7b228 to 03f7b22b has its CatchHandler @ 03e7ba4c */
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar19 = (float)FUN_040cf0b4(&stack0x000000c0,0);
      if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
      goto LAB_03e7bfc0;
      FUN_040cf28c(&stack0x00000be0,lVar13,0);
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar20 = (float)FUN_040cf0c4(&stack0x000000c0,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
           (fVar28 * 0.5 - unaff_s15 * (fVar19 * 0.5 + fVar20));
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar17 = *(int *)(unaff_x19 + 0x644);
    fVar28 = 0.0;
    if (((unaff_w20 == 0) && (fVar28 = 0.0, iVar17 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar28 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar13 = *in_stack_00000078;
    if (lVar13 == 0) goto LAB_03e7bfc0;
    uVar14 = *unaff_x21;
    lVar16 = (long)(int)uVar14;
    if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_03e7c214;
    fVar19 = *(float *)(unaff_x19 + 0x4d8);
    fVar20 = *(float *)(unaff_x19 + 0x61c);
    fVar23 = unaff_s8 * unaff_s15;
    *(float *)(lVar13 + lVar16 * unaff_x22 + 0x14c) = (0.0 - fVar19) + fVar20;
    if (iVar17 == 0) {
      fVar23 = fVar23 / fStack0000000000000068;
      fVar22 = (unaff_s9 * unaff_s15) / fStack0000000000000068;
    }
    else {
      fVar22 = unaff_s9 * unaff_s15;
    }
    fVar23 = fVar20 + fVar23;
    if ((unaff_w29 == 0) || (uVar14 == *(uint *)(unaff_x19 + 0x498))) {
      fVar22 = fVar20 + fVar22;
      fVar30 = fVar23;
      fVar18 = fVar22;
      if (fVar20 != 0.0) {
        fVar30 = (fVar23 - fVar20) / *(float *)(unaff_x19 + 0x404);
        fVar18 = (fVar22 - fVar20) / *(float *)(unaff_x19 + 0x404);
        if (fVar30 <= fVar23) {
          fVar30 = fVar23;
        }
        if (fVar22 <= fVar18) {
          fVar18 = fVar22;
        }
      }
      lVar13 = lVar13 + lVar16 * unaff_x22;
      fVar20 = fVar30;
      if (fVar30 <= *(float *)(unaff_x19 + 0x4c8)) {
        fVar20 = *(float *)(unaff_x19 + 0x4c8);
      }
      fVar24 = fVar18;
      if (*(float *)(unaff_x19 + 0x4cc) <= fVar18) {
        fVar24 = *(float *)(unaff_x19 + 0x4cc);
      }
      *(float *)(unaff_x19 + 0x4cc) = fVar24;
      *(float *)(unaff_x19 + 0x4c8) = fVar20;
      *(float *)(lVar13 + 0x154) = fVar30;
      *(float *)(lVar13 + 0x158) = fVar18;
      *(float *)(lVar13 + 0x148) = fVar23 - fVar19;
      *(float *)(unaff_x19 + 0x4c0) = fVar23 - fVar19;
      *(float *)(lVar13 + 0x150) = fVar22 - fVar19;
      *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar19;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar20;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        fVar20 = *(float *)(unaff_x19 + 0x4bc);
        fVar19 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
        fStack0000000000000068 = (unaff_s15 * fVar19) / fStack0000000000000068;
        fVar19 = *(float *)(unaff_x19 + 0x4d8);
        if (fVar20 <= fStack0000000000000068) {
          fVar20 = fStack0000000000000068;
        }
        *(float *)(unaff_x19 + 0x4bc) = fVar20;
      }
    }
    else {
      fVar20 = *(float *)(unaff_x19 + 0x4c8);
      lVar13 = lVar13 + lVar16 * unaff_x22;
      *(float *)(lVar13 + 0x154) = fVar20;
      fVar22 = *(float *)(unaff_x19 + 0x4cc);
      fVar20 = fVar20 - fVar19;
      *(float *)(lVar13 + 0x148) = fVar20;
      *(float *)(lVar13 + 0x158) = fVar22;
      *(float *)(unaff_x19 + 0x4c0) = fVar20;
      fVar22 = fVar22 - fVar19;
      *(float *)(lVar13 + 0x150) = fVar22;
      *(float *)(unaff_x19 + 0x4c4) = fVar22;
    }
    iVar17 = (int)unaff_x22;
    in_stack_00000bd8 = uVar9;
    if (fVar19 == 0.0) {
      if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar19 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar23) {
          fVar19 = fVar23;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar19;
        goto LAB_03e7b470;
      }
      bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
      if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
         (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
      fVar21 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar19 = (float)FUN_040cf0d4(&stack0x000000e0,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar28 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 unaff_s15 * ((float)unaff_d10 + fVar19) +
                 fStack0000000000000058 *
                 (fVar28 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar28 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                 fStack0000000000000058 * (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)))
        ;
      }
      fVar21 = fVar21 + fVar28;
      *(float *)(unaff_x19 + 0x640) = fVar21;
      if ((unaff_w28 == 0x200b) || (unaff_w29 != 0)) {
        fVar21 = fVar21 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
        *(float *)(unaff_x19 + 0x640) = fVar21;
      }
      if (unaff_w28 == 0xd) {
        if (fStack0000000000000064 <= fStack000000000000006c + fVar21) {
          fStack0000000000000064 = fStack000000000000006c + fVar21;
        }
        fStack000000000000006c = 0.0;
        fVar21 = *(float *)(unaff_x19 + 0x40c) + 0.0;
LAB_03e7b75c:
        bVar7 = false;
        *(float *)(unaff_x19 + 0x640) = fVar21;
LAB_03e7b764:
        if (*unaff_x21 == uStack0000000000000070) goto LAB_03e7b820;
      }
      else {
        bVar7 = unaff_w28 == 10;
        if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
           (1 < unaff_w28 - 0x2028)) goto LAB_03e7b764;
LAB_03e7b820:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar21 = *(float *)(unaff_x19 + 0x4c8);
          fVar28 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          fVar21 = fVar21 - fVar28;
          if (((fStack000000000000001c < ABS(fVar21)) && (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
             (*(char *)(unaff_x19 + 0x33c) == '\0')) {
            *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar21;
            *(float *)(unaff_x19 + 0x4d8) = fVar21 + *(float *)(unaff_x19 + 0x4d8);
          }
        }
        fVar21 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
        if (fVar21 <= *(float *)(unaff_x19 + 0x4c4)) {
          fStack0000000000000038 = fVar21;
        }
        fVar28 = in_stack_00000040._4_4_ +
                 fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
        fVar21 = fStack0000000000000064;
        if (fStack0000000000000064 <= fVar28) {
          fVar21 = fVar28;
        }
        *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
        fStack000000000000006c = fVar21;
        if (*(uint *)(unaff_x19 + 0x494) != uStack0000000000000070) {
          fStack000000000000006c = 0.0;
          fStack0000000000000064 = fVar21;
        }
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
        *(undefined1 *)(unaff_x19 + 0x33c) = 0;
        if (bVar7) {
LAB_03e7bb3c:
          FUN_03e821b4();
          FUN_03e821b4();
          uVar9 = *(uint *)(unaff_x19 + 0x494);
          lVar13 = *(long *)(unaff_x19 + 0x488);
          iVar8 = uVar9 + 1;
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          *(int *)(unaff_x19 + 0x498) = iVar8;
          if (lVar13 != 0) {
            if (uVar9 < *(uint *)(lVar13 + 0x18)) {
              fVar21 = *(float *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x154);
              if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
                fVar28 = 0.0;
                if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
                  fVar28 = *(float *)(unaff_x19 + 0x2cc);
                }
                uVar15 = 0;
                fVar28 = fVar21 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                         fStack0000000000000020 *
                         (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                         fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28) +
                         *(float *)(unaff_x19 + 0x4d8);
              }
              else {
                fVar28 = 0.0;
                if (!(bool)(unaff_w28 != 0x2029 & (bVar7 ^ 1U))) {
                  fVar28 = *(float *)(unaff_x19 + 0x2cc);
                }
                uVar15 = 1;
                fVar28 = *(float *)(unaff_x19 + 0x4d8) +
                         *(float *)(unaff_x19 + 0x2c0) +
                         fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28);
              }
              *(float *)(unaff_x19 + 0x4d8) = fVar28;
              *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
              puVar3 = PTR_DAT_04579e70;
              lVar13 = *(long *)PTR_DAT_04579e70;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar13 = *(long *)puVar3;
                iVar8 = *unaff_x21 + 1;
              }
              uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 0x640) =
                   *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
              uVar11 = NEON_rev64(uVar11,4);
              *(float *)(unaff_x19 + 0x4d0) = fVar21;
              *(undefined8 *)(unaff_x19 + 0x4c8) = uVar11;
              *(int *)(unaff_x19 + 0x494) = iVar8;
              goto LAB_03e7bfb0;
            }
            goto LAB_03e7c214;
          }
          goto LAB_03e7bfc0;
        }
        if ((int)unaff_w28 < 0x2028) {
          if (unaff_w28 == 3) {
            if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_03e7bfc0;
            unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
            unaff_w28 = 3;
          }
          else if ((unaff_w28 == 0xb) || (unaff_w28 == 0x2d)) goto LAB_03e7bb3c;
        }
        else if (unaff_w28 - 0x2028 < 2) goto LAB_03e7bb3c;
      }
      if (((uVar4 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
        if ((unaff_w29 == 0) &&
           (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
            if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                 (0x1d < unaff_w28 - 0xa961)) || (uVar12 = FUN_03e90be8(0), (uVar12 & 1) != 0)) &&
               ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                 (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
            goto LAB_03e7b79c;
            lVar13 = FUN_03e90a7c(0);
            if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03e7bfc0;
            uVar9 = FUN_02afbd84(*(long *)(lVar13 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_04579da0)
            ;
            if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
              if (((uStack0000000000000030 | uVar9 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
                FUN_03e821b4();
              }
LAB_03e7bf74:
              uStack0000000000000030 = 0;
              uStack0000000000000028 = 1;
              goto Unity_VisualScripting_Serialization__Serialize;
            }
            lVar13 = FUN_03e90a7c(0);
            if ((lVar13 == 0) || (lVar16 = *in_stack_00000078, lVar16 == 0)) goto LAB_03e7bfc0;
            if (*(uint *)(lVar16 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
            if (*(long *)(lVar13 + 0x18) == 0) goto LAB_03e7bfc0;
            uVar12 = FUN_02afbd84(*(long *)(lVar13 + 0x18),
                                  *(undefined2 *)
                                   (lVar16 + (long)(int)(*unaff_x21 + 1) * (long)iVar17 + 0x20),
                                  *(undefined8 *)PTR_DAT_04579da0);
            if (((uStack0000000000000030 | uVar9 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
            if ((uVar12 & 1) == 0) goto LAB_03e7bf60;
            if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
            if (unaff_w29 != 0) {
              FUN_03e821b4();
            }
            FUN_03e821b4();
            uStack0000000000000028 = 1;
LAB_03e7b988:
            uStack0000000000000030 = 1;
          }
          else {
LAB_03e7b79c:
            if ((uStack0000000000000028 & 1) == 0) {
              if ((uStack0000000000000030 & 1) != 0) {
                if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
                   (unaff_w29 != 0)) {
                  FUN_03e821b4();
                }
                FUN_03e821b4();
                uStack0000000000000028 = 0;
                goto LAB_03e7b988;
              }
              uStack0000000000000028 = 0;
              uStack0000000000000030 = 0;
            }
            else {
              lVar13 = FUN_03e90a7c(0);
              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x10) == 0)) goto LAB_03e7bfc0;
              uVar12 = FUN_02afbd84(*(long *)(lVar13 + 0x10),unaff_w28,
                                    *(undefined8 *)PTR_DAT_04579da0);
              if ((uVar12 & 1) == 0) {
                FUN_03e821b4();
              }
              uStack0000000000000028 = 0;
            }
          }
        }
        else {
          if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_03e7b79c;
          if (((unaff_w28 - 0x2007 < 0x29) &&
              ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((unaff_w28 == 0xa0 || (unaff_w28 == 0x2060)))) goto LAB_03e7b9d0;
          FUN_03e821b4();
          uStack0000000000000028 = 0;
          uStack0000000000000030 = 0;
          in_stack_00000170 = 0xffffffff;
        }
      }
Unity_VisualScripting_Serialization__Serialize:
      *unaff_x21 = *unaff_x21 + 1;
    }
    else {
LAB_03e7b470:
      bVar7 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) {
LAB_03e7b484:
        bVar2 = true;
      }
      else {
        if ((((unaff_w29 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad)
           ) goto LAB_03e7b4c4;
LAB_03e7b4dc:
        bVar2 = false;
      }
      fVar20 = *(float *)(unaff_x19 + 0x360);
      fVar23 = *(float *)(unaff_x19 + 0x640);
      fVar19 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar6 = true;
      if ((fVar20 <= fVar19) && (bVar6 = false, !NAN(fVar20))) {
        bVar6 = fVar20 == -1.0;
      }
      if (!bVar6) {
        fVar19 = fVar20;
      }
      fVar20 = (float)FUN_040cf0d4(&stack0x000000e0,0);
      if (unaff_w26 == 0) {
        fVar21 = unaff_s15;
      }
      fVar22 = 1.0;
      if (!bVar7) {
        fVar22 = DAT_00c926dc;
      }
      fStack000000000000005c = ABS(fVar23) + fVar21 * fVar20 * (1.0 - *(float *)(unaff_x19 + 0x2d4))
      ;
      if ((fStack000000000000005c <= fVar22 * fVar19 || (uVar5 & 1) != 0) ||
         (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
        in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
        if (!bVar2) goto LAB_03e7b658;
        if (*unaff_x23 != 0) {
          memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
          fVar21 = (float)FUN_040cee68(&stack0x00000100,0);
          if (*unaff_x23 != 0) {
            fVar19 = *(float *)(unaff_x19 + 0x640);
            fVar28 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
            fVar28 = unaff_s15 * fVar21 * fVar28;
            fVar21 = fVar28 * (float)(int)(fVar19 / fVar28);
            if (fVar21 <= fVar19) {
              fVar21 = fVar19 + fVar28;
            }
            goto LAB_03e7b75c;
          }
        }
        goto LAB_03e7bfc0;
      }
      unaff_w27 = FUN_03e81e20();
      lVar13 = *(long *)(unaff_x19 + 0x488);
      if (lVar13 == 0) goto LAB_03e7bfc0;
      uVar14 = *(uint *)(unaff_x19 + 0x494);
      in_stack_00000bd8 = uVar14 - 1;
      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000bd8) goto LAB_03e7c214;
      if (((uStack000000000000004c & 1) == 0 &&
           *(short *)(lVar13 + (long)(int)in_stack_00000bd8 * (long)iVar17 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        uStack000000000000004c = 0;
        in_stack_00000bdc = 0x2d;
        *unaff_x21 = in_stack_00000bd8;
        unaff_w27 = unaff_w27 - 1;
      }
      else {
        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_03e7c214;
        if (*(short *)(lVar13 + (long)(int)uVar14 * unaff_x22 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          in_stack_00000bd8 = uVar9;
        }
        else {
          if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
            fVar21 = *(float *)(unaff_x19 + 0x2d4);
            fVar28 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
            if ((fVar21 < fVar28) && (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              fVar20 = fStack000000000000005c;
              if (0.0 < fVar21) {
                fVar20 = fStack000000000000005c / (1.0 - fVar21);
              }
              fVar21 = fVar21 + (fStack000000000000005c - fVar22 * (fVar19 + DAT_00c928e4)) / fVar20
              ;
              if (fVar28 <= fVar21) {
                fVar21 = fVar28;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar21;
LAB_03e7c098:
              if (DAT_0482ee9c == '\0') {
                thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
                DAT_0482ee9c = '\x01';
              }
              return **(float **)
                       (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8);
            }
            if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
               (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
              fVar21 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar21 <= DAT_00c92764) {
                fVar21 = DAT_00c92764;
              }
              fVar21 = *in_stack_00000010 - fVar21;
              *in_stack_00000010 = fVar21;
              fVar28 = fVar21 * 20.0 + 0.5;
              fVar21 = DAT_00c92a58;
              if (fVar28 != INFINITY) {
                fVar21 = (float)(int)fVar28 / 20.0;
              }
              if (fVar21 <= *(float *)(unaff_x19 + 0x250)) {
                fVar21 = *(float *)(unaff_x19 + 0x250);
              }
              *in_stack_00000010 = fVar21;
              goto LAB_03e7c098;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar21 = *(float *)(unaff_x19 + 0x4c8);
            fVar28 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) ==
                0) {
              thunk_FUN_01ee6d7c();
            }
            fVar21 = fVar21 - fVar28;
            if (((fStack000000000000001c < ABS(fVar21)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
               && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
              *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar21;
              *(float *)(unaff_x19 + 0x4d8) = fVar21 + *(float *)(unaff_x19 + 0x4d8);
            }
          }
          fVar19 = *(float *)(unaff_x19 + 0x640);
          fVar28 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
          fVar21 = *(float *)(unaff_x19 + 0x4c4);
          if (fVar28 <= *(float *)(unaff_x19 + 0x4c4)) {
            fVar21 = fVar28;
          }
          *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
          *(float *)(unaff_x19 + 0x4c4) = fVar21;
          *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
          if ((uVar4 & 0x100000000) == 0) {
            fVar28 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar28;
            if (fStack0000000000000038 <= fVar28) {
              fStack0000000000000038 = fVar28;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar21;
          }
          FUN_03e821b4();
          lVar13 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar13 == 0) goto LAB_03e7bfc0;
          if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
          fVar21 = *(float *)(unaff_x19 + 0x2c0);
          fVar28 = *(float *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
          bVar7 = fVar21 != DAT_00c927ac;
          if (bVar7) {
            fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar20 = fVar28 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar7;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar21 + fVar20;
          puVar3 = PTR_DAT_04579e70;
          lVar13 = *(long *)PTR_DAT_04579e70;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar13 = *(long *)puVar3;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar19;
          uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
          uVar11 = NEON_rev64(uVar11,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar28;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar11;
          uStack0000000000000030 = 1;
          in_stack_00000bd8 = uVar9;
        }
      }
    }
LAB_03e7bfb0:
    do {
      lVar13 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar13 == 0) goto LAB_03e7bfc0;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)unaff_w27) {
LAB_03e7bfc4:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
             ((_uStack0000000000000018 & 1) == 0)) ||
            (fVar21 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar21)) ||
           (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
          fVar21 = *(float *)(unaff_x19 + 0x340);
          fVar28 = *(float *)(unaff_x19 + 0x348);
          if (fVar21 <= 0.0) {
            fVar21 = 0.0;
          }
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          *(undefined1 *)(unaff_x19 + 0x24c) = 1;
          fVar28 = (fStack000000000000006c + fVar21 + fVar28) * 100.0 + 1.0;
          fVar21 = DAT_00c92378;
          if (fVar28 != INFINITY) {
            fVar21 = (float)(int)fVar28 / 100.0;
          }
          *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
          return fVar21;
        }
        if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
          *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
          fVar21 = *in_stack_00000010;
        }
        *(float *)(unaff_x19 + 0x240) = fVar21;
        fVar21 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
        if (fVar21 <= DAT_00c92764) {
          fVar21 = DAT_00c92764;
        }
        fVar21 = *in_stack_00000010 + fVar21;
        *in_stack_00000010 = fVar21;
        fVar28 = fVar21 * 20.0 + 0.5;
        fVar21 = DAT_00c92a58;
        if (fVar28 != INFINITY) {
          fVar21 = (float)(int)fVar28 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar21) {
          fVar21 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar21;
        goto LAB_03e7c098;
      }
      if (*(uint *)(lVar13 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      unaff_w28 = *(uint *)(lVar13 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_03e7bfc4;
      if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
        *(undefined1 *)(unaff_x19 + 0x431) = 1;
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        uVar12 = FUN_03e7c218();
        if (((uVar12 & 1) != 0) &&
           (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0))
        goto LAB_03e7bfb0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
        lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar13 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar13 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar13 + 0x38);
        thunk_FUN_01f51358();
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      uVar9 = *unaff_x21;
      if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
      lVar16 = (long)(int)uVar9;
      unaff_w20 = (uint)*(byte *)(lVar13 + lVar16 * unaff_x22 + 0x5c);
      *(undefined1 *)(unaff_x19 + 0x431) = 0;
      uVar1 = *(undefined4 *)(unaff_x19 + 0x120);
      if (in_stack_00000bd8 == uVar9) {
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        if (in_stack_00000bdc == 0x2026) {
          lVar13 = *in_stack_00000078;
          if (lVar13 != 0) {
            if (uVar9 < *(uint *)(lVar13 + 0x18)) {
              *(undefined8 *)(lVar13 + lVar16 * unaff_x22 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x650);
              thunk_FUN_01f51358();
              lVar13 = *in_stack_00000078;
              if (lVar13 != 0) {
                if (*unaff_x21 < *(uint *)(lVar13 + 0x18)) {
                  lVar13 = lVar13 + (long)(int)*unaff_x21 * unaff_x22;
                  *(undefined4 *)(lVar13 + 0x2c) = 0;
                  *(undefined8 *)(lVar13 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                  thunk_FUN_01f51358();
                  lVar13 = *(long *)(unaff_x19 + 0x488);
                  if (lVar13 != 0) {
                    if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar13 + 0x18)) {
                      *(undefined8 *)
                       (lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      thunk_FUN_01f51358();
                      lVar13 = *in_stack_00000078;
                      if (lVar13 != 0) {
                        uVar9 = *unaff_x21;
                        if (uVar9 < *(uint *)(lVar13 + 0x18)) {
                          bVar7 = true;
                          in_stack_00000bd8 = uVar9 + 1;
                          *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x58) =
                               *(undefined4 *)(unaff_x19 + 0x668);
                          unaff_w28 = 0x2026;
                          *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                          in_stack_00000bdc = 3;
                          goto LAB_03e7a8f4;
                        }
                        goto LAB_03e7c214;
                      }
                      goto LAB_03e7bfc0;
                    }
                    goto LAB_03e7c214;
                  }
                  goto LAB_03e7bfc0;
                }
                goto LAB_03e7c214;
              }
              goto LAB_03e7bfc0;
            }
            goto LAB_03e7c214;
          }
          goto LAB_03e7bfc0;
        }
        if (in_stack_00000bdc != 3) {
          bVar7 = true;
          unaff_w28 = in_stack_00000bdc;
          goto LAB_03e7a8f4;
        }
        lVar13 = *in_stack_00000078;
        if (((lVar13 == 0) || (*unaff_x23 == 0)) ||
           (lVar10 = FUN_03e5d25c(*unaff_x23,0), lVar10 == 0)) goto LAB_03e7bfc0;
        uVar11 = FUN_02bd6170(lVar10,3,*(undefined8 *)PTR_DAT_04579db0);
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
        *(undefined8 *)(lVar13 + lVar16 * unaff_x22 + 0x30) = uVar11;
        thunk_FUN_01f51358();
        bVar7 = true;
        unaff_w28 = 3;
        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      }
      else {
        bVar7 = false;
LAB_03e7a8f4:
        if ((unaff_w28 != 3) && ((int)uVar9 < *(int *)(unaff_x19 + 0x324))) {
          lVar13 = *in_stack_00000078;
          if (lVar13 == 0) goto LAB_03e7bfc0;
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
          lVar13 = lVar13 + (long)(int)uVar9 * (long)iVar17;
          *(undefined1 *)(lVar13 + 0x194) = 0;
          *(undefined2 *)(lVar13 + 0x20) = 0x200b;
          *(undefined4 *)(lVar13 + 100) = 0;
          *unaff_x21 = uVar9 + 1;
          goto LAB_03e7bfb0;
        }
      }
      iVar8 = *(int *)(unaff_x19 + 0x644);
      if (iVar8 == 0) {
        uVar9 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar9 >> 4 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            fStack0000000000000068 = 1.0;
            if ((uVar9 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar12 = FUN_034fc51c(unaff_w28,0);
              fStack0000000000000068 = 1.0;
              if ((uVar12 & 1) != 0) {
                if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar9 = FUN_034fc7fc(unaff_w28,0);
                fStack0000000000000068 = in_stack_00000008._4_4_;
                goto LAB_03e7ac68;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar12 = FUN_034fc460(unaff_w28,0);
            fStack0000000000000068 = 1.0;
            if ((uVar12 & 1) != 0) {
              if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar9 = FUN_034fc974(unaff_w28,0);
              goto LAB_03e7ac68;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar12 = FUN_034fc51c(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar12 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_034fc7fc(unaff_w28,0);
LAB_03e7ac68:
            unaff_w28 = uVar9 & 0xffff;
          }
        }
        iVar8 = *(int *)(unaff_x19 + 0x644);
      }
      else {
        fStack0000000000000068 = 1.0;
      }
      if (iVar8 != 0) {
        if (iVar8 != 1) {
          unaff_w26 = (uint)(unaff_w28 == 0xad);
          lVar13 = *in_stack_00000078;
          unaff_s8 = 0.0;
          unaff_s14 = 0.0;
          if (unaff_w28 != 0xad && unaff_w28 != 3) {
            unaff_s14 = unaff_s15;
          }
          if (lVar13 == 0) goto LAB_03e7bfc0;
          uVar9 = *unaff_x21;
          unaff_s9 = 0.0;
          goto LAB_03e7afbc;
        }
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
        thunk_FUN_01f51358(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0))
        goto LAB_03e7bfc0;
        if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar13 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar13 == 0)) goto LAB_03e7bfc0;
        lVar13 = FUN_030f28e4(lVar13,*(undefined4 *)(unaff_x19 + 0x6a4),
                              *(undefined8 *)PTR_DAT_04579db8);
        if (lVar13 != 0) {
          if (unaff_w28 == 0x3c) {
            unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
          }
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar8 = FUN_040ced70(&stack0x00000100,0);
          fVar21 = *(float *)(unaff_x19 + 0x1e8);
          if (iVar8 < 1) {
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            iVar8 = FUN_040ced70(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar19 = (float)FUN_040ced80(&stack0x00000100,0);
            fVar28 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar28 = 1.0;
            }
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
            fVar20 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
            FUN_040cf28c(&stack0x00000be0,*(long *)(lVar13 + 0x20),0);
            in_stack_000000c0 = in_stack_00000be0;
            in_stack_000000c8 = in_stack_00000be8;
            in_stack_000000d0 = in_stack_00000bf0;
            fVar23 = (float)FUN_040cf0bc(&stack0x000000c0,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
            fVar30 = *(float *)(lVar13 + 0x2c);
            fVar22 = (float)FUN_040cf2c8(*(long *)(lVar13 + 0x20),0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar18 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            fVar28 = (fVar21 / (float)iVar8) * fVar19 * fVar28;
            unaff_s15 = fVar28 * (fVar20 / fVar23) * fVar30 * fVar22;
            fVar28 = fVar28 / unaff_s15;
            unaff_s8 = fVar28 * fVar18;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar21 = (float)FUN_040cede0(&stack0x00000100,0);
            unaff_s9 = fVar28 * fVar21;
          }
          else {
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            iVar8 = FUN_040ced70(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar28 = (float)FUN_040ced80(&stack0x00000100,0);
            if (*(long *)(lVar13 + 0x20) == 0) goto LAB_03e7bfc0;
            fVar20 = *(float *)(lVar13 + 0x2c);
            fVar19 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar19 = 1.0;
            }
            fVar23 = (float)FUN_040cf2c8(*(long *)(lVar13 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
            unaff_s8 = (float)FUN_040ceda0(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
            unaff_s15 = (fVar21 / (float)iVar8) * fVar28 * fVar19 * fVar20 * fVar23;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            unaff_s9 = (float)FUN_040cede0(&stack0x00000100,0);
          }
          *unaff_x25 = lVar13;
          thunk_FUN_01f51358();
          lVar13 = *in_stack_00000078;
          if (lVar13 == 0) goto LAB_03e7bfc0;
          uVar9 = *unaff_x21;
          if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
          lVar16 = lVar13 + (long)(int)uVar9 * unaff_x22;
          *(undefined4 *)(lVar16 + 0x2c) = 1;
          *(float *)(lVar16 + 0x160) = unaff_s15;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar1;
          goto LAB_03e7afa0;
        }
        goto LAB_03e7bfb0;
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar13 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *unaff_x25 = *(long *)(lVar13 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
      thunk_FUN_01f51358();
    } while (*unaff_x25 == 0);
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
    uVar14 = *unaff_x21;
    uVar9 = *(uint *)(lVar13 + 0x18);
    if (uVar9 <= uVar14) goto LAB_03e7c214;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar13 + (long)(int)uVar14 * unaff_x22 + 0x58);
    if (bVar7) {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      if (lVar16 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto LAB_03e7c214;
      if ((*(int *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x498))) goto LAB_03e7ad14;
      if (uVar9 <= uVar14 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = *(float *)(lVar13 + (long)(int)(uVar14 - 1) * (long)iVar17 + 0x60);
      iVar8 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar13 = *unaff_x23;
    }
    else {
LAB_03e7ad14:
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar21 = *(float *)(unaff_x19 + 0x1e8);
      iVar8 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar13 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar13 == 0) goto LAB_03e7bfc0;
    fVar19 = (float)FUN_040ced80(lVar13 + 0x50,0);
    fVar28 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar28 = 1.0;
    }
    unaff_s9 = 0.0;
    unaff_s8 = 0.0;
    if (!(bool)(bVar7 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      unaff_s8 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      unaff_s9 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(unaff_x19 + 0x488), lVar13 == 0))
    goto LAB_03e7bfc0;
    uVar9 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
    unaff_s15 = ((fStack0000000000000068 * fVar21) / (float)iVar8) * fVar19 * fVar28 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar13 + (long)(int)uVar9 * unaff_x22 + 0x2c) = 0;
LAB_03e7afa0:
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    unaff_s14 = 0.0;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
LAB_03e7afbc:
    if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_03e7c214;
    *(short *)(lVar13 + (long)(int)uVar9 * (long)iVar17 + 0x20) = (short)unaff_w28;
    if ((*unaff_x25 == 0) || (lVar13 = *(long *)(*unaff_x25 + 0x20), lVar13 == 0))
    goto LAB_03e7bfc0;
    FUN_040cf28c(&stack0x00000be0,lVar13,0);
    in_stack_000000e0 = in_stack_00000be0;
    in_stack_000000e8 = in_stack_00000be8;
    in_stack_000000f0 = in_stack_00000bf0;
    if ((int)unaff_w28 < 0x10000) {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar9 = FUN_034f9bb4(unaff_w28,0);
      unaff_w29 = uVar9 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) != '\0') break;
    fStack0000000000000060 = 0.0;
    unaff_d10 = 0;
    fVar21 = unaff_s15;
    unaff_s15 = unaff_s14;
    uVar9 = in_stack_00000bd8;
  } while( true );
  if (*unaff_x25 == 0) goto LAB_03e7bfc0;
  uVar14 = *unaff_x21;
  uVar9 = *(uint *)(*unaff_x25 + 0x28);
  if ((int)uVar14 < (int)uStack0000000000000070) {
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
    if (*(uint *)(lVar13 + 0x18) <= uVar14 + 1) goto LAB_03e7c214;
    lVar13 = *(long *)(lVar13 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
    if ((((lVar13 == 0) || (*unaff_x23 == 0)) ||
        (lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0)) ||
       (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto LAB_03e7bfc0;
    uVar12 = FUN_02bd799c(lVar16,uVar9 | *(int *)(lVar13 + 0x28) << 0x10,&stack0x000000b8,
                          *(undefined8 *)PTR_DAT_04579da8);
    uVar26 = 0;
    if ((uVar12 & 1) == 0) {
      uVar27 = 0;
      uVar25 = 0;
      uVar29 = 0;
    }
    else {
      if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
      uVar26 = *(uint *)(in_stack_000000b8 + 0x14);
      uVar27 = *(uint *)(in_stack_000000b8 + 0x18);
      uVar25 = *(uint *)(in_stack_000000b8 + 0x1c);
      uVar29 = *(uint *)(in_stack_000000b8 + 0x20);
      if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
        fStack0000000000000074 = 0.0;
      }
    }
    uVar14 = *unaff_x21;
  }
  else {
    uVar26 = 0;
    uVar27 = 0;
    uVar25 = 0;
    uVar29 = 0;
  }
  fStack0000000000000060 = 0.0;
  unaff_d13 = (ulong)uVar29;
  unaff_d12 = (ulong)uVar27;
  unaff_d11 = (ulong)uVar26;
  unaff_d10 = (ulong)uVar25;
  if (0 < (int)uVar14) goto code_r0x03e7b148;
  goto LAB_03e7b1fc;
code_r0x03e7b148:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar13 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar13 == 0)) goto LAB_03e7bfc0;
  if (*(uint *)(lVar13 + 0x18) <= uVar14 - 1) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
  lVar13 = *(long *)(lVar13 + (ulong)(uVar14 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
  if (((lVar13 == 0) || (*unaff_x23 == 0)) ||
     ((lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0 ||
      (param_1 = *(long *)(lVar16 + 0x18), param_1 == 0)))) goto LAB_03e7bfc0;
  param_3 = &stack0x000000b8;
  param_2 = (ulong)(*(uint *)(lVar13 + 0x28) | uVar9 << 0x10);
  param_4 = *(undefined8 *)PTR_DAT_04579da8;
  goto code_r0x03e7b1a0;
}


