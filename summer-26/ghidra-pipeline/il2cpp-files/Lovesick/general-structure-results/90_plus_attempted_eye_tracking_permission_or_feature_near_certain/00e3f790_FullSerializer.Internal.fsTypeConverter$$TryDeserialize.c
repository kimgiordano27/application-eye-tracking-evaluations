/*
FUNCTION_NAME: FullSerializer.Internal.fsTypeConverter$$TryDeserialize
ENTRY_POINT: 00e3f790
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


/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsTypeConverter__TryDeserialize(double param_1,long param_2)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long in_x9;
  long lVar13;
  uint uVar14;
  long lVar15;
  long in_x10;
  long lVar16;
  long *unaff_x19;
  undefined8 *puVar17;
  undefined8 uVar18;
  uint *puVar19;
  uint uVar20;
  ulong unaff_x21;
  uint uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong unaff_x22;
  ulong uVar24;
  long lVar25;
  long unaff_x24;
  float unaff_w25;
  long *plVar26;
  long *unaff_x26;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float in_s4;
  int iVar38;
  float unaff_s10;
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
  
code_r0x00e3f790:
  if (param_2 != 0) {
    uVar20 = (uint)unaff_x29;
    fVar35 = *(float *)(in_x10 + (int)uVar20 * unaff_x24 + 0x20);
    fVar37 = *(float *)((long)param_1 + 0x84);
    lVar25 = *unaff_x26;
    fVar28 = in_s4 * *(float *)(in_x9 + 0x24) + (fVar35 * *(float *)(in_x9 + 0x20)) / fVar37;
    fVar28 = fVar28 - (float)(int)fVar28;
    fVar34 = fVar28;
    if (unaff_s10 < fVar28) {
      fVar34 = unaff_s10;
    }
    fVar29 = fVar34;
    if (fVar28 < 0.0) {
      fVar29 = 0.0;
    }
    fVar29 = (float)FUN_0269ad38(fVar29,param_2,0);
    fVar28 = fVar29;
    if (unaff_s10 < fVar29) {
      fVar28 = unaff_s10;
    }
    fVar28 = fVar28 * unaff_w25;
    if (fVar29 < 0.0) {
      fVar28 = 0.0;
    }
    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar32 == 0.5) {
        fVar28 = (float)_fStack0000000000000070 + unaff_s10;
        goto LAB_00e3f858;
      }
      fVar29 = (float)(int)(fVar28 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = fVar28;
      }
    }
    else {
      fVar29 = (float)(int)(fVar28 + -0.5);
    }
    fVar28 = fVar34;
    if (unaff_s10 < fVar34) {
      fVar28 = unaff_s10;
    }
    fVar28 = fVar28 * unaff_w25;
    if (fVar34 < 0.0) {
      fVar28 = 0.0;
    }
    dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
    if (0.0 <= fVar28) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070 + unaff_s10;
        goto LAB_00e3f8e8;
      }
      fVar28 = (float)(int)(fVar28 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
      fVar28 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar28 = fVar34;
      }
    }
    else {
      fVar28 = (float)(int)(fVar28 + -0.5);
    }
    fVar34 = fVar35;
    if (unaff_s10 < fVar35) {
      fVar34 = unaff_s10;
    }
    fVar34 = fVar34 * unaff_w25;
    if (fVar35 < 0.0) {
      fVar34 = 0.0;
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
    fVar35 = fVar37;
    if (1.0 < fVar37) {
      fVar35 = 1.0;
    }
    fVar35 = fVar35 * unaff_w25;
    if (fVar37 < 0.0) {
      fVar35 = 0.0;
    }
    dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
    plVar26 = (long *)StringLiteral_9119;
    if (0.0 <= fVar35) {
      if (dVar32 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar35 + 0.5);
      }
    }
    else if (dVar32 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar35 + -0.5);
    }
    if (lVar25 != 0) {
      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
      *(uint *)(lVar25 + (long)(int)uVar20 * 4 + 0x20) =
           (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
           (int)fVar35 << 0x18;
      dVar32 = *in_stack_00000060;
      if (((dVar32 != 0.0) && (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 != 0)) &&
         (lVar16 = *in_stack_00000038, lVar16 != 0)) {
        if (*(uint *)(lVar16 + 0x18) <= (uint)unaff_x21) goto LAB_00e44400;
        if (*(long *)(lVar25 + 0x18) != 0) {
          fVar34 = *(float *)(lVar16 + unaff_x21 * unaff_x24 + 0x20);
          uVar11 = (ulong)(uint)fVar34;
          uVar10 = (ulong)(uint)*(float *)((long)dVar32 + 0x84);
          lVar16 = *unaff_x26;
          fVar28 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                   (fVar34 * *(float *)(lVar25 + 0x20)) / *(float *)((long)dVar32 + 0x84);
          fVar28 = fVar28 - (float)(int)fVar28;
          fVar34 = fVar28;
          if (1.0 < fVar28) {
            fVar34 = 1.0;
          }
          fVar35 = fVar34;
          if (fVar28 < 0.0) {
            fVar35 = 0.0;
          }
          fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(lVar25 + 0x18),0);
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          uVar36 = 0x437f0000;
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = 0.0;
          }
          dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar32 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3fbd0;
            }
            fVar35 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar28;
            }
          }
          else {
            fVar35 = (float)(int)(fVar28 + -0.5);
          }
          fVar28 = fVar34;
          if (1.0 < fVar34) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar34 < 0.0) {
            fVar28 = 0.0;
          }
LAB_00e42040:
          dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
joined_r0x00e42048:
          fVar34 = (float)uVar11;
          if (0.0 <= fVar28) {
            if (dVar32 == 0.5) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e425d4;
            }
            fVar37 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e425d4:
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = fVar28;
            }
          }
          else {
            fVar37 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = 0.0;
          fVar28 = fVar34;
          if (1.0 < fVar34) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          if (fVar34 < 0.0) {
            fVar28 = 0.0;
          }
          dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar32 == 0.5) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar34;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar39 = (float)uVar10;
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
              goto LAB_00e426e4;
            }
            fVar39 = (float)(int)(fVar34 + 0.5);
          }
          else if (dVar32 == -0.5) {
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
          if (lVar16 != 0) {
            if ((uint)in_stack_00000058 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                   (int)fVar35 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar39 << 0x18;
              if (*in_stack_00000060 != 0.0) {
                uVar18 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_02681b9c(uVar18,0,0);
                if ((uVar10 & 1) == 0) goto LAB_00e43400;
                lVar25 = *unaff_x26;
                if (lVar25 != 0) {
                  if (in_stack_00000068 < *(uint *)(lVar25 + 0x18)) {
                    puVar19 = (uint *)(lVar25 + unaff_x22 * 4 + 0x20);
                    uVar20 = *puVar19;
                    if ((*in_stack_00000060 != 0.0) &&
                       (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 != 0)) {
                      fVar34 = ((float)(uVar20 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
                      fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
                      fVar37 = *(float *)(lVar25 + 0x20);
                      fVar35 = *(float *)(lVar25 + 0x24);
                      fVar28 = fVar34 * 255.0;
                      if (fVar34 < 0.0) {
                        fVar28 = 0.0;
                      }
                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                      if (0.0 <= fVar28) {
                        if (dVar32 == 0.5) {
                          fVar34 = 1.0;
                          goto LAB_00e4287c;
                        }
                        fVar28 = (float)(int)(fVar28 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
                        fVar34 = -1.0;
LAB_00e4287c:
                        fVar28 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar28 = (float)_fStack0000000000000070 + fVar34;
                        }
                      }
                      else {
                        fVar28 = (float)(int)(fVar28 + -0.5);
                      }
                      fVar34 = fVar39 * 255.0;
                      fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                      if (fVar39 < 0.0) {
                        fVar34 = 0.0;
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
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                      if (fVar37 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar32 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e429c8;
                        }
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
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
                      dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar32 == 0.5) {
                          fVar35 = 1.0;
                          goto LAB_00e42a44;
                        }
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                      else if (dVar32 == -0.5) {
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
                      *puVar19 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                 ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      lVar25 = *unaff_x26;
                      if (lVar25 != 0) {
                        if ((uint)unaff_x28 < *(uint *)(lVar25 + 0x18)) {
                          puVar19 = (uint *)(lVar25 + (long)(int)(uint)unaff_x28 * 4 + 0x20);
                          uVar20 = *puVar19;
                          if ((*in_stack_00000060 != 0.0) &&
                             (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 != 0)) {
                            fVar34 = ((float)(uVar20 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
                            fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) *
                                     *(float *)(lVar25 + 0x1c);
                            fVar37 = *(float *)(lVar25 + 0x20);
                            fVar35 = *(float *)(lVar25 + 0x24);
                            fVar28 = fVar34 * 255.0;
                            if (fVar34 < 0.0) {
                              fVar28 = 0.0;
                            }
                            dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                            if (0.0 <= fVar28) {
                              if (dVar32 == 0.5) {
                                fVar34 = 1.0;
                                goto LAB_00e42b80;
                              }
                              fVar28 = (float)(int)(fVar28 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar34 = -1.0;
LAB_00e42b80:
                              fVar28 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar28 = (float)_fStack0000000000000070 + fVar34;
                              }
                            }
                            else {
                              fVar28 = (float)(int)(fVar28 + -0.5);
                            }
                            fVar34 = fVar39 * 255.0;
                            fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                            if (fVar39 < 0.0) {
                              fVar34 = 0.0;
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
                            fVar39 = fVar37;
                            if (1.0 < fVar37) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                            if (fVar37 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar32 == 0.5) {
                                fVar37 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e42ccc;
                              }
                              fVar39 = (float)(int)(fVar39 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
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
                            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar32 == 0.5) {
                                fVar35 = 1.0;
                                goto LAB_00e42d48;
                              }
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
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
                            *puVar19 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                            lVar25 = *unaff_x26;
                            if (lVar25 != 0) {
                              if ((uint)unaff_x29 < *(uint *)(lVar25 + 0x18)) {
                                lVar25 = lVar25 + (long)(int)(uint)unaff_x29 * 4;
                                while( true ) {
                                  uVar20 = *(uint *)(lVar25 + 0x20);
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                     lVar16 == 0)) break;
                                  fVar34 = ((float)(uVar20 & 0xff) / 255.0) *
                                           *(float *)(lVar16 + 0x18);
                                  fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) *
                                           *(float *)(lVar16 + 0x1c);
                                  fVar37 = *(float *)(lVar16 + 0x20);
                                  fVar35 = *(float *)(lVar16 + 0x24);
                                  fVar28 = fVar34 * 255.0;
                                  if (fVar34 < 0.0) {
                                    fVar28 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                  if (0.0 <= fVar28) {
                                    if (dVar32 == 0.5) {
                                      fVar34 = 1.0;
                                      goto FUN_00e42e84;
                                    }
                                    fVar28 = (float)(int)(fVar28 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar34 = -1.0;
FUN_00e42e84:
                                    fVar28 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar28 = (float)_fStack0000000000000070 + fVar34;
                                    }
                                  }
                                  else {
                                    fVar28 = (float)(int)(fVar28 + -0.5);
                                  }
                                  fVar34 = fVar39 * 255.0;
                                  fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                                  if (fVar39 < 0.0) {
                                    fVar34 = 0.0;
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
                                  fVar39 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar39 = 1.0;
                                  }
                                  fVar39 = fVar39 * 255.0;
                                  fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                                  if (fVar37 < 0.0) {
                                    fVar39 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e42fd0;
                                    }
                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                  dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                  if (0.0 <= fVar37) {
                                    if (dVar32 == 0.5) {
                                      fVar35 = 1.0;
                                      goto LAB_00e4304c;
                                    }
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                  *(uint *)(lVar25 + 0x20) =
                                       (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                  lVar25 = *unaff_x26;
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000058)
                                  goto LAB_00e44400;
                                  puVar19 = (uint *)(lVar25 + in_stack_00000058 * 4 + 0x20);
                                  uVar20 = *puVar19;
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                     lVar25 == 0)) break;
                                  fVar34 = (float)(uVar20 & 0xff) / 255.0;
                                  uVar36 = (ulong)(uint)fVar34;
                                  fVar34 = fVar34 * *(float *)(lVar25 + 0x18);
                                  fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) *
                                           *(float *)(lVar25 + 0x1c);
                                  fVar37 = *(float *)(lVar25 + 0x20);
                                  fVar35 = *(float *)(lVar25 + 0x24);
                                  fVar28 = fVar34 * 255.0;
                                  if (fVar34 < 0.0) {
                                    fVar28 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                  if (0.0 <= fVar28) {
                                    if (dVar32 == 0.5) {
                                      fVar34 = 1.0;
                                      goto LAB_00e4318c;
                                    }
                                    fVar28 = (float)(int)(fVar28 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar34 = -1.0;
LAB_00e4318c:
                                    fVar28 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar28 = (float)_fStack0000000000000070 + fVar34;
                                    }
                                  }
                                  else {
                                    fVar28 = (float)(int)(fVar28 + -0.5);
                                  }
                                  fVar34 = fVar39 * 255.0;
                                  fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                                  if (fVar39 < 0.0) {
                                    fVar34 = 0.0;
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
                                  fVar39 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar39 = 1.0;
                                  }
                                  fVar39 = fVar39 * 255.0;
                                  fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                                  if (fVar37 < 0.0) {
                                    fVar39 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e432e0;
                                    }
                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                  dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                  if (0.0 <= fVar37) {
                                    if (dVar32 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = (float)(int)(fVar37 + 0.5);
                                    }
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar35 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar35 = (float)(int)(fVar37 + -0.5);
                                  }
                                  *puVar19 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                  unaff_s15 = in_stack_00000008._4_4_;
LAB_00e43400:
                                  do {
                                    lVar25 = *unaff_x26;
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    lVar25 = lVar25 + unaff_x22 * 4;
                                    fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
                                    *(char *)(lVar25 + 0x23) =
                                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                    lVar25 = unaff_x19[0x5f];
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    uVar20 = (uint)unaff_x28;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                    lVar25 = lVar25 + (long)(int)uVar20 * 4;
                                    fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
                                    *(char *)(lVar25 + 0x23) =
                                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                    lVar25 = unaff_x19[0x5f];
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    uVar21 = (uint)unaff_x29;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                    lVar25 = lVar25 + (long)(int)uVar21 * 4;
                                    fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
                                    *(char *)(lVar25 + 0x23) =
                                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                    lVar25 = unaff_x19[0x5f];
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    uVar14 = (uint)in_stack_00000058;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                    lVar25 = lVar25 + in_stack_00000058 * 4;
                                    uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                                    fVar34 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
                                    *(char *)(lVar25 + 0x23) =
                                         (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar34);
                                    uVar11 = FUN_00e3703c();
                                    if ((uVar11 & 1) == 0) {
                                      lVar25 = *plVar26;
                                      if (*(int *)(lVar25 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                        lVar25 = *plVar26;
                                      }
                                      if (*(int *)(*(long *)(lVar25 + 0xb8) + 0x20) == 1) {
                                        lVar25 = *unaff_x26;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        puVar19 = (uint *)(lVar25 + unaff_x22 * 4 + 0x20);
                                        uVar3 = *puVar19;
                                        fVar28 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0
                                                                    );
                                        fVar35 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) /
                                                                     255.0,0);
                                        fVar37 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) /
                                                                     255.0,0);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        fVar39 = (float)(uVar3 >> 0x18) / 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e43744;
                                          }
                                          fVar37 = (float)(int)(fVar35 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
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
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar39 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar39 + -0.5);
                                        }
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        *puVar19 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8
                                                   | ((int)fVar37 & 0xffU) << 0x10 |
                                                   (int)fVar35 << 0x18;
                                        lVar25 = *in_stack_00000030;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        puVar19 = (uint *)(lVar25 + (long)(int)uVar20 * 4 + 0x20);
                                        uVar3 = *puVar19;
                                        fVar28 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0
                                                                    );
                                        fVar35 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) /
                                                                     255.0,0);
                                        fVar37 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) /
                                                                     255.0,0);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        fVar39 = (float)(uVar3 >> 0x18) / 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e43a84;
                                          }
                                          fVar37 = (float)(int)(fVar35 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
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
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar39 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar39 + -0.5);
                                        }
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        *puVar19 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8
                                                   | ((int)fVar37 & 0xffU) << 0x10 |
                                                   (int)fVar35 << 0x18;
                                        lVar25 = *in_stack_00000030;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        puVar19 = (uint *)(lVar25 + (long)(int)uVar21 * 4 + 0x20);
                                        uVar20 = *puVar19;
                                        fVar28 = (float)FUN_026982b0((float)(uVar20 & 0xff) / 255.0,
                                                                     0);
                                        fVar35 = (float)FUN_026982b0((float)(uVar20 >> 8 & 0xff) /
                                                                     255.0,0);
                                        fVar37 = (float)FUN_026982b0((float)(uVar20 >> 0x10 & 0xff)
                                                                     / 255.0,0);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        fVar39 = (float)(uVar20 >> 0x18) / 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e43dbc;
                                          }
                                          fVar37 = (float)(int)(fVar35 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
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
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar39 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar39 + -0.5);
                                        }
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *puVar19 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8
                                                   | ((int)fVar37 & 0xffU) << 0x10 |
                                                   (int)fVar35 << 0x18;
                                        lVar25 = *in_stack_00000030;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        puVar19 = (uint *)(lVar25 + in_stack_00000058 * 4 + 0x20);
                                        uVar20 = *puVar19;
                                        fVar28 = (float)FUN_026982b0((float)(uVar20 & 0xff) / 255.0,
                                                                     0);
                                        fVar35 = (float)FUN_026982b0((float)(uVar20 >> 8 & 0xff) /
                                                                     255.0,0);
                                        fVar37 = (float)FUN_026982b0((float)(uVar20 >> 0x10 & 0xff)
                                                                     / 255.0,0);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = 0.0;
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
                                        uVar36 = 0x3f800000;
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        fVar39 = (float)(uVar20 >> 0x18) / 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e440f4;
                                          }
                                          fVar37 = (float)(int)(fVar35 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
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
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          uVar10 = 0;
                                          if (dVar32 == 0.5) {
                                            fVar35 = 1.0;
                                            goto LAB_00e44170;
                                          }
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                        else {
                                          uVar10 = 0;
                                          if (dVar32 == -0.5) {
                                            fVar35 = -1.0;
LAB_00e44170:
                                            fVar35 = (float)_fStack0000000000000070 + fVar35;
                                            uVar10 = (ulong)(uint)fVar35;
                                            fVar39 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar39 = fVar35;
                                            }
                                          }
                                          else {
                                            fVar39 = (float)(int)(fVar39 + -0.5);
                                          }
                                        }
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *puVar19 = (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8
                                                   | ((int)fVar37 & 0xffU) << 0x10 |
                                                   (int)fVar39 << 0x18;
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
                                      puVar5 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                      ;
                                      if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0))
                                      goto LAB_00e443fc;
                                      iVar8 = *(int *)(unaff_x19[0xf] + 0x10);
                                      plVar26 = unaff_x19 + 0xcb;
                                      if (iVar8 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                                        FUN_010afdd4(plVar26,iVar8,
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Sirenix_Utilities_RectExtensions_TakeFromDir__
                                                  );
                                      }
                                      if ((unaff_x19[0xcc] == 0) ||
                                         (lVar25 = unaff_x19[0xf], lVar25 == 0)) goto LAB_00e443fc;
                                      plVar9 = unaff_x19 + 0xcc;
                                      if (*(int *)(lVar25 + 0x10) !=
                                          *(int *)(unaff_x19[0xcc] + 0x18)) {
                                        FUN_010afdd4(plVar9,*(int *)(lVar25 + 0x10),
                                                     *(undefined8 *)puVar5);
                                        lVar25 = unaff_x19[0xf];
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                      }
                                      uVar20 = *(uint *)(lVar25 + 0x10);
                                      if ((int)uVar20 < 1) goto LAB_00e44358;
                                      uVar11 = 0;
                                      lVar25 = 0x20;
                                      goto LAB_00e442cc;
                                    }
                                    if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                    FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,
                                                 &stack0x00000070,*(undefined8 *)StringLiteral_4992)
                                    ;
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
                                      uVar10 = FUN_0269e56c(0);
                                      if (((fStack000000000000004c == 0.0) || ((uVar10 & 1) == 0))
                                         || (1 < (int)unaff_x19[0x2a] - 3U)) {
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
                                      dVar32 = *in_stack_00000060;
                                      if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x78) == 0))
                                      goto LAB_00e443fc;
                                      fVar28 = *(float *)(*(long *)((long)dVar32 + 0x78) + 0x18);
                                      fVar34 = DAT_028aa034;
                                      if (fVar28 != 0.0) {
                                        fVar34 = fVar28;
                                      }
                                      if ((0.0 < (unaff_s15 - *(float *)((long)dVar32 + 100)) /
                                                 fVar34) &&
                                         (*(char *)((long)dVar32 + 0x165) == '\0')) {
                                        *(undefined1 *)((long)dVar32 + 0x165) = 1;
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
                                              lVar25 = unaff_x19[0xca];
                                              if (lVar25 == 0) goto LAB_00e443fc;
                                              fVar35 = *(float *)(lVar25 + 0x48);
                                              fVar34 = *(float *)(unaff_x19 + 0x4b);
                                              fVar37 = fVar35 + *(float *)((long)unaff_x19 + 0x50c);
                                              fVar28 = *(float *)(unaff_x19 + 0x4a);
                                              if (fVar35 <= *(float *)(unaff_x19 + 0x4a)) {
                                                fVar28 = fVar35;
                                              }
                                              *(float *)(unaff_x19 + 0x4a) = fVar28;
                                              fVar28 = *(float *)((long)unaff_x19 + 0x254);
                                              if (fVar37 <= *(float *)((long)unaff_x19 + 0x254)) {
                                                fVar28 = fVar37;
                                              }
                                              *(float *)((long)unaff_x19 + 0x254) = fVar28;
                                              fVar28 = (float)FUN_00e5ef30(*(undefined4 *)
                                                                            ((long)unaff_x19 + 0x134
                                                                            ),lVar25,0);
                                              fVar28 = fVar28 + *(float *)(unaff_x19 + 0xa1) +
                                                       *(float *)((long)unaff_x19 + 0x55c);
                                              if (fVar34 <= fVar28) {
                                                fVar34 = fVar28;
                                              }
                                              *(float *)(unaff_x19 + 0x4b) = fVar34;
                                            }
                                          }
                                        }
                                        iVar38 = *(int *)((long)unaff_x19 + 0x38c);
                                        if (*(int *)((long)unaff_x19 + 0x38c) <= iVar8) {
                                          iVar38 = iVar8;
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
                                      lVar25 = unaff_x19[0x55];
                                      if (lVar25 != 0) {
                                        (**(code **)(lVar25 + 0x18))
                                                  (*(undefined8 *)(lVar25 + 0x40),
                                                   *(undefined8 *)(lVar25 + 0x28));
                                      }
                                    }
                                    unaff_x19[0xc6] = 0;
                                    fVar28 = 0.0;
                                    *(undefined4 *)(unaff_x19 + 199) = 0;
                                    fVar34 = 0.0;
                                    if ((((0.0 < fStack000000000000004c) &&
                                         (uVar20 = *(uint *)(unaff_x19 + 0x2a), fVar34 = fVar28,
                                         uVar20 < 5)) &&
                                        ((1 << (ulong)(uVar20 & 0x1f) & 0x19U) != 0)) &&
                                       (*(float *)(unaff_x19 + 0x4a) <
                                        -*(float *)((long)unaff_x19 + 0x184))) {
                                      if (uVar20 == 4) {
                                        lVar25 = unaff_x19[0xc];
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (0 < *(int *)(lVar25 + 0x18)) {
                                          iVar8 = 0;
                                          do {
                                            FUN_0132138c(lVar25,iVar8,&stack0x00000070,
                                                         *(undefined8 *)puVar5);
                                            *(float *)((long)unaff_x19 + 0x634) =
                                                 fStack0000000000000070;
                                            fVar34 = fStack0000000000000070;
                                            if (-*(float *)(unaff_x19 + 0x4a) -
                                                *(float *)((long)unaff_x19 + 0x184) <=
                                                fStack0000000000000070) break;
                                            lVar25 = unaff_x19[0xc];
                                            if (lVar25 == 0) goto LAB_00e443fc;
                                            iVar8 = iVar8 + 1;
                                          } while (iVar8 < *(int *)(lVar25 + 0x18));
                                        }
                                      }
                                      else {
                                        lVar25 = unaff_x19[0xb];
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        iVar8 = 0;
                                        fVar34 = 0.0;
                                        while (iVar8 < *(int *)(lVar25 + 0x18)) {
                                          FUN_0132138c(lVar25,iVar8,&stack0x00000070,
                                                       *(undefined8 *)puVar5);
                                          fVar34 = fVar34 + fStack0000000000000070;
                                          *(float *)((long)unaff_x19 + 0x634) = fVar34;
                                          if (-*(float *)(unaff_x19 + 0x4a) -
                                              *(float *)((long)unaff_x19 + 0x184) <= fVar34) break;
                                          lVar25 = unaff_x19[0xb];
                                          iVar8 = iVar8 + 1;
                                          if (lVar25 == 0) goto LAB_00e443fc;
                                        }
                                      }
                                    }
                                    *(float *)(unaff_x19 + 0xc6) =
                                         *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7)
                                    ;
                                    if (unaff_x19[9] == 0) goto LAB_00e443fc;
                                    fVar28 = *(float *)((long)unaff_x19 + 0x53c);
                                    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,
                                                 *(undefined8 *)puVar6);
                                    if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0))
                                    goto LAB_00e443fc;
                                    fVar35 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                                    FUN_0132138c(unaff_x19[9],0,&stack0x00000070,
                                                 *(undefined8 *)puVar6);
                                    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                                    fVar39 = *(float *)(unaff_x19 + 0xa8);
                                    fVar37 = *(float *)(unaff_x19 + 199) + fVar39;
                                    *(float *)((long)unaff_x19 + 0x634) =
                                         fVar34 + fVar28 + (fVar35 + -1.0) *
                                                           *(float *)((long)_fStack0000000000000070
                                                                     + 0x84);
                                    *(float *)(unaff_x19 + 199) = fVar37;
                                    puVar5 = 
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    ;
                                    if (DAT_03774d76 == '\0') {
                                      thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                      DAT_03774d76 = '\x01';
                                    }
                                    fVar28 = 1.0;
                                    fVar34 = 1.0;
                                    uVar30 = *(undefined4 *)
                                              (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                    in_stack_00000040[0x10] =
                                         **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                    *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar30;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    uVar18 = *(undefined8 *)(unaff_x19[0xca] + 200);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    if ((uVar10 & 1) != 0) {
                                      lVar25 = __start_il2cpp();
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if ((*(char *)(lVar25 + 0x109) == '\0') &&
                                         (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                        uVar30 = FUN_00e4ee40();
                                        *(undefined4 *)((long)unaff_x19 + 0x674) = uVar30;
                                        *(float *)(unaff_x19 + 0xcf) = fVar37;
                                        *(float *)((long)unaff_x19 + 0x67c) = fVar39;
                                      }
                                    }
                                    if (DAT_03774d76 == '\0') {
                                      thunk_FUN_00d48444(puVar5);
                                      DAT_03774d76 = '\x01';
                                    }
                                    lVar16 = *(long *)puVar5;
                                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
                                    *in_stack_00000040 = **(undefined8 **)(lVar16 + 0xb8);
                                    *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar30;
                                    lVar25 = (*(long **)(lVar16 + 0xb8))[1];
                                    unaff_x19[0xc0] = **(long **)(lVar16 + 0xb8);
                                    *(int *)(unaff_x19 + 0xc1) = (int)lVar25;
                                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
                                    in_stack_00000040[3] = **(undefined8 **)(lVar16 + 0xb8);
                                    *(undefined4 *)((long)unaff_x19 + 0x614) = uVar30;
                                    lVar25 = (*(long **)(lVar16 + 0xb8))[1];
                                    unaff_x19[0xc3] = **(long **)(lVar16 + 0xb8);
                                    *(int *)(unaff_x19 + 0xc4) = (int)lVar25;
                                    uVar30 = *(undefined4 *)(*(undefined8 **)(lVar16 + 0xb8) + 1);
                                    in_stack_00000040[6] = **(undefined8 **)(lVar16 + 0xb8);
                                    *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar30;
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    uVar18 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    if ((uVar10 & 1) != 0) {
                                      if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                      if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
                                        lVar25 = __start_il2cpp();
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if ((*(char *)(lVar25 + 0x109) == '\0') &&
                                           (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                          lVar25 = unaff_x19[0xca];
                                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                          if ((lVar25 == 0) ||
                                             (lVar16 = *(long *)(lVar25 + 0xc0), lVar16 == 0))
                                          goto LAB_00e443fc;
                                          fVar35 = fStack0000000000000048;
                                          if (*(char *)(lVar16 + 0x18) != '\0') {
                                            fVar37 = *(float *)(lVar25 + 100);
                                            fVar35 = *(float *)((long)unaff_x19 + 0x2ec) - fVar37;
                                          }
                                          if (*(char *)(lVar16 + 0x19) != '\0') {
                                            uVar30 = FUN_00e4e9f4(fVar35);
                                            lVar25 = unaff_x19[0xca];
                                            *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar30;
                                            *(float *)(unaff_x19 + 0xbf) = fVar37;
                                            *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                                            if (lVar25 == 0) goto LAB_00e443fc;
                                          }
                                          if (*(long *)(lVar25 + 0xc0) == 0) goto LAB_00e443fc;
                                          if (*(char *)(*(long *)(lVar25 + 0xc0) + 0x28) != '\0') {
                                            fVar27 = (float)FUN_00e4e9f4(fVar35);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar27;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            fVar33 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc0] =
                                                 CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >>
                                                                          0x20),
                                                          fVar27 + (float)unaff_x19[0xc0]);
                                            *(float *)(unaff_x19 + 0xc1) = fVar33;
                                            if ((unaff_x19[0xca] == 0) ||
                                               (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            fVar37 = (float)FUN_00e4e9f4(fVar35);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                                            *(float *)(unaff_x19 + 200) = fVar33;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[3] =
                                                 CONCAT44(fVar33 + (float)((ulong)in_stack_00000040
                                                                                  [3] >> 0x20),
                                                          fVar37 + (float)in_stack_00000040[3]);
                                            *(float *)((long)unaff_x19 + 0x614) =
                                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                            if ((unaff_x19[0xca] == 0) ||
                                               (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            fVar27 = (float)FUN_00e4e9f4(fVar35);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar27;
                                            *(float *)(unaff_x19 + 200) = fVar33;
                                            fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc3] =
                                                 CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >>
                                                                          0x20),
                                                          fVar27 + (float)unaff_x19[0xc3]);
                                            *(float *)(unaff_x19 + 0xc4) = fVar37;
                                            if ((unaff_x19[0xca] == 0) ||
                                               (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            fVar35 = (float)FUN_00e4e9f4(fVar35);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[6] =
                                                 CONCAT44(fVar37 + (float)((ulong)in_stack_00000040
                                                                                  [6] >> 0x20),
                                                          fVar35 + (float)in_stack_00000040[6]);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x62c) =
                                                 fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                            if (lVar25 == 0) goto LAB_00e443fc;
                                          }
                                          if (*(long *)(lVar25 + 0xc0) == 0) goto LAB_00e443fc;
                                          if (*(char *)(*(long *)(lVar25 + 0xc0) + 0x50) != '\0') {
                                            FUN_00e5eda8(lVar25,0);
                                            fVar35 = (float)FUN_00e4eb50();
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            fVar27 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc0] =
                                                 CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >>
                                                                          0x20),
                                                          fVar35 + (float)unaff_x19[0xc0]);
                                            *(float *)(unaff_x19 + 0xc1) = fVar27;
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            FUN_00e5b838(lVar25,0);
                                            fVar35 = (float)FUN_00e4eb50();
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar27;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[3] =
                                                 CONCAT44(fVar27 + (float)((ulong)in_stack_00000040
                                                                                  [3] >> 0x20),
                                                          fVar35 + (float)in_stack_00000040[3]);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x614) =
                                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            FUN_00e5eea4(lVar25,0);
                                            fVar35 = (float)FUN_00e4eb50();
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar27;
                                            fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc3] =
                                                 CONCAT44(fVar27 + (float)((ulong)unaff_x19[0xc3] >>
                                                                          0x20),
                                                          fVar35 + (float)unaff_x19[0xc3]);
                                            *(float *)(unaff_x19 + 0xc4) = fVar37;
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            FUN_00e5b7d8(lVar25,0);
                                            fVar35 = (float)FUN_00e4eb50();
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[6] =
                                                 CONCAT44(fVar37 + (float)((ulong)in_stack_00000040
                                                                                  [6] >> 0x20),
                                                          fVar35 + (float)in_stack_00000040[6]);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x62c) =
                                                 fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                                            if (lVar25 == 0) goto LAB_00e443fc;
                                          }
                                          lVar16 = *(long *)(lVar25 + 0xc0);
                                          if (lVar16 == 0) goto LAB_00e443fc;
                                          if (*(char *)(lVar16 + 0x60) != '\0') {
                                            uVar22 = *(undefined8 *)(lVar16 + 0x68);
                                            uVar18 = FUN_00e5eda8(lVar25,0);
                                            fVar35 = (float)FUN_00e4ecc4(uVar18,lVar25,uVar22);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            fVar27 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc0] =
                                                 CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >>
                                                                          0x20),
                                                          fVar35 + (float)unaff_x19[0xc0]);
                                            *(float *)(unaff_x19 + 0xc1) = fVar27;
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            uVar22 = *(undefined8 *)
                                                      (*(long *)(lVar25 + 0xc0) + 0x68);
                                            uVar18 = FUN_00e5b838(lVar25,0);
                                            fVar35 = (float)FUN_00e4ecc4(uVar18,lVar25,uVar22);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar27;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[3] =
                                                 CONCAT44(fVar27 + (float)((ulong)in_stack_00000040
                                                                                  [3] >> 0x20),
                                                          fVar35 + (float)in_stack_00000040[3]);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x614) =
                                                 fVar39 + *(float *)((long)unaff_x19 + 0x614);
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            uVar22 = *(undefined8 *)
                                                      (*(long *)(lVar25 + 0xc0) + 0x68);
                                            uVar18 = FUN_00e5eea4(lVar25,0);
                                            fVar35 = (float)FUN_00e4ecc4(uVar18,lVar25,uVar22);
                                            lVar25 = unaff_x19[0xca];
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar27;
                                            fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            unaff_x19[0xc3] =
                                                 CONCAT44(fVar27 + (float)((ulong)unaff_x19[0xc3] >>
                                                                          0x20),
                                                          fVar35 + (float)unaff_x19[0xc3]);
                                            *(float *)(unaff_x19 + 0xc4) = fVar37;
                                            if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0))
                                            goto LAB_00e443fc;
                                            uVar22 = *(undefined8 *)
                                                      (*(long *)(lVar25 + 0xc0) + 0x68);
                                            uVar18 = FUN_00e5b7d8(lVar25,0);
                                            fVar35 = (float)FUN_00e4ecc4(uVar18,lVar25,uVar22);
                                            *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                                            *(float *)(unaff_x19 + 200) = fVar37;
                                            *(float *)((long)unaff_x19 + 0x644) = fVar39;
                                            in_stack_00000040[6] =
                                                 CONCAT44(fVar37 + (float)((ulong)in_stack_00000040
                                                                                  [6] >> 0x20),
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
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        uVar18 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
                                        in_stack_00000040[0x1e] =
                                             CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                                      (float)((ulong)uVar18 >> 0x20),
                                                      (float)unaff_x19[0x24] * (float)uVar18);
                                      }
                                      lVar25 = unaff_x19[0x5e];
                                      *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      fVar35 = (float)FUN_00e5eda8(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                      uVar10 = (ulong)(int)in_stack_00000068;
                                      *(float *)(lVar25 + uVar10 * 0xc + 0x20) =
                                           fVar35 + fVar37 + *(float *)(unaff_x19 + 0xc0) +
                                           *(float *)((long)unaff_x19 + 0x5f4) +
                                           *(float *)(unaff_x19 + 0xc6) +
                                           *(float *)((long)unaff_x19 + 0x6e4);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5eda8(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      fVar35 = *(float *)((long)unaff_x19 + 0x604);
                                      *(float *)(lVar25 + uVar10 * 0xc + 0x24) =
                                           fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35 +
                                           *(float *)(unaff_x19 + 0xbf) +
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           *(float *)(unaff_x19 + 0xdd);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5eda8(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(float *)(lVar25 + uVar10 * 0xc + 0x28) =
                                           fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                           *(float *)(unaff_x19 + 0xc1) +
                                           *(float *)((long)unaff_x19 + 0x5fc) +
                                           *(float *)(unaff_x19 + 199) +
                                           *(float *)((long)unaff_x19 + 0x6ec);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      fVar35 = (float)FUN_00e5b838(*in_stack_00000060,0);
                                      uVar11 = uVar10 | 1;
                                      uVar20 = (uint)uVar11;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                      fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                      *(float *)(lVar25 + uVar11 * 0xc + 0x20) =
                                           fVar35 + fVar37 + *(float *)((long)unaff_x19 + 0x60c) +
                                           *(float *)((long)unaff_x19 + 0x5f4) +
                                           *(float *)(unaff_x19 + 0xc6) +
                                           *(float *)((long)unaff_x19 + 0x6e4);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5b838(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                      fVar35 = *(float *)(unaff_x19 + 0xc2);
                                      *(float *)(lVar25 + uVar11 * 0xc + 0x24) =
                                           fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35 +
                                           *(float *)(unaff_x19 + 0xbf) +
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           *(float *)(unaff_x19 + 0xdd);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5b838(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                      *(float *)(lVar25 + uVar11 * 0xc + 0x28) =
                                           fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                           *(float *)((long)unaff_x19 + 0x614) +
                                           *(float *)((long)unaff_x19 + 0x5fc) +
                                           *(float *)(unaff_x19 + 199) +
                                           *(float *)((long)unaff_x19 + 0x6ec);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      fVar35 = (float)FUN_00e5eea4(*in_stack_00000060,0);
                                      uVar23 = uVar10 | 2;
                                      uVar21 = (uint)uVar23;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                      fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                      *(float *)(lVar25 + uVar23 * 0xc + 0x20) =
                                           fVar35 + fVar37 + *(float *)(unaff_x19 + 0xc3) +
                                           *(float *)((long)unaff_x19 + 0x5f4) +
                                           *(float *)(unaff_x19 + 0xc6) +
                                           *(float *)((long)unaff_x19 + 0x6e4);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5eea4(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                      fVar35 = *(float *)((long)unaff_x19 + 0x61c);
                                      *(float *)(lVar25 + uVar23 * 0xc + 0x24) =
                                           fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar35 +
                                           *(float *)(unaff_x19 + 0xbf) +
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           *(float *)(unaff_x19 + 0xdd);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5eea4(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                      *(float *)(lVar25 + uVar23 * 0xc + 0x28) =
                                           fVar35 + *(float *)((long)unaff_x19 + 0x67c) +
                                           *(float *)(unaff_x19 + 0xc4) +
                                           *(float *)((long)unaff_x19 + 0x5fc) +
                                           *(float *)(unaff_x19 + 199) +
                                           *(float *)((long)unaff_x19 + 0x6ec);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      fVar35 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
                                      uVar24 = uVar10 | 3;
                                      uVar14 = (uint)uVar24;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                      fVar37 = *(float *)((long)unaff_x19 + 0x674);
                                      *(float *)(lVar25 + uVar24 * 0xc + 0x20) =
                                           fVar35 + fVar37 + *(float *)((long)unaff_x19 + 0x624) +
                                           *(float *)((long)unaff_x19 + 0x5f4) +
                                           *(float *)(unaff_x19 + 0xc6) +
                                           *(float *)((long)unaff_x19 + 0x6e4);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5b7d8(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                      uVar36 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                                      *(float *)(lVar25 + uVar24 * 0xc + 0x24) =
                                           fVar37 + *(float *)(unaff_x19 + 0xcf) +
                                           *(float *)(unaff_x19 + 0xc5) +
                                           *(float *)(unaff_x19 + 0xbf) +
                                           *(float *)((long)unaff_x19 + 0x634) +
                                           *(float *)(unaff_x19 + 0xdd);
                                      lVar25 = unaff_x19[0x5e];
                                      if ((lVar25 == 0) || (*in_stack_00000060 == 0.0))
                                      goto LAB_00e443fc;
                                      FUN_00e5b7d8(*in_stack_00000060,0);
                                      if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                      fVar35 = *(float *)((long)unaff_x19 + 0x62c);
                                      *(float *)(lVar25 + uVar24 * 0xc + 0x28) =
                                           (float)uVar36 + *(float *)((long)unaff_x19 + 0x67c) +
                                           fVar35 + *(float *)((long)unaff_x19 + 0x5fc) +
                                           *(float *)(unaff_x19 + 199) +
                                           *(float *)((long)unaff_x19 + 0x6ec);
                                      lVar25 = unaff_x19[0xca];
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      lVar16 = *in_stack_00000020;
                                      if (*(char *)(lVar25 + 0x108) == '\0') {
                                        uVar30 = FUN_0272b9dc(lVar25 + 0x10,0);
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        lVar16 = lVar16 + uVar10 * 8;
                                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                                        *(float *)(lVar16 + 0x24) = fVar35;
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,
                                                                    0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar11 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar23 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar24 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        uVar30 = FUN_00e5ecc0(*in_stack_00000060,0);
                                        *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                                        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                        FUN_00e5ecc0(unaff_x19[0xca],0);
                                        *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
                                        unaff_x26 = in_stack_00000030;
                                      }
                                      else {
                                        if ((*(long *)(lVar25 + 0x100) == 0) ||
                                           (uVar30 = FUN_00e5dd14(fStack0000000000000048,
                                                                  *(long *)(lVar25 + 0x100),
                                                                  *(undefined4 *)(lVar25 + 0x10c),0)
                                           , lVar16 == 0)) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        lVar16 = lVar16 + uVar10 * 8;
                                        *(undefined4 *)(lVar16 + 0x20) = uVar30;
                                        *(float *)(lVar16 + 0x24) = fVar35;
                                        dVar32 = *in_stack_00000060;
                                        if ((dVar32 == 0.0) ||
                                           (*(long *)((long)dVar32 + 0x100) == 0))
                                        goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = FUN_00e5de6c(fStack0000000000000048,
                                                              *(long *)((long)dVar32 + 0x100),
                                                              *(undefined4 *)((long)dVar32 + 0x10c),
                                                              0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar11 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        dVar32 = *in_stack_00000060;
                                        if ((dVar32 == 0.0) ||
                                           (*(long *)((long)dVar32 + 0x100) == 0))
                                        goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = FUN_00e5dea4(fStack0000000000000048,
                                                              *(long *)((long)dVar32 + 0x100),
                                                              *(undefined4 *)((long)dVar32 + 0x10c),
                                                              0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar23 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        dVar32 = *in_stack_00000060;
                                        if ((dVar32 == 0.0) ||
                                           (*(long *)((long)dVar32 + 0x100) == 0))
                                        goto LAB_00e443fc;
                                        lVar25 = *in_stack_00000020;
                                        uVar30 = thunk_FUN_00e5dd60(fStack0000000000000048,
                                                                    *(long *)((long)dVar32 + 0x100),
                                                                    *(undefined4 *)
                                                                     ((long)dVar32 + 0x10c),0);
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        lVar25 = lVar25 + uVar24 * 8;
                                        *(undefined4 *)(lVar25 + 0x20) = uVar30;
                                        *(float *)(lVar25 + 0x24) = fVar35;
                                        dVar32 = *in_stack_00000060;
                                        if ((dVar32 == 0.0) ||
                                           (*(long *)((long)dVar32 + 0x100) == 0))
                                        goto LAB_00e443fc;
                                        uVar30 = FUN_00e5dedc(fStack0000000000000048,
                                                              *(long *)((long)dVar32 + 0x100),
                                                              *(undefined4 *)((long)dVar32 + 0x10c),
                                                              0);
                                        lVar25 = unaff_x19[0xca];
                                        *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
                                        *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
                                        if ((lVar25 == 0) ||
                                           (lVar16 = *(long *)(lVar25 + 0x100), lVar16 == 0))
                                        goto LAB_00e443fc;
                                        unaff_x26 = in_stack_00000030;
                                        if (((1 < *(int *)(lVar16 + 0x28)) &&
                                            (0.0 < *(float *)(lVar16 + 0x34))) &&
                                           (*(int *)(lVar25 + 0x10c) < 0)) {
                                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                        }
                                      }
                                    }
                                    else {
                                      dVar32 = *in_stack_00000060;
                                      if (dVar32 == 0.0) goto LAB_00e443fc;
                                      uVar36 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                                      if ((*(float *)((long)dVar32 + 0x48) +
                                           *(float *)((long)dVar32 + 0x84) +
                                          *(float *)((long)unaff_x19 + 0x634)) -
                                          *(float *)((long)unaff_x19 + 0x53c) <=
                                          DAT_028aa038 - *(float *)(unaff_x19 + 0x2f))
                                      goto LAB_00e3cd74;
                                      lVar25 = *in_stack_00000038;
                                      if (DAT_03774d76 == '\0') {
                                        thunk_FUN_00d48444(puVar5);
                                        DAT_03774d76 = '\x01';
                                      }
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      uVar30 = *(undefined4 *)
                                                (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                      uVar10 = (ulong)(int)in_stack_00000068;
                                      lVar25 = lVar25 + uVar10 * 0xc;
                                      *(undefined8 *)(lVar25 + 0x20) =
                                           **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                      *(undefined4 *)(lVar25 + 0x28) = uVar30;
                                      lVar25 = *in_stack_00000038;
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar10 | 1))
                                      goto LAB_00e44400;
                                      lVar25 = lVar25 + (uVar10 | 1) * 0xc;
                                      uVar30 = *(undefined4 *)
                                                (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                      *(undefined8 *)(lVar25 + 0x20) =
                                           **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                      *(undefined4 *)(lVar25 + 0x28) = uVar30;
                                      lVar25 = *in_stack_00000038;
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar10 | 2))
                                      goto LAB_00e44400;
                                      lVar25 = lVar25 + (uVar10 | 2) * 0xc;
                                      uVar30 = *(undefined4 *)
                                                (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                      *(undefined8 *)(lVar25 + 0x20) =
                                           **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                      *(undefined4 *)(lVar25 + 0x28) = uVar30;
                                      lVar25 = *in_stack_00000038;
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar10 | 3))
                                      goto LAB_00e44400;
                                      lVar25 = lVar25 + (uVar10 | 3) * 0xc;
                                      uVar30 = *(undefined4 *)
                                                (*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
                                      *(undefined8 *)(lVar25 + 0x20) =
                                           **(undefined8 **)(*(long *)puVar5 + 0xb8);
                                      *(undefined4 *)(lVar25 + 0x28) = uVar30;
                                    }
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar18 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    if ((uVar10 & 1) == 0) {
                                      lVar25 = unaff_x19[0x10];
                                    }
                                    else {
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar25 = *(long *)((long)*in_stack_00000060 + 0xf8),
                                         lVar25 == 0)) goto LAB_00e443fc;
                                      lVar25 = *(long *)(lVar25 + 0x18);
                                    }
                                    if (((lVar25 == 0) ||
                                        (lVar25 = FUN_0272bcf4(lVar25,0), lVar25 == 0)) ||
                                       (plVar9 = (long *)FUN_0267dac8(lVar25,0),
                                       plVar9 == (long *)0x0)) goto LAB_00e443fc;
                                    iVar8 = (**(code **)(*plVar9 + 0x188))
                                                      (plVar9,*(undefined8 *)(*plVar9 + 400));
                                    *(float *)(unaff_x19 + 0xda) = (float)iVar8;
                                    iVar8 = (**(code **)(*plVar9 + 0x1a8))
                                                      (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
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
                                    FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,
                                                 &stack0x00000070,*(undefined8 *)puVar5);
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
                                    FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,
                                                 &stack0x00000070,*(undefined8 *)puVar5);
                                    plVar26 = (long *)StringLiteral_9119;
                                    lVar25 = unaff_x19[0x60];
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if ((*(uint *)(lVar25 + 0x18) <= in_stack_00000068) ||
                                       (uVar20 = (uint)unaff_x21, *(uint *)(lVar25 + 0x18) <= uVar20
                                       )) goto LAB_00e44400;
                                    lVar16 = unaff_x19[0xca];
                                    fVar35 = 0.0;
                                    if (*(float *)(lVar25 + 0x20 + unaff_x22 * 8) !=
                                        *(float *)(lVar25 + 0x20 + unaff_x21 * 8)) {
                                      fVar35 = fVar28;
                                    }
                                    *(float *)(unaff_x19 + 0xda) = fVar35;
                                    if (lVar16 == 0) goto LAB_00e443fc;
                                    cVar4 = *(char *)(lVar16 + 0x108);
                                    fVar35 = fVar28;
                                    if (cVar4 != '\0' || 0x7fffffff < *(uint *)(lVar16 + 0x138)) {
                                      fVar35 = -1.0;
                                    }
                                    *(float *)((long)unaff_x19 + 0x6d4) =
                                         *(float *)(lVar16 + 0x84) * fVar35;
                                    if (cVar4 == '\0') {
                                      iVar38 = *(int *)(lVar16 + 0x160);
                                      iVar8 = (**(code **)(*plVar9 + 0x188))
                                                        (plVar9,*(undefined8 *)(*plVar9 + 400));
                                      uVar36 = 0x3e800000;
                                      *(float *)(unaff_x19 + 0xdb) =
                                           (float)iVar38 / ((float)iVar8 * 0.25);
                                      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                      iVar38 = *(int *)(unaff_x19[0xca] + 0x160);
                                      iVar8 = (**(code **)(*plVar9 + 0x1a8))
                                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                                      fVar37 = (float)iVar38;
                                      fVar35 = (float)iVar8;
                                      puVar17 = (undefined8 *)
                                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                      ;
                                    }
                                    else {
                                      if (*(long *)(lVar16 + 0x100) == 0) goto LAB_00e443fc;
                                      fVar35 = (float)FUN_00e5df18(*(long *)(lVar16 + 0x100),0);
                                      puVar17 = (undefined8 *)
                                                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                      ;
                                      if (((*in_stack_00000060 == 0.0) ||
                                          (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100),
                                          lVar25 == 0)) ||
                                         (plVar9 = *(long **)(lVar25 + 0x18), plVar9 == (long *)0x0)
                                         ) goto LAB_00e443fc;
                                      iVar8 = (**(code **)(*plVar9 + 0x188))
                                                        (plVar9,*(undefined8 *)(*plVar9 + 400));
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100),
                                         lVar25 == 0)) goto LAB_00e443fc;
                                      fVar37 = 0.25;
                                      *(float *)(unaff_x19 + 0xdb) =
                                           fVar35 / (*(float *)(lVar25 + 0x40) * (float)iVar8 * 0.25
                                                    );
                                      FUN_00e5df18(lVar25,0);
                                      if ((unaff_x19[0xca] == 0) ||
                                         ((lVar25 = *(long *)(unaff_x19[0xca] + 0x100), lVar25 == 0
                                          || (plVar9 = *(long **)(lVar25 + 0x18),
                                             plVar9 == (long *)0x0)))) goto LAB_00e443fc;
                                      iVar8 = (**(code **)(*plVar9 + 0x1a8))
                                                        (plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100),
                                         lVar25 == 0)) goto LAB_00e443fc;
                                      fVar35 = *(float *)(lVar25 + 0x44) * (float)iVar8;
                                    }
                                    fVar39 = 0.25;
                                    fVar37 = fVar37 / (fVar35 * 0.25);
                                    *(float *)((long)unaff_x19 + 0x6dc) = fVar37;
                                    if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                                    in_stack_00000078 = CONCAT44(fVar37,(int)unaff_x19[0xdb]);
                                    FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,
                                                 *puVar17);
                                    if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                    in_stack_00000078 = unaff_x19[0xdb];
                                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                                    FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,
                                                 &stack0x00000070,*puVar17);
                                    if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                    in_stack_00000078 = unaff_x19[0xdb];
                                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                                    FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,
                                                 &stack0x00000070,*puVar17);
                                    if (unaff_x19[99] == 0) goto LAB_00e443fc;
                                    in_stack_00000078 = unaff_x19[0xdb];
                                    _fStack0000000000000070 = (double)unaff_x19[0xda];
                                    FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,
                                                 &stack0x00000070,*puVar17);
                                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                                    uVar18 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    fVar35 = (float)uVar36;
                                    uVar14 = (uint)unaff_x28;
                                    uVar21 = (uint)unaff_x29;
                                    if ((uVar10 & 1) != 0) {
                                      if (in_stack_00000050 == in_stack_00000010) {
                                        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                        fVar37 = (float)FUN_00e5b838(*in_stack_00000060,0);
                                        if (DAT_03774d76 == '\0') {
                                          thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                          DAT_03774d76 = '\x01';
                                        }
                                        pfVar12 = *(float **)
                                                   (*(long *)
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  + 0xb8);
                                        fVar35 = fVar35 - pfVar12[2];
                                        uVar36 = (ulong)(uint)fVar35;
                                        if (fVar35 * fVar35 +
                                            (fVar37 - *pfVar12) * (fVar37 - *pfVar12) +
                                            (fVar39 - pfVar12[1]) * (fVar39 - pfVar12[1]) <
                                            DAT_028aa020) goto LAB_00e3dbd8;
                                      }
                                      if ((*in_stack_00000060 == 0.0) ||
                                         (lVar25 = *(long *)((long)*in_stack_00000060 + 0xb0),
                                         lVar25 == 0)) goto LAB_00e443fc;
                                      uVar18 = *(undefined8 *)(lVar25 + 0x38);
                                      if (DAT_03774d77 == '\0') {
                                        thunk_FUN_00d48444(
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  );
                                        DAT_03774d77 = '\x01';
                                      }
                                      fVar35 = (float)uVar18 -
                                               (float)**(undefined8 **)
                                                        (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8);
                                      fVar37 = (float)((ulong)uVar18 >> 0x20) -
                                               (float)((ulong)**(undefined8 **)
                                                                (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                                      if (DAT_028aa020 <= fVar35 * fVar35 + fVar37 * fVar37) {
                                        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                      }
                                      dVar32 = *in_stack_00000060;
                                      if ((dVar32 == 0.0) ||
                                         (lVar25 = *(long *)((long)dVar32 + 0xb0), lVar25 == 0))
                                      goto LAB_00e443fc;
                                      fVar37 = fStack0000000000000048 * *(float *)(lVar25 + 0x38);
                                      *(float *)(unaff_x19 + 0xc9) = fVar37;
                                      fVar35 = fStack0000000000000048 * *(float *)(lVar25 + 0x3c);
                                      *(float *)((long)unaff_x19 + 0x64c) = fVar35;
                                      if (*(char *)(lVar25 + 0x25) != '\0') {
                                        fVar34 = 1.0 / *(float *)((long)dVar32 + 0x84);
                                      }
                                      lVar25 = *in_stack_00000038;
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      lVar16 = lVar25 + unaff_x22 * 0xc;
                                      fVar39 = *(float *)(lVar16 + 0x20);
                                      uVar18 = *(undefined8 *)(lVar16 + 0x24);
                                      *(float *)(unaff_x19 + 0xcd) = fVar39;
                                      in_stack_00000040[0xf] = uVar18;
                                      *(float *)(unaff_x19 + 0xd0) = fVar39;
                                      fVar27 = (float)uVar18;
                                      *(float *)((long)unaff_x19 + 0x684) = fVar27;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                      lVar16 = lVar25 + unaff_x28 * 0xc;
                                      uVar30 = *(undefined4 *)(lVar16 + 0x20);
                                      uVar18 = *(undefined8 *)(lVar16 + 0x24);
                                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                      in_stack_00000040[0xf] = uVar18;
                                      *(undefined4 *)(unaff_x19 + 0xd2) = uVar30;
                                      *(int *)((long)unaff_x19 + 0x694) = (int)uVar18;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                      lVar16 = lVar25 + unaff_x29 * 0xc;
                                      uVar30 = *(undefined4 *)(lVar16 + 0x20);
                                      uVar18 = *(undefined8 *)(lVar16 + 0x24);
                                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                      in_stack_00000040[0xf] = uVar18;
                                      *(undefined4 *)(unaff_x19 + 0xd4) = uVar30;
                                      *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar18;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                      lVar25 = lVar25 + unaff_x21 * 0xc;
                                      uVar30 = *(undefined4 *)(lVar25 + 0x20);
                                      uVar18 = *(undefined8 *)(lVar25 + 0x24);
                                      *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
                                      in_stack_00000040[0xf] = uVar18;
                                      *(undefined4 *)(unaff_x19 + 0xd6) = uVar30;
                                      *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar18;
                                      lVar25 = *(long *)((long)dVar32 + 0xb0);
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(char *)(lVar25 + 0x24) == '\0') {
                                        lVar16 = *in_stack_00000028;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        uVar3 = *(uint *)(lVar16 + 0x18);
                                        if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
                                        lVar13 = lVar16 + unaff_x22 * 8;
                                        *(float *)(lVar13 + 0x20) =
                                             (fVar37 + fVar34 * fVar39) - *(float *)(lVar25 + 0x30);
                                        *(float *)(lVar13 + 0x24) =
                                             (fVar35 + fVar34 * fVar27) - *(float *)(lVar25 + 0x34);
                                        if (((uVar3 <= uVar14) ||
                                            (*(ulong *)(lVar16 + unaff_x28 * 8 + 0x20) =
                                                  CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20)
                                                            * fVar34 +
                                                           (float)((ulong)unaff_x19[0xc9] >> 0x20))
                                                           - (float)((ulong)*(undefined8 *)
                                                                             (lVar25 + 0x30) >> 0x20
                                                                    ),
                                                           ((float)unaff_x19[0xd2] * fVar34 +
                                                           (float)unaff_x19[0xc9]) -
                                                           (float)*(undefined8 *)(lVar25 + 0x30)),
                                            uVar3 <= uVar21)) ||
                                           (*(ulong *)(lVar16 + unaff_x29 * 8 + 0x20) =
                                                 CONCAT44((fVar34 * (float)((ulong)unaff_x19[0xd4]
                                                                           >> 0x20) +
                                                          (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                          (float)((ulong)*(undefined8 *)
                                                                          (lVar25 + 0x30) >> 0x20),
                                                          (fVar34 * (float)unaff_x19[0xd4] +
                                                          (float)unaff_x19[0xc9]) -
                                                          (float)*(undefined8 *)(lVar25 + 0x30)),
                                           uVar3 <= uVar20)) goto LAB_00e44400;
                                        uVar36 = unaff_x19[0xc9];
                                        *(ulong *)(lVar16 + unaff_x21 * 8 + 0x20) =
                                             CONCAT44((fVar34 * (float)((ulong)unaff_x19[0xd6] >>
                                                                       0x20) +
                                                      (float)(uVar36 >> 0x20)) -
                                                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30)
                                                             >> 0x20),
                                                      (fVar34 * (float)unaff_x19[0xd6] +
                                                      (float)uVar36) -
                                                      (float)*(undefined8 *)(lVar25 + 0x30));
                                      }
                                      else {
                                        fVar33 = *(float *)((long)dVar32 + 0x44);
                                        *(float *)(unaff_x19 + 0xd8) = fVar33;
                                        fVar2 = *(float *)((long)dVar32 + 0x48);
                                        lVar16 = unaff_x19[0x61];
                                        *(float *)((long)unaff_x19 + 0x6c4) = fVar2;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        uVar3 = *(uint *)(lVar16 + 0x18);
                                        if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
                                        lVar13 = lVar16 + unaff_x22 * 8;
                                        *(float *)(lVar13 + 0x20) =
                                             (fVar37 + fVar34 * (fVar39 - fVar33)) -
                                             *(float *)(lVar25 + 0x30);
                                        *(float *)(lVar13 + 0x24) =
                                             (fVar35 + fVar34 * (fVar27 - fVar2)) -
                                             *(float *)(lVar25 + 0x34);
                                        if (((uVar3 <= uVar14) ||
                                            (*(ulong *)(lVar16 + unaff_x28 * 8 + 0x20) =
                                                  CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20)
                                                           + ((float)((ulong)unaff_x19[0xd2] >> 0x20
                                                                     ) -
                                                             (float)((ulong)unaff_x19[0xd8] >> 0x20)
                                                             ) * fVar34) -
                                                           (float)((ulong)*(undefined8 *)
                                                                           (lVar25 + 0x30) >> 0x20),
                                                           ((float)unaff_x19[0xc9] +
                                                           ((float)unaff_x19[0xd2] -
                                                           (float)unaff_x19[0xd8]) * fVar34) -
                                                           (float)*(undefined8 *)(lVar25 + 0x30)),
                                            uVar3 <= uVar21)) ||
                                           (*(ulong *)(lVar16 + unaff_x29 * 8 + 0x20) =
                                                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                          fVar34 * ((float)((ulong)unaff_x19[0xd4]
                                                                           >> 0x20) -
                                                                   (float)((ulong)unaff_x19[0xd8] >>
                                                                          0x20))) -
                                                          (float)((ulong)*(undefined8 *)
                                                                          (lVar25 + 0x30) >> 0x20),
                                                          ((float)unaff_x19[0xc9] +
                                                          fVar34 * ((float)unaff_x19[0xd4] -
                                                                   (float)unaff_x19[0xd8])) -
                                                          (float)*(undefined8 *)(lVar25 + 0x30)),
                                           uVar3 <= uVar20)) goto LAB_00e44400;
                                        uVar36 = unaff_x19[0xd8];
                                        *(ulong *)(lVar16 + unaff_x21 * 8 + 0x20) =
                                             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                      fVar34 * ((float)((ulong)unaff_x19[0xd6] >>
                                                                       0x20) -
                                                               (float)(uVar36 >> 0x20))) -
                                                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30)
                                                             >> 0x20),
                                                      ((float)unaff_x19[0xc9] +
                                                      fVar34 * ((float)unaff_x19[0xd6] -
                                                               (float)uVar36)) -
                                                      (float)*(undefined8 *)(lVar25 + 0x30));
                                      }
                                    }
LAB_00e3dbd8:
                                    unaff_x24 = 0xc;
                                    dVar32 = *in_stack_00000060;
                                    if (dVar32 == 0.0) goto LAB_00e443fc;
                                    if (*(char *)((long)dVar32 + 0x108) != '\0') {
                                      if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0')
                                      {
                                        lVar25 = *in_stack_00000020;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        lVar16 = *in_stack_00000028;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        *(undefined8 *)(lVar16 + unaff_x22 * 8 + 0x20) =
                                             *(undefined8 *)(lVar25 + unaff_x22 * 8 + 0x20);
                                        lVar25 = *in_stack_00000020;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        lVar16 = *in_stack_00000028;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(undefined8 *)(lVar16 + (long)(int)uVar14 * 8 + 0x20) =
                                             *(undefined8 *)(lVar25 + (long)(int)uVar14 * 8 + 0x20);
                                        lVar25 = *in_stack_00000020;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        lVar16 = *in_stack_00000028;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *(undefined8 *)(lVar16 + (long)(int)uVar21 * 8 + 0x20) =
                                             *(undefined8 *)(lVar25 + (long)(int)uVar21 * 8 + 0x20);
                                        lVar25 = *in_stack_00000020;
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        lVar16 = *in_stack_00000028;
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_00e44400;
                                        *(undefined8 *)(lVar16 + unaff_x21 * 8 + 0x20) =
                                             *(undefined8 *)(lVar25 + unaff_x21 * 8 + 0x20);
                                        dVar32 = *in_stack_00000060;
                                        if (dVar32 == 0.0) goto LAB_00e443fc;
                                      }
                                    }
                                    dVar31 = DAT_028aa048;
                                    in_stack_00000058 = unaff_x21;
                                    if (*(char *)((long)dVar32 + 0x108) != '\0') {
                                      if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                                      if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0')
                                      {
                                        lVar25 = *unaff_x26;
                                        dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
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
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = 255.0;
                                        }
                                        dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = 255.0;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        *(uint *)(lVar25 + unaff_x22 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        lVar25 = *unaff_x26;
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
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = 255.0;
                                        }
                                        dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = 255.0;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(uint *)(lVar25 + (long)(int)uVar14 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        lVar25 = *unaff_x26;
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
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = 255.0;
                                        }
                                        dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = 255.0;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *(uint *)(lVar25 + (long)(int)uVar21 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        lVar25 = *unaff_x26;
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
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = 255.0;
                                        }
                                        dVar32 = modf(dVar31,(double *)&stack0x00000070);
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = 255.0;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                        *(uint *)(lVar25 + unaff_x21 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        goto LAB_00e43400;
                                      }
                                    }
                                    uVar18 = *(undefined8 *)((long)dVar32 + 0xa8);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    dVar32 = *in_stack_00000060;
                                    if (dVar32 == 0.0) goto LAB_00e443fc;
                                    if ((uVar10 & 1) != 0) {
                                      lVar25 = *(long *)((long)dVar32 + 0xa8);
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      fVar34 = *(float *)(lVar25 + 0x24);
                                      unaff_w25 = 255.0;
                                      if (fVar34 != 0.0) {
                                        *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                      }
                                      plVar26 = (long *)StringLiteral_9119;
                                      cVar4 = *(char *)(lVar25 + 0x2c);
                                      lVar13 = *unaff_x26;
                                      lVar16 = *(long *)(lVar25 + 0x18);
                                      fVar34 = fStack0000000000000048 * fVar34;
                                      if (*(int *)(lVar25 + 0x28) == 1) {
                                        if (cVar4 == '\0') {
                                          if (lVar16 == 0) goto LAB_00e443fc;
                                          fVar37 = *(float *)(lVar25 + 0x20);
                                          fVar29 = *(float *)((long)dVar32 + 0x84);
                                          fVar34 = fVar34 + (*(float *)((long)dVar32 + 0x48) *
                                                            fVar37) / fVar29;
                                          fVar34 = fVar34 - (float)(int)fVar34;
                                          fVar35 = fVar34;
                                          if (1.0 < fVar34) {
                                            fVar35 = fVar28;
                                          }
                                          fVar39 = fVar35;
                                          if (fVar34 < 0.0) {
                                            fVar39 = 0.0;
                                          }
                                          fVar39 = (float)FUN_0269ad38(fVar39,lVar16,0);
                                          fVar34 = fVar39;
                                          if (1.0 < fVar39) {
                                            fVar34 = fVar28;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar39 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e3eeac;
                                            }
                                            fVar28 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = fVar34;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar34 + -0.5);
                                          }
                                          fVar34 = fVar35;
                                          if (1.0 < fVar35) {
                                            fVar34 = 1.0;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar35 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e41534;
                                            }
                                            fVar35 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
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
                                          fVar37 = fVar29;
                                          if (1.0 < fVar29) {
                                            fVar37 = 1.0;
                                          }
                                          fVar37 = fVar37 * 255.0;
                                          if (fVar29 < 0.0) {
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
                                          if (lVar13 == 0) goto LAB_00e443fc;
                                          if (*(uint *)(lVar13 + 0x18) <= in_stack_00000068)
                                          goto LAB_00e44400;
                                          *(uint *)(lVar13 + unaff_x22 * 4 + 0x20) =
                                               (int)fVar28 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                               ((int)fVar34 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                          dVar32 = *in_stack_00000060;
                                          if (((dVar32 == 0.0) ||
                                              (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)
                                              ) || (lVar16 = *(long *)(lVar25 + 0x18), lVar16 == 0))
                                          goto LAB_00e443fc;
                                          fVar35 = *(float *)((long)dVar32 + 0x48);
                                          fVar37 = *(float *)((long)dVar32 + 0x84);
                                          lVar13 = *unaff_x26;
                                          fVar28 = fStack0000000000000048 *
                                                   *(float *)(lVar25 + 0x24) +
                                                   (fVar35 * *(float *)(lVar25 + 0x20)) / fVar37;
                                          fVar28 = fVar28 - (float)(int)fVar28;
                                          fVar34 = fVar28;
                                          if (1.0 < fVar28) {
                                            fVar34 = 1.0;
                                          }
                                        }
                                        else {
                                          if (lVar16 == 0) goto LAB_00e443fc;
                                          fVar37 = *(float *)((long)dVar32 + 0x84);
                                          fVar29 = *(float *)(lVar25 + 0x20);
                                          fVar34 = fVar34 + ((*(float *)((long)dVar32 + 0x48) +
                                                             fVar37) * fVar29) / fVar37;
                                          fVar34 = fVar34 - (float)(int)fVar34;
                                          fVar35 = fVar34;
                                          if (1.0 < fVar34) {
                                            fVar35 = fVar28;
                                          }
                                          fVar39 = fVar35;
                                          if (fVar34 < 0.0) {
                                            fVar39 = 0.0;
                                          }
                                          fVar39 = (float)FUN_0269ad38(fVar39,lVar16,0);
                                          fVar34 = fVar39;
                                          if (1.0 < fVar39) {
                                            fVar34 = fVar28;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar39 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e3ed6c;
                                            }
                                            fVar28 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = fVar34;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar34 + -0.5);
                                          }
                                          fVar34 = fVar35;
                                          if (1.0 < fVar35) {
                                            fVar34 = 1.0;
                                          }
                                          fVar34 = fVar34 * 255.0;
                                          if (fVar35 < 0.0) {
                                            fVar34 = 0.0;
                                          }
                                          dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                          if (0.0 <= fVar34) {
                                            if (dVar32 == 0.5) {
                                              fVar34 = (float)_fStack0000000000000070 + 1.0;
                                              goto LAB_00e3f2ec;
                                            }
                                            fVar35 = (float)(int)(fVar34 + 0.5);
                                          }
                                          else if (dVar32 == -0.5) {
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
                                          fVar37 = fVar29;
                                          if (1.0 < fVar29) {
                                            fVar37 = 1.0;
                                          }
                                          fVar37 = fVar37 * 255.0;
                                          if (fVar29 < 0.0) {
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
                                          if (lVar13 == 0) goto LAB_00e443fc;
                                          if (*(uint *)(lVar13 + 0x18) <= in_stack_00000068)
                                          goto LAB_00e44400;
                                          *(uint *)(lVar13 + unaff_x22 * 4 + 0x20) =
                                               (int)fVar28 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                               ((int)fVar34 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                          dVar32 = *in_stack_00000060;
                                          if (((dVar32 == 0.0) ||
                                              (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)
                                              ) || (lVar16 = *(long *)(lVar25 + 0x18), lVar16 == 0))
                                          goto LAB_00e443fc;
                                          fVar35 = *(float *)((long)dVar32 + 0x84);
                                          fVar37 = *(float *)(lVar25 + 0x20);
                                          lVar13 = *unaff_x26;
                                          fVar28 = fStack0000000000000048 *
                                                   *(float *)(lVar25 + 0x24) +
                                                   ((*(float *)((long)dVar32 + 0x48) + fVar35) *
                                                   fVar37) / fVar35;
                                          fVar28 = fVar28 - (float)(int)fVar28;
                                          fVar34 = fVar28;
                                          if (1.0 < fVar28) {
                                            fVar34 = 1.0;
                                          }
                                        }
                                        fVar29 = fVar34;
                                        if (fVar28 < 0.0) {
                                          fVar29 = 0.0;
                                        }
                                        fVar29 = (float)FUN_0269ad38(fVar29,lVar16,0);
                                        fVar28 = fVar29;
                                        if (1.0 < fVar29) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar29 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e419a4;
                                          }
                                          fVar29 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar28 = fVar34;
                                        if (1.0 < fVar34) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar34 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e41a34;
                                          }
                                          fVar28 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = fVar34;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar34 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar35 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar35 + -0.5);
                                        }
                                        if (lVar13 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(uint *)(lVar13 + (long)(int)uVar14 * 4 + 0x20) =
                                             (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        dVar32 = *in_stack_00000060;
                                        if (((dVar32 == 0.0) ||
                                            (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0))
                                           || (*(long *)(lVar25 + 0x18) == 0)) goto LAB_00e443fc;
                                        fVar35 = *(float *)((long)dVar32 + 0x48);
                                        fVar37 = *(float *)((long)dVar32 + 0x84);
                                        lVar16 = *unaff_x26;
                                        fVar28 = fStack0000000000000048 * *(float *)(lVar25 + 0x24)
                                                 + (fVar35 * *(float *)(lVar25 + 0x20)) / fVar37;
                                        fVar28 = fVar28 - (float)(int)fVar28;
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar29 = fVar34;
                                        if (fVar28 < 0.0) {
                                          fVar29 = 0.0;
                                        }
                                        fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar25 + 0x18)
                                                                     ,0);
                                        fVar28 = fVar29;
                                        if (1.0 < fVar29) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar29 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e41cd0;
                                          }
                                          fVar29 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar28 = fVar34;
                                        if (1.0 < fVar34) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar34 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e41d60;
                                          }
                                          fVar28 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = fVar34;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar34 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar35 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar35 + -0.5);
                                        }
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *(uint *)(lVar16 + (long)(int)uVar21 * 4 + 0x20) =
                                             (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        dVar32 = *in_stack_00000060;
                                        if (((dVar32 == 0.0) ||
                                            (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0))
                                           || (*(long *)(lVar25 + 0x18) == 0)) goto LAB_00e443fc;
                                        uVar11 = (ulong)(uint)*(float *)((long)dVar32 + 0x48);
                                        uVar10 = (ulong)(uint)*(float *)((long)dVar32 + 0x84);
                                        lVar16 = *unaff_x26;
                                        fVar28 = fStack0000000000000048 * *(float *)(lVar25 + 0x24)
                                                 + (*(float *)((long)dVar32 + 0x48) *
                                                   *(float *)(lVar25 + 0x20)) /
                                                   *(float *)((long)dVar32 + 0x84);
                                        fVar28 = fVar28 - (float)(int)fVar28;
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar35 = fVar34;
                                        if (fVar28 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(lVar25 + 0x18)
                                                                     ,0);
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        uVar36 = 0x437f0000;
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e41ffc;
                                          }
                                          fVar35 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar28 = fVar34;
                                        if (1.0 < fVar34) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar34 < 0.0) {
                                          fVar28 = 0.0;
                                        }
                                        goto LAB_00e42040;
                                      }
                                      lVar15 = *in_stack_00000038;
                                      if (lVar15 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      fVar37 = *(float *)(lVar15 + unaff_x22 * 0xc + 0x20);
                                      fVar29 = *(float *)((long)dVar32 + 0x84);
                                      fVar34 = fVar34 + (fVar37 * *(float *)(lVar25 + 0x20)) /
                                                        fVar29;
                                      fVar34 = fVar34 - (float)(int)fVar34;
                                      fVar35 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar35 = fVar28;
                                      }
                                      fVar39 = fVar35;
                                      if (fVar34 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      fVar39 = (float)FUN_0269ad38(fVar39,lVar16,0);
                                      fVar34 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar34 = fVar28;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3e0b0;
                                        }
                                        fVar28 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3ee80;
                                        }
                                        fVar35 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
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
                                      fVar37 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar37 = 1.0;
                                      }
                                      fVar37 = fVar37 * 255.0;
                                      if (fVar29 < 0.0) {
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
                                      if (lVar13 == 0) goto LAB_00e443fc;
                                      fVar29 = 1.0;
                                      if (*(uint *)(lVar13 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      *(uint *)(lVar13 + unaff_x22 * 4 + 0x20) =
                                           (int)fVar28 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                      plVar26 = (long *)StringLiteral_9119;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                                         (lVar16 = *in_stack_00000038, lVar16 == 0))
                                      goto LAB_00e443fc;
                                      lVar15 = *unaff_x26;
                                      lVar13 = *(long *)(lVar25 + 0x18);
                                      fVar34 = fStack0000000000000048 * *(float *)(lVar25 + 0x24);
                                      if (cVar4 != '\0') {
                                        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_00e44400;
                                        if (lVar13 == 0) goto LAB_00e443fc;
                                        fVar35 = *(float *)(lVar16 + (long)(int)uVar14 * 0xc + 0x20)
                                        ;
                                        fVar37 = *(float *)((long)dVar32 + 0x84);
                                        fVar34 = fVar34 + (fVar35 * *(float *)(lVar25 + 0x20)) /
                                                          fVar37;
                                        fVar34 = fVar34 - (float)(int)fVar34;
                                        fVar28 = fVar34;
                                        if (1.0 < fVar34) {
                                          fVar28 = fVar29;
                                        }
                                        fVar39 = fVar28;
                                        if (fVar34 < 0.0) {
                                          fVar39 = 0.0;
                                        }
                                        fVar39 = (float)FUN_0269ad38(fVar39,lVar13,0);
                                        fVar34 = fVar39;
                                        if (1.0 < fVar39) {
                                          fVar34 = fVar29;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar39 < 0.0) {
                                          fVar34 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                        if (0.0 <= fVar34) {
                                          if (dVar32 == 0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3f234;
                                          }
                                          fVar29 = (float)(int)(fVar34 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = fVar34;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar34 + -0.5);
                                        }
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                        if (0.0 <= fVar34) {
                                          if (dVar32 == 0.5) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3f594;
                                          }
                                          fVar28 = (float)(int)(fVar34 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = fVar34;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar34 + -0.5);
                                        }
                                        fVar34 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar34 = 0.0;
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
                                        fVar35 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar35 = 1.0;
                                        }
                                        fVar35 = fVar35 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar35 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                        if (0.0 <= fVar35) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar35 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar35 + -0.5);
                                        }
                                        if (lVar15 == 0) goto LAB_00e443fc;
                                        unaff_s10 = 1.0;
                                        if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(uint *)(lVar15 + (long)(int)uVar14 * 4 + 0x20) =
                                             (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                             ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        param_1 = *in_stack_00000060;
                                        if (((param_1 == 0.0) ||
                                            (in_x9 = *(long *)((long)param_1 + 0xa8), in_x9 == 0))
                                           || (in_x10 = *in_stack_00000038, in_x10 == 0))
                                        goto LAB_00e443fc;
                                        if (*(uint *)(in_x10 + 0x18) <= uVar21) goto LAB_00e44400;
                                        param_2 = *(long *)(in_x9 + 0x18);
                                        in_s4 = fStack0000000000000048;
                                        goto code_r0x00e3f790;
                                      }
                                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      if (lVar13 == 0) goto LAB_00e443fc;
                                      fVar35 = *(float *)(lVar16 + unaff_x22 * 0xc + 0x20);
                                      fVar37 = *(float *)((long)dVar32 + 0x84);
                                      fVar34 = fVar34 + (fVar35 * *(float *)(lVar25 + 0x20)) /
                                                        fVar37;
                                      fVar34 = fVar34 - (float)(int)fVar34;
                                      fVar28 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar28 = fVar29;
                                      }
                                      fVar39 = fVar28;
                                      if (fVar34 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      fVar39 = (float)FUN_0269ad38(fVar39,lVar13,0);
                                      fVar34 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar34 = fVar29;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3f25c;
                                        }
                                        fVar29 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar28 < 0.0) {
                                        fVar34 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                      if (0.0 <= fVar34) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e415c4;
                                        }
                                        fVar28 = (float)(int)(fVar34 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar34 + -0.5);
                                      }
                                      fVar34 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar34 = 0.0;
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
                                      fVar35 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar35 = 1.0;
                                      }
                                      fVar35 = fVar35 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar35 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                      if (0.0 <= fVar35) {
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar35 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar35 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar35 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar35 = (float)(int)(fVar35 + -0.5);
                                      }
                                      if (lVar15 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_00e44400;
                                      *(uint *)(lVar15 + (long)(int)uVar14 * 4 + 0x20) =
                                           (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                                         (lVar16 = *in_stack_00000038, lVar16 == 0))
                                      goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      if (*(long *)(lVar25 + 0x18) == 0) goto LAB_00e443fc;
                                      fVar35 = *(float *)(lVar16 + unaff_x22 * 0xc + 0x20);
                                      fVar37 = *(float *)((long)dVar32 + 0x84);
                                      lVar16 = *unaff_x26;
                                      fVar28 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                                               (fVar35 * *(float *)(lVar25 + 0x20)) / fVar37;
                                      fVar28 = fVar28 - (float)(int)fVar28;
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                      fVar29 = fVar34;
                                      if (fVar28 < 0.0) {
                                        fVar29 = 0.0;
                                      }
                                      fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar25 + 0x18),0
                                                                  );
                                      fVar28 = fVar29;
                                      if (1.0 < fVar29) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar29 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e421fc;
                                        }
                                        fVar29 = (float)(int)(fVar28 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                                        fVar29 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar29 = fVar28;
                                        }
                                      }
                                      else {
                                        fVar29 = (float)(int)(fVar28 + -0.5);
                                      }
                                      fVar28 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e4228c;
                                        }
                                        fVar28 = (float)(int)(fVar28 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar34;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + -0.5);
                                      }
                                      fVar34 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar34 = 1.0;
                                      }
                                      fVar34 = fVar34 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar34 = 0.0;
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
                                      fVar35 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar35 = 1.0;
                                      }
                                      fVar35 = fVar35 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar35 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                                      if (0.0 <= fVar35) {
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar35 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar35 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar35 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar35 = (float)(int)(fVar35 + -0.5);
                                      }
                                      if (lVar16 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_00e44400;
                                      *(uint *)(lVar16 + (long)(int)uVar21 * 4 + 0x20) =
                                           (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                           ((int)fVar34 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 == 0.0) ||
                                          (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                                         (lVar16 = *in_stack_00000038, lVar16 == 0))
                                      goto LAB_00e443fc;
                                      if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068)
                                      goto LAB_00e44400;
                                      if (*(long *)(lVar25 + 0x18) == 0) goto LAB_00e443fc;
                                      fVar34 = *(float *)(lVar16 + unaff_x22 * 0xc + 0x20);
                                      uVar11 = (ulong)(uint)fVar34;
                                      uVar10 = (ulong)(uint)*(float *)((long)dVar32 + 0x84);
                                      lVar16 = *unaff_x26;
                                      fVar28 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                                               (fVar34 * *(float *)(lVar25 + 0x20)) /
                                               *(float *)((long)dVar32 + 0x84);
                                      fVar28 = fVar28 - (float)(int)fVar28;
                                      fVar34 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar34 = 1.0;
                                      }
                                      fVar35 = fVar34;
                                      if (fVar28 < 0.0) {
                                        fVar35 = 0.0;
                                      }
                                      fVar35 = (float)FUN_0269ad38(fVar35,*(long *)(lVar25 + 0x18),0
                                                                  );
                                      fVar28 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar28 = 1.0;
                                      }
                                      uVar36 = 0x437f0000;
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e42560;
                                        }
                                        fVar35 = (float)(int)(fVar28 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                                        fVar35 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar35 = fVar28;
                                        }
                                      }
                                      else {
                                        fVar35 = (float)(int)(fVar28 + -0.5);
                                      }
                                      fVar28 = fVar34;
                                      if (1.0 < fVar34) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      goto joined_r0x00e42048;
                                    }
                                    uVar18 = *(undefined8 *)((long)dVar32 + 0xb0);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                    dVar32 = DAT_028aa048;
                                    if ((uVar10 & 1) == 0) {
                                      if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                      uVar18 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                      if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                  + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      uVar10 = FUN_02681b9c(uVar18,0,0);
                                      lVar25 = *unaff_x26;
                                      if ((uVar10 & 1) == 0) {
                                        fVar28 = *(float *)((long)unaff_x19 + 0x8c);
                                        fVar35 = *(float *)(unaff_x19 + 0x12);
                                        fVar39 = *(float *)((long)unaff_x19 + 0x94);
                                        fVar37 = *(float *)(unaff_x19 + 0x13);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fd48;
                                          }
                                          fVar35 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar28 = fVar39;
                                        if (1.0 < fVar39) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar39 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar39 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar39 = fVar29;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        *(uint *)(lVar25 + unaff_x22 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        fVar28 = *(float *)(unaff_x19 + 0x12);
                                        lVar25 = unaff_x19[0x5f];
                                        fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                        fVar35 = *(float *)(unaff_x19 + 0x13);
                                        fVar34 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                        if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar39 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar39 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e40610;
                                          }
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar39 + -0.5);
                                        }
                                        fVar28 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar37 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar37 = 1.0;
                                        }
                                        fVar37 = fVar37 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar37 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                        if (0.0 <= fVar37) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar37 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar37 + -0.5);
                                        }
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(uint *)(lVar25 + (long)(int)uVar14 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        fVar28 = *(float *)(unaff_x19 + 0x12);
                                        lVar25 = unaff_x19[0x5f];
                                        fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                        fVar35 = *(float *)(unaff_x19 + 0x13);
                                        fVar34 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                                        if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar39 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar39 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e40e20;
                                          }
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar39 + -0.5);
                                        }
                                        fVar28 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar37 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar37 = 1.0;
                                        }
                                        fVar37 = fVar37 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar37 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                        if (0.0 <= fVar37) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar37 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar37 + -0.5);
                                        }
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *(uint *)(lVar25 + (long)(int)uVar21 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        fVar34 = *(float *)((long)unaff_x19 + 0x8c);
                                        fVar28 = *(float *)(unaff_x19 + 0x12);
                                        lVar25 = unaff_x19[0x5f];
                                        fVar37 = *(float *)((long)unaff_x19 + 0x94);
                                        fVar35 = *(float *)(unaff_x19 + 0x13);
                                      }
                                      else {
                                        if ((*in_stack_00000060 == 0.0) ||
                                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                           lVar16 == 0)) goto LAB_00e443fc;
                                        fVar28 = *(float *)(lVar16 + 0x18);
                                        fVar35 = *(float *)(lVar16 + 0x1c);
                                        fVar39 = *(float *)(lVar16 + 0x20);
                                        fVar37 = *(float *)(lVar16 + 0x24);
                                        fVar34 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar34 = 1.0;
                                        }
                                        fVar34 = fVar34 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar28 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fcc4;
                                          }
                                          fVar35 = (float)(int)(fVar28 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar28 = fVar39;
                                        if (1.0 < fVar39) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar39 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar39 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar39 = fVar29;
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
                                        if (lVar25 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                        goto LAB_00e44400;
                                        *(uint *)(lVar25 + unaff_x22 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                        if ((*in_stack_00000060 == 0.0) ||
                                           (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                           lVar25 == 0)) goto LAB_00e443fc;
                                        fVar28 = *(float *)(lVar25 + 0x1c);
                                        lVar16 = *unaff_x26;
                                        fVar37 = *(float *)(lVar25 + 0x20);
                                        fVar35 = *(float *)(lVar25 + 0x24);
                                        fVar34 = *(float *)(lVar25 + 0x18) * 255.0;
                                        if (*(float *)(lVar25 + 0x18) < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar39 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar39 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e4057c;
                                          }
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar39 + -0.5);
                                        }
                                        fVar28 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar37 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar37 = 1.0;
                                        }
                                        fVar37 = fVar37 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar37 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                        if (0.0 <= fVar37) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar37 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar37 + -0.5);
                                        }
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar14) goto LAB_00e44400;
                                        *(uint *)(lVar16 + (long)(int)uVar14 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        if ((*in_stack_00000060 == 0.0) ||
                                           (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                           lVar25 == 0)) goto LAB_00e443fc;
                                        fVar28 = *(float *)(lVar25 + 0x1c);
                                        lVar16 = *unaff_x26;
                                        fVar37 = *(float *)(lVar25 + 0x20);
                                        fVar35 = *(float *)(lVar25 + 0x24);
                                        fVar34 = *(float *)(lVar25 + 0x18) * 255.0;
                                        if (*(float *)(lVar25 + 0x18) < 0.0) {
                                          fVar34 = fVar29;
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
                                        fVar39 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar39 = 1.0;
                                        }
                                        fVar39 = fVar39 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar39 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                        if (0.0 <= fVar39) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e40d8c;
                                          }
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = fVar28;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar39 + -0.5);
                                        }
                                        fVar28 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar28 = 1.0;
                                        }
                                        fVar28 = fVar28 * 255.0;
                                        if (fVar37 < 0.0) {
                                          fVar28 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                        if (0.0 <= fVar28) {
                                          if (dVar32 == 0.5) {
                                            fVar28 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar28 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar28 = (float)(int)(fVar28 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + -0.5);
                                        }
                                        fVar37 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar37 = 1.0;
                                        }
                                        fVar37 = fVar37 * 255.0;
                                        if (fVar35 < 0.0) {
                                          fVar37 = fVar29;
                                        }
                                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                        if (0.0 <= fVar37) {
                                          if (dVar32 == 0.5) {
                                            fVar35 = (float)_fStack0000000000000070;
                                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                                            }
                                          }
                                          else {
                                            fVar35 = (float)(int)(fVar37 + 0.5);
                                          }
                                        }
                                        else if (dVar32 == -0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar37 + -0.5);
                                        }
                                        if (lVar16 == 0) goto LAB_00e443fc;
                                        if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_00e44400;
                                        *(uint *)(lVar16 + (long)(int)uVar21 * 4 + 0x20) =
                                             (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                        if ((*in_stack_00000060 == 0.0) ||
                                           (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                           lVar16 == 0)) goto LAB_00e443fc;
                                        fVar34 = *(float *)(lVar16 + 0x18);
                                        fVar28 = *(float *)(lVar16 + 0x1c);
                                        lVar25 = *unaff_x26;
                                        fVar37 = *(float *)(lVar16 + 0x20);
                                        fVar35 = *(float *)(lVar16 + 0x24);
                                      }
                                      fVar39 = fVar34 * 255.0;
                                      if (fVar34 < 0.0) {
                                        fVar39 = fVar29;
                                      }
                                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                      if (0.0 <= fVar39) {
                                        if (dVar32 == 0.5) {
                                          fVar34 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar34 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar34 = (float)(int)(fVar39 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar34 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar34 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar34 = (float)(int)(fVar39 + -0.5);
                                      }
                                      fVar39 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar39 = 1.0;
                                      }
                                      fVar39 = fVar39 * 255.0;
                                      if (fVar28 < 0.0) {
                                        fVar39 = fVar29;
                                      }
                                      dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                      if (0.0 <= fVar39) {
                                        if (dVar32 == 0.5) {
                                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e412dc;
                                        }
                                        fVar39 = (float)(int)(fVar39 + 0.5);
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                                        fVar39 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar39 = fVar28;
                                        }
                                      }
                                      else {
                                        fVar39 = (float)(int)(fVar39 + -0.5);
                                      }
                                      fVar28 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar28 = 1.0;
                                      }
                                      fVar28 = fVar28 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar28 = fVar29;
                                      }
                                      dVar32 = modf((double)fVar28,(double *)&stack0x00000070);
                                      if (0.0 <= fVar28) {
                                        if (dVar32 == 0.5) {
                                          fVar28 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar28 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar28 = (float)(int)(fVar28 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar28 + -0.5);
                                      }
                                      uVar36 = 0x3f800000;
                                      fVar37 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar37 = 1.0;
                                      }
                                      fVar37 = fVar37 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar37 = fVar29;
                                      }
                                      dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                      if (0.0 <= fVar37) {
                                        if (dVar32 == 0.5) {
                                          fVar35 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar35 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar35 = (float)(int)(fVar37 + 0.5);
                                        }
                                      }
                                      else if (dVar32 == -0.5) {
                                        fVar35 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar35 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar35 = (float)(int)(fVar37 + -0.5);
                                      }
                                      if (lVar25 == 0) goto LAB_00e443fc;
                                      if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                      *(uint *)(lVar25 + unaff_x21 * 4 + 0x20) =
                                           (int)fVar34 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                           ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                      goto LAB_00e43400;
                                    }
                                    lVar25 = *unaff_x26;
                                    dVar31 = modf(DAT_028aa048,(double *)&stack0x00000070);
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
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                    if (dVar31 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = 255.0;
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
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                    goto LAB_00e44400;
                                    *(uint *)(lVar25 + unaff_x22 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar25 = *unaff_x26;
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
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                    if (dVar31 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = 255.0;
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
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                    *(uint *)(lVar25 + (long)(int)uVar14 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar25 = *unaff_x26;
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
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                    if (dVar31 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = 255.0;
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
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                    *(uint *)(lVar25 + (long)(int)uVar21 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    lVar25 = *unaff_x26;
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
                                      fVar28 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar28 = 255.0;
                                    }
                                    dVar31 = modf(dVar32,(double *)&stack0x00000070);
                                    if (dVar31 == 0.5) {
                                      fVar35 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar35 = 255.0;
                                    }
                                    dVar32 = modf(dVar32,(double *)&stack0x00000070);
                                    if (dVar32 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar37 = 255.0;
                                    }
                                    if (lVar25 == 0) goto LAB_00e443fc;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                                    *(uint *)(lVar25 + unaff_x21 * 4 + 0x20) =
                                         (int)fVar34 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                                         ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                    if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                                    uVar18 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                                    if (*(int *)(*(long *)
                                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                                + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    uVar10 = FUN_02681b9c(uVar18,0,0);
                                  } while ((uVar10 & 1) == 0);
                                  lVar25 = *unaff_x26;
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068)
                                  goto LAB_00e44400;
                                  puVar19 = (uint *)(lVar25 + unaff_x22 * 4 + 0x20);
                                  uVar20 = *puVar19;
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                     lVar25 == 0)) break;
                                  fVar28 = ((float)(uVar20 & 0xff) / 255.0) *
                                           *(float *)(lVar25 + 0x18);
                                  fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) *
                                           *(float *)(lVar25 + 0x1c);
                                  fVar37 = *(float *)(lVar25 + 0x20);
                                  fVar35 = *(float *)(lVar25 + 0x24);
                                  fVar34 = fVar28 * 255.0;
                                  if (fVar28 < 0.0) {
                                    fVar34 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                  if (0.0 <= fVar34) {
                                    if (dVar32 == 0.5) {
                                      fVar34 = 1.0;
                                      goto LAB_00e3ede4;
                                    }
                                    fVar28 = (float)(int)(fVar34 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar34 = -1.0;
LAB_00e3ede4:
                                    fVar28 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar28 = (float)_fStack0000000000000070 + fVar34;
                                    }
                                  }
                                  else {
                                    fVar28 = (float)(int)(fVar34 + -0.5);
                                  }
                                  fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                                  fVar34 = fVar39 * 255.0;
                                  if (fVar39 < 0.0) {
                                    fVar34 = fVar29;
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
                                  fVar39 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar39 = 1.0;
                                  }
                                  fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                                  fVar39 = fVar39 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar39 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3ffb0;
                                    }
                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                    fVar37 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                  if (0.0 <= fVar37) {
                                    if (dVar32 == 0.5) {
                                      fVar35 = 1.0;
                                      goto LAB_00e40174;
                                    }
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                  *puVar19 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                  lVar25 = *unaff_x26;
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar14) goto LAB_00e44400;
                                  puVar19 = (uint *)(lVar25 + (long)(int)uVar14 * 4 + 0x20);
                                  uVar20 = *puVar19;
                                  if ((*in_stack_00000060 == 0.0) ||
                                     (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0),
                                     lVar25 == 0)) break;
                                  fVar28 = ((float)(uVar20 & 0xff) / 255.0) *
                                           *(float *)(lVar25 + 0x18);
                                  fVar39 = ((float)(uVar20 >> 8 & 0xff) / 255.0) *
                                           *(float *)(lVar25 + 0x1c);
                                  fVar37 = *(float *)(lVar25 + 0x20);
                                  fVar35 = *(float *)(lVar25 + 0x24);
                                  fVar34 = fVar28 * 255.0;
                                  if (fVar28 < 0.0) {
                                    fVar34 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                                  if (0.0 <= fVar34) {
                                    if (dVar32 == 0.5) {
                                      fVar34 = 1.0;
                                      goto LAB_00e404dc;
                                    }
                                    fVar28 = (float)(int)(fVar34 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar34 = -1.0;
LAB_00e404dc:
                                    fVar28 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar28 = (float)_fStack0000000000000070 + fVar34;
                                    }
                                  }
                                  else {
                                    fVar28 = (float)(int)(fVar34 + -0.5);
                                  }
                                  fVar37 = ((float)(uVar20 >> 0x10 & 0xff) / 255.0) * fVar37;
                                  fVar34 = fVar39 * 255.0;
                                  if (fVar39 < 0.0) {
                                    fVar34 = fVar29;
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
                                  fVar39 = fVar37;
                                  if (1.0 < fVar37) {
                                    fVar39 = 1.0;
                                  }
                                  fVar35 = ((float)(uVar20 >> 0x18) / 255.0) * fVar35;
                                  fVar39 = fVar39 * 255.0;
                                  if (fVar37 < 0.0) {
                                    fVar39 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar32 == 0.5) {
                                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e40888;
                                    }
                                    fVar39 = (float)(int)(fVar39 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                    fVar37 = fVar29;
                                  }
                                  dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                                  if (0.0 <= fVar37) {
                                    if (dVar32 == 0.5) {
                                      fVar35 = 1.0;
                                      goto LAB_00e40a4c;
                                    }
                                    fVar37 = (float)(int)(fVar37 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
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
                                  *puVar19 = (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                  lVar25 = *unaff_x26;
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar21) goto LAB_00e44400;
                                  lVar25 = lVar25 + (long)(int)uVar21 * 4;
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
      }
    }
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar11 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar16 = unaff_x19[0xcb];
    uVar30 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar16 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar11) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar16 + lVar25);
    *puVar1 = uVar30;
    puVar1[1] = (int)uVar10;
    puVar1[2] = (int)uVar36;
    lVar16 = unaff_x19[0xca];
    if ((lVar16 == 0) || (lVar13 = unaff_x19[0xcc], lVar13 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar13 + 0x18) <= uVar11) goto LAB_00e44400;
    uVar30 = *(undefined4 *)(lVar16 + 0x4c);
    uVar11 = uVar11 + 1;
    puVar17 = (undefined8 *)(lVar13 + lVar25);
    lVar25 = lVar25 + 0xc;
    *puVar17 = *(undefined8 *)(lVar16 + 0x44);
    *(undefined4 *)(puVar17 + 1) = uVar30;
  } while (uVar20 != uVar11);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar26,*plVar9,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar25 = unaff_x19[0x59];
  if (lVar25 != 0) {
    (**(code **)(lVar25 + 0x18))
              (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000038,*plVar26,*plVar9,
               *(undefined8 *)(lVar25 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar25 = __start_il2cpp();
  if (lVar25 != 0) {
    if ((*(char *)(lVar25 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


