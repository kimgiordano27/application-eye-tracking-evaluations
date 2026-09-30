/*
FUNCTION_NAME: FUN_00e40120
ENTRY_POINT: 00e40120
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */

void FUN_00e40120(void)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *unaff_x19;
  undefined8 uVar20;
  undefined8 *puVar21;
  uint *unaff_x20;
  uint *puVar22;
  uint uVar23;
  ulong unaff_x21;
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong unaff_x22;
  ulong uVar27;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  double *unaff_x26;
  double *pdVar28;
  long unaff_x27;
  float unaff_w28;
  ulong unaff_x29;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float unaff_s8;
  int iVar36;
  float unaff_s9;
  float fVar37;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar38;
  float unaff_s14;
  float fVar39;
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
  
  pdVar28 = unaff_x26;
code_r0x00e40120:
  fVar31 = unaff_s14;
  if (unaff_s10 < unaff_s14) {
    fVar31 = unaff_s10;
  }
  fVar31 = fVar31 * unaff_w28;
  if (unaff_s14 < 0.0) {
    fVar31 = unaff_s8;
  }
  dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
  if (0.0 <= fVar31) {
    if (dVar34 == 0.5) {
      fVar31 = 1.0;
      goto LAB_00e40174;
    }
    fVar30 = (float)(int)(fVar31 + 0.5);
  }
  else if (dVar34 == -0.5) {
    fVar31 = -1.0;
LAB_00e40174:
    fVar30 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar30 = (float)_fStack0000000000000070 + fVar31;
    }
  }
  else {
    fVar30 = (float)(int)(fVar31 + -0.5);
  }
  *unaff_x20 = (int)unaff_s11 & 0xffU | ((int)unaff_s12 & 0xffU) << 8 |
               ((int)unaff_s9 & 0xffU) << 0x10 | (int)fVar30 << 0x18;
  lVar15 = *unaff_x24;
  if (lVar15 != 0) {
    if (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x22) goto LAB_00e44400;
    puVar22 = (uint *)(lVar15 + unaff_x23 * 4 + 0x20);
    uVar23 = *puVar22;
    if ((*pdVar28 != 0.0) && (lVar15 = *(long *)((long)*pdVar28 + 0xa0), lVar15 != 0)) {
      fVar30 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
      fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
      fVar38 = *(float *)(lVar15 + 0x20);
      fVar37 = *(float *)(lVar15 + 0x24);
      fVar31 = fVar30 * 255.0;
      if (fVar30 < 0.0) {
        fVar31 = unaff_s8;
      }
      dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
      if (0.0 <= fVar31) {
        if (dVar34 == 0.5) {
          fVar31 = 1.0;
          goto LAB_00e404dc;
        }
        fVar30 = (float)(int)(fVar31 + 0.5);
      }
      else if (dVar34 == -0.5) {
        fVar31 = -1.0;
LAB_00e404dc:
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + fVar31;
        }
      }
      else {
        fVar30 = (float)(int)(fVar31 + -0.5);
      }
      fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
      fVar31 = fVar39 * 255.0;
      if (fVar39 < 0.0) {
        fVar31 = unaff_s8;
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
      fVar39 = fVar38;
      if (1.0 < fVar38) {
        fVar39 = 1.0;
      }
      fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
      fVar39 = fVar39 * 255.0;
      if (fVar38 < 0.0) {
        fVar39 = unaff_s8;
      }
      dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
      if (0.0 <= fVar39) {
        if (dVar34 == 0.5) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
          goto LAB_00e40888;
        }
        fVar39 = (float)(int)(fVar39 + 0.5);
      }
      else if (dVar34 == -0.5) {
        fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
        fVar39 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar39 = fVar38;
        }
      }
      else {
        fVar39 = (float)(int)(fVar39 + -0.5);
      }
      fVar38 = fVar37;
      if (1.0 < fVar37) {
        fVar38 = 1.0;
      }
      fVar38 = fVar38 * 255.0;
      if (fVar37 < 0.0) {
        fVar38 = unaff_s8;
      }
      dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
      if (0.0 <= fVar38) {
        if (dVar34 == 0.5) {
          fVar37 = 1.0;
          goto LAB_00e40a4c;
        }
        fVar38 = (float)(int)(fVar38 + 0.5);
      }
      else if (dVar34 == -0.5) {
        fVar37 = -1.0;
LAB_00e40a4c:
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + fVar37;
        }
      }
      else {
        fVar38 = (float)(int)(fVar38 + -0.5);
      }
      *puVar22 = (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
      lVar15 = *unaff_x24;
      if (lVar15 != 0) {
        if (*(uint *)(lVar15 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
        lVar15 = lVar15 + unaff_x27 * 4;
        while( true ) {
          uVar23 = *(uint *)(lVar15 + 0x20);
          if ((*pdVar28 == 0.0) || (lVar16 = *(long *)((long)*pdVar28 + 0xa0), lVar16 == 0)) break;
          fVar30 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
          fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
          fVar38 = *(float *)(lVar16 + 0x20);
          fVar37 = *(float *)(lVar16 + 0x24);
          fVar31 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar31 = 1.0;
              goto FUN_00e42e84;
            }
            fVar30 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = -1.0;
FUN_00e42e84:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar30 = (float)(int)(fVar31 + -0.5);
          }
          fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
          fVar31 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar31 = unaff_s8;
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
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
          fVar39 = fVar39 * 255.0;
          if (fVar38 < 0.0) {
            fVar39 = unaff_s8;
          }
          dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar38;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar37 = 1.0;
              goto LAB_00e4304c;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar37 = -1.0;
LAB_00e4304c:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *(uint *)(lVar15 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
          puVar22 = (uint *)(lVar15 + in_stack_00000058 * 4 + 0x20);
          uVar23 = *puVar22;
          if ((*pdVar28 == 0.0) || (lVar15 = *(long *)((long)*pdVar28 + 0xa0), lVar15 == 0)) break;
          fVar30 = (float)(uVar23 & 0xff) / 255.0;
          uVar10 = (ulong)(uint)fVar30;
          fVar30 = fVar30 * *(float *)(lVar15 + 0x18);
          fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar38 = *(float *)(lVar15 + 0x20);
          fVar37 = *(float *)(lVar15 + 0x24);
          fVar31 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar31 = unaff_s8;
          }
          dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
          if (0.0 <= fVar31) {
            if (dVar34 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e4318c;
            }
            fVar30 = (float)(int)(fVar31 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = -1.0;
LAB_00e4318c:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar30 = (float)(int)(fVar31 + -0.5);
          }
          fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
          fVar31 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar31 = unaff_s8;
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
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
          fVar39 = fVar39 * 255.0;
          if (fVar38 < 0.0) {
            fVar39 = unaff_s8;
          }
          dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar38;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar34 == -0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar37 = (float)(int)(fVar38 + -0.5);
          }
          *puVar22 = (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
LAB_00e43400:
          do {
            lVar15 = *unaff_x24;
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar15 = lVar15 + unaff_x21 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            uVar23 = (uint)unaff_x22;
            if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar15 = lVar15 + (long)(int)uVar23 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            uVar24 = (uint)unaff_x29;
            if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
            lVar15 = lVar15 + (long)(int)uVar24 * 4;
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            lVar15 = unaff_x19[0x5f];
            if (lVar15 == 0) goto LAB_00e443fc;
            uVar18 = (uint)in_stack_00000058;
            if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
            lVar15 = lVar15 + in_stack_00000058 * 4;
            uVar13 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
            fVar31 = (float)NEON_ucvtf((uint)*(byte *)(lVar15 + 0x23));
            *(char *)(lVar15 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar31);
            uVar12 = FUN_00e3703c();
            if ((uVar12 & 1) == 0) {
              lVar15 = *unaff_x25;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar15 = *unaff_x25;
              }
              if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x20) == 1) {
                lVar15 = *unaff_x24;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                puVar22 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
                uVar4 = *puVar22;
                fVar30 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar37 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
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
                fVar30 = fVar37;
                if (1.0 < fVar37) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar37 < 0.0) {
                  fVar30 = unaff_s8;
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
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = 1.0;
                }
                fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                fVar37 = fVar37 * 255.0;
                if (fVar38 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43744;
                  }
                  fVar38 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar37;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar37 + -0.5);
                }
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar39 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *puVar22 = (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                lVar15 = *in_stack_00000030;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                puVar22 = (uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20);
                uVar4 = *puVar22;
                fVar30 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
                fVar37 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
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
                fVar30 = fVar37;
                if (1.0 < fVar37) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar37 < 0.0) {
                  fVar30 = unaff_s8;
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
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = 1.0;
                }
                fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                fVar37 = fVar37 * 255.0;
                if (fVar38 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43a84;
                  }
                  fVar38 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar37;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar37 + -0.5);
                }
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar39 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                *puVar22 = (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                lVar15 = *in_stack_00000030;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                puVar22 = (uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20);
                uVar23 = *puVar22;
                fVar30 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
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
                fVar30 = fVar37;
                if (1.0 < fVar37) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar37 < 0.0) {
                  fVar30 = unaff_s8;
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
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = 1.0;
                }
                fVar39 = (float)(uVar23 >> 0x18) / 255.0;
                fVar37 = fVar37 * 255.0;
                if (fVar38 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e43dbc;
                  }
                  fVar38 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar37;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar37 + -0.5);
                }
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar39 + -0.5);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                *puVar22 = (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                lVar15 = *in_stack_00000030;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                puVar22 = (uint *)(lVar15 + in_stack_00000058 * 4 + 0x20);
                uVar23 = *puVar22;
                fVar30 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                fVar38 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
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
                uVar10 = 0x3f800000;
                fVar30 = fVar37;
                if (1.0 < fVar37) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar37 < 0.0) {
                  fVar30 = unaff_s8;
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
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = 1.0;
                }
                fVar39 = (float)(uVar23 >> 0x18) / 255.0;
                fVar37 = fVar37 * 255.0;
                if (fVar38 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e440f4;
                  }
                  fVar38 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = fVar37;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar37 + -0.5);
                }
                if (1.0 < fVar39) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  uVar13 = 0;
                  if (dVar34 == 0.5) {
                    fVar37 = 1.0;
                    goto LAB_00e44170;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else {
                  uVar13 = 0;
                  if (dVar34 == -0.5) {
                    fVar37 = -1.0;
LAB_00e44170:
                    fVar37 = (float)_fStack0000000000000070 + fVar37;
                    uVar13 = (ulong)(uint)fVar37;
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar37;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                *puVar22 = (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                unaff_x24 = in_stack_00000030;
              }
            }
            puVar7 = StringLiteral_4992;
            puVar6 = OVREyeGaze_TypeInfo;
            in_stack_00000050 = in_stack_00000050 + 1;
            if (in_stack_00000050 == in_stack_00000018) {
              if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1))
                 && (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
              puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
              if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
              iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
              plVar11 = unaff_x19 + 0xcb;
              if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                FUN_010afdd4(plVar11,iVar9,
                             *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
              }
              if ((unaff_x19[0xcc] == 0) || (lVar15 = unaff_x19[0xf], lVar15 == 0))
              goto LAB_00e443fc;
              plVar1 = unaff_x19 + 0xcc;
              if (*(int *)(lVar15 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                FUN_010afdd4(plVar1,*(int *)(lVar15 + 0x10),*(undefined8 *)puVar6);
                lVar15 = unaff_x19[0xf];
                if (lVar15 == 0) goto LAB_00e443fc;
              }
              uVar23 = *(uint *)(lVar15 + 0x10);
              if ((int)uVar23 < 1) goto LAB_00e44358;
              uVar12 = 0;
              lVar15 = 0x20;
              goto LAB_00e442cc;
            }
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                         *(undefined8 *)StringLiteral_4992);
            *pdVar28 = _fStack0000000000000070;
            if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
            iVar9 = FUN_00e4e99c();
            if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
              if (*pdVar28 == 0.0) goto LAB_00e443fc;
              *(undefined1 *)((long)*pdVar28 + 0x165) = 1;
            }
            if (*(float *)(unaff_x19 + 0x14) == 0.0) {
              FUN_00e45d2c();
            }
            *(undefined2 *)(unaff_x19 + 0xdc) = 0;
            if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
              uVar10 = FUN_0269e56c(0);
              if (((fStack000000000000004c == 0.0) || ((uVar10 & 1) == 0)) ||
                 (1 < (int)unaff_x19[0x2a] - 3U)) {
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                *(int *)((long)unaff_x19 + 0x38c) = iVar9;
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,*(undefined8 *)puVar7),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(undefined4 *)(unaff_x19 + 0x4a) =
                     *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                if ((unaff_x19[9] == 0) ||
                   (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                 &stack0x00000070,*(undefined8 *)puVar7),
                   _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                *(float *)((long)unaff_x19 + 0x254) =
                     *(float *)((long)_fStack0000000000000070 + 0x48) +
                     *(float *)((long)unaff_x19 + 0x50c);
                *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
              }
            }
            else {
              dVar34 = *pdVar28;
              if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x78) == 0)) goto LAB_00e443fc;
              fVar30 = *(float *)(*(long *)((long)dVar34 + 0x78) + 0x18);
              fVar31 = DAT_028aa034;
              if (fVar30 != 0.0) {
                fVar31 = fVar30;
              }
              if ((0.0 < (in_stack_00000008._4_4_ - *(float *)((long)dVar34 + 100)) / fVar31) &&
                 (*(char *)((long)dVar34 + 0x165) == '\0')) {
                *(undefined1 *)((long)dVar34 + 0x165) = 1;
                *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
                if (sVar8 != 0x200b) {
                  *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                  sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
                  if (sVar8 != 0x20) {
                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                    sVar8 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
                    if (sVar8 != 10) {
                      lVar15 = unaff_x19[0xca];
                      if (lVar15 == 0) goto LAB_00e443fc;
                      fVar37 = *(float *)(lVar15 + 0x48);
                      fVar31 = *(float *)(unaff_x19 + 0x4b);
                      fVar38 = fVar37 + *(float *)((long)unaff_x19 + 0x50c);
                      fVar30 = *(float *)(unaff_x19 + 0x4a);
                      if (fVar37 <= *(float *)(unaff_x19 + 0x4a)) {
                        fVar30 = fVar37;
                      }
                      *(float *)(unaff_x19 + 0x4a) = fVar30;
                      fVar30 = *(float *)((long)unaff_x19 + 0x254);
                      if (fVar38 <= *(float *)((long)unaff_x19 + 0x254)) {
                        fVar30 = fVar38;
                      }
                      *(float *)((long)unaff_x19 + 0x254) = fVar30;
                      fVar30 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar15,0
                                                  );
                      fVar30 = fVar30 + *(float *)(unaff_x19 + 0xa1) +
                               *(float *)((long)unaff_x19 + 0x55c);
                      if (fVar31 <= fVar30) {
                        fVar31 = fVar30;
                      }
                      *(float *)(unaff_x19 + 0x4b) = fVar31;
                    }
                  }
                }
                iVar36 = *(int *)((long)unaff_x19 + 0x38c);
                if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
                  iVar36 = iVar9;
                }
                *(int *)((long)unaff_x19 + 0x38c) = iVar36;
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
            fVar30 = 0.0;
            *(undefined4 *)(unaff_x19 + 199) = 0;
            fVar31 = 0.0;
            if ((((0.0 < fStack000000000000004c) &&
                 (uVar23 = *(uint *)(unaff_x19 + 0x2a), fVar31 = fVar30, uVar23 < 5)) &&
                ((1 << (ulong)(uVar23 & 0x1f) & 0x19U) != 0)) &&
               (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
              if (uVar23 == 4) {
                lVar15 = unaff_x19[0xc];
                if (lVar15 == 0) goto LAB_00e443fc;
                if (0 < *(int *)(lVar15 + 0x18)) {
                  iVar9 = 0;
                  do {
                    FUN_0132138c(lVar15,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
                    *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                    fVar31 = fStack0000000000000070;
                    if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                        fStack0000000000000070) break;
                    lVar15 = unaff_x19[0xc];
                    if (lVar15 == 0) goto LAB_00e443fc;
                    iVar9 = iVar9 + 1;
                  } while (iVar9 < *(int *)(lVar15 + 0x18));
                }
              }
              else {
                lVar15 = unaff_x19[0xb];
                if (lVar15 == 0) goto LAB_00e443fc;
                iVar9 = 0;
                fVar31 = 0.0;
                while (iVar9 < *(int *)(lVar15 + 0x18)) {
                  FUN_0132138c(lVar15,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
                  fVar31 = fVar31 + fStack0000000000000070;
                  *(float *)((long)unaff_x19 + 0x634) = fVar31;
                  if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar31)
                  break;
                  lVar15 = unaff_x19[0xb];
                  iVar9 = iVar9 + 1;
                  if (lVar15 == 0) goto LAB_00e443fc;
                }
              }
            }
            *(float *)(unaff_x19 + 0xc6) =
                 *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
            if (unaff_x19[9] == 0) goto LAB_00e443fc;
            fVar30 = *(float *)((long)unaff_x19 + 0x53c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
            if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
            fVar37 = *(float *)((long)_fStack0000000000000070 + 0x5c);
            FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
            if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
            fVar39 = *(float *)(unaff_x19 + 0xa8);
            fVar38 = *(float *)(unaff_x19 + 199) + fVar39;
            *(float *)((long)unaff_x19 + 0x634) =
                 fVar31 + fVar30 + (fVar37 + -1.0) *
                                   *(float *)((long)_fStack0000000000000070 + 0x84);
            *(float *)(unaff_x19 + 199) = fVar38;
            puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
            ;
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                );
              DAT_03774d76 = '\x01';
            }
            fVar30 = 1.0;
            fVar31 = 1.0;
            uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
            in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar32;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)(unaff_x19[0xca] + 200);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(uVar20,0,0);
            if ((uVar10 & 1) != 0) {
              lVar15 = __start_il2cpp();
              if (lVar15 == 0) goto LAB_00e443fc;
              if ((*(char *)(lVar15 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')
                 ) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar32 = FUN_00e4ee40();
                *(undefined4 *)((long)unaff_x19 + 0x674) = uVar32;
                *(float *)(unaff_x19 + 0xcf) = fVar38;
                *(float *)((long)unaff_x19 + 0x67c) = fVar39;
              }
            }
            if (DAT_03774d76 == '\0') {
              thunk_FUN_00d48444(puVar6);
              DAT_03774d76 = '\x01';
            }
            lVar16 = *(long *)puVar6;
            uVar32 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
            *in_stack_00000040 = **(undefined8 **)(lVar16 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar32;
            lVar15 = (*(long **)(lVar16 + 0xb8))[1];
            unaff_x19[0xc0] = **(long **)(lVar16 + 0xb8);
            *(int *)(unaff_x19 + 0xc1) = (int)lVar15;
            uVar32 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
            in_stack_00000040[3] = **(undefined8 **)(lVar16 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x614) = uVar32;
            lVar15 = (*(long **)(lVar16 + 0xb8))[1];
            unaff_x19[0xc3] = **(long **)(lVar16 + 0xb8);
            *(int *)(unaff_x19 + 0xc4) = (int)lVar15;
            uVar32 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
            in_stack_00000040[6] = **(undefined8 **)(lVar16 + 0xb8);
            *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar32;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_02681b9c(uVar20,0,0);
            if ((uVar10 & 1) != 0) {
              if (*pdVar28 == 0.0) goto LAB_00e443fc;
              if (*(float *)((long)*pdVar28 + 0x84) != 0.0) {
                lVar15 = __start_il2cpp();
                if (lVar15 == 0) goto LAB_00e443fc;
                if ((*(char *)(lVar15 + 0x109) == '\0') &&
                   (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                  lVar15 = unaff_x19[0xca];
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                  if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0xc0), lVar16 == 0))
                  goto LAB_00e443fc;
                  fVar37 = fStack0000000000000048;
                  if (*(char *)(lVar16 + 0x18) != '\0') {
                    fVar38 = *(float *)(lVar15 + 100);
                    fVar37 = *(float *)((long)unaff_x19 + 0x2ec) - fVar38;
                  }
                  if (*(char *)(lVar16 + 0x19) != '\0') {
                    uVar32 = FUN_00e4e9f4(fVar37);
                    lVar15 = unaff_x19[0xca];
                    *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar32;
                    *(float *)(unaff_x19 + 0xbf) = fVar38;
                    *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x28) != '\0') {
                    fVar29 = (float)FUN_00e4e9f4(fVar37);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    fVar35 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar29 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar35;
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar38 = (float)FUN_00e4e9f4(fVar37);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar38;
                    *(float *)(unaff_x19 + 200) = fVar35;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[3] =
                         CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                  fVar38 + (float)in_stack_00000040[3]);
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x614);
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar29 = (float)FUN_00e4e9f4(fVar37);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                    *(float *)(unaff_x19 + 200) = fVar35;
                    fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar29 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar38;
                    if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                    goto LAB_00e443fc;
                    fVar37 = (float)FUN_00e4e9f4(fVar37);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[6] =
                         CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                                  fVar37 + (float)in_stack_00000040[6]);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  if (*(long *)(lVar15 + 0xc0) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)(lVar15 + 0xc0) + 0x50) != '\0') {
                    FUN_00e5eda8(lVar15,0);
                    fVar37 = (float)FUN_00e4eb50();
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    fVar29 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar37 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar29;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5b838(lVar15,0);
                    fVar37 = (float)FUN_00e4eb50();
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar29;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[3] =
                         CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                  fVar37 + (float)in_stack_00000040[3]);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x614);
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5eea4(lVar15,0);
                    fVar37 = (float)FUN_00e4eb50();
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar29;
                    fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar37 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar38;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    FUN_00e5b7d8(lVar15,0);
                    fVar37 = (float)FUN_00e4eb50();
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[6] =
                         CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                                  fVar37 + (float)in_stack_00000040[6]);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                    if (lVar15 == 0) goto LAB_00e443fc;
                  }
                  lVar16 = *(long *)(lVar15 + 0xc0);
                  if (lVar16 == 0) goto LAB_00e443fc;
                  if (*(char *)(lVar16 + 0x60) != '\0') {
                    uVar25 = *(undefined8 *)(lVar16 + 0x68);
                    uVar20 = FUN_00e5eda8(lVar15,0);
                    fVar37 = (float)FUN_00e4ecc4(uVar20,lVar15,uVar25);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    fVar29 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc0] =
                         CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                  fVar37 + (float)unaff_x19[0xc0]);
                    *(float *)(unaff_x19 + 0xc1) = fVar29;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar25 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar20 = FUN_00e5b838(lVar15,0);
                    fVar37 = (float)FUN_00e4ecc4(uVar20,lVar15,uVar25);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar29;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[3] =
                         CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                  fVar37 + (float)in_stack_00000040[3]);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x614) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x614);
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar25 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar20 = FUN_00e5eea4(lVar15,0);
                    fVar37 = (float)FUN_00e4ecc4(uVar20,lVar15,uVar25);
                    lVar15 = unaff_x19[0xca];
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar29;
                    fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    unaff_x19[0xc3] =
                         CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                  fVar37 + (float)unaff_x19[0xc3]);
                    *(float *)(unaff_x19 + 0xc4) = fVar38;
                    if ((lVar15 == 0) || (*(long *)(lVar15 + 0xc0) == 0)) goto LAB_00e443fc;
                    uVar25 = *(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x68);
                    uVar20 = FUN_00e5b7d8(lVar15,0);
                    fVar37 = (float)FUN_00e4ecc4(uVar20,lVar15,uVar25);
                    *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                    *(float *)(unaff_x19 + 200) = fVar38;
                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                    in_stack_00000040[6] =
                         CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                                  fVar37 + (float)in_stack_00000040[6]);
                    *(float *)((long)unaff_x19 + 0x62c) =
                         fVar39 + *(float *)((long)unaff_x19 + 0x62c);
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
                if (*pdVar28 == 0.0) goto LAB_00e443fc;
                uVar20 = *(undefined8 *)((long)*pdVar28 + 0x80);
                in_stack_00000040[0x1e] =
                     CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                              (float)((ulong)uVar20 >> 0x20),(float)unaff_x19[0x24] * (float)uVar20)
                ;
              }
              lVar15 = unaff_x19[0x5e];
              *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              fVar37 = (float)FUN_00e5eda8(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              fVar38 = *(float *)((long)unaff_x19 + 0x674);
              uVar13 = (ulong)(int)in_stack_00000068;
              *(float *)(lVar15 + uVar13 * 0xc + 0x20) =
                   fVar37 + fVar38 + *(float *)(unaff_x19 + 0xc0) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              fVar37 = *(float *)((long)unaff_x19 + 0x604);
              *(float *)(lVar15 + uVar13 * 0xc + 0x24) =
                   fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eda8(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(float *)(lVar15 + uVar13 * 0xc + 0x28) =
                   fVar37 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              fVar37 = (float)FUN_00e5b838(*pdVar28,0);
              uVar12 = uVar13 | 1;
              uVar23 = (uint)uVar12;
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              fVar38 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar12 * 0xc + 0x20) =
                   fVar37 + fVar38 + *(float *)((long)unaff_x19 + 0x60c) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              fVar37 = *(float *)(unaff_x19 + 0xc2);
              *(float *)(lVar15 + uVar12 * 0xc + 0x24) =
                   fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b838(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              *(float *)(lVar15 + uVar12 * 0xc + 0x28) =
                   fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                   *(float *)((long)unaff_x19 + 0x614) + *(float *)((long)unaff_x19 + 0x5fc) +
                   *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              fVar37 = (float)FUN_00e5eea4(*pdVar28,0);
              uVar26 = uVar13 | 2;
              uVar24 = (uint)uVar26;
              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
              fVar38 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar26 * 0xc + 0x20) =
                   fVar37 + fVar38 + *(float *)(unaff_x19 + 0xc3) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
              fVar37 = *(float *)((long)unaff_x19 + 0x61c);
              *(float *)(lVar15 + uVar26 * 0xc + 0x24) =
                   fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
                   *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5eea4(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
              *(float *)(lVar15 + uVar26 * 0xc + 0x28) =
                   fVar37 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              fVar37 = (float)FUN_00e5b7d8(*pdVar28,0);
              uVar27 = uVar13 | 3;
              uVar18 = (uint)uVar27;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
              fVar38 = *(float *)((long)unaff_x19 + 0x674);
              *(float *)(lVar15 + uVar27 * 0xc + 0x20) =
                   fVar37 + fVar38 + *(float *)((long)unaff_x19 + 0x624) +
                   *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                   *(float *)((long)unaff_x19 + 0x6e4);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
              uVar10 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
              *(float *)(lVar15 + uVar27 * 0xc + 0x24) =
                   fVar38 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                   *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                   *(float *)(unaff_x19 + 0xdd);
              lVar15 = unaff_x19[0x5e];
              if ((lVar15 == 0) || (*pdVar28 == 0.0)) goto LAB_00e443fc;
              FUN_00e5b7d8(*pdVar28,0);
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
              fVar37 = *(float *)((long)unaff_x19 + 0x62c);
              *(float *)(lVar15 + uVar27 * 0xc + 0x28) =
                   (float)uVar10 + *(float *)((long)unaff_x19 + 0x67c) + fVar37 +
                   *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                   *(float *)((long)unaff_x19 + 0x6ec);
              lVar15 = unaff_x19[0xca];
              if (lVar15 == 0) goto LAB_00e443fc;
              lVar16 = *in_stack_00000020;
              if (*(char *)(lVar15 + 0x108) == '\0') {
                uVar32 = FUN_0272b9dc(lVar15 + 0x10,0);
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                lVar16 = lVar16 + uVar13 * 8;
                *(undefined4 *)(lVar16 + 0x20) = uVar32;
                *(float *)(lVar16 + 0x24) = fVar37;
                if (*pdVar28 == 0.0) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = thunk_FUN_0272b8d8((long)*pdVar28 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                lVar15 = lVar15 + uVar12 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                if (*pdVar28 == 0.0) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = FUN_0272b9c8((long)*pdVar28 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar15 = lVar15 + uVar26 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                if (*pdVar28 == 0.0) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = FUN_0272b98c((long)*pdVar28 + 0x10,0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                lVar15 = lVar15 + uVar27 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                if (*pdVar28 == 0.0) goto LAB_00e443fc;
                uVar32 = FUN_00e5ecc0(*pdVar28,0);
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                FUN_00e5ecc0(unaff_x19[0xca],0);
                *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                unaff_x24 = in_stack_00000030;
              }
              else {
                if ((*(long *)(lVar15 + 0x100) == 0) ||
                   (uVar32 = FUN_00e5dd14(fStack0000000000000048,*(long *)(lVar15 + 0x100),
                                          *(undefined4 *)(lVar15 + 0x10c),0), lVar16 == 0))
                goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                lVar16 = lVar16 + uVar13 * 8;
                *(undefined4 *)(lVar16 + 0x20) = uVar32;
                *(float *)(lVar16 + 0x24) = fVar37;
                dVar34 = *pdVar28;
                if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = FUN_00e5de6c(fStack0000000000000048,*(long *)((long)dVar34 + 0x100),
                                      *(undefined4 *)((long)dVar34 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                lVar15 = lVar15 + uVar12 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                dVar34 = *pdVar28;
                if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = FUN_00e5dea4(fStack0000000000000048,*(long *)((long)dVar34 + 0x100),
                                      *(undefined4 *)((long)dVar34 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar15 = lVar15 + uVar26 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                dVar34 = *pdVar28;
                if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
                lVar15 = *in_stack_00000020;
                uVar32 = thunk_FUN_00e5dd60(fStack0000000000000048,*(long *)((long)dVar34 + 0x100),
                                            *(undefined4 *)((long)dVar34 + 0x10c),0);
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                lVar15 = lVar15 + uVar27 * 8;
                *(undefined4 *)(lVar15 + 0x20) = uVar32;
                *(float *)(lVar15 + 0x24) = fVar37;
                dVar34 = *pdVar28;
                if ((dVar34 == 0.0) || (*(long *)((long)dVar34 + 0x100) == 0)) goto LAB_00e443fc;
                uVar32 = FUN_00e5dedc(fStack0000000000000048,*(long *)((long)dVar34 + 0x100),
                                      *(undefined4 *)((long)dVar34 + 0x10c),0);
                lVar15 = unaff_x19[0xca];
                *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
                *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x100), lVar16 == 0))
                goto LAB_00e443fc;
                unaff_x24 = in_stack_00000030;
                if (((1 < *(int *)(lVar16 + 0x28)) && (0.0 < *(float *)(lVar16 + 0x34))) &&
                   (*(int *)(lVar15 + 0x10c) < 0)) {
                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                }
              }
            }
            else {
              dVar34 = *pdVar28;
              if (dVar34 == 0.0) goto LAB_00e443fc;
              uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
              if ((*(float *)((long)dVar34 + 0x48) + *(float *)((long)dVar34 + 0x84) +
                  *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
                  DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
              lVar15 = *in_stack_00000038;
              if (DAT_03774d76 == '\0') {
                thunk_FUN_00d48444(puVar6);
                DAT_03774d76 = '\x01';
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
              uVar13 = (ulong)(int)in_stack_00000068;
              lVar15 = lVar15 + uVar13 * 0xc;
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar32;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar13 | 1)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar13 | 1) * 0xc;
              uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar32;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar13 | 2)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar13 | 2) * 0xc;
              uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar32;
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= (uint)(uVar13 | 3)) goto LAB_00e44400;
              lVar15 = lVar15 + (uVar13 | 3) * 0xc;
              uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
              *(undefined8 *)(lVar15 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
              *(undefined4 *)(lVar15 + 0x28) = uVar32;
            }
            if (*pdVar28 == 0.0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)((long)*pdVar28 + 0xf8);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar20,0,0);
            if ((uVar13 & 1) == 0) {
              lVar15 = unaff_x19[0x10];
            }
            else {
              if ((*pdVar28 == 0.0) || (lVar15 = *(long *)((long)*pdVar28 + 0xf8), lVar15 == 0))
              goto LAB_00e443fc;
              lVar15 = *(long *)(lVar15 + 0x18);
            }
            if (((lVar15 == 0) || (lVar15 = FUN_0272bcf4(lVar15,0), lVar15 == 0)) ||
               (plVar11 = (long *)FUN_0267dac8(lVar15,0), plVar11 == (long *)0x0))
            goto LAB_00e443fc;
            iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
            *(float *)(unaff_x19 + 0xda) = (float)iVar9;
            iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
            *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
            *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
            puVar6 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)CONCAT44((float)iVar9,(int)unaff_x19[0xda]);
            in_stack_00000078 = unaff_x19[0xd9];
            FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                         *(undefined8 *)
                          UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                        );
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            unaff_x21 = (ulong)(int)in_stack_00000068;
            unaff_x22 = unaff_x21 | 1;
            FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,
                         *(undefined8 *)puVar6);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            unaff_x29 = unaff_x21 | 2;
            FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar6);
            if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            in_stack_00000058 = unaff_x21 | 3;
            FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,
                         *(undefined8 *)puVar6);
            unaff_x25 = (long *)StringLiteral_9119;
            lVar15 = unaff_x19[0x60];
            if (lVar15 == 0) goto LAB_00e443fc;
            if ((*(uint *)(lVar15 + 0x18) <= in_stack_00000068) ||
               (uVar23 = (uint)in_stack_00000058, *(uint *)(lVar15 + 0x18) <= uVar23))
            goto LAB_00e44400;
            lVar16 = unaff_x19[0xca];
            fVar37 = unaff_s8;
            if (*(float *)(lVar15 + 0x20 + unaff_x21 * 8) !=
                *(float *)(lVar15 + 0x20 + in_stack_00000058 * 8)) {
              fVar37 = fVar30;
            }
            *(float *)(unaff_x19 + 0xda) = fVar37;
            if (lVar16 == 0) goto LAB_00e443fc;
            cVar5 = *(char *)(lVar16 + 0x108);
            fVar37 = fVar30;
            if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar16 + 0x138)) {
              fVar37 = -1.0;
            }
            *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar16 + 0x84) * fVar37;
            if (cVar5 == '\0') {
              iVar36 = *(int *)(lVar16 + 0x160);
              iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
              uVar10 = 0x3e800000;
              *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar9 * 0.25);
              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
              iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
              iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              fVar38 = (float)iVar36;
              fVar37 = (float)iVar9;
              puVar21 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
            }
            else {
              if (*(long *)(lVar16 + 0x100) == 0) goto LAB_00e443fc;
              fVar37 = (float)FUN_00e5df18(*(long *)(lVar16 + 0x100),0);
              puVar21 = (undefined8 *)
                        UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
              ;
              if (((*in_stack_00000060 == 0.0) ||
                  (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0)) ||
                 (plVar11 = *(long **)(lVar15 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
              iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0))
              goto LAB_00e443fc;
              fVar38 = 0.25;
              *(float *)(unaff_x19 + 0xdb) =
                   fVar37 / (*(float *)(lVar15 + 0x40) * (float)iVar9 * 0.25);
              FUN_00e5df18(lVar15,0);
              if ((unaff_x19[0xca] == 0) ||
                 ((lVar15 = *(long *)(unaff_x19[0xca] + 0x100), lVar15 == 0 ||
                  (plVar11 = *(long **)(lVar15 + 0x18), plVar11 == (long *)0x0))))
              goto LAB_00e443fc;
              iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0x100), lVar15 == 0))
              goto LAB_00e443fc;
              fVar37 = *(float *)(lVar15 + 0x44) * (float)iVar9;
            }
            fVar39 = 0.25;
            fVar38 = fVar38 / (fVar37 * 0.25);
            *(float *)((long)unaff_x19 + 0x6dc) = fVar38;
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            in_stack_00000078 = CONCAT44(fVar38,(int)unaff_x19[0xdb]);
            FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar21);
            if (unaff_x19[99] == 0) goto LAB_00e443fc;
            in_stack_00000078 = unaff_x19[0xdb];
            _fStack0000000000000070 = (double)unaff_x19[0xda];
            FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar21);
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar20,0,0);
            fVar37 = (float)uVar10;
            uVar18 = (uint)unaff_x22;
            uVar24 = (uint)unaff_x29;
            if ((uVar13 & 1) != 0) {
              if (in_stack_00000050 == in_stack_00000010) {
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                fVar38 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
                fVar37 = fVar37 - pfVar14[2];
                uVar10 = (ulong)(uint)fVar37;
                if (fVar37 * fVar37 +
                    (fVar38 - *pfVar14) * (fVar38 - *pfVar14) +
                    (fVar39 - pfVar14[1]) * (fVar39 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
              }
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar15 == 0))
              goto LAB_00e443fc;
              uVar20 = *(undefined8 *)(lVar15 + 0x38);
              if (DAT_03774d77 == '\0') {
                thunk_FUN_00d48444(
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  );
                DAT_03774d77 = '\x01';
              }
              fVar37 = (float)uVar20 -
                       (float)**(undefined8 **)
                                (*(long *)
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                + 0xb8);
              fVar38 = (float)((ulong)uVar20 >> 0x20) -
                       (float)((ulong)**(undefined8 **)
                                        (*(long *)
                                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                        + 0xb8) >> 0x20);
              if (DAT_028aa020 <= fVar37 * fVar37 + fVar38 * fVar38) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              }
              dVar34 = *in_stack_00000060;
              if ((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xb0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar38 = fStack0000000000000048 * *(float *)(lVar15 + 0x38);
              *(float *)(unaff_x19 + 0xc9) = fVar38;
              fVar37 = fStack0000000000000048 * *(float *)(lVar15 + 0x3c);
              *(float *)((long)unaff_x19 + 0x64c) = fVar37;
              if (*(char *)(lVar15 + 0x25) != '\0') {
                fVar31 = 1.0 / *(float *)((long)dVar34 + 0x84);
              }
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              lVar16 = lVar15 + unaff_x21 * 0xc;
              fVar39 = *(float *)(lVar16 + 0x20);
              uVar20 = *(undefined8 *)(lVar16 + 0x24);
              *(float *)(unaff_x19 + 0xcd) = fVar39;
              in_stack_00000040[0xf] = uVar20;
              *(float *)(unaff_x19 + 0xd0) = fVar39;
              fVar29 = (float)uVar20;
              *(float *)((long)unaff_x19 + 0x684) = fVar29;
              if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
              lVar16 = lVar15 + unaff_x22 * 0xc;
              uVar32 = *(undefined4 *)(lVar16 + 0x20);
              uVar20 = *(undefined8 *)(lVar16 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
              in_stack_00000040[0xf] = uVar20;
              *(undefined4 *)(unaff_x19 + 0xd2) = uVar32;
              *(int *)((long)unaff_x19 + 0x694) = (int)uVar20;
              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
              lVar16 = lVar15 + unaff_x29 * 0xc;
              uVar32 = *(undefined4 *)(lVar16 + 0x20);
              uVar20 = *(undefined8 *)(lVar16 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
              in_stack_00000040[0xf] = uVar20;
              *(undefined4 *)(unaff_x19 + 0xd4) = uVar32;
              *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar20;
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              lVar15 = lVar15 + in_stack_00000058 * 0xc;
              uVar32 = *(undefined4 *)(lVar15 + 0x20);
              uVar20 = *(undefined8 *)(lVar15 + 0x24);
              *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
              in_stack_00000040[0xf] = uVar20;
              *(undefined4 *)(unaff_x19 + 0xd6) = uVar32;
              *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar20;
              lVar15 = *(long *)((long)dVar34 + 0xb0);
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar15 + 0x24) == '\0') {
                lVar16 = *in_stack_00000028;
                if (lVar16 == 0) goto LAB_00e443fc;
                uVar4 = *(uint *)(lVar16 + 0x18);
                if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                lVar17 = lVar16 + unaff_x21 * 8;
                *(float *)(lVar17 + 0x20) = (fVar38 + fVar31 * fVar39) - *(float *)(lVar15 + 0x30);
                *(float *)(lVar17 + 0x24) = (fVar37 + fVar31 * fVar29) - *(float *)(lVar15 + 0x34);
                if (((uVar4 <= uVar18) ||
                    (*(ulong *)(lVar16 + unaff_x22 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar31 +
                                   (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                   (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xd2] * fVar31 + (float)unaff_x19[0xc9]) -
                                   (float)*(undefined8 *)(lVar15 + 0x30)), uVar4 <= uVar24)) ||
                   (*(ulong *)(lVar16 + unaff_x29 * 8 + 0x20) =
                         CONCAT44((fVar31 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                  (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                  (fVar31 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                                  (float)*(undefined8 *)(lVar15 + 0x30)), uVar4 <= uVar23))
                goto LAB_00e44400;
                uVar10 = unaff_x19[0xc9];
                *(ulong *)(lVar16 + in_stack_00000058 * 8 + 0x20) =
                     CONCAT44((fVar31 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                              (float)(uVar10 >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                              (fVar31 * (float)unaff_x19[0xd6] + (float)uVar10) -
                              (float)*(undefined8 *)(lVar15 + 0x30));
              }
              else {
                fVar35 = *(float *)((long)dVar34 + 0x44);
                *(float *)(unaff_x19 + 0xd8) = fVar35;
                fVar3 = *(float *)((long)dVar34 + 0x48);
                lVar16 = unaff_x19[0x61];
                *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
                if (lVar16 == 0) goto LAB_00e443fc;
                uVar4 = *(uint *)(lVar16 + 0x18);
                if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                lVar17 = lVar16 + unaff_x21 * 8;
                *(float *)(lVar17 + 0x20) =
                     (fVar38 + fVar31 * (fVar39 - fVar35)) - *(float *)(lVar15 + 0x30);
                *(float *)(lVar17 + 0x24) =
                     (fVar37 + fVar31 * (fVar29 - fVar3)) - *(float *)(lVar15 + 0x34);
                if (((uVar4 <= uVar18) ||
                    (*(ulong *)(lVar16 + unaff_x22 * 8 + 0x20) =
                          CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                   ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                   (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar31) -
                                   (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                   ((float)unaff_x19[0xc9] +
                                   ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar31) -
                                   (float)*(undefined8 *)(lVar15 + 0x30)), uVar4 <= uVar24)) ||
                   (*(ulong *)(lVar16 + unaff_x29 * 8 + 0x20) =
                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                  fVar31 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                           (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                  (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                                  ((float)unaff_x19[0xc9] +
                                  fVar31 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                                  (float)*(undefined8 *)(lVar15 + 0x30)), uVar4 <= uVar23))
                goto LAB_00e44400;
                uVar10 = unaff_x19[0xd8];
                *(ulong *)(lVar16 + in_stack_00000058 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar31 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                       (float)(uVar10 >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar15 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar31 * ((float)unaff_x19[0xd6] - (float)uVar10)) -
                              (float)*(undefined8 *)(lVar15 + 0x30));
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
                if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                lVar16 = *in_stack_00000028;
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(undefined8 *)(lVar16 + unaff_x21 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + unaff_x21 * 8 + 0x20);
                lVar15 = *in_stack_00000020;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                lVar16 = *in_stack_00000028;
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_00e44400;
                *(undefined8 *)(lVar16 + (long)(int)uVar18 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + (long)(int)uVar18 * 8 + 0x20);
                lVar15 = *in_stack_00000020;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                lVar16 = *in_stack_00000028;
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                *(undefined8 *)(lVar16 + (long)(int)uVar24 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + (long)(int)uVar24 * 8 + 0x20);
                lVar15 = *in_stack_00000020;
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                lVar16 = *in_stack_00000028;
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                *(undefined8 *)(lVar16 + in_stack_00000058 * 8 + 0x20) =
                     *(undefined8 *)(lVar15 + in_stack_00000058 * 8 + 0x20);
                dVar34 = *in_stack_00000060;
                if (dVar34 == 0.0) goto LAB_00e443fc;
              }
            }
            dVar33 = DAT_028aa048;
            pdVar28 = in_stack_00000060;
            if (*(char *)((long)dVar34 + 0x108) != '\0') {
              if (*(long *)((long)dVar34 + 0x100) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)((long)dVar34 + 0x100) + 0x20) == '\0') {
                lVar15 = *unaff_x24;
                dVar34 = modf(DAT_028aa048,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = 255.0;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar34 = modf(dVar33,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar34 = modf(dVar33,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                *(uint *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar34 = modf(dVar33,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar34 = modf(dVar33,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar15 + in_stack_00000058 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                goto LAB_00e43400;
              }
            }
            uVar20 = *(undefined8 *)((long)dVar34 + 0xa8);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar20,0,0);
            dVar34 = *in_stack_00000060;
            if (dVar34 == 0.0) goto LAB_00e443fc;
            if ((uVar13 & 1) == 0) {
              uVar20 = *(undefined8 *)((long)dVar34 + 0xb0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar13 = FUN_02681b9c(uVar20,0,0);
              dVar34 = DAT_028aa048;
              if ((uVar13 & 1) == 0) {
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_02681b9c(uVar20,0,0);
                lVar15 = *unaff_x24;
                if ((uVar10 & 1) == 0) {
                  fVar30 = *(float *)((long)unaff_x19 + 0x8c);
                  fVar37 = *(float *)(unaff_x19 + 0x12);
                  fVar39 = *(float *)((long)unaff_x19 + 0x94);
                  fVar38 = *(float *)(unaff_x19 + 0x13);
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
                  fVar30 = fVar37;
                  if (1.0 < fVar37) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar30 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3fd48;
                    }
                    fVar37 = (float)(int)(fVar30 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = fVar30;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar30 + -0.5);
                  }
                  fVar30 = fVar39;
                  if (1.0 < fVar39) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar39 = fVar38;
                  if (1.0 < fVar38) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar39 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar39 + -0.5);
                  }
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                  *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                  fVar30 = *(float *)(unaff_x19 + 0x12);
                  lVar15 = unaff_x19[0x5f];
                  fVar38 = *(float *)((long)unaff_x19 + 0x94);
                  fVar37 = *(float *)(unaff_x19 + 0x13);
                  fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                    fVar31 = unaff_s8;
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
                  fVar39 = fVar30;
                  if (1.0 < fVar30) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e40610;
                    }
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar30;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar30 = fVar38;
                  if (1.0 < fVar38) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar38 = fVar37;
                  if (1.0 < fVar37) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar38 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar34 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                  *(uint *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                  fVar30 = *(float *)(unaff_x19 + 0x12);
                  lVar15 = unaff_x19[0x5f];
                  fVar38 = *(float *)((long)unaff_x19 + 0x94);
                  fVar37 = *(float *)(unaff_x19 + 0x13);
                  fVar31 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                    fVar31 = unaff_s8;
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
                  fVar39 = fVar30;
                  if (1.0 < fVar30) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e40e20;
                    }
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar30;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar30 = fVar38;
                  if (1.0 < fVar38) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar38 = fVar37;
                  if (1.0 < fVar37) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar38 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar34 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                  *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                  fVar31 = *(float *)((long)unaff_x19 + 0x8c);
                  fVar30 = *(float *)(unaff_x19 + 0x12);
                  lVar15 = unaff_x19[0x5f];
                  fVar38 = *(float *)((long)unaff_x19 + 0x94);
                  fVar37 = *(float *)(unaff_x19 + 0x13);
                }
                else {
                  if ((*in_stack_00000060 == 0.0) ||
                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                  goto LAB_00e443fc;
                  fVar30 = *(float *)(lVar16 + 0x18);
                  fVar37 = *(float *)(lVar16 + 0x1c);
                  fVar39 = *(float *)(lVar16 + 0x20);
                  fVar38 = *(float *)(lVar16 + 0x24);
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
                  fVar30 = fVar37;
                  if (1.0 < fVar37) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar30 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                  if (0.0 <= fVar30) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3fcc4;
                    }
                    fVar37 = (float)(int)(fVar30 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = fVar30;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar30 + -0.5);
                  }
                  fVar30 = fVar39;
                  if (1.0 < fVar39) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar39 = fVar38;
                  if (1.0 < fVar38) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar39 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar39 + -0.5);
                  }
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                  *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                  if ((*in_stack_00000060 == 0.0) ||
                     (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                  goto LAB_00e443fc;
                  fVar30 = *(float *)(lVar15 + 0x1c);
                  lVar16 = *unaff_x24;
                  fVar38 = *(float *)(lVar15 + 0x20);
                  fVar37 = *(float *)(lVar15 + 0x24);
                  fVar31 = *(float *)(lVar15 + 0x18) * 255.0;
                  if (*(float *)(lVar15 + 0x18) < 0.0) {
                    fVar31 = unaff_s8;
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
                  fVar39 = fVar30;
                  if (1.0 < fVar30) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e4057c;
                    }
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar30;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar30 = fVar38;
                  if (1.0 < fVar38) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar38 = fVar37;
                  if (1.0 < fVar37) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar38 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar34 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar16 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_00e44400;
                  *(uint *)(lVar16 + (long)(int)uVar18 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                  if ((*in_stack_00000060 == 0.0) ||
                     (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                  goto LAB_00e443fc;
                  fVar30 = *(float *)(lVar15 + 0x1c);
                  lVar16 = *unaff_x24;
                  fVar38 = *(float *)(lVar15 + 0x20);
                  fVar37 = *(float *)(lVar15 + 0x24);
                  fVar31 = *(float *)(lVar15 + 0x18) * 255.0;
                  if (*(float *)(lVar15 + 0x18) < 0.0) {
                    fVar31 = unaff_s8;
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
                  fVar39 = fVar30;
                  if (1.0 < fVar30) {
                    fVar39 = 1.0;
                  }
                  fVar39 = fVar39 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar39 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar34 == 0.5) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e40d8c;
                    }
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = fVar30;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar30 = fVar38;
                  if (1.0 < fVar38) {
                    fVar30 = 1.0;
                  }
                  fVar30 = fVar30 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar30 = unaff_s8;
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
                  fVar38 = fVar37;
                  if (1.0 < fVar37) {
                    fVar38 = 1.0;
                  }
                  fVar38 = fVar38 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar38 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                  if (0.0 <= fVar38) {
                    if (dVar34 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar38 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar38 + -0.5);
                  }
                  if (lVar16 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                  *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                       (int)fVar31 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                  if ((*in_stack_00000060 == 0.0) ||
                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                  goto LAB_00e443fc;
                  fVar31 = *(float *)(lVar16 + 0x18);
                  fVar30 = *(float *)(lVar16 + 0x1c);
                  lVar15 = *unaff_x24;
                  fVar38 = *(float *)(lVar16 + 0x20);
                  fVar37 = *(float *)(lVar16 + 0x24);
                }
                fVar39 = fVar31 * 255.0;
                if (fVar31 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar34 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar39 + -0.5);
                }
                fVar39 = fVar30;
                if (1.0 < fVar30) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar30 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar34 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e412dc;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = fVar30;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar39 + -0.5);
                }
                fVar30 = fVar38;
                if (1.0 < fVar38) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar38 < 0.0) {
                  fVar30 = unaff_s8;
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
                uVar10 = 0x3f800000;
                fVar38 = fVar37;
                if (1.0 < fVar37) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar37 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar34 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar15 + in_stack_00000058 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
              }
              else {
                lVar15 = *unaff_x24;
                dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
                if (dVar33 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = 255.0;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar33 = modf(dVar34,(double *)&stack0x00000070);
                if (dVar33 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar33 = modf(dVar34,(double *)&stack0x00000070);
                if (dVar33 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                unaff_w28 = 255.0;
                if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
                unaff_x23 = (long)(int)uVar18;
                *(uint *)(lVar15 + unaff_x23 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar33 = modf(dVar34,(double *)&stack0x00000070);
                if (dVar33 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                unaff_x27 = (long)(int)uVar24;
                *(uint *)(lVar15 + unaff_x27 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                lVar15 = *unaff_x24;
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
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = 255.0;
                }
                dVar34 = modf(dVar34,(double *)&stack0x00000070);
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = 255.0;
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar15 + in_stack_00000058 * 4 + 0x20) =
                     (int)fVar31 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar13 = FUN_02681b9c(uVar20,0,0);
                if ((uVar13 & 1) != 0) {
                  lVar15 = *unaff_x24;
                  if (lVar15 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                  unaff_x20 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
                  uVar23 = *unaff_x20;
                  if ((*in_stack_00000060 == 0.0) ||
                     (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                  goto LAB_00e443fc;
                  fVar30 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                  fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                  fVar38 = *(float *)(lVar15 + 0x20);
                  fVar37 = *(float *)(lVar15 + 0x24);
                  fVar31 = fVar30 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar31 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar34 == 0.5) {
                      fVar31 = 1.0;
                      goto LAB_00e3ede4;
                    }
                    unaff_s11 = (float)(int)(fVar31 + 0.5);
                  }
                  else if (dVar34 == -0.5) {
                    fVar31 = -1.0;
LAB_00e3ede4:
                    unaff_s11 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      unaff_s11 = (float)_fStack0000000000000070 + fVar31;
                    }
                  }
                  else {
                    unaff_s11 = (float)(int)(fVar31 + -0.5);
                  }
                  fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
                  fVar31 = fVar39 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar31 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar34 == 0.5) {
                      unaff_s12 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        unaff_s12 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      unaff_s12 = (float)(int)(fVar31 + 0.5);
                    }
                  }
                  else if (dVar34 == -0.5) {
                    unaff_s12 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      unaff_s12 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    unaff_s12 = (float)(int)(fVar31 + -0.5);
                  }
                  unaff_s10 = 1.0;
                  fVar31 = fVar38;
                  if (1.0 < fVar38) {
                    fVar31 = 1.0;
                  }
                  unaff_s14 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
                  fVar31 = fVar31 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar31 = unaff_s8;
                  }
                  dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                  if (0.0 <= fVar31) {
                    if (dVar34 != 0.5) {
                      unaff_s9 = (float)(int)(fVar31 + 0.5);
                      goto code_r0x00e40120;
                    }
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                  else {
                    if (dVar34 != -0.5) {
                      unaff_s9 = (float)(int)(fVar31 + -0.5);
                      goto code_r0x00e40120;
                    }
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                  unaff_s9 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    unaff_s9 = fVar31;
                  }
                  goto code_r0x00e40120;
                }
              }
              goto LAB_00e43400;
            }
            lVar15 = *(long *)((long)dVar34 + 0xa8);
            if (lVar15 == 0) goto LAB_00e443fc;
            fVar31 = *(float *)(lVar15 + 0x24);
            if (fVar31 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            unaff_x25 = (long *)StringLiteral_9119;
            cVar5 = *(char *)(lVar15 + 0x2c);
            lVar17 = *unaff_x24;
            lVar16 = *(long *)(lVar15 + 0x18);
            fVar31 = fStack0000000000000048 * fVar31;
            if (*(int *)(lVar15 + 0x28) == 1) {
              if (cVar5 == '\0') {
                if (lVar16 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)(lVar15 + 0x20);
                fVar39 = *(float *)((long)dVar34 + 0x84);
                fVar31 = fVar31 + (*(float *)((long)dVar34 + 0x48) * fVar38) / fVar39;
                fVar31 = fVar31 - (float)(int)fVar31;
                fVar37 = fVar31;
                if (1.0 < fVar31) {
                  fVar37 = fVar30;
                }
                fVar29 = fVar37;
                if (fVar31 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar16,0);
                fVar31 = fVar29;
                if (1.0 < fVar29) {
                  fVar31 = fVar30;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar29 < 0.0) {
                  fVar31 = 0.0;
                }
                dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar34 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3eeac;
                  }
                  fVar30 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = fVar31;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar31 + -0.5);
                }
                fVar31 = fVar37;
                if (1.0 < fVar37) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar37 < 0.0) {
                  fVar31 = 0.0;
                }
                dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar34 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e41534;
                  }
                  fVar37 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = fVar31;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar31 + -0.5);
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
                fVar38 = fVar39;
                if (1.0 < fVar39) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar39 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar34 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                     (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                dVar34 = *in_stack_00000060;
                if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                   (lVar16 = *(long *)(lVar15 + 0x18), lVar16 == 0)) goto LAB_00e443fc;
                fVar37 = *(float *)((long)dVar34 + 0x48);
                fVar38 = *(float *)((long)dVar34 + 0x84);
                lVar17 = *unaff_x24;
                fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                         (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
                fVar30 = fVar30 - (float)(int)fVar30;
                fVar31 = fVar30;
                if (1.0 < fVar30) {
                  fVar31 = 1.0;
                }
              }
              else {
                if (lVar16 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)((long)dVar34 + 0x84);
                fVar39 = *(float *)(lVar15 + 0x20);
                fVar31 = fVar31 + ((*(float *)((long)dVar34 + 0x48) + fVar38) * fVar39) / fVar38;
                fVar31 = fVar31 - (float)(int)fVar31;
                fVar37 = fVar31;
                if (1.0 < fVar31) {
                  fVar37 = fVar30;
                }
                fVar29 = fVar37;
                if (fVar31 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar16,0);
                fVar31 = fVar29;
                if (1.0 < fVar29) {
                  fVar31 = fVar30;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar29 < 0.0) {
                  fVar31 = 0.0;
                }
                dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar34 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ed6c;
                  }
                  fVar30 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = fVar31;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar31 + -0.5);
                }
                fVar31 = fVar37;
                if (1.0 < fVar37) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * 255.0;
                if (fVar37 < 0.0) {
                  fVar31 = 0.0;
                }
                dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar34 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3f2ec;
                  }
                  fVar37 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar34 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = fVar31;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar31 + -0.5);
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
                fVar38 = fVar39;
                if (1.0 < fVar39) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar39 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar34 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar34 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                     (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                dVar34 = *in_stack_00000060;
                if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                   (lVar16 = *(long *)(lVar15 + 0x18), lVar16 == 0)) goto LAB_00e443fc;
                fVar37 = *(float *)((long)dVar34 + 0x84);
                fVar38 = *(float *)(lVar15 + 0x20);
                lVar17 = *unaff_x24;
                fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                         ((*(float *)((long)dVar34 + 0x48) + fVar37) * fVar38) / fVar37;
                fVar30 = fVar30 - (float)(int)fVar30;
                fVar31 = fVar30;
                if (1.0 < fVar30) {
                  fVar31 = 1.0;
                }
              }
              fVar39 = fVar31;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,lVar16,0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar30;
                }
              }
              else {
                fVar39 = (float)(int)(fVar30 + -0.5);
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
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar31;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar37;
              if (1.0 < fVar37) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar37 < 0.0) {
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
              fVar37 = fVar38;
              if (1.0 < fVar38) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar38 < 0.0) {
                fVar37 = 0.0;
              }
              dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar34 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar17 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar17 + 0x18) <= uVar18) goto LAB_00e44400;
              *(uint *)(lVar17 + (long)(int)uVar18 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
              fVar37 = *(float *)((long)dVar34 + 0x48);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              lVar16 = *unaff_x24;
              fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar31 = fVar30;
              if (1.0 < fVar30) {
                fVar31 = 1.0;
              }
              fVar39 = fVar31;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar30;
                }
              }
              else {
                fVar39 = (float)(int)(fVar30 + -0.5);
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
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar31;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar37;
              if (1.0 < fVar37) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar37 < 0.0) {
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
              fVar37 = fVar38;
              if (1.0 < fVar38) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar38 < 0.0) {
                fVar37 = 0.0;
              }
              dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar34 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
              *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (*(long *)(lVar15 + 0x18) == 0)) goto LAB_00e443fc;
              fVar37 = *(float *)((long)dVar34 + 0x48);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              lVar16 = *unaff_x24;
              fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar31 = fVar30;
              if (1.0 < fVar30) {
                fVar31 = 1.0;
              }
              fVar39 = fVar31;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar30;
                }
              }
              else {
                fVar39 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar31;
              if (1.0 < fVar31) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar31 < 0.0) {
                fVar30 = 0.0;
              }
LAB_00e42040:
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (fVar30 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar34 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                fVar30 = fVar31 + 1.0;
                goto LAB_00e425d4;
              }
              fVar31 = (float)(int)(fVar30 + 0.5);
            }
            else {
              lVar19 = *in_stack_00000038;
              if (lVar19 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar19 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar16 == 0) goto LAB_00e443fc;
              fVar38 = *(float *)(lVar19 + unaff_x21 * 0xc + 0x20);
              fVar39 = *(float *)((long)dVar34 + 0x84);
              fVar31 = fVar31 + (fVar38 * *(float *)(lVar15 + 0x20)) / fVar39;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar37 = fVar31;
              if (1.0 < fVar31) {
                fVar37 = fVar30;
              }
              fVar29 = fVar37;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar16,0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = fVar30;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3e0b0;
                }
                fVar30 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar31;
                }
              }
              else {
                fVar30 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar37;
              if (1.0 < fVar37) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar37 < 0.0) {
                fVar31 = 0.0;
              }
              dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ee80;
                }
                fVar37 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = fVar31;
                }
              }
              else {
                fVar37 = (float)(int)(fVar31 + -0.5);
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
              fVar38 = fVar39;
              if (1.0 < fVar39) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar39 < 0.0) {
                fVar38 = 0.0;
              }
              dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar34 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar17 == 0) goto LAB_00e443fc;
              fVar39 = 1.0;
              if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              unaff_x25 = (long *)StringLiteral_9119;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (lVar16 = *in_stack_00000038, lVar16 == 0)) goto LAB_00e443fc;
              lVar19 = *unaff_x24;
              lVar17 = *(long *)(lVar15 + 0x18);
              fVar31 = fStack0000000000000048 * *(float *)(lVar15 + 0x24);
              if (cVar5 != '\0') {
                if (uVar18 < *(uint *)(lVar16 + 0x18)) {
                  if (lVar17 != 0) {
                    fVar37 = *(float *)(lVar16 + (long)(int)uVar18 * 0xc + 0x20);
                    fVar38 = *(float *)((long)dVar34 + 0x84);
                    fVar31 = fVar31 + (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
                    fVar31 = fVar31 - (float)(int)fVar31;
                    fVar30 = fVar31;
                    if (1.0 < fVar31) {
                      fVar30 = fVar39;
                    }
                    fVar29 = fVar30;
                    if (fVar31 < 0.0) {
                      fVar29 = 0.0;
                    }
                    fVar29 = (float)FUN_0269ad38(fVar29,lVar17,0);
                    fVar31 = fVar29;
                    if (1.0 < fVar29) {
                      fVar31 = fVar39;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar29 < 0.0) {
                      fVar31 = 0.0;
                    }
                    dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
                    if (0.0 <= fVar31) {
                      if (dVar34 == 0.5) {
                        fVar31 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar39 = (float)(int)(fVar31 + 0.5);
                    }
                    else if (dVar34 == -0.5) {
                      fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = fVar31;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar31 + -0.5);
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
                        fVar31 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar30 = (float)(int)(fVar31 + 0.5);
                    }
                    else if (dVar34 == -0.5) {
                      fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar30 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar30 = fVar31;
                      }
                    }
                    else {
                      fVar30 = (float)(int)(fVar31 + -0.5);
                    }
                    fVar31 = fVar37;
                    if (1.0 < fVar37) {
                      fVar31 = 1.0;
                    }
                    fVar31 = fVar31 * 255.0;
                    if (fVar37 < 0.0) {
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
                    fVar37 = fVar38;
                    if (1.0 < fVar38) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar38 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar34 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar34 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    if (lVar19 != 0) {
                      if (uVar18 < *(uint *)(lVar19 + 0x18)) {
                        *(uint *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) =
                             (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                             ((int)fVar31 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        dVar34 = *in_stack_00000060;
                        if (((dVar34 != 0.0) &&
                            (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 != 0)) &&
                           (lVar16 = *in_stack_00000038, lVar16 != 0)) {
                          if (uVar24 < *(uint *)(lVar16 + 0x18)) {
                            if (*(long *)(lVar15 + 0x18) != 0) {
                              fVar37 = *(float *)(lVar16 + (long)(int)uVar24 * 0xc + 0x20);
                              fVar38 = *(float *)((long)dVar34 + 0x84);
                              lVar16 = *unaff_x24;
                              fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                                       (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
                              fVar30 = fVar30 - (float)(int)fVar30;
                              fVar31 = fVar30;
                              if (1.0 < fVar30) {
                                fVar31 = 1.0;
                              }
                              fVar39 = fVar31;
                              if (fVar30 < 0.0) {
                                fVar39 = 0.0;
                              }
                              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18),0);
                              fVar30 = fVar39;
                              if (1.0 < fVar39) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar34 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar39 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar34 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar30;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar30 + -0.5);
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
                                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar34 == -0.5) {
                                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = fVar31;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar31 = fVar37;
                              if (1.0 < fVar37) {
                                fVar31 = 1.0;
                              }
                              fVar31 = fVar31 * 255.0;
                              if (fVar37 < 0.0) {
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
                              fVar37 = fVar38;
                              if (1.0 < fVar38) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar37 = 0.0;
                              }
                              dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
                              unaff_x25 = (long *)StringLiteral_9119;
                              if (0.0 <= fVar37) {
                                if (dVar34 == 0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + 0.5);
                                }
                              }
                              else if (dVar34 == -0.5) {
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              if (lVar16 != 0) {
                                if (uVar24 < *(uint *)(lVar16 + 0x18)) {
                                  *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                       (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                  dVar34 = *in_stack_00000060;
                                  if (((dVar34 != 0.0) &&
                                      (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 != 0)) &&
                                     (lVar16 = *in_stack_00000038, lVar16 != 0)) {
                                    if (uVar23 < *(uint *)(lVar16 + 0x18)) {
                                      if (*(long *)(lVar15 + 0x18) != 0) {
                                        fVar37 = *(float *)(lVar16 + in_stack_00000058 * 0xc + 0x20)
                                        ;
                                        fVar38 = *(float *)((long)dVar34 + 0x84);
                                        lVar16 = *unaff_x24;
                                        fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24)
                                                 + (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
                                        fVar30 = fVar30 - (float)(int)fVar30;
                                        fVar31 = fVar30;
                                        if (1.0 < fVar30) {
                                          fVar31 = 1.0;
                                        }
                                        fVar39 = fVar31;
                                        if (fVar30 < 0.0) {
                                          fVar39 = 0.0;
                                        }
                                        fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18)
                                                                     ,0);
                                        fVar30 = fVar39;
                                        if (1.0 < fVar39) {
                                          fVar30 = 1.0;
                                        }
                                        uVar10 = 0x437f0000;
                                        fVar30 = fVar30 * 255.0;
                                        if (fVar39 < 0.0) {
                                          fVar30 = 0.0;
                                        }
                                        dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
                                        if (0.0 <= fVar30) {
                                          if (dVar34 == 0.5) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar39 = (float)(int)(fVar30 + 0.5);
                                        }
                                        else if (dVar34 == -0.5) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = fVar30;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar30 + -0.5);
                                        }
                                        fVar30 = fVar31;
                                        if (1.0 < fVar31) {
                                          fVar30 = 1.0;
                                        }
                                        fVar30 = fVar30 * 255.0;
                                        if (fVar31 < 0.0) {
                                          fVar30 = 0.0;
                                        }
                                        goto LAB_00e42040;
                                      }
                                      goto LAB_00e443fc;
                                    }
                                    goto LAB_00e44400;
                                  }
                                  goto LAB_00e443fc;
                                }
                                goto LAB_00e44400;
                              }
                            }
                            goto LAB_00e443fc;
                          }
                          goto LAB_00e44400;
                        }
                        goto LAB_00e443fc;
                      }
                      goto LAB_00e44400;
                    }
                  }
                  goto LAB_00e443fc;
                }
                goto LAB_00e44400;
              }
              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar17 == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar16 + unaff_x21 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              fVar31 = fVar31 + (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar30 = fVar31;
              if (1.0 < fVar31) {
                fVar30 = fVar39;
              }
              fVar29 = fVar30;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar17,0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = fVar39;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar34 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar34 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar39 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar31;
                }
              }
              else {
                fVar39 = (float)(int)(fVar31 + -0.5);
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
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar30 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar31;
                }
              }
              else {
                fVar30 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar37;
              if (1.0 < fVar37) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar37 < 0.0) {
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
              fVar37 = fVar38;
              if (1.0 < fVar38) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar38 < 0.0) {
                fVar37 = 0.0;
              }
              dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar34 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar19 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar19 + 0x18) <= uVar18) goto LAB_00e44400;
              *(uint *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (lVar16 = *in_stack_00000038, lVar16 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar16 + unaff_x21 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              lVar16 = *unaff_x24;
              fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar31 = fVar30;
              if (1.0 < fVar30) {
                fVar31 = 1.0;
              }
              fVar39 = fVar31;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar30;
                }
              }
              else {
                fVar39 = (float)(int)(fVar30 + -0.5);
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
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar31;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar31 = fVar37;
              if (1.0 < fVar37) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar37 < 0.0) {
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
              fVar37 = fVar38;
              if (1.0 < fVar38) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar38 < 0.0) {
                fVar37 = 0.0;
              }
              dVar34 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar34 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar34 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
              *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar31 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar34 = *in_stack_00000060;
              if (((dVar34 == 0.0) || (lVar15 = *(long *)((long)dVar34 + 0xa8), lVar15 == 0)) ||
                 (lVar16 = *in_stack_00000038, lVar16 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar15 + 0x18) == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar16 + unaff_x21 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar34 + 0x84);
              lVar16 = *unaff_x24;
              fVar30 = fStack0000000000000048 * *(float *)(lVar15 + 0x24) +
                       (fVar37 * *(float *)(lVar15 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar31 = fVar30;
              if (1.0 < fVar30) {
                fVar31 = 1.0;
              }
              fVar39 = fVar31;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar15 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar34 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar34 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar30;
                }
              }
              else {
                fVar39 = (float)(int)(fVar30 + -0.5);
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
              if (0.0 <= fVar30) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar34 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                fVar30 = fVar31 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar30;
                }
              }
              else {
                fVar31 = (float)(int)(fVar30 + -0.5);
              }
            }
            unaff_s8 = 0.0;
            fVar30 = fVar37;
            if (1.0 < fVar37) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar37 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42654;
              }
              fVar37 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = fVar30;
              }
            }
            else {
              fVar37 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar38;
            if (1.0 < fVar38) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar38 < 0.0) {
              fVar30 = 0.0;
            }
            dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar34 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar38 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar34 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar30;
              }
            }
            else {
              fVar38 = (float)(int)(fVar30 + -0.5);
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar39 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar20,0,0);
          } while ((uVar13 & 1) == 0);
          lVar15 = *unaff_x24;
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar22 = (uint *)(lVar15 + unaff_x21 * 4 + 0x20);
          uVar23 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) break;
          fVar31 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar38 = *(float *)(lVar15 + 0x20);
          fVar37 = *(float *)(lVar15 + 0x24);
          fVar30 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = 0.0;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e4287c;
            }
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = -1.0;
LAB_00e4287c:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar39 * 255.0;
          fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
          if (fVar39 < 0.0) {
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
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar39 = fVar39 * 255.0;
          fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
          if (fVar38 < 0.0) {
            fVar39 = 0.0;
          }
          dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar38;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = 0.0;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar37 = 1.0;
              goto LAB_00e42a44;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar37 = -1.0;
LAB_00e42a44:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *puVar22 = (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_00e44400;
          puVar22 = (uint *)(lVar15 + (long)(int)uVar18 * 4 + 0x20);
          uVar23 = *puVar22;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) break;
          fVar31 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
          fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
          fVar38 = *(float *)(lVar15 + 0x20);
          fVar37 = *(float *)(lVar15 + 0x24);
          fVar30 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = 0.0;
          }
          dVar34 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar34 == 0.5) {
              fVar31 = 1.0;
              goto LAB_00e42b80;
            }
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar31 = -1.0;
LAB_00e42b80:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar31;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar31 = fVar39 * 255.0;
          fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
          if (fVar39 < 0.0) {
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
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar39 = fVar39 * 255.0;
          fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
          if (fVar38 < 0.0) {
            fVar39 = 0.0;
          }
          dVar34 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar38;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = 0.0;
          }
          dVar34 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar34 == 0.5) {
              fVar37 = 1.0;
              goto LAB_00e42d48;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar34 == -0.5) {
            fVar37 = -1.0;
LAB_00e42d48:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *puVar22 = (int)fVar30 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar15 = *unaff_x24;
          if (lVar15 == 0) break;
          if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
          lVar15 = lVar15 + (long)(int)uVar24 * 4;
        }
      }
    }
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar12 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar16 = unaff_x19[0xcb];
    uVar32 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar16 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar12) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar16 + lVar15);
    *puVar2 = uVar32;
    puVar2[1] = (int)uVar13;
    puVar2[2] = (int)uVar10;
    lVar16 = unaff_x19[0xca];
    if ((lVar16 == 0) || (lVar17 = unaff_x19[0xcc], lVar17 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar17 + 0x18) <= uVar12) goto LAB_00e44400;
    uVar32 = *(undefined4 *)(lVar16 + 0x4c);
    uVar12 = uVar12 + 1;
    puVar21 = (undefined8 *)(lVar17 + lVar15);
    lVar15 = lVar15 + 0xc;
    *puVar21 = *(undefined8 *)(lVar16 + 0x44);
    *(undefined4 *)(puVar21 + 1) = uVar32;
  } while (uVar23 != uVar12);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar15 = unaff_x19[0x59];
  if (lVar15 != 0) {
    (**(code **)(lVar15 + 0x18))
              (*(undefined8 *)(lVar15 + 0x40),*in_stack_00000038,*plVar11,*plVar1,
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


