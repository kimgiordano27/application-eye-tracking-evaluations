/*
FUNCTION_NAME: FullSerializer.Internal.fsPortableReflection$$GetFlattenedMethods
ENTRY_POINT: 00e41454
PROGRAM: Lovesick-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsPortableReflection__GetFlattenedMethods
               (float param_1,undefined1 param_2 [16],ulong param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint in_w8;
  float *pfVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong in_x10;
  long *unaff_x19;
  undefined8 uVar19;
  undefined8 *puVar20;
  long unaff_x20;
  uint uVar21;
  ulong unaff_x21;
  uint *puVar22;
  uint uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong unaff_x22;
  ulong uVar26;
  long *unaff_x24;
  long *unaff_x25;
  long lVar27;
  double *unaff_x26;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float unaff_s8;
  int iVar37;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s13;
  float fVar38;
  ulong unaff_d14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  ulong in_stack_00000018;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 *in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  double *in_stack_00000060;
  uint in_stack_00000068;
  float fStack0000000000000070;
  long in_stack_00000078;
  
code_r0x00e41454:
  if ((uint)in_x10 < in_w8) {
                    /* catch() { ... } // from try @ 00e4129c with catch @ 00e41464 */
                    /* catch() { ... } // from try @ 00e41290 with catch @ 00e4147c */
                    /* catch() { ... } // from try @ 00e41364 with catch @ 00e41490 */
                    /* catch() { ... } // from try @ 00e4132c with catch @ 00e414a8 */
    *(uint *)(unaff_x20 + in_x10 * 4 + 0x20) =
         (int)unaff_s11 & 0xffU | ((int)unaff_s9 & 0xffU) << 8 | ((int)unaff_s13 & 0xffU) << 0x10 |
         (int)param_1 << 0x18;
                    /* catch() { ... } // from try @ 00e41254 with catch @ 00e414ac */
LAB_00e43400:
    do {
      lVar15 = *unaff_x24;
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
      lVar15 = lVar15 + unaff_x21 * 4;
      fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      uVar21 = (uint)unaff_x22;
      if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
      lVar15 = lVar15 + (long)(int)uVar21 * 4;
      fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      uVar23 = (uint)unaff_x29;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
      lVar15 = lVar15 + (long)(int)uVar23 * 4;
      fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
      lVar15 = unaff_x19[0x5f];
      if (lVar15 == 0) goto LAB_00e443fc;
      uVar17 = (uint)in_stack_00000058;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
      lVar15 = lVar15 + in_stack_00000058 * 4;
      uVar11 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
      *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
      uVar13 = FUN_00e3703c();
      if ((uVar13 & 1) == 0) {
        lVar15 = *unaff_x25;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar15 = *unaff_x25;
        }
        if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x20) == 1) {
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          puVar22 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
          uVar5 = *puVar22;
          fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
          fVar30 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
          fVar31 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
          fVar28 = fVar29;
          if (unaff_s10 < fVar29) {
            fVar28 = unaff_s10;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = fVar30;
          if (1.0 < fVar30) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31;
          if (1.0 < fVar31) {
            fVar30 = 1.0;
          }
          fVar38 = (float)(uVar5 >> 0x18) / 255.0;
          fVar30 = fVar30 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar31 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar30 + -0.5);
          }
          if (1.0 < fVar38) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar38 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          *puVar22 = (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          puVar22 = (uint *)(lVar15 + (long)(int)uVar21 * 4 + 0x20);
          uVar5 = *puVar22;
          fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
          fVar30 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
          fVar31 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
          fVar28 = fVar29;
          if (1.0 < fVar29) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = fVar30;
          if (1.0 < fVar30) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31;
          if (1.0 < fVar31) {
            fVar30 = 1.0;
          }
          fVar38 = (float)(uVar5 >> 0x18) / 255.0;
          fVar30 = fVar30 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar31 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar30 + -0.5);
          }
          if (1.0 < fVar38) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar38 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          *puVar22 = (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          puVar22 = (uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
          uVar21 = *puVar22;
          fVar29 = (float)FUN_026982b0((float)(uVar21 & 0xff) / 255.0,0);
          fVar30 = (float)FUN_026982b0((float)(uVar21 >> 8 & 0xff) / 255.0,0);
          fVar31 = (float)FUN_026982b0((float)(uVar21 >> 0x10 & 0xff) / 255.0,0);
          fVar28 = fVar29;
          if (1.0 < fVar29) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = fVar30;
          if (1.0 < fVar30) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31;
          if (1.0 < fVar31) {
            fVar30 = 1.0;
          }
          fVar38 = (float)(uVar21 >> 0x18) / 255.0;
          fVar30 = fVar30 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar31 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar30 + -0.5);
          }
          if (1.0 < fVar38) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar38 + -0.5);
          }
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          *puVar22 = (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
          lVar15 = *in_stack_00000030;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          puVar22 = (uint *)(lVar15 + in_stack_00000058 * 4 + 0x20);
          uVar21 = *puVar22;
          fVar29 = (float)FUN_026982b0((float)(uVar21 & 0xff) / 255.0,0);
          fVar30 = (float)FUN_026982b0((float)(uVar21 >> 8 & 0xff) / 255.0,0);
          fVar31 = (float)FUN_026982b0((float)(uVar21 >> 0x10 & 0xff) / 255.0,0);
          fVar28 = fVar29;
          if (1.0 < fVar29) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          param_3 = 0x3f800000;
          fVar29 = fVar30;
          if (1.0 < fVar30) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar30 = fVar31;
          if (1.0 < fVar31) {
            fVar30 = 1.0;
          }
          fVar38 = (float)(uVar21 >> 0x18) / 255.0;
          fVar30 = fVar30 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar31 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar30 + -0.5);
          }
          if (1.0 < fVar38) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            uVar11 = 0;
            if (dVar34 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e44170;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else {
            uVar11 = 0;
            if (dVar34 == -0.5) {
              fVar30 = -1.0;
LAB_00e44170:
              fVar30 = (float)_fStack0000000000000070 + fVar30;
              uVar11 = (ulong)(uint)fVar30;
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar30;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          *puVar22 = (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          unaff_x24 = in_stack_00000030;
        }
      }
      puVar8 = StringLiteral_4992;
      puVar7 = OVREyeGaze_TypeInfo;
      in_stack_00000050 = in_stack_00000050 + 1;
      if (in_stack_00000050 == in_stack_00000018) {
        if (((unaff_x19[0x58] == 0) || (iVar10 = FUN_026c82cc(unaff_x19[0x58],0), iVar10 < 1)) &&
           (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
        puVar7 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
        if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
        iVar10 = *(int *)(unaff_x19[0xf] + 0x10);
        plVar12 = unaff_x19 + 0xcb;
        if (iVar10 != *(int *)(unaff_x19[0xcb] + 0x18)) {
          FUN_010afdd4(plVar12,iVar10,
                       *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
        }
        if ((unaff_x19[0xcc] == 0) || (lVar15 = unaff_x19[0xf], lVar15 == 0)) goto LAB_00e443fc;
        plVar1 = unaff_x19 + 0xcc;
        if (*(int *)(lVar15 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
          FUN_010afdd4(plVar1,*(int *)(lVar15 + 0x10),*(undefined8 *)puVar7);
          lVar15 = unaff_x19[0xf];
          if (lVar15 == 0) goto LAB_00e443fc;
        }
        uVar21 = *(uint *)(lVar15 + 0x10);
        if ((int)uVar21 < 1) goto LAB_00e44358;
        uVar13 = 0;
        lVar15 = 0x20;
        goto LAB_00e442cc;
      }
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
      *unaff_x26 = _fStack0000000000000070;
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      iVar10 = FUN_00e4e99c();
      if (iVar10 <= *(int *)((long)unaff_x19 + 0x38c)) {
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        *(undefined1 *)((long)*unaff_x26 + 0x165) = 1;
      }
      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
        FUN_00e45d2c();
      }
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
        uVar11 = FUN_0269e56c(0);
        if (((fStack000000000000004c == 0.0) || ((uVar11 & 1) == 0)) ||
           (1 < (int)unaff_x19[0x2a] - 3U)) {
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          iVar10 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
          *(int *)((long)unaff_x19 + 0x38c) = iVar10;
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],iVar10,&stack0x00000070,*(undefined8 *)puVar8),
             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
          *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                           *(undefined8 *)puVar8), _fStack0000000000000070 == 0.0))
          goto LAB_00e443fc;
          *(float *)((long)unaff_x19 + 0x254) =
               *(float *)((long)_fStack0000000000000070 + 0x48) +
               *(float *)((long)unaff_x19 + 0x50c);
          *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
        }
      }
      else {
        dVar34 = *unaff_x26;
        if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x78) == 0)) goto LAB_00e443fc;
        fVar29 = *(float *)(*(long *)((long)dVar34 + 0x78) + 0x18);
        fVar28 = DAT_028aa034;
        if (fVar29 != 0.0) {
          fVar28 = fVar29;
        }
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar34 + 100)) / fVar28) &&
           (*(char *)((long)dVar34 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar34 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
          if (sVar9 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
            if (sVar9 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
              if (sVar9 != 10) {
                lVar15 = unaff_x19[0xca];
                if (lVar15 == 0) goto LAB_00e443fc;
                fVar30 = *(float *)(lVar15 + 0x48);
                fVar28 = *(float *)(unaff_x19 + 0x4b);
                fVar31 = fVar30 + *(float *)((long)unaff_x19 + 0x50c);
                fVar29 = *(float *)(unaff_x19 + 0x4a);
                if (fVar30 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar29 = fVar30;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar29;
                fVar29 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar31 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar29 = fVar31;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar29;
                fVar29 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar15,0);
                fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar28 <= fVar29) {
                  fVar28 = fVar29;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar28;
              }
            }
          }
          iVar37 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar10) {
            iVar37 = iVar10;
          }
          *(int *)((long)unaff_x19 + 0x38c) = iVar37;
        }
      }
      FUN_00e4e52c();
      if (*(char *)((long)unaff_x19 + 0x6e1) != '\0') {
        FUN_00e45d2c();
      }
      if ((char)unaff_x19[0xdc] != '\0') {
        (**(code **)(*unaff_x19 + 0x218))();
        if (unaff_x19[0x54] != 0) {
          FUN_026c868c(unaff_x19[0x54],0);
        }
        lVar15 = unaff_x19[0x55];
        if (lVar15 != 0) {
          (**(code **)(lVar15 + 0x18))
                    (*(undefined8 *)(lVar15 + 0x40),*(undefined8 *)(lVar15 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar29 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
      fVar28 = 0.0;
      if ((((0.0 < fStack000000000000004c) &&
           (uVar21 = *(uint *)(unaff_x19 + 0x2a), fVar28 = fVar29, uVar21 < 5)) &&
          ((1 << (ulong)(uVar21 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
        if (uVar21 == 4) {
          lVar15 = unaff_x19[0xc];
          if (lVar15 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar15 + 0x18)) {
            iVar10 = 0;
            do {
              FUN_0132138c(lVar15,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar28 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar15 = unaff_x19[0xc];
              if (lVar15 == 0) goto LAB_00e443fc;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(lVar15 + 0x18));
          }
        }
        else {
          lVar15 = unaff_x19[0xb];
          if (lVar15 == 0) goto LAB_00e443fc;
          iVar10 = 0;
          fVar28 = 0.0;
          while (iVar10 < *(int *)(lVar15 + 0x18)) {
            FUN_0132138c(lVar15,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
            fVar28 = fVar28 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar28;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar28)
            break;
            lVar15 = unaff_x19[0xb];
            iVar10 = iVar10 + 1;
            if (lVar15 == 0) goto LAB_00e443fc;
          }
        }
      }
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar29 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar30 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar38 = *(float *)(unaff_x19 + 0xa8);
      fVar31 = *(float *)(unaff_x19 + 199) + fVar38;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar28 + fVar29 + (fVar30 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar31;
      puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      fVar29 = 1.0;
      fVar28 = 1.0;
      uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
      in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar7 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar32;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar19,0,0);
      if ((uVar11 & 1) != 0) {
        lVar15 = __start_il2cpp();
        if (lVar15 == 0) goto LAB_00e443fc;
        if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          uVar32 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar32;
          *(float *)(unaff_x19 + 0xcf) = fVar31;
          *(float *)((long)unaff_x19 + 0x67c) = fVar38;
        }
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar7);
        DAT_03774d76 = '\x01';
      }
      lVar27 = *(long *)puVar7;
      uVar32 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
      *in_stack_00000040 = **(undefined8 **)(lVar27 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar32;
      lVar15 = (*(long **)(lVar27 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar27 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar15;
      uVar32 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
      in_stack_00000040[3] = **(undefined8 **)(lVar27 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar32;
      lVar15 = (*(long **)(lVar27 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar27 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar15;
      uVar32 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
      in_stack_00000040[6] = **(undefined8 **)(lVar27 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar32;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar19,0,0);
      if ((uVar11 & 1) != 0) {
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
          lVar15 = __start_il2cpp();
          if (lVar15 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar15 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar15 == 0) || (lVar27 = *(long *)(lVar15 + 0xc0), lVar27 == 0))
            goto LAB_00e443fc;
            uVar11 = unaff_d14;
            if (*(char *)(lVar27 + 0x18) != '\0') {
              fVar31 = *(float *)(lVar15 + 100);
              uVar11 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar31);
            }
            if (*(char *)(lVar27 + 0x19) != '\0') {
              uVar32 = FUN_00e4e9f4(uVar11);
              lVar15 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar32;
              *(float *)(unaff_x19 + 0xbf) = fVar31;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar38;
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x28) != '\0') {
              fVar30 = (float)FUN_00e4e9f4(uVar11);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              fVar35 = fVar38 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc0] =
                   CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar11);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[3] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar11);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar31 = fVar38 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar31;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar30 = (float)FUN_00e4e9f4(uVar11);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[6] =
                   CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar38 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              fVar35 = fVar38 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc0] =
                   CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[3] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar31 = fVar38 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar31;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar15,0);
              fVar30 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[6] =
                   CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar38 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar15 == 0) goto LAB_00e443fc;
            }
            lVar27 = *(long *)(lVar15 + 0xc0);
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar27 + 0x60) != '\0') {
              uVar24 = *(undefined8 *)(lVar27 + 0x68);
              uVar19 = FUN_00e5eda8(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar19,lVar15,uVar24);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              fVar35 = fVar38 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc0] =
                   CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar35;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b838(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar19,lVar15,uVar24);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[3] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar30 + (float)in_stack_00000040[3]);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar19 = FUN_00e5eea4(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar19,lVar15,uVar24);
              lVar15 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar31 = fVar38 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              unaff_x19[0xc3] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar30 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar31;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar24 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b7d8(lVar15,0);
              fVar30 = (float)FUN_00e4ecc4(uVar19,lVar15,uVar24);
              *(float *)((long)unaff_x19 + 0x63c) = fVar30;
              *(float *)(unaff_x19 + 200) = fVar31;
              *(float *)((long)unaff_x19 + 0x644) = fVar38;
              in_stack_00000040[6] =
                   CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar30 + (float)in_stack_00000040[6]);
              *(float *)((long)unaff_x19 + 0x62c) = fVar38 + *(float *)((long)unaff_x19 + 0x62c);
            }
          }
        }
      }
      in_stack_00000068 = (int)in_stack_00000050 << 2;
      if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
        if (*(char *)((long)unaff_x19 + 300) == '\0') {
          in_stack_00000040[0x1e] = unaff_x19[0x24];
        }
        else {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*unaff_x26 + 0x80);
          in_stack_00000040[0x1e] =
               CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                        (float)unaff_x19[0x24] * (float)uVar19);
        }
        lVar15 = unaff_x19[0x5e];
        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
        fVar31 = *(float *)((long)unaff_x19 + 0x674);
        uVar11 = (ulong)(int)in_stack_00000068;
        *(float *)(lVar15 + uVar11 * 0xc + 0x20) =
             fVar30 + fVar31 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
        fVar30 = *(float *)((long)unaff_x19 + 0x604);
        *(float *)(lVar15 + uVar11 * 0xc + 0x24) =
             fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
        *(float *)(lVar15 + uVar11 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5b838(*unaff_x26,0);
        uVar13 = uVar11 | 1;
        uVar21 = (uint)uVar13;
        if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
        fVar31 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar13 * 0xc + 0x20) =
             fVar30 + fVar31 + *(float *)((long)unaff_x19 + 0x60c) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
        fVar30 = *(float *)(unaff_x19 + 0xc2);
        *(float *)(lVar15 + uVar13 * 0xc + 0x24) =
             fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
        *(float *)(lVar15 + uVar13 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5eea4(*unaff_x26,0);
        uVar25 = uVar11 | 2;
        uVar23 = (uint)uVar25;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
        fVar31 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar25 * 0xc + 0x20) =
             fVar30 + fVar31 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
        fVar30 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar15 + uVar25 * 0xc + 0x24) =
             fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar30 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
        *(float *)(lVar15 + uVar25 * 0xc + 0x28) =
             fVar30 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5b7d8(*unaff_x26,0);
        uVar26 = uVar11 | 3;
        uVar17 = (uint)uVar26;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
        fVar31 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar15 + uVar26 * 0xc + 0x20) =
             fVar30 + fVar31 + *(float *)((long)unaff_x19 + 0x624) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
        param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
        *(float *)(lVar15 + uVar26 * 0xc + 0x24) =
             fVar31 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
             *(float *)(unaff_x19 + 0xdd);
        lVar15 = unaff_x19[0x5e];
        if ((lVar15 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*unaff_x26,0);
        if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
        fVar30 = *(float *)((long)unaff_x19 + 0x62c);
        *(float *)(lVar15 + uVar26 * 0xc + 0x28) =
             (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar30 +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar15 = unaff_x19[0xca];
        if (lVar15 == 0) goto LAB_00e443fc;
        lVar27 = *in_stack_00000020;
        if (*(char *)(lVar15 + 0x108) == '\0') {
          uVar32 = FUN_0272b9dc(lVar15 + 0x10,0);
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
          lVar27 = lVar27 + uVar11 * 8;
          *(undefined4 *)(lVar27 + 0x20) = uVar32;
          *(float *)(lVar27 + 0x24) = fVar30;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          lVar15 = lVar15 + uVar13 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          lVar15 = lVar15 + uVar25 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          lVar15 = lVar15 + uVar26 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          uVar32 = FUN_00e5ecc0(*unaff_x26,0);
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          FUN_00e5ecc0(unaff_x19[0xca],0);
          *(float *)((long)unaff_x19 + 0x6cc) = fVar30;
          unaff_x24 = in_stack_00000030;
        }
        else {
          if ((*(long *)(lVar15 + 0x100) == 0) ||
             (uVar32 = FUN_00e5dd14(unaff_d14,*(long *)(lVar15 + 0x100),
                                    *(undefined4 *)(lVar15 + 0x10c),0), lVar27 == 0))
          goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
          lVar27 = lVar27 + uVar11 * 8;
          *(undefined4 *)(lVar27 + 0x20) = uVar32;
          *(float *)(lVar27 + 0x24) = fVar30;
          dVar34 = *unaff_x26;
          if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar34 + 0x100),
                                *(undefined4 *)((long)dVar34 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          lVar15 = lVar15 + uVar13 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar34 = *unaff_x26;
          if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar34 + 0x100),
                                *(undefined4 *)((long)dVar34 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          lVar15 = lVar15 + uVar25 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar34 = *unaff_x26;
          if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
          lVar15 = *in_stack_00000020;
          uVar32 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar34 + 0x100),
                                      *(undefined4 *)((long)dVar34 + 0x10c),0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          lVar15 = lVar15 + uVar26 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar32;
          *(float *)(lVar15 + 0x24) = fVar30;
          dVar34 = *unaff_x26;
          if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
          uVar32 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar34 + 0x100),
                                *(undefined4 *)((long)dVar34 + 0x10c),0);
          lVar15 = unaff_x19[0xca];
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
          *(float *)((long)unaff_x19 + 0x6cc) = fVar30;
          if ((lVar15 == 0) || (lVar27 = *(long *)(lVar15 + 0x100), lVar27 == 0)) goto LAB_00e443fc;
          unaff_x24 = in_stack_00000030;
          if (((1 < *(int *)(lVar27 + 0x28)) && (0.0 < *(float *)(lVar27 + 0x34))) &&
             (*(int *)(lVar15 + 0x10c) < 0)) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
        }
      }
      else {
        dVar34 = *unaff_x26;
        if (dVar34 == 0.0) goto LAB_00e443fc;
        param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if ((*(float *)((long)dVar34 + 0x48) + *(float *)((long)dVar34 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
        lVar15 = *in_stack_00000038;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar7);
          DAT_03774d76 = '\x01';
        }
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
        uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        uVar11 = (ulong)(int)in_stack_00000068;
        lVar15 = lVar15 + uVar11 * 0xc;
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar32;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar11 | 1)) break;
        lVar15 = lVar15 + (uVar11 | 1) * 0xc;
        uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar32;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar11 | 2)) break;
        lVar15 = lVar15 + (uVar11 | 2) * 0xc;
        uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar32;
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar11 | 3)) break;
        lVar15 = lVar15 + (uVar11 | 3) * 0xc;
        uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
        *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
        *(undefined4 *)(lVar15 + 0x28) = uVar32;
      }
      if (*unaff_x26 == 0.0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar19,0,0);
      if ((uVar11 & 1) == 0) {
        lVar15 = unaff_x19[0x10];
      }
      else {
        if ((*unaff_x26 == 0.0) || (lVar15 = *(long *)((long)*unaff_x26 + 0xf8), lVar15 == 0))
        goto LAB_00e443fc;
        lVar15 = *(long *)(lVar15 + 0x18);
      }
      if (((lVar15 == 0) || (lVar15 = FUN_0272bcf4(lVar15,0), lVar15 == 0)) ||
         (plVar12 = (long *)FUN_0267dac8(lVar15,0), plVar12 == (long *)0x0)) goto LAB_00e443fc;
      iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar10;
      iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar10;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar7 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar10,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x21 = (ulong)(int)in_stack_00000068;
      unaff_x22 = unaff_x21 | 1;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x29 = unaff_x21 | 2;
      FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar7);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_x10 = unaff_x21 | 3;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,*(undefined8 *)puVar7);
      unaff_x25 = (long *)StringLiteral_9119;
      lVar15 = unaff_x19[0x60];
      if (lVar15 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar15 + 0x18) <= in_stack_00000068) ||
         (uVar21 = (uint)in_x10, *(uint *)(lVar15 + 0x18) <= uVar21)) break;
      lVar27 = unaff_x19[0xca];
      fVar30 = unaff_s8;
      if (*(float *)(lVar15 + 0x20 + unaff_x21 * 8) != *(float *)(lVar15 + 0x20 + in_x10 * 8)) {
        fVar30 = fVar29;
      }
      *(float *)(unaff_x19 + 0xda) = fVar30;
      if (lVar27 == 0) goto LAB_00e443fc;
      cVar6 = *(char *)(lVar27 + 0x108);
      fVar30 = fVar29;
      if (cVar6 != '\0' || 0x7fffffff < *(uint *)(lVar27 + 0x138)) {
        fVar30 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar27 + 0x84) * fVar30;
      if (cVar6 == '\0') {
        iVar37 = *(int *)(lVar27 + 0x160);
        iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        param_3 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar37 / ((float)iVar10 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar37 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        fVar31 = (float)iVar37;
        fVar30 = (float)iVar10;
        puVar20 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar27 + 0x100) == 0) goto LAB_00e443fc;
        fVar30 = (float)FUN_00e5df18(*(long *)(lVar27 + 0x100),0);
        puVar20 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*in_stack_00000060 == 0.0) ||
            (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) ||
           (plVar12 = *(long **)(lVar15 + 0x18), plVar12 == (long *)0x0)) goto LAB_00e443fc;
        iVar10 = (**(code **)(*plVar12 + 0x188))(plVar12,*(undefined8 *)(*plVar12 + 400));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
        fVar31 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar30 / (*(float *)(lVar15 + 0x40) * (float)iVar10 * 0.25);
        FUN_00e5df18(lVar15,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar15 = *(long *)(unaff_x19[0xca] + 0x100), lVar15 == 0 ||
            (plVar12 = *(long **)(lVar15 + 0x18), plVar12 == (long *)0x0)))) goto LAB_00e443fc;
        iVar10 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
        fVar30 = *(float *)(lVar15 + 0x44) * (float)iVar10;
      }
      fVar38 = 0.25;
      fVar31 = fVar31 / (fVar30 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar31;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar31,(int)unaff_x19[0xdb]);
      FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar20);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar20);
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar11 = FUN_02681b9c(uVar19,0,0);
      fVar31 = (float)param_3;
      fVar30 = (float)unaff_d14;
      uVar17 = (uint)unaff_x22;
      uVar23 = (uint)unaff_x29;
      if ((uVar11 & 1) != 0) {
        if (in_stack_00000050 == in_stack_00000010) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b838(*in_stack_00000060,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar14 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar31 = fVar31 - pfVar14[2];
          param_3 = (ulong)(uint)fVar31;
          if (fVar31 * fVar31 +
              (fVar35 - *pfVar14) * (fVar35 - *pfVar14) +
              (fVar38 - pfVar14[1]) * (fVar38 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
        }
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar15 == 0)) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(lVar15 + 0x38);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__)
          ;
          DAT_03774d77 = '\x01';
        }
        fVar31 = (float)uVar19 -
                 (float)**(undefined8 **)
                          (*(long *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                          0xb8);
        fVar38 = (float)((ulong)uVar19 >> 0x20) -
                 (float)((ulong)**(undefined8 **)
                                  (*(long *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  + 0xb8) >> 0x20);
        if (DAT_028aa020 <= fVar31 * fVar31 + fVar38 * fVar38) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        dVar34 = *in_stack_00000060;
        if ((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xb0), lVar15 == 0))
        goto LAB_00e443fc;
        fVar38 = fVar30 * *(float *)(lVar15 + 0x38);
        *(float *)(unaff_x19 + 0xc9) = fVar38;
        fVar31 = fVar30 * *(float *)(lVar15 + 0x3c);
        *(float *)((long)unaff_x19 + 0x64c) = fVar31;
        if (*(char *)(lVar15 + 0x25) != '\0') {
          fVar28 = 1.0 / *(float *)((long)dVar34 + 0x84);
        }
        lVar15 = *in_stack_00000038;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
        lVar27 = lVar15 + unaff_x21 * 0xc;
        fVar35 = *(float *)(lVar27 + 0x20);
        uVar19 = *(undefined8 *)(lVar27 + 0x24);
        *(float *)(unaff_x19 + 0xcd) = fVar35;
        in_stack_00000040[0xf] = uVar19;
        *(float *)(unaff_x19 + 0xd0) = fVar35;
        fVar36 = (float)uVar19;
        *(float *)((long)unaff_x19 + 0x684) = fVar36;
        if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
        lVar27 = lVar15 + unaff_x22 * 0xc;
        uVar32 = *(undefined4 *)(lVar27 + 0x20);
        uVar19 = *(undefined8 *)(lVar27 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
        in_stack_00000040[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd2) = uVar32;
        *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
        lVar27 = lVar15 + unaff_x29 * 0xc;
        uVar32 = *(undefined4 *)(lVar27 + 0x20);
        uVar19 = *(undefined8 *)(lVar27 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
        in_stack_00000040[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar32;
        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
        if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
        lVar15 = lVar15 + in_x10 * 0xc;
        uVar32 = *(undefined4 *)(lVar15 + 0x20);
        uVar19 = *(undefined8 *)(lVar15 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
        in_stack_00000040[0xf] = uVar19;
        *(undefined4 *)(unaff_x19 + 0xd6) = uVar32;
        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
        lVar15 = *(long *)((long)dVar34 + 0xb0);
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(char *)(lVar15 + 0x24) == '\0') {
          lVar27 = *in_stack_00000028;
          if (lVar27 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar27 + 0x18);
          if (uVar5 <= in_stack_00000068) break;
          lVar16 = lVar27 + unaff_x21 * 8;
          *(float *)(lVar16 + 0x20) = (fVar38 + fVar28 * fVar35) - *(float *)(lVar15 + 0x30);
          *(float *)(lVar16 + 0x24) = (fVar31 + fVar28 * fVar36) - *(float *)(lVar15 + 0x34);
          if (((uVar5 <= uVar17) ||
              (*(ulong *)(lVar27 + unaff_x22 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar28 +
                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                             (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xd2] * fVar28 + (float)unaff_x19[0xc9]) -
                             (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar23)) ||
             (*(ulong *)(lVar27 + unaff_x29 * 8 + 0x20) =
                   CONCAT44((fVar28 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                            (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                            (fVar28 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                            (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar21)) break;
          param_3 = unaff_x19[0xc9];
          *(ulong *)(lVar27 + in_x10 * 8 + 0x20) =
               CONCAT44((fVar28 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(param_3 >> 0x20)
                        ) - (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                        (fVar28 * (float)unaff_x19[0xd6] + (float)param_3) -
                        (float)*(undefined8 *)(lVar15 + 0x30));
        }
        else {
          fVar3 = *(float *)((long)dVar34 + 0x44);
          *(float *)(unaff_x19 + 0xd8) = fVar3;
          fVar4 = *(float *)((long)dVar34 + 0x48);
          lVar27 = unaff_x19[0x61];
          *(float *)((long)unaff_x19 + 0x6c4) = fVar4;
          if (lVar27 == 0) goto LAB_00e443fc;
          uVar5 = *(uint *)(lVar27 + 0x18);
          if (uVar5 <= in_stack_00000068) break;
          lVar16 = lVar27 + unaff_x21 * 8;
          *(float *)(lVar16 + 0x20) =
               (fVar38 + fVar28 * (fVar35 - fVar3)) - *(float *)(lVar15 + 0x30);
          *(float *)(lVar16 + 0x24) =
               (fVar31 + fVar28 * (fVar36 - fVar4)) - *(float *)(lVar15 + 0x34);
          if (((uVar5 <= uVar17) ||
              (*(ulong *)(lVar27 + unaff_x22 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar28) -
                             (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xc9] +
                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar28) -
                             (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar23)) ||
             (*(ulong *)(lVar27 + unaff_x29 * 8 + 0x20) =
                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                            fVar28 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                            (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                            ((float)unaff_x19[0xc9] +
                            fVar28 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                            (float)*(undefined8 *)(lVar15 + 0x30)), uVar5 <= uVar21)) break;
          param_3 = unaff_x19[0xd8];
          *(ulong *)(lVar27 + in_x10 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        fVar28 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(param_3 >> 0x20)
                                 )) - (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] + fVar28 * ((float)unaff_x19[0xd6] - (float)param_3)
                        ) - (float)*(undefined8 *)(lVar15 + 0x30));
        }
      }
LAB_00e3dbd8:
      dVar34 = *in_stack_00000060;
      if (dVar34 == 0.0) goto LAB_00e443fc;
      if (*(char *)((long)dVar34 + 0x108) != '\0') {
        if (*(long *)((long)dVar34 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar34 + 0x100) + 0x20) == '\0') {
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          lVar27 = *in_stack_00000028;
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
          *(undefined8 *)(lVar27 + unaff_x21 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + unaff_x21 * 8 + 0x20);
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          lVar27 = *in_stack_00000028;
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= uVar17) break;
          *(undefined8 *)(lVar27 + (long)(int)uVar17 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + (long)(int)uVar17 * 8 + 0x20);
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          lVar27 = *in_stack_00000028;
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= uVar23) break;
          *(undefined8 *)(lVar27 + (long)(int)uVar23 * 8 + 0x20) =
               *(undefined8 *)(lVar15 + (long)(int)uVar23 * 8 + 0x20);
          lVar15 = *in_stack_00000020;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          lVar27 = *in_stack_00000028;
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= uVar21) break;
          *(undefined8 *)(lVar27 + in_x10 * 8 + 0x20) = *(undefined8 *)(lVar15 + in_x10 * 8 + 0x20);
          dVar34 = *in_stack_00000060;
          if (dVar34 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar33 = DAT_028aa048;
      unaff_x26 = in_stack_00000060;
      in_stack_00000058 = in_x10;
      if (*(char *)((long)dVar34 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar19 = *(undefined8 *)((long)dVar34 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(uVar19,0,0);
        dVar34 = *in_stack_00000060;
        if (dVar34 == 0.0) goto LAB_00e443fc;
        if ((uVar11 & 1) == 0) {
          uVar19 = *(undefined8 *)((long)dVar34 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_02681b9c(uVar19,0,0);
          dVar34 = DAT_028aa048;
          if ((uVar11 & 1) == 0) goto LAB_00e3dfe0;
          lVar15 = *unaff_x24;
          dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
               (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          *(uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
               (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
               (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
          }
          dVar33 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar34 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar34 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
          *(uint *)(lVar15 + in_x10 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
               (int)fVar31 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_s10 = 1.0;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_02681b9c(uVar19,0,0);
          if ((uVar11 & 1) == 0) goto LAB_00e43400;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          puVar22 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
          uVar5 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar38 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar31 = *(float *)(lVar15 + 0x20);
          fVar30 = *(float *)(lVar15 + 0x24);
          fVar28 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar29 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar28 = -1.0;
LAB_00e3ede4:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar29 = (float)(int)(fVar28 + -0.5);
          }
          fVar31 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar31;
          fVar28 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar38 = fVar31;
          if (1.0 < fVar31) {
            fVar38 = 1.0;
          }
          fVar30 = ((float)(uVar5 >> 0x18) / 255.0) * fVar30;
          fVar38 = fVar38 * 255.0;
          if (fVar31 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar31;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar31 = fVar30;
          if (1.0 < fVar30) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e40174;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = -1.0;
LAB_00e40174:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          *puVar22 = (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          puVar22 = (uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20);
          uVar17 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar17 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar38 = ((float)(uVar17 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar31 = *(float *)(lVar15 + 0x20);
          fVar30 = *(float *)(lVar15 + 0x24);
          fVar28 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = 1.0;
              goto LAB_00e404dc;
            }
            fVar29 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar28 = -1.0;
LAB_00e404dc:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar29 = (float)(int)(fVar28 + -0.5);
          }
          fVar31 = ((float)(uVar17 >> 0x10 & 0xff) / 255.0) * fVar31;
          fVar28 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar38 = fVar31;
          if (1.0 < fVar31) {
            fVar38 = 1.0;
          }
          fVar30 = ((float)(uVar17 >> 0x18) / 255.0) * fVar30;
          fVar38 = fVar38 * 255.0;
          if (fVar31 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar31;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar31 = fVar30;
          if (1.0 < fVar30) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = -1.0;
LAB_00e40a4c:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          *puVar22 = (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          lVar15 = lVar15 + (long)(int)uVar23 * 4;
        }
        else {
          lVar15 = *(long *)((long)dVar34 + 0xa8);
          if (lVar15 == 0) goto LAB_00e443fc;
          fVar28 = *(float *)(lVar15 + 0x24);
          if (fVar28 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          unaff_x25 = (long *)StringLiteral_9119;
          cVar6 = *(char *)(lVar15 + 0x2c);
          lVar16 = *unaff_x24;
          lVar27 = *(long *)(lVar15 + 0x18);
          fVar30 = fVar30 * fVar28;
          if (*(int *)(lVar15 + 0x28) == 1) {
            if (cVar6 == '\0') {
              if (lVar27 == 0) goto LAB_00e443fc;
              fVar31 = *(float *)(lVar15 + 0x20);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              fVar30 = fVar30 + (*(float *)((long)dVar34 + 0x48) * fVar31) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = fVar29;
              }
              fVar35 = fVar28;
              if (fVar30 < 0.0) {
                fVar35 = 0.0;
              }
              fVar35 = (float)FUN_0269ad38(fVar35,lVar27,0);
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = fVar29;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3eeac;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar29;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = 0.0;
              }
              dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar34 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41534;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar28;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar31 < 0.0) {
                fVar28 = 0.0;
              }
              dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar34 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar31 = fVar38;
              if (1.0 < fVar38) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
              *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar31 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (lVar27 = *(long *)(lVar15 + 0x18), lVar27 == 0)) goto LAB_00e443fc;
              fVar30 = *(float *)((long)dVar34 + 0x48);
              fVar31 = *(float *)((long)dVar34 + 0x84);
              lVar16 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar28 = fVar29;
              if (1.0 < fVar29) {
                fVar28 = 1.0;
              }
            }
            else {
              if (lVar27 == 0) goto LAB_00e443fc;
              fVar31 = *(float *)((long)dVar34 + 0x84);
              fVar38 = *(float *)(lVar15 + 0x20);
              fVar30 = fVar30 + ((*(float *)((long)dVar34 + 0x48) + fVar31) * fVar38) / fVar31;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = fVar29;
              }
              fVar35 = fVar28;
              if (fVar30 < 0.0) {
                fVar35 = 0.0;
              }
              fVar35 = (float)FUN_0269ad38(fVar35,lVar27,0);
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = fVar29;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ed6c;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar29;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar29 = fVar28;
              if (1.0 < fVar28) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar28 < 0.0) {
                fVar29 = 0.0;
              }
              dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar34 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f2ec;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar28;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar31 < 0.0) {
                fVar28 = 0.0;
              }
              dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar34 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar31 = fVar38;
              if (1.0 < fVar38) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
              *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar31 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (lVar27 = *(long *)(lVar15 + 0x18), lVar27 == 0)) goto LAB_00e443fc;
              fVar30 = *(float *)((long)dVar34 + 0x84);
              fVar31 = *(float *)(lVar15 + 0x20);
              lVar16 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       ((*(float *)((long)dVar34 + 0x48) + fVar30) * fVar31) / fVar30;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar28 = fVar29;
              if (1.0 < fVar29) {
                fVar28 = 1.0;
              }
            }
            fVar38 = fVar28;
            if (fVar29 < 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = (float)FUN_0269ad38(fVar38,lVar27,0);
            fVar29 = fVar38;
            if (1.0 < fVar38) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar38 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar38 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar29;
              }
            }
            else {
              fVar38 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar28;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar30 = fVar31;
            if (1.0 < fVar31) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar31 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar17) break;
            *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
                 (int)fVar30 << 0x18;
            dVar34 = *in_stack_00000060;
            if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
               (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
            fVar30 = *(float *)((long)dVar34 + 0x48);
            fVar31 = *(float *)((long)dVar34 + 0x84);
            lVar27 = *unaff_x24;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar28 = fVar29;
            if (1.0 < fVar29) {
              fVar28 = 1.0;
            }
            fVar38 = fVar28;
            if (fVar29 < 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar38;
            if (1.0 < fVar38) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar38 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar38 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar29;
              }
            }
            else {
              fVar38 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar28;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar30 = fVar31;
            if (1.0 < fVar31) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar31 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar23) break;
            *(uint *)(lVar27 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
                 (int)fVar30 << 0x18;
            dVar34 = *in_stack_00000060;
            if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
               (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
            fVar30 = *(float *)((long)dVar34 + 0x48);
            fVar31 = *(float *)((long)dVar34 + 0x84);
            lVar27 = *unaff_x24;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar28 = fVar29;
            if (1.0 < fVar29) {
              fVar28 = 1.0;
            }
            fVar38 = fVar28;
            if (fVar29 < 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar38;
            if (1.0 < fVar38) {
              fVar29 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar29 = fVar29 * 255.0;
            if (fVar38 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar38 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar29;
              }
            }
            else {
              fVar38 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
LAB_00e42040:
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (fVar29 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              fVar29 = fVar28 + 1.0;
              goto LAB_00e425d4;
            }
            fVar28 = (float)(int)(fVar29 + 0.5);
          }
          else {
            lVar18 = *in_stack_00000038;
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) break;
            if (lVar27 == 0) goto LAB_00e443fc;
            fVar31 = *(float *)(lVar18 + unaff_x21 * 0xc + 0x20);
            fVar38 = *(float *)((long)dVar34 + 0x84);
            fVar30 = fVar30 + (fVar31 * *(float *)(lVar15 + 0x20)) / fVar38;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = fVar29;
            }
            fVar35 = fVar28;
            if (fVar30 < 0.0) {
              fVar35 = 0.0;
            }
            fVar35 = (float)FUN_0269ad38(fVar35,lVar27,0);
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = fVar29;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3e0b0;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar29;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ee80;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar28;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar28 = fVar31;
            if (1.0 < fVar31) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar31 = fVar38;
            if (1.0 < fVar38) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar38 < 0.0) {
              fVar31 = 0.0;
            }
            dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar34 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            fVar38 = 1.0;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
            *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                 (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
                 (int)fVar31 << 0x18;
            unaff_x25 = (long *)StringLiteral_9119;
            dVar34 = *in_stack_00000060;
            if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
               (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
            lVar18 = *unaff_x24;
            lVar16 = *(long *)(lVar15 + 0x18);
            fVar28 = fStack0000000000000048 * *(float *)(lVar15 + 0x24);
            if (cVar6 != '\0') {
              if (uVar17 < *(uint *)(lVar27 + 0x18)) {
                if (lVar16 != 0) {
                  fVar30 = *(float *)(lVar27 + (long)(int)uVar17 * 0xc + 0x20);
                  fVar31 = *(float *)((long)dVar34 + 0x84);
                  fVar28 = fVar28 + (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
                  fVar28 = fVar28 - (float)(int)fVar28;
                  fVar29 = fVar28;
                  if (1.0 < fVar28) {
                    fVar29 = fVar38;
                  }
                  fVar35 = fVar29;
                  if (fVar28 < 0.0) {
                    fVar35 = 0.0;
                  }
                  fVar35 = (float)FUN_0269ad38(fVar35,lVar16,0);
                  fVar28 = fVar35;
                  if (1.0 < fVar35) {
                    fVar28 = fVar38;
                  }
                  fVar28 = fVar28 * 255.0;
                  if (fVar35 < 0.0) {
                    fVar28 = 0.0;
                  }
                  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
                  if (0.0 <= fVar28) {
                    if (dVar34 == 0.5) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar38 = (float)(int)(fVar28 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = fVar28;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar28 + -0.5);
                  }
                  fVar28 = fVar29;
                  if (1.0 < fVar29) {
                    fVar28 = 1.0;
                  }
                  fVar28 = fVar28 * 255.0;
                  if (fVar29 < 0.0) {
                    fVar28 = 0.0;
                  }
                  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
                  if (0.0 <= fVar28) {
                    if (dVar34 == 0.5) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar29 = (float)(int)(fVar28 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = fVar28;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar28 + -0.5);
                  }
                  fVar28 = fVar30;
                  if (1.0 < fVar30) {
                    fVar28 = 1.0;
                  }
                  fVar28 = fVar28 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar28 = 0.0;
                  }
                  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
                  if (0.0 <= fVar28) {
                    if (dVar34 == 0.5) {
                      fVar28 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar28 = (float)(int)(fVar28 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + -0.5);
                  }
                  fVar30 = fVar31;
                  if (1.0 < fVar31) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar31 < 0.0) {
                    fVar30 = 0.0;
                  }
                  dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar30 = (float)(int)(fVar30 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + -0.5);
                  }
                  if (lVar18 != 0) {
                    if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                      *(uint *)(lVar18 + (long)(int)uVar17 * 4 + 0x20) =
                           (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                           ((int)fVar28 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
                      dVar34 = *in_stack_00000060;
                      if (((dVar34 != 0.0) && (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 != 0)
                          ) && (lVar27 = *in_stack_00000038, lVar27 != 0)) {
                        if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                          if (*(long *)(lVar15 + 0x18) != 0) {
                            fVar30 = *(float *)(lVar27 + (long)(int)uVar23 * 0xc + 0x20);
                            fVar31 = *(float *)((long)dVar34 + 0x84);
                            lVar27 = *unaff_x24;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                                     (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar28 = fVar29;
                            if (1.0 < fVar29) {
                              fVar28 = 1.0;
                            }
                            fVar38 = fVar28;
                            if (fVar29 < 0.0) {
                              fVar38 = 0.0;
                            }
                            fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0);
                            fVar29 = fVar38;
                            if (1.0 < fVar38) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar38 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar34 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar38 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar34 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = fVar29;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar28;
                            if (1.0 < fVar28) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar28 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar34 == 0.5) {
                                fVar28 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar34 == -0.5) {
                              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar28;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar28 = fVar30;
                            if (1.0 < fVar30) {
                              fVar28 = 1.0;
                            }
                            fVar28 = fVar28 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar28 = 0.0;
                            }
                            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
                            if (0.0 <= fVar28) {
                              if (dVar34 == 0.5) {
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar28 = (float)(int)(fVar28 + 0.5);
                              }
                            }
                            else if (dVar34 == -0.5) {
                              fVar28 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar28 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar28 = (float)(int)(fVar28 + -0.5);
                            }
                            fVar30 = fVar31;
                            if (1.0 < fVar31) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar31 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                            unaff_x25 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar30) {
                              if (dVar34 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar34 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            if (lVar27 != 0) {
                              if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                                *(uint *)(lVar27 + (long)(int)uVar23 * 4 + 0x20) =
                                     (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
                                dVar34 = *in_stack_00000060;
                                if (((dVar34 != 0.0) &&
                                    (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 != 0)) &&
                                   (lVar27 = *in_stack_00000038, lVar27 != 0)) {
                                  if (uVar21 < *(uint *)(lVar27 + 0x18)) {
                                    if (*(long *)(lVar15 + 0x18) != 0) {
                                      fVar30 = *(float *)(lVar27 + in_x10 * 0xc + 0x20);
                                      fVar31 = *(float *)((long)dVar34 + 0x84);
                                      lVar27 = *unaff_x24;
                                      fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                                               (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
                                      fVar29 = fVar29 - (float)(int)fVar29;
                                      fVar28 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar28 = 1.0;
                                      }
                                      fVar38 = fVar28;
                                      if (fVar29 < 0.0) {
                                        fVar38 = 0.0;
                                      }
                                      fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0
                                                                  );
                                      fVar29 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar29 = 1.0;
                                      }
                                      param_3 = 0x437f0000;
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
                                      if (0.0 <= fVar29) {
                                        if (dVar34 == 0.5) {
                                          fVar29 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar38 = (float)(int)(fVar29 + 0.5);
                                      }
                                      else if (dVar34 == -0.5) {
                                        fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar29;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar29 + -0.5);
                                      }
                                      fVar29 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar29 = 1.0;
                                      }
                                      fVar29 = fVar29 * 255.0;
                                      if (fVar28 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      goto LAB_00e42040;
                                    }
                                    goto LAB_00e443fc;
                                  }
                                  break;
                                }
                                goto LAB_00e443fc;
                              }
                              break;
                            }
                          }
                          goto LAB_00e443fc;
                        }
                        break;
                      }
                      goto LAB_00e443fc;
                    }
                    break;
                  }
                }
                goto LAB_00e443fc;
              }
              break;
            }
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
            if (lVar16 == 0) goto LAB_00e443fc;
            fVar30 = *(float *)(lVar27 + unaff_x21 * 0xc + 0x20);
            fVar31 = *(float *)((long)dVar34 + 0x84);
            fVar28 = fVar28 + (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar28 = fVar28 - (float)(int)fVar28;
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = fVar38;
            }
            fVar35 = fVar29;
            if (fVar28 < 0.0) {
              fVar35 = 0.0;
            }
            fVar35 = (float)FUN_0269ad38(fVar35,lVar16,0);
            fVar28 = fVar35;
            if (1.0 < fVar35) {
              fVar28 = fVar38;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar35 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar38 = (float)(int)(fVar28 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar28;
              }
            }
            else {
              fVar38 = (float)(int)(fVar28 + -0.5);
            }
            fVar28 = fVar29;
            if (1.0 < fVar29) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar29 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar29 = (float)(int)(fVar28 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar28;
              }
            }
            else {
              fVar29 = (float)(int)(fVar28 + -0.5);
            }
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar30 = fVar31;
            if (1.0 < fVar31) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar31 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar17) break;
            *(uint *)(lVar18 + (long)(int)uVar17 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
                 (int)fVar30 << 0x18;
            dVar34 = *in_stack_00000060;
            if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
               (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
            if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
            fVar30 = *(float *)(lVar27 + unaff_x21 * 0xc + 0x20);
            fVar31 = *(float *)((long)dVar34 + 0x84);
            lVar27 = *unaff_x24;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar28 = fVar29;
            if (1.0 < fVar29) {
              fVar28 = 1.0;
            }
            fVar38 = fVar28;
            if (fVar29 < 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar38;
            if (1.0 < fVar38) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar38 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar38 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar29;
              }
            }
            else {
              fVar38 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar28;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar34 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar30 = fVar31;
            if (1.0 < fVar31) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar31 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar23) break;
            *(uint *)(lVar27 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
                 (int)fVar30 << 0x18;
            dVar34 = *in_stack_00000060;
            if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
               (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) break;
            if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
            fVar30 = *(float *)(lVar27 + unaff_x21 * 0xc + 0x20);
            fVar31 = *(float *)((long)dVar34 + 0x84);
            lVar27 = *unaff_x24;
            fVar29 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                     (fVar30 * *(float *)(lVar15 + 0x20)) / fVar31;
            fVar29 = fVar29 - (float)(int)fVar29;
            fVar28 = fVar29;
            if (1.0 < fVar29) {
              fVar28 = 1.0;
            }
            fVar38 = fVar28;
            if (fVar29 < 0.0) {
              fVar38 = 0.0;
            }
            fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar15 + 0x18),0);
            fVar29 = fVar38;
            if (1.0 < fVar38) {
              fVar29 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar29 = fVar29 * 255.0;
            if (fVar38 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar34 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar38 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar29;
              }
            }
            else {
              fVar38 = (float)(int)(fVar29 + -0.5);
            }
            fVar29 = fVar28;
            if (1.0 < fVar28) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar28 < 0.0) {
              fVar29 = 0.0;
            }
            dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar34 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              fVar29 = fVar28 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar29;
              }
            }
            else {
              fVar28 = (float)(int)(fVar29 + -0.5);
            }
          }
          unaff_s8 = 0.0;
          unaff_s10 = 1.0;
          fVar29 = fVar30;
          if (1.0 < fVar30) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar30 < 0.0) {
            fVar29 = 0.0;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar30 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = fVar29;
            }
          }
          else {
            fVar30 = (float)(int)(fVar29 + -0.5);
          }
          fVar29 = fVar31;
          if (1.0 < fVar31) {
            fVar29 = 1.0;
          }
          fVar29 = fVar29 * 255.0;
          if (fVar31 < 0.0) {
            fVar29 = 0.0;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar31 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = fVar29;
            }
          }
          else {
            fVar31 = (float)(int)(fVar29 + -0.5);
          }
          if (lVar27 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar27 + 0x18) <= uVar21) break;
          *(uint *)(lVar27 + in_x10 * 4 + 0x20) =
               (int)fVar38 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
               (int)fVar31 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_02681b9c(uVar19,0,0);
          if ((uVar11 & 1) == 0) goto LAB_00e43400;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
          puVar22 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
          uVar5 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar28 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar38 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar31 = *(float *)(lVar15 + 0x20);
          fVar30 = *(float *)(lVar15 + 0x24);
          fVar29 = fVar28 * 255.0;
          if (fVar28 < 0.0) {
            fVar29 = 0.0;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar28 = 1.0;
              goto LAB_00e4287c;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar28 = -1.0;
LAB_00e4287c:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar28 = fVar38 * 255.0;
          fVar31 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar31;
          if (fVar38 < 0.0) {
            fVar28 = 0.0;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar38 = fVar31;
          if (1.0 < fVar31) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          fVar30 = ((float)(uVar5 >> 0x18) / 255.0) * fVar30;
          if (fVar31 < 0.0) {
            fVar38 = 0.0;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar31;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar31 = fVar30;
          if (1.0 < fVar30) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = 0.0;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e42a44;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = -1.0;
LAB_00e42a44:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          *puVar22 = (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
          puVar22 = (uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20);
          uVar17 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
          fVar28 = ((float)(uVar17 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar38 = ((float)(uVar17 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar31 = *(float *)(lVar15 + 0x20);
          fVar30 = *(float *)(lVar15 + 0x24);
          fVar29 = fVar28 * 255.0;
          if (fVar28 < 0.0) {
            fVar29 = 0.0;
          }
          dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar34 == 0.5) {
              fVar28 = 1.0;
              goto LAB_00e42b80;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar28 = -1.0;
LAB_00e42b80:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar28 = fVar38 * 255.0;
          fVar31 = ((float)(uVar17 >> 0x10 & 0xff) / 255.0) * fVar31;
          if (fVar38 < 0.0) {
            fVar28 = 0.0;
          }
          dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar34 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar38 = fVar31;
          if (1.0 < fVar31) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          fVar30 = ((float)(uVar17 >> 0x18) / 255.0) * fVar30;
          if (fVar31 < 0.0) {
            fVar38 = 0.0;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar31;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar31 = fVar30;
          if (1.0 < fVar30) {
            fVar31 = 1.0;
          }
          fVar31 = fVar31 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = 0.0;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar30 = 1.0;
              goto LAB_00e42d48;
            }
            fVar31 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar30 = -1.0;
LAB_00e42d48:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar30;
            }
          }
          else {
            fVar31 = (float)(int)(fVar31 + -0.5);
          }
          *puVar22 = (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar31 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
          lVar15 = lVar15 + (long)(int)uVar23 * 4;
        }
        uVar23 = *(uint *)(lVar15 + 0x20);
        if ((*in_stack_00000060 == 0.0) ||
           (lVar27 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar27 == 0)) goto LAB_00e443fc;
        fVar29 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar27 + 0x18);
        fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x1c);
        fVar31 = *(float *)(lVar27 + 0x20);
        fVar30 = *(float *)(lVar27 + 0x24);
        fVar28 = fVar29 * 255.0;
        if (fVar29 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar34 == 0.5) {
            fVar28 = 1.0;
            goto FUN_00e42e84;
          }
          fVar29 = (float)(int)(fVar28 + 0.5);
        }
        else if (dVar34 == -0.5) {
          fVar28 = -1.0;
FUN_00e42e84:
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + fVar28;
          }
        }
        else {
          fVar29 = (float)(int)(fVar28 + -0.5);
        }
        fVar31 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar31;
        fVar28 = fVar38 * 255.0;
        if (fVar38 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar34 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
        }
        else if (dVar34 == -0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
        fVar38 = fVar31;
        if (1.0 < fVar31) {
          fVar38 = 1.0;
        }
        fVar30 = ((float)(uVar23 >> 0x18) / 255.0) * fVar30;
        fVar38 = fVar38 * 255.0;
        if (fVar31 < 0.0) {
          fVar38 = unaff_s8;
        }
        dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar34 == 0.5) {
            fVar31 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar38 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar34 == -0.5) {
          fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = fVar31;
          }
        }
        else {
          fVar38 = (float)(int)(fVar38 + -0.5);
        }
        fVar31 = fVar30;
        if (1.0 < fVar30) {
          fVar31 = 1.0;
        }
        fVar31 = fVar31 * 255.0;
        if (fVar30 < 0.0) {
          fVar31 = unaff_s8;
        }
        dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
        if (0.0 <= fVar31) {
          if (dVar34 == 0.5) {
            fVar30 = 1.0;
            goto LAB_00e4304c;
          }
          fVar31 = (float)(int)(fVar31 + 0.5);
        }
        else if (dVar34 == -0.5) {
          fVar30 = -1.0;
LAB_00e4304c:
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = (float)_fStack0000000000000070 + fVar30;
          }
        }
        else {
          fVar31 = (float)(int)(fVar31 + -0.5);
        }
        *(uint *)(lVar15 + 0x20) =
             (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar31 << 0x18;
        lVar15 = *unaff_x24;
        if (lVar15 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
        puVar22 = (uint *)(lVar15 + in_x10 * 4 + 0x20);
        uVar21 = *puVar22;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
        fVar29 = (float)(uVar21 & 0xff) / 255.0;
        param_3 = (ulong)(uint)fVar29;
        fVar29 = fVar29 * *(float *)(lVar15 + 0x18);
        fVar38 = ((float)(uVar21 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
        fVar31 = *(float *)(lVar15 + 0x20);
        fVar30 = *(float *)(lVar15 + 0x24);
        fVar28 = fVar29 * 255.0;
        if (fVar29 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar34 == 0.5) {
            fVar28 = 1.0;
            goto LAB_00e4318c;
          }
          fVar29 = (float)(int)(fVar28 + 0.5);
        }
        else if (dVar34 == -0.5) {
          fVar28 = -1.0;
LAB_00e4318c:
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + fVar28;
          }
        }
        else {
          fVar29 = (float)(int)(fVar28 + -0.5);
        }
        fVar31 = ((float)(uVar21 >> 0x10 & 0xff) / 255.0) * fVar31;
        fVar28 = fVar38 * 255.0;
        if (fVar38 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar34 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
        }
        else if (dVar34 == -0.5) {
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
        fVar38 = fVar31;
        if (1.0 < fVar31) {
          fVar38 = 1.0;
        }
        fVar30 = ((float)(uVar21 >> 0x18) / 255.0) * fVar30;
        fVar38 = fVar38 * 255.0;
        if (fVar31 < 0.0) {
          fVar38 = unaff_s8;
        }
        dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar34 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar31 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar34 == -0.5) {
          fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar31 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar31 = fVar38;
          }
        }
        else {
          fVar31 = (float)(int)(fVar38 + -0.5);
        }
        fVar38 = fVar30;
        if (1.0 < fVar30) {
          fVar38 = 1.0;
        }
        fVar38 = fVar38 * 255.0;
        if (fVar30 < 0.0) {
          fVar38 = unaff_s8;
        }
        dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar34 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar38 + 0.5);
          }
        }
        else if (dVar34 == -0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar30 = (float)(int)(fVar38 + -0.5);
        }
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        unaff_s10 = 1.0;
        *puVar22 = (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar30 << 0x18;
        unaff_s15 = in_stack_00000008._4_4_;
        goto LAB_00e43400;
      }
      if (*(long *)((long)dVar34 + 0x100) == 0) goto LAB_00e443fc;
      if (*(char *)(*(long *)((long)dVar34 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
      lVar15 = *unaff_x24;
      dVar34 = modf(DAT_028aa048,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) break;
      *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
           (int)fVar31 << 0x18;
      lVar15 = *unaff_x24;
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar17) break;
      *(uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) =
           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
           (int)fVar31 << 0x18;
      lVar15 = *unaff_x24;
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) break;
      *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
           (int)fVar31 << 0x18;
      lVar15 = *unaff_x24;
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = 255.0;
      }
      dVar34 = modf(dVar33,(double *)&stack0x00000070);
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = 255.0;
      }
      if (lVar15 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar15 + 0x18) <= uVar21) break;
      *(uint *)(lVar15 + in_x10 * 4 + 0x20) =
           (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
           (int)fVar31 << 0x18;
      unaff_s10 = 1.0;
    } while( true );
  }
  goto LAB_00e44400;
LAB_00e3dfe0:
  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
  uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_02681b9c(uVar19,0,0);
  lVar15 = *unaff_x24;
  if ((uVar11 & 1) == 0) {
    fVar29 = *(float *)((long)unaff_x19 + 0x8c);
    fVar30 = *(float *)(unaff_x19 + 0x12);
    fVar38 = *(float *)((long)unaff_x19 + 0x94);
    fVar31 = *(float *)(unaff_x19 + 0x13);
    fVar28 = fVar29;
    if (1.0 < fVar29) {
      fVar28 = 1.0;
    }
    fVar28 = fVar28 * 255.0;
    if (fVar29 < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar29 = fVar30;
    if (1.0 < fVar30) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar30 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3fd48;
      }
      fVar30 = (float)(int)(fVar29 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = fVar29;
      }
    }
    else {
      fVar30 = (float)(int)(fVar29 + -0.5);
    }
    fVar29 = fVar38;
    if (1.0 < fVar38) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar38 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar38 = fVar31;
    if (1.0 < fVar31) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar31 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar31 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar31 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar31 = (float)(int)(fVar38 + -0.5);
    }
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar31 << 0x18;
    fVar29 = *(float *)(unaff_x19 + 0x12);
    lVar15 = unaff_x19[0x5f];
    fVar31 = *(float *)((long)unaff_x19 + 0x94);
    fVar30 = *(float *)(unaff_x19 + 0x13);
    fVar28 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar38 = fVar29;
    if (1.0 < fVar29) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar29 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e40610;
      }
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar29;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    fVar29 = fVar31;
    if (1.0 < fVar31) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar31 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar31 = fVar30;
    if (1.0 < fVar30) {
      fVar31 = 1.0;
    }
    fVar31 = fVar31 * 255.0;
    if (fVar30 < 0.0) {
      fVar31 = unaff_s8;
    }
    dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
    if (0.0 <= fVar31) {
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar31 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar31 + -0.5);
    }
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_00e44400;
    *(uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar30 << 0x18;
    fVar29 = *(float *)(unaff_x19 + 0x12);
    lVar15 = unaff_x19[0x5f];
    fVar31 = *(float *)((long)unaff_x19 + 0x94);
    fVar30 = *(float *)(unaff_x19 + 0x13);
    fVar28 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
    if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar38 = fVar29;
    if (1.0 < fVar29) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar29 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e40e20;
      }
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar29;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    fVar29 = fVar31;
    if (1.0 < fVar31) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar31 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar31 = fVar30;
    if (1.0 < fVar30) {
      fVar31 = 1.0;
    }
    fVar31 = fVar31 * 255.0;
    if (fVar30 < 0.0) {
      fVar31 = unaff_s8;
    }
    dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
    if (0.0 <= fVar31) {
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar31 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar31 + -0.5);
    }
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
    *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar30 << 0x18;
    fVar28 = *(float *)((long)unaff_x19 + 0x8c);
    fVar29 = *(float *)(unaff_x19 + 0x12);
    unaff_x20 = unaff_x19[0x5f];
    fVar31 = *(float *)((long)unaff_x19 + 0x94);
    fVar30 = *(float *)(unaff_x19 + 0x13);
  }
  else {
    if ((*in_stack_00000060 == 0.0) ||
       (lVar27 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar27 == 0)) goto LAB_00e443fc;
    fVar29 = *(float *)(lVar27 + 0x18);
    fVar30 = *(float *)(lVar27 + 0x1c);
    fVar38 = *(float *)(lVar27 + 0x20);
    fVar31 = *(float *)(lVar27 + 0x24);
    fVar28 = fVar29;
    if (1.0 < fVar29) {
      fVar28 = 1.0;
    }
    fVar28 = fVar28 * 255.0;
    if (fVar29 < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar29 = fVar30;
    if (1.0 < fVar30) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar30 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3fcc4;
      }
      fVar30 = (float)(int)(fVar29 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = fVar29;
      }
    }
    else {
      fVar30 = (float)(int)(fVar29 + -0.5);
    }
    fVar29 = fVar38;
    if (1.0 < fVar38) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar38 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar38 = fVar31;
    if (1.0 < fVar31) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar31 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar31 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar31 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar31 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar31 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar31 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar31 = (float)(int)(fVar38 + -0.5);
    }
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar31 << 0x18;
    if ((*in_stack_00000060 == 0.0) ||
       (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
    fVar29 = *(float *)(lVar15 + 0x1c);
    lVar27 = *unaff_x24;
    fVar31 = *(float *)(lVar15 + 0x20);
    fVar30 = *(float *)(lVar15 + 0x24);
    fVar28 = *(float *)(lVar15 + 0x18) * 255.0;
    if (*(float *)(lVar15 + 0x18) < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar38 = fVar29;
    if (1.0 < fVar29) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar29 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e4057c;
      }
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar29;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    fVar29 = fVar31;
    if (1.0 < fVar31) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar31 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar31 = fVar30;
    if (1.0 < fVar30) {
      fVar31 = 1.0;
    }
    fVar31 = fVar31 * 255.0;
    if (fVar30 < 0.0) {
      fVar31 = unaff_s8;
    }
    dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
    if (0.0 <= fVar31) {
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar31 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar31 + -0.5);
    }
    if (lVar27 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar27 + 0x18) <= uVar17) goto LAB_00e44400;
    *(uint *)(lVar27 + (long)(int)uVar17 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar30 << 0x18;
    if ((*in_stack_00000060 == 0.0) ||
       (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
    fVar29 = *(float *)(lVar15 + 0x1c);
    lVar27 = *unaff_x24;
    fVar31 = *(float *)(lVar15 + 0x20);
    fVar30 = *(float *)(lVar15 + 0x24);
    fVar28 = *(float *)(lVar15 + 0x18) * 255.0;
    if (*(float *)(lVar15 + 0x18) < 0.0) {
      fVar28 = unaff_s8;
    }
    dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar34 == 0.5) {
        fVar28 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar28 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar28 = (float)(int)(fVar28 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar38 = fVar29;
    if (1.0 < fVar29) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar29 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e40d8c;
      }
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar29;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    fVar29 = fVar31;
    if (1.0 < fVar31) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar31 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar34 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar34 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar31 = fVar30;
    if (1.0 < fVar30) {
      fVar31 = 1.0;
    }
    fVar31 = fVar31 * 255.0;
    if (fVar30 < 0.0) {
      fVar31 = unaff_s8;
    }
    dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
    if (0.0 <= fVar31) {
      if (dVar34 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar31 + 0.5);
      }
    }
    else if (dVar34 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar31 + -0.5);
    }
    if (lVar27 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_00e44400;
    *(uint *)(lVar27 + (long)(int)uVar23 * 4 + 0x20) =
         (int)fVar28 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
         (int)fVar30 << 0x18;
    if ((*in_stack_00000060 == 0.0) ||
       (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
    fVar28 = *(float *)(lVar15 + 0x18);
    fVar29 = *(float *)(lVar15 + 0x1c);
    unaff_x20 = *unaff_x24;
    fVar31 = *(float *)(lVar15 + 0x20);
    fVar30 = *(float *)(lVar15 + 0x24);
  }
  fVar38 = fVar28 * 255.0;
  if (fVar28 < 0.0) {
    fVar38 = unaff_s8;
  }
  dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar34 == 0.5) {
      unaff_s11 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        unaff_s11 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      unaff_s11 = (float)(int)(fVar38 + 0.5);
    }
  }
  else if (dVar34 == -0.5) {
    unaff_s11 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      unaff_s11 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    unaff_s11 = (float)(int)(fVar38 + -0.5);
  }
  fVar28 = fVar29;
  if (1.0 < fVar29) {
    fVar28 = 1.0;
  }
  fVar28 = fVar28 * 255.0;
  if (fVar29 < 0.0) {
    fVar28 = unaff_s8;
  }
  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
  if (0.0 <= fVar28) {
    if (dVar34 != 0.5) {
      unaff_s9 = (float)(int)(fVar28 + 0.5);
      goto LAB_00e41304;
    }
    fVar28 = (float)_fStack0000000000000070 + 1.0;
  }
  else {
    if (dVar34 != -0.5) {
      unaff_s9 = (float)(int)(fVar28 + -0.5);
      goto LAB_00e41304;
    }
    fVar28 = (float)_fStack0000000000000070 + -1.0;
  }
  unaff_s9 = (float)_fStack0000000000000070;
  if (((long)_fStack0000000000000070 & 1U) != 0) {
    unaff_s9 = fVar28;
  }
LAB_00e41304:
  fVar28 = fVar31;
  if (1.0 < fVar31) {
    fVar28 = 1.0;
  }
  fVar28 = fVar28 * 255.0;
  if (fVar31 < 0.0) {
    fVar28 = unaff_s8;
  }
  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
  if (0.0 <= fVar28) {
    if (dVar34 == 0.5) {
      unaff_s13 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        unaff_s13 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      unaff_s13 = (float)(int)(fVar28 + 0.5);
    }
  }
  else if (dVar34 == -0.5) {
    unaff_s13 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      unaff_s13 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    unaff_s13 = (float)(int)(fVar28 + -0.5);
  }
  param_3 = 0x3f800000;
  fVar28 = fVar30;
  if (1.0 < fVar30) {
    fVar28 = 1.0;
  }
  fVar28 = fVar28 * 255.0;
  if (fVar30 < 0.0) {
    fVar28 = unaff_s8;
  }
  dVar34 = modf((double)fVar28,(double *)&stack0x00000070);
  if (0.0 <= fVar28) {
    if (dVar34 == 0.5) {
      param_1 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        param_1 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      param_1 = (float)(int)(fVar28 + 0.5);
    }
  }
  else if (dVar34 == -0.5) {
    param_1 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      param_1 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    param_1 = (float)(int)(fVar28 + -0.5);
  }
  if (unaff_x20 == 0) goto LAB_00e443fc;
  unaff_s10 = 1.0;
  in_w8 = *(uint *)(unaff_x20 + 0x18);
  goto code_r0x00e41454;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar27 = unaff_x19[0xcb];
    uVar32 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar27 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar27 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar27 + lVar15);
    *puVar2 = uVar32;
    puVar2[1] = (int)uVar11;
    puVar2[2] = (int)param_3;
    lVar27 = unaff_x19[0xca];
    if ((lVar27 == 0) || (lVar16 = unaff_x19[0xcc], lVar16 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar32 = *(undefined4 *)(lVar27 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar20 = (undefined8 *)(lVar16 + lVar15);
    lVar15 = lVar15 + 0xc;
    *puVar20 = *(undefined8 *)(lVar27 + 0x44);
    *(undefined4 *)(puVar20 + 1) = uVar32;
  } while (uVar21 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar12,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar15 = unaff_x19[0x59];
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*in_stack_00000038,*plVar12,*plVar1,
               *(undefined8 *)(lVar15 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar15 = __start_il2cpp();
  if (lVar15 != 0) {
    if ((*(char *)(lVar15 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


