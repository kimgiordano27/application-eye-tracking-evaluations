/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterSerialize
ENTRY_POINT: 036e6204
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


float Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterSerialize(float param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
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
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  float unaff_s13;
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
  
  uVar4 = in_stack_00000040;
  uVar3 = _uStack0000000000000030;
  fStack0000000000000060 = param_1;
code_r0x036e6204:
  uVar13 = 0;
  fVar21 = unaff_s15;
  unaff_s15 = unaff_s14;
  uVar8 = in_stack_00000bd8;
  do {
    fVar28 = *(float *)(unaff_x19 + 0x2b0);
    if (fVar28 != 0.0) {
      if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0))
      goto LAB_036e70c0;
      FUN_0396b140(&stack0x00000be0,lVar12,0);
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar19 = (float)FUN_0396af68(&stack0x000000c0,0);
      if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0))
      goto LAB_036e70c0;
      FUN_0396b140(&stack0x00000be0,lVar12,0);
      in_stack_000000c0 = in_stack_00000be0;
      in_stack_000000c8 = in_stack_00000be8;
      in_stack_000000d0 = in_stack_00000bf0;
      fVar20 = (float)FUN_0396af78(&stack0x000000c0,0);
      fStack0000000000000060 =
           (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
           (fVar28 * 0.5 - unaff_s15 * (fVar19 * 0.5 + fVar20));
      *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
    }
    iVar17 = *(int *)(unaff_x19 + 0x644);
    fVar28 = 0.0;
    if (((unaff_w20 == 0) && (fVar28 = 0.0, iVar17 == 0)) &&
       ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
      if (*unaff_x23 == 0) goto LAB_036e70c0;
      fVar28 = *(float *)(*unaff_x23 + 0x1b4);
    }
    lVar12 = *in_stack_00000078;
    if (lVar12 == 0) goto LAB_036e70c0;
    uVar14 = *unaff_x21;
    lVar16 = (long)(int)uVar14;
    if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_036e7314;
    fVar19 = *(float *)(unaff_x19 + 0x4d8);
    fVar20 = *(float *)(unaff_x19 + 0x61c);
    fVar23 = unaff_s8 * unaff_s15;
    *(float *)(lVar12 + lVar16 * unaff_x22 + 0x14c) = (unaff_s13 - fVar19) + fVar20;
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
      lVar12 = lVar12 + lVar16 * unaff_x22;
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
      *(float *)(lVar12 + 0x154) = fVar30;
      *(float *)(lVar12 + 0x158) = fVar18;
      *(float *)(lVar12 + 0x148) = fVar23 - fVar19;
      *(float *)(unaff_x19 + 0x4c0) = fVar23 - fVar19;
      *(float *)(lVar12 + 0x150) = fVar22 - fVar19;
      *(float *)(unaff_x19 + 0x4c4) = fVar22 - fVar19;
      if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
        *(float *)(unaff_x19 + 0x4b8) = fVar20;
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_036e70c0;
        fVar20 = *(float *)(unaff_x19 + 0x4bc);
        fVar19 = (float)FUN_0396ac64(*(long *)(unaff_x19 + 0x100) + 0x50,0);
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
      lVar12 = lVar12 + lVar16 * unaff_x22;
      *(float *)(lVar12 + 0x154) = fVar20;
      fVar22 = *(float *)(unaff_x19 + 0x4cc);
      fVar20 = fVar20 - fVar19;
      *(float *)(lVar12 + 0x148) = fVar20;
      *(float *)(lVar12 + 0x158) = fVar22;
      *(float *)(unaff_x19 + 0x4c0) = fVar20;
      fVar22 = fVar22 - fVar19;
      *(float *)(lVar12 + 0x150) = fVar22;
      *(float *)(unaff_x19 + 0x4c4) = fVar22;
    }
    iVar17 = (int)unaff_x22;
    in_stack_00000bd8 = uVar8;
    if (fVar19 == 0.0) {
      if ((unaff_w29 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fVar19 = *(float *)(unaff_x19 + 0x4b4);
        if (*(float *)(unaff_x19 + 0x4b4) <= fVar23) {
          fVar19 = fVar23;
        }
        *(float *)(unaff_x19 + 0x4b4) = fVar19;
        goto LAB_036e6570;
      }
      bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) goto LAB_036e6584;
LAB_036e65c4:
      if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
         (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_036e65dc;
LAB_036e6758:
      fVar21 = *(float *)(unaff_x19 + 0x640);
      if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
        fVar19 = (float)FUN_0396af88(&stack0x000000e0,0);
        if (*unaff_x23 == 0) goto LAB_036e70c0;
        fVar28 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (*(float *)(unaff_x19 + 0x2ac) +
                 unaff_s15 * ((float)uVar13 + fVar19) +
                 fStack0000000000000058 *
                 (fVar28 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
      }
      else {
        if (*unaff_x23 == 0) goto LAB_036e70c0;
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
LAB_036e685c:
        bVar6 = false;
        *(float *)(unaff_x19 + 0x640) = fVar21;
LAB_036e6864:
        if (*unaff_x21 == uStack0000000000000070) goto LAB_036e6920;
      }
      else {
        bVar6 = unaff_w28 == 10;
        if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
           (1 < unaff_w28 - 0x2028)) goto LAB_036e6864;
LAB_036e6920:
        if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
          fVar21 = *(float *)(unaff_x19 + 0x4c8);
          fVar28 = *(float *)(unaff_x19 + 0x4d0);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
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
          fStack000000000000006c = unaff_s13;
          fStack0000000000000064 = fVar21;
        }
        fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
        *(undefined1 *)(unaff_x19 + 0x33c) = 0;
        if (bVar6) {
LAB_036e6c3c:
          FUN_036ed2b4();
          FUN_036ed2b4();
          uVar8 = *(uint *)(unaff_x19 + 0x494);
          lVar12 = *(long *)(unaff_x19 + 0x488);
          iVar7 = uVar8 + 1;
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          *(int *)(unaff_x19 + 0x498) = iVar7;
          if (lVar12 == 0) goto LAB_036e70c0;
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
          fVar21 = *(float *)(lVar12 + (long)(int)uVar8 * unaff_x22 + 0x154);
          if (*(float *)(unaff_x19 + 0x2c0) == DAT_00b55468) {
            fVar28 = 0.0;
            if (!(bool)(unaff_w28 != 0x2029 & (bVar6 ^ 1U))) {
              fVar28 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar15 = 0;
            fVar28 = fVar21 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
                     + fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28) +
                     *(float *)(unaff_x19 + 0x4d8);
          }
          else {
            fVar28 = 0.0;
            if (!(bool)(unaff_w28 != 0x2029 & (bVar6 ^ 1U))) {
              fVar28 = *(float *)(unaff_x19 + 0x2cc);
            }
            uVar15 = 1;
            fVar28 = *(float *)(unaff_x19 + 0x4d8) +
                     *(float *)(unaff_x19 + 0x2c0) +
                     fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar28);
          }
          *(float *)(unaff_x19 + 0x4d8) = fVar28;
          *(undefined1 *)(unaff_x19 + 0x2c4) = uVar15;
          puVar2 = PTR_DAT_03d9c920;
          lVar12 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *(long *)puVar2;
            iVar7 = *unaff_x21 + 1;
          }
          uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) =
               *(float *)(unaff_x19 + 0x408) + unaff_s13 + *(float *)(unaff_x19 + 0x40c);
          uVar10 = NEON_rev64(uVar10,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar21;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar10;
          *(int *)(unaff_x19 + 0x494) = iVar7;
          goto LAB_036e70b0;
        }
        if ((int)unaff_w28 < 0x2028) {
          if (unaff_w28 == 3) {
            if (*(long *)(unaff_x19 + 0x478) == 0) goto LAB_036e70c0;
            unaff_w27 = *(uint *)(*(long *)(unaff_x19 + 0x478) + 0x18);
            unaff_w28 = 3;
          }
          else if ((unaff_w28 == 0xb) || (unaff_w28 == 0x2d)) goto LAB_036e6c3c;
        }
        else if (unaff_w28 - 0x2028 < 2) goto LAB_036e6c3c;
      }
      if (((uVar3 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
        if ((unaff_w29 == 0) &&
           (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
          if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_036e6ad0:
            if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                 (0x1d < unaff_w28 - 0xa961)) || (uVar13 = FUN_036fbce8(0), (uVar13 & 1) != 0)) &&
               ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                 (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
            goto LAB_036e689c;
            lVar12 = FUN_036fbb7c(0);
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_036e70c0;
            uVar8 = FUN_0254f914(*(long *)(lVar12 + 0x10),unaff_w28,*(undefined8 *)PTR_DAT_03d9c860)
            ;
            if ((int)uStack0000000000000070 <= (int)*unaff_x21) {
              if (((uStack0000000000000030 | uVar8 ^ 0xffffffff) & 1) != 0) {
LAB_036e7060:
                FUN_036ed2b4();
              }
              goto LAB_036e7074;
            }
            lVar12 = FUN_036fbb7c(0);
            if ((lVar12 == 0) || (lVar16 = *in_stack_00000078, lVar16 == 0)) goto LAB_036e70c0;
            if (*(uint *)(lVar16 + 0x18) <= *unaff_x21 + 1) goto LAB_036e7314;
            if (*(long *)(lVar12 + 0x18) == 0) goto LAB_036e70c0;
            uVar13 = FUN_0254f914(*(long *)(lVar12 + 0x18),
                                  *(undefined2 *)
                                   (lVar16 + (long)(int)(*unaff_x21 + 1) * (long)iVar17 + 0x20),
                                  *(undefined8 *)PTR_DAT_03d9c860);
            if (((uStack0000000000000030 | uVar8 ^ 0xffffffff) & 1) == 0) {
LAB_036e7074:
              uStack0000000000000030 = 0;
              uStack0000000000000028 = 1;
              goto LAB_036e70a4;
            }
            if ((uVar13 & 1) == 0) goto LAB_036e7060;
            if ((uStack0000000000000030 & 1) == 0) goto LAB_036e7074;
            if (unaff_w29 != 0) {
              FUN_036ed2b4();
            }
            FUN_036ed2b4();
            uStack0000000000000028 = 1;
LAB_036e6a88:
            uStack0000000000000030 = 1;
          }
          else {
LAB_036e689c:
            if ((uStack0000000000000028 & 1) == 0) {
              if ((uStack0000000000000030 & 1) != 0) {
                if ((((uStack000000000000004c | unaff_w26 ^ 0xffffffff) & 1) == 0) ||
                   (unaff_w29 != 0)) {
                  FUN_036ed2b4();
                }
                FUN_036ed2b4();
                uStack0000000000000028 = 0;
                goto LAB_036e6a88;
              }
              uStack0000000000000028 = 0;
              uStack0000000000000030 = 0;
            }
            else {
              lVar12 = FUN_036fbb7c(0);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_036e70c0;
              uVar13 = FUN_0254f914(*(long *)(lVar12 + 0x10),unaff_w28,
                                    *(undefined8 *)PTR_DAT_03d9c860);
              if ((uVar13 & 1) == 0) {
                FUN_036ed2b4();
              }
              uStack0000000000000028 = 0;
            }
          }
        }
        else {
          if (*(char *)(unaff_x19 + 0x2da) != '\0') goto LAB_036e689c;
          if (((unaff_w28 - 0x2007 < 0x29) &&
              ((1L << ((ulong)(unaff_w28 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
             ((unaff_w28 == 0xa0 || (unaff_w28 == 0x2060)))) goto LAB_036e6ad0;
          FUN_036ed2b4();
          uStack0000000000000028 = 0;
          uStack0000000000000030 = 0;
          in_stack_00000170 = 0xffffffff;
        }
      }
LAB_036e70a4:
      *unaff_x21 = *unaff_x21 + 1;
    }
    else {
LAB_036e6570:
      bVar6 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
      if (unaff_w28 == 9) {
LAB_036e6584:
        bVar1 = true;
      }
      else {
        if ((((unaff_w29 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) || (unaff_w28 == 0xad)
           ) goto LAB_036e65c4;
LAB_036e65dc:
        bVar1 = false;
      }
      fVar20 = *(float *)(unaff_x19 + 0x360);
      fVar23 = *(float *)(unaff_x19 + 0x640);
      fVar19 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
               *(float *)(unaff_x19 + 0x354);
      bVar5 = true;
      if ((fVar20 <= fVar19) && (bVar5 = false, !NAN(fVar20))) {
        bVar5 = fVar20 == -1.0;
      }
      if (!bVar5) {
        fVar19 = fVar20;
      }
      fVar20 = (float)FUN_0396af88(&stack0x000000e0,0);
      if (unaff_w26 == 0) {
        fVar21 = unaff_s15;
      }
      fVar22 = 1.0;
      if (!bVar6) {
        fVar22 = DAT_00b55374;
      }
      fStack000000000000005c = ABS(fVar23) + fVar21 * fVar20 * (1.0 - *(float *)(unaff_x19 + 0x2d4))
      ;
      if ((fStack000000000000005c <= fVar22 * fVar19 || (uVar4 & 1) != 0) ||
         (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
        fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
        in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
        if (!bVar1) goto LAB_036e6758;
        if (*unaff_x23 == 0) goto LAB_036e70c0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar21 = (float)FUN_0396ad1c(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_036e70c0;
        fVar19 = *(float *)(unaff_x19 + 0x640);
        fVar28 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
        fVar28 = unaff_s15 * fVar21 * fVar28;
        fVar21 = fVar28 * (float)(int)(fVar19 / fVar28);
        if (fVar21 <= fVar19) {
          fVar21 = fVar19 + fVar28;
        }
        goto LAB_036e685c;
      }
      unaff_w27 = FUN_036ecf20();
      lVar12 = *(long *)(unaff_x19 + 0x488);
      if (lVar12 == 0) goto LAB_036e70c0;
      uVar14 = *(uint *)(unaff_x19 + 0x494);
      in_stack_00000bd8 = uVar14 - 1;
      if (*(uint *)(lVar12 + 0x18) <= in_stack_00000bd8) goto LAB_036e7314;
      if (((uStack000000000000004c & 1) == 0 &&
           *(short *)(lVar12 + (long)(int)in_stack_00000bd8 * (long)iVar17 + 0x20) == 0xad) &&
         (*(int *)(unaff_x19 + 0x2e0) == 0)) {
        uStack000000000000004c = 0;
        in_stack_00000bdc = 0x2d;
        *unaff_x21 = in_stack_00000bd8;
        unaff_w27 = unaff_w27 - 1;
      }
      else {
        if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_036e7314;
        if (*(short *)(lVar12 + (long)(int)uVar14 * unaff_x22 + 0x20) == 0xad) {
          uStack000000000000004c = 1;
          in_stack_00000bd8 = uVar8;
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
              fVar21 = fVar21 + (fStack000000000000005c - fVar22 * (fVar19 + DAT_00b5556c)) / fVar20
              ;
              if (fVar28 <= fVar21) {
                fVar21 = fVar28;
              }
              *(float *)(unaff_x19 + 0x2d4) = fVar21;
LAB_036e7198:
              if (DAT_03fed2da == '\0') {
                thunk_FUN_01ad9084(
                                  Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                                  );
                DAT_03fed2da = '\x01';
              }
              return **(float **)
                       (*(long *)Method_Unity_VisualScripting_RightShiftHandler_<>c_<_ctor>b__0_32__
                       + 0xb8);
            }
            if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
               (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
              *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
              fVar21 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
              if (fVar21 <= DAT_00b55428) {
                fVar21 = DAT_00b55428;
              }
              fVar21 = *in_stack_00000010 - fVar21;
              *in_stack_00000010 = fVar21;
              fVar28 = fVar21 * 20.0 + 0.5;
              fVar21 = DAT_00b556b4;
              if (fVar28 != INFINITY) {
                fVar21 = (float)(int)fVar28 / 20.0;
              }
              if (fVar21 <= *(float *)(unaff_x19 + 0x250)) {
                fVar21 = *(float *)(unaff_x19 + 0x250);
              }
              *in_stack_00000010 = fVar21;
              goto LAB_036e7198;
            }
          }
          if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
            fVar21 = *(float *)(unaff_x19 + 0x4c8);
            fVar28 = *(float *)(unaff_x19 + 0x4d0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
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
          if ((uVar3 & 0x100000000) == 0) {
            fVar28 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar28;
            if (fStack0000000000000038 <= fVar28) {
              fStack0000000000000038 = fVar28;
            }
          }
          else {
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar21;
          }
          FUN_036ed2b4();
          lVar12 = *(long *)(unaff_x19 + 0x488);
          *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
          if (lVar12 == 0) goto LAB_036e70c0;
          if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_036e7314;
          fVar21 = *(float *)(unaff_x19 + 0x2c0);
          fVar28 = *(float *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x154);
          bVar6 = fVar21 != DAT_00b55468;
          if (bVar6) {
            fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          else {
            fVar20 = fVar28 + (unaff_s13 - *(float *)(unaff_x19 + 0x4cc)) +
                     fStack0000000000000020 * (fStack0000000000000024 + *(float *)(unaff_x19 + 700))
            ;
            fVar21 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
          }
          *(bool *)(unaff_x19 + 0x2c4) = bVar6;
          *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar21 + fVar20;
          puVar2 = PTR_DAT_03d9c920;
          lVar12 = *(long *)PTR_DAT_03d9c920;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *(long *)puVar2;
          }
          uStack000000000000004c = 0;
          fStack000000000000006c = fStack000000000000006c + fVar19;
          uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + unaff_s13;
          uVar10 = NEON_rev64(uVar10,4);
          *(float *)(unaff_x19 + 0x4d0) = fVar28;
          *(undefined8 *)(unaff_x19 + 0x4c8) = uVar10;
          uStack0000000000000030 = 1;
          in_stack_00000bd8 = uVar8;
        }
      }
    }
LAB_036e70b0:
    do {
      lVar12 = *(long *)(unaff_x19 + 0x478);
      unaff_w27 = unaff_w27 + 1;
      if (lVar12 == 0) goto LAB_036e70c0;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)unaff_w27) {
LAB_036e70c4:
        if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00b552b8) ||
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
          fVar21 = DAT_00b550d0;
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
        if (fVar21 <= DAT_00b55428) {
          fVar21 = DAT_00b55428;
        }
        fVar21 = *in_stack_00000010 + fVar21;
        *in_stack_00000010 = fVar21;
        fVar28 = fVar21 * 20.0 + 0.5;
        fVar21 = DAT_00b556b4;
        if (fVar28 != INFINITY) {
          fVar21 = (float)(int)fVar28 / 20.0;
        }
        if (*(float *)(unaff_x19 + 0x254) <= fVar21) {
          fVar21 = *(float *)(unaff_x19 + 0x254);
        }
        *in_stack_00000010 = fVar21;
        goto LAB_036e7198;
      }
      if (*(uint *)(lVar12 + 0x18) <= unaff_w27) goto LAB_036e7314;
      unaff_w28 = *(uint *)(lVar12 + (long)(int)unaff_w27 * 0xc + 0x20);
      if (unaff_w28 == 0) goto LAB_036e70c4;
      if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
        *(undefined1 *)(unaff_x19 + 0x431) = 1;
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        uVar13 = FUN_036e7318();
        if (((uVar13 & 1) != 0) &&
           (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0))
        goto LAB_036e70b0;
      }
      else {
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0))
        goto LAB_036e70c0;
        if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto LAB_036e7314;
        lVar12 = lVar12 + (long)(int)*unaff_x21 * unaff_x22;
        *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar12 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar12 + 0x58);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar12 + 0x38);
        thunk_FUN_01b4f09c();
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_036e70c0;
      uVar8 = *unaff_x21;
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
      lVar16 = (long)(int)uVar8;
      unaff_w20 = (uint)*(byte *)(lVar12 + lVar16 * unaff_x22 + 0x5c);
      *(undefined1 *)(unaff_x19 + 0x431) = 0;
      uVar26 = *(undefined4 *)(unaff_x19 + 0x120);
      if (in_stack_00000bd8 == uVar8) {
        *(undefined4 *)(unaff_x19 + 0x644) = 0;
        if (in_stack_00000bdc == 0x2026) {
          lVar12 = *in_stack_00000078;
          if (lVar12 != 0) {
            if (uVar8 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + lVar16 * unaff_x22 + 0x30) =
                   *(undefined8 *)(unaff_x19 + 0x650);
              thunk_FUN_01b4f09c();
              lVar12 = *in_stack_00000078;
              if (lVar12 != 0) {
                if (*unaff_x21 < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)*unaff_x21 * unaff_x22;
                  *(undefined4 *)(lVar12 + 0x2c) = 0;
                  *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
                  thunk_FUN_01b4f09c();
                  lVar12 = *(long *)(unaff_x19 + 0x488);
                  if (lVar12 != 0) {
                    if (*(uint *)(unaff_x19 + 0x494) < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)
                       (lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
                           *(undefined8 *)(unaff_x19 + 0x660);
                      thunk_FUN_01b4f09c();
                      lVar12 = *in_stack_00000078;
                      if (lVar12 != 0) {
                        uVar8 = *unaff_x21;
                        if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                          bVar6 = true;
                          in_stack_00000bd8 = uVar8 + 1;
                          *(undefined4 *)(lVar12 + (long)(int)uVar8 * unaff_x22 + 0x58) =
                               *(undefined4 *)(unaff_x19 + 0x668);
                          unaff_w28 = 0x2026;
                          *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
                          in_stack_00000bdc = 3;
                          goto LAB_036e59f4;
                        }
                        goto LAB_036e7314;
                      }
                      goto LAB_036e70c0;
                    }
                    goto LAB_036e7314;
                  }
                  goto LAB_036e70c0;
                }
                goto LAB_036e7314;
              }
              goto LAB_036e70c0;
            }
            goto LAB_036e7314;
          }
          goto LAB_036e70c0;
        }
        if (in_stack_00000bdc != 3) {
          bVar6 = true;
          unaff_w28 = in_stack_00000bdc;
          goto LAB_036e59f4;
        }
        lVar12 = *in_stack_00000078;
        if (((lVar12 == 0) || (*unaff_x23 == 0)) || (lVar9 = FUN_036c835c(*unaff_x23,0), lVar9 == 0)
           ) goto LAB_036e70c0;
        uVar10 = FUN_0262f3a4(lVar9,3,*(undefined8 *)PTR_DAT_03d9c870);
        if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
        *(undefined8 *)(lVar12 + lVar16 * unaff_x22 + 0x30) = uVar10;
        thunk_FUN_01b4f09c();
        bVar6 = true;
        unaff_w28 = 3;
        *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      }
      else {
        bVar6 = false;
LAB_036e59f4:
        if ((unaff_w28 != 3) && ((int)uVar8 < *(int *)(unaff_x19 + 0x324))) {
          lVar12 = *in_stack_00000078;
          if (lVar12 == 0) goto LAB_036e70c0;
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
          lVar12 = lVar12 + (long)(int)uVar8 * (long)iVar17;
          *(undefined1 *)(lVar12 + 0x194) = 0;
          *(undefined2 *)(lVar12 + 0x20) = 0x200b;
          *(undefined4 *)(lVar12 + 100) = 0;
          *unaff_x21 = uVar8 + 1;
          goto LAB_036e70b0;
        }
      }
      iVar7 = *(int *)(unaff_x19 + 0x644);
      if (iVar7 == 0) {
        uVar8 = *(uint *)(unaff_x19 + 0x25c);
        if ((uVar8 >> 4 & 1) == 0) {
          if ((uVar8 >> 3 & 1) == 0) {
            fStack0000000000000068 = 1.0;
            if ((uVar8 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_02fdd9e8(unaff_w28,0);
              fStack0000000000000068 = 1.0;
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar8 = FUN_02fddc48(unaff_w28,0);
                fStack0000000000000068 = in_stack_00000008._4_4_;
                goto LAB_036e5d68;
              }
            }
          }
          else {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_02fdd92c(unaff_w28,0);
            fStack0000000000000068 = 1.0;
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)
                            Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar8 = FUN_02fdddc0(unaff_w28,0);
              goto LAB_036e5d68;
            }
          }
        }
        else {
          if (*(int *)(*(long *)
                        Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar13 = FUN_02fdd9e8(unaff_w28,0);
          fStack0000000000000068 = 1.0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)
                          Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar8 = FUN_02fddc48(unaff_w28,0);
LAB_036e5d68:
            unaff_w28 = uVar8 & 0xffff;
          }
        }
        iVar7 = *(int *)(unaff_x19 + 0x644);
      }
      else {
        fStack0000000000000068 = 1.0;
      }
      if (iVar7 != 0) {
        if (iVar7 != 1) {
          unaff_w26 = (uint)(unaff_w28 == 0xad);
          lVar12 = *in_stack_00000078;
          unaff_s8 = 0.0;
          unaff_s14 = 0.0;
          if (unaff_w28 != 0xad && unaff_w28 != 3) {
            unaff_s14 = unaff_s15;
          }
          if (lVar12 == 0) goto LAB_036e70c0;
          uVar8 = *unaff_x21;
          unaff_s9 = 0.0;
          goto LAB_036e60bc;
        }
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0))
        goto LAB_036e70c0;
        if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto LAB_036e7314;
        *(undefined8 *)(unaff_x19 + 0x698) =
             *(undefined8 *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
        thunk_FUN_01b4f09c(in_stack_00000050);
        if ((*(long *)(unaff_x19 + 0x368) == 0) ||
           (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0))
        goto LAB_036e70c0;
        if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto LAB_036e7314;
        *(undefined4 *)(unaff_x19 + 0x6a4) =
             *(undefined4 *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
        if ((*(long *)(unaff_x19 + 0x698) == 0) ||
           (lVar12 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar12 == 0)) goto LAB_036e70c0;
        lVar12 = FUN_02b59714(lVar12,*(undefined4 *)(unaff_x19 + 0x6a4),
                              *(undefined8 *)PTR_DAT_03d9c878);
        if (lVar12 != 0) {
          if (unaff_w28 == 0x3c) {
            unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
          }
          if (*in_stack_00000050 == 0) goto LAB_036e70c0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          iVar7 = FUN_0396ac24(&stack0x00000100,0);
          fVar21 = *(float *)(unaff_x19 + 0x1e8);
          if (iVar7 < 1) {
            if (*unaff_x23 == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            iVar7 = FUN_0396ac24(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar19 = (float)FUN_0396ac34(&stack0x00000100,0);
            fVar28 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar28 = 1.0;
            }
            if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
            fVar20 = (float)FUN_0396ac54(&stack0x00000100,0);
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_036e70c0;
            FUN_0396b140(&stack0x00000be0,*(long *)(lVar12 + 0x20),0);
            in_stack_000000c0 = in_stack_00000be0;
            in_stack_000000c8 = in_stack_00000be8;
            in_stack_000000d0 = in_stack_00000bf0;
            fVar23 = (float)FUN_0396af70(&stack0x000000c0,0);
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_036e70c0;
            fVar30 = *(float *)(lVar12 + 0x2c);
            fVar22 = (float)FUN_0396b17c(*(long *)(lVar12 + 0x20),0);
            if (*unaff_x23 == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar18 = (float)FUN_0396ac54(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_036e70c0;
            fVar28 = (fVar21 / (float)iVar7) * fVar19 * fVar28;
            unaff_s15 = fVar28 * (fVar20 / fVar23) * fVar30 * fVar22;
            fVar28 = fVar28 / unaff_s15;
            unaff_s8 = fVar28 * fVar18;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar21 = (float)FUN_0396ac94(&stack0x00000100,0);
            unaff_s9 = fVar28 * fVar21;
          }
          else {
            if (*in_stack_00000050 == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            iVar7 = FUN_0396ac24(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            fVar28 = (float)FUN_0396ac34(&stack0x00000100,0);
            if (*(long *)(lVar12 + 0x20) == 0) goto LAB_036e70c0;
            fVar20 = *(float *)(lVar12 + 0x2c);
            fVar19 = fStack000000000000002c;
            if (*(char *)(unaff_x19 + 0x305) != '\0') {
              fVar19 = 1.0;
            }
            fVar23 = (float)FUN_0396b17c(*(long *)(lVar12 + 0x20),0);
            if (*(long *)(unaff_x19 + 0x698) == 0) goto LAB_036e70c0;
            memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
            unaff_s8 = (float)FUN_0396ac54(&stack0x00000100,0);
            if (*in_stack_00000050 == 0) goto LAB_036e70c0;
            unaff_s15 = (fVar21 / (float)iVar7) * fVar28 * fVar19 * fVar20 * fVar23;
            memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
            unaff_s9 = (float)FUN_0396ac94(&stack0x00000100,0);
          }
          *unaff_x25 = lVar12;
          thunk_FUN_01b4f09c();
          unaff_s13 = 0.0;
          lVar12 = *in_stack_00000078;
          if (lVar12 == 0) goto LAB_036e70c0;
          uVar8 = *unaff_x21;
          if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
          lVar16 = lVar12 + (long)(int)uVar8 * unaff_x22;
          *(undefined4 *)(lVar16 + 0x2c) = 1;
          *(float *)(lVar16 + 0x160) = unaff_s15;
          *(undefined4 *)(unaff_x19 + 0x120) = uVar26;
          goto LAB_036e60a0;
        }
        goto LAB_036e70b0;
      }
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_036e70c0;
      if (*(uint *)(lVar12 + 0x18) <= *unaff_x21) goto LAB_036e7314;
      *unaff_x25 = *(long *)(lVar12 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
      thunk_FUN_01b4f09c();
    } while (*unaff_x25 == 0);
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_036e70c0;
    uVar14 = *unaff_x21;
    uVar8 = *(uint *)(lVar12 + 0x18);
    if (uVar8 <= uVar14) goto LAB_036e7314;
    *(undefined4 *)(unaff_x19 + 0x120) =
         *(undefined4 *)(lVar12 + (long)(int)uVar14 * unaff_x22 + 0x58);
    if (bVar6) {
      lVar16 = *(long *)(unaff_x19 + 0x478);
      if (lVar16 == 0) goto LAB_036e70c0;
      if (*(uint *)(lVar16 + 0x18) <= unaff_w27) goto LAB_036e7314;
      if ((*(int *)(lVar16 + (long)(int)unaff_w27 * 0xc + 0x20) != 10) ||
         (uVar14 == *(uint *)(unaff_x19 + 0x498))) goto LAB_036e5e14;
      if (uVar8 <= uVar14 - 1) goto LAB_036e7314;
      if (*unaff_x23 == 0) goto LAB_036e70c0;
      fVar21 = *(float *)(lVar12 + (long)(int)(uVar14 - 1) * (long)iVar17 + 0x60);
      iVar7 = FUN_0396ac24(*unaff_x23 + 0x50,0);
      lVar12 = *unaff_x23;
    }
    else {
LAB_036e5e14:
      if (*unaff_x23 == 0) goto LAB_036e70c0;
      fVar21 = *(float *)(unaff_x19 + 0x1e8);
      iVar7 = FUN_0396ac24(*unaff_x23 + 0x50,0);
      lVar12 = *(long *)(unaff_x19 + 0x100);
    }
    if (lVar12 == 0) goto LAB_036e70c0;
    fVar19 = (float)FUN_0396ac34(lVar12 + 0x50,0);
    fVar28 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar28 = 1.0;
    }
    unaff_s9 = 0.0;
    unaff_s8 = 0.0;
    if (!(bool)(bVar6 & unaff_w28 == 0x2026)) {
      if (*unaff_x23 == 0) goto LAB_036e70c0;
      unaff_s8 = (float)FUN_0396ac54(*unaff_x23 + 0x50,0);
      if (*unaff_x23 == 0) goto LAB_036e70c0;
      unaff_s9 = (float)FUN_0396ac94(*unaff_x23 + 0x50,0);
    }
    if ((*unaff_x25 == 0) || (lVar12 = *(long *)(unaff_x19 + 0x488), lVar12 == 0))
    goto LAB_036e70c0;
    uVar8 = *(uint *)(unaff_x19 + 0x494);
    if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_036e7314:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    unaff_s15 = ((fStack0000000000000068 * fVar21) / (float)iVar7) * fVar19 * fVar28 *
                *(float *)(unaff_x19 + 0x404) * *(float *)(*unaff_x25 + 0x2c);
    *(undefined4 *)(lVar12 + (long)(int)uVar8 * unaff_x22 + 0x2c) = 0;
LAB_036e60a0:
    unaff_w26 = (uint)(unaff_w28 == 0xad);
    unaff_s14 = unaff_s13;
    if (unaff_w28 != 0xad && unaff_w28 != 3) {
      unaff_s14 = unaff_s15;
    }
LAB_036e60bc:
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036e7314;
    *(short *)(lVar12 + (long)(int)uVar8 * (long)iVar17 + 0x20) = (short)unaff_w28;
    if ((*unaff_x25 == 0) || (lVar12 = *(long *)(*unaff_x25 + 0x20), lVar12 == 0)) {
LAB_036e70c0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    FUN_0396b140(&stack0x00000be0,lVar12,0);
    in_stack_000000e0 = in_stack_00000be0;
    in_stack_000000e8 = in_stack_00000be8;
    in_stack_000000f0 = in_stack_00000bf0;
    if ((int)unaff_w28 < 0x10000) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_02fdb080(unaff_w28,0);
      unaff_w29 = uVar8 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
    *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
    if (*(char *)(unaff_x19 + 0x2f9) == '\0') break;
    if (*unaff_x25 == 0) goto LAB_036e70c0;
    uVar14 = *unaff_x21;
    uVar8 = *(uint *)(*unaff_x25 + 0x28);
    if ((int)uVar14 < (int)uStack0000000000000070) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_036e70c0;
      if (*(uint *)(lVar12 + 0x18) <= uVar14 + 1) goto LAB_036e7314;
      lVar12 = *(long *)(lVar12 + (long)(int)(uVar14 + 1) * (long)iVar17 + 0x30);
      if ((((lVar12 == 0) || (*unaff_x23 == 0)) ||
          (lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0)) ||
         (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)) goto LAB_036e70c0;
      uVar13 = FUN_02630bd0(lVar16,uVar8 | *(int *)(lVar12 + 0x28) << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      uVar26 = 0;
      if ((uVar13 & 1) == 0) {
        uVar27 = 0;
        uVar25 = 0;
        uVar29 = 0;
      }
      else {
        if (in_stack_000000b8 == 0) goto LAB_036e70c0;
        uVar26 = *(undefined4 *)(in_stack_000000b8 + 0x14);
        uVar27 = *(undefined4 *)(in_stack_000000b8 + 0x18);
        uVar25 = *(uint *)(in_stack_000000b8 + 0x1c);
        uVar29 = *(undefined4 *)(in_stack_000000b8 + 0x20);
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
    uVar13 = (ulong)uVar25;
    if (0 < (int)uVar14) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar12 == 0)) goto LAB_036e70c0;
      if (*(uint *)(lVar12 + 0x18) <= uVar14 - 1) goto LAB_036e7314;
      lVar12 = *(long *)(lVar12 + (ulong)(uVar14 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
      if (((lVar12 == 0) || (*unaff_x23 == 0)) ||
         ((lVar16 = *(long *)(*unaff_x23 + 0x128), lVar16 == 0 ||
          (lVar16 = *(long *)(lVar16 + 0x18), lVar16 == 0)))) goto LAB_036e70c0;
      uVar11 = FUN_02630bd0(lVar16,*(uint *)(lVar12 + 0x28) | uVar8 << 0x10,&stack0x000000b8,
                            *(undefined8 *)PTR_DAT_03d9c868);
      if ((uVar11 & 1) != 0) {
        if ((in_stack_000000b8 == 0) ||
           (FUN_036d2d10(uVar26,uVar27,uVar13,uVar29,*(undefined4 *)(in_stack_000000b8 + 0x28),
                         *(undefined4 *)(in_stack_000000b8 + 0x2c),
                         *(undefined4 *)(in_stack_000000b8 + 0x30),
                         *(undefined4 *)(in_stack_000000b8 + 0x34),0), in_stack_000000b8 == 0))
        goto LAB_036e70c0;
        if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
          fStack0000000000000074 = 0.0;
        }
      }
    }
    unaff_s13 = 0.0;
    *(int *)(unaff_x19 + 0x2fc) = (int)uVar13;
    fVar21 = unaff_s15;
    unaff_s15 = unaff_s14;
    uVar8 = in_stack_00000bd8;
  } while( true );
  fStack0000000000000060 = 0.0;
  goto code_r0x036e6204;
}


