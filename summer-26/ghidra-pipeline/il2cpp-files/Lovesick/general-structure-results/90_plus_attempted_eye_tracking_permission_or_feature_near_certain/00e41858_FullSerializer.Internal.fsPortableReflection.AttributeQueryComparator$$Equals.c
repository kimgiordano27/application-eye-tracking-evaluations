/*
FUNCTION_NAME: FullSerializer.Internal.fsPortableReflection.AttributeQueryComparator$$Equals
ENTRY_POINT: 00e41858
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

void FullSerializer_Internal_fsPortableReflection_AttributeQueryComparator__Equals(float param_1)

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
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  double dVar15;
  long lVar16;
  uint uVar17;
  long *unaff_x19;
  undefined8 *puVar18;
  long lVar19;
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
  float unaff_w23;
  ulong uVar27;
  long *unaff_x24;
  long *unaff_x25;
  double *unaff_x26;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  int iVar38;
  float unaff_s9;
  float unaff_s12;
  float unaff_s14;
  float fVar39;
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
  
code_r0x00e41858:
  fVar34 = (float)(int)param_1;
joined_r0x00e41870:
                    /* catch() { ... } // from try @ 00e41820 with catch @ 00e41870 */
  if (unaff_x20 != 0) {
                    /* catch() { ... } // from try @ 00e417f4 with catch @ 00e41874 */
    if (in_stack_00000068 < *(uint *)(unaff_x20 + 0x18)) {
                    /* try { // try from 00e41888 to 00f418bf has its CatchHandler @ 00e41888
                       catch() { ... } // from try @ 00e41888 with catch @ 00e41888
                       catch() { ... } // from try @ 00e418e4 with catch @ 00e41888 */
                    /* try { // try from 00e418c0 to 00f418e3 has its CatchHandler @ 00e41924 */
      *(uint *)(unaff_x20 + unaff_x21 * 4 + 0x20) =
           (int)unaff_s14 & 0xffU | ((int)unaff_s9 & 0xffU) << 8 | ((int)unaff_s12 & 0xffU) << 0x10
           | (int)fVar34 << 0x18;
      dVar15 = *unaff_x26;
                    /* try { // try from 00e418e4 to 00f41937 has its CatchHandler @ 00e41888 */
      if (((dVar15 != 0.0) && (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
         (lVar11 = *(long *)(lVar16 + 0x18), lVar11 != 0)) {
        fVar35 = *(float *)((long)dVar15 + 0x48);
        fVar37 = *(float *)((long)dVar15 + 0x84);
        lVar20 = *unaff_x24;
        fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                 (fVar35 * *(float *)(lVar16 + 0x20)) / fVar37;
        fVar29 = fVar29 - (float)(int)fVar29;
        fVar34 = fVar29;
        if (1.0 < fVar29) {
          fVar34 = 1.0;
        }
LAB_00e41920:
        fVar30 = fVar34;
        if (fVar29 < 0.0) {
          fVar30 = 0.0;
        }
        fVar30 = (float)FUN_0269ad38(fVar30,lVar11,0);
        fVar29 = fVar30;
        if (1.0 < fVar30) {
          fVar29 = 1.0;
        }
        fVar29 = fVar29 * unaff_w23;
        if (fVar30 < 0.0) {
          fVar29 = 0.0;
        }
        dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
        if (0.0 <= fVar29) {
          if (dVar15 == 0.5) {
            fVar29 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e419a4;
          }
          fVar30 = (float)(int)(fVar29 + 0.5);
        }
        else if (dVar15 == -0.5) {
          fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = fVar29;
          }
        }
        else {
          fVar30 = (float)(int)(fVar29 + -0.5);
        }
        fVar29 = fVar34;
        if (1.0 < fVar34) {
          fVar29 = 1.0;
        }
        fVar29 = fVar29 * unaff_w23;
        if (fVar34 < 0.0) {
          fVar29 = 0.0;
        }
        dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
        if (0.0 <= fVar29) {
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e41a34;
          }
          fVar29 = (float)(int)(fVar29 + 0.5);
        }
        else if (dVar15 == -0.5) {
          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = fVar34;
          }
        }
        else {
          fVar29 = (float)(int)(fVar29 + -0.5);
        }
        fVar34 = fVar35;
        if (1.0 < fVar35) {
          fVar34 = 1.0;
        }
        fVar34 = fVar34 * unaff_w23;
        if (fVar35 < 0.0) {
          fVar34 = 0.0;
        }
        dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
        if (0.0 <= fVar34) {
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = (float)(int)(fVar34 + 0.5);
          }
        }
        else if (dVar15 == -0.5) {
          fVar34 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar34 = (float)(int)(fVar34 + -0.5);
        }
        fVar35 = fVar37;
        if (1.0 < fVar37) {
          fVar35 = 1.0;
        }
        fVar35 = fVar35 * unaff_w23;
        if (fVar37 < 0.0) {
          fVar35 = 0.0;
        }
        dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
        if (0.0 <= fVar35) {
          if (dVar15 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
        }
        else if (dVar15 == -0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar35 = (float)(int)(fVar35 + -0.5);
        }
        if (lVar20 != 0) {
          if ((uint)unaff_x22 < *(uint *)(lVar20 + 0x18)) {
            *(uint *)(lVar20 + (long)(int)(uint)unaff_x22 * 4 + 0x20) =
                 (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            dVar15 = *unaff_x26;
            if (((dVar15 != 0.0) && (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
               (*(long *)(lVar16 + 0x18) != 0)) {
              fVar35 = *(float *)((long)dVar15 + 0x48);
              fVar37 = *(float *)((long)dVar15 + 0x84);
              lVar11 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar37;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar34 = fVar29;
              if (1.0 < fVar29) {
                fVar34 = 1.0;
              }
              fVar30 = fVar34;
              if (fVar29 < 0.0) {
                fVar30 = 0.0;
              }
              fVar30 = (float)FUN_0269ad38(fVar30,*(long *)(lVar16 + 0x18),0);
              fVar29 = fVar30;
              if (1.0 < fVar30) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * unaff_w23;
              if (fVar30 < 0.0) {
                fVar29 = 0.0;
              }
              dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar15 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar30 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar29;
                }
              }
              else {
                fVar30 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar34;
              if (1.0 < fVar34) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * unaff_w23;
              if (fVar34 < 0.0) {
                fVar29 = 0.0;
              }
              dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar15 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar34;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar34 = fVar35;
              if (1.0 < fVar35) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * unaff_w23;
              if (fVar35 < 0.0) {
                fVar34 = 0.0;
              }
              dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
              if (0.0 <= fVar34) {
                if (dVar15 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar34 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar34 + -0.5);
              }
              fVar35 = fVar37;
              if (1.0 < fVar37) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * unaff_w23;
              if (fVar37 < 0.0) {
                fVar35 = 0.0;
              }
              dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar15 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar11 != 0) {
                if ((uint)unaff_x29 < *(uint *)(lVar11 + 0x18)) {
                  *(uint *)(lVar11 + (long)(int)(uint)unaff_x29 * 4 + 0x20) =
                       (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                       ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  dVar15 = *unaff_x26;
                  if (((dVar15 != 0.0) && (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
                     (*(long *)(lVar16 + 0x18) != 0)) {
                    uVar13 = (ulong)(uint)*(float *)((long)dVar15 + 0x48);
                    uVar12 = (ulong)(uint)*(float *)((long)dVar15 + 0x84);
                    lVar11 = *unaff_x24;
                    fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                             (*(float *)((long)dVar15 + 0x48) * *(float *)(lVar16 + 0x20)) /
                             *(float *)((long)dVar15 + 0x84);
                    fVar29 = fVar29 - (float)(int)fVar29;
                    fVar34 = fVar29;
                    if (1.0 < fVar29) {
                      fVar34 = 1.0;
                    }
                    fVar35 = fVar34;
                    if (fVar29 < 0.0) {
                      fVar35 = 0.0;
                    }
                    fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(lVar16 + 0x18),0);
                    fVar29 = fVar35;
                    if (1.0 < fVar35) {
                      fVar29 = 1.0;
                    }
                    uVar36 = (ulong)(uint)unaff_w23;
                    fVar29 = fVar29 * unaff_w23;
                    if (fVar35 < 0.0) {
                      fVar29 = 0.0;
                    }
                    dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                    if (0.0 <= fVar29) {
                      if (dVar15 == 0.5) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e41ffc;
                      }
                      fVar35 = (float)(int)(fVar29 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = fVar29;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar29 + -0.5);
                    }
                    fVar29 = fVar34;
                    if (1.0 < fVar34) {
                      fVar29 = 1.0;
                    }
                    fVar29 = fVar29 * unaff_w23;
                    if (fVar34 < 0.0) {
                      fVar29 = 0.0;
                    }
LAB_00e42040:
                    dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
joined_r0x00e42048:
                    fVar34 = (float)uVar13;
                    if (0.0 <= fVar29) {
                      if (dVar15 == 0.5) {
                        fVar29 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e425d4;
                      }
                      fVar37 = (float)(int)(fVar29 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e425d4:
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = fVar29;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar29 + -0.5);
                    }
                    fVar30 = 0.0;
                    fVar29 = fVar34;
                    if (1.0 < fVar34) {
                      fVar29 = 1.0;
                    }
                    fVar29 = fVar29 * unaff_w23;
                    if (fVar34 < 0.0) {
                      fVar29 = 0.0;
                    }
                    dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                    if (0.0 <= fVar29) {
                      if (dVar15 == 0.5) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e42654;
                      }
                      fVar29 = (float)(int)(fVar29 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = fVar34;
                      }
                    }
                    else {
                      fVar29 = (float)(int)(fVar29 + -0.5);
                    }
                    fVar39 = (float)uVar12;
                    fVar34 = fVar39;
                    if (1.0 < fVar39) {
                      fVar34 = 1.0;
                    }
                    fVar34 = fVar34 * unaff_w23;
                    if (fVar39 < 0.0) {
                      fVar34 = 0.0;
                    }
                    dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
                    if (0.0 <= fVar34) {
                      if (dVar15 == 0.5) {
                        fVar34 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e426e4;
                      }
                      fVar39 = (float)(int)(fVar34 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = fVar34;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar34 + -0.5);
                    }
                    if (lVar11 != 0) {
                      if ((uint)in_stack_00000058 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar11 + in_stack_00000058 * 4 + 0x20) =
                             (int)fVar35 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                             ((int)fVar29 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                        if (*unaff_x26 != 0.0) {
                          uVar21 = *(undefined8 *)((long)*unaff_x26 + 0xa0);
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar12 = FUN_02681b9c(uVar21,0,0);
                          if ((uVar12 & 1) == 0) goto LAB_00e43400;
                          lVar16 = *unaff_x24;
                          if (lVar16 != 0) {
                            if (in_stack_00000068 < *(uint *)(lVar16 + 0x18)) {
                              puVar22 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                              uVar23 = *puVar22;
                              if ((*unaff_x26 != 0.0) &&
                                 (lVar16 = *(long *)((long)*unaff_x26 + 0xa0), lVar16 != 0)) {
                                fVar34 = ((float)(uVar23 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x18);
                                fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                         *(float *)(lVar16 + 0x1c);
                                fVar37 = *(float *)(lVar16 + 0x20);
                                fVar35 = *(float *)(lVar16 + 0x24);
                                fVar29 = fVar34 * 255.0;
                                if (fVar34 < 0.0) {
                                  fVar29 = 0.0;
                                }
                                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                                if (0.0 <= fVar29) {
                                  if (dVar15 == 0.5) {
                                    fVar34 = 1.0;
                                    goto LAB_00e4287c;
                                  }
                                  fVar29 = (float)(int)(fVar29 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar34 = -1.0;
LAB_00e4287c:
                                  fVar29 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar29 = (float)_fStack0000000000000070 + fVar34;
                                  }
                                }
                                else {
                                  fVar29 = (float)(int)(fVar29 + -0.5);
                                }
                                fVar34 = fVar39 * 255.0;
                                fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar37;
                                if (fVar39 < 0.0) {
                                  fVar34 = 0.0;
                                }
                                dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
                                if (0.0 <= fVar34) {
                                  if (dVar15 == 0.5) {
                                    fVar34 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                    }
                                  }
                                  else {
                                    fVar34 = (float)(int)(fVar34 + 0.5);
                                  }
                                }
                                else if (dVar15 == -0.5) {
                                  fVar34 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                                  }
                                }
                                else {
                                  fVar34 = (float)(int)(fVar34 + -0.5);
                                }
                                fVar39 = fVar37;
                                if (1.0 < fVar37) {
                                  fVar39 = 1.0;
                                }
                                fVar39 = fVar39 * 255.0;
                                fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                if (fVar37 < 0.0) {
                                  fVar39 = 0.0;
                                }
                                dVar15 = modf((double)fVar39,(double *)&stack0x00000070);
                                if (0.0 <= fVar39) {
                                  if (dVar15 == 0.5) {
                                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                                    goto LAB_00e429c8;
                                  }
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = fVar37;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + -0.5);
                                }
                                fVar37 = fVar35;
                                if (1.0 < fVar35) {
                                  fVar37 = 1.0;
                                }
                                fVar37 = fVar37 * 255.0;
                                if (fVar35 < 0.0) {
                                  fVar37 = 0.0;
                                }
                                dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                if (0.0 <= fVar37) {
                                  if (dVar15 == 0.5) {
                                    fVar35 = 1.0;
                                    goto LAB_00e42a44;
                                  }
                                  fVar37 = (float)(int)(fVar37 + 0.5);
                                }
                                else if (dVar15 == -0.5) {
                                  fVar35 = -1.0;
LAB_00e42a44:
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + fVar35;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + -0.5);
                                }
                                *puVar22 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                lVar16 = *unaff_x24;
                                if (lVar16 != 0) {
                                  if ((uint)unaff_x22 < *(uint *)(lVar16 + 0x18)) {
                                    puVar22 = (uint *)(lVar16 + (long)(int)(uint)unaff_x22 * 4 +
                                                      0x20);
                                    uVar23 = *puVar22;
                                    if ((*unaff_x26 != 0.0) &&
                                       (lVar16 = *(long *)((long)*unaff_x26 + 0xa0), lVar16 != 0)) {
                                      fVar34 = ((float)(uVar23 & 0xff) / 255.0) *
                                               *(float *)(lVar16 + 0x18);
                                      fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                               *(float *)(lVar16 + 0x1c);
                                      fVar37 = *(float *)(lVar16 + 0x20);
                                      fVar35 = *(float *)(lVar16 + 0x24);
                                      fVar29 = fVar34 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                                      if (0.0 <= fVar29) {
                                        if (dVar15 == 0.5) {
                                          fVar34 = 1.0;
                                          goto LAB_00e42b80;
                                        }
                                        fVar29 = (float)(int)(fVar29 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar34 = -1.0;
LAB_00e42b80:
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = (float)_fStack0000000000000070 + fVar34;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar29 + -0.5);
                                      }
                                      fVar34 = fVar39 * 255.0;
                                      fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar37;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar15 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar34 + 0.5);
                                        }
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar39 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar39 = 1.0;
                                      }
                                      fVar39 = fVar39 * 255.0;
                                      fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                      if (fVar37 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      dVar15 = modf((double)fVar39,(double *)&stack0x00000070);
                                      if (0.0 <= fVar39) {
                                        if (dVar15 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e42ccc;
                                        }
                                        fVar39 = (float)(int)(fVar39 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                                        fVar39 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar39 = fVar37;
                                        }
                                      }
                                      else {
                                        fVar39 = (float)(int)(fVar39 + -0.5);
                                      }
                                      fVar37 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar37 = 1.0;
                                      }
                                      fVar37 = fVar37 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar37 = 0.0;
                                      }
                                      dVar15 = modf((double)fVar37,(double *)&stack0x00000070);
                                      if (0.0 <= fVar37) {
                                        if (dVar15 == 0.5) {
                                          fVar35 = 1.0;
                                          goto LAB_00e42d48;
                                        }
                                        fVar37 = (float)(int)(fVar37 + 0.5);
                                      }
                                      else if (dVar15 == -0.5) {
                                        fVar35 = -1.0;
LAB_00e42d48:
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + fVar35;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar37 + -0.5);
                                      }
                                      *puVar22 = (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                                 ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18
                                      ;
                                      lVar16 = *unaff_x24;
                                      if (lVar16 != 0) {
                                        if ((uint)unaff_x29 < *(uint *)(lVar16 + 0x18)) {
                                          lVar16 = lVar16 + (long)(int)(uint)unaff_x29 * 4;
                                          while( true ) {
                                            uVar23 = *(uint *)(lVar16 + 0x20);
                                            if ((*unaff_x26 == 0.0) ||
                                               (lVar11 = *(long *)((long)*unaff_x26 + 0xa0),
                                               lVar11 == 0)) break;
                                            fVar34 = ((float)(uVar23 & 0xff) / 255.0) *
                                                     *(float *)(lVar11 + 0x18);
                                            fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                                     *(float *)(lVar11 + 0x1c);
                                            fVar37 = *(float *)(lVar11 + 0x20);
                                            fVar35 = *(float *)(lVar11 + 0x24);
                                            fVar29 = fVar34 * 255.0;
                                            if (fVar34 < 0.0) {
                                              fVar29 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar29,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar29) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = 1.0;
                                                goto FUN_00e42e84;
                                              }
                                              fVar29 = (float)(int)(fVar29 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = -1.0;
FUN_00e42e84:
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = (float)_fStack0000000000000070 + fVar34;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar29 + -0.5);
                                            }
                                            fVar34 = fVar39 * 255.0;
                                            fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) *
                                                     fVar37;
                                            if (fVar39 < 0.0) {
                                              fVar34 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = (float)(int)(fVar34 + 0.5);
                                              }
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar34 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar34 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar39 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar39 = 1.0;
                                            }
                                            fVar39 = fVar39 * 255.0;
                                            fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                            if (fVar37 < 0.0) {
                                              fVar39 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar39,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar39) {
                                              if (dVar15 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e42fd0;
                                              }
                                              fVar39 = (float)(int)(fVar39 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                                              fVar39 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar39 = fVar37;
                                              }
                                            }
                                            else {
                                              fVar39 = (float)(int)(fVar39 + -0.5);
                                            }
                                            fVar37 = fVar35;
                                            if (1.0 < fVar35) {
                                              fVar37 = 1.0;
                                            }
                                            fVar37 = fVar37 * 255.0;
                                            if (fVar35 < 0.0) {
                                              fVar37 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar37,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar37) {
                                              if (dVar15 == 0.5) {
                                                fVar35 = 1.0;
                                                goto LAB_00e4304c;
                                              }
                                              fVar37 = (float)(int)(fVar37 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar35 = -1.0;
LAB_00e4304c:
                                              fVar37 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar37 = (float)_fStack0000000000000070 + fVar35;
                                              }
                                            }
                                            else {
                                              fVar37 = (float)(int)(fVar37 + -0.5);
                                            }
                                            *(uint *)(lVar16 + 0x20) =
                                                 (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                                 ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18
                                            ;
                                            lVar16 = *unaff_x24;
                                            if (lVar16 == 0) break;
                                            if (*(uint *)(lVar16 + 0x18) <= (uint)in_stack_00000058)
                                            goto LAB_00e44400;
                                            puVar22 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20
                                                              );
                                            uVar23 = *puVar22;
                                            if ((*unaff_x26 == 0.0) ||
                                               (lVar16 = *(long *)((long)*unaff_x26 + 0xa0),
                                               lVar16 == 0)) break;
                                            fVar34 = (float)(uVar23 & 0xff) / 255.0;
                                            uVar36 = (ulong)(uint)fVar34;
                                            fVar34 = fVar34 * *(float *)(lVar16 + 0x18);
                                            fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                                     *(float *)(lVar16 + 0x1c);
                                            fVar37 = *(float *)(lVar16 + 0x20);
                                            fVar35 = *(float *)(lVar16 + 0x24);
                                            fVar29 = fVar34 * 255.0;
                                            if (fVar34 < 0.0) {
                                              fVar29 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar29,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar29) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = 1.0;
                                                goto LAB_00e4318c;
                                              }
                                              fVar29 = (float)(int)(fVar29 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = -1.0;
LAB_00e4318c:
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = (float)_fStack0000000000000070 + fVar34;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar29 + -0.5);
                                            }
                                            fVar34 = fVar39 * 255.0;
                                            fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) *
                                                     fVar37;
                                            if (fVar39 < 0.0) {
                                              fVar34 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = (float)(int)(fVar34 + 0.5);
                                              }
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar34 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar34 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar39 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar39 = 1.0;
                                            }
                                            fVar39 = fVar39 * 255.0;
                                            fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                            if (fVar37 < 0.0) {
                                              fVar39 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar39,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar39) {
                                              if (dVar15 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e432e0;
                                              }
                                              fVar39 = (float)(int)(fVar39 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                                              fVar39 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar39 = fVar37;
                                              }
                                            }
                                            else {
                                              fVar39 = (float)(int)(fVar39 + -0.5);
                                            }
                                            fVar37 = fVar35;
                                            if (1.0 < fVar35) {
                                              fVar37 = 1.0;
                                            }
                                            fVar37 = fVar37 * 255.0;
                                            if (fVar35 < 0.0) {
                                              fVar37 = 0.0;
                                            }
                                            dVar15 = modf((double)fVar37,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar37) {
                                              if (dVar15 == 0.5) {
                                                fVar35 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar35 = (float)(int)(fVar37 + 0.5);
                                              }
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar35 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar35 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar35 = (float)(int)(fVar37 + -0.5);
                                            }
                                            *puVar22 = (int)fVar29 & 0xffU |
                                                       ((int)fVar34 & 0xffU) << 8 |
                                                       ((int)fVar39 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                            unaff_s15 = in_stack_00000008._4_4_;
LAB_00e43400:
                                            do {
                                              lVar16 = *unaff_x24;
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                              goto LAB_00e44400;
                                              lVar16 = lVar16 + unaff_x21 * 4;
                                              fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 
                                                  0x23));
                                              *(char *)(lVar16 + 0x23) =
                                                   (char)(int)(*(float *)((long)unaff_x19 + 0x374) *
                                                              fVar34);
                                              lVar16 = unaff_x19[0x5f];
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              uVar23 = (uint)unaff_x22;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                              goto LAB_00e44400;
                                              lVar16 = lVar16 + (long)(int)uVar23 * 4;
                                              fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 
                                                  0x23));
                                              *(char *)(lVar16 + 0x23) =
                                                   (char)(int)(*(float *)((long)unaff_x19 + 0x374) *
                                                              fVar34);
                                              lVar16 = unaff_x19[0x5f];
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              uVar24 = (uint)unaff_x29;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                              goto LAB_00e44400;
                                              lVar16 = lVar16 + (long)(int)uVar24 * 4;
                                              fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 
                                                  0x23));
                                              *(char *)(lVar16 + 0x23) =
                                                   (char)(int)(*(float *)((long)unaff_x19 + 0x374) *
                                                              fVar34);
                                              lVar16 = unaff_x19[0x5f];
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              uVar17 = (uint)in_stack_00000058;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                              goto LAB_00e44400;
                                              lVar16 = lVar16 + in_stack_00000058 * 4;
                                              uVar12 = (ulong)(uint)*(float *)((long)unaff_x19 +
                                                                              0x374);
                                              fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 
                                                  0x23));
                                              *(char *)(lVar16 + 0x23) =
                                                   (char)(int)(*(float *)((long)unaff_x19 + 0x374) *
                                                              fVar34);
                                              uVar13 = FUN_00e3703c();
                                              if ((uVar13 & 1) == 0) {
                                                lVar16 = *unaff_x25;
                                                if (*(int *)(lVar16 + 0xe0) == 0) {
                                                  thunk_FUN_00d32864();
                                                  lVar16 = *unaff_x25;
                                                }
                                                if (*(int *)(*(long *)(lVar16 + 0xb8) + 0x20) == 1)
                                                {
                                                  lVar16 = *unaff_x24;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  puVar22 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                                                  uVar4 = *puVar22;
                                                  fVar29 = (float)FUN_026982b0((float)(uVar4 & 0xff)
                                                                               / 255.0,0);
                                                  fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 &
                                                                                      0xff) / 255.0,
                                                                               0);
                                                  fVar37 = (float)FUN_026982b0((float)(uVar4 >> 0x10
                                                                                      & 0xff) /
                                                                               255.0,0);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e43744;
                                                    }
                                                    fVar37 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = fVar35;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (1.0 < fVar39) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar39 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  *puVar22 = (int)fVar34 & 0xffU |
                                                             ((int)fVar29 & 0xffU) << 8 |
                                                             ((int)fVar37 & 0xffU) << 0x10 |
                                                             (int)fVar35 << 0x18;
                                                  lVar16 = *in_stack_00000030;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  puVar22 = (uint *)(lVar16 + (long)(int)uVar23 * 4
                                                                    + 0x20);
                                                  uVar4 = *puVar22;
                                                  fVar29 = (float)FUN_026982b0((float)(uVar4 & 0xff)
                                                                               / 255.0,0);
                                                  fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 &
                                                                                      0xff) / 255.0,
                                                                               0);
                                                  fVar37 = (float)FUN_026982b0((float)(uVar4 >> 0x10
                                                                                      & 0xff) /
                                                                               255.0,0);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  fVar39 = (float)(uVar4 >> 0x18) / 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e43a84;
                                                    }
                                                    fVar37 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = fVar35;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (1.0 < fVar39) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar39 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  *puVar22 = (int)fVar34 & 0xffU |
                                                             ((int)fVar29 & 0xffU) << 8 |
                                                             ((int)fVar37 & 0xffU) << 0x10 |
                                                             (int)fVar35 << 0x18;
                                                  lVar16 = *in_stack_00000030;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  puVar22 = (uint *)(lVar16 + (long)(int)uVar24 * 4
                                                                    + 0x20);
                                                  uVar23 = *puVar22;
                                                  fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff
                                                                                      ) / 255.0,0);
                                                  fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 &
                                                                                      0xff) / 255.0,
                                                                               0);
                                                  fVar37 = (float)FUN_026982b0((float)(uVar23 >> 
                                                  0x10 & 0xff) / 255.0,0);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  fVar39 = (float)(uVar23 >> 0x18) / 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e43dbc;
                                                    }
                                                    fVar37 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = fVar35;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (1.0 < fVar39) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar39 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *puVar22 = (int)fVar34 & 0xffU |
                                                             ((int)fVar29 & 0xffU) << 8 |
                                                             ((int)fVar37 & 0xffU) << 0x10 |
                                                             (int)fVar35 << 0x18;
                                                  lVar16 = *in_stack_00000030;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  puVar22 = (uint *)(lVar16 + in_stack_00000058 * 4
                                                                    + 0x20);
                                                  uVar23 = *puVar22;
                                                  fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff
                                                                                      ) / 255.0,0);
                                                  fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 &
                                                                                      0xff) / 255.0,
                                                                               0);
                                                  fVar37 = (float)FUN_026982b0((float)(uVar23 >> 
                                                  0x10 & 0xff) / 255.0,0);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  uVar36 = 0x3f800000;
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  fVar39 = (float)(uVar23 >> 0x18) / 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e440f4;
                                                    }
                                                    fVar37 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = fVar35;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (1.0 < fVar39) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    uVar12 = 0;
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = 1.0;
                                                      goto LAB_00e44170;
                                                    }
                                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                  else {
                                                    uVar12 = 0;
                                                    if (dVar15 == -0.5) {
                                                      fVar35 = -1.0;
LAB_00e44170:
                                                      fVar35 = (float)_fStack0000000000000070 +
                                                               fVar35;
                                                      uVar12 = (ulong)(uint)fVar35;
                                                      fVar39 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar39 = fVar35;
                                                      }
                                                    }
                                                    else {
                                                      fVar39 = (float)(int)(fVar39 + -0.5);
                                                    }
                                                  }
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *puVar22 = (int)fVar34 & 0xffU |
                                                             ((int)fVar29 & 0xffU) << 8 |
                                                             ((int)fVar37 & 0xffU) << 0x10 |
                                                             (int)fVar39 << 0x18;
                                                  unaff_x24 = in_stack_00000030;
                                                }
                                              }
                                              puVar7 = StringLiteral_4992;
                                              puVar6 = OVREyeGaze_TypeInfo;
                                              in_stack_00000050 = in_stack_00000050 + 1;
                                              if (in_stack_00000050 == in_stack_00000018) {
                                                if (((unaff_x19[0x58] == 0) ||
                                                    (iVar9 = FUN_026c82cc(unaff_x19[0x58],0),
                                                    iVar9 < 1)) && (unaff_x19[0x59] == 0))
                                                goto LAB_00e443b0;
                                                puVar6 = 
                                                Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                                ;
                                                if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0))
                                                goto LAB_00e443fc;
                                                iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
                                                plVar10 = unaff_x19 + 0xcb;
                                                if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                                                  FUN_010afdd4(plVar10,iVar9,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                                  );
                                                }
                                                if ((unaff_x19[0xcc] == 0) ||
                                                   (lVar16 = unaff_x19[0xf], lVar16 == 0))
                                                goto LAB_00e443fc;
                                                plVar1 = unaff_x19 + 0xcc;
                                                if (*(int *)(lVar16 + 0x10) !=
                                                    *(int *)(unaff_x19[0xcc] + 0x18)) {
                                                  FUN_010afdd4(plVar1,*(int *)(lVar16 + 0x10),
                                                               *(undefined8 *)puVar6);
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
                                              FUN_0132138c(unaff_x19[9],
                                                           in_stack_00000050 & 0xffffffff,
                                                           &stack0x00000070,
                                                           *(undefined8 *)StringLiteral_4992);
                                              *unaff_x26 = _fStack0000000000000070;
                                              if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                              iVar9 = FUN_00e4e99c();
                                              if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
                                                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                *(undefined1 *)((long)*unaff_x26 + 0x165) = 1;
                                              }
                                              if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                                                FUN_00e45d2c();
                                              }
                                              *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                                              if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                                                uVar12 = FUN_0269e56c(0);
                                                if (((fStack000000000000004c == 0.0) ||
                                                    ((uVar12 & 1) == 0)) ||
                                                   (1 < (int)unaff_x19[0x2a] - 3U)) {
                                                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                                  iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                                                  *(int *)((long)unaff_x19 + 0x38c) = iVar9;
                                                  if ((unaff_x19[9] == 0) ||
                                                     (FUN_0132138c(unaff_x19[9],iVar9,
                                                                   &stack0x00000070,
                                                                   *(undefined8 *)puVar7),
                                                     _fStack0000000000000070 == 0.0))
                                                  goto LAB_00e443fc;
                                                  *(undefined4 *)(unaff_x19 + 0x4a) =
                                                       *(undefined4 *)
                                                        ((long)_fStack0000000000000070 + 0x48);
                                                  if ((unaff_x19[9] == 0) ||
                                                     (FUN_0132138c(unaff_x19[9],
                                                                   *(undefined4 *)
                                                                    ((long)unaff_x19 + 0x38c),
                                                                   &stack0x00000070,
                                                                   *(undefined8 *)puVar7),
                                                     _fStack0000000000000070 == 0.0))
                                                  goto LAB_00e443fc;
                                                  *(float *)((long)unaff_x19 + 0x254) =
                                                       *(float *)((long)_fStack0000000000000070 +
                                                                 0x48) +
                                                       *(float *)((long)unaff_x19 + 0x50c);
                                                  *(undefined4 *)(unaff_x19 + 0x4b) =
                                                       *(undefined4 *)((long)unaff_x19 + 0x18c);
                                                }
                                              }
                                              else {
                                                dVar15 = *unaff_x26;
                                                if ((dVar15 == 0.0) ||
                                                   (*(long *)((long)dVar15 + 0x78) == 0))
                                                goto LAB_00e443fc;
                                                fVar29 = *(float *)(*(long *)((long)dVar15 + 0x78) +
                                                                   0x18);
                                                fVar34 = DAT_028aa034;
                                                if (fVar29 != 0.0) {
                                                  fVar34 = fVar29;
                                                }
                                                if ((0.0 < (unaff_s15 -
                                                           *(float *)((long)dVar15 + 100)) / fVar34)
                                                   && (*(char *)((long)dVar15 + 0x165) == '\0')) {
                                                  *(undefined1 *)((long)dVar15 + 0x165) = 1;
                                                  *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                                                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                                  sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                                       in_stack_00000050 &
                                                                       0xffffffff,0);
                                                  if (sVar8 != 0x200b) {
                                                    *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                                                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                                    sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                                         in_stack_00000050 &
                                                                         0xffffffff,0);
                                                    if (sVar8 != 0x20) {
                                                      if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                                      sVar8 = FUN_015fa29c(unaff_x19[0xf],
                                                                           in_stack_00000050 &
                                                                           0xffffffff,0);
                                                      if (sVar8 != 10) {
                                                        lVar16 = unaff_x19[0xca];
                                                        if (lVar16 == 0) goto LAB_00e443fc;
                                                        fVar35 = *(float *)(lVar16 + 0x48);
                                                        fVar34 = *(float *)(unaff_x19 + 0x4b);
                                                        fVar37 = fVar35 + *(float *)((long)unaff_x19
                                                                                    + 0x50c);
                                                        fVar29 = *(float *)(unaff_x19 + 0x4a);
                                                        if (fVar35 <= *(float *)(unaff_x19 + 0x4a))
                                                        {
                                                          fVar29 = fVar35;
                                                        }
                                                        *(float *)(unaff_x19 + 0x4a) = fVar29;
                                                        fVar29 = *(float *)((long)unaff_x19 + 0x254)
                                                        ;
                                                        if (fVar37 <= *(float *)((long)unaff_x19 +
                                                                                0x254)) {
                                                          fVar29 = fVar37;
                                                        }
                                                        *(float *)((long)unaff_x19 + 0x254) = fVar29
                                                        ;
                                                        fVar29 = (float)FUN_00e5ef30(*(undefined4 *)
                                                                                      ((long)
                                                  unaff_x19 + 0x134),lVar16,0);
                                                  fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) +
                                                           *(float *)((long)unaff_x19 + 0x55c);
                                                  if (fVar34 <= fVar29) {
                                                    fVar34 = fVar29;
                                                  }
                                                  *(float *)(unaff_x19 + 0x4b) = fVar34;
                                                  }
                                                  }
                                                  }
                                                  iVar38 = *(int *)((long)unaff_x19 + 0x38c);
                                                  if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
                                                    iVar38 = iVar9;
                                                  }
                                                  *(int *)((long)unaff_x19 + 0x38c) = iVar38;
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
                                              fVar29 = 0.0;
                                              *(undefined4 *)(unaff_x19 + 199) = 0;
                                              fVar34 = 0.0;
                                              if ((((0.0 < fStack000000000000004c) &&
                                                   (uVar23 = *(uint *)(unaff_x19 + 0x2a),
                                                   fVar34 = fVar29, uVar23 < 5)) &&
                                                  ((1 << (ulong)(uVar23 & 0x1f) & 0x19U) != 0)) &&
                                                 (*(float *)(unaff_x19 + 0x4a) <
                                                  -*(float *)((long)unaff_x19 + 0x184))) {
                                                if (uVar23 == 4) {
                                                  lVar16 = unaff_x19[0xc];
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (0 < *(int *)(lVar16 + 0x18)) {
                                                    iVar9 = 0;
                                                    do {
                                                      FUN_0132138c(lVar16,iVar9,&stack0x00000070,
                                                                   *(undefined8 *)puVar6);
                                                      *(float *)((long)unaff_x19 + 0x634) =
                                                           fStack0000000000000070;
                                                      fVar34 = fStack0000000000000070;
                                                      if (-*(float *)(unaff_x19 + 0x4a) -
                                                          *(float *)((long)unaff_x19 + 0x184) <=
                                                          fStack0000000000000070) break;
                                                      lVar16 = unaff_x19[0xc];
                                                      if (lVar16 == 0) goto LAB_00e443fc;
                                                      iVar9 = iVar9 + 1;
                                                    } while (iVar9 < *(int *)(lVar16 + 0x18));
                                                  }
                                                }
                                                else {
                                                  lVar16 = unaff_x19[0xb];
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  iVar9 = 0;
                                                  fVar34 = 0.0;
                                                  while (iVar9 < *(int *)(lVar16 + 0x18)) {
                                                    FUN_0132138c(lVar16,iVar9,&stack0x00000070,
                                                                 *(undefined8 *)puVar6);
                                                    fVar34 = fVar34 + fStack0000000000000070;
                                                    *(float *)((long)unaff_x19 + 0x634) = fVar34;
                                                    if (-*(float *)(unaff_x19 + 0x4a) -
                                                        *(float *)((long)unaff_x19 + 0x184) <=
                                                        fVar34) break;
                                                    lVar16 = unaff_x19[0xb];
                                                    iVar9 = iVar9 + 1;
                                                    if (lVar16 == 0) goto LAB_00e443fc;
                                                  }
                                                }
                                              }
                                              *(float *)(unaff_x19 + 0xc6) =
                                                   *(float *)(unaff_x19 + 0xc6) +
                                                   *(float *)(unaff_x19 + 0xa7);
                                              if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                              fVar29 = *(float *)((long)unaff_x19 + 0x53c);
                                              FUN_0132138c(unaff_x19[9],0,&stack0x00000070,
                                                           *(undefined8 *)puVar7);
                                              if ((_fStack0000000000000070 == 0.0) ||
                                                 (unaff_x19[9] == 0)) goto LAB_00e443fc;
                                              fVar35 = *(float *)((long)_fStack0000000000000070 +
                                                                 0x5c);
                                              FUN_0132138c(unaff_x19[9],0,&stack0x00000070,
                                                           *(undefined8 *)puVar7);
                                              if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                              fVar39 = *(float *)(unaff_x19 + 0xa8);
                                              fVar37 = *(float *)(unaff_x19 + 199) + fVar39;
                                              *(float *)((long)unaff_x19 + 0x634) =
                                                   fVar34 + fVar29 + (fVar35 + -1.0) *
                                                                     *(float *)((long)
                                                  _fStack0000000000000070 + 0x84);
                                              *(float *)(unaff_x19 + 199) = fVar37;
                                              puVar6 = 
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              ;
                                              if (DAT_03774d76 == '\0') {
                                                thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                                DAT_03774d76 = '\x01';
                                              }
                                              fVar29 = 1.0;
                                              fVar34 = 1.0;
                                              uVar31 = *(undefined4 *)
                                                        (*(undefined8 **)(*(long *)puVar6 + 0xb8) +
                                                        1);
                                              in_stack_00000040[0x10] =
                                                   **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                              *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar31;
                                              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                              uVar21 = *(undefined8 *)(unaff_x19[0xca] + 200);
                                              if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                              }
                                              uVar12 = FUN_02681b9c(uVar21,0,0);
                                              if ((uVar12 & 1) != 0) {
                                                lVar16 = __start_il2cpp();
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if ((*(char *)(lVar16 + 0x109) == '\0') &&
                                                   (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                                  if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                                  uVar31 = FUN_00e4ee40();
                                                  *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
                                                  *(float *)(unaff_x19 + 0xcf) = fVar37;
                                                  *(float *)((long)unaff_x19 + 0x67c) = fVar39;
                                                }
                                              }
                                              if (DAT_03774d76 == '\0') {
                                                thunk_FUN_00d48444(puVar6);
                                                DAT_03774d76 = '\x01';
                                              }
                                              lVar11 = *(long *)puVar6;
                                              uVar31 = *(undefined4 *)
                                                        (*(undefined8 **)(lVar11 + 0xb8) + 1);
                                              *in_stack_00000040 = **(undefined8 **)(lVar11 + 0xb8);
                                              *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar31;
                                              lVar16 = (*(long **)(lVar11 + 0xb8))[1];
                                              unaff_x19[0xc0] = **(long **)(lVar11 + 0xb8);
                                              *(int *)(unaff_x19 + 0xc1) = (int)lVar16;
                                              uVar31 = *(undefined4 *)
                                                        (*(undefined8 **)(lVar11 + 0xb8) + 1);
                                              in_stack_00000040[3] =
                                                   **(undefined8 **)(lVar11 + 0xb8);
                                              *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
                                              lVar16 = (*(long **)(lVar11 + 0xb8))[1];
                                              unaff_x19[0xc3] = **(long **)(lVar11 + 0xb8);
                                              *(int *)(unaff_x19 + 0xc4) = (int)lVar16;
                                              uVar31 = *(undefined4 *)
                                                        (*(undefined8 **)(lVar11 + 0xb8) + 1);
                                              in_stack_00000040[6] =
                                                   **(undefined8 **)(lVar11 + 0xb8);
                                              *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar31;
                                              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                              uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                                              if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                              }
                                              uVar12 = FUN_02681b9c(uVar21,0,0);
                                              if ((uVar12 & 1) != 0) {
                                                if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
                                                  lVar16 = __start_il2cpp();
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if ((*(char *)(lVar16 + 0x109) == '\0') &&
                                                     (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                                    lVar16 = unaff_x19[0xca];
                                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                                    if ((lVar16 == 0) ||
                                                       (lVar11 = *(long *)(lVar16 + 0xc0),
                                                       lVar11 == 0)) goto LAB_00e443fc;
                                                    fVar35 = fStack0000000000000048;
                                                    if (*(char *)(lVar11 + 0x18) != '\0') {
                                                      fVar37 = *(float *)(lVar16 + 100);
                                                      fVar35 = *(float *)((long)unaff_x19 + 0x2ec) -
                                                               fVar37;
                                                    }
                                                    if (*(char *)(lVar11 + 0x19) != '\0') {
                                                      uVar31 = FUN_00e4e9f4(fVar35);
                                                      lVar16 = unaff_x19[0xca];
                                                      *(undefined4 *)((long)unaff_x19 + 0x5f4) =
                                                           uVar31;
                                                      *(float *)(unaff_x19 + 0xbf) = fVar37;
                                                      *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                                                      if (lVar16 == 0) goto LAB_00e443fc;
                                                    }
                                                    if (*(long *)(lVar16 + 0xc0) == 0)
                                                    goto LAB_00e443fc;
                                                    if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x28)
                                                        != '\0') {
                                                      fVar28 = (float)FUN_00e4e9f4(fVar35);
                                                      *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                                                      *(float *)(unaff_x19 + 200) = fVar37;
                                                      fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1)
                                                      ;
                                                      *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                      unaff_x19[0xc0] =
                                                           CONCAT44(fVar37 + (float)((ulong)
                                                  unaff_x19[0xc0] >> 0x20),
                                                  fVar28 + (float)unaff_x19[0xc0]);
                                                  *(float *)(unaff_x19 + 0xc1) = fVar33;
                                                  if ((unaff_x19[0xca] == 0) ||
                                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  fVar37 = (float)FUN_00e4e9f4(fVar35);
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                                  *(float *)(unaff_x19 + 200) = fVar33;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[3] =
                                                       CONCAT44(fVar33 + (float)((ulong)
                                                  in_stack_00000040[3] >> 0x20),
                                                  fVar37 + (float)in_stack_00000040[3]);
                                                  *(float *)((long)unaff_x19 + 0x614) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                                  if ((unaff_x19[0xca] == 0) ||
                                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  fVar28 = (float)FUN_00e4e9f4(fVar35);
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                                                  *(float *)(unaff_x19 + 200) = fVar33;
                                                  fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  unaff_x19[0xc3] =
                                                       CONCAT44(fVar33 + (float)((ulong)unaff_x19[
                                                  0xc3] >> 0x20),fVar28 + (float)unaff_x19[0xc3]);
                                                  *(float *)(unaff_x19 + 0xc4) = fVar37;
                                                  if ((unaff_x19[0xca] == 0) ||
                                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  fVar35 = (float)FUN_00e4e9f4(fVar35);
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar37;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[6] =
                                                       CONCAT44(fVar37 + (float)((ulong)
                                                  in_stack_00000040[6] >> 0x20),
                                                  fVar35 + (float)in_stack_00000040[6]);
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x62c) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  }
                                                  if (*(long *)(lVar16 + 0xc0) == 0)
                                                  goto LAB_00e443fc;
                                                  if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x50) !=
                                                      '\0') {
                                                    FUN_00e5eda8(lVar16,0);
                                                    fVar35 = (float)FUN_00e4eb50();
                                                    lVar16 = unaff_x19[0xca];
                                                    *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                    *(float *)(unaff_x19 + 200) = fVar37;
                                                    fVar28 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                    unaff_x19[0xc0] =
                                                         CONCAT44(fVar37 + (float)((ulong)unaff_x19[
                                                  0xc0] >> 0x20),fVar35 + (float)unaff_x19[0xc0]);
                                                  *(float *)(unaff_x19 + 0xc1) = fVar28;
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  FUN_00e5b838(lVar16,0);
                                                  fVar35 = (float)FUN_00e4eb50();
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar28;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[3] =
                                                       CONCAT44(fVar28 + (float)((ulong)
                                                  in_stack_00000040[3] >> 0x20),
                                                  fVar35 + (float)in_stack_00000040[3]);
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x614) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  FUN_00e5eea4(lVar16,0);
                                                  fVar35 = (float)FUN_00e4eb50();
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar28;
                                                  fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  unaff_x19[0xc3] =
                                                       CONCAT44(fVar28 + (float)((ulong)unaff_x19[
                                                  0xc3] >> 0x20),fVar35 + (float)unaff_x19[0xc3]);
                                                  *(float *)(unaff_x19 + 0xc4) = fVar37;
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  FUN_00e5b7d8(lVar16,0);
                                                  fVar35 = (float)FUN_00e4eb50();
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar37;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[6] =
                                                       CONCAT44(fVar37 + (float)((ulong)
                                                  in_stack_00000040[6] >> 0x20),
                                                  fVar35 + (float)in_stack_00000040[6]);
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x62c) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  }
                                                  lVar11 = *(long *)(lVar16 + 0xc0);
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(char *)(lVar11 + 0x60) != '\0') {
                                                    uVar25 = *(undefined8 *)(lVar11 + 0x68);
                                                    uVar21 = FUN_00e5eda8(lVar16,0);
                                                    fVar35 = (float)FUN_00e4ecc4(uVar21,lVar16,
                                                                                 uVar25);
                                                    lVar16 = unaff_x19[0xca];
                                                    *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                    *(float *)(unaff_x19 + 200) = fVar37;
                                                    fVar28 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                                    *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                    unaff_x19[0xc0] =
                                                         CONCAT44(fVar37 + (float)((ulong)unaff_x19[
                                                  0xc0] >> 0x20),fVar35 + (float)unaff_x19[0xc0]);
                                                  *(float *)(unaff_x19 + 0xc1) = fVar28;
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  uVar25 = *(undefined8 *)
                                                            (*(long *)(lVar16 + 0xc0) + 0x68);
                                                  uVar21 = FUN_00e5b838(lVar16,0);
                                                  fVar35 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25)
                                                  ;
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar28;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[3] =
                                                       CONCAT44(fVar28 + (float)((ulong)
                                                  in_stack_00000040[3] >> 0x20),
                                                  fVar35 + (float)in_stack_00000040[3]);
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x614) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  uVar25 = *(undefined8 *)
                                                            (*(long *)(lVar16 + 0xc0) + 0x68);
                                                  uVar21 = FUN_00e5eea4(lVar16,0);
                                                  fVar35 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25)
                                                  ;
                                                  lVar16 = unaff_x19[0xca];
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar28;
                                                  fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  unaff_x19[0xc3] =
                                                       CONCAT44(fVar28 + (float)((ulong)unaff_x19[
                                                  0xc3] >> 0x20),fVar35 + (float)unaff_x19[0xc3]);
                                                  *(float *)(unaff_x19 + 0xc4) = fVar37;
                                                  if ((lVar16 == 0) ||
                                                     (*(long *)(lVar16 + 0xc0) == 0))
                                                  goto LAB_00e443fc;
                                                  uVar25 = *(undefined8 *)
                                                            (*(long *)(lVar16 + 0xc0) + 0x68);
                                                  uVar21 = FUN_00e5b7d8(lVar16,0);
                                                  fVar35 = (float)FUN_00e4ecc4(uVar21,lVar16,uVar25)
                                                  ;
                                                  *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                                  *(float *)(unaff_x19 + 200) = fVar37;
                                                  *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                                  in_stack_00000040[6] =
                                                       CONCAT44(fVar37 + (float)((ulong)
                                                  in_stack_00000040[6] >> 0x20),
                                                  fVar35 + (float)in_stack_00000040[6]);
                                                  *(float *)((long)unaff_x19 + 0x62c) =
                                                       fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                                  }
                                                  }
                                                }
                                              }
                                              in_stack_00000068 = (int)in_stack_00000050 << 2;
                                              if ((fStack000000000000004c <= 0.0) ||
                                                 ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
                                                if (*(char *)((long)unaff_x19 + 300) == '\0') {
                                                  in_stack_00000040[0x1e] = unaff_x19[0x24];
                                                }
                                                else {
                                                  if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                  uVar21 = *(undefined8 *)((long)*unaff_x26 + 0x80);
                                                  in_stack_00000040[0x1e] =
                                                       CONCAT44((float)((ulong)unaff_x19[0x24] >>
                                                                       0x20) *
                                                                (float)((ulong)uVar21 >> 0x20),
                                                                (float)unaff_x19[0x24] *
                                                                (float)uVar21);
                                                }
                                                lVar16 = unaff_x19[0x5e];
                                                *(int *)((long)unaff_x19 + 0x6ec) =
                                                     (int)unaff_x19[0x25];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                fVar35 = (float)FUN_00e5eda8(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                                uVar12 = (ulong)(int)in_stack_00000068;
                                                *(float *)(lVar16 + uVar12 * 0xc + 0x20) =
                                                     fVar35 + fVar37 + *(float *)(unaff_x19 + 0xc0)
                                                     + *(float *)((long)unaff_x19 + 0x5f4) +
                                                     *(float *)(unaff_x19 + 0xc6) +
                                                     *(float *)((long)unaff_x19 + 0x6e4);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5eda8(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                fVar35 = *(float *)((long)unaff_x19 + 0x604);
                                                *(float *)(lVar16 + uVar12 * 0xc + 0x24) =
                                                     fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35
                                                     + *(float *)(unaff_x19 + 0xbf) +
                                                     *(float *)((long)unaff_x19 + 0x634) +
                                                     *(float *)(unaff_x19 + 0xdd);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5eda8(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                *(float *)(lVar16 + uVar12 * 0xc + 0x28) =
                                                     fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                                     *(float *)(unaff_x19 + 0xc1) +
                                                     *(float *)((long)unaff_x19 + 0x5fc) +
                                                     *(float *)(unaff_x19 + 199) +
                                                     *(float *)((long)unaff_x19 + 0x6ec);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                fVar35 = (float)FUN_00e5b838(*unaff_x26,0);
                                                uVar13 = uVar12 | 1;
                                                uVar23 = (uint)uVar13;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                goto LAB_00e44400;
                                                fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                                *(float *)(lVar16 + uVar13 * 0xc + 0x20) =
                                                     fVar35 + fVar37 +
                                                     *(float *)((long)unaff_x19 + 0x60c) +
                                                     *(float *)((long)unaff_x19 + 0x5f4) +
                                                     *(float *)(unaff_x19 + 0xc6) +
                                                     *(float *)((long)unaff_x19 + 0x6e4);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5b838(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                goto LAB_00e44400;
                                                fVar35 = *(float *)(unaff_x19 + 0xc2);
                                                *(float *)(lVar16 + uVar13 * 0xc + 0x24) =
                                                     fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35
                                                     + *(float *)(unaff_x19 + 0xbf) +
                                                     *(float *)((long)unaff_x19 + 0x634) +
                                                     *(float *)(unaff_x19 + 0xdd);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5b838(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                goto LAB_00e44400;
                                                *(float *)(lVar16 + uVar13 * 0xc + 0x28) =
                                                     fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                                     *(float *)((long)unaff_x19 + 0x614) +
                                                     *(float *)((long)unaff_x19 + 0x5fc) +
                                                     *(float *)(unaff_x19 + 199) +
                                                     *(float *)((long)unaff_x19 + 0x6ec);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                fVar35 = (float)FUN_00e5eea4(*unaff_x26,0);
                                                uVar26 = uVar12 | 2;
                                                uVar24 = (uint)uVar26;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                goto LAB_00e44400;
                                                fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                                *(float *)(lVar16 + uVar26 * 0xc + 0x20) =
                                                     fVar35 + fVar37 + *(float *)(unaff_x19 + 0xc3)
                                                     + *(float *)((long)unaff_x19 + 0x5f4) +
                                                     *(float *)(unaff_x19 + 0xc6) +
                                                     *(float *)((long)unaff_x19 + 0x6e4);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5eea4(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                goto LAB_00e44400;
                                                fVar35 = *(float *)((long)unaff_x19 + 0x61c);
                                                *(float *)(lVar16 + uVar26 * 0xc + 0x24) =
                                                     fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35
                                                     + *(float *)(unaff_x19 + 0xbf) +
                                                     *(float *)((long)unaff_x19 + 0x634) +
                                                     *(float *)(unaff_x19 + 0xdd);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5eea4(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                goto LAB_00e44400;
                                                *(float *)(lVar16 + uVar26 * 0xc + 0x28) =
                                                     fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                                     *(float *)(unaff_x19 + 0xc4) +
                                                     *(float *)((long)unaff_x19 + 0x5fc) +
                                                     *(float *)(unaff_x19 + 199) +
                                                     *(float *)((long)unaff_x19 + 0x6ec);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                fVar35 = (float)FUN_00e5b7d8(*unaff_x26,0);
                                                uVar27 = uVar12 | 3;
                                                uVar17 = (uint)uVar27;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                goto LAB_00e44400;
                                                fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                                *(float *)(lVar16 + uVar27 * 0xc + 0x20) =
                                                     fVar35 + fVar37 +
                                                     *(float *)((long)unaff_x19 + 0x624) +
                                                     *(float *)((long)unaff_x19 + 0x5f4) +
                                                     *(float *)(unaff_x19 + 0xc6) +
                                                     *(float *)((long)unaff_x19 + 0x6e4);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5b7d8(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                goto LAB_00e44400;
                                                uVar36 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                                                *(float *)(lVar16 + uVar27 * 0xc + 0x24) =
                                                     fVar37 + *(float *)(unaff_x19 + 0xcf) +
                                                     *(float *)(unaff_x19 + 0xc5) +
                                                     *(float *)(unaff_x19 + 0xbf) +
                                                     *(float *)((long)unaff_x19 + 0x634) +
                                                     *(float *)(unaff_x19 + 0xdd);
                                                lVar16 = unaff_x19[0x5e];
                                                if ((lVar16 == 0) || (*unaff_x26 == 0.0))
                                                goto LAB_00e443fc;
                                                FUN_00e5b7d8(*unaff_x26,0);
                                                if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                goto LAB_00e44400;
                                                fVar35 = *(float *)((long)unaff_x19 + 0x62c);
                                                *(float *)(lVar16 + uVar27 * 0xc + 0x28) =
                                                     (float)uVar36 +
                                                     *(float *)((long)unaff_x19 + 0x67c) + fVar35 +
                                                     *(float *)((long)unaff_x19 + 0x5fc) +
                                                     *(float *)(unaff_x19 + 199) +
                                                     *(float *)((long)unaff_x19 + 0x6ec);
                                                lVar16 = unaff_x19[0xca];
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                lVar11 = *in_stack_00000020;
                                                if (*(char *)(lVar16 + 0x108) == '\0') {
                                                  uVar31 = FUN_0272b9dc(lVar16 + 0x10,0);
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  lVar11 = lVar11 + uVar12 * 8;
                                                  *(undefined4 *)(lVar11 + 0x20) = uVar31;
                                                  *(float *)(lVar11 + 0x24) = fVar35;
                                                  if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = thunk_FUN_0272b8d8((long)*unaff_x26 +
                                                                              0x10,0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar13 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar26 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar27 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                                  uVar31 = FUN_00e5ecc0(*unaff_x26,0);
                                                  *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
                                                  if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                                  FUN_00e5ecc0(unaff_x19[0xca],0);
                                                  *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
                                                  unaff_x24 = in_stack_00000030;
                                                }
                                                else {
                                                  if ((*(long *)(lVar16 + 0x100) == 0) ||
                                                     (uVar31 = FUN_00e5dd14(fStack0000000000000048,
                                                                            *(long *)(lVar16 + 0x100
                                                                                     ),
                                                                            *(undefined4 *)
                                                                             (lVar16 + 0x10c),0),
                                                     lVar11 == 0)) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  lVar11 = lVar11 + uVar12 * 8;
                                                  *(undefined4 *)(lVar11 + 0x20) = uVar31;
                                                  *(float *)(lVar11 + 0x24) = fVar35;
                                                  dVar15 = *unaff_x26;
                                                  if ((dVar15 == 0.0) ||
                                                     (*(long *)((long)dVar15 + 0x100) == 0))
                                                  goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = FUN_00e5de6c(fStack0000000000000048,
                                                                        *(long *)((long)dVar15 +
                                                                                 0x100),
                                                                        *(undefined4 *)
                                                                         ((long)dVar15 + 0x10c),0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar13 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  dVar15 = *unaff_x26;
                                                  if ((dVar15 == 0.0) ||
                                                     (*(long *)((long)dVar15 + 0x100) == 0))
                                                  goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = FUN_00e5dea4(fStack0000000000000048,
                                                                        *(long *)((long)dVar15 +
                                                                                 0x100),
                                                                        *(undefined4 *)
                                                                         ((long)dVar15 + 0x10c),0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar26 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  dVar15 = *unaff_x26;
                                                  if ((dVar15 == 0.0) ||
                                                     (*(long *)((long)dVar15 + 0x100) == 0))
                                                  goto LAB_00e443fc;
                                                  lVar16 = *in_stack_00000020;
                                                  uVar31 = thunk_FUN_00e5dd60(fStack0000000000000048
                                                                              ,*(long *)((long)
                                                  dVar15 + 0x100),
                                                  *(undefined4 *)((long)dVar15 + 0x10c),0);
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  lVar16 = lVar16 + uVar27 * 8;
                                                  *(undefined4 *)(lVar16 + 0x20) = uVar31;
                                                  *(float *)(lVar16 + 0x24) = fVar35;
                                                  dVar15 = *unaff_x26;
                                                  if ((dVar15 == 0.0) ||
                                                     (*(long *)((long)dVar15 + 0x100) == 0))
                                                  goto LAB_00e443fc;
                                                  uVar31 = FUN_00e5dedc(fStack0000000000000048,
                                                                        *(long *)((long)dVar15 +
                                                                                 0x100),
                                                                        *(undefined4 *)
                                                                         ((long)dVar15 + 0x10c),0);
                                                  lVar16 = unaff_x19[0xca];
                                                  *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
                                                  *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
                                                  if ((lVar16 == 0) ||
                                                     (lVar11 = *(long *)(lVar16 + 0x100),
                                                     lVar11 == 0)) goto LAB_00e443fc;
                                                  unaff_x24 = in_stack_00000030;
                                                  if (((1 < *(int *)(lVar11 + 0x28)) &&
                                                      (0.0 < *(float *)(lVar11 + 0x34))) &&
                                                     (*(int *)(lVar16 + 0x10c) < 0)) {
                                                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                                  }
                                                }
                                              }
                                              else {
                                                dVar15 = *unaff_x26;
                                                if (dVar15 == 0.0) goto LAB_00e443fc;
                                                uVar36 = (ulong)(uint)*(float *)((long)unaff_x19 +
                                                                                0x634);
                                                if ((*(float *)((long)dVar15 + 0x48) +
                                                     *(float *)((long)dVar15 + 0x84) +
                                                    *(float *)((long)unaff_x19 + 0x634)) -
                                                    *(float *)((long)unaff_x19 + 0x53c) <=
                                                    DAT_028aa038 - *(float *)(unaff_x19 + 0x2f))
                                                goto LAB_00e3cd74;
                                                lVar16 = *in_stack_00000038;
                                                if (DAT_03774d76 == '\0') {
                                                  thunk_FUN_00d48444(puVar6);
                                                  DAT_03774d76 = '\x01';
                                                }
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                uVar31 = *(undefined4 *)
                                                          (*(undefined8 **)(*(long *)puVar6 + 0xb8)
                                                          + 1);
                                                uVar12 = (ulong)(int)in_stack_00000068;
                                                lVar16 = lVar16 + uVar12 * 0xc;
                                                *(undefined8 *)(lVar16 + 0x20) =
                                                     **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                                *(undefined4 *)(lVar16 + 0x28) = uVar31;
                                                lVar16 = *in_stack_00000038;
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 1))
                                                goto LAB_00e44400;
                                                lVar16 = lVar16 + (uVar12 | 1) * 0xc;
                                                uVar31 = *(undefined4 *)
                                                          (*(undefined8 **)(*(long *)puVar6 + 0xb8)
                                                          + 1);
                                                *(undefined8 *)(lVar16 + 0x20) =
                                                     **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                                *(undefined4 *)(lVar16 + 0x28) = uVar31;
                                                lVar16 = *in_stack_00000038;
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 2))
                                                goto LAB_00e44400;
                                                lVar16 = lVar16 + (uVar12 | 2) * 0xc;
                                                uVar31 = *(undefined4 *)
                                                          (*(undefined8 **)(*(long *)puVar6 + 0xb8)
                                                          + 1);
                                                *(undefined8 *)(lVar16 + 0x20) =
                                                     **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                                *(undefined4 *)(lVar16 + 0x28) = uVar31;
                                                lVar16 = *in_stack_00000038;
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar12 | 3))
                                                goto LAB_00e44400;
                                                lVar16 = lVar16 + (uVar12 | 3) * 0xc;
                                                uVar31 = *(undefined4 *)
                                                          (*(undefined8 **)(*(long *)puVar6 + 0xb8)
                                                          + 1);
                                                *(undefined8 *)(lVar16 + 0x20) =
                                                     **(undefined8 **)(*(long *)puVar6 + 0xb8);
                                                *(undefined4 *)(lVar16 + 0x28) = uVar31;
                                              }
                                              if (*unaff_x26 == 0.0) goto LAB_00e443fc;
                                              uVar21 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
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
                                                if ((*unaff_x26 == 0.0) ||
                                                   (lVar16 = *(long *)((long)*unaff_x26 + 0xf8),
                                                   lVar16 == 0)) goto LAB_00e443fc;
                                                lVar16 = *(long *)(lVar16 + 0x18);
                                              }
                                              if (((lVar16 == 0) ||
                                                  (lVar16 = FUN_0272bcf4(lVar16,0), lVar16 == 0)) ||
                                                 (plVar10 = (long *)FUN_0267dac8(lVar16,0),
                                                 plVar10 == (long *)0x0)) goto LAB_00e443fc;
                                              iVar9 = (**(code **)(*plVar10 + 0x188))
                                                                (plVar10,*(undefined8 *)
                                                                          (*plVar10 + 400));
                                              *(float *)(unaff_x19 + 0xda) = (float)iVar9;
                                              iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                                (plVar10,*(undefined8 *)
                                                                          (*plVar10 + 0x1b0));
                                              *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
                                              *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                                              *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                                                   *(undefined4 *)((long)unaff_x19 + 0x6cc);
                                              puVar6 = 
                                              UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                              ;
                                              if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                              _fStack0000000000000070 =
                                                   (double)CONCAT44((float)iVar9,
                                                                    (int)unaff_x19[0xda]);
                                              in_stack_00000078 = unaff_x19[0xd9];
                                              FUN_0132149c(unaff_x19[0x62],in_stack_00000068,
                                                           &stack0x00000070,
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                                  );
                                              if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              unaff_x21 = (ulong)(int)in_stack_00000068;
                                              unaff_x22 = unaff_x21 | 1;
                                              FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,
                                                           &stack0x00000070,*(undefined8 *)puVar6);
                                              if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              unaff_x29 = unaff_x21 | 2;
                                              FUN_0132149c(unaff_x19[0x62],unaff_x29,
                                                           &stack0x00000070,*(undefined8 *)puVar6);
                                              if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              in_stack_00000058 = unaff_x21 | 3;
                                              FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,
                                                           &stack0x00000070,*(undefined8 *)puVar6);
                                              unaff_x25 = (long *)StringLiteral_9119;
                                              lVar16 = unaff_x19[0x60];
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if ((*(uint *)(lVar16 + 0x18) <= in_stack_00000068) ||
                                                 (uVar23 = (uint)in_stack_00000058,
                                                 *(uint *)(lVar16 + 0x18) <= uVar23))
                                              goto LAB_00e44400;
                                              lVar11 = unaff_x19[0xca];
                                              fVar35 = 0.0;
                                              if (*(float *)(lVar16 + 0x20 + unaff_x21 * 8) !=
                                                  *(float *)(lVar16 + 0x20 + in_stack_00000058 * 8))
                                              {
                                                fVar35 = fVar29;
                                              }
                                              *(float *)(unaff_x19 + 0xda) = fVar35;
                                              if (lVar11 == 0) goto LAB_00e443fc;
                                              cVar5 = *(char *)(lVar11 + 0x108);
                                              fVar35 = fVar29;
                                              if (cVar5 != '\0' ||
                                                  0x7fffffff < *(uint *)(lVar11 + 0x138)) {
                                                fVar35 = -1.0;
                                              }
                                              *(float *)((long)unaff_x19 + 0x6d4) =
                                                   *(float *)(lVar11 + 0x84) * fVar35;
                                              if (cVar5 == '\0') {
                                                iVar38 = *(int *)(lVar11 + 0x160);
                                                iVar9 = (**(code **)(*plVar10 + 0x188))
                                                                  (plVar10,*(undefined8 *)
                                                                            (*plVar10 + 400));
                                                uVar36 = 0x3e800000;
                                                *(float *)(unaff_x19 + 0xdb) =
                                                     (float)iVar38 / ((float)iVar9 * 0.25);
                                                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                                iVar38 = *(int *)(unaff_x19[0xca] + 0x160);
                                                iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                                  (plVar10,*(undefined8 *)
                                                                            (*plVar10 + 0x1b0));
                                                fVar37 = (float)iVar38;
                                                fVar35 = (float)iVar9;
                                                puVar18 = (undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                                ;
                                              }
                                              else {
                                                if (*(long *)(lVar11 + 0x100) == 0)
                                                goto LAB_00e443fc;
                                                fVar35 = (float)FUN_00e5df18(*(long *)(lVar11 + 
                                                  0x100),0);
                                                puVar18 = (undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                                ;
                                                if (((*in_stack_00000060 == 0.0) ||
                                                    (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                       0x100), lVar16 == 0)) ||
                                                   (plVar10 = *(long **)(lVar16 + 0x18),
                                                   plVar10 == (long *)0x0)) goto LAB_00e443fc;
                                                iVar9 = (**(code **)(*plVar10 + 0x188))
                                                                  (plVar10,*(undefined8 *)
                                                                            (*plVar10 + 400));
                                                if ((*in_stack_00000060 == 0.0) ||
                                                   (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                      0x100), lVar16 == 0))
                                                goto LAB_00e443fc;
                                                fVar37 = 0.25;
                                                *(float *)(unaff_x19 + 0xdb) =
                                                     fVar35 / (*(float *)(lVar16 + 0x40) *
                                                               (float)iVar9 * 0.25);
                                                FUN_00e5df18(lVar16,0);
                                                if ((unaff_x19[0xca] == 0) ||
                                                   ((lVar16 = *(long *)(unaff_x19[0xca] + 0x100),
                                                    lVar16 == 0 ||
                                                    (plVar10 = *(long **)(lVar16 + 0x18),
                                                    plVar10 == (long *)0x0)))) goto LAB_00e443fc;
                                                iVar9 = (**(code **)(*plVar10 + 0x1a8))
                                                                  (plVar10,*(undefined8 *)
                                                                            (*plVar10 + 0x1b0));
                                                if ((*in_stack_00000060 == 0.0) ||
                                                   (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                      0x100), lVar16 == 0))
                                                goto LAB_00e443fc;
                                                fVar35 = *(float *)(lVar16 + 0x44) * (float)iVar9;
                                              }
                                              fVar39 = 0.25;
                                              fVar37 = fVar37 / (fVar35 * 0.25);
                                              *(float *)((long)unaff_x19 + 0x6dc) = fVar37;
                                              if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              in_stack_00000078 =
                                                   CONCAT44(fVar37,(int)unaff_x19[0xdb]);
                                              FUN_0132149c(unaff_x19[99],in_stack_00000068,
                                                           &stack0x00000070,*puVar18);
                                              if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,
                                                           &stack0x00000070,*puVar18);
                                              if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,
                                                           &stack0x00000070,*puVar18);
                                              if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                              in_stack_00000078 = unaff_x19[0xdb];
                                              _fStack0000000000000070 = (double)unaff_x19[0xda];
                                              FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,
                                                           &stack0x00000070,*puVar18);
                                              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                              uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                                              if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                              }
                                              uVar12 = FUN_02681b9c(uVar21,0,0);
                                              fVar35 = (float)uVar36;
                                              uVar17 = (uint)unaff_x22;
                                              uVar24 = (uint)unaff_x29;
                                              if ((uVar12 & 1) != 0) {
                                                if (in_stack_00000050 == in_stack_00000010) {
                                                  if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                                  fVar37 = (float)FUN_00e5b838(*in_stack_00000060,0)
                                                  ;
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
                                                  fVar35 = fVar35 - pfVar14[2];
                                                  uVar36 = (ulong)(uint)fVar35;
                                                  if (fVar35 * fVar35 +
                                                      (fVar37 - *pfVar14) * (fVar37 - *pfVar14) +
                                                      (fVar39 - pfVar14[1]) * (fVar39 - pfVar14[1])
                                                      < DAT_028aa020) goto LAB_00e3dbd8;
                                                }
                                                if ((*in_stack_00000060 == 0.0) ||
                                                   (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                      0xb0), lVar16 == 0))
                                                goto LAB_00e443fc;
                                                uVar21 = *(undefined8 *)(lVar16 + 0x38);
                                                if (DAT_03774d77 == '\0') {
                                                  thunk_FUN_00d48444(
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  );
                                                  DAT_03774d77 = '\x01';
                                                }
                                                fVar35 = (float)uVar21 -
                                                         (float)**(undefined8 **)
                                                                  (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8);
                                                fVar37 = (float)((ulong)uVar21 >> 0x20) -
                                                         (float)((ulong)**(undefined8 **)
                                                                          (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                                                if (DAT_028aa020 <=
                                                    fVar35 * fVar35 + fVar37 * fVar37) {
                                                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                                }
                                                dVar15 = *in_stack_00000060;
                                                if ((dVar15 == 0.0) ||
                                                   (lVar16 = *(long *)((long)dVar15 + 0xb0),
                                                   lVar16 == 0)) goto LAB_00e443fc;
                                                fVar37 = fStack0000000000000048 *
                                                         *(float *)(lVar16 + 0x38);
                                                *(float *)(unaff_x19 + 0xc9) = fVar37;
                                                fVar35 = fStack0000000000000048 *
                                                         *(float *)(lVar16 + 0x3c);
                                                *(float *)((long)unaff_x19 + 0x64c) = fVar35;
                                                if (*(char *)(lVar16 + 0x25) != '\0') {
                                                  fVar34 = 1.0 / *(float *)((long)dVar15 + 0x84);
                                                }
                                                lVar16 = *in_stack_00000038;
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                lVar11 = lVar16 + unaff_x21 * 0xc;
                                                fVar39 = *(float *)(lVar11 + 0x20);
                                                uVar21 = *(undefined8 *)(lVar11 + 0x24);
                                                *(float *)(unaff_x19 + 0xcd) = fVar39;
                                                in_stack_00000040[0xf] = uVar21;
                                                *(float *)(unaff_x19 + 0xd0) = fVar39;
                                                fVar28 = (float)uVar21;
                                                *(float *)((long)unaff_x19 + 0x684) = fVar28;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                goto LAB_00e44400;
                                                lVar11 = lVar16 + unaff_x22 * 0xc;
                                                uVar31 = *(undefined4 *)(lVar11 + 0x20);
                                                uVar21 = *(undefined8 *)(lVar11 + 0x24);
                                                *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                                                in_stack_00000040[0xf] = uVar21;
                                                *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
                                                *(int *)((long)unaff_x19 + 0x694) = (int)uVar21;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                goto LAB_00e44400;
                                                lVar11 = lVar16 + unaff_x29 * 0xc;
                                                uVar31 = *(undefined4 *)(lVar11 + 0x20);
                                                uVar21 = *(undefined8 *)(lVar11 + 0x24);
                                                *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                                                in_stack_00000040[0xf] = uVar21;
                                                *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
                                                *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar21;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                goto LAB_00e44400;
                                                lVar16 = lVar16 + in_stack_00000058 * 0xc;
                                                uVar31 = *(undefined4 *)(lVar16 + 0x20);
                                                uVar21 = *(undefined8 *)(lVar16 + 0x24);
                                                *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                                                in_stack_00000040[0xf] = uVar21;
                                                *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
                                                *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar21;
                                                lVar16 = *(long *)((long)dVar15 + 0xb0);
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(char *)(lVar16 + 0x24) == '\0') {
                                                  lVar11 = *in_stack_00000028;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  uVar4 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                                                  lVar20 = lVar11 + unaff_x21 * 8;
                                                  *(float *)(lVar20 + 0x20) =
                                                       (fVar37 + fVar34 * fVar39) -
                                                       *(float *)(lVar16 + 0x30);
                                                  *(float *)(lVar20 + 0x24) =
                                                       (fVar35 + fVar34 * fVar28) -
                                                       *(float *)(lVar16 + 0x34);
                                                  if (((uVar4 <= uVar17) ||
                                                      (*(ulong *)(lVar11 + unaff_x22 * 8 + 0x20) =
                                                            CONCAT44(((float)((ulong)unaff_x19[0xd2]
                                                                             >> 0x20) * fVar34 +
                                                                     (float)((ulong)unaff_x19[0xc9]
                                                                            >> 0x20)) -
                                                                     (float)((ulong)*(undefined8 *)
                                                                                     (lVar16 + 0x30)
                                                                            >> 0x20),
                                                                     ((float)unaff_x19[0xd2] *
                                                                      fVar34 + (float)unaff_x19[0xc9
                                                  ]) - (float)*(undefined8 *)(lVar16 + 0x30)),
                                                  uVar4 <= uVar24)) ||
                                                  (*(ulong *)(lVar11 + unaff_x29 * 8 + 0x20) =
                                                        CONCAT44((fVar34 * (float)((ulong)unaff_x19[
                                                  0xd4] >> 0x20) +
                                                  (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  (fVar34 * (float)unaff_x19[0xd4] +
                                                  (float)unaff_x19[0xc9]) -
                                                  (float)*(undefined8 *)(lVar16 + 0x30)),
                                                  uVar4 <= uVar23)) goto LAB_00e44400;
                                                  uVar36 = unaff_x19[0xc9];
                                                  *(ulong *)(lVar11 + in_stack_00000058 * 8 + 0x20)
                                                       = CONCAT44((fVar34 * (float)((ulong)unaff_x19
                                                  [0xd6] >> 0x20) + (float)(uVar36 >> 0x20)) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  (fVar34 * (float)unaff_x19[0xd6] + (float)uVar36)
                                                  - (float)*(undefined8 *)(lVar16 + 0x30));
                                                }
                                                else {
                                                  fVar33 = *(float *)((long)dVar15 + 0x44);
                                                  *(float *)(unaff_x19 + 0xd8) = fVar33;
                                                  fVar3 = *(float *)((long)dVar15 + 0x48);
                                                  lVar11 = unaff_x19[0x61];
                                                  *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  uVar4 = *(uint *)(lVar11 + 0x18);
                                                  if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
                                                  lVar20 = lVar11 + unaff_x21 * 8;
                                                  *(float *)(lVar20 + 0x20) =
                                                       (fVar37 + fVar34 * (fVar39 - fVar33)) -
                                                       *(float *)(lVar16 + 0x30);
                                                  *(float *)(lVar20 + 0x24) =
                                                       (fVar35 + fVar34 * (fVar28 - fVar3)) -
                                                       *(float *)(lVar16 + 0x34);
                                                  if (((uVar4 <= uVar17) ||
                                                      (*(ulong *)(lVar11 + unaff_x22 * 8 + 0x20) =
                                                            CONCAT44(((float)((ulong)unaff_x19[0xc9]
                                                                             >> 0x20) +
                                                                     ((float)((ulong)unaff_x19[0xd2]
                                                                             >> 0x20) -
                                                                     (float)((ulong)unaff_x19[0xd8]
                                                                            >> 0x20)) * fVar34) -
                                                                     (float)((ulong)*(undefined8 *)
                                                                                     (lVar16 + 0x30)
                                                                            >> 0x20),
                                                                     ((float)unaff_x19[0xc9] +
                                                                     ((float)unaff_x19[0xd2] -
                                                                     (float)unaff_x19[0xd8]) *
                                                                     fVar34) - (float)*(undefined8 *
                                                                                       )(lVar16 + 
                                                  0x30)), uVar4 <= uVar24)) ||
                                                  (*(ulong *)(lVar11 + unaff_x29 * 8 + 0x20) =
                                                        CONCAT44(((float)((ulong)unaff_x19[0xc9] >>
                                                                         0x20) +
                                                                 fVar34 * ((float)((ulong)unaff_x19[
                                                  0xd4] >> 0x20) -
                                                  (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  ((float)unaff_x19[0xc9] +
                                                  fVar34 * ((float)unaff_x19[0xd4] -
                                                           (float)unaff_x19[0xd8])) -
                                                  (float)*(undefined8 *)(lVar16 + 0x30)),
                                                  uVar4 <= uVar23)) goto LAB_00e44400;
                                                  uVar36 = unaff_x19[0xd8];
                                                  *(ulong *)(lVar11 + in_stack_00000058 * 8 + 0x20)
                                                       = CONCAT44(((float)((ulong)unaff_x19[0xc9] >>
                                                                          0x20) +
                                                                  fVar34 * ((float)((ulong)unaff_x19
                                                  [0xd6] >> 0x20) - (float)(uVar36 >> 0x20))) -
                                                  (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >>
                                                         0x20),
                                                  ((float)unaff_x19[0xc9] +
                                                  fVar34 * ((float)unaff_x19[0xd6] - (float)uVar36))
                                                  - (float)*(undefined8 *)(lVar16 + 0x30));
                                                }
                                              }
LAB_00e3dbd8:
                                              dVar15 = *in_stack_00000060;
                                              if (dVar15 == 0.0) goto LAB_00e443fc;
                                              if (*(char *)((long)dVar15 + 0x108) != '\0') {
                                                if (*(long *)((long)dVar15 + 0x100) == 0)
                                                goto LAB_00e443fc;
                                                if (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20
                                                             ) == '\0') {
                                                  lVar16 = *in_stack_00000020;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  lVar11 = *in_stack_00000028;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  *(undefined8 *)(lVar11 + unaff_x21 * 8 + 0x20) =
                                                       *(undefined8 *)
                                                        (lVar16 + unaff_x21 * 8 + 0x20);
                                                  lVar16 = *in_stack_00000020;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  lVar11 = *in_stack_00000028;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *(undefined8 *)
                                                   (lVar11 + (long)(int)uVar17 * 8 + 0x20) =
                                                       *(undefined8 *)
                                                        (lVar16 + (long)(int)uVar17 * 8 + 0x20);
                                                  lVar16 = *in_stack_00000020;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  lVar11 = *in_stack_00000028;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *(undefined8 *)
                                                   (lVar11 + (long)(int)uVar24 * 8 + 0x20) =
                                                       *(undefined8 *)
                                                        (lVar16 + (long)(int)uVar24 * 8 + 0x20);
                                                  lVar16 = *in_stack_00000020;
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  lVar11 = *in_stack_00000028;
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  *(undefined8 *)
                                                   (lVar11 + in_stack_00000058 * 8 + 0x20) =
                                                       *(undefined8 *)
                                                        (lVar16 + in_stack_00000058 * 8 + 0x20);
                                                  dVar15 = *in_stack_00000060;
                                                  if (dVar15 == 0.0) goto LAB_00e443fc;
                                                }
                                              }
                                              dVar32 = DAT_028aa048;
                                              unaff_x26 = in_stack_00000060;
                                              if (*(char *)((long)dVar15 + 0x108) != '\0') {
                                                if (*(long *)((long)dVar15 + 0x100) == 0)
                                                goto LAB_00e443fc;
                                                if (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20
                                                             ) == '\0') {
                                                  lVar16 = *unaff_x24;
                                                  dVar15 = modf(DAT_028aa048,
                                                                (double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = 255.0;
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar35 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  lVar16 = *unaff_x24;
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = 255.0;
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar35 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  lVar16 = *unaff_x24;
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = 255.0;
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar35 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  lVar16 = *unaff_x24;
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = 255.0;
                                                  }
                                                  dVar15 = modf(dVar32,(double *)&stack0x00000070);
                                                  if (dVar15 == 0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = 255.0;
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar35 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
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
                                              if ((uVar12 & 1) != 0) {
                                                lVar16 = *(long *)((long)dVar15 + 0xa8);
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                fVar34 = *(float *)(lVar16 + 0x24);
                                                if (fVar34 != 0.0) {
                                                  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                                }
                                                unaff_x25 = (long *)StringLiteral_9119;
                                                cVar5 = *(char *)(lVar16 + 0x2c);
                                                unaff_x20 = *unaff_x24;
                                                lVar11 = *(long *)(lVar16 + 0x18);
                                                fVar34 = fStack0000000000000048 * fVar34;
                                                if (*(int *)(lVar16 + 0x28) == 1) {
                                                  if (cVar5 == '\0') {
                                                    if (lVar11 == 0) goto LAB_00e443fc;
                                                    fVar37 = *(float *)(lVar16 + 0x20);
                                                    fVar30 = *(float *)((long)dVar15 + 0x84);
                                                    fVar34 = fVar34 + (*(float *)((long)dVar15 +
                                                                                 0x48) * fVar37) /
                                                                      fVar30;
                                                    fVar34 = fVar34 - (float)(int)fVar34;
                                                    fVar35 = fVar34;
                                                    if (1.0 < fVar34) {
                                                      fVar35 = fVar29;
                                                    }
                                                    fVar39 = fVar35;
                                                    if (fVar34 < 0.0) {
                                                      fVar39 = 0.0;
                                                    }
                                                    fVar39 = (float)FUN_0269ad38(fVar39,lVar11,0);
                                                    unaff_w23 = 255.0;
                                                    fVar34 = fVar39;
                                                    if (1.0 < fVar39) {
                                                      fVar34 = fVar29;
                                                    }
                                                    fVar34 = fVar34 * 255.0;
                                                    if (fVar39 < 0.0) {
                                                      fVar34 = 0.0;
                                                    }
                                                    dVar15 = modf((double)fVar34,
                                                                  (double *)&stack0x00000070);
                                                    if (0.0 <= fVar34) {
                                                      if (dVar15 == 0.5) {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                        goto LAB_00e3eeac;
                                                      }
                                                      unaff_s14 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                    else if (dVar15 == -0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
LAB_00e3eeac:
                                                      unaff_s14 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        unaff_s14 = fVar34;
                                                      }
                                                    }
                                                    else {
                                                      unaff_s14 = (float)(int)(fVar34 + -0.5);
                                                    }
                                                    fVar34 = fVar35;
                                                    if (1.0 < fVar35) {
                                                      fVar34 = 1.0;
                                                    }
                                                    fVar34 = fVar34 * 255.0;
                                                    if (fVar35 < 0.0) {
                                                      fVar34 = 0.0;
                                                    }
                                                    dVar15 = modf((double)fVar34,
                                                                  (double *)&stack0x00000070);
                                                    if (0.0 <= fVar34) {
                                                      if (dVar15 == 0.5) {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                        goto LAB_00e41534;
                                                      }
                                                      unaff_s9 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                    else if (dVar15 == -0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
LAB_00e41534:
                                                      unaff_s9 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        unaff_s9 = fVar34;
                                                      }
                                                    }
                                                    else {
                                                      unaff_s9 = (float)(int)(fVar34 + -0.5);
                                                    }
                                                    fVar34 = fVar37;
                                                    if (1.0 < fVar37) {
                                                      fVar34 = 1.0;
                                                    }
                                                    fVar34 = fVar34 * 255.0;
                                                    if (fVar37 < 0.0) {
                                                      fVar34 = 0.0;
                                                    }
                                                    dVar15 = modf((double)fVar34,
                                                                  (double *)&stack0x00000070);
                                                    if (0.0 <= fVar34) {
                                                      if (dVar15 == 0.5) {
                                                        unaff_s12 = (float)_fStack0000000000000070;
                                                        if (((long)_fStack0000000000000070 & 1U) !=
                                                            0) {
                                                          unaff_s12 = (float)_fStack0000000000000070
                                                                      + 1.0;
                                                        }
                                                      }
                                                      else {
                                                        unaff_s12 = (float)(int)(fVar34 + 0.5);
                                                      }
                                                    }
                                                    else if (dVar15 == -0.5) {
                                                      unaff_s12 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        unaff_s12 = (float)_fStack0000000000000070 +
                                                                    -1.0;
                                                      }
                                                    }
                                                    else {
                                                      unaff_s12 = (float)(int)(fVar34 + -0.5);
                                                    }
                                                    param_1 = fVar30;
                                                    if (1.0 < fVar30) {
                                                      param_1 = 1.0;
                                                    }
                                                    param_1 = param_1 * 255.0;
                                                    if (fVar30 < 0.0) {
                                                      param_1 = 0.0;
                                                    }
                                                    dVar15 = modf((double)param_1,
                                                                  (double *)&stack0x00000070);
                                                    if (0.0 <= param_1) {
                                                      if (dVar15 == 0.5) {
                                                        fVar34 = (float)_fStack0000000000000070;
                                                        if (((long)_fStack0000000000000070 & 1U) !=
                                                            0) {
                                                          fVar34 = (float)_fStack0000000000000070 +
                                                                   1.0;
                                                        }
                                                      }
                                                      else {
                                                        fVar34 = (float)(int)(param_1 + 0.5);
                                                      }
                                                      goto joined_r0x00e41870;
                                                    }
                                                    if (dVar15 != -0.5) {
                                                      param_1 = param_1 + -0.5;
                                                      goto code_r0x00e41858;
                                                    }
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                    goto joined_r0x00e41870;
                                                  }
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  fVar37 = *(float *)((long)dVar15 + 0x84);
                                                  fVar30 = *(float *)(lVar16 + 0x20);
                                                  fVar34 = fVar34 + ((*(float *)((long)dVar15 + 0x48
                                                                                ) + fVar37) * fVar30
                                                                    ) / fVar37;
                                                  fVar34 = fVar34 - (float)(int)fVar34;
                                                  fVar35 = fVar34;
                                                  if (1.0 < fVar34) {
                                                    fVar35 = fVar29;
                                                  }
                                                  fVar39 = fVar35;
                                                  if (fVar34 < 0.0) {
                                                    fVar39 = 0.0;
                                                  }
                                                  fVar39 = (float)FUN_0269ad38(fVar39,lVar11,0);
                                                  unaff_w23 = 255.0;
                                                  fVar34 = fVar39;
                                                  if (1.0 < fVar39) {
                                                    fVar34 = fVar29;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar39 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3ed6c;
                                                    }
                                                    fVar29 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar34 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3f2ec;
                                                    }
                                                    fVar35 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar34 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar37 = fVar30;
                                                  if (1.0 < fVar30) {
                                                    fVar37 = 1.0;
                                                  }
                                                  fVar37 = fVar37 * 255.0;
                                                  if (fVar30 < 0.0) {
                                                    fVar37 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar37,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar37) {
                                                    if (dVar15 == 0.5) {
                                                      fVar37 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar37 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar37 = (float)(int)(fVar37 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar37 + -0.5);
                                                  }
                                                  if (unaff_x20 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(unaff_x20 + 0x18) <=
                                                      in_stack_00000068) goto LAB_00e44400;
                                                  *(uint *)(unaff_x20 + unaff_x21 * 4 + 0x20) =
                                                       (int)fVar29 & 0xffU |
                                                       ((int)fVar35 & 0xffU) << 8 |
                                                       ((int)fVar34 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  dVar15 = *in_stack_00000060;
                                                  if (((dVar15 == 0.0) ||
                                                      (lVar16 = *(long *)((long)dVar15 + 0xa8),
                                                      lVar16 == 0)) ||
                                                     (lVar11 = *(long *)(lVar16 + 0x18), lVar11 == 0
                                                     )) goto LAB_00e443fc;
                                                  fVar35 = *(float *)((long)dVar15 + 0x84);
                                                  fVar37 = *(float *)(lVar16 + 0x20);
                                                  lVar20 = *unaff_x24;
                                                  fVar29 = fStack0000000000000048 *
                                                           *(float *)(lVar16 + 0x24) +
                                                           ((*(float *)((long)dVar15 + 0x48) +
                                                            fVar35) * fVar37) / fVar35;
                                                  fVar29 = fVar29 - (float)(int)fVar29;
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  goto LAB_00e41920;
                                                }
                                                lVar20 = *in_stack_00000038;
                                                if (lVar20 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                if (lVar11 == 0) goto LAB_00e443fc;
                                                fVar37 = *(float *)(lVar20 + unaff_x21 * 0xc + 0x20)
                                                ;
                                                fVar30 = *(float *)((long)dVar15 + 0x84);
                                                fVar34 = fVar34 + (fVar37 * *(float *)(lVar16 + 0x20
                                                                                      )) / fVar30;
                                                fVar34 = fVar34 - (float)(int)fVar34;
                                                fVar35 = fVar34;
                                                if (1.0 < fVar34) {
                                                  fVar35 = fVar29;
                                                }
                                                fVar39 = fVar35;
                                                if (fVar34 < 0.0) {
                                                  fVar39 = 0.0;
                                                }
                                                fVar39 = (float)FUN_0269ad38(fVar39,lVar11,0);
                                                fVar34 = fVar39;
                                                if (1.0 < fVar39) {
                                                  fVar34 = fVar29;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar39 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e3e0b0;
                                                  }
                                                  fVar29 = (float)(int)(fVar34 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                                                  fVar29 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar29 = fVar34;
                                                  }
                                                }
                                                else {
                                                  fVar29 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar34 = fVar35;
                                                if (1.0 < fVar35) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar35 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e3ee80;
                                                  }
                                                  fVar35 = (float)(int)(fVar34 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                                                  fVar35 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar35 = fVar34;
                                                  }
                                                }
                                                else {
                                                  fVar35 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar34 = fVar37;
                                                if (1.0 < fVar37) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar37 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar34 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar37 = fVar30;
                                                if (1.0 < fVar30) {
                                                  fVar37 = 1.0;
                                                }
                                                fVar37 = fVar37 * 255.0;
                                                if (fVar30 < 0.0) {
                                                  fVar37 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar37,
                                                              (double *)&stack0x00000070);
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
                                                if (unaff_x20 == 0) goto LAB_00e443fc;
                                                fVar30 = 1.0;
                                                if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000068
                                                   ) goto LAB_00e44400;
                                                *(uint *)(unaff_x20 + unaff_x21 * 4 + 0x20) =
                                                     (int)fVar29 & 0xffU |
                                                     ((int)fVar35 & 0xffU) << 8 |
                                                     ((int)fVar34 & 0xffU) << 0x10 |
                                                     (int)fVar37 << 0x18;
                                                unaff_x25 = (long *)StringLiteral_9119;
                                                dVar15 = *in_stack_00000060;
                                                if (((dVar15 == 0.0) ||
                                                    (lVar16 = *(long *)((long)dVar15 + 0xa8),
                                                    lVar16 == 0)) ||
                                                   (lVar11 = *in_stack_00000038, lVar11 == 0))
                                                goto LAB_00e443fc;
                                                lVar19 = *unaff_x24;
                                                lVar20 = *(long *)(lVar16 + 0x18);
                                                fVar34 = fStack0000000000000048 *
                                                         *(float *)(lVar16 + 0x24);
                                                if (cVar5 != '\0') {
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  if (lVar20 == 0) goto LAB_00e443fc;
                                                  fVar35 = *(float *)(lVar11 + (long)(int)uVar17 *
                                                                               0xc + 0x20);
                                                  fVar37 = *(float *)((long)dVar15 + 0x84);
                                                  fVar34 = fVar34 + (fVar35 * *(float *)(lVar16 + 
                                                  0x20)) / fVar37;
                                                  fVar34 = fVar34 - (float)(int)fVar34;
                                                  fVar29 = fVar34;
                                                  if (1.0 < fVar34) {
                                                    fVar29 = fVar30;
                                                  }
                                                  fVar39 = fVar29;
                                                  if (fVar34 < 0.0) {
                                                    fVar39 = 0.0;
                                                  }
                                                  fVar39 = (float)FUN_0269ad38(fVar39,lVar20,0);
                                                  fVar34 = fVar39;
                                                  if (1.0 < fVar39) {
                                                    fVar34 = fVar30;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar39 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3f234;
                                                    }
                                                    fVar30 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                                    fVar30 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar30 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar30 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3f594;
                                                    }
                                                    fVar29 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar34 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar35 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (lVar19 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar19 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar19 + (long)(int)uVar17 * 4 + 0x20) =
                                                       (int)fVar30 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar34 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  dVar15 = *in_stack_00000060;
                                                  if (((dVar15 == 0.0) ||
                                                      (lVar16 = *(long *)((long)dVar15 + 0xa8),
                                                      lVar16 == 0)) ||
                                                     (lVar11 = *in_stack_00000038, lVar11 == 0))
                                                  goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  if (*(long *)(lVar16 + 0x18) == 0)
                                                  goto LAB_00e443fc;
                                                  fVar35 = *(float *)(lVar11 + (long)(int)uVar24 *
                                                                               0xc + 0x20);
                                                  fVar37 = *(float *)((long)dVar15 + 0x84);
                                                  lVar11 = *unaff_x24;
                                                  fVar29 = fStack0000000000000048 *
                                                           *(float *)(lVar16 + 0x24) +
                                                           (fVar35 * *(float *)(lVar16 + 0x20)) /
                                                           fVar37;
                                                  fVar29 = fVar29 - (float)(int)fVar29;
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar30 = fVar34;
                                                  if (fVar29 < 0.0) {
                                                    fVar30 = 0.0;
                                                  }
                                                  fVar30 = (float)FUN_0269ad38(fVar30,*(long *)(
                                                  lVar16 + 0x18),0);
                                                  fVar29 = fVar30;
                                                  if (1.0 < fVar30) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar30 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3f858;
                                                    }
                                                    fVar30 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                                    fVar30 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar30 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar30 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar29 = fVar34;
                                                  if (1.0 < fVar34) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar34 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3f8e8;
                                                    }
                                                    fVar29 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = fVar34;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar34 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar34 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar35 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar35 = 1.0;
                                                  }
                                                  fVar35 = fVar35 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar35,
                                                                (double *)&stack0x00000070);
                                                  unaff_x25 = (long *)StringLiteral_9119;
                                                  if (0.0 <= fVar35) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar35 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar35 + -0.5);
                                                  }
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar11 + (long)(int)uVar24 * 4 + 0x20) =
                                                       (int)fVar30 & 0xffU |
                                                       ((int)fVar29 & 0xffU) << 8 |
                                                       ((int)fVar34 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  dVar15 = *in_stack_00000060;
                                                  if (dVar15 == 0.0) goto LAB_00e443fc;
                                                  lVar16 = *(long *)((long)dVar15 + 0xa8);
                                                  unaff_w23 = 255.0;
                                                  if ((lVar16 == 0) ||
                                                     (lVar11 = *in_stack_00000038, lVar11 == 0))
                                                  goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar23)
                                                  goto LAB_00e44400;
                                                  if (*(long *)(lVar16 + 0x18) == 0)
                                                  goto LAB_00e443fc;
                                                  fVar34 = *(float *)(lVar11 + in_stack_00000058 *
                                                                               0xc + 0x20);
                                                  uVar13 = (ulong)(uint)fVar34;
                                                  uVar12 = (ulong)(uint)*(float *)((long)dVar15 +
                                                                                  0x84);
                                                  lVar11 = *unaff_x24;
                                                  fVar29 = fStack0000000000000048 *
                                                           *(float *)(lVar16 + 0x24) +
                                                           (fVar34 * *(float *)(lVar16 + 0x20)) /
                                                           *(float *)((long)dVar15 + 0x84);
                                                  fVar29 = fVar29 - (float)(int)fVar29;
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar35 = fVar34;
                                                  if (fVar29 < 0.0) {
                                                    fVar35 = 0.0;
                                                  }
                                                  fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(
                                                  lVar16 + 0x18),0);
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  uVar36 = 0x437f0000;
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fbd0;
                                                    }
                                                    fVar35 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar29 = fVar34;
                                                  if (1.0 < fVar34) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar34 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  goto LAB_00e42040;
                                                }
                                                if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                unaff_w23 = 255.0;
                                                if (lVar20 == 0) goto LAB_00e443fc;
                                                fVar35 = *(float *)(lVar11 + unaff_x21 * 0xc + 0x20)
                                                ;
                                                fVar37 = *(float *)((long)dVar15 + 0x84);
                                                fVar34 = fVar34 + (fVar35 * *(float *)(lVar16 + 0x20
                                                                                      )) / fVar37;
                                                fVar34 = fVar34 - (float)(int)fVar34;
                                                fVar29 = fVar34;
                                                if (1.0 < fVar34) {
                                                  fVar29 = fVar30;
                                                }
                                                fVar39 = fVar29;
                                                if (fVar34 < 0.0) {
                                                  fVar39 = 0.0;
                                                }
                                                fVar39 = (float)FUN_0269ad38(fVar39,lVar20,0);
                                                fVar34 = fVar39;
                                                if (1.0 < fVar39) {
                                                  fVar34 = fVar30;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar39 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e3f25c;
                                                  }
                                                  fVar30 = (float)(int)(fVar34 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                                                  fVar30 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar30 = fVar34;
                                                  }
                                                }
                                                else {
                                                  fVar30 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar34 = fVar29;
                                                if (1.0 < fVar29) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar29 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e415c4;
                                                  }
                                                  fVar29 = (float)(int)(fVar34 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                                                  fVar29 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar29 = fVar34;
                                                  }
                                                }
                                                else {
                                                  fVar29 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar34 = fVar35;
                                                if (1.0 < fVar35) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar35 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar34 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar35 = fVar37;
                                                if (1.0 < fVar37) {
                                                  fVar35 = 1.0;
                                                }
                                                fVar35 = fVar35 * 255.0;
                                                if (fVar37 < 0.0) {
                                                  fVar35 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar35,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar35) {
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar35 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar35 = (float)(int)(fVar35 + -0.5);
                                                }
                                                if (lVar19 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar19 + 0x18) <= uVar17)
                                                goto LAB_00e44400;
                                                *(uint *)(lVar19 + (long)(int)uVar17 * 4 + 0x20) =
                                                     (int)fVar30 & 0xffU |
                                                     ((int)fVar29 & 0xffU) << 8 |
                                                     ((int)fVar34 & 0xffU) << 0x10 |
                                                     (int)fVar35 << 0x18;
                                                dVar15 = *in_stack_00000060;
                                                if (((dVar15 == 0.0) ||
                                                    (lVar16 = *(long *)((long)dVar15 + 0xa8),
                                                    lVar16 == 0)) ||
                                                   (lVar11 = *in_stack_00000038, lVar11 == 0))
                                                goto LAB_00e443fc;
                                                if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                if (*(long *)(lVar16 + 0x18) == 0)
                                                goto LAB_00e443fc;
                                                fVar35 = *(float *)(lVar11 + unaff_x21 * 0xc + 0x20)
                                                ;
                                                fVar37 = *(float *)((long)dVar15 + 0x84);
                                                lVar11 = *unaff_x24;
                                                fVar29 = fStack0000000000000048 *
                                                         *(float *)(lVar16 + 0x24) +
                                                         (fVar35 * *(float *)(lVar16 + 0x20)) /
                                                         fVar37;
                                                fVar29 = fVar29 - (float)(int)fVar29;
                                                fVar34 = fVar29;
                                                if (1.0 < fVar29) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar30 = fVar34;
                                                if (fVar29 < 0.0) {
                                                  fVar30 = 0.0;
                                                }
                                                fVar30 = (float)FUN_0269ad38(fVar30,*(long *)(lVar16
                                                                                             + 0x18)
                                                                             ,0);
                                                fVar29 = fVar30;
                                                if (1.0 < fVar30) {
                                                  fVar29 = 1.0;
                                                }
                                                fVar29 = fVar29 * 255.0;
                                                if (fVar30 < 0.0) {
                                                  fVar29 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar29,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar29) {
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e421fc;
                                                  }
                                                  fVar30 = (float)(int)(fVar29 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                                                  fVar30 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar30 = fVar29;
                                                  }
                                                }
                                                else {
                                                  fVar30 = (float)(int)(fVar29 + -0.5);
                                                }
                                                fVar29 = fVar34;
                                                if (1.0 < fVar34) {
                                                  fVar29 = 1.0;
                                                }
                                                fVar29 = fVar29 * 255.0;
                                                if (fVar34 < 0.0) {
                                                  fVar29 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar29,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar29) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e4228c;
                                                  }
                                                  fVar29 = (float)(int)(fVar29 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                                                  fVar29 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar29 = fVar34;
                                                  }
                                                }
                                                else {
                                                  fVar29 = (float)(int)(fVar29 + -0.5);
                                                }
                                                fVar34 = fVar35;
                                                if (1.0 < fVar35) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar34 = fVar34 * 255.0;
                                                if (fVar35 < 0.0) {
                                                  fVar34 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar34,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar34) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar34 = (float)(int)(fVar34 + -0.5);
                                                }
                                                fVar35 = fVar37;
                                                if (1.0 < fVar37) {
                                                  fVar35 = 1.0;
                                                }
                                                fVar35 = fVar35 * 255.0;
                                                if (fVar37 < 0.0) {
                                                  fVar35 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar35,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar35) {
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar35 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar35 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar35 = (float)(int)(fVar35 + -0.5);
                                                }
                                                if (lVar11 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar11 + 0x18) <= uVar24)
                                                goto LAB_00e44400;
                                                *(uint *)(lVar11 + (long)(int)uVar24 * 4 + 0x20) =
                                                     (int)fVar30 & 0xffU |
                                                     ((int)fVar29 & 0xffU) << 8 |
                                                     ((int)fVar34 & 0xffU) << 0x10 |
                                                     (int)fVar35 << 0x18;
                                                dVar15 = *in_stack_00000060;
                                                if (((dVar15 == 0.0) ||
                                                    (lVar16 = *(long *)((long)dVar15 + 0xa8),
                                                    lVar16 == 0)) ||
                                                   (lVar11 = *in_stack_00000038, lVar11 == 0))
                                                goto LAB_00e443fc;
                                                if (*(uint *)(lVar11 + 0x18) <= in_stack_00000068)
                                                goto LAB_00e44400;
                                                if (*(long *)(lVar16 + 0x18) == 0)
                                                goto LAB_00e443fc;
                                                fVar34 = *(float *)(lVar11 + unaff_x21 * 0xc + 0x20)
                                                ;
                                                uVar13 = (ulong)(uint)fVar34;
                                                uVar12 = (ulong)(uint)*(float *)((long)dVar15 + 0x84
                                                                                );
                                                lVar11 = *unaff_x24;
                                                fVar29 = fStack0000000000000048 *
                                                         *(float *)(lVar16 + 0x24) +
                                                         (fVar34 * *(float *)(lVar16 + 0x20)) /
                                                         *(float *)((long)dVar15 + 0x84);
                                                fVar29 = fVar29 - (float)(int)fVar29;
                                                fVar34 = fVar29;
                                                if (1.0 < fVar29) {
                                                  fVar34 = 1.0;
                                                }
                                                fVar35 = fVar34;
                                                if (fVar29 < 0.0) {
                                                  fVar35 = 0.0;
                                                }
                                                fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(lVar16
                                                                                             + 0x18)
                                                                             ,0);
                                                fVar29 = fVar35;
                                                if (1.0 < fVar35) {
                                                  fVar29 = 1.0;
                                                }
                                                uVar36 = 0x437f0000;
                                                fVar29 = fVar29 * 255.0;
                                                if (fVar35 < 0.0) {
                                                  fVar29 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar29,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar29) {
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e42560;
                                                  }
                                                  fVar35 = (float)(int)(fVar29 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                                                  fVar35 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar35 = fVar29;
                                                  }
                                                }
                                                else {
                                                  fVar35 = (float)(int)(fVar29 + -0.5);
                                                }
                                                fVar29 = fVar34;
                                                if (1.0 < fVar34) {
                                                  fVar29 = 1.0;
                                                }
                                                fVar29 = fVar29 * 255.0;
                                                if (fVar34 < 0.0) {
                                                  fVar29 = 0.0;
                                                }
                                                dVar15 = modf((double)fVar29,
                                                              (double *)&stack0x00000070);
                                                goto joined_r0x00e42048;
                                              }
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
                                                uVar21 = *(undefined8 *)
                                                          ((long)*in_stack_00000060 + 0xa0);
                                                if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                                  thunk_FUN_00d32864();
                                                }
                                                uVar12 = FUN_02681b9c(uVar21,0,0);
                                                lVar16 = *unaff_x24;
                                                if ((uVar12 & 1) == 0) {
                                                  fVar29 = *(float *)((long)unaff_x19 + 0x8c);
                                                  fVar35 = *(float *)(unaff_x19 + 0x12);
                                                  fVar39 = *(float *)((long)unaff_x19 + 0x94);
                                                  fVar37 = *(float *)(unaff_x19 + 0x13);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fd48;
                                                    }
                                                    fVar35 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar29 = fVar39;
                                                  if (1.0 < fVar39) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar39 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar39 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar37 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar37 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar37 = (float)(int)(fVar39 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar35 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  fVar29 = *(float *)(unaff_x19 + 0x12);
                                                  lVar16 = unaff_x19[0x5f];
                                                  fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                                  fVar35 = *(float *)(unaff_x19 + 0x13);
                                                  fVar34 = *(float *)((long)unaff_x19 + 0x8c) *
                                                           255.0;
                                                  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar39 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e40610;
                                                    }
                                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                                    fVar39 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar39 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  fVar29 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar37 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar37 = 1.0;
                                                  }
                                                  fVar37 = fVar37 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar37 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar37,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar37) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar37 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar37 + -0.5);
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar39 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  fVar29 = *(float *)(unaff_x19 + 0x12);
                                                  lVar16 = unaff_x19[0x5f];
                                                  fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                                  fVar35 = *(float *)(unaff_x19 + 0x13);
                                                  fVar34 = *(float *)((long)unaff_x19 + 0x8c) *
                                                           255.0;
                                                  if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar39 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e40e20;
                                                    }
                                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                                    fVar39 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar39 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  fVar29 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar37 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar37 = 1.0;
                                                  }
                                                  fVar37 = fVar37 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar37 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar37,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar37) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar37 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar37 + -0.5);
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar39 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  fVar34 = *(float *)((long)unaff_x19 + 0x8c);
                                                  fVar29 = *(float *)(unaff_x19 + 0x12);
                                                  lVar16 = unaff_x19[0x5f];
                                                  fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                                  fVar35 = *(float *)(unaff_x19 + 0x13);
                                                }
                                                else {
                                                  if ((*in_stack_00000060 == 0.0) ||
                                                     (lVar11 = *(long *)((long)*in_stack_00000060 +
                                                                        0xa0), lVar11 == 0))
                                                  goto LAB_00e443fc;
                                                  fVar29 = *(float *)(lVar11 + 0x18);
                                                  fVar35 = *(float *)(lVar11 + 0x1c);
                                                  fVar39 = *(float *)(lVar11 + 0x20);
                                                  fVar37 = *(float *)(lVar11 + 0x24);
                                                  fVar34 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar34 = 1.0;
                                                  }
                                                  fVar34 = fVar34 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar29 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fcc4;
                                                    }
                                                    fVar35 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar29 = fVar39;
                                                  if (1.0 < fVar39) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar39 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar39 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar37 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar37 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar37 = (float)(int)(fVar39 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  if (lVar16 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar35 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                                  if ((*in_stack_00000060 == 0.0) ||
                                                     (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                        0xa0), lVar16 == 0))
                                                  goto LAB_00e443fc;
                                                  fVar29 = *(float *)(lVar16 + 0x1c);
                                                  lVar11 = *unaff_x24;
                                                  fVar37 = *(float *)(lVar16 + 0x20);
                                                  fVar35 = *(float *)(lVar16 + 0x24);
                                                  fVar34 = *(float *)(lVar16 + 0x18) * 255.0;
                                                  if (*(float *)(lVar16 + 0x18) < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar39 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e4057c;
                                                    }
                                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                                    fVar39 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar39 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  fVar29 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar37 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar37 = 1.0;
                                                  }
                                                  fVar37 = fVar37 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar37 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar37,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar37) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar37 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar37 + -0.5);
                                                  }
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar17)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar11 + (long)(int)uVar17 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar39 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  if ((*in_stack_00000060 == 0.0) ||
                                                     (lVar16 = *(long *)((long)*in_stack_00000060 +
                                                                        0xa0), lVar16 == 0))
                                                  goto LAB_00e443fc;
                                                  fVar29 = *(float *)(lVar16 + 0x1c);
                                                  lVar11 = *unaff_x24;
                                                  fVar37 = *(float *)(lVar16 + 0x20);
                                                  fVar35 = *(float *)(lVar16 + 0x24);
                                                  fVar34 = *(float *)(lVar16 + 0x18) * 255.0;
                                                  if (*(float *)(lVar16 + 0x18) < 0.0) {
                                                    fVar34 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar34,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar34) {
                                                    if (dVar15 == 0.5) {
                                                      fVar34 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar34 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar34 = (float)(int)(fVar34 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar34 + -0.5);
                                                  }
                                                  fVar39 = fVar29;
                                                  if (1.0 < fVar29) {
                                                    fVar39 = 1.0;
                                                  }
                                                  fVar39 = fVar39 * 255.0;
                                                  if (fVar29 < 0.0) {
                                                    fVar39 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar39,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar39) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e40d8c;
                                                    }
                                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                                    fVar39 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar39 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                                  }
                                                  fVar29 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar29 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar15 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar29 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar29 = (float)(int)(fVar29 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar37 = fVar35;
                                                  if (1.0 < fVar35) {
                                                    fVar37 = 1.0;
                                                  }
                                                  fVar37 = fVar37 * 255.0;
                                                  if (fVar35 < 0.0) {
                                                    fVar37 = fVar30;
                                                  }
                                                  dVar15 = modf((double)fVar37,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar37) {
                                                    if (dVar15 == 0.5) {
                                                      fVar35 = (float)_fStack0000000000000070;
                                                      if (((long)_fStack0000000000000070 & 1U) != 0)
                                                      {
                                                        fVar35 = (float)_fStack0000000000000070 +
                                                                 1.0;
                                                      }
                                                    }
                                                    else {
                                                      fVar35 = (float)(int)(fVar37 + 0.5);
                                                    }
                                                  }
                                                  else if (dVar15 == -0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + -1.0
                                                      ;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar37 + -0.5);
                                                  }
                                                  if (lVar11 == 0) goto LAB_00e443fc;
                                                  if (*(uint *)(lVar11 + 0x18) <= uVar24)
                                                  goto LAB_00e44400;
                                                  *(uint *)(lVar11 + (long)(int)uVar24 * 4 + 0x20) =
                                                       (int)fVar34 & 0xffU |
                                                       ((int)fVar39 & 0xffU) << 8 |
                                                       ((int)fVar29 & 0xffU) << 0x10 |
                                                       (int)fVar35 << 0x18;
                                                  if ((*in_stack_00000060 == 0.0) ||
                                                     (lVar11 = *(long *)((long)*in_stack_00000060 +
                                                                        0xa0), lVar11 == 0))
                                                  goto LAB_00e443fc;
                                                  fVar34 = *(float *)(lVar11 + 0x18);
                                                  fVar29 = *(float *)(lVar11 + 0x1c);
                                                  lVar16 = *unaff_x24;
                                                  fVar37 = *(float *)(lVar11 + 0x20);
                                                  fVar35 = *(float *)(lVar11 + 0x24);
                                                }
                                                fVar39 = fVar34 * 255.0;
                                                if (fVar34 < 0.0) {
                                                  fVar39 = fVar30;
                                                }
                                                dVar15 = modf((double)fVar39,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar39) {
                                                  if (dVar15 == 0.5) {
                                                    fVar34 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar34 = (float)(int)(fVar39 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar34 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar34 = (float)(int)(fVar39 + -0.5);
                                                }
                                                fVar39 = fVar29;
                                                if (1.0 < fVar29) {
                                                  fVar39 = 1.0;
                                                }
                                                fVar39 = fVar39 * 255.0;
                                                if (fVar29 < 0.0) {
                                                  fVar39 = fVar30;
                                                }
                                                dVar15 = modf((double)fVar39,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar39) {
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e412dc;
                                                  }
                                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                                                  fVar39 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar39 = fVar29;
                                                  }
                                                }
                                                else {
                                                  fVar39 = (float)(int)(fVar39 + -0.5);
                                                }
                                                fVar29 = fVar37;
                                                if (1.0 < fVar37) {
                                                  fVar29 = 1.0;
                                                }
                                                fVar29 = fVar29 * 255.0;
                                                if (fVar37 < 0.0) {
                                                  fVar29 = fVar30;
                                                }
                                                dVar15 = modf((double)fVar29,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar29) {
                                                  if (dVar15 == 0.5) {
                                                    fVar29 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar29 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar29 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar29 = (float)(int)(fVar29 + -0.5);
                                                }
                                                uVar36 = 0x3f800000;
                                                fVar37 = fVar35;
                                                if (1.0 < fVar35) {
                                                  fVar37 = 1.0;
                                                }
                                                fVar37 = fVar37 * 255.0;
                                                if (fVar35 < 0.0) {
                                                  fVar37 = fVar30;
                                                }
                                                dVar15 = modf((double)fVar37,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar37) {
                                                  if (dVar15 == 0.5) {
                                                    fVar35 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                    }
                                                  }
                                                  else {
                                                    fVar35 = (float)(int)(fVar37 + 0.5);
                                                  }
                                                }
                                                else if (dVar15 == -0.5) {
                                                  fVar35 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                                                  }
                                                }
                                                else {
                                                  fVar35 = (float)(int)(fVar37 + -0.5);
                                                }
                                                if (lVar16 == 0) goto LAB_00e443fc;
                                                if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                                goto LAB_00e44400;
                                                *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                                                     (int)fVar34 & 0xffU |
                                                     ((int)fVar39 & 0xffU) << 8 |
                                                     ((int)fVar29 & 0xffU) << 0x10 |
                                                     (int)fVar35 << 0x18;
                                                goto LAB_00e43400;
                                              }
                                              lVar16 = *unaff_x24;
                                              dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070)
                                              ;
                                              if (dVar32 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar29 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar29 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar35 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar35 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar37 = 255.0;
                                              }
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                              goto LAB_00e44400;
                                              *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                                                   (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8
                                                   | ((int)fVar35 & 0xffU) << 0x10 |
                                                   (int)fVar37 << 0x18;
                                              lVar16 = *unaff_x24;
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar29 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar29 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar35 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar35 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar37 = 255.0;
                                              }
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                              goto LAB_00e44400;
                                              *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                                   (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8
                                                   | ((int)fVar35 & 0xffU) << 0x10 |
                                                   (int)fVar37 << 0x18;
                                              lVar16 = *unaff_x24;
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar29 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar29 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar35 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar35 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar37 = 255.0;
                                              }
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                              goto LAB_00e44400;
                                              *(uint *)(lVar16 + (long)(int)uVar24 * 4 + 0x20) =
                                                   (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8
                                                   | ((int)fVar35 & 0xffU) << 0x10 |
                                                   (int)fVar37 << 0x18;
                                              lVar16 = *unaff_x24;
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar29 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar29 = 255.0;
                                              }
                                              dVar32 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar32 == 0.5) {
                                                fVar35 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar35 = 255.0;
                                              }
                                              dVar15 = modf(dVar15,(double *)&stack0x00000070);
                                              if (dVar15 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar37 = 255.0;
                                              }
                                              if (lVar16 == 0) goto LAB_00e443fc;
                                              if (*(uint *)(lVar16 + 0x18) <= uVar23)
                                              goto LAB_00e44400;
                                              *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                                                   (int)fVar34 & 0xffU | ((int)fVar29 & 0xffU) << 8
                                                   | ((int)fVar35 & 0xffU) << 0x10 |
                                                   (int)fVar37 << 0x18;
                                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                              uVar21 = *(undefined8 *)
                                                        ((long)*in_stack_00000060 + 0xa0);
                                              if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                                thunk_FUN_00d32864();
                                              }
                                              uVar12 = FUN_02681b9c(uVar21,0,0);
                                            } while ((uVar12 & 1) == 0);
                                            lVar16 = *unaff_x24;
                                            if (lVar16 == 0) break;
                                            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                            goto LAB_00e44400;
                                            puVar22 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
                                            uVar23 = *puVar22;
                                            if ((*in_stack_00000060 == 0.0) ||
                                               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                               lVar16 == 0)) break;
                                            fVar29 = ((float)(uVar23 & 0xff) / 255.0) *
                                                     *(float *)(lVar16 + 0x18);
                                            fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                                     *(float *)(lVar16 + 0x1c);
                                            fVar37 = *(float *)(lVar16 + 0x20);
                                            fVar35 = *(float *)(lVar16 + 0x24);
                                            fVar34 = fVar29 * 255.0;
                                            if (fVar29 < 0.0) {
                                              fVar34 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = 1.0;
                                                goto LAB_00e3ede4;
                                              }
                                              fVar29 = (float)(int)(fVar34 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = -1.0;
LAB_00e3ede4:
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = (float)_fStack0000000000000070 + fVar34;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) *
                                                     fVar37;
                                            fVar34 = fVar39 * 255.0;
                                            if (fVar39 < 0.0) {
                                              fVar34 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = (float)(int)(fVar34 + 0.5);
                                              }
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar34 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar34 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar39 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar39 = 1.0;
                                            }
                                            fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                            fVar39 = fVar39 * 255.0;
                                            if (fVar37 < 0.0) {
                                              fVar39 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar39,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar39) {
                                              if (dVar15 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3ffb0;
                                              }
                                              fVar39 = (float)(int)(fVar39 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                                              fVar39 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar39 = fVar37;
                                              }
                                            }
                                            else {
                                              fVar39 = (float)(int)(fVar39 + -0.5);
                                            }
                                            fVar37 = fVar35;
                                            if (1.0 < fVar35) {
                                              fVar37 = 1.0;
                                            }
                                            fVar37 = fVar37 * 255.0;
                                            if (fVar35 < 0.0) {
                                              fVar37 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar37,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar37) {
                                              if (dVar15 == 0.5) {
                                                fVar35 = 1.0;
                                                goto LAB_00e40174;
                                              }
                                              fVar37 = (float)(int)(fVar37 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar35 = -1.0;
LAB_00e40174:
                                              fVar37 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar37 = (float)_fStack0000000000000070 + fVar35;
                                              }
                                            }
                                            else {
                                              fVar37 = (float)(int)(fVar37 + -0.5);
                                            }
                                            *puVar22 = (int)fVar29 & 0xffU |
                                                       ((int)fVar34 & 0xffU) << 8 |
                                                       ((int)fVar39 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                            lVar16 = *unaff_x24;
                                            if (lVar16 == 0) break;
                                            if (*(uint *)(lVar16 + 0x18) <= uVar17)
                                            goto LAB_00e44400;
                                            puVar22 = (uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20
                                                              );
                                            uVar23 = *puVar22;
                                            if ((*in_stack_00000060 == 0.0) ||
                                               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                               lVar16 == 0)) break;
                                            fVar29 = ((float)(uVar23 & 0xff) / 255.0) *
                                                     *(float *)(lVar16 + 0x18);
                                            fVar39 = ((float)(uVar23 >> 8 & 0xff) / 255.0) *
                                                     *(float *)(lVar16 + 0x1c);
                                            fVar37 = *(float *)(lVar16 + 0x20);
                                            fVar35 = *(float *)(lVar16 + 0x24);
                                            fVar34 = fVar29 * 255.0;
                                            if (fVar29 < 0.0) {
                                              fVar34 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = 1.0;
                                                goto LAB_00e404dc;
                                              }
                                              fVar29 = (float)(int)(fVar34 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = -1.0;
LAB_00e404dc:
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = (float)_fStack0000000000000070 + fVar34;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar37 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) *
                                                     fVar37;
                                            fVar34 = fVar39 * 255.0;
                                            if (fVar39 < 0.0) {
                                              fVar34 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar34,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar34) {
                                              if (dVar15 == 0.5) {
                                                fVar34 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar34 = (float)(int)(fVar34 + 0.5);
                                              }
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar34 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar34 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar34 = (float)(int)(fVar34 + -0.5);
                                            }
                                            fVar39 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar39 = 1.0;
                                            }
                                            fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                                            fVar39 = fVar39 * 255.0;
                                            if (fVar37 < 0.0) {
                                              fVar39 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar39,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar39) {
                                              if (dVar15 == 0.5) {
                                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e40888;
                                              }
                                              fVar39 = (float)(int)(fVar39 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                                              fVar39 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar39 = fVar37;
                                              }
                                            }
                                            else {
                                              fVar39 = (float)(int)(fVar39 + -0.5);
                                            }
                                            fVar37 = fVar35;
                                            if (1.0 < fVar35) {
                                              fVar37 = 1.0;
                                            }
                                            fVar37 = fVar37 * 255.0;
                                            if (fVar35 < 0.0) {
                                              fVar37 = fVar30;
                                            }
                                            dVar15 = modf((double)fVar37,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar37) {
                                              if (dVar15 == 0.5) {
                                                fVar35 = 1.0;
                                                goto LAB_00e40a4c;
                                              }
                                              fVar37 = (float)(int)(fVar37 + 0.5);
                                            }
                                            else if (dVar15 == -0.5) {
                                              fVar35 = -1.0;
LAB_00e40a4c:
                                              fVar37 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar37 = (float)_fStack0000000000000070 + fVar35;
                                              }
                                            }
                                            else {
                                              fVar37 = (float)(int)(fVar37 + -0.5);
                                            }
                                            *puVar22 = (int)fVar29 & 0xffU |
                                                       ((int)fVar34 & 0xffU) << 8 |
                                                       ((int)fVar39 & 0xffU) << 0x10 |
                                                       (int)fVar37 << 0x18;
                                            lVar16 = *unaff_x24;
                                            if (lVar16 == 0) break;
                                            if (*(uint *)(lVar16 + 0x18) <= uVar24)
                                            goto LAB_00e44400;
                                            lVar16 = lVar16 + (long)(int)uVar24 * 4;
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
      }
      goto LAB_00e443fc;
    }
    goto LAB_00e44400;
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar11 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar11 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar11 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar11 + lVar16);
    *puVar2 = uVar31;
    puVar2[1] = (int)uVar12;
    puVar2[2] = (int)uVar36;
    lVar11 = unaff_x19[0xca];
    if ((lVar11 == 0) || (lVar20 = unaff_x19[0xcc], lVar20 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar11 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar18 = (undefined8 *)(lVar20 + lVar16);
    lVar16 = lVar16 + 0xc;
    *puVar18 = *(undefined8 *)(lVar11 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar31;
  } while (uVar23 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar10,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar16 = unaff_x19[0x59];
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),*in_stack_00000038,*plVar10,*plVar1,
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


