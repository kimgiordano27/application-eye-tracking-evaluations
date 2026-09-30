/*
FUNCTION_NAME: FullSerializer.Internal.fsReflectedConverter$$CanProcess
ENTRY_POINT: 00e3f010
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


/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsReflectedConverter__CanProcess(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  double dVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *unaff_x19;
  undefined8 *puVar19;
  long unaff_x20;
  long lVar20;
  undefined8 uVar21;
  uint *puVar22;
  uint uVar23;
  ulong unaff_x21;
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong unaff_x22;
  uint unaff_w23;
  ulong uVar27;
  long unaff_x24;
  float unaff_w25;
  long *plVar28;
  long *unaff_x26;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  float unaff_s9;
  float unaff_s12;
  float unaff_s14;
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
  
code_r0x00e3f010:
  fVar30 = (float)(int)param_1;
joined_r0x00e3f018:
  if (unaff_x20 != 0) {
    fVar32 = 1.0;
                    /* try { // try from 00e3f024 to 00f3f02f has its CatchHandler @ 00e3f048 */
    if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                    /* try { // try from 00e3f030 to 00f3f05b has its CatchHandler @ 00e3eff4 */
                    /* catch() { ... } // from try @ 00e3f024 with catch @ 00e3f048 */
                    /* catch() { ... } // from try @ 00e3f0e4 with catch @ 00e3f05c */
    *(uint *)(unaff_x20 + unaff_x22 * 4 + 0x20) =
         (int)unaff_s14 & 0xffU | ((int)unaff_s9 & 0xffU) << 8 | ((int)unaff_s12 & 0xffU) << 0x10 |
         (int)fVar30 << 0x18;
    plVar28 = (long *)StringLiteral_9119;
    dVar15 = *in_stack_00000060;
    if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
       (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
                    /* try { // try from 00e3f0a0 to 00f3f0af has its CatchHandler @ 00e3f108 */
    lVar20 = *unaff_x26;
    lVar11 = *(long *)(lVar16 + 0x18);
    fVar30 = fStack0000000000000048 * *(float *)(lVar16 + 0x24);
    uVar23 = (uint)unaff_x28;
    uVar24 = (uint)unaff_x29;
    if (unaff_w23 == 0) {
      if (in_stack_00000068 < *(uint *)(lVar18 + 0x18)) {
        if (lVar11 != 0) {
          fVar36 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
          fVar38 = *(float *)((long)dVar15 + 0x84);
          fVar30 = fVar30 + (fVar36 * *(float *)(lVar16 + 0x20)) / fVar38;
          fVar30 = fVar30 - (float)(int)fVar30;
          fVar37 = fVar30;
          if (1.0 < fVar30) {
            fVar37 = fVar32;
          }
          fVar31 = fVar37;
          if (fVar30 < 0.0) {
            fVar31 = 0.0;
          }
          fVar31 = (float)FUN_0269ad38(fVar31,lVar11,0);
          fVar30 = fVar31;
          if (1.0 < fVar31) {
            fVar30 = fVar32;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar31 < 0.0) {
            fVar30 = 0.0;
          }
          dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar15 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3f25c;
            }
            fVar32 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = fVar30;
            }
          }
          else {
            fVar32 = (float)(int)(fVar30 + -0.5);
          }
          fVar30 = fVar37;
          if (1.0 < fVar37) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar37 < 0.0) {
            fVar30 = 0.0;
          }
          dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar15 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e415c4;
            }
            fVar37 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = fVar30;
            }
          }
          else {
            fVar37 = (float)(int)(fVar30 + -0.5);
          }
          fVar30 = fVar36;
          if (1.0 < fVar36) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar36 < 0.0) {
            fVar30 = 0.0;
          }
          dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar15 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar15 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar36 = fVar38;
          if (1.0 < fVar38) {
            fVar36 = 1.0;
          }
          fVar36 = fVar36 * 255.0;
          if (fVar38 < 0.0) {
            fVar36 = 0.0;
          }
          dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar15 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar15 == -0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          if (lVar20 != 0) {
            if (uVar23 < *(uint *)(lVar20 + 0x18)) {
              *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar36 << 0x18;
              dVar15 = *in_stack_00000060;
              if (((dVar15 != 0.0) && (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
                 (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                if (in_stack_00000068 < *(uint *)(lVar18 + 0x18)) {
                  if (*(long *)(lVar16 + 0x18) != 0) {
                    fVar37 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
                    fVar36 = *(float *)((long)dVar15 + 0x84);
                    lVar18 = *unaff_x26;
                    fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                             (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
                    fVar32 = fVar32 - (float)(int)fVar32;
                    fVar30 = fVar32;
                    if (1.0 < fVar32) {
                      fVar30 = 1.0;
                    }
                    fVar38 = fVar30;
                    if (fVar32 < 0.0) {
                      fVar38 = 0.0;
                    }
                    fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
                    fVar32 = fVar38;
                    if (1.0 < fVar38) {
                      fVar32 = 1.0;
                    }
                    fVar32 = fVar32 * 255.0;
                    if (fVar38 < 0.0) {
                      fVar32 = 0.0;
                    }
                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                    if (0.0 <= fVar32) {
                      if (dVar15 == 0.5) {
                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e421fc;
                      }
                      fVar38 = (float)(int)(fVar32 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = fVar32;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar32 + -0.5);
                    }
                    fVar32 = fVar30;
                    if (1.0 < fVar30) {
                      fVar32 = 1.0;
                    }
                    fVar32 = fVar32 * 255.0;
                    if (fVar30 < 0.0) {
                      fVar32 = 0.0;
                    }
                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                    if (0.0 <= fVar32) {
                      if (dVar15 == 0.5) {
                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e4228c;
                      }
                      fVar32 = (float)(int)(fVar32 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = fVar30;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar32 + -0.5);
                    }
                    fVar30 = fVar37;
                    if (1.0 < fVar37) {
                      fVar30 = 1.0;
                    }
                    fVar30 = fVar30 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar30 = 0.0;
                    }
                    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                    if (0.0 <= fVar30) {
                      if (dVar15 == 0.5) {
                        fVar30 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar30 = (float)(int)(fVar30 + 0.5);
                      }
                    }
                    else if (dVar15 == -0.5) {
                      fVar30 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar30 = (float)(int)(fVar30 + -0.5);
                    }
                    fVar37 = fVar36;
                    if (1.0 < fVar36) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar36 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar15 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar15 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    if (lVar18 != 0) {
                      if (uVar24 < *(uint *)(lVar18 + 0x18)) {
                        *(uint *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) =
                             (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                             ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        dVar15 = *in_stack_00000060;
                        if (((dVar15 != 0.0) &&
                            (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
                           (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                          if (in_stack_00000068 < *(uint *)(lVar18 + 0x18)) {
                            if (*(long *)(lVar16 + 0x18) != 0) {
                              fVar37 = *(float *)(lVar18 + unaff_x22 * unaff_x24 + 0x20);
                              fVar36 = *(float *)((long)dVar15 + 0x84);
                              lVar18 = *unaff_x26;
                              fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                       (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
                              fVar32 = fVar32 - (float)(int)fVar32;
                              fVar30 = fVar32;
                              if (1.0 < fVar32) {
                                fVar30 = 1.0;
                              }
                              fVar38 = fVar30;
                              if (fVar32 < 0.0) {
                                fVar38 = 0.0;
                              }
                              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
                              fVar32 = fVar38;
                              if (1.0 < fVar38) {
                                fVar32 = 1.0;
                              }
                              uVar9 = 0x437f0000;
                              fVar32 = fVar32 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar32 = 0.0;
                              }
                              dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                              if (0.0 <= fVar32) {
                                if (dVar15 != 0.5) {
                                  fVar38 = (float)(int)(fVar32 + 0.5);
                                  goto LAB_00e42588;
                                }
                                fVar32 = (float)_fStack0000000000000070 + 1.0;
                              }
                              else {
                                if (dVar15 != -0.5) {
                                  fVar38 = (float)(int)(fVar32 + -0.5);
                                  goto LAB_00e42588;
                                }
                                fVar32 = (float)_fStack0000000000000070 + -1.0;
                              }
                              fVar38 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar38 = fVar32;
                              }
LAB_00e42588:
                              fVar32 = fVar30;
                              if (1.0 < fVar30) {
                                fVar32 = 1.0;
                              }
                              fVar32 = fVar32 * 255.0;
                              if (fVar30 < 0.0) {
                                fVar32 = 0.0;
                              }
                              dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                              if (fVar32 < 0.0) goto LAB_00e4204c;
                              do {
                                if (dVar15 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  fVar32 = fVar30 + 1.0;
                                  goto LAB_00e425d4;
                                }
                                fVar30 = (float)(int)(fVar32 + 0.5);
LAB_00e425ec:
                                fVar31 = 0.0;
                                fVar32 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar32 = fVar31;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e42654;
                                  }
                                  fVar37 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = fVar32;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar32 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar32 = fVar31;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e426e4;
                                  }
                                  fVar36 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = fVar32;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar32 + -0.5);
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= (uint)in_stack_00000058)
                                goto LAB_00e44400;
                                *(uint *)(lVar18 + in_stack_00000058 * 4 + 0x20) =
                                     (int)fVar38 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar12 = FUN_02681b9c(uVar21,0,0);
                                if ((uVar12 & 1) == 0) goto LAB_00e43400;
                                lVar16 = *unaff_x26;
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                goto LAB_00e44400;
                                puVar22 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
                                uVar23 = *puVar22;
                                if ((*in_stack_00000060 == 0.0) ||
                                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0
                                   )) goto LAB_00e443fc;
                                fVar32 = ((float)(uVar23 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x18);
                                fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x1c);
                                fVar36 = *(float *)(lVar16 + 0x20);
                                fVar37 = *(float *)(lVar16 + 0x24);
                                fVar30 = fVar32 * 255.0;
                                if (fVar32 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = 1.0;
                                    goto LAB_00e4287c;
                                  }
                                  fVar32 = (float)(int)(fVar30 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = -1.0;
LAB_00e4287c:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = (float)_fStack0000000000000070 + fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                                fVar30 = fVar38 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar38 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar38 = 1.0;
                                }
                                fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
                                fVar38 = fVar38 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar38 = fVar31;
                                }
                                dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                if (0.0 <= fVar38) {
                                  if (dVar15 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e429c8;
                                  }
                                  fVar38 = (float)(int)(fVar38 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar36;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar38 + -0.5);
                                }
                                fVar36 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar36 = 1.0;
                                }
                                fVar36 = fVar36 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar36 = fVar31;
                                }
                                dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                if (0.0 <= fVar36) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = 1.0;
                                    goto LAB_00e42a44;
                                  }
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = -1.0;
LAB_00e42a44:
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + fVar37;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + -0.5);
                                }
                                *puVar22 = (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                lVar16 = *unaff_x26;
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar16 + 0x18) <= (uint)unaff_x28) goto LAB_00e44400;
                                puVar22 = (uint *)(lVar16 + (long)(int)(uint)unaff_x28 * 4 + 0x20);
                                uVar23 = *puVar22;
                                if ((*in_stack_00000060 == 0.0) ||
                                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0
                                   )) goto LAB_00e443fc;
                                fVar32 = ((float)(uVar23 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x18);
                                fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x1c);
                                fVar36 = *(float *)(lVar16 + 0x20);
                                fVar37 = *(float *)(lVar16 + 0x24);
                                fVar30 = fVar32 * 255.0;
                                if (fVar32 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = 1.0;
                                    goto LAB_00e42b80;
                                  }
                                  fVar32 = (float)(int)(fVar30 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = -1.0;
LAB_00e42b80:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = (float)_fStack0000000000000070 + fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                                fVar30 = fVar38 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar38 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar38 = 1.0;
                                }
                                fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
                                fVar38 = fVar38 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar38 = fVar31;
                                }
                                dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                if (0.0 <= fVar38) {
                                  if (dVar15 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e42ccc;
                                  }
                                  fVar38 = (float)(int)(fVar38 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar36;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar38 + -0.5);
                                }
                                fVar36 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar36 = 1.0;
                                }
                                fVar36 = fVar36 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar36 = fVar31;
                                }
                                dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                if (0.0 <= fVar36) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = 1.0;
                                    goto LAB_00e42d48;
                                  }
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = -1.0;
LAB_00e42d48:
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + fVar37;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + -0.5);
                                }
                                *puVar22 = (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                lVar16 = *unaff_x26;
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar16 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
                                lVar16 = lVar16 + (long)(int)(uint)unaff_x29 * 4;
LAB_00e42ddc:
                                uVar23 = *(uint *)(lVar16 + 0x20);
                                if ((*in_stack_00000060 == 0.0) ||
                                   (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar18 == 0
                                   )) goto LAB_00e443fc;
                                fVar32 = ((float)(uVar23 & 0xff) / 255.0) *
                                         *(float *)(lVar18 + 0x18);
                                fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                         *(float *)(lVar18 + 0x1c);
                                fVar36 = *(float *)(lVar18 + 0x20);
                                fVar37 = *(float *)(lVar18 + 0x24);
                                fVar30 = fVar32 * 255.0;
                                if (fVar32 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = 1.0;
                                    goto FUN_00e42e84;
                                  }
                                  fVar32 = (float)(int)(fVar30 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = -1.0;
FUN_00e42e84:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = (float)_fStack0000000000000070 + fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                                fVar30 = fVar38 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar38 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar38 = 1.0;
                                }
                                fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
                                fVar38 = fVar38 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar38 = fVar31;
                                }
                                dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                if (0.0 <= fVar38) {
                                  if (dVar15 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e42fd0;
                                  }
                                  fVar38 = (float)(int)(fVar38 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar36;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar38 + -0.5);
                                }
                                fVar36 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar36 = 1.0;
                                }
                                fVar36 = fVar36 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar36 = fVar31;
                                }
                                dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                if (0.0 <= fVar36) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = 1.0;
                                    goto LAB_00e4304c;
                                  }
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = -1.0;
LAB_00e4304c:
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + fVar37;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + -0.5);
                                }
                                *(uint *)(lVar16 + 0x20) =
                                     (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                lVar16 = *unaff_x26;
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar16 + 0x18) <= (uint)in_stack_00000058)
                                goto LAB_00e44400;
                                puVar22 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20);
                                uVar23 = *puVar22;
                                if ((*in_stack_00000060 == 0.0) ||
                                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0
                                   )) goto LAB_00e443fc;
                                fVar32 = (float)(uVar23 & 0xff) / 255.0;
                                uVar9 = (ulong)(uint)fVar32;
                                fVar32 = fVar32 * *(float *)(lVar16 + 0x18);
                                fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x1c);
                                fVar36 = *(float *)(lVar16 + 0x20);
                                fVar37 = *(float *)(lVar16 + 0x24);
                                fVar30 = fVar32 * 255.0;
                                if (fVar32 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = 1.0;
                                    goto LAB_00e4318c;
                                  }
                                  fVar32 = (float)(int)(fVar30 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = -1.0;
LAB_00e4318c:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = (float)_fStack0000000000000070 + fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                                fVar30 = fVar38 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar30 = fVar31;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar38 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar38 = 1.0;
                                }
                                fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
                                fVar38 = fVar38 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar38 = fVar31;
                                }
                                dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                if (0.0 <= fVar38) {
                                  if (dVar15 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e432e0;
                                  }
                                  fVar38 = (float)(int)(fVar38 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar36;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar38 + -0.5);
                                }
                                fVar36 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar36 = 1.0;
                                }
                                fVar36 = fVar36 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar36 = fVar31;
                                }
                                dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                if (0.0 <= fVar36) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar36 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar36 + -0.5);
                                }
                                *puVar22 = (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                           ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                unaff_s15 = in_stack_00000008._4_4_;
LAB_00e43400:
                                lVar16 = *unaff_x26;
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                goto LAB_00e44400;
                                lVar16 = lVar16 + unaff_x22 * 4;
                                fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                                *(char *)(lVar16 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                                lVar16 = unaff_x19[0x5f];
                                if (lVar16 == 0) goto LAB_00e443fc;
                                uVar23 = (uint)unaff_x28;
                                if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                lVar16 = lVar16 + (long)(int)uVar23 * 4;
                                fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                                *(char *)(lVar16 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                                lVar16 = unaff_x19[0x5f];
                                if (lVar16 == 0) goto LAB_00e443fc;
                                uVar24 = (uint)unaff_x29;
                                if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                lVar16 = lVar16 + (long)(int)uVar24 * 4;
                                fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                                *(char *)(lVar16 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                                lVar16 = unaff_x19[0x5f];
                                if (lVar16 == 0) goto LAB_00e443fc;
                                uVar17 = (uint)in_stack_00000058;
                                if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                lVar16 = lVar16 + in_stack_00000058 * 4;
                                uVar12 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                                fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
                                *(char *)(lVar16 + 0x23) =
                                     (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                                uVar13 = FUN_00e3703c();
                                if ((uVar13 & 1) == 0) {
                                  lVar16 = *plVar28;
                                  if (*(int *)(lVar16 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar16 = *plVar28;
                                  }
                                  if (*(int *)(*(long *)(lVar16 + 0xb8) + 0x20) == 1) {
                                    lVar16 = *unaff_x26;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    puVar22 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
                                    uVar3 = *puVar22;
                                    fVar32 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
                                    fVar37 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,
                                                                 0);
                                    fVar36 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar30 = fVar32;
                                    if (1.0 < fVar32) {
                                      fVar30 = 1.0;
                                    }
                                    fVar30 = fVar30 * 255.0;
                                    if (fVar32 < 0.0) {
                                      fVar30 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                    if (0.0 <= fVar30) {
                                      if (dVar15 == 0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + -0.5);
                                    }
                                    fVar32 = fVar37;
                                    if (1.0 < fVar37) {
                                      fVar32 = 1.0;
                                    }
                                    fVar32 = fVar32 * 255.0;
                                    if (fVar37 < 0.0) {
                                      fVar32 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                    if (0.0 <= fVar32) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = (float)(int)(fVar32 + -0.5);
                                    }
                                    fVar37 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar37 = 1.0;
                                    }
                                    fVar38 = (float)(uVar3 >> 0x18) / 255.0;
                                    fVar37 = fVar37 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar37 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                    if (0.0 <= fVar37) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43744;
                                      }
                                      fVar36 = (float)(int)(fVar37 + 0.5);
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar37;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar37 + -0.5);
                                    }
                                    if (1.0 < fVar38) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *puVar22 = (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                               ((int)fVar36 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar16 = *in_stack_00000030;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    puVar22 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
                                    uVar3 = *puVar22;
                                    fVar32 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
                                    fVar37 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,
                                                                 0);
                                    fVar36 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar30 = fVar32;
                                    if (1.0 < fVar32) {
                                      fVar30 = 1.0;
                                    }
                                    fVar30 = fVar30 * 255.0;
                                    if (fVar32 < 0.0) {
                                      fVar30 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                    if (0.0 <= fVar30) {
                                      if (dVar15 == 0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + -0.5);
                                    }
                                    fVar32 = fVar37;
                                    if (1.0 < fVar37) {
                                      fVar32 = 1.0;
                                    }
                                    fVar32 = fVar32 * 255.0;
                                    if (fVar37 < 0.0) {
                                      fVar32 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                    if (0.0 <= fVar32) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = (float)(int)(fVar32 + -0.5);
                                    }
                                    fVar37 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar37 = 1.0;
                                    }
                                    fVar38 = (float)(uVar3 >> 0x18) / 255.0;
                                    fVar37 = fVar37 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar37 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                    if (0.0 <= fVar37) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43a84;
                                      }
                                      fVar36 = (float)(int)(fVar37 + 0.5);
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar37;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar37 + -0.5);
                                    }
                                    if (1.0 < fVar38) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *puVar22 = (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                               ((int)fVar36 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar16 = *in_stack_00000030;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    puVar22 = (uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20);
                                    uVar23 = *puVar22;
                                    fVar32 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                                    fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0
                                                                 ,0);
                                    fVar36 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar30 = fVar32;
                                    if (1.0 < fVar32) {
                                      fVar30 = 1.0;
                                    }
                                    fVar30 = fVar30 * 255.0;
                                    if (fVar32 < 0.0) {
                                      fVar30 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                    if (0.0 <= fVar30) {
                                      if (dVar15 == 0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + -0.5);
                                    }
                                    fVar32 = fVar37;
                                    if (1.0 < fVar37) {
                                      fVar32 = 1.0;
                                    }
                                    fVar32 = fVar32 * 255.0;
                                    if (fVar37 < 0.0) {
                                      fVar32 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                    if (0.0 <= fVar32) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = (float)(int)(fVar32 + -0.5);
                                    }
                                    fVar37 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar37 = 1.0;
                                    }
                                    fVar38 = (float)(uVar23 >> 0x18) / 255.0;
                                    fVar37 = fVar37 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar37 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                    if (0.0 <= fVar37) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e43dbc;
                                      }
                                      fVar36 = (float)(int)(fVar37 + 0.5);
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar37;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar37 + -0.5);
                                    }
                                    if (1.0 < fVar38) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = (float)(int)(fVar38 + -0.5);
                                    }
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    *puVar22 = (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                               ((int)fVar36 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar16 = *in_stack_00000030;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    puVar22 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20);
                                    uVar23 = *puVar22;
                                    fVar32 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                                    fVar37 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0
                                                                 ,0);
                                    fVar36 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) /
                                                                 255.0,0);
                                    fVar30 = fVar32;
                                    if (1.0 < fVar32) {
                                      fVar30 = 1.0;
                                    }
                                    fVar30 = fVar30 * 255.0;
                                    if (fVar32 < 0.0) {
                                      fVar30 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                    if (0.0 <= fVar30) {
                                      if (dVar15 == 0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + -0.5);
                                    }
                                    uVar9 = 0x3f800000;
                                    fVar32 = fVar37;
                                    if (1.0 < fVar37) {
                                      fVar32 = 1.0;
                                    }
                                    fVar32 = fVar32 * 255.0;
                                    if (fVar37 < 0.0) {
                                      fVar32 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                    if (0.0 <= fVar32) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = (float)(int)(fVar32 + -0.5);
                                    }
                                    fVar37 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar37 = 1.0;
                                    }
                                    fVar38 = (float)(uVar23 >> 0x18) / 255.0;
                                    fVar37 = fVar37 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar37 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                    if (0.0 <= fVar37) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e440f4;
                                      }
                                      fVar36 = (float)(int)(fVar37 + 0.5);
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = fVar37;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar37 + -0.5);
                                    }
                                    if (1.0 < fVar38) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      uVar12 = 0;
                                      if (dVar15 == 0.5) {
                                        fVar37 = 1.0;
                                        goto LAB_00e44170;
                                      }
                                      fVar38 = (float)(int)(fVar38 + 0.5);
                                    }
                                    else {
                                      uVar12 = 0;
                                      if (dVar15 == -0.5) {
                                        fVar37 = -1.0;
LAB_00e44170:
                                        fVar37 = (float)_fStack0000000000000070 + fVar37;
                                        uVar12 = (ulong)(uint)fVar37;
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar37;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                    }
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    *puVar22 = (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                               ((int)fVar36 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                                    unaff_x26 = in_stack_00000030;
                                  }
                                }
                                puVar6 = StringLiteral_4992;
                                puVar5 = OVREyeGaze_TypeInfo;
                                in_stack_00000050 = in_stack_00000050 + 1;
                                if (in_stack_00000050 == in_stack_00000018) {
                                  if (((unaff_x19[0x58] == 0) ||
                                      (iVar8 = FUN_026c82cc(unaff_x19[0x58],0), iVar8 < 1)) &&
                                     (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
                                  puVar5 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
                                  if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0))
                                  goto LAB_00e443fc;
                                  iVar8 = *(int *)(unaff_x19[0xf] + 0x10);
                                  plVar28 = unaff_x19 + 0xcb;
                                  if (iVar8 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                                    FUN_010afdd4(plVar28,iVar8,
                                                 *(undefined8 *)
                                                  Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                                );
                                  }
                                  if ((unaff_x19[0xcc] == 0) ||
                                     (lVar16 = unaff_x19[0xf], lVar16 == 0)) goto LAB_00e443fc;
                                  plVar10 = unaff_x19 + 0xcc;
                                  if (*(int *)(lVar16 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                                    FUN_010afdd4(plVar10,*(int *)(lVar16 + 0x10),
                                                 *(undefined8 *)puVar5);
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
                                FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,
                                             &stack0x00000070,*(undefined8 *)StringLiteral_4992);
                                *in_stack_00000060 = _fStack0000000000000070;
                                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                iVar8 = FUN_00e4e99c();
                                if (iVar8 <= *(int *)((long)unaff_x19 + 0x38c)) {
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
                                }
                                if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                                  FUN_00e45d2c();
                                }
                                *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                                if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                                  uVar9 = FUN_0269e56c(0);
                                  if (((fStack000000000000004c == 0.0) || ((uVar9 & 1) == 0)) ||
                                     (1 < (int)unaff_x19[0x2a] - 3U)) {
                                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                    iVar8 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                                    *(int *)((long)unaff_x19 + 0x38c) = iVar8;
                                    if ((unaff_x19[9] == 0) ||
                                       (FUN_0132138c(unaff_x19[9],iVar8,&stack0x00000070,
                                                     *(undefined8 *)puVar6),
                                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                                    *(undefined4 *)(unaff_x19 + 0x4a) =
                                         *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                                    if ((unaff_x19[9] == 0) ||
                                       (FUN_0132138c(unaff_x19[9],
                                                     *(undefined4 *)((long)unaff_x19 + 0x38c),
                                                     &stack0x00000070,*(undefined8 *)puVar6),
                                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                                    *(float *)((long)unaff_x19 + 0x254) =
                                         *(float *)((long)_fStack0000000000000070 + 0x48) +
                                         *(float *)((long)unaff_x19 + 0x50c);
                                    *(undefined4 *)(unaff_x19 + 0x4b) =
                                         *(undefined4 *)((long)unaff_x19 + 0x18c);
                                  }
                                }
                                else {
                                  dVar15 = *in_stack_00000060;
                                  if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x78) == 0))
                                  goto LAB_00e443fc;
                                  fVar32 = *(float *)(*(long *)((long)dVar15 + 0x78) + 0x18);
                                  fVar30 = DAT_028aa034;
                                  if (fVar32 != 0.0) {
                                    fVar30 = fVar32;
                                  }
                                  if ((0.0 < (unaff_s15 - *(float *)((long)dVar15 + 100)) / fVar30)
                                     && (*(char *)((long)dVar15 + 0x165) == '\0')) {
                                    *(undefined1 *)((long)dVar15 + 0x165) = 1;
                                    *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                    sVar7 = FUN_015fa29c(unaff_x19[0xf],
                                                         in_stack_00000050 & 0xffffffff,0);
                                    if (sVar7 != 0x200b) {
                                      *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                                      if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                      sVar7 = FUN_015fa29c(unaff_x19[0xf],
                                                           in_stack_00000050 & 0xffffffff,0);
                                      if (sVar7 != 0x20) {
                                        if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                        sVar7 = FUN_015fa29c(unaff_x19[0xf],
                                                             in_stack_00000050 & 0xffffffff,0);
                                        if (sVar7 != 10) {
                                          lVar16 = unaff_x19[0xca];
                                          if (lVar16 == 0) goto LAB_00e443fc;
                                          fVar37 = *(float *)(lVar16 + 0x48);
                                          fVar30 = *(float *)(unaff_x19 + 0x4b);
                                          fVar36 = fVar37 + *(float *)((long)unaff_x19 + 0x50c);
                                          fVar32 = *(float *)(unaff_x19 + 0x4a);
                                          if (fVar37 <= *(float *)(unaff_x19 + 0x4a)) {
                                            fVar32 = fVar37;
                                          }
                                          *(float *)(unaff_x19 + 0x4a) = fVar32;
                                          fVar32 = *(float *)((long)unaff_x19 + 0x254);
                                          if (fVar36 <= *(float *)((long)unaff_x19 + 0x254)) {
                                            fVar32 = fVar36;
                                          }
                                          *(float *)((long)unaff_x19 + 0x254) = fVar32;
                                          fVar32 = (float)FUN_00e5ef30(*(undefined4 *)
                                                                        ((long)unaff_x19 + 0x134),
                                                                       lVar16,0);
                                          fVar32 = fVar32 + *(float *)(unaff_x19 + 0xa1) +
                                                   *(float *)((long)unaff_x19 + 0x55c);
                                          if (fVar30 <= fVar32) {
                                            fVar30 = fVar32;
                                          }
                                          *(float *)(unaff_x19 + 0x4b) = fVar30;
                                        }
                                      }
                                    }
                                    iVar39 = *(int *)((long)unaff_x19 + 0x38c);
                                    if (*(int *)((long)unaff_x19 + 0x38c) <= iVar8) {
                                      iVar39 = iVar8;
                                    }
                                    *(int *)((long)unaff_x19 + 0x38c) = iVar39;
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
                                              (*(undefined8 *)(lVar16 + 0x40),
                                               *(undefined8 *)(lVar16 + 0x28));
                                  }
                                }
                                unaff_x19[0xc6] = 0;
                                fVar32 = 0.0;
                                *(undefined4 *)(unaff_x19 + 199) = 0;
                                fVar30 = 0.0;
                                if ((((0.0 < fStack000000000000004c) &&
                                     (uVar23 = *(uint *)(unaff_x19 + 0x2a), fVar30 = fVar32,
                                     uVar23 < 5)) && ((1 << (ulong)(uVar23 & 0x1f) & 0x19U) != 0))
                                   && (*(float *)(unaff_x19 + 0x4a) <
                                       -*(float *)((long)unaff_x19 + 0x184))) {
                                  if (uVar23 == 4) {
                                    lVar16 = unaff_x19[0xc];
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (0 < *(int *)(lVar16 + 0x18)) {
                                      iVar8 = 0;
                                      do {
                                        FUN_0132138c(lVar16,iVar8,&stack0x00000070,
                                                     *(undefined8 *)puVar5);
                                        *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070
                                        ;
                                        fVar30 = fStack0000000000000070;
                                        if (-*(float *)(unaff_x19 + 0x4a) -
                                            *(float *)((long)unaff_x19 + 0x184) <=
                                            fStack0000000000000070) break;
                                        lVar16 = unaff_x19[0xc];
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        iVar8 = iVar8 + 1;
                                      } while (iVar8 < *(int *)(lVar16 + 0x18));
                                    }
                                  }
                                  else {
                                    lVar16 = unaff_x19[0xb];
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    iVar8 = 0;
                                    fVar30 = 0.0;
                                    while (iVar8 < *(int *)(lVar16 + 0x18)) {
                                      FUN_0132138c(lVar16,iVar8,&stack0x00000070,
                                                   *(undefined8 *)puVar5);
                                      fVar30 = fVar30 + fStack0000000000000070;
                                      *(float *)((long)unaff_x19 + 0x634) = fVar30;
                                      if (-*(float *)(unaff_x19 + 0x4a) -
                                          *(float *)((long)unaff_x19 + 0x184) <= fVar30) break;
                                      lVar16 = unaff_x19[0xb];
                                      iVar8 = iVar8 + 1;
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                    }
                                  }
                                }
                                *(float *)(unaff_x19 + 0xc6) =
                                     *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                                if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                fVar32 = *(float *)((long)unaff_x19 + 0x53c);
                                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
                                if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0))
                                goto LAB_00e443fc;
                                fVar37 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
                                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                fVar38 = *(float *)(unaff_x19 + 0xa8);
                                fVar36 = *(float *)(unaff_x19 + 199) + fVar38;
                                *(float *)((long)unaff_x19 + 0x634) =
                                     fVar30 + fVar32 + (fVar37 + -1.0) *
                                                       *(float *)((long)_fStack0000000000000070 +
                                                                 0x84);
                                *(float *)(unaff_x19 + 199) = fVar36;
                                puVar5 = 
                                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                ;
                                if (DAT_03774d76 == '\0') {
                                  thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                  DAT_03774d76 = '\x01';
                                }
                                fVar32 = 1.0;
                                fVar30 = 1.0;
                                uVar33 = *(undefined4 *)
                                          (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar33;
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar21 = *(undefined8 *)(unaff_x19[0xca] + 200);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar9 = FUN_02681b9c(uVar21,0,0);
                                if ((uVar9 & 1) != 0) {
                                  lVar16 = __start_il2cpp();
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if ((*(char *)(lVar16 + 0x109) == '\0') &&
                                     (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    uVar33 = FUN_00e4ee40();
                                    *(undefined4 *)((long)unaff_x19 + 0x674) = uVar33;
                                    *(float *)(unaff_x19 + 0xcf) = fVar36;
                                    *(float *)((long)unaff_x19 + 0x67c) = fVar38;
                                  }
                                }
                                if (DAT_03774d76 == '\0') {
                                  thunk_FUN_00d48444(puVar5);
                                  DAT_03774d76 = '\x01';
                                }
                                lVar18 = *(long *)puVar5;
                                uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
                                *in_stack_00000040 = **(undefined8 **)(lVar18 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar33;
                                lVar16 = (*(long **)(lVar18 + 0xb8))[1];
                                unaff_x19[0xc0] = **(long **)(lVar18 + 0xb8);
                                *(int *)(unaff_x19 + 0xc1) = (int)lVar16;
                                uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
                                in_stack_00000040[3] = **(undefined8 **)(lVar18 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x614) = uVar33;
                                lVar16 = (*(long **)(lVar18 + 0xb8))[1];
                                unaff_x19[0xc3] = **(long **)(lVar18 + 0xb8);
                                *(int *)(unaff_x19 + 0xc4) = (int)lVar16;
                                uVar33 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
                                in_stack_00000040[6] = **(undefined8 **)(lVar18 + 0xb8);
                                *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar33;
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar9 = FUN_02681b9c(uVar21,0,0);
                                if ((uVar9 & 1) != 0) {
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
                                    lVar16 = __start_il2cpp();
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if ((*(char *)(lVar16 + 0x109) == '\0') &&
                                       (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                      lVar16 = unaff_x19[0xca];
                                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                      if ((lVar16 == 0) ||
                                         (lVar18 = *(long *)(lVar16 + 0xc0), lVar18 == 0))
                                      goto LAB_00e443fc;
                                      fVar37 = fStack0000000000000048;
                                      if (*(char *)(lVar18 + 0x18) != '\0') {
                                        fVar36 = *(float *)(lVar16 + 100);
                                        fVar37 = *(float *)((long)unaff_x19 + 0x2ec) - fVar36;
                                      }
                                      if (*(char *)(lVar18 + 0x19) != '\0') {
                                        uVar33 = FUN_00e4e9f4(fVar37);
                                        lVar16 = unaff_x19[0xca];
                                        *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar33;
                                        *(float *)(unaff_x19 + 0xbf) = fVar36;
                                        *(float *)((long)unaff_x19 + 0x5fc) = fVar38;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                      }
                                      if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x28) != '\0') {
                                        fVar29 = (float)FUN_00e4e9f4(fVar37);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        fVar35 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar35;
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar36 = (float)FUN_00e4e9f4(fVar37);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar36;
                                        *(float *)(unaff_x19 + 200) = fVar35;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar36 + (float)in_stack_00000040[3]);
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar29 = (float)FUN_00e4e9f4(fVar37);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                        *(float *)(unaff_x19 + 200) = fVar35;
                                        fVar36 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar29 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar36;
                                        if ((unaff_x19[0xca] == 0) ||
                                           (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        fVar37 = (float)FUN_00e4e9f4(fVar37);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar37 + (float)in_stack_00000040[6]);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x62c);
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                      }
                                      if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x50) != '\0') {
                                        FUN_00e5eda8(lVar16,0);
                                        fVar37 = (float)FUN_00e4eb50();
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        fVar29 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar37 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar29;
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5b838(lVar16,0);
                                        fVar37 = (float)FUN_00e4eb50();
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar29;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar37 + (float)in_stack_00000040[3]);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5eea4(lVar16,0);
                                        fVar37 = (float)FUN_00e4eb50();
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar29;
                                        fVar36 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar37 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar36;
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        FUN_00e5b7d8(lVar16,0);
                                        fVar37 = (float)FUN_00e4eb50();
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar37 + (float)in_stack_00000040[6]);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x62c);
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                      }
                                      lVar18 = *(long *)(lVar16 + 0xc0);
                                      if (lVar18 == 0) goto LAB_00e443fc;
                                      if (*(char *)(lVar18 + 0x60) != '\0') {
                                        uVar25 = *(undefined8 *)(lVar18 + 0x68);
                                        uVar21 = FUN_00e5eda8(lVar16,0);
                                        fVar37 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        fVar29 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc0] =
                                             CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >>
                                                                      0x20),
                                                      fVar37 + (float)unaff_x19[0xc0]);
                                        *(float *)(unaff_x19 + 0xc1) = fVar29;
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar25 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                                        uVar21 = FUN_00e5b838(lVar16,0);
                                        fVar37 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar29;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[3] =
                                             CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3]
                                                                      >> 0x20),
                                                      fVar37 + (float)in_stack_00000040[3]);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x614) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x614);
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar25 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                                        uVar21 = FUN_00e5eea4(lVar16,0);
                                        fVar37 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25);
                                        lVar16 = unaff_x19[0xca];
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar29;
                                        fVar36 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        unaff_x19[0xc3] =
                                             CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >>
                                                                      0x20),
                                                      fVar37 + (float)unaff_x19[0xc3]);
                                        *(float *)(unaff_x19 + 0xc4) = fVar36;
                                        if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0))
                                        goto LAB_00e443fc;
                                        uVar25 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                                        uVar21 = FUN_00e5b7d8(lVar16,0);
                                        fVar37 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25);
                                        *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                        *(float *)(unaff_x19 + 200) = fVar36;
                                        *(float *)((long)unaff_x19 + 0x644) = fVar38;
                                        in_stack_00000040[6] =
                                             CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6]
                                                                      >> 0x20),
                                                      fVar37 + (float)in_stack_00000040[6]);
                                        *(float *)((long)unaff_x19 + 0x62c) =
                                             fVar38 + *(float *)((long)unaff_x19 + 0x62c);
                                      }
                                    }
                                  }
                                }
                                in_stack_00000068 = (int)in_stack_00000050 << 2;
                                if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2))
                                {
LAB_00e3cd74:
                                  if (*(char *)((long)unaff_x19 + 300) == '\0') {
                                    in_stack_00000040[0x1e] = unaff_x19[0x24];
                                  }
                                  else {
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
                                    in_stack_00000040[0x1e] =
                                         CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                                  (float)((ulong)uVar21 >> 0x20),
                                                  (float)unaff_x19[0x24] * (float)uVar21);
                                  }
                                  lVar16 = unaff_x19[0x5e];
                                  *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar37 = (float)FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  fVar36 = *(float *)((long)unaff_x19 + 0x674);
                                  uVar12 = (ulong)(int)in_stack_00000068;
                                  *(float *)(lVar16 + uVar12 * 0xc + 0x20) =
                                       fVar37 + fVar36 + *(float *)(unaff_x19 + 0xc0) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  fVar37 = *(float *)((long)unaff_x19 + 0x604);
                                  *(float *)(lVar16 + uVar12 * 0xc + 0x24) =
                                       fVar36 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eda8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  *(float *)(lVar16 + uVar12 * 0xc + 0x28) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)(unaff_x19 + 0xc1) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar37 = (float)FUN_00e5b838(*in_stack_00000060,0);
                                  uVar13 = uVar12 | 1;
                                  uVar23 = (uint)uVar13;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                  fVar36 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar16 + uVar13 * 0xc + 0x20) =
                                       fVar37 + fVar36 + *(float *)((long)unaff_x19 + 0x60c) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b838(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                  fVar37 = *(float *)(unaff_x19 + 0xc2);
                                  *(float *)(lVar16 + uVar13 * 0xc + 0x24) =
                                       fVar36 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b838(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                  *(float *)(lVar16 + uVar13 * 0xc + 0x28) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)((long)unaff_x19 + 0x614) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar37 = (float)FUN_00e5eea4(*in_stack_00000060,0);
                                  uVar26 = uVar12 | 2;
                                  uVar24 = (uint)uVar26;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                  fVar36 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar16 + uVar26 * 0xc + 0x20) =
                                       fVar37 + fVar36 + *(float *)(unaff_x19 + 0xc3) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eea4(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                  fVar37 = *(float *)((long)unaff_x19 + 0x61c);
                                  *(float *)(lVar16 + uVar26 * 0xc + 0x24) =
                                       fVar36 + *(float *)(unaff_x19 + 0xcf) + fVar37 +
                                       *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eea4(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                  *(float *)(lVar16 + uVar26 * 0xc + 0x28) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x67c) +
                                       *(float *)(unaff_x19 + 0xc4) +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  fVar37 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
                                  uVar27 = uVar12 | 3;
                                  uVar17 = (uint)uVar27;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                  fVar36 = *(float *)((long)unaff_x19 + 0x674);
                                  *(float *)(lVar16 + uVar27 * 0xc + 0x20) =
                                       fVar37 + fVar36 + *(float *)((long)unaff_x19 + 0x624) +
                                       *(float *)((long)unaff_x19 + 0x5f4) +
                                       *(float *)(unaff_x19 + 0xc6) +
                                       *(float *)((long)unaff_x19 + 0x6e4);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b7d8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                  uVar9 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                                  *(float *)(lVar16 + uVar27 * 0xc + 0x24) =
                                       fVar36 + *(float *)(unaff_x19 + 0xcf) +
                                       *(float *)(unaff_x19 + 0xc5) + *(float *)(unaff_x19 + 0xbf) +
                                       *(float *)((long)unaff_x19 + 0x634) +
                                       *(float *)(unaff_x19 + 0xdd);
                                  lVar16 = unaff_x19[0x5e];
                                  if ((lVar16 == 0) || (*in_stack_00000060 == 0.0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b7d8(*in_stack_00000060,0);
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                  fVar37 = *(float *)((long)unaff_x19 + 0x62c);
                                  *(float *)(lVar16 + uVar27 * 0xc + 0x28) =
                                       (float)uVar9 + *(float *)((long)unaff_x19 + 0x67c) + fVar37 +
                                       *(float *)((long)unaff_x19 + 0x5fc) +
                                       *(float *)(unaff_x19 + 199) +
                                       *(float *)((long)unaff_x19 + 0x6ec);
                                  lVar16 = unaff_x19[0xca];
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  lVar18 = *in_stack_00000020;
                                  if (*(char *)(lVar16 + 0x108) == '\0') {
                                    uVar33 = FUN_0272b9dc(lVar16 + 0x10,0);
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar12 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar33;
                                    *(float *)(lVar18 + 0x24) = fVar37;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar13 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar26 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar27 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar33 = FUN_00e5ecc0(*in_stack_00000060,0);
                                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    FUN_00e5ecc0(unaff_x19[0xca],0);
                                    *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                                    unaff_x26 = in_stack_00000030;
                                  }
                                  else {
                                    if ((*(long *)(lVar16 + 0x100) == 0) ||
                                       (uVar33 = FUN_00e5dd14(fStack0000000000000048,
                                                              *(long *)(lVar16 + 0x100),
                                                              *(undefined4 *)(lVar16 + 0x10c),0),
                                       lVar18 == 0)) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar18 = lVar18 + uVar12 * 8;
                                    *(undefined4 *)(lVar18 + 0x20) = uVar33;
                                    *(float *)(lVar18 + 0x24) = fVar37;
                                    dVar15 = *in_stack_00000060;
                                    if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = FUN_00e5de6c(fStack0000000000000048,
                                                          *(long *)((long)dVar15 + 0x100),
                                                          *(undefined4 *)((long)dVar15 + 0x10c),0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar13 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    dVar15 = *in_stack_00000060;
                                    if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = FUN_00e5dea4(fStack0000000000000048,
                                                          *(long *)((long)dVar15 + 0x100),
                                                          *(undefined4 *)((long)dVar15 + 0x10c),0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar26 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    dVar15 = *in_stack_00000060;
                                    if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    lVar16 = *in_stack_00000020;
                                    uVar33 = thunk_FUN_00e5dd60(fStack0000000000000048,
                                                                *(long *)((long)dVar15 + 0x100),
                                                                *(undefined4 *)
                                                                 ((long)dVar15 + 0x10c),0);
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    lVar16 = lVar16 + uVar27 * 8;
                                    *(undefined4 *)(lVar16 + 0x20) = uVar33;
                                    *(float *)(lVar16 + 0x24) = fVar37;
                                    dVar15 = *in_stack_00000060;
                                    if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0))
                                    goto LAB_00e443fc;
                                    uVar33 = FUN_00e5dedc(fStack0000000000000048,
                                                          *(long *)((long)dVar15 + 0x100),
                                                          *(undefined4 *)((long)dVar15 + 0x10c),0);
                                    lVar16 = unaff_x19[0xca];
                                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
                                    *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
                                    if ((lVar16 == 0) ||
                                       (lVar18 = *(long *)(lVar16 + 0x100), lVar18 == 0))
                                    goto LAB_00e443fc;
                                    unaff_x26 = in_stack_00000030;
                                    if (((1 < *(int *)(lVar18 + 0x28)) &&
                                        (0.0 < *(float *)(lVar18 + 0x34))) &&
                                       (*(int *)(lVar16 + 0x10c) < 0)) {
                                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                    }
                                  }
                                }
                                else {
                                  dVar15 = *in_stack_00000060;
                                  if (dVar15 == 0.0) goto LAB_00e443fc;
                                  uVar9 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                                  if ((*(float *)((long)dVar15 + 0x48) +
                                       *(float *)((long)dVar15 + 0x84) +
                                      *(float *)((long)unaff_x19 + 0x634)) -
                                      *(float *)((long)unaff_x19 + 0x53c) <=
                                      DAT_028aa038 - *(float *)(unaff_x19 + 0x2f))
                                  goto LAB_00e3cd74;
                                  lVar16 = *in_stack_00000038;
                                  if (DAT_03774d76 == '\0') {
                                    thunk_FUN_00d48444(puVar5);
                                    DAT_03774d76 = '\x01';
                                  }
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  uVar33 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                  uVar12 = (ulong)(int)in_stack_00000068;
                                  lVar16 = lVar16 + uVar12 * 0xc;
                                  *(undefined8 *)(lVar16 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                  *(undefined4 *)(lVar16 + 0x28) = uVar33;
                                  lVar16 = *in_stack_00000038;
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 1))
                                  goto LAB_00e44400;
                                  lVar16 = lVar16 + (uVar12 | 1) * 0xc;
                                  uVar33 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                  *(undefined8 *)(lVar16 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                  *(undefined4 *)(lVar16 + 0x28) = uVar33;
                                  lVar16 = *in_stack_00000038;
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 2))
                                  goto LAB_00e44400;
                                  lVar16 = lVar16 + (uVar12 | 2) * 0xc;
                                  uVar33 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                  *(undefined8 *)(lVar16 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                  *(undefined4 *)(lVar16 + 0x28) = uVar33;
                                  lVar16 = *in_stack_00000038;
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 3))
                                  goto LAB_00e44400;
                                  lVar16 = lVar16 + (uVar12 | 3) * 0xc;
                                  uVar33 = *(undefined4 *)
                                            (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                  *(undefined8 *)(lVar16 + 0x20) =
                                       **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                  *(undefined4 *)(lVar16 + 0x28) = uVar33;
                                }
                                if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar12 = FUN_02681b9c(uVar21,0,0);
                                if ((uVar12 & 1) == 0) {
                                  lVar16 = unaff_x19[0x10];
                                }
                                else {
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xf8),
                                     lVar16 == 0)) goto LAB_00e443fc;
                                  lVar16 = *(long *)(lVar16 + 0x18);
                                }
                                if (((lVar16 == 0) || (lVar16 = FUN_0272bcf4(lVar16,0), lVar16 == 0)
                                    ) || (plVar10 = (long *)FUN_0267dac8(lVar16,0),
                                         plVar10 == (long *)0x0)) goto LAB_00e443fc;
                                iVar8 = (**(code **)(*plVar10 + 0x188))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 400));
                                *(float *)(unaff_x19 + 0xda) = (float)iVar8;
                                iVar8 = (**(code **)(*plVar10 + 0x1a8))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar8;
                                *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                                *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                                     *(undefined4 *)((long)unaff_x19 + 0x6cc);
                                puVar5 = 
                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                ;
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                _fStack0000000000000070 =
                                     (double)CONCAT44((float)iVar8,(int)unaff_x19[0xda]);
                                in_stack_00000078 = unaff_x19[0xd9];
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                                             *(undefined8 *)
                                              UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                            );
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                unaff_x22 = (ulong)(int)in_stack_00000068;
                                unaff_x28 = unaff_x22 | 1;
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,
                                             *(undefined8 *)puVar5);
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                unaff_x29 = unaff_x22 | 2;
                                FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,
                                             *(undefined8 *)puVar5);
                                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                unaff_x21 = unaff_x22 | 3;
                                FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,
                                             *(undefined8 *)puVar5);
                                plVar28 = (long *)StringLiteral_9119;
                                lVar16 = unaff_x19[0x60];
                                if (lVar16 == 0) goto LAB_00e443fc;
                                if ((*(uint *)(lVar16 + 0x18) <= in_stack_00000068) ||
                                   (uVar23 = (uint)unaff_x21, *(uint *)(lVar16 + 0x18) <= uVar23))
                                goto LAB_00e44400;
                                lVar18 = unaff_x19[0xca];
                                fVar37 = 0.0;
                                if (*(float *)(lVar16 + 0x20 + unaff_x22 * 8) !=
                                    *(float *)(lVar16 + 0x20 + unaff_x21 * 8)) {
                                  fVar37 = fVar32;
                                }
                                *(float *)(unaff_x19 + 0xda) = fVar37;
                                if (lVar18 == 0) goto LAB_00e443fc;
                                cVar4 = *(char *)(lVar18 + 0x108);
                                fVar37 = fVar32;
                                if (cVar4 != '\0' || 0x7fffffff < *(uint *)(lVar18 + 0x138)) {
                                  fVar37 = -1.0;
                                }
                                *(float *)((long)unaff_x19 + 0x6d4) =
                                     *(float *)(lVar18 + 0x84) * fVar37;
                                if (cVar4 == '\0') {
                                  iVar39 = *(int *)(lVar18 + 0x160);
                                  iVar8 = (**(code **)(*plVar10 + 0x188))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 400));
                                  uVar9 = 0x3e800000;
                                  *(float *)(unaff_x19 + 0xdb) =
                                       (float)iVar39 / ((float)iVar8 * 0.25);
                                  if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                  iVar39 = *(int *)(unaff_x19[0xca] + 0x160);
                                  iVar8 = (**(code **)(*plVar10 + 0x1a8))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                  fVar36 = (float)iVar39;
                                  fVar37 = (float)iVar8;
                                  puVar19 = (undefined8 *)
                                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                  ;
                                }
                                else {
                                  if (*(long *)(lVar18 + 0x100) == 0) goto LAB_00e443fc;
                                  fVar37 = (float)FUN_00e5df18(*(long *)(lVar18 + 0x100),0);
                                  puVar19 = (undefined8 *)
                                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                  ;
                                  if (((*in_stack_00000060 == 0.0) ||
                                      (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100),
                                      lVar16 == 0)) ||
                                     (plVar10 = *(long **)(lVar16 + 0x18), plVar10 == (long *)0x0))
                                  goto LAB_00e443fc;
                                  iVar8 = (**(code **)(*plVar10 + 0x188))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 400));
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100),
                                     lVar16 == 0)) goto LAB_00e443fc;
                                  fVar36 = 0.25;
                                  *(float *)(unaff_x19 + 0xdb) =
                                       fVar37 / (*(float *)(lVar16 + 0x40) * (float)iVar8 * 0.25);
                                  FUN_00e5df18(lVar16,0);
                                  if ((unaff_x19[0xca] == 0) ||
                                     ((lVar16 = *(long *)(unaff_x19[0xca] + 0x100), lVar16 == 0 ||
                                      (plVar10 = *(long **)(lVar16 + 0x18), plVar10 == (long *)0x0))
                                     )) goto LAB_00e443fc;
                                  iVar8 = (**(code **)(*plVar10 + 0x1a8))
                                                    (plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100),
                                     lVar16 == 0)) goto LAB_00e443fc;
                                  fVar37 = *(float *)(lVar16 + 0x44) * (float)iVar8;
                                }
                                fVar38 = 0.25;
                                fVar36 = fVar36 / (fVar37 * 0.25);
                                *(float *)((long)unaff_x19 + 0x6dc) = fVar36;
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                in_stack_00000078 = CONCAT44(fVar36,(int)unaff_x19[0xdb]);
                                FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                in_stack_00000078 = unaff_x19[0xdb];
                                _fStack0000000000000070 = (double)unaff_x19[0xda];
                                FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,
                                             *puVar19);
                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar12 = FUN_02681b9c(uVar21,0,0);
                                fVar37 = (float)uVar9;
                                uVar17 = (uint)unaff_x28;
                                uVar24 = (uint)unaff_x29;
                                if ((uVar12 & 1) != 0) {
                                  if (in_stack_00000050 == in_stack_00000010) {
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    fVar36 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
                                    uVar9 = (ulong)(uint)fVar37;
                                    if (fVar37 * fVar37 +
                                        (fVar36 - *pfVar14) * (fVar36 - *pfVar14) +
                                        (fVar38 - pfVar14[1]) * (fVar38 - pfVar14[1]) < DAT_028aa020
                                       ) goto LAB_00e3dbd8;
                                  }
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xb0),
                                     lVar16 == 0)) goto LAB_00e443fc;
                                  uVar21 = *(undefined8 *)(lVar16 + 0x38);
                                  if (DAT_03774d77 == '\0') {
                                    thunk_FUN_00d48444(
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  );
                                    DAT_03774d77 = '\x01';
                                  }
                                  fVar37 = (float)uVar21 -
                                           (float)**(undefined8 **)
                                                    (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8);
                                  fVar36 = (float)((ulong)uVar21 >> 0x20) -
                                           (float)((ulong)**(undefined8 **)
                                                            (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                                  if (DAT_028aa020 <= fVar37 * fVar37 + fVar36 * fVar36) {
                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                  }
                                  dVar15 = *in_stack_00000060;
                                  if ((dVar15 == 0.0) ||
                                     (lVar16 = *(long *)((long)dVar15 + 0xb0), lVar16 == 0))
                                  goto LAB_00e443fc;
                                  fVar36 = fStack0000000000000048 * *(float *)(lVar16 + 0x38);
                                  *(float *)(unaff_x19 + 0xc9) = fVar36;
                                  fVar37 = fStack0000000000000048 * *(float *)(lVar16 + 0x3c);
                                  *(float *)((long)unaff_x19 + 0x64c) = fVar37;
                                  if (*(char *)(lVar16 + 0x25) != '\0') {
                                    fVar30 = 1.0 / *(float *)((long)dVar15 + 0x84);
                                  }
                                  lVar16 = *in_stack_00000038;
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  lVar18 = lVar16 + unaff_x22 * 0xc;
                                  fVar38 = *(float *)(lVar18 + 0x20);
                                  uVar21 = *(undefined8 *)(lVar18 + 0x24);
                                  *(float *)(unaff_x19 + 0xcd) = fVar38;
                                  in_stack_00000040[0xf] = uVar21;
                                  *(float *)(unaff_x19 + 0xd0) = fVar38;
                                  fVar29 = (float)uVar21;
                                  *(float *)((long)unaff_x19 + 0x684) = fVar29;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                  lVar18 = lVar16 + unaff_x28 * 0xc;
                                  uVar33 = *(undefined4 *)(lVar18 + 0x20);
                                  uVar21 = *(undefined8 *)(lVar18 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
                                  in_stack_00000040[0xf] = uVar21;
                                  *(undefined4 *)(unaff_x19 + 0xd2) = uVar33;
                                  *(int *)((long)unaff_x19 + 0x694) = (int)uVar21;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                  lVar18 = lVar16 + unaff_x29 * 0xc;
                                  uVar33 = *(undefined4 *)(lVar18 + 0x20);
                                  uVar21 = *(undefined8 *)(lVar18 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
                                  in_stack_00000040[0xf] = uVar21;
                                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar33;
                                  *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar21;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                  lVar16 = lVar16 + unaff_x21 * 0xc;
                                  uVar33 = *(undefined4 *)(lVar16 + 0x20);
                                  uVar21 = *(undefined8 *)(lVar16 + 0x24);
                                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
                                  in_stack_00000040[0xf] = uVar21;
                                  *(undefined4 *)(unaff_x19 + 0xd6) = uVar33;
                                  *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar21;
                                  lVar16 = *(long *)((long)dVar15 + 0xb0);
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(char *)(lVar16 + 0x24) == '\0') {
                                    lVar18 = *in_stack_00000028;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    uVar3 = *(uint *)(lVar18 + 0x18);
                                    if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
                                    lVar11 = lVar18 + unaff_x22 * 8;
                                    *(float *)(lVar11 + 0x20) =
                                         (fVar36 + fVar30 * fVar38) - *(float *)(lVar16 + 0x30);
                                    *(float *)(lVar11 + 0x24) =
                                         (fVar37 + fVar30 * fVar29) - *(float *)(lVar16 + 0x34);
                                    if (((uVar3 <= uVar17) ||
                                        (*(ulong *)(lVar18 + unaff_x28 * 8 + 0x20) =
                                              CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) *
                                                        fVar30 + (float)((ulong)unaff_x19[0xc9] >>
                                                                        0x20)) -
                                                       (float)((ulong)*(undefined8 *)(lVar16 + 0x30)
                                                              >> 0x20),
                                                       ((float)unaff_x19[0xd2] * fVar30 +
                                                       (float)unaff_x19[0xc9]) -
                                                       (float)*(undefined8 *)(lVar16 + 0x30)),
                                        uVar3 <= uVar24)) ||
                                       (*(ulong *)(lVar18 + unaff_x29 * 8 + 0x20) =
                                             CONCAT44((fVar30 * (float)((ulong)unaff_x19[0xd4] >>
                                                                       0x20) +
                                                      (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x30)
                                                             >> 0x20),
                                                      (fVar30 * (float)unaff_x19[0xd4] +
                                                      (float)unaff_x19[0xc9]) -
                                                      (float)*(undefined8 *)(lVar16 + 0x30)),
                                       uVar3 <= uVar23)) goto LAB_00e44400;
                                    uVar9 = unaff_x19[0xc9];
                                    *(ulong *)(lVar18 + unaff_x21 * 8 + 0x20) =
                                         CONCAT44((fVar30 * (float)((ulong)unaff_x19[0xd6] >> 0x20)
                                                  + (float)(uVar9 >> 0x20)) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  (fVar30 * (float)unaff_x19[0xd6] + (float)uVar9) -
                                                  (float)*(undefined8 *)(lVar16 + 0x30));
                                  }
                                  else {
                                    fVar35 = *(float *)((long)dVar15 + 0x44);
                                    *(float *)(unaff_x19 + 0xd8) = fVar35;
                                    fVar2 = *(float *)((long)dVar15 + 0x48);
                                    lVar18 = unaff_x19[0x61];
                                    *(float *)((long)unaff_x19 + 0x6c4) = fVar2;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    uVar3 = *(uint *)(lVar18 + 0x18);
                                    if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
                                    lVar11 = lVar18 + unaff_x22 * 8;
                                    *(float *)(lVar11 + 0x20) =
                                         (fVar36 + fVar30 * (fVar38 - fVar35)) -
                                         *(float *)(lVar16 + 0x30);
                                    *(float *)(lVar11 + 0x24) =
                                         (fVar37 + fVar30 * (fVar29 - fVar2)) -
                                         *(float *)(lVar16 + 0x34);
                                    if (((uVar3 <= uVar17) ||
                                        (*(ulong *)(lVar18 + unaff_x28 * 8 + 0x20) =
                                              CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                       ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                                       (float)((ulong)unaff_x19[0xd8] >> 0x20)) *
                                                       fVar30) - (float)((ulong)*(undefined8 *)
                                                                                 (lVar16 + 0x30) >>
                                                                        0x20),
                                                       ((float)unaff_x19[0xc9] +
                                                       ((float)unaff_x19[0xd2] -
                                                       (float)unaff_x19[0xd8]) * fVar30) -
                                                       (float)*(undefined8 *)(lVar16 + 0x30)),
                                        uVar3 <= uVar24)) ||
                                       (*(ulong *)(lVar18 + unaff_x29 * 8 + 0x20) =
                                             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                      fVar30 * ((float)((ulong)unaff_x19[0xd4] >>
                                                                       0x20) -
                                                               (float)((ulong)unaff_x19[0xd8] >>
                                                                      0x20))) -
                                                      (float)((ulong)*(undefined8 *)(lVar16 + 0x30)
                                                             >> 0x20),
                                                      ((float)unaff_x19[0xc9] +
                                                      fVar30 * ((float)unaff_x19[0xd4] -
                                                               (float)unaff_x19[0xd8])) -
                                                      (float)*(undefined8 *)(lVar16 + 0x30)),
                                       uVar3 <= uVar23)) goto LAB_00e44400;
                                    uVar9 = unaff_x19[0xd8];
                                    *(ulong *)(lVar18 + unaff_x21 * 8 + 0x20) =
                                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                  fVar30 * ((float)((ulong)unaff_x19[0xd6] >> 0x20)
                                                           - (float)(uVar9 >> 0x20))) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  ((float)unaff_x19[0xc9] +
                                                  fVar30 * ((float)unaff_x19[0xd6] - (float)uVar9))
                                                  - (float)*(undefined8 *)(lVar16 + 0x30));
                                  }
                                }
LAB_00e3dbd8:
                                unaff_x24 = 0xc;
                                dVar15 = *in_stack_00000060;
                                if (dVar15 == 0.0) goto LAB_00e443fc;
                                if (*(char *)((long)dVar15 + 0x108) != '\0') {
                                  if (*(long *)((long)dVar15 + 0x100) == 0) goto LAB_00e443fc;
                                  if (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20) == '\0') {
                                    lVar16 = *in_stack_00000020;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar18 = *in_stack_00000028;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(undefined8 *)(lVar18 + unaff_x22 * 8 + 0x20) =
                                         *(undefined8 *)(lVar16 + unaff_x22 * 8 + 0x20);
                                    lVar16 = *in_stack_00000020;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    lVar18 = *in_stack_00000028;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_00e44400;
                                    *(undefined8 *)(lVar18 + (long)(int)uVar17 * 8 + 0x20) =
                                         *(undefined8 *)(lVar16 + (long)(int)uVar17 * 8 + 0x20);
                                    lVar16 = *in_stack_00000020;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    lVar18 = *in_stack_00000028;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_00e44400;
                                    *(undefined8 *)(lVar18 + (long)(int)uVar24 * 8 + 0x20) =
                                         *(undefined8 *)(lVar16 + (long)(int)uVar24 * 8 + 0x20);
                                    lVar16 = *in_stack_00000020;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    lVar18 = *in_stack_00000028;
                                    if (lVar18 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(undefined8 *)(lVar18 + unaff_x21 * 8 + 0x20) =
                                         *(undefined8 *)(lVar16 + unaff_x21 * 8 + 0x20);
                                    dVar15 = *in_stack_00000060;
                                    if (dVar15 == 0.0) goto LAB_00e443fc;
                                  }
                                }
                                dVar34 = DAT_028aa048;
                                in_stack_00000058 = unaff_x21;
                                if (*(char *)((long)dVar15 + 0x108) != '\0') {
                                  if (*(long *)((long)dVar15 + 0x100) == 0) goto LAB_00e443fc;
                                  if (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20) == '\0') {
                                    lVar16 = *unaff_x26;
                                    dVar15 = modf(DAT_028aa048,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = 255.0;
                                    }
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                    lVar16 = *unaff_x26;
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = 255.0;
                                    }
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                    *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                         (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                    lVar16 = *unaff_x26;
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = 255.0;
                                    }
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                    *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                         (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                    lVar16 = *unaff_x26;
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = 255.0;
                                    }
                                    dVar15 = modf(dVar34,(double *)&stack0x00000070);
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = 255.0;
                                    }
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                         (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                    goto LAB_00e43400;
                                  }
                                }
                                uVar21 = *(undefined8 *)((long)dVar15 + 0xa8);
                                if (*(int *)(*(long *)
                                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar12 = FUN_02681b9c(uVar21,0,0);
                                dVar15 = *in_stack_00000060;
                                if (dVar15 == 0.0) goto LAB_00e443fc;
                                if ((uVar12 & 1) == 0) {
                                  uVar21 = *(undefined8 *)((long)dVar15 + 0xb0);
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar12 = FUN_02681b9c(uVar21,0,0);
                                  dVar15 = DAT_028aa048;
                                  if ((uVar12 & 1) == 0) {
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar9 = FUN_02681b9c(uVar21,0,0);
                                    lVar16 = *unaff_x26;
                                    if ((uVar9 & 1) == 0) {
                                      fVar32 = *(float *)((long)unaff_x19 + 0x8c);
                                      fVar37 = *(float *)(unaff_x19 + 0x12);
                                      fVar38 = *(float *)((long)unaff_x19 + 0x94);
                                      fVar36 = *(float *)(unaff_x19 + 0x13);
                                      fVar30 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar30 = 1.0;
                                      }
                                      fVar30 = fVar30 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar32 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fd48;
                                        }
                                        fVar37 = (float)(int)(fVar32 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar32 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar38 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar36 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar36 = (float)(int)(fVar38 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar36 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar36 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar36 = (float)(int)(fVar38 + -0.5);
                                      }
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                      fVar32 = *(float *)(unaff_x19 + 0x12);
                                      lVar16 = unaff_x19[0x5f];
                                      fVar36 = *(float *)((long)unaff_x19 + 0x94);
                                      fVar37 = *(float *)(unaff_x19 + 0x13);
                                      fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                      if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar38 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e40610;
                                        }
                                        fVar38 = (float)(int)(fVar38 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      fVar32 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar36 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar36 = 1.0;
                                      }
                                      fVar36 = fVar36 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar36 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                      if (0.0 <= fVar36) {
                                        if (dVar15 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar37 = (float)(int)(fVar36 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar36 + -0.5);
                                      }
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                      *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                      fVar32 = *(float *)(unaff_x19 + 0x12);
                                      lVar16 = unaff_x19[0x5f];
                                      fVar36 = *(float *)((long)unaff_x19 + 0x94);
                                      fVar37 = *(float *)(unaff_x19 + 0x13);
                                      fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                      if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar38 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e40e20;
                                        }
                                        fVar38 = (float)(int)(fVar38 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      fVar32 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar36 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar36 = 1.0;
                                      }
                                      fVar36 = fVar36 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar36 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                      if (0.0 <= fVar36) {
                                        if (dVar15 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar37 = (float)(int)(fVar36 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar36 + -0.5);
                                      }
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                      *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                      fVar30 = *(float *)((long)unaff_x19 + 0x8c);
                                      fVar32 = *(float *)(unaff_x19 + 0x12);
                                      lVar16 = unaff_x19[0x5f];
                                      fVar36 = *(float *)((long)unaff_x19 + 0x94);
                                      fVar37 = *(float *)(unaff_x19 + 0x13);
                                    }
                                    else {
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                         lVar18 == 0)) goto LAB_00e443fc;
                                      fVar32 = *(float *)(lVar18 + 0x18);
                                      fVar37 = *(float *)(lVar18 + 0x1c);
                                      fVar38 = *(float *)(lVar18 + 0x20);
                                      fVar36 = *(float *)(lVar18 + 0x24);
                                      fVar30 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar30 = 1.0;
                                      }
                                      fVar30 = fVar30 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar32 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fcc4;
                                        }
                                        fVar37 = (float)(int)(fVar32 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar32 = fVar38;
                                      if (1.0 < fVar38) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar38 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar38 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar36 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar36 = (float)(int)(fVar38 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar36 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar36 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar36 = (float)(int)(fVar38 + -0.5);
                                      }
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                         lVar16 == 0)) goto LAB_00e443fc;
                                      fVar32 = *(float *)(lVar16 + 0x1c);
                                      lVar18 = *unaff_x26;
                                      fVar36 = *(float *)(lVar16 + 0x20);
                                      fVar37 = *(float *)(lVar16 + 0x24);
                                      fVar30 = *(float *)(lVar16 + 0x18) * 255.0;
                                      if (*(float *)(lVar16 + 0x18) < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar38 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e4057c;
                                        }
                                        fVar38 = (float)(int)(fVar38 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      fVar32 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar36 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar36 = 1.0;
                                      }
                                      fVar36 = fVar36 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar36 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                      if (0.0 <= fVar36) {
                                        if (dVar15 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar37 = (float)(int)(fVar36 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar36 + -0.5);
                                      }
                                      if (lVar18 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_00e44400;
                                      *(uint *)(lVar18 + (long)(int)uVar17 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                         lVar16 == 0)) goto LAB_00e443fc;
                                      fVar32 = *(float *)(lVar16 + 0x1c);
                                      lVar18 = *unaff_x26;
                                      fVar36 = *(float *)(lVar16 + 0x20);
                                      fVar37 = *(float *)(lVar16 + 0x24);
                                      fVar30 = *(float *)(lVar16 + 0x18) * 255.0;
                                      if (*(float *)(lVar16 + 0x18) < 0.0) {
                                        fVar30 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar15 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar30 = (float)(int)(fVar30 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar38 = fVar32;
                                      if (1.0 < fVar32) {
                                        fVar38 = 1.0;
                                      }
                                      fVar38 = fVar38 * 255.0;
                                      if (fVar32 < 0.0) {
                                        fVar38 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                      if (0.0 <= fVar38) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e40d8c;
                                        }
                                        fVar38 = (float)(int)(fVar38 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                        fVar38 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar38 = fVar32;
                                        }
                                      }
                                      else {
                                        fVar38 = (float)(int)(fVar38 + -0.5);
                                      }
                                      fVar32 = fVar36;
                                      if (1.0 < fVar36) {
                                        fVar32 = 1.0;
                                      }
                                      fVar32 = fVar32 * 255.0;
                                      if (fVar36 < 0.0) {
                                        fVar32 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                      if (0.0 <= fVar32) {
                                        if (dVar15 == 0.5) {
                                          fVar32 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar32 = (float)(int)(fVar32 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + -0.5);
                                      }
                                      fVar36 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar36 = 1.0;
                                      }
                                      fVar36 = fVar36 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar36 = fVar31;
                                      }
                                      dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                      if (0.0 <= fVar36) {
                                        if (dVar15 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar37 = (float)(int)(fVar36 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar36 + -0.5);
                                      }
                                      if (lVar18 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_00e44400;
                                      *(uint *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) =
                                           (int)fVar30 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                           ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar18 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                         lVar18 == 0)) goto LAB_00e443fc;
                                      fVar30 = *(float *)(lVar18 + 0x18);
                                      fVar32 = *(float *)(lVar18 + 0x1c);
                                      lVar16 = *unaff_x26;
                                      fVar36 = *(float *)(lVar18 + 0x20);
                                      fVar37 = *(float *)(lVar18 + 0x24);
                                    }
                                    fVar38 = fVar30 * 255.0;
                                    if (fVar30 < 0.0) {
                                      fVar38 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar15 == 0.5) {
                                        fVar30 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar30 = (float)(int)(fVar38 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar38 + -0.5);
                                    }
                                    fVar38 = fVar32;
                                    if (1.0 < fVar32) {
                                      fVar38 = 1.0;
                                    }
                                    fVar38 = fVar38 * 255.0;
                                    if (fVar32 < 0.0) {
                                      fVar38 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
                                    if (0.0 <= fVar38) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        goto LAB_00e412dc;
                                      }
                                      fVar38 = (float)(int)(fVar38 + 0.5);
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                                      fVar38 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar38 = fVar32;
                                      }
                                    }
                                    else {
                                      fVar38 = (float)(int)(fVar38 + -0.5);
                                    }
                                    fVar32 = fVar36;
                                    if (1.0 < fVar36) {
                                      fVar32 = 1.0;
                                    }
                                    fVar32 = fVar32 * 255.0;
                                    if (fVar36 < 0.0) {
                                      fVar32 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                    if (0.0 <= fVar32) {
                                      if (dVar15 == 0.5) {
                                        fVar32 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar32 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar32 = (float)(int)(fVar32 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar32 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar32 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar32 = (float)(int)(fVar32 + -0.5);
                                    }
                                    uVar9 = 0x3f800000;
                                    fVar36 = fVar37;
                                    if (1.0 < fVar37) {
                                      fVar36 = 1.0;
                                    }
                                    fVar36 = fVar36 * 255.0;
                                    if (fVar37 < 0.0) {
                                      fVar36 = fVar31;
                                    }
                                    dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                    if (0.0 <= fVar36) {
                                      if (dVar15 == 0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar36 + 0.5);
                                      }
                                    }
                                    else if (dVar15 == -0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = (float)(int)(fVar36 + -0.5);
                                    }
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                    *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                         (int)fVar30 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                                         ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    goto LAB_00e43400;
                                  }
                                  lVar16 = *unaff_x26;
                                  dVar34 = modf(DAT_028aa048,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar32 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = 255.0;
                                  }
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                       (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  lVar16 = *unaff_x26;
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar32 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = 255.0;
                                  }
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                                  *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                       (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  lVar16 = *unaff_x26;
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar32 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = 255.0;
                                  }
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
                                  *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                       (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  lVar16 = *unaff_x26;
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar32 = 255.0;
                                  }
                                  dVar34 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar34 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = 255.0;
                                  }
                                  dVar15 = modf(dVar15,(double *)&stack0x00000070);
                                  if (dVar15 == 0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = 255.0;
                                  }
                                  if (lVar16 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                                  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                       (int)fVar30 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                  uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar12 = FUN_02681b9c(uVar21,0,0);
                                  if ((uVar12 & 1) != 0) goto code_r0x00e3ec9c;
                                  goto LAB_00e43400;
                                }
                                lVar16 = *(long *)((long)dVar15 + 0xa8);
                                if (lVar16 == 0) goto LAB_00e443fc;
                                fVar30 = *(float *)(lVar16 + 0x24);
                                unaff_w25 = 255.0;
                                if (fVar30 != 0.0) {
                                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                }
                                plVar28 = (long *)StringLiteral_9119;
                                unaff_w23 = (uint)*(byte *)(lVar16 + 0x2c);
                                unaff_x20 = *unaff_x26;
                                lVar18 = *(long *)(lVar16 + 0x18);
                                fVar30 = fStack0000000000000048 * fVar30;
                                if (*(int *)(lVar16 + 0x28) != 1) {
                                  lVar11 = *in_stack_00000038;
                                  if (lVar11 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  fVar36 = *(float *)(lVar11 + unaff_x22 * 0xc + 0x20);
                                  fVar38 = *(float *)((long)dVar15 + 0x84);
                                  fVar30 = fVar30 + (fVar36 * *(float *)(lVar16 + 0x20)) / fVar38;
                                  fVar30 = fVar30 - (float)(int)fVar30;
                                  fVar37 = fVar30;
                                  if (1.0 < fVar30) {
                                    fVar37 = fVar32;
                                  }
                                  fVar31 = fVar37;
                                  if (fVar30 < 0.0) {
                                    fVar31 = 0.0;
                                  }
                                  fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
                                  fVar30 = fVar31;
                                  if (1.0 < fVar31) {
                                    fVar30 = fVar32;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar31 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3e0b0;
                                    }
                                    unaff_s14 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                                    unaff_s14 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      unaff_s14 = fVar30;
                                    }
                                  }
                                  else {
                                    unaff_s14 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3ee80;
                                    }
                                    unaff_s9 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                                    unaff_s9 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      unaff_s9 = fVar30;
                                    }
                                  }
                                  else {
                                    unaff_s9 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar36;
                                  if (1.0 < fVar36) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar36 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      unaff_s12 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        unaff_s12 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      unaff_s12 = (float)(int)(fVar30 + 0.5);
                                    }
                                  }
                                  else if (dVar15 == -0.5) {
                                    unaff_s12 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      unaff_s12 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    unaff_s12 = (float)(int)(fVar30 + -0.5);
                                  }
                                  param_1 = fVar38;
                                  if (1.0 < fVar38) {
                                    param_1 = 1.0;
                                  }
                                  param_1 = param_1 * 255.0;
                                  if (fVar38 < 0.0) {
                                    param_1 = 0.0;
                                  }
                                  dVar15 = modf((double)param_1,(double *)&stack0x00000070);
                                  if (0.0 <= param_1) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                      goto joined_r0x00e3f018;
                                    }
                                    param_1 = param_1 + 0.5;
                                    goto code_r0x00e3f010;
                                  }
                                  if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(param_1 + -0.5);
                                  }
                                  goto joined_r0x00e3f018;
                                }
                                if (*(byte *)(lVar16 + 0x2c) == 0) {
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  fVar36 = *(float *)(lVar16 + 0x20);
                                  fVar38 = *(float *)((long)dVar15 + 0x84);
                                  fVar30 = fVar30 + (*(float *)((long)dVar15 + 0x48) * fVar36) /
                                                    fVar38;
                                  fVar30 = fVar30 - (float)(int)fVar30;
                                  fVar37 = fVar30;
                                  if (1.0 < fVar30) {
                                    fVar37 = fVar32;
                                  }
                                  fVar31 = fVar37;
                                  if (fVar30 < 0.0) {
                                    fVar31 = 0.0;
                                  }
                                  fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
                                  fVar30 = fVar31;
                                  if (1.0 < fVar31) {
                                    fVar30 = fVar32;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar31 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3eeac;
                                    }
                                    fVar32 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar32 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e41534;
                                    }
                                    fVar37 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar36;
                                  if (1.0 < fVar36) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar36 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + 0.5);
                                    }
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar36 = fVar38;
                                  if (1.0 < fVar38) {
                                    fVar36 = 1.0;
                                  }
                                  fVar36 = fVar36 * 255.0;
                                  if (fVar38 < 0.0) {
                                    fVar36 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                  if (0.0 <= fVar36) {
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar36 + 0.5);
                                    }
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = (float)(int)(fVar36 + -0.5);
                                  }
                                  if (unaff_x20 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  *(uint *)(unaff_x20 + unaff_x22 * 4 + 0x20) =
                                       (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  dVar15 = *in_stack_00000060;
                                  if (((dVar15 == 0.0) ||
                                      (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                                     (lVar18 = *(long *)(lVar16 + 0x18), lVar18 == 0))
                                  goto LAB_00e443fc;
                                  fVar37 = *(float *)((long)dVar15 + 0x48);
                                  fVar36 = *(float *)((long)dVar15 + 0x84);
                                  lVar11 = *unaff_x26;
                                  fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                           (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
                                  fVar32 = fVar32 - (float)(int)fVar32;
                                  fVar30 = fVar32;
                                  if (1.0 < fVar32) {
                                    fVar30 = 1.0;
                                  }
                                }
                                else {
                                  if (lVar18 == 0) goto LAB_00e443fc;
                                  fVar36 = *(float *)((long)dVar15 + 0x84);
                                  fVar38 = *(float *)(lVar16 + 0x20);
                                  fVar30 = fVar30 + ((*(float *)((long)dVar15 + 0x48) + fVar36) *
                                                    fVar38) / fVar36;
                                  fVar30 = fVar30 - (float)(int)fVar30;
                                  fVar37 = fVar30;
                                  if (1.0 < fVar30) {
                                    fVar37 = fVar32;
                                  }
                                  fVar31 = fVar37;
                                  if (fVar30 < 0.0) {
                                    fVar31 = 0.0;
                                  }
                                  fVar31 = (float)FUN_0269ad38(fVar31,lVar18,0);
                                  fVar30 = fVar31;
                                  if (1.0 < fVar31) {
                                    fVar30 = fVar32;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar31 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3ed6c;
                                    }
                                    fVar32 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                    fVar32 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar32 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar32 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f2ec;
                                    }
                                    fVar37 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar36;
                                  if (1.0 < fVar36) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar36 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar15 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + 0.5);
                                    }
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar36 = fVar38;
                                  if (1.0 < fVar38) {
                                    fVar36 = 1.0;
                                  }
                                  fVar36 = fVar36 * 255.0;
                                  if (fVar38 < 0.0) {
                                    fVar36 = 0.0;
                                  }
                                  dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
                                  if (0.0 <= fVar36) {
                                    if (dVar15 == 0.5) {
                                      fVar36 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar36 = (float)(int)(fVar36 + 0.5);
                                    }
                                  }
                                  else if (dVar15 == -0.5) {
                                    fVar36 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar36 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar36 = (float)(int)(fVar36 + -0.5);
                                  }
                                  if (unaff_x20 == 0) goto LAB_00e443fc;
                                  if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  *(uint *)(unaff_x20 + unaff_x22 * 4 + 0x20) =
                                       (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                                  dVar15 = *in_stack_00000060;
                                  if (((dVar15 == 0.0) ||
                                      (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                                     (lVar18 = *(long *)(lVar16 + 0x18), lVar18 == 0))
                                  goto LAB_00e443fc;
                                  fVar37 = *(float *)((long)dVar15 + 0x84);
                                  fVar36 = *(float *)(lVar16 + 0x20);
                                  lVar11 = *unaff_x26;
                                  fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                           ((*(float *)((long)dVar15 + 0x48) + fVar37) * fVar36) /
                                           fVar37;
                                  fVar32 = fVar32 - (float)(int)fVar32;
                                  fVar30 = fVar32;
                                  if (1.0 < fVar32) {
                                    fVar30 = 1.0;
                                  }
                                }
                                fVar38 = fVar30;
                                if (fVar32 < 0.0) {
                                  fVar38 = 0.0;
                                }
                                fVar38 = (float)FUN_0269ad38(fVar38,lVar18,0);
                                fVar32 = fVar38;
                                if (1.0 < fVar38) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar32 = 0.0;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e419a4;
                                  }
                                  fVar38 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar32;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar32 = fVar30;
                                if (1.0 < fVar30) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar30 < 0.0) {
                                  fVar32 = 0.0;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e41a34;
                                  }
                                  fVar32 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar30 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar30 = 1.0;
                                }
                                fVar30 = fVar30 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar30 = 0.0;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar37 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar37 = 1.0;
                                }
                                fVar37 = fVar37 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar37 = 0.0;
                                }
                                dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                if (0.0 <= fVar37) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + -0.5);
                                }
                                if (lVar11 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_00e44400;
                                *(uint *)(lVar11 + (long)(int)uVar17 * 4 + 0x20) =
                                     (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                dVar15 = *in_stack_00000060;
                                if (((dVar15 == 0.0) ||
                                    (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                                   (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
                                fVar37 = *(float *)((long)dVar15 + 0x48);
                                fVar36 = *(float *)((long)dVar15 + 0x84);
                                lVar18 = *unaff_x26;
                                fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                         (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
                                fVar32 = fVar32 - (float)(int)fVar32;
                                fVar30 = fVar32;
                                if (1.0 < fVar32) {
                                  fVar30 = 1.0;
                                }
                                fVar38 = fVar30;
                                if (fVar32 < 0.0) {
                                  fVar38 = 0.0;
                                }
                                fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
                                fVar32 = fVar38;
                                if (1.0 < fVar38) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar32 = 0.0;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e41cd0;
                                  }
                                  fVar38 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar32;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar32 = fVar30;
                                if (1.0 < fVar30) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar30 < 0.0) {
                                  fVar32 = 0.0;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e41d60;
                                  }
                                  fVar32 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                                  fVar32 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar32 = fVar30;
                                  }
                                }
                                else {
                                  fVar32 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar30 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar30 = 1.0;
                                }
                                fVar30 = fVar30 * 255.0;
                                if (fVar37 < 0.0) {
                                  fVar30 = 0.0;
                                }
                                dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
                                if (0.0 <= fVar30) {
                                  if (dVar15 == 0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + -0.5);
                                }
                                fVar37 = fVar36;
                                if (1.0 < fVar36) {
                                  fVar37 = 1.0;
                                }
                                fVar37 = fVar37 * 255.0;
                                if (fVar36 < 0.0) {
                                  fVar37 = 0.0;
                                }
                                dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                if (0.0 <= fVar37) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + -0.5);
                                }
                                if (lVar18 == 0) goto LAB_00e443fc;
                                if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_00e44400;
                                *(uint *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) =
                                     (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                dVar15 = *in_stack_00000060;
                                if (((dVar15 == 0.0) ||
                                    (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                                   (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
                                fVar37 = *(float *)((long)dVar15 + 0x48);
                                fVar36 = *(float *)((long)dVar15 + 0x84);
                                lVar18 = *unaff_x26;
                                fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                         (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
                                fVar32 = fVar32 - (float)(int)fVar32;
                                fVar30 = fVar32;
                                if (1.0 < fVar32) {
                                  fVar30 = 1.0;
                                }
                                fVar38 = fVar30;
                                if (fVar32 < 0.0) {
                                  fVar38 = 0.0;
                                }
                                fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
                                fVar32 = fVar38;
                                if (1.0 < fVar38) {
                                  fVar32 = 1.0;
                                }
                                uVar9 = 0x437f0000;
                                fVar32 = fVar32 * 255.0;
                                if (fVar38 < 0.0) {
                                  fVar32 = 0.0;
                                }
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                                if (0.0 <= fVar32) {
                                  if (dVar15 == 0.5) {
                                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e41ffc;
                                  }
                                  fVar38 = (float)(int)(fVar32 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = fVar32;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar32 + -0.5);
                                }
                                fVar32 = fVar30;
                                if (1.0 < fVar30) {
                                  fVar32 = 1.0;
                                }
                                fVar32 = fVar32 * 255.0;
                                if (fVar30 < 0.0) {
                                  fVar32 = 0.0;
                                }
LAB_00e42040:
                                dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
                              } while (0.0 <= fVar32);
LAB_00e4204c:
                              if (dVar15 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                fVar32 = fVar30 + -1.0;
LAB_00e425d4:
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = fVar32;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar32 + -0.5);
                              }
                              goto LAB_00e425ec;
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
    if (*(uint *)(lVar18 + 0x18) <= uVar23) goto LAB_00e44400;
    if (lVar11 == 0) goto LAB_00e443fc;
                    /* try { // try from 00e3f0d0 to 00f3f0e3 has its CatchHandler @ 00e3f0f8 */
    fVar36 = *(float *)(lVar18 + (int)uVar23 * unaff_x24 + 0x20);
    fVar38 = *(float *)((long)dVar15 + 0x84);
                    /* try { // try from 00e3f0e4 to 00f3f113 has its CatchHandler @ 00e3f05c */
    fVar30 = fVar30 + (fVar36 * *(float *)(lVar16 + 0x20)) / fVar38;
    fVar30 = fVar30 - (float)(int)fVar30;
    fVar37 = fVar30;
    if (1.0 < fVar30) {
      fVar37 = fVar32;
    }
    fVar31 = fVar37;
    if (fVar30 < 0.0) {
      fVar31 = 0.0;
    }
    fVar31 = (float)FUN_0269ad38(fVar31,lVar11,0);
    fVar30 = fVar31;
    if (1.0 < fVar31) {
      fVar30 = fVar32;
    }
    fVar30 = fVar30 * unaff_w25;
    if (fVar31 < 0.0) {
      fVar30 = 0.0;
    }
    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar15 == 0.5) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3f234;
      }
      fVar32 = (float)(int)(fVar30 + 0.5);
    }
    else if (dVar15 == -0.5) {
      fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = fVar30;
      }
    }
    else {
      fVar32 = (float)(int)(fVar30 + -0.5);
    }
    fVar30 = fVar37;
    if (1.0 < fVar37) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * unaff_w25;
    if (fVar37 < 0.0) {
      fVar30 = 0.0;
    }
    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar15 == 0.5) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3f594;
      }
      fVar37 = (float)(int)(fVar30 + 0.5);
    }
    else if (dVar15 == -0.5) {
      fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = fVar30;
      }
    }
    else {
      fVar37 = (float)(int)(fVar30 + -0.5);
    }
    fVar30 = fVar36;
    if (1.0 < fVar36) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * unaff_w25;
    if (fVar36 < 0.0) {
      fVar30 = 0.0;
    }
    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar15 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar15 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar36 = fVar38;
    if (1.0 < fVar38) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * unaff_w25;
    if (fVar38 < 0.0) {
      fVar36 = 0.0;
    }
    dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar15 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar15 == -0.5) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar36 = (float)(int)(fVar36 + -0.5);
    }
    if (lVar20 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
    *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) =
         (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
         (int)fVar36 << 0x18;
    dVar15 = *in_stack_00000060;
    if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
       (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_00e44400;
    if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
    fVar37 = *(float *)(lVar18 + (int)uVar24 * unaff_x24 + 0x20);
    fVar36 = *(float *)((long)dVar15 + 0x84);
    lVar18 = *unaff_x26;
    fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
             (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
    fVar32 = fVar32 - (float)(int)fVar32;
    fVar30 = fVar32;
    if (1.0 < fVar32) {
      fVar30 = 1.0;
    }
    fVar38 = fVar30;
    if (fVar32 < 0.0) {
      fVar38 = 0.0;
    }
    fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
    fVar32 = fVar38;
    if (1.0 < fVar38) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * unaff_w25;
    if (fVar38 < 0.0) {
      fVar32 = 0.0;
    }
    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar15 == 0.5) {
        fVar32 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3f858;
      }
      fVar38 = (float)(int)(fVar32 + 0.5);
    }
    else if (dVar15 == -0.5) {
      fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar32;
      }
    }
    else {
      fVar38 = (float)(int)(fVar32 + -0.5);
    }
    fVar32 = fVar30;
    if (1.0 < fVar30) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * unaff_w25;
    if (fVar30 < 0.0) {
      fVar32 = 0.0;
    }
    dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar15 == 0.5) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e3f8e8;
      }
      fVar32 = (float)(int)(fVar32 + 0.5);
    }
    else if (dVar15 == -0.5) {
      fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = fVar30;
      }
    }
    else {
      fVar32 = (float)(int)(fVar32 + -0.5);
    }
    fVar30 = fVar37;
    if (1.0 < fVar37) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * unaff_w25;
    if (fVar37 < 0.0) {
      fVar30 = 0.0;
    }
    dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar15 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar15 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar37 = fVar36;
    if (1.0 < fVar36) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * unaff_w25;
    if (fVar36 < 0.0) {
      fVar37 = 0.0;
    }
    dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
    plVar28 = (long *)StringLiteral_9119;
    if (0.0 <= fVar37) {
      if (dVar15 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar37 + 0.5);
      }
    }
    else if (dVar15 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar37 + -0.5);
    }
    if (lVar18 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_00e44400;
    *(uint *)(lVar18 + (long)(int)uVar24 * 4 + 0x20) =
         (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10 |
         (int)fVar37 << 0x18;
    dVar15 = *in_stack_00000060;
    if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
       (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar18 + 0x18) <= (uint)unaff_x21) goto LAB_00e44400;
    if (*(long *)(lVar16 + 0x18) != 0) {
      fVar37 = *(float *)(lVar18 + unaff_x21 * unaff_x24 + 0x20);
      fVar36 = *(float *)((long)dVar15 + 0x84);
      lVar18 = *unaff_x26;
      fVar32 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
               (fVar37 * *(float *)(lVar16 + 0x20)) / fVar36;
      fVar32 = fVar32 - (float)(int)fVar32;
      fVar30 = fVar32;
      if (1.0 < fVar32) {
        fVar30 = 1.0;
      }
      fVar38 = fVar30;
      if (fVar32 < 0.0) {
        fVar38 = 0.0;
      }
      fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar16 + 0x18),0);
      fVar32 = fVar38;
      if (1.0 < fVar38) {
        fVar32 = 1.0;
      }
      uVar9 = 0x437f0000;
      fVar32 = fVar32 * 255.0;
      if (fVar38 < 0.0) {
        fVar32 = 0.0;
      }
      dVar15 = modf((double)fVar32,(double *)&stack0x00000070);
      if (0.0 <= fVar32) {
        if (dVar15 != 0.5) {
          fVar38 = (float)(int)(fVar32 + 0.5);
          goto LAB_00e3fbf8;
        }
        fVar32 = (float)_fStack0000000000000070 + 1.0;
      }
      else {
        if (dVar15 != -0.5) {
          fVar38 = (float)(int)(fVar32 + -0.5);
          goto LAB_00e3fbf8;
        }
        fVar32 = (float)_fStack0000000000000070 + -1.0;
      }
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar32;
      }
LAB_00e3fbf8:
      fVar32 = fVar30;
      if (1.0 < fVar30) {
        fVar32 = 1.0;
      }
      fVar32 = fVar32 * 255.0;
      if (0.0 <= fVar30) goto LAB_00e42040;
      fVar32 = 0.0;
      goto LAB_00e42040;
    }
  }
  goto LAB_00e443fc;
code_r0x00e3ec9c:
  lVar16 = *unaff_x26;
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
  puVar22 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
  uVar23 = *puVar22;
  if ((*in_stack_00000060 == 0.0) ||
     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0)) goto LAB_00e443fc;
  fVar32 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
  fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
  fVar36 = *(float *)(lVar16 + 0x20);
  fVar37 = *(float *)(lVar16 + 0x24);
  fVar30 = fVar32 * 255.0;
  if (fVar32 < 0.0) {
    fVar30 = fVar31;
  }
  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
  if (0.0 <= fVar30) {
    if (dVar15 == 0.5) {
      fVar30 = 1.0;
      goto LAB_00e3ede4;
    }
    fVar32 = (float)(int)(fVar30 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar30 = -1.0;
LAB_00e3ede4:
    fVar32 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar32 = (float)_fStack0000000000000070 + fVar30;
    }
  }
  else {
    fVar32 = (float)(int)(fVar30 + -0.5);
  }
  fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
  fVar30 = fVar38 * 255.0;
  if (fVar38 < 0.0) {
    fVar30 = fVar31;
  }
  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
  if (0.0 <= fVar30) {
    if (dVar15 == 0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + 0.5);
    }
  }
  else if (dVar15 == -0.5) {
    fVar30 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar30 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar30 = (float)(int)(fVar30 + -0.5);
  }
  fVar38 = fVar36;
  if (1.0 < fVar36) {
    fVar38 = 1.0;
  }
  fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
  fVar38 = fVar38 * 255.0;
  if (fVar36 < 0.0) {
    fVar38 = fVar31;
  }
  dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar15 == 0.5) {
      fVar36 = (float)_fStack0000000000000070 + 1.0;
      goto LAB_00e3ffb0;
    }
    fVar38 = (float)(int)(fVar38 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
    fVar38 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar38 = fVar36;
    }
  }
  else {
    fVar38 = (float)(int)(fVar38 + -0.5);
  }
  fVar36 = fVar37;
  if (1.0 < fVar37) {
    fVar36 = 1.0;
  }
  fVar36 = fVar36 * 255.0;
  if (fVar37 < 0.0) {
    fVar36 = fVar31;
  }
  dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
  if (0.0 <= fVar36) {
    if (dVar15 == 0.5) {
      fVar37 = 1.0;
      goto LAB_00e40174;
    }
    fVar36 = (float)(int)(fVar36 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar37 = -1.0;
LAB_00e40174:
    fVar36 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar36 = (float)_fStack0000000000000070 + fVar37;
    }
  }
  else {
    fVar36 = (float)(int)(fVar36 + -0.5);
  }
  *puVar22 = (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar36 << 0x18;
  lVar16 = *unaff_x26;
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
  puVar22 = (uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20);
  uVar23 = *puVar22;
  if ((*in_stack_00000060 == 0.0) ||
     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0)) goto LAB_00e443fc;
  fVar32 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
  fVar38 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
  fVar36 = *(float *)(lVar16 + 0x20);
  fVar37 = *(float *)(lVar16 + 0x24);
  fVar30 = fVar32 * 255.0;
  if (fVar32 < 0.0) {
    fVar30 = fVar31;
  }
  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
  if (0.0 <= fVar30) {
    if (dVar15 == 0.5) {
      fVar30 = 1.0;
      goto LAB_00e404dc;
    }
    fVar32 = (float)(int)(fVar30 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar30 = -1.0;
LAB_00e404dc:
    fVar32 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar32 = (float)_fStack0000000000000070 + fVar30;
    }
  }
  else {
    fVar32 = (float)(int)(fVar30 + -0.5);
  }
  fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
  fVar30 = fVar38 * 255.0;
  if (fVar38 < 0.0) {
    fVar30 = fVar31;
  }
  dVar15 = modf((double)fVar30,(double *)&stack0x00000070);
  if (0.0 <= fVar30) {
    if (dVar15 == 0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + 0.5);
    }
  }
  else if (dVar15 == -0.5) {
    fVar30 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar30 = (float)_fStack0000000000000070 + -1.0;
    }
  }
  else {
    fVar30 = (float)(int)(fVar30 + -0.5);
  }
  fVar38 = fVar36;
  if (1.0 < fVar36) {
    fVar38 = 1.0;
  }
  fVar37 = ((float)(uVar23 >> 0x18) / 255.0) * fVar37;
  fVar38 = fVar38 * 255.0;
  if (fVar36 < 0.0) {
    fVar38 = fVar31;
  }
  dVar15 = modf((double)fVar38,(double *)&stack0x00000070);
  if (0.0 <= fVar38) {
    if (dVar15 == 0.5) {
      fVar36 = (float)_fStack0000000000000070 + 1.0;
      goto LAB_00e40888;
    }
    fVar38 = (float)(int)(fVar38 + 0.5);
  }
  else if (dVar15 == -0.5) {
    fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
    fVar38 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar38 = fVar36;
    }
  }
  else {
    fVar38 = (float)(int)(fVar38 + -0.5);
  }
  fVar36 = fVar37;
  if (1.0 < fVar37) {
    fVar36 = 1.0;
  }
  fVar36 = fVar36 * 255.0;
  if (fVar37 < 0.0) {
    fVar36 = fVar31;
  }
  dVar15 = modf((double)fVar36,(double *)&stack0x00000070);
  if (0.0 <= fVar36) {
    if (dVar15 != 0.5) {
      fVar36 = (float)(int)(fVar36 + 0.5);
      goto LAB_00e40ca0;
    }
    fVar37 = 1.0;
  }
  else {
    if (dVar15 != -0.5) {
      fVar36 = (float)(int)(fVar36 + -0.5);
      goto LAB_00e40ca0;
    }
    fVar37 = -1.0;
  }
  fVar36 = (float)_fStack0000000000000070;
  if (((long)_fStack0000000000000070 & 1U) != 0) {
    fVar36 = (float)_fStack0000000000000070 + fVar37;
  }
LAB_00e40ca0:
  *puVar22 = (int)fVar32 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
             (int)fVar36 << 0x18;
  lVar16 = *unaff_x26;
  if (lVar16 == 0) goto LAB_00e443fc;
  if (*(uint *)(lVar16 + 0x18) <= uVar24) goto LAB_00e44400;
  lVar16 = lVar16 + (long)(int)uVar24 * 4;
  goto LAB_00e42ddc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar18 = unaff_x19[0xcb];
    uVar33 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar18 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar18 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar18 + lVar16);
    *puVar1 = uVar33;
    puVar1[1] = (int)uVar12;
    puVar1[2] = (int)uVar9;
    lVar18 = unaff_x19[0xca];
    if ((lVar18 == 0) || (lVar11 = unaff_x19[0xcc], lVar11 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar33 = *(undefined4 *)(lVar18 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar19 = (undefined8 *)(lVar11 + lVar16);
    lVar16 = lVar16 + 0xc;
    *puVar19 = *(undefined8 *)(lVar18 + 0x44);
    *(undefined4 *)(puVar19 + 1) = uVar33;
  } while (uVar23 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar28,*plVar10,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar16 = unaff_x19[0x59];
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),*in_stack_00000038,*plVar28,*plVar10,
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


