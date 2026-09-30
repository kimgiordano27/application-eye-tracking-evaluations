/*
FUNCTION_NAME: Unity.VisualScripting.DictionaryAsset$$Merge
ENTRY_POINT: 03e7aa6c
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


float Unity_VisualScripting_DictionaryAsset__Merge(undefined1 *param_1,void *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  long unaff_x19;
  uint unaff_w20;
  uint *unaff_x21;
  ulong unaff_x22;
  long *unaff_x23;
  undefined4 unaff_w24;
  long *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  uint unaff_w28;
  long unaff_x29;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
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
  byte bStack000000000000004c;
  long *in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  uint in_stack_00000070;
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
code_r0x03e7aa6c:
  memmove(param_1,param_2,0x60);
  fVar20 = (float)FUN_040ced80(&stack0x00000100,0);
  if (*(long *)(unaff_x29 + 0x20) != 0) {
    fVar29 = *(float *)(unaff_x29 + 0x2c);
    fVar23 = fStack000000000000002c;
    if (*(char *)(unaff_x19 + 0x305) != '\0') {
      fVar23 = 1.0;
    }
    fVar21 = (float)FUN_040cf2c8(*(long *)(unaff_x29 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x698) != 0) {
      memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x698) + 0x48),0x60);
      fVar22 = (float)FUN_040ceda0(&stack0x00000100,0);
      if (*in_stack_00000050 != 0) {
        fVar20 = (unaff_s15 / (float)unaff_w26) * fVar20 * fVar23 * fVar29 * fVar21;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        fVar23 = (float)FUN_040cede0(&stack0x00000100,0);
LAB_03e7af54:
        *unaff_x25 = unaff_x29;
        thunk_FUN_01f51358();
        lVar17 = *in_stack_00000078;
        if (lVar17 != 0) {
          uVar10 = *unaff_x21;
          if (*(uint *)(lVar17 + 0x18) <= uVar10) {
LAB_03e7c214:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar19 = lVar17 + (long)(int)uVar10 * unaff_x22;
          *(undefined4 *)(lVar19 + 0x2c) = 1;
          *(float *)(lVar19 + 0x160) = fVar20;
          *(undefined4 *)(unaff_x19 + 0x120) = unaff_w24;
          fStack0000000000000068 = unaff_s14;
LAB_03e7afa0:
          bVar7 = unaff_w28 == 0xad;
          fVar29 = 0.0;
          uVar11 = in_stack_00000bd8;
          if (!bVar7 && unaff_w28 != 3) {
            fVar29 = fVar20;
          }
LAB_03e7afbc:
          if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
          iVar9 = (int)unaff_x22;
          *(short *)(lVar17 + (long)(int)uVar10 * (long)iVar9 + 0x20) = (short)unaff_w28;
          if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0))
          goto LAB_03e7bfc0;
          FUN_040cf28c(&stack0x00000be0,lVar17,0);
          in_stack_000000e0 = in_stack_00000be0;
          in_stack_000000e8 = in_stack_00000be8;
          in_stack_000000f0 = in_stack_00000bf0;
          if ((int)unaff_w28 < 0x10000) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_034f9bb4(unaff_w28,0);
            uVar10 = uVar10 & 1;
          }
          else {
            uVar10 = 0;
          }
          fStack0000000000000074 = *(float *)(unaff_x19 + 0x2a8);
          *(undefined4 *)(unaff_x19 + 0x2fc) = 0;
          if (*(char *)(unaff_x19 + 0x2f9) == '\0') {
            fVar21 = 0.0;
          }
          else {
            if (*unaff_x25 == 0) goto LAB_03e7bfc0;
            uVar15 = *unaff_x21;
            uVar1 = *(uint *)(*unaff_x25 + 0x28);
            if ((int)uVar15 < (int)in_stack_00000070) {
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0))
              goto LAB_03e7bfc0;
              if (*(uint *)(lVar17 + 0x18) <= uVar15 + 1) goto LAB_03e7c214;
              lVar17 = *(long *)(lVar17 + (long)(int)(uVar15 + 1) * (long)iVar9 + 0x30);
              if ((((lVar17 == 0) || (*unaff_x23 == 0)) ||
                  (lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0)) ||
                 (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)) goto LAB_03e7bfc0;
              uVar14 = FUN_02bd799c(lVar19,uVar1 | *(int *)(lVar17 + 0x28) << 0x10,&stack0x000000b8,
                                    *(undefined8 *)PTR_DAT_04579da8);
              uVar30 = 0;
              if ((uVar14 & 1) == 0) {
                uVar31 = 0;
                fVar21 = 0.0;
                uVar33 = 0;
              }
              else {
                if (in_stack_000000b8 == 0) goto LAB_03e7bfc0;
                uVar30 = *(undefined4 *)(in_stack_000000b8 + 0x14);
                uVar31 = *(undefined4 *)(in_stack_000000b8 + 0x18);
                fVar21 = *(float *)(in_stack_000000b8 + 0x1c);
                uVar33 = *(undefined4 *)(in_stack_000000b8 + 0x20);
                if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                  fStack0000000000000074 = 0.0;
                }
              }
              uVar15 = *unaff_x21;
            }
            else {
              uVar30 = 0;
              uVar31 = 0;
              fVar21 = 0.0;
              uVar33 = 0;
            }
            if (0 < (int)uVar15) {
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0))
              goto LAB_03e7bfc0;
              if (*(uint *)(lVar17 + 0x18) <= uVar15 - 1) goto LAB_03e7c214;
              lVar17 = *(long *)(lVar17 + (ulong)(uVar15 - 1) * (unaff_x22 & 0xffffffff) + 0x30);
              if (((lVar17 == 0) || (*unaff_x23 == 0)) ||
                 ((lVar19 = *(long *)(*unaff_x23 + 0x128), lVar19 == 0 ||
                  (lVar19 = *(long *)(lVar19 + 0x18), lVar19 == 0)))) goto LAB_03e7bfc0;
              uVar14 = FUN_02bd799c(lVar19,*(uint *)(lVar17 + 0x28) | uVar1 << 0x10,&stack0x000000b8
                                    ,*(undefined8 *)PTR_DAT_04579da8);
              if ((uVar14 & 1) != 0) {
                if ((in_stack_000000b8 == 0) ||
                   (FUN_03e67c10(uVar30,uVar31,fVar21,uVar33,
                                 *(undefined4 *)(in_stack_000000b8 + 0x28),
                                 *(undefined4 *)(in_stack_000000b8 + 0x2c),
                                 *(undefined4 *)(in_stack_000000b8 + 0x30),
                                 *(undefined4 *)(in_stack_000000b8 + 0x34),0),
                   in_stack_000000b8 == 0)) goto LAB_03e7bfc0;
                if ((*(byte *)(in_stack_000000b8 + 0x39) & 1) != 0) {
                  fStack0000000000000074 = 0.0;
                }
              }
            }
            *(float *)(unaff_x19 + 0x2fc) = fVar21;
          }
          fStack0000000000000060 = 0.0;
          fVar32 = *(float *)(unaff_x19 + 0x2b0);
          if (fVar32 != 0.0) {
            if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0))
            goto LAB_03e7bfc0;
            FUN_040cf28c(&stack0x00000be0,lVar17,0);
            in_stack_000000c0 = in_stack_00000be0;
            in_stack_000000c8 = in_stack_00000be8;
            in_stack_000000d0 = in_stack_00000bf0;
            fVar24 = (float)FUN_040cf0b4(&stack0x000000c0,0);
            if ((*unaff_x25 == 0) || (lVar17 = *(long *)(*unaff_x25 + 0x20), lVar17 == 0))
            goto LAB_03e7bfc0;
            FUN_040cf28c(&stack0x00000be0,lVar17,0);
            in_stack_000000c0 = in_stack_00000be0;
            in_stack_000000c8 = in_stack_00000be8;
            in_stack_000000d0 = in_stack_00000bf0;
            fVar25 = (float)FUN_040cf0c4(&stack0x000000c0,0);
            fStack0000000000000060 =
                 (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                 (fVar32 * 0.5 - fVar29 * (fVar24 * 0.5 + fVar25));
            *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x640) + fStack0000000000000060;
          }
          iVar16 = *(int *)(unaff_x19 + 0x644);
          fVar32 = 0.0;
          if (((unaff_w20 == 0) && (fVar32 = 0.0, iVar16 == 0)) &&
             ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0)) {
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            fVar32 = *(float *)(*unaff_x23 + 0x1b4);
          }
          lVar17 = *in_stack_00000078;
          if (lVar17 == 0) goto LAB_03e7bfc0;
          uVar1 = *unaff_x21;
          lVar19 = (long)(int)uVar1;
          if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_03e7c214;
          fVar24 = *(float *)(unaff_x19 + 0x4d8);
          fVar25 = *(float *)(unaff_x19 + 0x61c);
          fVar22 = fVar22 * fVar29;
          *(float *)(lVar17 + lVar19 * unaff_x22 + 0x14c) = (0.0 - fVar24) + fVar25;
          if (iVar16 == 0) {
            fVar22 = fVar22 / fStack0000000000000068;
            fVar23 = (fVar23 * fVar29) / fStack0000000000000068;
          }
          else {
            fVar23 = fVar23 * fVar29;
          }
          fVar22 = fVar25 + fVar22;
          if ((uVar10 == 0) || (uVar1 == *(uint *)(unaff_x19 + 0x498))) {
            fVar23 = fVar25 + fVar23;
            fVar27 = fVar22;
            fVar26 = fVar23;
            if (fVar25 != 0.0) {
              fVar27 = (fVar22 - fVar25) / *(float *)(unaff_x19 + 0x404);
              fVar26 = (fVar23 - fVar25) / *(float *)(unaff_x19 + 0x404);
              if (fVar27 <= fVar22) {
                fVar27 = fVar22;
              }
              if (fVar23 <= fVar26) {
                fVar26 = fVar23;
              }
            }
            lVar17 = lVar17 + lVar19 * unaff_x22;
            fVar25 = fVar27;
            if (fVar27 <= *(float *)(unaff_x19 + 0x4c8)) {
              fVar25 = *(float *)(unaff_x19 + 0x4c8);
            }
            fVar28 = fVar26;
            if (*(float *)(unaff_x19 + 0x4cc) <= fVar26) {
              fVar28 = *(float *)(unaff_x19 + 0x4cc);
            }
            *(float *)(unaff_x19 + 0x4cc) = fVar28;
            *(float *)(unaff_x19 + 0x4c8) = fVar25;
            *(float *)(lVar17 + 0x154) = fVar27;
            *(float *)(lVar17 + 0x158) = fVar26;
            *(float *)(lVar17 + 0x148) = fVar22 - fVar24;
            *(float *)(unaff_x19 + 0x4c0) = fVar22 - fVar24;
            *(float *)(lVar17 + 0x150) = fVar23 - fVar24;
            *(float *)(unaff_x19 + 0x4c4) = fVar23 - fVar24;
            if ((*(int *)(unaff_x19 + 0x4a8) == 0) || (*(char *)(unaff_x19 + 0x33c) != '\0')) {
              *(float *)(unaff_x19 + 0x4b8) = fVar25;
              if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
              fVar23 = *(float *)(unaff_x19 + 0x4bc);
              fVar24 = (float)FUN_040cedb0(*(long *)(unaff_x19 + 0x100) + 0x50,0);
              fStack0000000000000068 = (fVar29 * fVar24) / fStack0000000000000068;
              fVar24 = *(float *)(unaff_x19 + 0x4d8);
              if (fVar23 <= fStack0000000000000068) {
                fVar23 = fStack0000000000000068;
              }
              *(float *)(unaff_x19 + 0x4bc) = fVar23;
            }
          }
          else {
            fVar23 = *(float *)(unaff_x19 + 0x4c8);
            lVar17 = lVar17 + lVar19 * unaff_x22;
            *(float *)(lVar17 + 0x154) = fVar23;
            fVar25 = *(float *)(unaff_x19 + 0x4cc);
            fVar23 = fVar23 - fVar24;
            *(float *)(lVar17 + 0x148) = fVar23;
            *(float *)(lVar17 + 0x158) = fVar25;
            *(float *)(unaff_x19 + 0x4c0) = fVar23;
            fVar25 = fVar25 - fVar24;
            *(float *)(lVar17 + 0x150) = fVar25;
            *(float *)(unaff_x19 + 0x4c4) = fVar25;
          }
          in_stack_00000bd8 = uVar11;
          if (fVar24 == 0.0) {
            if ((uVar10 == 0) || (*(int *)(unaff_x19 + 0x494) == *(int *)(unaff_x19 + 0x498))) {
              fVar23 = *(float *)(unaff_x19 + 0x4b4);
              if (*(float *)(unaff_x19 + 0x4b4) <= fVar22) {
                fVar23 = fVar22;
              }
              *(float *)(unaff_x19 + 0x4b4) = fVar23;
              goto LAB_03e7b470;
            }
            bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
            if (unaff_w28 == 9) goto LAB_03e7b484;
LAB_03e7b4c4:
            if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) ||
               (*(int *)(unaff_x19 + 0x644) == 1)) goto LAB_03e7b4dc;
LAB_03e7b658:
            fVar20 = *(float *)(unaff_x19 + 0x640);
            if (*(float *)(unaff_x19 + 0x2b0) == 0.0) {
              fVar23 = (float)FUN_040cf0d4(&stack0x000000e0,0);
              if (*unaff_x23 == 0) goto LAB_03e7bfc0;
              fVar23 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                       (*(float *)(unaff_x19 + 0x2ac) +
                       fVar29 * (fVar21 + fVar23) +
                       fStack0000000000000058 *
                       (fVar32 + fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
            }
            else {
              if (*unaff_x23 == 0) goto LAB_03e7bfc0;
              fVar23 = (1.0 - *(float *)(unaff_x19 + 0x2d4)) *
                       (*(float *)(unaff_x19 + 0x2ac) +
                       (*(float *)(unaff_x19 + 0x2b0) - fStack0000000000000060) +
                       fStack0000000000000058 *
                       (fStack0000000000000074 + *(float *)(*unaff_x23 + 0x1ac)));
            }
            fVar20 = fVar20 + fVar23;
            *(float *)(unaff_x19 + 0x640) = fVar20;
            if ((unaff_w28 == 0x200b) || (uVar10 != 0)) {
              fVar20 = fVar20 + fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b4);
              *(float *)(unaff_x19 + 0x640) = fVar20;
            }
            if (unaff_w28 == 0xd) {
              if (fStack0000000000000064 <= fStack000000000000006c + fVar20) {
                fStack0000000000000064 = fStack000000000000006c + fVar20;
              }
              fStack000000000000006c = 0.0;
              fVar20 = *(float *)(unaff_x19 + 0x40c) + 0.0;
              goto LAB_03e7b75c;
            }
            bVar8 = unaff_w28 == 10;
            if (((0xb < unaff_w28) || ((1 << (ulong)(unaff_w28 & 0x1f) & 0xc08U) == 0)) &&
               (1 < unaff_w28 - 0x2028)) goto LAB_03e7b764;
LAB_03e7b820:
            if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
              fVar20 = *(float *)(unaff_x19 + 0x4c8);
              fVar23 = *(float *)(unaff_x19 + 0x4d0);
              if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0)
                  == 0) {
                thunk_FUN_01ee6d7c();
              }
              fVar20 = fVar20 - fVar23;
              if (((fStack000000000000001c < ABS(fVar20)) && (*(char *)(unaff_x19 + 0x2c4) == '\0'))
                 && (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
                *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
              }
            }
            fVar20 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4c4);
            if (fVar20 <= *(float *)(unaff_x19 + 0x4c4)) {
              fStack0000000000000038 = fVar20;
            }
            fVar23 = in_stack_00000040._4_4_ +
                     fStack0000000000000048 + fStack000000000000006c + fStack000000000000005c;
            fVar20 = fStack0000000000000064;
            if (fStack0000000000000064 <= fVar23) {
              fVar20 = fVar23;
            }
            *(float *)(unaff_x19 + 0x4c4) = fStack0000000000000038;
            fStack000000000000006c = fVar20;
            if (*(uint *)(unaff_x19 + 0x494) != in_stack_00000070) {
              fStack000000000000006c = 0.0;
              fStack0000000000000064 = fVar20;
            }
            fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fStack0000000000000038;
            *(undefined1 *)(unaff_x19 + 0x33c) = 0;
            if (bVar8) {
LAB_03e7bb3c:
              FUN_03e821b4();
              FUN_03e821b4();
              uVar10 = *(uint *)(unaff_x19 + 0x494);
              lVar17 = *(long *)(unaff_x19 + 0x488);
              iVar16 = uVar10 + 1;
              *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
              *(int *)(unaff_x19 + 0x498) = iVar16;
              if (lVar17 != 0) {
                if (uVar10 < *(uint *)(lVar17 + 0x18)) {
                  fVar20 = *(float *)(lVar17 + (long)(int)uVar10 * unaff_x22 + 0x154);
                  if (*(float *)(unaff_x19 + 0x2c0) == DAT_00c927ac) {
                    fVar23 = 0.0;
                    if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
                      fVar23 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar18 = 0;
                    fVar23 = fVar20 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                             fStack0000000000000020 *
                             (fStack0000000000000024 + *(float *)(unaff_x19 + 700)) +
                             fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar23) +
                             *(float *)(unaff_x19 + 0x4d8);
                  }
                  else {
                    fVar23 = 0.0;
                    if (!(bool)(unaff_w28 != 0x2029 & (bVar8 ^ 1U))) {
                      fVar23 = *(float *)(unaff_x19 + 0x2cc);
                    }
                    uVar18 = 1;
                    fVar23 = *(float *)(unaff_x19 + 0x4d8) +
                             *(float *)(unaff_x19 + 0x2c0) +
                             fStack0000000000000058 * (*(float *)(unaff_x19 + 0x2b8) + fVar23);
                  }
                  *(float *)(unaff_x19 + 0x4d8) = fVar23;
                  *(undefined1 *)(unaff_x19 + 0x2c4) = uVar18;
                  puVar3 = PTR_DAT_04579e70;
                  lVar17 = *(long *)PTR_DAT_04579e70;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                    lVar17 = *(long *)puVar3;
                    iVar16 = *unaff_x21 + 1;
                  }
                  uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x640) =
                       *(float *)(unaff_x19 + 0x408) + 0.0 + *(float *)(unaff_x19 + 0x40c);
                  uVar13 = NEON_rev64(uVar13,4);
                  *(float *)(unaff_x19 + 0x4d0) = fVar20;
                  *(undefined8 *)(unaff_x19 + 0x4c8) = uVar13;
                  *(int *)(unaff_x19 + 0x494) = iVar16;
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
          else {
LAB_03e7b470:
            bVar8 = (*(byte *)(unaff_x19 + 0x278) & 0x18) == 0;
            if (unaff_w28 == 9) {
LAB_03e7b484:
              bVar2 = true;
            }
            else {
              if ((((uVar10 != 0) || (unaff_w28 == 3)) || (unaff_w28 == 0x200b)) ||
                 (unaff_w28 == 0xad)) goto LAB_03e7b4c4;
LAB_03e7b4dc:
              bVar2 = false;
            }
            fVar22 = *(float *)(unaff_x19 + 0x360);
            fVar24 = *(float *)(unaff_x19 + 0x640);
            fVar23 = (fStack000000000000003c - *(float *)(unaff_x19 + 0x350)) -
                     *(float *)(unaff_x19 + 0x354);
            bVar6 = true;
            if ((fVar22 <= fVar23) && (bVar6 = false, !NAN(fVar22))) {
              bVar6 = fVar22 == -1.0;
            }
            if (!bVar6) {
              fVar23 = fVar22;
            }
            fVar22 = (float)FUN_040cf0d4(&stack0x000000e0,0);
            if (bVar7 == false) {
              fVar20 = fVar29;
            }
            fVar25 = 1.0;
            if (!bVar8) {
              fVar25 = DAT_00c926dc;
            }
            fStack000000000000005c =
                 ABS(fVar24) + fVar20 * fVar22 * (1.0 - *(float *)(unaff_x19 + 0x2d4));
            if ((fVar25 * fVar23 < fStack000000000000005c && (uVar5 & 1) == 0) &&
               (*(int *)(unaff_x19 + 0x494) != *(int *)(unaff_x19 + 0x498))) {
              unaff_w27 = FUN_03e81e20();
              lVar17 = *(long *)(unaff_x19 + 0x488);
              if (lVar17 == 0) goto LAB_03e7bfc0;
              uVar10 = *(uint *)(unaff_x19 + 0x494);
              in_stack_00000bd8 = uVar10 - 1;
              if (*(uint *)(lVar17 + 0x18) <= in_stack_00000bd8) goto LAB_03e7c214;
              if (((bStack000000000000004c & 1) == 0 &&
                   *(short *)(lVar17 + (long)(int)in_stack_00000bd8 * (long)iVar9 + 0x20) == 0xad)
                 && (*(int *)(unaff_x19 + 0x2e0) == 0)) {
                bStack000000000000004c = 0;
                in_stack_00000bdc = 0x2d;
                *unaff_x21 = in_stack_00000bd8;
                unaff_w27 = unaff_w27 - 1;
                goto LAB_03e7bfb0;
              }
              if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
              if (*(short *)(lVar17 + (long)(int)uVar10 * unaff_x22 + 0x20) == 0xad) {
                bStack000000000000004c = 1;
                in_stack_00000bd8 = uVar11;
              }
              else {
                if ((uStack0000000000000030 & uStack0000000000000018 & 1) != 0) {
                  fVar20 = *(float *)(unaff_x19 + 0x2d4);
                  fVar21 = *(float *)(unaff_x19 + 0x2d0) / 100.0;
                  if ((fVar20 < fVar21) &&
                     (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                    fVar29 = fStack000000000000005c;
                    if (0.0 < fVar20) {
                      fVar29 = fStack000000000000005c / (1.0 - fVar20);
                    }
                    fVar20 = fVar20 + (fStack000000000000005c - fVar25 * (fVar23 + DAT_00c928e4)) /
                                      fVar29;
                    if (fVar21 <= fVar20) {
                      fVar20 = fVar21;
                    }
                    *(float *)(unaff_x19 + 0x2d4) = fVar20;
LAB_03e7c098:
                    if (DAT_0482ee9c == '\0') {
                      thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<float4>_Dispose__);
                      DAT_0482ee9c = '\x01';
                    }
                    return **(float **)
                             (*(long *)Method_Unity_Collections_NativeArray<float4>_Dispose__ + 0xb8
                             );
                  }
                  if ((*(float *)(unaff_x19 + 0x250) < *in_stack_00000010) &&
                     (*(int *)(unaff_x19 + 0x244) < *(int *)(unaff_x19 + 0x248))) {
                    *(float *)(unaff_x19 + 0x23c) = *in_stack_00000010;
                    fVar20 = (*in_stack_00000010 - *(float *)(unaff_x19 + 0x240)) * 0.5;
                    if (fVar20 <= DAT_00c92764) {
                      fVar20 = DAT_00c92764;
                    }
                    fVar20 = *in_stack_00000010 - fVar20;
                    *in_stack_00000010 = fVar20;
                    fVar23 = fVar20 * 20.0 + 0.5;
                    fVar20 = DAT_00c92a58;
                    if (fVar23 != INFINITY) {
                      fVar20 = (float)(int)fVar23 / 20.0;
                    }
                    if (fVar20 <= *(float *)(unaff_x19 + 0x250)) {
                      fVar20 = *(float *)(unaff_x19 + 0x250);
                    }
                    *in_stack_00000010 = fVar20;
                    goto LAB_03e7c098;
                  }
                }
                if (0.0 < *(float *)(unaff_x19 + 0x4d8)) {
                  fVar20 = *(float *)(unaff_x19 + 0x4c8);
                  fVar23 = *(float *)(unaff_x19 + 0x4d0);
                  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ +
                              0xe0) == 0) {
                    thunk_FUN_01ee6d7c();
                  }
                  fVar20 = fVar20 - fVar23;
                  if (((fStack000000000000001c < ABS(fVar20)) &&
                      (*(char *)(unaff_x19 + 0x2c4) == '\0')) &&
                     (*(char *)(unaff_x19 + 0x33c) == '\0')) {
                    *(float *)(unaff_x19 + 0x4c4) = *(float *)(unaff_x19 + 0x4c4) - fVar20;
                    *(float *)(unaff_x19 + 0x4d8) = fVar20 + *(float *)(unaff_x19 + 0x4d8);
                  }
                }
                fVar21 = *(float *)(unaff_x19 + 0x640);
                fVar23 = *(float *)(unaff_x19 + 0x4cc) - *(float *)(unaff_x19 + 0x4d8);
                fVar20 = *(float *)(unaff_x19 + 0x4c4);
                if (fVar23 <= *(float *)(unaff_x19 + 0x4c4)) {
                  fVar20 = fVar23;
                }
                *(undefined4 *)(unaff_x19 + 0x498) = *(undefined4 *)(unaff_x19 + 0x494);
                *(float *)(unaff_x19 + 0x4c4) = fVar20;
                *(undefined4 *)(unaff_x19 + 0x4ac) = 0;
                if ((uVar4 & 0x100000000) == 0) {
                  fVar23 = (*(float *)(unaff_x19 + 0x4c8) - *(float *)(unaff_x19 + 0x4d8)) - fVar23;
                  if (fStack0000000000000038 <= fVar23) {
                    fStack0000000000000038 = fVar23;
                  }
                }
                else {
                  fStack0000000000000038 = *(float *)(unaff_x19 + 0x4b8) - fVar20;
                }
                FUN_03e821b4();
                lVar17 = *(long *)(unaff_x19 + 0x488);
                *(int *)(unaff_x19 + 0x4a8) = *(int *)(unaff_x19 + 0x4a8) + 1;
                if (lVar17 == 0) goto LAB_03e7bfc0;
                if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
                fVar20 = *(float *)(unaff_x19 + 0x2c0);
                fVar23 = *(float *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 +
                                   0x154);
                bVar7 = fVar20 != DAT_00c927ac;
                if (bVar7) {
                  fVar22 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
                }
                else {
                  fVar22 = fVar23 + (0.0 - *(float *)(unaff_x19 + 0x4cc)) +
                           fStack0000000000000020 *
                           (fStack0000000000000024 + *(float *)(unaff_x19 + 700));
                  fVar20 = fStack0000000000000058 * *(float *)(unaff_x19 + 0x2b8);
                }
                *(bool *)(unaff_x19 + 0x2c4) = bVar7;
                *(float *)(unaff_x19 + 0x4d8) = *(float *)(unaff_x19 + 0x4d8) + fVar20 + fVar22;
                puVar3 = PTR_DAT_04579e70;
                lVar17 = *(long *)PTR_DAT_04579e70;
                if (*(int *)(lVar17 + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                  lVar17 = *(long *)puVar3;
                }
                bStack000000000000004c = 0;
                fStack000000000000006c = fStack000000000000006c + fVar21;
                uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x15a8);
                *(float *)(unaff_x19 + 0x640) = *(float *)(unaff_x19 + 0x40c) + 0.0;
                uVar13 = NEON_rev64(uVar13,4);
                *(float *)(unaff_x19 + 0x4d0) = fVar23;
                *(undefined8 *)(unaff_x19 + 0x4c8) = uVar13;
                uStack0000000000000030 = 1;
                in_stack_00000bd8 = uVar11;
              }
              goto LAB_03e7bfb0;
            }
            fStack0000000000000048 = *(float *)(unaff_x19 + 0x350);
            in_stack_00000040._4_4_ = *(float *)(unaff_x19 + 0x354);
            if (!bVar2) goto LAB_03e7b658;
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
            fVar20 = (float)FUN_040cee68(&stack0x00000100,0);
            if (*unaff_x23 == 0) goto LAB_03e7bfc0;
            fVar21 = *(float *)(unaff_x19 + 0x640);
            fVar23 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x23 + 0x1b9));
            fVar23 = fVar29 * fVar20 * fVar23;
            fVar20 = fVar23 * (float)(int)(fVar21 / fVar23);
            if (fVar20 <= fVar21) {
              fVar20 = fVar21 + fVar23;
            }
LAB_03e7b75c:
            bVar8 = false;
            *(float *)(unaff_x19 + 0x640) = fVar20;
LAB_03e7b764:
            if (*unaff_x21 == in_stack_00000070) goto LAB_03e7b820;
          }
          if (((uVar4 & 0x100000000) != 0) || ((*(uint *)(unaff_x19 + 0x2e0) | 2) == 3)) {
            if ((uVar10 == 0) &&
               (((unaff_w28 != 0x2d && (unaff_w28 != 0x200b)) && (unaff_w28 != 0xad)))) {
              if (*(char *)(unaff_x19 + 0x2da) == '\0') {
LAB_03e7b9d0:
                if (((((0x2bfd < unaff_w28 - 0xac01) && (0xfd < unaff_w28 - 0x1101)) &&
                     (0x1d < unaff_w28 - 0xa961)) || (uVar14 = FUN_03e90be8(0), (uVar14 & 1) != 0))
                   && ((((0xed < unaff_w28 - 0xff01 && (0x1d < unaff_w28 - 0xfe31)) &&
                        (0x717d < unaff_w28 - 0x2e81)) && (0x1fd < unaff_w28 - 0xf901))))
                goto LAB_03e7b79c;
                lVar17 = FUN_03e90a7c(0);
                if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_03e7bfc0;
                uVar11 = FUN_02afbd84(*(long *)(lVar17 + 0x10),unaff_w28,
                                      *(undefined8 *)PTR_DAT_04579da0);
                if ((int)in_stack_00000070 <= (int)*unaff_x21) {
                  if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) != 0) {
LAB_03e7bf60:
                    FUN_03e821b4();
                  }
LAB_03e7bf74:
                  uStack0000000000000030 = 0;
                  uStack0000000000000028 = 1;
                  goto Unity_VisualScripting_Serialization__Serialize;
                }
                lVar17 = FUN_03e90a7c(0);
                if ((lVar17 == 0) || (lVar19 = *in_stack_00000078, lVar19 == 0)) goto LAB_03e7bfc0;
                if (*(uint *)(lVar19 + 0x18) <= *unaff_x21 + 1) goto LAB_03e7c214;
                if (*(long *)(lVar17 + 0x18) == 0) goto LAB_03e7bfc0;
                uVar14 = FUN_02afbd84(*(long *)(lVar17 + 0x18),
                                      *(undefined2 *)
                                       (lVar19 + (long)(int)(*unaff_x21 + 1) * (long)iVar9 + 0x20),
                                      *(undefined8 *)PTR_DAT_04579da0);
                if (((uStack0000000000000030 | uVar11 ^ 0xffffffff) & 1) == 0) goto LAB_03e7bf74;
                if ((uVar14 & 1) == 0) goto LAB_03e7bf60;
                if ((uStack0000000000000030 & 1) == 0) goto LAB_03e7bf74;
                if (uVar10 != 0) {
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
                    if ((((bStack000000000000004c | bVar7 ^ 0xffU) & 1) == 0) || (uVar10 != 0)) {
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
                  lVar17 = FUN_03e90a7c(0);
                  if ((lVar17 == 0) || (*(long *)(lVar17 + 0x10) == 0)) goto LAB_03e7bfc0;
                  uVar14 = FUN_02afbd84(*(long *)(lVar17 + 0x10),unaff_w28,
                                        *(undefined8 *)PTR_DAT_04579da0);
                  if ((uVar14 & 1) == 0) {
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
LAB_03e7bfb0:
          lVar17 = *(long *)(unaff_x19 + 0x478);
          unaff_w27 = unaff_w27 + 1;
          if (lVar17 != 0) {
            if ((int)unaff_w27 < (int)*(uint *)(lVar17 + 0x18)) {
              if (*(uint *)(lVar17 + 0x18) <= unaff_w27) goto LAB_03e7c214;
              unaff_w28 = *(uint *)(lVar17 + (long)(int)unaff_w27 * 0xc + 0x20);
              if (unaff_w28 == 0) goto LAB_03e7bfc4;
              if ((unaff_w28 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0'))
              goto code_r0x03e7a6e4;
              if ((*(long *)(unaff_x19 + 0x368) != 0) &&
                 (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 != 0)) {
                if (*unaff_x21 < *(uint *)(lVar17 + 0x18)) {
                  lVar17 = lVar17 + (long)(int)*unaff_x21 * unaff_x22;
                  *(undefined4 *)(unaff_x19 + 0x644) = *(undefined4 *)(lVar17 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x120) = *(undefined4 *)(lVar17 + 0x58);
                  *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(lVar17 + 0x38);
                  thunk_FUN_01f51358();
                  goto LAB_03e7a758;
                }
                goto LAB_03e7c214;
              }
              goto LAB_03e7bfc0;
            }
LAB_03e7bfc4:
            if ((((*(float *)(unaff_x19 + 0x23c) - *(float *)(unaff_x19 + 0x240) <= DAT_00c925e0) ||
                 ((_uStack0000000000000018 & 1) == 0)) ||
                (fVar20 = *in_stack_00000010, *(float *)(unaff_x19 + 0x254) <= fVar20)) ||
               (*(int *)(unaff_x19 + 0x248) <= *(int *)(unaff_x19 + 0x244))) {
              fVar20 = *(float *)(unaff_x19 + 0x340);
              fVar23 = *(float *)(unaff_x19 + 0x348);
              if (fVar20 <= 0.0) {
                fVar20 = 0.0;
              }
              if (fVar23 <= 0.0) {
                fVar23 = 0.0;
              }
              *(undefined1 *)(unaff_x19 + 0x24c) = 1;
              fVar23 = (fStack000000000000006c + fVar20 + fVar23) * 100.0 + 1.0;
              fVar20 = DAT_00c92378;
              if (fVar23 != INFINITY) {
                fVar20 = (float)(int)fVar23 / 100.0;
              }
              *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
              return fVar20;
            }
            if (*(float *)(unaff_x19 + 0x2d4) < *(float *)(unaff_x19 + 0x2d0) / 100.0) {
              *(undefined4 *)(unaff_x19 + 0x2d4) = 0;
              fVar20 = *in_stack_00000010;
            }
            *(float *)(unaff_x19 + 0x240) = fVar20;
            fVar20 = (*(float *)(unaff_x19 + 0x23c) - *in_stack_00000010) * 0.5;
            if (fVar20 <= DAT_00c92764) {
              fVar20 = DAT_00c92764;
            }
            fVar20 = *in_stack_00000010 + fVar20;
            *in_stack_00000010 = fVar20;
            fVar23 = fVar20 * 20.0 + 0.5;
            fVar20 = DAT_00c92a58;
            if (fVar23 != INFINITY) {
              fVar20 = (float)(int)fVar23 / 20.0;
            }
            if (*(float *)(unaff_x19 + 0x254) <= fVar20) {
              fVar20 = *(float *)(unaff_x19 + 0x254);
            }
            *in_stack_00000010 = fVar20;
            goto LAB_03e7c098;
          }
        }
      }
    }
  }
LAB_03e7bfc0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x03e7a6e4:
  *(undefined1 *)(unaff_x19 + 0x431) = 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  uVar14 = FUN_03e7c218();
  if (((uVar14 & 1) != 0) && (unaff_w27 = in_stack_000000d8._4_4_, *(int *)(unaff_x19 + 0x644) == 0)
     ) goto LAB_03e7bfb0;
LAB_03e7a758:
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
  uVar10 = *unaff_x21;
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
  lVar19 = (long)(int)uVar10;
  unaff_w20 = (uint)*(byte *)(lVar17 + lVar19 * unaff_x22 + 0x5c);
  *(undefined1 *)(unaff_x19 + 0x431) = 0;
  unaff_w24 = *(undefined4 *)(unaff_x19 + 0x120);
  if (in_stack_00000bd8 == uVar10) {
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    if (in_stack_00000bdc == 0x2026) {
      lVar17 = *in_stack_00000078;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
      *(undefined8 *)(lVar17 + lVar19 * unaff_x22 + 0x30) = *(undefined8 *)(unaff_x19 + 0x650);
      thunk_FUN_01f51358();
      lVar17 = *in_stack_00000078;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      lVar17 = lVar17 + (long)(int)*unaff_x21 * unaff_x22;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(unaff_x19 + 0x658);
      thunk_FUN_01f51358();
      lVar17 = *(long *)(unaff_x19 + 0x488);
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *(uint *)(unaff_x19 + 0x494)) goto LAB_03e7c214;
      *(undefined8 *)(lVar17 + (long)(int)*(uint *)(unaff_x19 + 0x494) * unaff_x22 + 0x50) =
           *(undefined8 *)(unaff_x19 + 0x660);
      thunk_FUN_01f51358();
      lVar17 = *in_stack_00000078;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      uVar10 = *unaff_x21;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
      bVar7 = true;
      in_stack_00000bd8 = uVar10 + 1;
      *(undefined4 *)(lVar17 + (long)(int)uVar10 * unaff_x22 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x668);
      unaff_w28 = 0x2026;
      *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
      in_stack_00000bdc = 3;
      goto LAB_03e7a8f4;
    }
    if (in_stack_00000bdc != 3) {
      bVar7 = true;
      unaff_w28 = in_stack_00000bdc;
      goto LAB_03e7a8f4;
    }
    lVar17 = *in_stack_00000078;
    if (((lVar17 == 0) || (*unaff_x23 == 0)) || (lVar12 = FUN_03e5d25c(*unaff_x23,0), lVar12 == 0))
    goto LAB_03e7bfc0;
    uVar13 = FUN_02bd6170(lVar12,3,*(undefined8 *)PTR_DAT_04579db0);
    if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
    *(undefined8 *)(lVar17 + lVar19 * unaff_x22 + 0x30) = uVar13;
    thunk_FUN_01f51358();
    bVar7 = true;
    unaff_w28 = 3;
    *(undefined1 *)(unaff_x19 + 0x2f8) = 1;
  }
  else {
    bVar7 = false;
LAB_03e7a8f4:
    if ((unaff_w28 != 3) && ((int)uVar10 < *(int *)(unaff_x19 + 0x324))) {
      lVar17 = *in_stack_00000078;
      if (lVar17 == 0) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
      lVar17 = lVar17 + (long)(int)uVar10 * (long)iVar9;
      *(undefined1 *)(lVar17 + 0x194) = 0;
      *(undefined2 *)(lVar17 + 0x20) = 0x200b;
      *(undefined4 *)(lVar17 + 100) = 0;
      *unaff_x21 = uVar10 + 1;
      goto LAB_03e7bfb0;
    }
  }
  iVar16 = *(int *)(unaff_x19 + 0x644);
  if (iVar16 == 0) {
    uVar10 = *(uint *)(unaff_x19 + 0x25c);
    if ((uVar10 >> 4 & 1) == 0) {
      if ((uVar10 >> 3 & 1) == 0) {
        unaff_s14 = 1.0;
        if ((uVar10 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_034fc51c(unaff_w28,0);
          unaff_s14 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar10 = FUN_034fc7fc(unaff_w28,0);
            unaff_s14 = in_stack_00000008._4_4_;
            goto LAB_03e7ac68;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_034fc460(unaff_w28,0);
        unaff_s14 = 1.0;
        if ((uVar14 & 1) != 0) {
          if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar10 = FUN_034fc974(unaff_w28,0);
          goto LAB_03e7ac68;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_034fc51c(unaff_w28,0);
      unaff_s14 = 1.0;
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_034fc7fc(unaff_w28,0);
LAB_03e7ac68:
        unaff_w28 = uVar10 & 0xffff;
      }
    }
    iVar16 = *(int *)(unaff_x19 + 0x644);
  }
  else {
    unaff_s14 = 1.0;
  }
  fStack0000000000000068 = unaff_s14;
  if (iVar16 != 0) {
    if (iVar16 == 1) {
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined8 *)(unaff_x19 + 0x698) =
           *(undefined8 *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x40);
      thunk_FUN_01f51358(in_stack_00000050);
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
      if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
      *(undefined4 *)(unaff_x19 + 0x6a4) =
           *(undefined4 *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x48);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar17 = FUN_03e936c0(*(long *)(unaff_x19 + 0x698),0), lVar17 == 0)) goto LAB_03e7bfc0;
      unaff_x29 = FUN_030f28e4(lVar17,*(undefined4 *)(unaff_x19 + 0x6a4),
                               *(undefined8 *)PTR_DAT_04579db8);
      if (unaff_x29 != 0) {
        if (unaff_w28 == 0x3c) {
          unaff_w28 = *(int *)(unaff_x19 + 0x6a4) + 0xe000;
        }
        if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
        iVar9 = FUN_040ced70(&stack0x00000100,0);
        unaff_s15 = *(float *)(unaff_x19 + 0x1e8);
        if (0 < iVar9) {
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          memmove(&stack0x00000100,(void *)(*in_stack_00000050 + 0x48),0x60);
          unaff_w26 = FUN_040ced70(&stack0x00000100,0);
          if (*in_stack_00000050 == 0) goto LAB_03e7bfc0;
          param_2 = (void *)(*in_stack_00000050 + 0x48);
          param_1 = &stack0x00000100;
          goto code_r0x03e7aa6c;
        }
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        iVar9 = FUN_040ced70(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar20 = (float)FUN_040ced80(&stack0x00000100,0);
        fVar23 = fStack000000000000002c;
        if (*(char *)(unaff_x19 + 0x305) != '\0') {
          fVar23 = 1.0;
        }
        if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*(long *)(unaff_x19 + 0x100) + 0x50),0x60);
        fVar29 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_03e7bfc0;
        FUN_040cf28c(&stack0x00000be0,*(long *)(unaff_x29 + 0x20),0);
        in_stack_000000c0 = in_stack_00000be0;
        in_stack_000000c8 = in_stack_00000be8;
        in_stack_000000d0 = in_stack_00000bf0;
        fVar21 = (float)FUN_040cf0bc(&stack0x000000c0,0);
        if (*(long *)(unaff_x29 + 0x20) == 0) goto LAB_03e7bfc0;
        fVar24 = *(float *)(unaff_x29 + 0x2c);
        fVar32 = (float)FUN_040cf2c8(*(long *)(unaff_x29 + 0x20),0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar22 = (float)FUN_040ceda0(&stack0x00000100,0);
        if (*unaff_x23 == 0) goto LAB_03e7bfc0;
        fVar23 = (unaff_s15 / (float)iVar9) * fVar20 * fVar23;
        fVar20 = fVar23 * (fVar29 / fVar21) * fVar24 * fVar32;
        fVar23 = fVar23 / fVar20;
        fVar22 = fVar23 * fVar22;
        memmove(&stack0x00000100,(void *)(*unaff_x23 + 0x50),0x60);
        fVar29 = (float)FUN_040cede0(&stack0x00000100,0);
        fVar23 = fVar23 * fVar29;
        goto LAB_03e7af54;
      }
      goto LAB_03e7bfb0;
    }
    bVar7 = unaff_w28 == 0xad;
    lVar17 = *in_stack_00000078;
    fVar22 = 0.0;
    fVar21 = 0.0;
    if (!bVar7 && unaff_w28 != 3) {
      fVar21 = fVar29;
    }
    if (lVar17 == 0) goto LAB_03e7bfc0;
    uVar10 = *unaff_x21;
    fVar23 = 0.0;
    fVar20 = fVar29;
    fVar29 = fVar21;
    uVar11 = in_stack_00000bd8;
    goto LAB_03e7afbc;
  }
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
  if (*(uint *)(lVar17 + 0x18) <= *unaff_x21) goto LAB_03e7c214;
  *unaff_x25 = *(long *)(lVar17 + (long)(int)*unaff_x21 * unaff_x22 + 0x30);
  thunk_FUN_01f51358();
  if (*unaff_x25 == 0) goto LAB_03e7bfb0;
  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
     (lVar17 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar17 == 0)) goto LAB_03e7bfc0;
  uVar11 = *unaff_x21;
  uVar10 = *(uint *)(lVar17 + 0x18);
  if (uVar10 <= uVar11) goto LAB_03e7c214;
  *(undefined4 *)(unaff_x19 + 0x120) =
       *(undefined4 *)(lVar17 + (long)(int)uVar11 * unaff_x22 + 0x58);
  if (bVar7) {
    lVar19 = *(long *)(unaff_x19 + 0x478);
    if (lVar19 == 0) goto LAB_03e7bfc0;
    if (*(uint *)(lVar19 + 0x18) <= unaff_w27) goto LAB_03e7c214;
    if ((*(int *)(lVar19 + (long)(int)unaff_w27 * 0xc + 0x20) == 10) &&
       (uVar11 != *(uint *)(unaff_x19 + 0x498))) {
      if (uVar10 <= uVar11 - 1) goto LAB_03e7c214;
      if (*unaff_x23 == 0) goto LAB_03e7bfc0;
      fVar20 = *(float *)(lVar17 + (long)(int)(uVar11 - 1) * (long)iVar9 + 0x60);
      iVar9 = FUN_040ced70(*unaff_x23 + 0x50,0);
      lVar17 = *unaff_x23;
      goto joined_r0x03e7ad30;
    }
  }
  if (*unaff_x23 == 0) goto LAB_03e7bfc0;
  fVar20 = *(float *)(unaff_x19 + 0x1e8);
  iVar9 = FUN_040ced70(*unaff_x23 + 0x50,0);
  lVar17 = *(long *)(unaff_x19 + 0x100);
joined_r0x03e7ad30:
  if (lVar17 == 0) goto LAB_03e7bfc0;
  fVar21 = (float)FUN_040ced80(lVar17 + 0x50,0);
  fVar29 = fStack000000000000002c;
  if (*(char *)(unaff_x19 + 0x305) != '\0') {
    fVar29 = 1.0;
  }
  fVar23 = 0.0;
  fVar22 = 0.0;
  if (!(bool)(bVar7 & unaff_w28 == 0x2026)) {
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar22 = (float)FUN_040ceda0(*unaff_x23 + 0x50,0);
    if (*unaff_x23 == 0) goto LAB_03e7bfc0;
    fVar23 = (float)FUN_040cede0(*unaff_x23 + 0x50,0);
  }
  if ((*unaff_x25 == 0) || (lVar17 = *(long *)(unaff_x19 + 0x488), lVar17 == 0)) goto LAB_03e7bfc0;
  uVar10 = *(uint *)(unaff_x19 + 0x494);
  if (*(uint *)(lVar17 + 0x18) <= uVar10) goto LAB_03e7c214;
  fVar20 = ((unaff_s14 * fVar20) / (float)iVar9) * fVar21 * fVar29 * *(float *)(unaff_x19 + 0x404) *
           *(float *)(*unaff_x25 + 0x2c);
  *(undefined4 *)(lVar17 + (long)(int)uVar10 * unaff_x22 + 0x2c) = 0;
  goto LAB_03e7afa0;
}


