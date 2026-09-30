/*
FUNCTION_NAME: FullSerializer.Internal.fsSerializationCallbackProcessor$$OnBeforeDeserializeAfterInstanceCreation
ENTRY_POINT: 00e40258
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsSerializationCallbackProcessor__OnBeforeDeserializeAfterInstanceCreation
               (void)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 in_ZR;
  short sVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long *unaff_x19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long unaff_x20;
  long lVar22;
  uint uVar23;
  ulong unaff_x21;
  uint *puVar24;
  uint uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong unaff_x22;
  float unaff_w23;
  ulong uVar28;
  long *unaff_x24;
  long *unaff_x25;
  double *unaff_x26;
  ulong unaff_x29;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_s8;
  int iVar36;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float fVar37;
  float unaff_s13;
  float fVar38;
  float fVar39;
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
  
code_r0x00e40258:
  if ((bool)in_ZR) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar29 = (float)(int)(unaff_s10 + -0.5);
  }
LAB_00e40514:
  fVar34 = unaff_s9;
  if (1.0 < unaff_s9) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * unaff_w23;
  if (unaff_s9 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070 + 1.0;
      goto LAB_00e4057c;
    }
    fVar37 = (float)(int)(fVar34 + 0.5);
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
    fVar37 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar37 = fVar34;
    }
  }
  else {
    fVar37 = (float)(int)(fVar34 + -0.5);
  }
  fVar34 = unaff_s13;
  if (1.0 < unaff_s13) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * unaff_w23;
  if (unaff_s13 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar34 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar34 = (float)(int)(fVar34 + -0.5);
  }
  fVar38 = unaff_s12;
  if (1.0 < unaff_s12) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * unaff_w23;
  if (unaff_s12 < 0.0) {
    fVar38 = unaff_s8;
  }
  dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar32 == 0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar38 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar38 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar38 = (float)(int)(fVar38 + -0.5);
  }
  if (unaff_x20 != 0) {
    if ((uint)unaff_x22 < *(uint *)(unaff_x20 + 0x18)) {
      *(uint *)(unaff_x20 + (long)(int)(uint)unaff_x22 * 4 + 0x20) =
           (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
           (int)fVar38 << 0x18;
      if ((*unaff_x26 != 0.0) && (lVar16 = *(long *)((long)*unaff_x26 + 0xa0), lVar16 != 0)) {
        fVar34 = *(float *)(lVar16 + 0x1c);
        lVar22 = *unaff_x24;
        fVar38 = *(float *)(lVar16 + 0x20);
        fVar37 = *(float *)(lVar16 + 0x24);
        fVar29 = *(float *)(lVar16 + 0x18) * unaff_w23;
        if (*(float *)(lVar16 + 0x18) < 0.0) {
          fVar29 = unaff_s8;
        }
        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
        if (0.0 <= fVar29) {
          if (dVar32 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
        }
        else if (dVar32 == -0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar29 = (float)(int)(fVar29 + -0.5);
        }
        fVar39 = fVar34;
        if (1.0 < fVar34) {
          fVar39 = 1.0;
        }
        fVar39 = fVar39 * unaff_w23;
        if (fVar34 < 0.0) {
          fVar39 = unaff_s8;
        }
        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
        if (0.0 <= fVar39) {
          if (dVar32 == 0.5) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e40d8c;
          }
          fVar39 = (float)(int)(fVar39 + 0.5);
        }
        else if (dVar32 == -0.5) {
          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
          fVar39 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar39 = fVar34;
          }
        }
        else {
          fVar39 = (float)(int)(fVar39 + -0.5);
        }
        fVar34 = fVar38;
        if (1.0 < fVar38) {
          fVar34 = 1.0;
        }
        fVar34 = fVar34 * unaff_w23;
        if (fVar38 < 0.0) {
          fVar34 = unaff_s8;
        }
        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar32 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar32 == -0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar34 = (float)(int)(fVar34 + -0.5);
        }
        fVar38 = fVar37;
        if (1.0 < fVar37) {
          fVar38 = 1.0;
        }
        fVar38 = fVar38 * unaff_w23;
        if (fVar37 < 0.0) {
          fVar38 = unaff_s8;
        }
        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar32 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = (float)(int)(fVar38 + 0.5);
          }
        }
        else if (dVar32 == -0.5) {
          fVar37 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar37 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar37 = (float)(int)(fVar38 + -0.5);
        }
        if (lVar22 != 0) {
          if ((uint)unaff_x29 < *(uint *)(lVar22 + 0x18)) {
            *(uint *)(lVar22 + (long)(int)(uint)unaff_x29 * 4 + 0x20) =
                 (int)fVar29 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            if ((*unaff_x26 != 0.0) && (lVar16 = *(long *)((long)*unaff_x26 + 0xa0), lVar16 != 0)) {
              fVar29 = *(float *)(lVar16 + 0x18);
              fVar34 = *(float *)(lVar16 + 0x1c);
              lVar22 = *unaff_x24;
              fVar38 = *(float *)(lVar16 + 0x20);
              fVar37 = *(float *)(lVar16 + 0x24);
LAB_00e411d8:
              fVar39 = fVar29 * unaff_w23;
              if (fVar29 < 0.0) {
                fVar39 = unaff_s8;
              }
              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar32 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar39 + 0.5);
                }
              }
              else if (dVar32 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar39 + -0.5);
              }
              fVar39 = fVar34;
              if (1.0 < fVar34) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * unaff_w23;
              if (fVar34 < 0.0) {
                fVar39 = unaff_s8;
              }
              dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar32 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar34;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              fVar34 = fVar38;
              if (1.0 < fVar38) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * unaff_w23;
              if (fVar38 < 0.0) {
                fVar34 = unaff_s8;
              }
              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar32 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar32 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              uVar11 = 0x3f800000;
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * unaff_w23;
              if (fVar37 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar32 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar32 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar22 != 0) {
                if ((uint)in_stack_00000058 < *(uint *)(lVar22 + 0x18)) {
                  *(uint *)(lVar22 + in_stack_00000058 * 4 + 0x20) =
                       (int)fVar29 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar34 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
LAB_00e43400:
                  do {
                    lVar16 = *unaff_x24;
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                    lVar16 = lVar16 + unaff_x21 * 4;
                    fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                    *(char *)(lVar16 + 0x23) =
                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar29);
                    lVar16 = unaff_x19[0x5f];
                    if (lVar16 == 0) goto LAB_00e443fc;
                    uVar23 = (uint)unaff_x22;
                    if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                    lVar16 = lVar16 + (long)(int)uVar23 * 4;
                    fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                    *(char *)(lVar16 + 0x23) =
                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar29);
                    lVar16 = unaff_x19[0x5f];
                    if (lVar16 == 0) goto LAB_00e443fc;
                    uVar25 = (uint)unaff_x29;
                    if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                    lVar16 = lVar16 + (long)(int)uVar25 * 4;
                    fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                    *(char *)(lVar16 + 0x23) =
                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar29);
                    lVar16 = unaff_x19[0x5f];
                    if (lVar16 == 0) goto LAB_00e443fc;
                    uVar18 = (uint)in_stack_00000058;
                    if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                    lVar16 = lVar16 + in_stack_00000058 * 4;
                    uVar14 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                    fVar29 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                    *(char *)(lVar16 + 0x23) =
                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar29);
                    uVar13 = FUN_00e3703c();
                    if ((uVar13 & 1) == 0) {
                      lVar16 = *unaff_x25;
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar16 = *unaff_x25;
                      }
                      if (*(int *)(*(long *)(lVar16 + 0xb8) + 0x20) == 1) {
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        puVar24 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                        uVar5 = *puVar24;
                        fVar34 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
                        fVar37 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
                        fVar38 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
                        fVar29 = fVar34;
                        if (1.0 < fVar34) {
                          fVar29 = 1.0;
                        }
                        fVar29 = fVar29 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar34 = fVar37;
                        if (1.0 < fVar37) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar34 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar37 = fVar38;
                        if (1.0 < fVar38) {
                          fVar37 = 1.0;
                        }
                        fVar39 = (float)(uVar5 >> 0x18) / 255.0;
                        fVar37 = fVar37 * 255.0;
                        if (fVar38 < 0.0) {
                          fVar37 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e43744;
                          }
                          fVar38 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar39 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar39 + -0.5);
                        }
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        *puVar24 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        lVar16 = *in_stack_00000030;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        puVar24 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
                        uVar5 = *puVar24;
                        fVar34 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
                        fVar37 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
                        fVar38 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
                        fVar29 = fVar34;
                        if (1.0 < fVar34) {
                          fVar29 = 1.0;
                        }
                        fVar29 = fVar29 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar34 = fVar37;
                        if (1.0 < fVar37) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar34 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar37 = fVar38;
                        if (1.0 < fVar38) {
                          fVar37 = 1.0;
                        }
                        fVar39 = (float)(uVar5 >> 0x18) / 255.0;
                        fVar37 = fVar37 * 255.0;
                        if (fVar38 < 0.0) {
                          fVar37 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e43a84;
                          }
                          fVar38 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar39 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar39 + -0.5);
                        }
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        *puVar24 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        lVar16 = *in_stack_00000030;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        puVar24 = (uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20);
                        uVar23 = *puVar24;
                        fVar34 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                        fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                        fVar38 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
                        fVar29 = fVar34;
                        if (1.0 < fVar34) {
                          fVar29 = 1.0;
                        }
                        fVar29 = fVar29 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar34 = fVar37;
                        if (1.0 < fVar37) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar34 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
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
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e43dbc;
                          }
                          fVar38 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar39 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar39 + -0.5);
                        }
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        *puVar24 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        lVar16 = *in_stack_00000030;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        puVar24 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20);
                        uVar23 = *puVar24;
                        fVar34 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                        fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                        fVar38 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
                        fVar29 = fVar34;
                        if (1.0 < fVar34) {
                          fVar29 = 1.0;
                        }
                        fVar29 = fVar29 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        uVar11 = 0x3f800000;
                        fVar34 = fVar37;
                        if (1.0 < fVar37) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar34 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
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
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e440f4;
                          }
                          fVar38 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          uVar14 = 0;
                          if (dVar32 == 0.5) {
                            fVar37 = 1.0;
                            goto LAB_00e44170;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else {
                          uVar14 = 0;
                          if (dVar32 == -0.5) {
                            fVar37 = -1.0;
LAB_00e44170:
                            fVar37 = (float)_fStack0000000000000070 + fVar37;
                            uVar14 = (ulong)(uint)fVar37;
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar37;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar39 + -0.5);
                          }
                        }
                        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        *puVar24 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                   ((int)fVar38 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                        unaff_x24 = in_stack_00000030;
                      }
                    }
                    puVar8 = StringLiteral_4992;
                    puVar7 = OVREyeGaze_TypeInfo;
                    in_stack_00000050 = in_stack_00000050 + 1;
                    if (in_stack_00000050 == in_stack_00000018) {
                      if (((unaff_x19[0x58] == 0) ||
                          (iVar10 = FUN_026c82cc(unaff_x19[0x58],0), iVar10 < 1)) &&
                         (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
                      puVar7 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
                      if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
                      iVar10 = *(int *)(unaff_x19[0xf] + 0x10);
                      plVar12 = unaff_x19 + 0xcb;
                      if (iVar10 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                        FUN_010afdd4(plVar12,iVar10,
                                     *(undefined8 *)
                                      Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
                      }
                      if ((unaff_x19[0xcc] == 0) || (lVar16 = unaff_x19[0xf], lVar16 == 0))
                      goto LAB_00e443fc;
                      plVar1 = unaff_x19 + 0xcc;
                      if (*(int *)(lVar16 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                        FUN_010afdd4(plVar1,*(int *)(lVar16 + 0x10),*(undefined8 *)puVar7);
                        lVar16 = unaff_x19[0xf];
                        if (lVar16 == 0) goto LAB_00e443fc;
                      }
                      uVar23 = *(uint *)(lVar16 + 0x10);
                      if ((int)uVar23 < 1) goto LAB_00e44358;
                      uVar13 = 0;
                      lVar16 = 0x20;
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
                           (FUN_0132138c(unaff_x19[9],iVar10,&stack0x00000070,*(undefined8 *)puVar8)
                           , _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                        *(undefined4 *)(unaff_x19 + 0x4a) =
                             *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                        if ((unaff_x19[9] == 0) ||
                           (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                         &stack0x00000070,*(undefined8 *)puVar8),
                           _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                        *(float *)((long)unaff_x19 + 0x254) =
                             *(float *)((long)_fStack0000000000000070 + 0x48) +
                             *(float *)((long)unaff_x19 + 0x50c);
                        *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c)
                        ;
                      }
                    }
                    else {
                      dVar32 = *unaff_x26;
                      if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x78) == 0))
                      goto LAB_00e443fc;
                      fVar34 = *(float *)(*(long *)((long)dVar32 + 0x78) + 0x18);
                      fVar29 = DAT_028aa034;
                      if (fVar34 != 0.0) {
                        fVar29 = fVar34;
                      }
                      if ((0.0 < (unaff_s15 - *(float *)((long)dVar32 + 100)) / fVar29) &&
                         (*(char *)((long)dVar32 + 0x165) == '\0')) {
                        *(undefined1 *)((long)dVar32 + 0x165) = 1;
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
                              lVar16 = unaff_x19[0xca];
                              if (lVar16 == 0) goto LAB_00e443fc;
                              fVar37 = *(float *)(lVar16 + 0x48);
                              fVar29 = *(float *)(unaff_x19 + 0x4b);
                              fVar38 = fVar37 + *(float *)((long)unaff_x19 + 0x50c);
                              fVar34 = *(float *)(unaff_x19 + 0x4a);
                              if (fVar37 <= *(float *)(unaff_x19 + 0x4a)) {
                                fVar34 = fVar37;
                              }
                              *(float *)(unaff_x19 + 0x4a) = fVar34;
                              fVar34 = *(float *)((long)unaff_x19 + 0x254);
                              if (fVar38 <= *(float *)((long)unaff_x19 + 0x254)) {
                                fVar34 = fVar38;
                              }
                              *(float *)((long)unaff_x19 + 0x254) = fVar34;
                              fVar34 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),
                                                           lVar16,0);
                              fVar34 = fVar34 + *(float *)(unaff_x19 + 0xa1) +
                                       *(float *)((long)unaff_x19 + 0x55c);
                              if (fVar29 <= fVar34) {
                                fVar29 = fVar34;
                              }
                              *(float *)(unaff_x19 + 0x4b) = fVar29;
                            }
                          }
                        }
                        iVar36 = *(int *)((long)unaff_x19 + 0x38c);
                        if (*(int *)((long)unaff_x19 + 0x38c) <= iVar10) {
                          iVar36 = iVar10;
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
                      lVar16 = unaff_x19[0x55];
                      if (lVar16 != 0) {
                        (**(code **)(lVar16 + 0x18))
                                  (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
                      }
                    }
                    unaff_x19[0xc6] = 0;
                    fVar34 = 0.0;
                    *(undefined4 *)(unaff_x19 + 199) = 0;
                    fVar29 = 0.0;
                    if ((((0.0 < fStack000000000000004c) &&
                         (uVar23 = *(uint *)(unaff_x19 + 0x2a), fVar29 = fVar34, uVar23 < 5)) &&
                        ((1 << (ulong)(uVar23 & 0x1f) & 0x19U) != 0)) &&
                       (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
                      if (uVar23 == 4) {
                        lVar16 = unaff_x19[0xc];
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (0 < *(int *)(lVar16 + 0x18)) {
                          iVar10 = 0;
                          do {
                            FUN_0132138c(lVar16,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
                            *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                            fVar29 = fStack0000000000000070;
                            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184)
                                <= fStack0000000000000070) break;
                            lVar16 = unaff_x19[0xc];
                            if (lVar16 == 0) goto LAB_00e443fc;
                            iVar10 = iVar10 + 1;
                          } while (iVar10 < *(int *)(lVar16 + 0x18));
                        }
                      }
                      else {
                        lVar16 = unaff_x19[0xb];
                        if (lVar16 == 0) goto LAB_00e443fc;
                        iVar10 = 0;
                        fVar29 = 0.0;
                        while (iVar10 < *(int *)(lVar16 + 0x18)) {
                          FUN_0132138c(lVar16,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
                          fVar29 = fVar29 + fStack0000000000000070;
                          *(float *)((long)unaff_x19 + 0x634) = fVar29;
                          if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                              fVar29) break;
                          lVar16 = unaff_x19[0xb];
                          iVar10 = iVar10 + 1;
                          if (lVar16 == 0) goto LAB_00e443fc;
                        }
                      }
                    }
                    *(float *)(unaff_x19 + 0xc6) =
                         *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                    if (unaff_x19[9] == 0) goto LAB_00e443fc;
                    fVar34 = *(float *)((long)unaff_x19 + 0x53c);
                    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
                    if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
                    fVar37 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
                    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                    fVar39 = *(float *)(unaff_x19 + 0xa8);
                    fVar38 = *(float *)(unaff_x19 + 199) + fVar39;
                    *(float *)((long)unaff_x19 + 0x634) =
                         fVar29 + fVar34 + (fVar37 + -1.0) *
                                           *(float *)((long)_fStack0000000000000070 + 0x84);
                    *(float *)(unaff_x19 + 199) = fVar38;
                    puVar7 = 
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774d76 = '\x01';
                    }
                    fVar34 = 1.0;
                    fVar29 = 1.0;
                    uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                    in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                    *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar30;
                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                    uVar20 = *(undefined8 *)(unaff_x19[0xca] + 200);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar11 = FUN_02681b9c(uVar20,0,0);
                    if ((uVar11 & 1) != 0) {
                      lVar16 = __start_il2cpp();
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if ((*(char *)(lVar16 + 0x109) == '\0') &&
                         (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                        uVar30 = FUN_00e4ee40();
                        *(undefined4 *)((long)unaff_x19 + 0x674) = uVar30;
                        *(float *)(unaff_x19 + 0xcf) = fVar38;
                        *(float *)((long)unaff_x19 + 0x67c) = fVar39;
                      }
                    }
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(puVar7);
                      DAT_03774d76 = '\x01';
                    }
                    lVar22 = *(long *)puVar7;
                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar22 + 0xb8) + 1);
                    *in_stack_00000040 = **(undefined8 **)(lVar22 + 0xb8);
                    *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar30;
                    lVar16 = (*(long **)(lVar22 + 0xb8))[1];
                    unaff_x19[0xc0] = **(long **)(lVar22 + 0xb8);
                    *(int *)(unaff_x19 + 0xc1) = (int)lVar16;
                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar22 + 0xb8) + 1);
                    in_stack_00000040[3] = **(undefined8 **)(lVar22 + 0xb8);
                    *(undefined4 *)((long)unaff_x19 + 0x614) = uVar30;
                    lVar16 = (*(long **)(lVar22 + 0xb8))[1];
                    unaff_x19[0xc3] = **(long **)(lVar22 + 0xb8);
                    *(int *)(unaff_x19 + 0xc4) = (int)lVar16;
                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar22 + 0xb8) + 1);
                    in_stack_00000040[6] = **(undefined8 **)(lVar22 + 0xb8);
                    *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar30;
                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                    uVar20 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar11 = FUN_02681b9c(uVar20,0,0);
                    if ((uVar11 & 1) != 0) {
                      if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                      if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
                        lVar16 = __start_il2cpp();
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if ((*(char *)(lVar16 + 0x109) == '\0') &&
                           (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                          lVar16 = unaff_x19[0xca];
                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                          if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0xc0), lVar22 == 0))
                          goto LAB_00e443fc;
                          uVar11 = unaff_d14;
                          if (*(char *)(lVar22 + 0x18) != '\0') {
                            fVar38 = *(float *)(lVar16 + 100);
                            uVar11 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar38);
                          }
                          if (*(char *)(lVar22 + 0x19) != '\0') {
                            uVar30 = FUN_00e4e9f4(uVar11);
                            lVar16 = unaff_x19[0xca];
                            *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar30;
                            *(float *)(unaff_x19 + 0xbf) = fVar38;
                            *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                            if (lVar16 == 0) goto LAB_00e443fc;
                          }
                          if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
                          if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x28) != '\0') {
                            fVar37 = (float)FUN_00e4e9f4(uVar11);
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar38;
                            fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc0] =
                                 CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc0]);
                            *(float *)(unaff_x19 + 0xc1) = fVar33;
                            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                            goto LAB_00e443fc;
                            fVar37 = (float)FUN_00e4e9f4(uVar11);
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            in_stack_00000040[3] =
                                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                          fVar37 + (float)in_stack_00000040[3]);
                            *(float *)((long)unaff_x19 + 0x614) =
                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                            goto LAB_00e443fc;
                            fVar37 = (float)FUN_00e4e9f4(uVar11);
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc3] =
                                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc3]);
                            *(float *)(unaff_x19 + 0xc4) = fVar38;
                            if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                            goto LAB_00e443fc;
                            fVar37 = (float)FUN_00e4e9f4(uVar11);
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar38;
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            in_stack_00000040[6] =
                                 CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                                          fVar37 + (float)in_stack_00000040[6]);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x62c) =
                                 fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                            if (lVar16 == 0) goto LAB_00e443fc;
                          }
                          if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
                          if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x50) != '\0') {
                            FUN_00e5eda8(lVar16,0);
                            fVar37 = (float)FUN_00e4eb50();
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar38;
                            fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc0] =
                                 CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc0]);
                            *(float *)(unaff_x19 + 0xc1) = fVar33;
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            FUN_00e5b838(lVar16,0);
                            fVar37 = (float)FUN_00e4eb50();
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            in_stack_00000040[3] =
                                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                          fVar37 + (float)in_stack_00000040[3]);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x614) =
                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            FUN_00e5eea4(lVar16,0);
                            fVar37 = (float)FUN_00e4eb50();
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc3] =
                                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc3]);
                            *(float *)(unaff_x19 + 0xc4) = fVar38;
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            FUN_00e5b7d8(lVar16,0);
                            fVar37 = (float)FUN_00e4eb50();
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar38;
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            in_stack_00000040[6] =
                                 CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                                          fVar37 + (float)in_stack_00000040[6]);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x62c) =
                                 fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                            if (lVar16 == 0) goto LAB_00e443fc;
                          }
                          lVar22 = *(long *)(lVar16 + 0xc0);
                          if (lVar22 == 0) goto LAB_00e443fc;
                          if (*(char *)(lVar22 + 0x60) != '\0') {
                            uVar26 = *(undefined8 *)(lVar22 + 0x68);
                            uVar20 = FUN_00e5eda8(lVar16,0);
                            fVar37 = (float)FUN_00e4ecc4(uVar20,lVar16,uVar26);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar38;
                            fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc0] =
                                 CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc0]);
                            *(float *)(unaff_x19 + 0xc1) = fVar33;
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                            uVar20 = FUN_00e5b838(lVar16,0);
                            fVar37 = (float)FUN_00e4ecc4(uVar20,lVar16,uVar26);
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            in_stack_00000040[3] =
                                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                                          fVar37 + (float)in_stack_00000040[3]);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x614) =
                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                            uVar20 = FUN_00e5eea4(lVar16,0);
                            fVar37 = (float)FUN_00e4ecc4(uVar20,lVar16,uVar26);
                            lVar16 = unaff_x19[0xca];
                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                            *(float *)(unaff_x19 + 200) = fVar33;
                            fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                            unaff_x19[0xc3] =
                                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                          fVar37 + (float)unaff_x19[0xc3]);
                            *(float *)(unaff_x19 + 0xc4) = fVar38;
                            if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                            uVar26 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                            uVar20 = FUN_00e5b7d8(lVar16,0);
                            fVar37 = (float)FUN_00e4ecc4(uVar20,lVar16,uVar26);
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
                        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                        uVar20 = *(undefined8 *)((long)*unaff_x26 + 0x80);
                        in_stack_00000040[0x1e] =
                             CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                      (float)((ulong)uVar20 >> 0x20),
                                      (float)unaff_x19[0x24] * (float)uVar20);
                      }
                      lVar16 = unaff_x19[0x5e];
                      *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      fVar37 = (float)FUN_00e5eda8(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                      fVar38 = *(float *)((long)unaff_x19 + 0x674);
                      uVar14 = (ulong)(int)in_stack_00000068;
                      *(float *)(lVar16 + uVar14 * 0xc + 0x20) =
                           fVar37 + fVar38 + *(float *)(unaff_x19 + 0xc0) +
                           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                           *(float *)((long)unaff_x19 + 0x6e4);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5eda8(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                      fVar37 = *(float *)((long)unaff_x19 + 0x604);
                      *(float *)(lVar16 + uVar14 * 0xc + 0x24) =
                           fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                           *(float *)(unaff_x19 + 0xdd);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5eda8(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                      *(float *)(lVar16 + uVar14 * 0xc + 0x28) =
                           fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                           *(float *)(unaff_x19 + 0xc1) + *(float *)((long)unaff_x19 + 0x5fc) +
                           *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      fVar37 = (float)FUN_00e5b838(*unaff_x26,0);
                      uVar13 = uVar14 | 1;
                      uVar23 = (uint)uVar13;
                      if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                      fVar38 = *(float *)((long)unaff_x19 + 0x674);
                      *(float *)(lVar16 + uVar13 * 0xc + 0x20) =
                           fVar37 + fVar38 + *(float *)((long)unaff_x19 + 0x60c) +
                           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                           *(float *)((long)unaff_x19 + 0x6e4);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5b838(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                      fVar37 = *(float *)(unaff_x19 + 0xc2);
                      *(float *)(lVar16 + uVar13 * 0xc + 0x24) =
                           fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                           *(float *)(unaff_x19 + 0xdd);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5b838(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                      *(float *)(lVar16 + uVar13 * 0xc + 0x28) =
                           fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                           *(float *)((long)unaff_x19 + 0x614) + *(float *)((long)unaff_x19 + 0x5fc)
                           + *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      fVar37 = (float)FUN_00e5eea4(*unaff_x26,0);
                      uVar27 = uVar14 | 2;
                      uVar25 = (uint)uVar27;
                      if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                      fVar38 = *(float *)((long)unaff_x19 + 0x674);
                      *(float *)(lVar16 + uVar27 * 0xc + 0x20) =
                           fVar37 + fVar38 + *(float *)(unaff_x19 + 0xc3) +
                           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                           *(float *)((long)unaff_x19 + 0x6e4);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5eea4(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                      fVar37 = *(float *)((long)unaff_x19 + 0x61c);
                      *(float *)(lVar16 + uVar27 * 0xc + 0x24) =
                           fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                           *(float *)(unaff_x19 + 0xdd);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5eea4(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                      *(float *)(lVar16 + uVar27 * 0xc + 0x28) =
                           fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                           *(float *)(unaff_x19 + 0xc4) + *(float *)((long)unaff_x19 + 0x5fc) +
                           *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      fVar37 = (float)FUN_00e5b7d8(*unaff_x26,0);
                      uVar28 = uVar14 | 3;
                      uVar18 = (uint)uVar28;
                      if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                      fVar38 = *(float *)((long)unaff_x19 + 0x674);
                      *(float *)(lVar16 + uVar28 * 0xc + 0x20) =
                           fVar37 + fVar38 + *(float *)((long)unaff_x19 + 0x624) +
                           *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                           *(float *)((long)unaff_x19 + 0x6e4);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5b7d8(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                      uVar11 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                      *(float *)(lVar16 + uVar28 * 0xc + 0x24) =
                           fVar38 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                           *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                           *(float *)(unaff_x19 + 0xdd);
                      lVar16 = unaff_x19[0x5e];
                      if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
                      FUN_00e5b7d8(*unaff_x26,0);
                      if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                      fVar37 = *(float *)((long)unaff_x19 + 0x62c);
                      *(float *)(lVar16 + uVar28 * 0xc + 0x28) =
                           (float)uVar11 + *(float *)((long)unaff_x19 + 0x67c) + fVar37 +
                           *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                           *(float *)((long)unaff_x19 + 0x6ec);
                      lVar16 = unaff_x19[0xca];
                      if (lVar16 == 0) goto LAB_00e443fc;
                      lVar22 = *in_stack_00000020;
                      if (*(char *)(lVar16 + 0x108) == '\0') {
                        uVar30 = FUN_0272b9dc(lVar16 + 0x10,0);
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                        lVar22 = lVar22 + uVar14 * 8;
                        *(undefined4 *)(lVar22 + 0x20) = uVar30;
                        *(float *)(lVar22 + 0x24) = fVar37;
                        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        lVar16 = lVar16 + uVar13 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        lVar16 = lVar16 + uVar27 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        lVar16 = lVar16 + uVar28 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                        uVar30 = FUN_00e5ecc0(*unaff_x26,0);
                        *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                        FUN_00e5ecc0(unaff_x19[0xca],0);
                        *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                        unaff_x24 = in_stack_00000030;
                      }
                      else {
                        if ((*(long *)(lVar16 + 0x100) == 0) ||
                           (uVar30 = FUN_00e5dd14(unaff_d14,*(long *)(lVar16 + 0x100),
                                                  *(undefined4 *)(lVar16 + 0x10c),0), lVar22 == 0))
                        goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                        lVar22 = lVar22 + uVar14 * 8;
                        *(undefined4 *)(lVar22 + 0x20) = uVar30;
                        *(float *)(lVar22 + 0x24) = fVar37;
                        dVar32 = *unaff_x26;
                        if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                        goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                              *(undefined4 *)((long)dVar32 + 0x10c),0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        lVar16 = lVar16 + uVar13 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        dVar32 = *unaff_x26;
                        if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                        goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                              *(undefined4 *)((long)dVar32 + 0x10c),0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        lVar16 = lVar16 + uVar27 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        dVar32 = *unaff_x26;
                        if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                        goto LAB_00e443fc;
                        lVar16 = *in_stack_00000020;
                        uVar30 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                                    *(undefined4 *)((long)dVar32 + 0x10c),0);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        lVar16 = lVar16 + uVar28 * 8;
                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                        *(float *)(lVar16 + 0x24) = fVar37;
                        dVar32 = *unaff_x26;
                        if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                        goto LAB_00e443fc;
                        uVar30 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                              *(undefined4 *)((long)dVar32 + 0x10c),0);
                        lVar16 = unaff_x19[0xca];
                        *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                        *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                        if ((lVar16 == 0) || (lVar22 = *(long *)(lVar16 + 0x100), lVar22 == 0))
                        goto LAB_00e443fc;
                        unaff_x24 = in_stack_00000030;
                        if (((1 < *(int *)(lVar22 + 0x28)) && (0.0 < *(float *)(lVar22 + 0x34))) &&
                           (*(int *)(lVar16 + 0x10c) < 0)) {
                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                        }
                      }
                    }
                    else {
                      dVar32 = *unaff_x26;
                      if (dVar32 == 0.0) goto LAB_00e443fc;
                      uVar11 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                      if ((*(float *)((long)dVar32 + 0x48) + *(float *)((long)dVar32 + 0x84) +
                          *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c)
                          <= DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
                      lVar16 = *in_stack_00000038;
                      if (DAT_03774d76 == '\0') {
                        thunk_FUN_00d48444(puVar7);
                        DAT_03774d76 = '\x01';
                      }
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                      uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                      uVar14 = (ulong)(int)in_stack_00000068;
                      lVar16 = lVar16 + uVar14 * 0xc;
                      *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                      *(undefined4 *)(lVar16 + 0x28) = uVar30;
                      lVar16 = *in_stack_00000038;
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 1)) break;
                      lVar16 = lVar16 + (uVar14 | 1) * 0xc;
                      uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                      *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                      *(undefined4 *)(lVar16 + 0x28) = uVar30;
                      lVar16 = *in_stack_00000038;
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 2)) break;
                      lVar16 = lVar16 + (uVar14 | 2) * 0xc;
                      uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                      *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                      *(undefined4 *)(lVar16 + 0x28) = uVar30;
                      lVar16 = *in_stack_00000038;
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 3)) break;
                      lVar16 = lVar16 + (uVar14 | 3) * 0xc;
                      uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                      *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
                      *(undefined4 *)(lVar16 + 0x28) = uVar30;
                    }
                    if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                    uVar20 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar14 = FUN_02681b9c(uVar20,0,0);
                    if ((uVar14 & 1) == 0) {
                      lVar16 = unaff_x19[0x10];
                    }
                    else {
                      if ((*unaff_x26 == 0.0) ||
                         (lVar16 = *(long *)((long)*unaff_x26 + 0xf8), lVar16 == 0))
                      goto LAB_00e443fc;
                      lVar16 = *(long *)(lVar16 + 0x18);
                    }
                    if (((lVar16 == 0) || (lVar16 = FUN_0272bcf4(lVar16,0), lVar16 == 0)) ||
                       (plVar12 = (long *)FUN_0267dac8(lVar16,0), plVar12 == (long *)0x0))
                    goto LAB_00e443fc;
                    iVar10 = (**(code **)(*plVar12 + 0x188))
                                       (plVar12,*(undefined8 *)(*plVar12 + 400));
                    *(float *)(unaff_x19 + 0xda) = (float)iVar10;
                    iVar10 = (**(code **)(*plVar12 + 0x1a8))
                                       (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
                    *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar10;
                    *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                    *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                         *(undefined4 *)((long)unaff_x19 + 0x6cc);
                    puVar7 = 
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
                    if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                    _fStack0000000000000070 = (double)CONCAT44((float)iVar10,(int)unaff_x19[0xda]);
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
                                 *(undefined8 *)puVar7);
                    if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                    in_stack_00000078 = unaff_x19[0xdb];
                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                    unaff_x29 = unaff_x21 | 2;
                    FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar7);
                    if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                    in_stack_00000078 = unaff_x19[0xdb];
                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                    in_stack_00000058 = unaff_x21 | 3;
                    FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,
                                 *(undefined8 *)puVar7);
                    unaff_x25 = (long *)StringLiteral_9119;
                    lVar16 = unaff_x19[0x60];
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if ((*(uint *)(lVar16 + 0x18) <= in_stack_00000068) ||
                       (uVar23 = (uint)in_stack_00000058, *(uint *)(lVar16 + 0x18) <= uVar23))
                    break;
                    lVar22 = unaff_x19[0xca];
                    fVar37 = unaff_s8;
                    if (*(float *)(lVar16 + 0x20 + unaff_x21 * 8) !=
                        *(float *)(lVar16 + 0x20 + in_stack_00000058 * 8)) {
                      fVar37 = fVar34;
                    }
                    *(float *)(unaff_x19 + 0xda) = fVar37;
                    if (lVar22 == 0) goto LAB_00e443fc;
                    cVar6 = *(char *)(lVar22 + 0x108);
                    fVar37 = fVar34;
                    if (cVar6 != '\0' || 0x7fffffff < *(uint *)(lVar22 + 0x138)) {
                      fVar37 = -1.0;
                    }
                    *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar22 + 0x84) * fVar37;
                    if (cVar6 == '\0') {
                      iVar36 = *(int *)(lVar22 + 0x160);
                      iVar10 = (**(code **)(*plVar12 + 0x188))
                                         (plVar12,*(undefined8 *)(*plVar12 + 400));
                      uVar11 = 0x3e800000;
                      *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar10 * 0.25);
                      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                      iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
                      iVar10 = (**(code **)(*plVar12 + 0x1a8))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
                      fVar38 = (float)iVar36;
                      fVar37 = (float)iVar10;
                      puVar21 = (undefined8 *)
                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                      ;
                    }
                    else {
                      if (*(long *)(lVar22 + 0x100) == 0) goto LAB_00e443fc;
                      fVar37 = (float)FUN_00e5df18(*(long *)(lVar22 + 0x100),0);
                      puVar21 = (undefined8 *)
                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                      ;
                      if (((*in_stack_00000060 == 0.0) ||
                          (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) ||
                         (plVar12 = *(long **)(lVar16 + 0x18), plVar12 == (long *)0x0))
                      goto LAB_00e443fc;
                      iVar10 = (**(code **)(*plVar12 + 0x188))
                                         (plVar12,*(undefined8 *)(*plVar12 + 400));
                      if ((*in_stack_00000060 == 0.0) ||
                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0))
                      goto LAB_00e443fc;
                      fVar38 = 0.25;
                      *(float *)(unaff_x19 + 0xdb) =
                           fVar37 / (*(float *)(lVar16 + 0x40) * (float)iVar10 * 0.25);
                      FUN_00e5df18(lVar16,0);
                      if ((unaff_x19[0xca] == 0) ||
                         ((lVar16 = *(long *)(unaff_x19[0xca] + 0x100), lVar16 == 0 ||
                          (plVar12 = *(long **)(lVar16 + 0x18), plVar12 == (long *)0x0))))
                      goto LAB_00e443fc;
                      iVar10 = (**(code **)(*plVar12 + 0x1a8))
                                         (plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
                      if ((*in_stack_00000060 == 0.0) ||
                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0))
                      goto LAB_00e443fc;
                      fVar37 = *(float *)(lVar16 + 0x44) * (float)iVar10;
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
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar14 = FUN_02681b9c(uVar20,0,0);
                    fVar38 = (float)uVar11;
                    fVar37 = (float)unaff_d14;
                    uVar18 = (uint)unaff_x22;
                    uVar25 = (uint)unaff_x29;
                    if ((uVar14 & 1) != 0) {
                      if (in_stack_00000050 == in_stack_00000010) {
                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                        fVar33 = (float)FUN_00e5b838(*in_stack_00000060,0);
                        if (DAT_03774d76 == '\0') {
                          thunk_FUN_00d48444(
                                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                            );
                          DAT_03774d76 = '\x01';
                        }
                        pfVar15 = *(float **)
                                   (*(long *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                   + 0xb8);
                        fVar38 = fVar38 - pfVar15[2];
                        uVar11 = (ulong)(uint)fVar38;
                        if (fVar38 * fVar38 +
                            (fVar33 - *pfVar15) * (fVar33 - *pfVar15) +
                            (fVar39 - pfVar15[1]) * (fVar39 - pfVar15[1]) < DAT_028aa020)
                        goto LAB_00e3dbd8;
                      }
                      if ((*in_stack_00000060 == 0.0) ||
                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar16 == 0))
                      goto LAB_00e443fc;
                      uVar20 = *(undefined8 *)(lVar16 + 0x38);
                      if (DAT_03774d77 == '\0') {
                        thunk_FUN_00d48444(
                                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                          );
                        DAT_03774d77 = '\x01';
                      }
                      fVar38 = (float)uVar20 -
                               (float)**(undefined8 **)
                                        (*(long *)
                                          Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                        + 0xb8);
                      fVar39 = (float)((ulong)uVar20 >> 0x20) -
                               (float)((ulong)**(undefined8 **)
                                                (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                + 0xb8) >> 0x20);
                      if (DAT_028aa020 <= fVar38 * fVar38 + fVar39 * fVar39) {
                        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                      }
                      dVar32 = *in_stack_00000060;
                      if ((dVar32 == 0.0) || (lVar16 = *(long *)((long)dVar32 + 0xb0), lVar16 == 0))
                      goto LAB_00e443fc;
                      fVar39 = fVar37 * *(float *)(lVar16 + 0x38);
                      *(float *)(unaff_x19 + 0xc9) = fVar39;
                      fVar38 = fVar37 * *(float *)(lVar16 + 0x3c);
                      *(float *)((long)unaff_x19 + 0x64c) = fVar38;
                      if (*(char *)(lVar16 + 0x25) != '\0') {
                        fVar29 = 1.0 / *(float *)((long)dVar32 + 0x84);
                      }
                      lVar16 = *in_stack_00000038;
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                      lVar22 = lVar16 + unaff_x21 * 0xc;
                      fVar33 = *(float *)(lVar22 + 0x20);
                      uVar20 = *(undefined8 *)(lVar22 + 0x24);
                      *(float *)(unaff_x19 + 0xcd) = fVar33;
                      in_stack_00000040[0xf] = uVar20;
                      *(float *)(unaff_x19 + 0xd0) = fVar33;
                      fVar35 = (float)uVar20;
                      *(float *)((long)unaff_x19 + 0x684) = fVar35;
                      if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                      lVar22 = lVar16 + unaff_x22 * 0xc;
                      uVar30 = *(undefined4 *)(lVar22 + 0x20);
                      uVar20 = *(undefined8 *)(lVar22 + 0x24);
                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                      in_stack_00000040[0xf] = uVar20;
                      *(undefined4 *)(unaff_x19 + 0xd2) = uVar30;
                      *(int *)((long)unaff_x19 + 0x694) = (int)uVar20;
                      if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                      lVar22 = lVar16 + unaff_x29 * 0xc;
                      uVar30 = *(undefined4 *)(lVar22 + 0x20);
                      uVar20 = *(undefined8 *)(lVar22 + 0x24);
                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                      in_stack_00000040[0xf] = uVar20;
                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar30;
                      *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar20;
                      if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                      lVar16 = lVar16 + in_stack_00000058 * 0xc;
                      uVar30 = *(undefined4 *)(lVar16 + 0x20);
                      uVar20 = *(undefined8 *)(lVar16 + 0x24);
                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                      in_stack_00000040[0xf] = uVar20;
                      *(undefined4 *)(unaff_x19 + 0xd6) = uVar30;
                      *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar20;
                      lVar16 = *(long *)((long)dVar32 + 0xb0);
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(char *)(lVar16 + 0x24) == '\0') {
                        lVar22 = *in_stack_00000028;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        uVar5 = *(uint *)(lVar22 + 0x18);
                        if (uVar5 <= in_stack_00000068) break;
                        lVar17 = lVar22 + unaff_x21 * 8;
                        *(float *)(lVar17 + 0x20) =
                             (fVar39 + fVar29 * fVar33) - *(float *)(lVar16 + 0x30);
                        *(float *)(lVar17 + 0x24) =
                             (fVar38 + fVar29 * fVar35) - *(float *)(lVar16 + 0x34);
                        if (((uVar5 <= uVar18) ||
                            (*(ulong *)(lVar22 + unaff_x22 * 8 + 0x20) =
                                  CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar29 +
                                           (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                           (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                           ((float)unaff_x19[0xd2] * fVar29 + (float)unaff_x19[0xc9]
                                           ) - (float)*(undefined8 *)(lVar16 + 0x30)),
                            uVar5 <= uVar25)) ||
                           (*(ulong *)(lVar22 + unaff_x29 * 8 + 0x20) =
                                 CONCAT44((fVar29 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                          (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                          (fVar29 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9])
                                          - (float)*(undefined8 *)(lVar16 + 0x30)), uVar5 <= uVar23)
                           ) break;
                        uVar11 = unaff_x19[0xc9];
                        *(ulong *)(lVar22 + in_stack_00000058 * 8 + 0x20) =
                             CONCAT44((fVar29 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                                      (float)(uVar11 >> 0x20)) -
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                      (fVar29 * (float)unaff_x19[0xd6] + (float)uVar11) -
                                      (float)*(undefined8 *)(lVar16 + 0x30));
                      }
                      else {
                        fVar3 = *(float *)((long)dVar32 + 0x44);
                        *(float *)(unaff_x19 + 0xd8) = fVar3;
                        fVar4 = *(float *)((long)dVar32 + 0x48);
                        lVar22 = unaff_x19[0x61];
                        *(float *)((long)unaff_x19 + 0x6c4) = fVar4;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        uVar5 = *(uint *)(lVar22 + 0x18);
                        if (uVar5 <= in_stack_00000068) break;
                        lVar17 = lVar22 + unaff_x21 * 8;
                        *(float *)(lVar17 + 0x20) =
                             (fVar39 + fVar29 * (fVar33 - fVar3)) - *(float *)(lVar16 + 0x30);
                        *(float *)(lVar17 + 0x24) =
                             (fVar38 + fVar29 * (fVar35 - fVar4)) - *(float *)(lVar16 + 0x34);
                        if (((uVar5 <= uVar18) ||
                            (*(ulong *)(lVar22 + unaff_x22 * 8 + 0x20) =
                                  CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                           ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                           (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar29) -
                                           (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                           ((float)unaff_x19[0xc9] +
                                           ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) *
                                           fVar29) - (float)*(undefined8 *)(lVar16 + 0x30)),
                            uVar5 <= uVar25)) ||
                           (*(ulong *)(lVar22 + unaff_x29 * 8 + 0x20) =
                                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                          fVar29 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                                   (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                          ((float)unaff_x19[0xc9] +
                                          fVar29 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])
                                          ) - (float)*(undefined8 *)(lVar16 + 0x30)),
                           uVar5 <= uVar23)) break;
                        uVar11 = unaff_x19[0xd8];
                        *(ulong *)(lVar22 + in_stack_00000058 * 8 + 0x20) =
                             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                      fVar29 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                               (float)(uVar11 >> 0x20))) -
                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                                      ((float)unaff_x19[0xc9] +
                                      fVar29 * ((float)unaff_x19[0xd6] - (float)uVar11)) -
                                      (float)*(undefined8 *)(lVar16 + 0x30));
                      }
                    }
LAB_00e3dbd8:
                    dVar32 = *in_stack_00000060;
                    if (dVar32 == 0.0) goto LAB_00e443fc;
                    unaff_w23 = 255.0;
                    if (*(char *)((long)dVar32 + 0x108) != '\0') {
                      if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                      if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
                        lVar16 = *in_stack_00000020;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        lVar22 = *in_stack_00000028;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                        *(undefined8 *)(lVar22 + unaff_x21 * 8 + 0x20) =
                             *(undefined8 *)(lVar16 + unaff_x21 * 8 + 0x20);
                        lVar16 = *in_stack_00000020;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        lVar22 = *in_stack_00000028;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= uVar18) break;
                        *(undefined8 *)(lVar22 + (long)(int)uVar18 * 8 + 0x20) =
                             *(undefined8 *)(lVar16 + (long)(int)uVar18 * 8 + 0x20);
                        lVar16 = *in_stack_00000020;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        lVar22 = *in_stack_00000028;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= uVar25) break;
                        *(undefined8 *)(lVar22 + (long)(int)uVar25 * 8 + 0x20) =
                             *(undefined8 *)(lVar16 + (long)(int)uVar25 * 8 + 0x20);
                        lVar16 = *in_stack_00000020;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        lVar22 = *in_stack_00000028;
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
                        *(undefined8 *)(lVar22 + in_stack_00000058 * 8 + 0x20) =
                             *(undefined8 *)(lVar16 + in_stack_00000058 * 8 + 0x20);
                        dVar32 = *in_stack_00000060;
                        if (dVar32 == 0.0) goto LAB_00e443fc;
                      }
                    }
                    dVar31 = DAT_028aa048;
                    unaff_x26 = in_stack_00000060;
                    if (*(char *)((long)dVar32 + 0x108) == '\0') {
LAB_00e3dd34:
                      uVar20 = *(undefined8 *)((long)dVar32 + 0xa8);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar14 = FUN_02681b9c(uVar20,0,0);
                      dVar32 = *in_stack_00000060;
                      if (dVar32 == 0.0) goto LAB_00e443fc;
                      if ((uVar14 & 1) == 0) {
                        uVar20 = *(undefined8 *)((long)dVar32 + 0xb0);
                        if (*(int *)(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar14 = FUN_02681b9c(uVar20,0,0);
                        dVar32 = DAT_028aa048;
                        if ((uVar14 & 1) == 0) goto LAB_00e3dfe0;
                        lVar16 = *unaff_x24;
                        dVar31 = modf(DAT_028aa048,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar34 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar38 = 255.0;
                        }
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                             (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar34 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar38 = 255.0;
                        }
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        *(uint *)(lVar16 + (long)(int)uVar18 * 4 + 0x20) =
                             (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar34 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar38 = 255.0;
                        }
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                             (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar34 = 255.0;
                        }
                        dVar31 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar31 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = 255.0;
                        }
                        dVar32 = modf(dVar32,(double *)&stack0x00000070);
                        if (dVar32 == 0.5) {
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar38 = 255.0;
                        }
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                        *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                             (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                        uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                        if (*(int *)(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar14 = FUN_02681b9c(uVar20,0,0);
                        if ((uVar14 & 1) == 0) goto LAB_00e43400;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        puVar24 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                        uVar5 = *puVar24;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                        goto LAB_00e443fc;
                        fVar34 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
                        fVar39 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
                        fVar38 = *(float *)(lVar16 + 0x20);
                        fVar37 = *(float *)(lVar16 + 0x24);
                        fVar29 = fVar34 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = 1.0;
                            goto LAB_00e3ede4;
                          }
                          fVar34 = (float)(int)(fVar29 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = -1.0;
LAB_00e3ede4:
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + fVar29;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar38 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar38;
                        fVar29 = fVar39 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar39 = fVar38;
                        if (1.0 < fVar38) {
                          fVar39 = 1.0;
                        }
                        fVar37 = ((float)(uVar5 >> 0x18) / 255.0) * fVar37;
                        fVar39 = fVar39 * 255.0;
                        if (fVar38 < 0.0) {
                          fVar39 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3ffb0;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
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
                        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                        if (0.0 <= fVar38) {
                          if (dVar32 == 0.5) {
                            fVar37 = 1.0;
                            goto LAB_00e40174;
                          }
                          fVar38 = (float)(int)(fVar38 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar37 = -1.0;
LAB_00e40174:
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = (float)_fStack0000000000000070 + fVar37;
                          }
                        }
                        else {
                          fVar38 = (float)(int)(fVar38 + -0.5);
                        }
                        *puVar24 = (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        puVar24 = (uint *)(lVar16 + (long)(int)uVar18 * 4 + 0x20);
                        uVar18 = *puVar24;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                        goto LAB_00e443fc;
                        fVar34 = ((float)(uVar18 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
                        fVar39 = ((float)(uVar18 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
                        fVar38 = *(float *)(lVar16 + 0x20);
                        fVar37 = *(float *)(lVar16 + 0x24);
                        fVar29 = fVar34 * 255.0;
                        if (fVar34 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = 1.0;
                            goto LAB_00e404dc;
                          }
                          fVar34 = (float)(int)(fVar29 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = -1.0;
LAB_00e404dc:
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + fVar29;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar38 = ((float)(uVar18 >> 0x10 & 0xff) / 255.0) * fVar38;
                        fVar29 = fVar39 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar29 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar39 = fVar38;
                        if (1.0 < fVar38) {
                          fVar39 = 1.0;
                        }
                        fVar37 = ((float)(uVar18 >> 0x18) / 255.0) * fVar37;
                        fVar39 = fVar39 * 255.0;
                        if (fVar38 < 0.0) {
                          fVar39 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e40888;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                        if (0.0 <= fVar38) {
                          if (dVar32 == 0.5) {
                            fVar37 = 1.0;
                            goto LAB_00e40a4c;
                          }
                          fVar38 = (float)(int)(fVar38 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        *puVar24 = (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        lVar16 = lVar16 + (long)(int)uVar25 * 4;
                      }
                      else {
                        lVar16 = *(long *)((long)dVar32 + 0xa8);
                        if (lVar16 == 0) goto LAB_00e443fc;
                        fVar29 = *(float *)(lVar16 + 0x24);
                        if (fVar29 != 0.0) {
                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                        }
                        unaff_x25 = (long *)StringLiteral_9119;
                        cVar6 = *(char *)(lVar16 + 0x2c);
                        lVar17 = *unaff_x24;
                        lVar22 = *(long *)(lVar16 + 0x18);
                        fVar37 = fVar37 * fVar29;
                        if (*(int *)(lVar16 + 0x28) == 1) {
                          if (cVar6 == '\0') {
                            if (lVar22 == 0) goto LAB_00e443fc;
                            fVar38 = *(float *)(lVar16 + 0x20);
                            fVar39 = *(float *)((long)dVar32 + 0x84);
                            fVar37 = fVar37 + (*(float *)((long)dVar32 + 0x48) * fVar38) / fVar39;
                            fVar37 = fVar37 - (float)(int)fVar37;
                            fVar29 = fVar37;
                            if (1.0 < fVar37) {
                              fVar29 = fVar34;
                            }
                            fVar33 = fVar29;
                            if (fVar37 < 0.0) {
                              fVar33 = 0.0;
                            }
                            fVar33 = (float)FUN_0269ad38(fVar33,lVar22,0);
                            fVar37 = fVar33;
                            if (1.0 < fVar33) {
                              fVar37 = fVar34;
                            }
                            fVar37 = fVar37 * 255.0;
                            if (fVar33 < 0.0) {
                              fVar37 = 0.0;
                            }
                            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar32 == 0.5) {
                                fVar34 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3eeac;
                              }
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar34;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + -0.5);
                            }
                            fVar34 = fVar29;
                            if (1.0 < fVar29) {
                              fVar34 = 1.0;
                            }
                            fVar34 = fVar34 * 255.0;
                            if (fVar29 < 0.0) {
                              fVar34 = 0.0;
                            }
                            dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                            if (0.0 <= fVar34) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41534;
                              }
                              fVar34 = (float)(int)(fVar34 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                              fVar34 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar34 = fVar29;
                              }
                            }
                            else {
                              fVar34 = (float)(int)(fVar34 + -0.5);
                            }
                            fVar29 = fVar38;
                            if (1.0 < fVar38) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar38 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar38 = fVar39;
                            if (1.0 < fVar39) {
                              fVar38 = 1.0;
                            }
                            fVar38 = fVar38 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar38 = 0.0;
                            }
                            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                            if (0.0 <= fVar38) {
                              if (dVar32 == 0.5) {
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar38 + -0.5);
                            }
                            if (lVar17 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) break;
                            *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                 ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                               (lVar22 = *(long *)(lVar16 + 0x18), lVar22 == 0)) goto LAB_00e443fc;
                            fVar37 = *(float *)((long)dVar32 + 0x48);
                            fVar38 = *(float *)((long)dVar32 + 0x84);
                            lVar17 = *unaff_x24;
                            fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                     (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                            fVar34 = fVar34 - (float)(int)fVar34;
                            fVar29 = fVar34;
                            if (1.0 < fVar34) {
                              fVar29 = 1.0;
                            }
                          }
                          else {
                            if (lVar22 == 0) goto LAB_00e443fc;
                            fVar38 = *(float *)((long)dVar32 + 0x84);
                            fVar39 = *(float *)(lVar16 + 0x20);
                            fVar37 = fVar37 + ((*(float *)((long)dVar32 + 0x48) + fVar38) * fVar39)
                                              / fVar38;
                            fVar37 = fVar37 - (float)(int)fVar37;
                            fVar29 = fVar37;
                            if (1.0 < fVar37) {
                              fVar29 = fVar34;
                            }
                            fVar33 = fVar29;
                            if (fVar37 < 0.0) {
                              fVar33 = 0.0;
                            }
                            fVar33 = (float)FUN_0269ad38(fVar33,lVar22,0);
                            fVar37 = fVar33;
                            if (1.0 < fVar33) {
                              fVar37 = fVar34;
                            }
                            fVar37 = fVar37 * 255.0;
                            if (fVar33 < 0.0) {
                              fVar37 = 0.0;
                            }
                            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar32 == 0.5) {
                                fVar34 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3ed6c;
                              }
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar34;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + -0.5);
                            }
                            fVar34 = fVar29;
                            if (1.0 < fVar29) {
                              fVar34 = 1.0;
                            }
                            fVar34 = fVar34 * 255.0;
                            if (fVar29 < 0.0) {
                              fVar34 = 0.0;
                            }
                            dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                            if (0.0 <= fVar34) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f2ec;
                              }
                              fVar34 = (float)(int)(fVar34 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                              fVar34 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar34 = fVar29;
                              }
                            }
                            else {
                              fVar34 = (float)(int)(fVar34 + -0.5);
                            }
                            fVar29 = fVar38;
                            if (1.0 < fVar38) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar38 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar38 = fVar39;
                            if (1.0 < fVar39) {
                              fVar38 = 1.0;
                            }
                            fVar38 = fVar38 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar38 = 0.0;
                            }
                            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                            if (0.0 <= fVar38) {
                              if (dVar32 == 0.5) {
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar38 + -0.5);
                            }
                            if (lVar17 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) break;
                            *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                 ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                               (lVar22 = *(long *)(lVar16 + 0x18), lVar22 == 0)) goto LAB_00e443fc;
                            fVar37 = *(float *)((long)dVar32 + 0x84);
                            fVar38 = *(float *)(lVar16 + 0x20);
                            lVar17 = *unaff_x24;
                            fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                     ((*(float *)((long)dVar32 + 0x48) + fVar37) * fVar38) / fVar37;
                            fVar34 = fVar34 - (float)(int)fVar34;
                            fVar29 = fVar34;
                            if (1.0 < fVar34) {
                              fVar29 = 1.0;
                            }
                          }
                          fVar39 = fVar29;
                          if (fVar34 < 0.0) {
                            fVar39 = 0.0;
                          }
                          fVar39 = (float)FUN_0269ad38(fVar39,lVar22,0);
                          fVar34 = fVar39;
                          if (1.0 < fVar39) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e419a4;
                            }
                            fVar39 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar34;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e41a34;
                            }
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = fVar29;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar29 = fVar37;
                          if (1.0 < fVar37) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar37 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar37 = fVar38;
                          if (1.0 < fVar38) {
                            fVar37 = 1.0;
                          }
                          fVar37 = fVar37 * 255.0;
                          if (fVar38 < 0.0) {
                            fVar37 = 0.0;
                          }
                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                          if (0.0 <= fVar37) {
                            if (dVar32 == 0.5) {
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + -0.5);
                          }
                          if (lVar17 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar17 + 0x18) <= uVar18) break;
                          *(uint *)(lVar17 + (long)(int)uVar18 * 4 + 0x20) =
                               (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                               ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                          dVar32 = *in_stack_00000060;
                          if (((dVar32 == 0.0) ||
                              (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                             (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
                          fVar37 = *(float *)((long)dVar32 + 0x48);
                          fVar38 = *(float *)((long)dVar32 + 0x84);
                          lVar22 = *unaff_x24;
                          fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                   (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                          fVar34 = fVar34 - (float)(int)fVar34;
                          fVar29 = fVar34;
                          if (1.0 < fVar34) {
                            fVar29 = 1.0;
                          }
                          fVar39 = fVar29;
                          if (fVar34 < 0.0) {
                            fVar39 = 0.0;
                          }
                          fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar16 + 0x18),0);
                          fVar34 = fVar39;
                          if (1.0 < fVar39) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e41cd0;
                            }
                            fVar39 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar34;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e41d60;
                            }
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = fVar29;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar29 = fVar37;
                          if (1.0 < fVar37) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar37 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar37 = fVar38;
                          if (1.0 < fVar38) {
                            fVar37 = 1.0;
                          }
                          fVar37 = fVar37 * 255.0;
                          if (fVar38 < 0.0) {
                            fVar37 = 0.0;
                          }
                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                          if (0.0 <= fVar37) {
                            if (dVar32 == 0.5) {
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + -0.5);
                          }
                          if (lVar22 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) break;
                          *(uint *)(lVar22 + (long)(int)uVar25 * 4 + 0x20) =
                               (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                               ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                          dVar32 = *in_stack_00000060;
                          if (((dVar32 == 0.0) ||
                              (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                             (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
                          fVar37 = *(float *)((long)dVar32 + 0x48);
                          fVar38 = *(float *)((long)dVar32 + 0x84);
                          lVar22 = *unaff_x24;
                          fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                   (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                          fVar34 = fVar34 - (float)(int)fVar34;
                          fVar29 = fVar34;
                          if (1.0 < fVar34) {
                            fVar29 = 1.0;
                          }
                          fVar39 = fVar29;
                          if (fVar34 < 0.0) {
                            fVar39 = 0.0;
                          }
                          fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar16 + 0x18),0);
                          fVar34 = fVar39;
                          if (1.0 < fVar39) {
                            fVar34 = 1.0;
                          }
                          uVar11 = 0x437f0000;
                          fVar34 = fVar34 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e41ffc;
                            }
                            fVar39 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar34;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
LAB_00e42040:
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (fVar34 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            fVar34 = fVar29 + 1.0;
                            goto LAB_00e425d4;
                          }
                          fVar29 = (float)(int)(fVar34 + 0.5);
                        }
                        else {
                          lVar19 = *in_stack_00000038;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= in_stack_00000068) break;
                          if (lVar22 == 0) goto LAB_00e443fc;
                          fVar38 = *(float *)(lVar19 + unaff_x21 * 0xc + 0x20);
                          fVar39 = *(float *)((long)dVar32 + 0x84);
                          fVar37 = fVar37 + (fVar38 * *(float *)(lVar16 + 0x20)) / fVar39;
                          fVar37 = fVar37 - (float)(int)fVar37;
                          fVar29 = fVar37;
                          if (1.0 < fVar37) {
                            fVar29 = fVar34;
                          }
                          fVar33 = fVar29;
                          if (fVar37 < 0.0) {
                            fVar33 = 0.0;
                          }
                          fVar33 = (float)FUN_0269ad38(fVar33,lVar22,0);
                          fVar37 = fVar33;
                          if (1.0 < fVar33) {
                            fVar37 = fVar34;
                          }
                          fVar37 = fVar37 * 255.0;
                          if (fVar33 < 0.0) {
                            fVar37 = 0.0;
                          }
                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                          if (0.0 <= fVar37) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e3e0b0;
                            }
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = fVar34;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e3ee80;
                            }
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = fVar29;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar29 = fVar38;
                          if (1.0 < fVar38) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar38 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar38 = fVar39;
                          if (1.0 < fVar39) {
                            fVar38 = 1.0;
                          }
                          fVar38 = fVar38 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar38 = 0.0;
                          }
                          dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                          if (0.0 <= fVar38) {
                            if (dVar32 == 0.5) {
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar38 = (float)(int)(fVar38 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
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
                          if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) break;
                          *(uint *)(lVar17 + unaff_x21 * 4 + 0x20) =
                               (int)fVar37 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                               ((int)fVar29 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                          unaff_x25 = (long *)StringLiteral_9119;
                          dVar32 = *in_stack_00000060;
                          if (((dVar32 == 0.0) ||
                              (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                             (lVar22 = *in_stack_00000038, lVar22 == 0)) goto LAB_00e443fc;
                          lVar19 = *unaff_x24;
                          lVar17 = *(long *)(lVar16 + 0x18);
                          fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24);
                          if (cVar6 != '\0') {
                            if (uVar18 < *(uint *)(lVar22 + 0x18)) {
                              if (lVar17 != 0) {
                                fVar37 = *(float *)(lVar22 + (long)(int)uVar18 * 0xc + 0x20);
                                fVar38 = *(float *)((long)dVar32 + 0x84);
                                fVar29 = fVar29 + (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                                fVar29 = fVar29 - (float)(int)fVar29;
                                fVar34 = fVar29;
                                if (1.0 < fVar29) {
                                  fVar34 = fVar39;
                                }
                                fVar33 = fVar34;
                                if (fVar29 < 0.0) {
                                  fVar33 = 0.0;
                                }
                                fVar33 = (float)FUN_0269ad38(fVar33,lVar17,0);
                                fVar29 = fVar33;
                                if (1.0 < fVar33) {
                                  fVar29 = fVar39;
                                }
                                fVar29 = fVar29 * 255.0;
                                if (fVar33 < 0.0) {
                                  fVar29 = 0.0;
                                }
                                dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                if (0.0 <= fVar29) {
                                  if (dVar32 == 0.5) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e3f234;
                                  }
                                  fVar39 = (float)(int)(fVar29 + 0.5);
                                }
                                else if (dVar32 == -0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = fVar29;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar29 + -0.5);
                                }
                                fVar29 = fVar34;
                                if (1.0 < fVar34) {
                                  fVar29 = 1.0;
                                }
                                fVar29 = fVar29 * 255.0;
                                if (fVar34 < 0.0) {
                                  fVar29 = 0.0;
                                }
                                dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                if (0.0 <= fVar29) {
                                  if (dVar32 == 0.5) {
                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e3f594;
                                  }
                                  fVar34 = (float)(int)(fVar29 + 0.5);
                                }
                                else if (dVar32 == -0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = fVar29;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar29 + -0.5);
                                }
                                fVar29 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar29 = 1.0;
                                }
                                fVar29 = fVar29 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar29 = 0.0;
                                }
                                dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                if (0.0 <= fVar29) {
                                  if (dVar32 == 0.5) {
                                    fVar29 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar29 = (float)(int)(fVar29 + 0.5);
                                  }
                                }
                                else if (dVar32 == -0.5) {
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar29 = (float)(int)(fVar29 + -0.5);
                                }
                                fVar37 = fVar38;
                                if (1.0 < fVar38) {
                                  fVar37 = 1.0;
                                }
                                fVar37 = fVar37 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar37 = 0.0;
                                }
                                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                if (0.0 <= fVar37) {
                                  if (dVar32 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                }
                                else if (dVar32 == -0.5) {
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
                                         (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                         ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    dVar32 = *in_stack_00000060;
                                    if (((dVar32 != 0.0) &&
                                        (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 != 0)) &&
                                       (lVar22 = *in_stack_00000038, lVar22 != 0)) {
                                      if (uVar25 < *(uint *)(lVar22 + 0x18)) {
                                        if (*(long *)(lVar16 + 0x18) != 0) {
                                          fVar37 = *(float *)(lVar22 + (long)(int)uVar25 * 0xc +
                                                             0x20);
                                          fVar38 = *(float *)((long)dVar32 + 0x84);
                                          lVar22 = *unaff_x24;
                                          fVar34 = fStack0000000000000048 *
                                                   *(float *)(lVar16 + 0x24) +
                                                   (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                                          fVar34 = fVar34 - (float)(int)fVar34;
                                          fVar29 = fVar34;
                                          if (1.0 < fVar34) {
                                            fVar29 = 1.0;
                                          }
                                          fVar39 = fVar29;
                                          if (fVar34 < 0.0) {
                                            fVar39 = 0.0;
                                          }
                                          fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar16 + 
                                                  0x18),0);
                                          fVar34 = fVar39;
                                          if (1.0 < fVar39) {
                                            fVar34 = 1.0;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar39 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e3f858;
                                            }
                                            fVar39 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                            fVar39 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar39 = fVar34;
                                            }
                                          }
                                          else {
                                            fVar39 = (float)(int)(fVar34 + -0.5);
                                          }
                                          fVar34 = fVar29;
                                          if (1.0 < fVar29) {
                                            fVar34 = 1.0;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar29 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e3f8e8;
                                            }
                                            fVar34 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                            fVar34 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar34 = fVar29;
                                            }
                                          }
                                          else {
                                            fVar34 = (float)(int)(fVar34 + -0.5);
                                          }
                                          fVar29 = fVar37;
                                          if (1.0 < fVar37) {
                                            fVar29 = 1.0;
                                          }
                                          fVar29 = fVar29 * 255.0;
                                          if (fVar37 < 0.0) {
                                            fVar29 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                          if (0.0 <= fVar29) {
                                            if (dVar32 == 0.5) {
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar29 + 0.5);
                                            }
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar29 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                                            }
                                          }
                                          else {
                                            fVar29 = (float)(int)(fVar29 + -0.5);
                                          }
                                          fVar37 = fVar38;
                                          if (1.0 < fVar38) {
                                            fVar37 = 1.0;
                                          }
                                          fVar37 = fVar37 * 255.0;
                                          if (fVar38 < 0.0) {
                                            fVar37 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                          unaff_x25 = (long *)StringLiteral_9119;
                                          if (0.0 <= fVar37) {
                                            if (dVar32 == 0.5) {
                                              fVar37 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                              }
                                            }
                                            else {
                                              fVar37 = (float)(int)(fVar37 + 0.5);
                                            }
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar37 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar37 = (float)_fStack0000000000000070 + -1.0;
                                            }
                                          }
                                          else {
                                            fVar37 = (float)(int)(fVar37 + -0.5);
                                          }
                                          if (lVar22 != 0) {
                                            if (uVar25 < *(uint *)(lVar22 + 0x18)) {
                                              *(uint *)(lVar22 + (long)(int)uVar25 * 4 + 0x20) =
                                                   (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8
                                                   | ((int)fVar29 & 0xffU) << 0x10 |
                                                   (int)fVar37 << 0x18;
                                              dVar32 = *in_stack_00000060;
                                              if (((dVar32 != 0.0) &&
                                                  (lVar16 = *(long *)((long)dVar32 + 0xa8),
                                                  lVar16 != 0)) &&
                                                 (lVar22 = *in_stack_00000038, lVar22 != 0)) {
                                                if (uVar23 < *(uint *)(lVar22 + 0x18)) {
                                                  if (*(long *)(lVar16 + 0x18) != 0) {
                                                    fVar37 = *(float *)(lVar22 + in_stack_00000058 *
                                                                                 0xc + 0x20);
                                                    fVar38 = *(float *)((long)dVar32 + 0x84);
                                                    lVar22 = *unaff_x24;
                                                    fVar34 = fStack0000000000000048 *
                                                             *(float *)(lVar16 + 0x24) +
                                                             (fVar37 * *(float *)(lVar16 + 0x20)) /
                                                             fVar38;
                                                    fVar34 = fVar34 - (float)(int)fVar34;
                                                    fVar29 = fVar34;
                                                    if (1.0 < fVar34) {
                                                      fVar29 = 1.0;
                                                    }
                                                    fVar39 = fVar29;
                                                    if (fVar34 < 0.0) {
                                                      fVar39 = 0.0;
                                                    }
                                                    fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(
                                                  lVar16 + 0x18),0);
                                                  fVar34 = fVar39;
                                                  if (1.0 < fVar39) {
                                                    fVar34 = 1.0;
                                                  }
                                                  uVar11 = 0x437f0000;
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar39 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar32 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar32 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fbd0;
                                                    }
                                                    fVar39 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                  else if (dVar32 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                                    fVar39 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar39 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar39 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
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
                          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                          if (lVar17 == 0) goto LAB_00e443fc;
                          fVar37 = *(float *)(lVar22 + unaff_x21 * 0xc + 0x20);
                          fVar38 = *(float *)((long)dVar32 + 0x84);
                          fVar29 = fVar29 + (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                          fVar29 = fVar29 - (float)(int)fVar29;
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = fVar39;
                          }
                          fVar33 = fVar34;
                          if (fVar29 < 0.0) {
                            fVar33 = 0.0;
                          }
                          fVar33 = (float)FUN_0269ad38(fVar33,lVar17,0);
                          fVar29 = fVar33;
                          if (1.0 < fVar33) {
                            fVar29 = fVar39;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar33 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e3f25c;
                            }
                            fVar39 = (float)(int)(fVar29 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar29;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar29 = fVar34;
                          if (1.0 < fVar34) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar34 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e415c4;
                            }
                            fVar34 = (float)(int)(fVar29 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = fVar29;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar29 = fVar37;
                          if (1.0 < fVar37) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar37 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar37 = fVar38;
                          if (1.0 < fVar38) {
                            fVar37 = 1.0;
                          }
                          fVar37 = fVar37 * 255.0;
                          if (fVar38 < 0.0) {
                            fVar37 = 0.0;
                          }
                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                          if (0.0 <= fVar37) {
                            if (dVar32 == 0.5) {
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + -0.5);
                          }
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar18) break;
                          *(uint *)(lVar19 + (long)(int)uVar18 * 4 + 0x20) =
                               (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                               ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                          dVar32 = *in_stack_00000060;
                          if (((dVar32 == 0.0) ||
                              (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                             (lVar22 = *in_stack_00000038, lVar22 == 0)) goto LAB_00e443fc;
                          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                          if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
                          fVar37 = *(float *)(lVar22 + unaff_x21 * 0xc + 0x20);
                          fVar38 = *(float *)((long)dVar32 + 0x84);
                          lVar22 = *unaff_x24;
                          fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                   (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                          fVar34 = fVar34 - (float)(int)fVar34;
                          fVar29 = fVar34;
                          if (1.0 < fVar34) {
                            fVar29 = 1.0;
                          }
                          fVar39 = fVar29;
                          if (fVar34 < 0.0) {
                            fVar39 = 0.0;
                          }
                          fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar16 + 0x18),0);
                          fVar34 = fVar39;
                          if (1.0 < fVar39) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e421fc;
                            }
                            fVar39 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar34;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e4228c;
                            }
                            fVar34 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                            fVar34 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar34 = fVar29;
                            }
                          }
                          else {
                            fVar34 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar29 = fVar37;
                          if (1.0 < fVar37) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar37 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar37 = fVar38;
                          if (1.0 < fVar38) {
                            fVar37 = 1.0;
                          }
                          fVar37 = fVar37 * 255.0;
                          if (fVar38 < 0.0) {
                            fVar37 = 0.0;
                          }
                          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                          if (0.0 <= fVar37) {
                            if (dVar32 == 0.5) {
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                          }
                          else if (dVar32 == -0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + -0.5);
                          }
                          if (lVar22 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar22 + 0x18) <= uVar25) break;
                          *(uint *)(lVar22 + (long)(int)uVar25 * 4 + 0x20) =
                               (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                               ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                          dVar32 = *in_stack_00000060;
                          if (((dVar32 == 0.0) ||
                              (lVar16 = *(long *)((long)dVar32 + 0xa8), lVar16 == 0)) ||
                             (lVar22 = *in_stack_00000038, lVar22 == 0)) goto LAB_00e443fc;
                          if (*(uint *)(lVar22 + 0x18) <= in_stack_00000068) break;
                          if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
                          fVar37 = *(float *)(lVar22 + unaff_x21 * 0xc + 0x20);
                          fVar38 = *(float *)((long)dVar32 + 0x84);
                          lVar22 = *unaff_x24;
                          fVar34 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                   (fVar37 * *(float *)(lVar16 + 0x20)) / fVar38;
                          fVar34 = fVar34 - (float)(int)fVar34;
                          fVar29 = fVar34;
                          if (1.0 < fVar34) {
                            fVar29 = 1.0;
                          }
                          fVar39 = fVar29;
                          if (fVar34 < 0.0) {
                            fVar39 = 0.0;
                          }
                          fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar16 + 0x18),0);
                          fVar34 = fVar39;
                          if (1.0 < fVar39) {
                            fVar34 = 1.0;
                          }
                          uVar11 = 0x437f0000;
                          fVar34 = fVar34 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) {
                            if (dVar32 == 0.5) {
                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e42560;
                            }
                            fVar39 = (float)(int)(fVar34 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar34;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar34 + -0.5);
                          }
                          fVar34 = fVar29;
                          if (1.0 < fVar29) {
                            fVar34 = 1.0;
                          }
                          fVar34 = fVar34 * 255.0;
                          if (fVar29 < 0.0) {
                            fVar34 = 0.0;
                          }
                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                          if (0.0 <= fVar34) goto LAB_00e425b8;
LAB_00e4204c:
                          if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            fVar34 = fVar29 + -1.0;
LAB_00e425d4:
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = fVar34;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar34 + -0.5);
                          }
                        }
                        unaff_s8 = 0.0;
                        fVar34 = fVar37;
                        if (1.0 < fVar37) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar34 = 0.0;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42654;
                          }
                          fVar37 = (float)(int)(fVar34 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar34;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar34 = fVar38;
                        if (1.0 < fVar38) {
                          fVar34 = 1.0;
                        }
                        fVar34 = fVar34 * 255.0;
                        if (fVar38 < 0.0) {
                          fVar34 = 0.0;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e426e4;
                          }
                          fVar38 = (float)(int)(fVar34 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                          fVar38 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar38 = fVar34;
                          }
                        }
                        else {
                          fVar38 = (float)(int)(fVar34 + -0.5);
                        }
                        if (lVar22 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar22 + 0x18) <= uVar23) break;
                        *(uint *)(lVar22 + in_stack_00000058 * 4 + 0x20) =
                             (int)fVar39 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                        uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                        if (*(int *)(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar14 = FUN_02681b9c(uVar20,0,0);
                        if ((uVar14 & 1) == 0) goto LAB_00e43400;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                        puVar24 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                        uVar5 = *puVar24;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                        goto LAB_00e443fc;
                        fVar29 = ((float)(uVar5 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
                        fVar39 = ((float)(uVar5 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
                        fVar38 = *(float *)(lVar16 + 0x20);
                        fVar37 = *(float *)(lVar16 + 0x24);
                        fVar34 = fVar29 * 255.0;
                        if (fVar29 < 0.0) {
                          fVar34 = 0.0;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar29 = 1.0;
                            goto LAB_00e4287c;
                          }
                          fVar34 = (float)(int)(fVar34 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = -1.0;
LAB_00e4287c:
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + fVar29;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar29 = fVar39 * 255.0;
                        fVar38 = ((float)(uVar5 >> 0x10 & 0xff) / 255.0) * fVar38;
                        if (fVar39 < 0.0) {
                          fVar29 = 0.0;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar39 = fVar38;
                        if (1.0 < fVar38) {
                          fVar39 = 1.0;
                        }
                        fVar39 = fVar39 * 255.0;
                        fVar37 = ((float)(uVar5 >> 0x18) / 255.0) * fVar37;
                        if (fVar38 < 0.0) {
                          fVar39 = 0.0;
                        }
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e429c8;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                        if (0.0 <= fVar38) {
                          if (dVar32 == 0.5) {
                            fVar37 = 1.0;
                            goto LAB_00e42a44;
                          }
                          fVar38 = (float)(int)(fVar38 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        *puVar24 = (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                        puVar24 = (uint *)(lVar16 + (long)(int)uVar18 * 4 + 0x20);
                        uVar18 = *puVar24;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                        goto LAB_00e443fc;
                        fVar29 = ((float)(uVar18 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
                        fVar39 = ((float)(uVar18 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
                        fVar38 = *(float *)(lVar16 + 0x20);
                        fVar37 = *(float *)(lVar16 + 0x24);
                        fVar34 = fVar29 * 255.0;
                        if (fVar29 < 0.0) {
                          fVar34 = 0.0;
                        }
                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                        if (0.0 <= fVar34) {
                          if (dVar32 == 0.5) {
                            fVar29 = 1.0;
                            goto LAB_00e42b80;
                          }
                          fVar34 = (float)(int)(fVar34 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = -1.0;
LAB_00e42b80:
                          fVar34 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar34 = (float)_fStack0000000000000070 + fVar29;
                          }
                        }
                        else {
                          fVar34 = (float)(int)(fVar34 + -0.5);
                        }
                        fVar29 = fVar39 * 255.0;
                        fVar38 = ((float)(uVar18 >> 0x10 & 0xff) / 255.0) * fVar38;
                        if (fVar39 < 0.0) {
                          fVar29 = 0.0;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar29 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar29 = (float)(int)(fVar29 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar39 = fVar38;
                        if (1.0 < fVar38) {
                          fVar39 = 1.0;
                        }
                        fVar39 = fVar39 * 255.0;
                        fVar37 = ((float)(uVar18 >> 0x18) / 255.0) * fVar37;
                        if (fVar38 < 0.0) {
                          fVar39 = 0.0;
                        }
                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar32 == 0.5) {
                            fVar38 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42ccc;
                          }
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                        if (0.0 <= fVar38) {
                          if (dVar32 == 0.5) {
                            fVar37 = 1.0;
                            goto LAB_00e42d48;
                          }
                          fVar38 = (float)(int)(fVar38 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
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
                        *puVar24 = (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                        lVar16 = *unaff_x24;
                        if (lVar16 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                        lVar16 = lVar16 + (long)(int)uVar25 * 4;
                      }
                      uVar25 = *(uint *)(lVar16 + 0x20);
                      if ((*in_stack_00000060 == 0.0) ||
                         (lVar22 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar22 == 0))
                      goto LAB_00e443fc;
                      fVar34 = ((float)(uVar25 & 0xff) / 255.0) * *(float *)(lVar22 + 0x18);
                      fVar39 = ((float)(uVar25 >> 8 & 0xff) / 255.0) * *(float *)(lVar22 + 0x1c);
                      fVar38 = *(float *)(lVar22 + 0x20);
                      fVar37 = *(float *)(lVar22 + 0x24);
                      fVar29 = fVar34 * 255.0;
                      if (fVar34 < 0.0) {
                        fVar29 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                      if (0.0 <= fVar29) {
                        if (dVar32 == 0.5) {
                          fVar29 = 1.0;
                          goto FUN_00e42e84;
                        }
                        fVar34 = (float)(int)(fVar29 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
                        fVar29 = -1.0;
FUN_00e42e84:
                        fVar34 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar34 = (float)_fStack0000000000000070 + fVar29;
                        }
                      }
                      else {
                        fVar34 = (float)(int)(fVar29 + -0.5);
                      }
                      fVar38 = ((float)(uVar25 >> 0x10 & 0xff) / 255.0) * fVar38;
                      fVar29 = fVar39 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar29 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                      if (0.0 <= fVar29) {
                        if (dVar32 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + 0.5);
                        }
                      }
                      else if (dVar32 == -0.5) {
                        fVar29 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar29 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar29 = (float)(int)(fVar29 + -0.5);
                      }
                      fVar39 = fVar38;
                      if (1.0 < fVar38) {
                        fVar39 = 1.0;
                      }
                      fVar37 = ((float)(uVar25 >> 0x18) / 255.0) * fVar37;
                      fVar39 = fVar39 * 255.0;
                      if (fVar38 < 0.0) {
                        fVar39 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar32 == 0.5) {
                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e42fd0;
                        }
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
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
                      dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                      if (0.0 <= fVar38) {
                        if (dVar32 == 0.5) {
                          fVar37 = 1.0;
                          goto LAB_00e4304c;
                        }
                        fVar38 = (float)(int)(fVar38 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
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
                      *(uint *)(lVar16 + 0x20) =
                           (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                      lVar16 = *unaff_x24;
                      if (lVar16 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                      puVar24 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20);
                      uVar23 = *puVar24;
                      if ((*in_stack_00000060 == 0.0) ||
                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                      goto LAB_00e443fc;
                      fVar34 = (float)(uVar23 & 0xff) / 255.0;
                      uVar11 = (ulong)(uint)fVar34;
                      fVar34 = fVar34 * *(float *)(lVar16 + 0x18);
                      fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
                      fVar38 = *(float *)(lVar16 + 0x20);
                      fVar37 = *(float *)(lVar16 + 0x24);
                      fVar29 = fVar34 * 255.0;
                      if (fVar34 < 0.0) {
                        fVar29 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                      if (0.0 <= fVar29) {
                        if (dVar32 == 0.5) {
                          fVar29 = 1.0;
                          goto LAB_00e4318c;
                        }
                        fVar34 = (float)(int)(fVar29 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
                        fVar29 = -1.0;
LAB_00e4318c:
                        fVar34 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar34 = (float)_fStack0000000000000070 + fVar29;
                        }
                      }
                      else {
                        fVar34 = (float)(int)(fVar29 + -0.5);
                      }
                      fVar38 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar38;
                      fVar29 = fVar39 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar29 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                      if (0.0 <= fVar29) {
                        if (dVar32 == 0.5) {
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + 0.5);
                        }
                      }
                      else if (dVar32 == -0.5) {
                        fVar29 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar29 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar29 = (float)(int)(fVar29 + -0.5);
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
                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar32 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e432e0;
                        }
                        fVar38 = (float)(int)(fVar39 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                        fVar38 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar38 = fVar39;
                        }
                      }
                      else {
                        fVar38 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar39 = unaff_s8;
                      }
                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar32 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar32 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar39 + -0.5);
                      }
                      unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                      *puVar24 = (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                 ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      unaff_s15 = in_stack_00000008._4_4_;
                      goto LAB_00e43400;
                    }
                    if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                    if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) != '\0')
                    goto LAB_00e3dd34;
                    lVar16 = *unaff_x24;
                    dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar29 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar34 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar34 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = 255.0;
                    }
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) break;
                    *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                         (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                    lVar16 = *unaff_x24;
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar29 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar34 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar34 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = 255.0;
                    }
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar16 + 0x18) <= uVar18) break;
                    *(uint *)(lVar16 + (long)(int)uVar18 * 4 + 0x20) =
                         (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                    lVar16 = *unaff_x24;
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar29 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar34 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar34 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = 255.0;
                    }
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar16 + 0x18) <= uVar25) break;
                    *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                         (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                    lVar16 = *unaff_x24;
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar29 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar34 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar34 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar32 = modf(dVar31,(double *)&stack0x00000070);
                    if (dVar32 == 0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar38 = 255.0;
                    }
                    if (lVar16 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar16 + 0x18) <= uVar23) break;
                    *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                         (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                  } while( true );
                }
                goto LAB_00e44400;
              }
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
LAB_00e3dfe0:
  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
  uVar20 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar11 = FUN_02681b9c(uVar20,0,0);
  lVar16 = *unaff_x24;
  if ((uVar11 & 1) != 0) goto code_r0x00e3e028;
  fVar34 = *(float *)((long)unaff_x19 + 0x8c);
  fVar37 = *(float *)(unaff_x19 + 0x12);
  fVar39 = *(float *)((long)unaff_x19 + 0x94);
  fVar38 = *(float *)(unaff_x19 + 0x13);
  fVar29 = fVar34;
  if (1.0 < fVar34) {
    fVar29 = 1.0;
  }
  fVar29 = fVar29 * 255.0;
  if (fVar34 < 0.0) {
    fVar29 = unaff_s8;
  }
  dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
  if (0.0 <= fVar29) {
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar29 = (float)(int)(fVar29 + -0.5);
  }
  fVar34 = fVar37;
  if (1.0 < fVar37) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar37 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070 + 1.0;
      goto LAB_00e3fd48;
    }
    fVar37 = (float)(int)(fVar34 + 0.5);
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
    fVar37 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar37 = fVar34;
    }
  }
  else {
    fVar37 = (float)(int)(fVar34 + -0.5);
  }
  fVar34 = fVar39;
  if (1.0 < fVar39) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar39 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar34 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar34 = (float)(int)(fVar34 + -0.5);
  }
  fVar39 = fVar38;
  if (1.0 < fVar38) {
    fVar39 = 1.0;
  }
  fVar39 = fVar39 * 255.0;
  if (fVar38 < 0.0) {
    fVar39 = unaff_s8;
  }
  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
  if (0.0 <= fVar39) {
    if (dVar32 == 0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar39 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar38 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar38 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar38 = (float)(int)(fVar39 + -0.5);
  }
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
       (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
       (int)fVar38 << 0x18;
  fVar34 = *(float *)(unaff_x19 + 0x12);
  lVar16 = unaff_x19[0x5f];
  fVar38 = *(float *)((long)unaff_x19 + 0x94);
  fVar37 = *(float *)(unaff_x19 + 0x13);
  fVar29 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
    fVar29 = unaff_s8;
  }
  dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
  if (0.0 <= fVar29) {
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar29 = (float)(int)(fVar29 + -0.5);
  }
  fVar39 = fVar34;
  if (1.0 < fVar34) {
    fVar39 = 1.0;
  }
  fVar39 = fVar39 * 255.0;
  if (fVar34 < 0.0) {
    fVar39 = unaff_s8;
  }
  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
  if (0.0 <= fVar39) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070 + 1.0;
      goto LAB_00e40610;
    }
    fVar39 = (float)(int)(fVar39 + 0.5);
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
    fVar39 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar39 = fVar34;
    }
  }
  else {
    fVar39 = (float)(int)(fVar39 + -0.5);
  }
  fVar34 = fVar38;
  if (1.0 < fVar38) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar38 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar34 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar34 = (float)(int)(fVar34 + -0.5);
  }
  fVar38 = fVar37;
  if (1.0 < fVar37) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * 255.0;
  if (fVar37 < 0.0) {
    fVar38 = unaff_s8;
  }
  dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar32 == 0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar38 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
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
       (int)fVar29 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
       (int)fVar37 << 0x18;
  fVar34 = *(float *)(unaff_x19 + 0x12);
  lVar16 = unaff_x19[0x5f];
  fVar38 = *(float *)((long)unaff_x19 + 0x94);
  fVar37 = *(float *)(unaff_x19 + 0x13);
  fVar29 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
    fVar29 = unaff_s8;
  }
  dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
  if (0.0 <= fVar29) {
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar29 = (float)(int)(fVar29 + -0.5);
  }
  fVar39 = fVar34;
  if (1.0 < fVar34) {
    fVar39 = 1.0;
  }
  fVar39 = fVar39 * 255.0;
  if (fVar34 < 0.0) {
    fVar39 = unaff_s8;
  }
  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
  if (0.0 <= fVar39) {
    if (dVar32 != 0.5) {
      fVar39 = (float)(int)(fVar39 + 0.5);
      goto LAB_00e40ee4;
    }
    fVar34 = (float)_fStack0000000000000070 + 1.0;
  }
  else {
    if (dVar32 != -0.5) {
      fVar39 = (float)(int)(fVar39 + -0.5);
      goto LAB_00e40ee4;
    }
    fVar34 = (float)_fStack0000000000000070 + -1.0;
  }
  fVar39 = (float)_fStack0000000000000070;
  if (((long)_fStack0000000000000070 & 1U) != 0) {
    fVar39 = fVar34;
  }
LAB_00e40ee4:
  fVar34 = fVar38;
  if (1.0 < fVar38) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar38 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar34 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar34 = (float)(int)(fVar34 + -0.5);
  }
  fVar38 = fVar37;
  if (1.0 < fVar37) {
    fVar38 = 1.0;
  }
  fVar38 = fVar38 * 255.0;
  if (fVar37 < 0.0) {
    fVar38 = unaff_s8;
  }
  dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar32 == 0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar38 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar37 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar37 = (float)(int)(fVar38 + -0.5);
  }
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_00e44400;
  *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
       (int)fVar29 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
       (int)fVar37 << 0x18;
  fVar29 = *(float *)((long)unaff_x19 + 0x8c);
  fVar34 = *(float *)(unaff_x19 + 0x12);
  unaff_w23 = 255.0;
  lVar22 = unaff_x19[0x5f];
  fVar38 = *(float *)((long)unaff_x19 + 0x94);
  fVar37 = *(float *)(unaff_x19 + 0x13);
  goto LAB_00e411d8;
code_r0x00e3e028:
  if ((*in_stack_00000060 == 0.0) ||
     (lVar22 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar22 == 0)) goto LAB_00e443fc;
  fVar34 = *(float *)(lVar22 + 0x18);
  fVar37 = *(float *)(lVar22 + 0x1c);
  fVar39 = *(float *)(lVar22 + 0x20);
  fVar38 = *(float *)(lVar22 + 0x24);
  fVar29 = fVar34;
  if (1.0 < fVar34) {
    fVar29 = 1.0;
  }
  fVar29 = fVar29 * 255.0;
  if (fVar34 < 0.0) {
    fVar29 = unaff_s8;
  }
  dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
  if (0.0 <= fVar29) {
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar29 = (float)(int)(fVar29 + -0.5);
  }
  fVar34 = fVar37;
  if (1.0 < fVar37) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar37 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 != 0.5) {
      fVar37 = (float)(int)(fVar34 + 0.5);
      goto LAB_00e3fe08;
    }
    fVar34 = (float)_fStack0000000000000070 + 1.0;
  }
  else {
    if (dVar32 != -0.5) {
      fVar37 = (float)(int)(fVar34 + -0.5);
      goto LAB_00e3fe08;
    }
    fVar34 = (float)_fStack0000000000000070 + -1.0;
  }
  fVar37 = (float)_fStack0000000000000070;
  if (((long)_fStack0000000000000070 & 1U) != 0) {
    fVar37 = fVar34;
  }
LAB_00e3fe08:
  fVar34 = fVar39;
  if (1.0 < fVar39) {
    fVar34 = 1.0;
  }
  fVar34 = fVar34 * 255.0;
  if (fVar39 < 0.0) {
    fVar34 = unaff_s8;
  }
  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
  if (0.0 <= fVar34) {
    if (dVar32 == 0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar34 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar34 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar34 = (float)(int)(fVar34 + -0.5);
  }
  fVar39 = fVar38;
  if (1.0 < fVar38) {
    fVar39 = 1.0;
  }
  fVar39 = fVar39 * 255.0;
  if (fVar38 < 0.0) {
    fVar39 = unaff_s8;
  }
  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
  if (0.0 <= fVar39) {
    if (dVar32 == 0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar39 + 0.5);
    }
  }
  else if (dVar32 == -0.5) {
    fVar38 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar38 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar38 = (float)(int)(fVar39 + -0.5);
  }
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
       (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
       (int)fVar38 << 0x18;
  if ((*in_stack_00000060 == 0.0) ||
     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0)) goto LAB_00e443fc;
  unaff_s9 = *(float *)(lVar16 + 0x1c);
  unaff_x20 = *unaff_x24;
  unaff_s13 = *(float *)(lVar16 + 0x20);
  unaff_s12 = *(float *)(lVar16 + 0x24);
  unaff_s10 = *(float *)(lVar16 + 0x18) * 255.0;
  if (*(float *)(lVar16 + 0x18) < 0.0) {
    unaff_s10 = unaff_s8;
  }
  dVar32 = modf((double)unaff_s10,(double *)&stack0x00000070);
  if (0.0 <= unaff_s10) {
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = (float)(int)(unaff_s10 + 0.5);
    }
    goto LAB_00e40514;
  }
  in_ZR = false;
  if (!NAN(dVar32)) {
    in_ZR = dVar32 == -0.5;
  }
  goto code_r0x00e40258;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar22 = unaff_x19[0xcb];
    uVar30 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar22 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar22 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar22 + lVar16);
    *puVar2 = uVar30;
    puVar2[1] = (int)uVar14;
    puVar2[2] = (int)uVar11;
    lVar22 = unaff_x19[0xca];
    if ((lVar22 == 0) || (lVar17 = unaff_x19[0xcc], lVar17 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar17 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar30 = *(undefined4 *)(lVar22 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar21 = (undefined8 *)(lVar17 + lVar16);
    lVar16 = lVar16 + 0xc;
    *puVar21 = *(undefined8 *)(lVar22 + 0x44);
    *(undefined4 *)(puVar21 + 1) = uVar30;
  } while (uVar23 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar12,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar16 = unaff_x19[0x59];
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),*in_stack_00000038,*plVar12,*plVar1,
               *(undefined8 *)(lVar16 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar16 = __start_il2cpp();
  if (lVar16 != 0) {
    if ((*(char *)(lVar16 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


