/*
FUNCTION_NAME: FullSerializer.Internal.fsPrimitiveConverter$$UseInt64
ENTRY_POINT: 00e3deac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 113
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;weak_pose_support;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;weak_vector_component_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x00e4022c) */
/* WARNING: Removing unreachable block (ram,0x00e3fd64) */
/* WARNING: Removing unreachable block (ram,0x00e3ecf8) */
/* WARNING: Removing unreachable block (ram,0x00e42e1c) */
/* WARNING: Removing unreachable block (ram,0x00e40338) */
/* WARNING: Removing unreachable block (ram,0x00e42814) */
/* WARNING: Removing unreachable block (ram,0x00e40b00) */
/* WARNING: Removing unreachable block (ram,0x00e40474) */
/* WARNING: Removing unreachable block (ram,0x00e40c08) */
/* WARNING: Removing unreachable block (ram,0x00e428b4) */
/* WARNING: Removing unreachable block (ram,0x00e411d8) */
/* WARNING: Removing unreachable block (ram,0x00e4063c) */
/* WARNING: Removing unreachable block (ram,0x00e42b18) */
/* WARNING: Removing unreachable block (ram,0x00e42ebc) */
/* WARNING: Removing unreachable block (ram,0x00e42bb8) */
/* WARNING: Removing unreachable block (ram,0x00e43124) */
/* WARNING: Removing unreachable block (ram,0x00e431c4) */

void FullSerializer_Internal_fsPrimitiveConverter__UseInt64
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,double *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  double __x;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
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
  uint uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong unaff_x22;
  ulong uVar27;
  long *unaff_x24;
  long *unaff_x25;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  float fVar33;
  float unaff_s8;
  int iVar34;
  float fVar35;
  float unaff_s10;
  double unaff_d11;
  float fVar36;
  float fVar37;
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
  
code_r0x00e3deac:
  dVar32 = modf(unaff_d11,param_4);
  if (dVar32 == 0.5) {
    fVar30 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar30 = (float)_fStack0000000000000070 + unaff_s10;
    }
  }
  else {
    fVar30 = 255.0;
  }
  dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
  if (dVar32 == 0.5) {
    fVar29 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar29 = (float)_fStack0000000000000070 + unaff_s10;
    }
  }
  else {
    fVar29 = 255.0;
  }
  dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
  if (dVar32 == 0.5) {
    fVar35 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar35 = (float)_fStack0000000000000070 + unaff_s10;
    }
  }
  else {
    fVar35 = 255.0;
  }
  dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
  if (dVar32 == 0.5) {
    fVar36 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar36 = (float)_fStack0000000000000070 + 1.0;
    }
  }
  else {
    fVar36 = 255.0;
  }
  if (unaff_x20 != 0) {
    if (*(uint *)(unaff_x20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    *(uint *)(unaff_x20 + unaff_x22 * 4 + 0x20) =
         (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
         (int)fVar36 << 0x18;
    lVar20 = *unaff_x24;
    dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
    if (dVar32 == 0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar30 = 255.0;
    }
    dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
    if (dVar32 == 0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar29 = 255.0;
    }
    dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
    if (dVar32 == 0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar35 = 255.0;
    }
    dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
    if (dVar32 == 0.5) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + 1.0;
      }
    }
    else {
      fVar36 = 255.0;
    }
    if (lVar20 != 0) {
      uVar23 = (uint)unaff_x28;
      if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
      *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) =
           (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
           (int)fVar36 << 0x18;
      lVar20 = *unaff_x24;
      dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
      if (dVar32 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = 255.0;
      }
      dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
      if (dVar32 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = 255.0;
      }
      dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
      if (dVar32 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = 255.0;
      }
      dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
      if (dVar32 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = 255.0;
      }
      if (lVar20 != 0) {
        uVar24 = (uint)unaff_x29;
        if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
        *(uint *)(lVar20 + (long)(int)uVar24 * 4 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
             (int)fVar36 << 0x18;
        lVar20 = *unaff_x24;
        dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
        if (dVar32 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
        if (dVar32 == 0.5) {
          fVar29 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar29 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar29 = 255.0;
        }
        dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
        if (dVar32 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar32 = modf(unaff_d11,(double *)&stack0x00000070);
        if (dVar32 == 0.5) {
          fVar36 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar36 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar36 = 255.0;
        }
        if (lVar20 != 0) {
          if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
          *(uint *)(lVar20 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar36 << 0x18;
          if (*in_stack_00000060 != 0.0) {
            uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(uVar21,0,0);
            if ((uVar12 & 1) == 0) goto LAB_00e43400;
            lVar20 = *unaff_x24;
            if (lVar20 != 0) {
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              puVar22 = (uint *)(lVar20 + unaff_x22 * 4 + 0x20);
              uVar17 = *puVar22;
              if ((*in_stack_00000060 != 0.0) &&
                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 != 0)) {
                fVar29 = ((float)(uVar17 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                fVar37 = ((float)(uVar17 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                fVar36 = *(float *)(lVar20 + 0x20);
                fVar35 = *(float *)(lVar20 + 0x24);
                fVar30 = fVar29 * 255.0;
                if (fVar29 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar32 == 0.5) {
                    fVar30 = 1.0;
                    goto LAB_00e3ede4;
                  }
                  fVar29 = (float)(int)(fVar30 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar30 = -1.0;
LAB_00e3ede4:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + fVar30;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar30 + -0.5);
                }
                fVar36 = ((float)(uVar17 >> 0x10 & 0xff) / 255.0) * fVar36;
                fVar30 = fVar37 * 255.0;
                if (fVar37 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar32 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar32 == -0.5) {
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
                fVar35 = ((float)(uVar17 >> 0x18) / 255.0) * fVar35;
                fVar37 = fVar37 * 255.0;
                if (fVar36 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar32 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ffb0;
                  }
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = fVar36;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar36 = fVar35;
                if (1.0 < fVar35) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar35 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar32 == 0.5) {
                    fVar35 = 1.0;
                    goto LAB_00e40174;
                  }
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar35 = -1.0;
LAB_00e40174:
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + fVar35;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                *puVar22 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                lVar20 = *unaff_x24;
                if (lVar20 != 0) {
                  if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                  puVar22 = (uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20);
                  uVar23 = *puVar22;
                  if ((*in_stack_00000060 != 0.0) &&
                     (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 != 0)) {
                    fVar29 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                    fVar37 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                    fVar36 = *(float *)(lVar20 + 0x20);
                    fVar35 = *(float *)(lVar20 + 0x24);
                    fVar30 = fVar29 * 255.0;
                    if (fVar29 < 0.0) {
                      fVar30 = unaff_s8;
                    }
                    dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                    if (0.0 <= fVar30) {
                      if (dVar32 == 0.5) {
                        fVar30 = 1.0;
                        goto LAB_00e404dc;
                      }
                      fVar29 = (float)(int)(fVar30 + 0.5);
                    }
                    else if (dVar32 == -0.5) {
                      fVar30 = -1.0;
LAB_00e404dc:
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = (float)_fStack0000000000000070 + fVar30;
                      }
                    }
                    else {
                      fVar29 = (float)(int)(fVar30 + -0.5);
                    }
                    fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                    fVar30 = fVar37 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar30 = unaff_s8;
                    }
                    dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                    if (0.0 <= fVar30) {
                      if (dVar32 == 0.5) {
                        fVar30 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar30 = (float)(int)(fVar30 + 0.5);
                      }
                    }
                    else if (dVar32 == -0.5) {
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
                    fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                    fVar37 = fVar37 * 255.0;
                    if (fVar36 < 0.0) {
                      fVar37 = unaff_s8;
                    }
                    dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar32 == 0.5) {
                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40888;
                      }
                      fVar37 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar32 == -0.5) {
                      fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = fVar36;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar36 = fVar35;
                    if (1.0 < fVar35) {
                      fVar36 = 1.0;
                    }
                    fVar36 = fVar36 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar36 = unaff_s8;
                    }
                    dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                    if (0.0 <= fVar36) {
                      if (dVar32 == 0.5) {
                        fVar35 = 1.0;
                        goto LAB_00e40a4c;
                      }
                      fVar36 = (float)(int)(fVar36 + 0.5);
                    }
                    else if (dVar32 == -0.5) {
                      fVar35 = -1.0;
LAB_00e40a4c:
                      fVar36 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar36 = (float)_fStack0000000000000070 + fVar35;
                      }
                    }
                    else {
                      fVar36 = (float)(int)(fVar36 + -0.5);
                    }
                    *puVar22 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                               ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                    lVar20 = *unaff_x24;
                    if (lVar20 != 0) {
                      if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                      lVar20 = lVar20 + (long)(int)uVar24 * 4;
                      while( true ) {
                        uVar23 = *(uint *)(lVar20 + 0x20);
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                        break;
                        fVar29 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
                        fVar37 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
                        fVar36 = *(float *)(lVar15 + 0x20);
                        fVar35 = *(float *)(lVar15 + 0x24);
                        fVar30 = fVar29 * 255.0;
                        if (fVar29 < 0.0) {
                          fVar30 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = 1.0;
                            goto FUN_00e42e84;
                          }
                          fVar29 = (float)(int)(fVar30 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar30 = -1.0;
FUN_00e42e84:
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + fVar30;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar30 + -0.5);
                        }
                        fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                        fVar30 = fVar37 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar30 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar30 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar30 = (float)(int)(fVar30 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
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
                        fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                        fVar37 = fVar37 * 255.0;
                        if (fVar36 < 0.0) {
                          fVar37 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42fd0;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar36;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar36 = fVar35;
                        if (1.0 < fVar35) {
                          fVar36 = 1.0;
                        }
                        fVar36 = fVar36 * 255.0;
                        if (fVar35 < 0.0) {
                          fVar36 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                        if (0.0 <= fVar36) {
                          if (dVar32 == 0.5) {
                            fVar35 = 1.0;
                            goto LAB_00e4304c;
                          }
                          fVar36 = (float)(int)(fVar36 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar35 = -1.0;
LAB_00e4304c:
                          fVar36 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar36 = (float)_fStack0000000000000070 + fVar35;
                          }
                        }
                        else {
                          fVar36 = (float)(int)(fVar36 + -0.5);
                        }
                        *(uint *)(lVar20 + 0x20) =
                             (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                        lVar20 = *unaff_x24;
                        if (lVar20 == 0) break;
                        if (*(uint *)(lVar20 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
                        puVar22 = (uint *)(lVar20 + in_stack_00000058 * 4 + 0x20);
                        uVar23 = *puVar22;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                        break;
                        fVar29 = (float)(uVar23 & 0xff) / 255.0;
                        param_3 = (ulong)(uint)fVar29;
                        fVar29 = fVar29 * *(float *)(lVar20 + 0x18);
                        fVar37 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                        fVar36 = *(float *)(lVar20 + 0x20);
                        fVar35 = *(float *)(lVar20 + 0x24);
                        fVar30 = fVar29 * 255.0;
                        if (fVar29 < 0.0) {
                          fVar30 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = 1.0;
                            goto LAB_00e4318c;
                          }
                          fVar29 = (float)(int)(fVar30 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar30 = -1.0;
LAB_00e4318c:
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + fVar30;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar30 + -0.5);
                        }
                        fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                        fVar30 = fVar37 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar30 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar30 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar30 = (float)(int)(fVar30 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
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
                        fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                        fVar37 = fVar37 * 255.0;
                        if (fVar36 < 0.0) {
                          fVar37 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e432e0;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar36;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar36 = fVar35;
                        if (1.0 < fVar35) {
                          fVar36 = 1.0;
                        }
                        fVar36 = fVar36 * 255.0;
                        if (fVar35 < 0.0) {
                          fVar36 = unaff_s8;
                        }
                        dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                        if (0.0 <= fVar36) {
                          if (dVar32 == 0.5) {
                            fVar35 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar35 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar35 = (float)(int)(fVar36 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
                          fVar35 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar35 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar35 = (float)(int)(fVar36 + -0.5);
                        }
                        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                        *puVar22 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                   ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                        unaff_s15 = in_stack_00000008._4_4_;
LAB_00e43400:
                        do {
                          lVar20 = *unaff_x24;
                          if (lVar20 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                          lVar20 = lVar20 + unaff_x22 * 4;
                          fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
                          *(char *)(lVar20 + 0x23) =
                               (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                          lVar20 = unaff_x19[0x5f];
                          if (lVar20 == 0) goto LAB_00e443fc;
                          uVar23 = (uint)unaff_x28;
                          if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                          lVar20 = lVar20 + (long)(int)uVar23 * 4;
                          fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
                          *(char *)(lVar20 + 0x23) =
                               (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                          lVar20 = unaff_x19[0x5f];
                          if (lVar20 == 0) goto LAB_00e443fc;
                          uVar24 = (uint)unaff_x29;
                          if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                          lVar20 = lVar20 + (long)(int)uVar24 * 4;
                          fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
                          *(char *)(lVar20 + 0x23) =
                               (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                          lVar20 = unaff_x19[0x5f];
                          if (lVar20 == 0) goto LAB_00e443fc;
                          uVar17 = (uint)in_stack_00000058;
                          if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                          lVar20 = lVar20 + in_stack_00000058 * 4;
                          uVar12 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                          fVar30 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + 0x23));
                          *(char *)(lVar20 + 0x23) =
                               (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar30);
                          uVar13 = FUN_00e3703c();
                          if ((uVar13 & 1) == 0) {
                            lVar20 = *unaff_x25;
                            if (*(int *)(lVar20 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar20 = *unaff_x25;
                            }
                            if (*(int *)(*(long *)(lVar20 + 0xb8) + 0x20) == 1) {
                              lVar20 = *unaff_x24;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              puVar22 = (uint *)(lVar20 + unaff_x22 * 4 + 0x20);
                              uVar5 = *puVar22;
                              fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
                              fVar35 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
                              fVar36 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
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
                              fVar35 = fVar36;
                              if (1.0 < fVar36) {
                                fVar35 = 1.0;
                              }
                              fVar37 = (float)(uVar5 >> 0x18) / 255.0;
                              fVar35 = fVar35 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar35 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                              if (0.0 <= fVar35) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e43744;
                                }
                                fVar36 = (float)(int)(fVar35 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = fVar35;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar35 + -0.5);
                              }
                              if (1.0 < fVar37) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
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
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *puVar22 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              lVar20 = *in_stack_00000030;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              puVar22 = (uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20);
                              uVar5 = *puVar22;
                              fVar29 = (float)FUN_026982b0((float)(uVar5 & 0xff) / 255.0,0);
                              fVar35 = (float)FUN_026982b0((float)(uVar5 >> 8 & 0xff) / 255.0,0);
                              fVar36 = (float)FUN_026982b0((float)(uVar5 >> 0x10 & 0xff) / 255.0,0);
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
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
                              fVar35 = fVar36;
                              if (1.0 < fVar36) {
                                fVar35 = 1.0;
                              }
                              fVar37 = (float)(uVar5 >> 0x18) / 255.0;
                              fVar35 = fVar35 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar35 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                              if (0.0 <= fVar35) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e43a84;
                                }
                                fVar36 = (float)(int)(fVar35 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = fVar35;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar35 + -0.5);
                              }
                              if (1.0 < fVar37) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
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
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              *puVar22 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              lVar20 = *in_stack_00000030;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              puVar22 = (uint *)(lVar20 + (long)(int)uVar24 * 4 + 0x20);
                              uVar23 = *puVar22;
                              fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                              fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                              fVar36 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0)
                              ;
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
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
                              fVar35 = fVar36;
                              if (1.0 < fVar36) {
                                fVar35 = 1.0;
                              }
                              fVar37 = (float)(uVar23 >> 0x18) / 255.0;
                              fVar35 = fVar35 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar35 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                              if (0.0 <= fVar35) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e43dbc;
                                }
                                fVar36 = (float)(int)(fVar35 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = fVar35;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar35 + -0.5);
                              }
                              if (1.0 < fVar37) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
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
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              *puVar22 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              lVar20 = *in_stack_00000030;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              puVar22 = (uint *)(lVar20 + in_stack_00000058 * 4 + 0x20);
                              uVar23 = *puVar22;
                              fVar29 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
                              fVar35 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
                              fVar36 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0)
                              ;
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              param_3 = 0x3f800000;
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
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
                              fVar35 = fVar36;
                              if (1.0 < fVar36) {
                                fVar35 = 1.0;
                              }
                              fVar37 = (float)(uVar23 >> 0x18) / 255.0;
                              fVar35 = fVar35 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar35 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                              if (0.0 <= fVar35) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e440f4;
                                }
                                fVar36 = (float)(int)(fVar35 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = fVar35;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar35 + -0.5);
                              }
                              if (1.0 < fVar37) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                uVar12 = 0;
                                if (dVar32 == 0.5) {
                                  fVar35 = 1.0;
                                  goto LAB_00e44170;
                                }
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                              else {
                                uVar12 = 0;
                                if (dVar32 == -0.5) {
                                  fVar35 = -1.0;
LAB_00e44170:
                                  fVar35 = (float)_fStack0000000000000070 + fVar35;
                                  uVar12 = (ulong)(uint)fVar35;
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = fVar35;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + -0.5);
                                }
                              }
                              unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              *puVar22 = (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                         ((int)fVar36 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
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
                            plVar11 = unaff_x19 + 0xcb;
                            if (iVar10 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                              FUN_010afdd4(plVar11,iVar10,
                                           *(undefined8 *)
                                            Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
                            }
                            if ((unaff_x19[0xcc] == 0) || (lVar20 = unaff_x19[0xf], lVar20 == 0))
                            goto LAB_00e443fc;
                            plVar1 = unaff_x19 + 0xcc;
                            if (*(int *)(lVar20 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                              FUN_010afdd4(plVar1,*(int *)(lVar20 + 0x10),*(undefined8 *)puVar7);
                              lVar20 = unaff_x19[0xf];
                              if (lVar20 == 0) goto LAB_00e443fc;
                            }
                            uVar23 = *(uint *)(lVar20 + 0x10);
                            if ((int)uVar23 < 1) goto LAB_00e44358;
                            uVar13 = 0;
                            lVar20 = 0x20;
                            goto LAB_00e442cc;
                          }
                          if (unaff_x19[9] == 0) goto LAB_00e443fc;
                          FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                                       *(undefined8 *)StringLiteral_4992);
                          *in_stack_00000060 = _fStack0000000000000070;
                          if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                          iVar10 = FUN_00e4e99c();
                          if (iVar10 <= *(int *)((long)unaff_x19 + 0x38c)) {
                            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                            *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
                          }
                          if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                            FUN_00e45d2c();
                          }
                          *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                          if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                            uVar12 = FUN_0269e56c(0);
                            if (((fStack000000000000004c == 0.0) || ((uVar12 & 1) == 0)) ||
                               (1 < (int)unaff_x19[0x2a] - 3U)) {
                              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                              iVar10 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                              *(int *)((long)unaff_x19 + 0x38c) = iVar10;
                              if ((unaff_x19[9] == 0) ||
                                 (FUN_0132138c(unaff_x19[9],iVar10,&stack0x00000070,
                                               *(undefined8 *)puVar8),
                                 _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                              *(undefined4 *)(unaff_x19 + 0x4a) =
                                   *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                              if ((unaff_x19[9] == 0) ||
                                 (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c)
                                               ,&stack0x00000070,*(undefined8 *)puVar8),
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
                            fVar29 = *(float *)(*(long *)((long)dVar32 + 0x78) + 0x18);
                            fVar30 = DAT_028aa034;
                            if (fVar29 != 0.0) {
                              fVar30 = fVar29;
                            }
                            if ((0.0 < (unaff_s15 - *(float *)((long)dVar32 + 100)) / fVar30) &&
                               (*(char *)((long)dVar32 + 0x165) == '\0')) {
                              *(undefined1 *)((long)dVar32 + 0x165) = 1;
                              *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                              sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
                              if (sVar9 != 0x200b) {
                                *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                                if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0
                                                    );
                                if (sVar9 != 0x20) {
                                  if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                                  sVar9 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff
                                                       ,0);
                                  if (sVar9 != 10) {
                                    lVar20 = unaff_x19[0xca];
                                    if (lVar20 == 0) goto LAB_00e443fc;
                                    fVar35 = *(float *)(lVar20 + 0x48);
                                    fVar30 = *(float *)(unaff_x19 + 0x4b);
                                    fVar36 = fVar35 + *(float *)((long)unaff_x19 + 0x50c);
                                    fVar29 = *(float *)(unaff_x19 + 0x4a);
                                    if (fVar35 <= *(float *)(unaff_x19 + 0x4a)) {
                                      fVar29 = fVar35;
                                    }
                                    *(float *)(unaff_x19 + 0x4a) = fVar29;
                                    fVar29 = *(float *)((long)unaff_x19 + 0x254);
                                    if (fVar36 <= *(float *)((long)unaff_x19 + 0x254)) {
                                      fVar29 = fVar36;
                                    }
                                    *(float *)((long)unaff_x19 + 0x254) = fVar29;
                                    fVar29 = (float)FUN_00e5ef30(*(undefined4 *)
                                                                  ((long)unaff_x19 + 0x134),lVar20,0
                                                                );
                                    fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) +
                                             *(float *)((long)unaff_x19 + 0x55c);
                                    if (fVar30 <= fVar29) {
                                      fVar30 = fVar29;
                                    }
                                    *(float *)(unaff_x19 + 0x4b) = fVar30;
                                  }
                                }
                              }
                              iVar34 = *(int *)((long)unaff_x19 + 0x38c);
                              if (*(int *)((long)unaff_x19 + 0x38c) <= iVar10) {
                                iVar34 = iVar10;
                              }
                              *(int *)((long)unaff_x19 + 0x38c) = iVar34;
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
                            lVar20 = unaff_x19[0x55];
                            if (lVar20 != 0) {
                              (**(code **)(lVar20 + 0x18))
                                        (*(undefined8 *)(lVar20 + 0x40),
                                         *(undefined8 *)(lVar20 + 0x28));
                            }
                          }
                          unaff_x19[0xc6] = 0;
                          fVar29 = 0.0;
                          *(undefined4 *)(unaff_x19 + 199) = 0;
                          fVar30 = 0.0;
                          if ((((0.0 < fStack000000000000004c) &&
                               (uVar23 = *(uint *)(unaff_x19 + 0x2a), fVar30 = fVar29, uVar23 < 5))
                              && ((1 << (ulong)(uVar23 & 0x1f) & 0x19U) != 0)) &&
                             (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184)))
                          {
                            if (uVar23 == 4) {
                              lVar20 = unaff_x19[0xc];
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (0 < *(int *)(lVar20 + 0x18)) {
                                iVar10 = 0;
                                do {
                                  FUN_0132138c(lVar20,iVar10,&stack0x00000070,*(undefined8 *)puVar7)
                                  ;
                                  *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                                  fVar30 = fStack0000000000000070;
                                  if (-*(float *)(unaff_x19 + 0x4a) -
                                      *(float *)((long)unaff_x19 + 0x184) <= fStack0000000000000070)
                                  break;
                                  lVar20 = unaff_x19[0xc];
                                  if (lVar20 == 0) goto LAB_00e443fc;
                                  iVar10 = iVar10 + 1;
                                } while (iVar10 < *(int *)(lVar20 + 0x18));
                              }
                            }
                            else {
                              lVar20 = unaff_x19[0xb];
                              if (lVar20 == 0) goto LAB_00e443fc;
                              iVar10 = 0;
                              fVar30 = 0.0;
                              while (iVar10 < *(int *)(lVar20 + 0x18)) {
                                FUN_0132138c(lVar20,iVar10,&stack0x00000070,*(undefined8 *)puVar7);
                                fVar30 = fVar30 + fStack0000000000000070;
                                *(float *)((long)unaff_x19 + 0x634) = fVar30;
                                if (-*(float *)(unaff_x19 + 0x4a) -
                                    *(float *)((long)unaff_x19 + 0x184) <= fVar30) break;
                                lVar20 = unaff_x19[0xb];
                                iVar10 = iVar10 + 1;
                                if (lVar20 == 0) goto LAB_00e443fc;
                              }
                            }
                          }
                          *(float *)(unaff_x19 + 0xc6) =
                               *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                          if (unaff_x19[9] == 0) goto LAB_00e443fc;
                          fVar29 = *(float *)((long)unaff_x19 + 0x53c);
                          FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
                          if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0))
                          goto LAB_00e443fc;
                          fVar35 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                          FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar8);
                          if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                          fVar37 = *(float *)(unaff_x19 + 0xa8);
                          fVar36 = *(float *)(unaff_x19 + 199) + fVar37;
                          *(float *)((long)unaff_x19 + 0x634) =
                               fVar30 + fVar29 + (fVar35 + -1.0) *
                                                 *(float *)((long)_fStack0000000000000070 + 0x84);
                          *(float *)(unaff_x19 + 199) = fVar36;
                          puVar7 = 
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          ;
                          if (DAT_03774d76 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03774d76 = '\x01';
                          }
                          fVar30 = 1.0;
                          unaff_s10 = 1.0;
                          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                          in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar7 + 0xb8);
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
                            lVar20 = __start_il2cpp();
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if ((*(char *)(lVar20 + 0x109) == '\0') &&
                               (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                              uVar31 = FUN_00e4ee40();
                              *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
                              *(float *)(unaff_x19 + 0xcf) = fVar36;
                              *(float *)((long)unaff_x19 + 0x67c) = fVar37;
                            }
                          }
                          if (DAT_03774d76 == '\0') {
                            thunk_FUN_00d48444(puVar7);
                            DAT_03774d76 = '\x01';
                          }
                          lVar15 = *(long *)puVar7;
                          uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
                          *in_stack_00000040 = **(undefined8 **)(lVar15 + 0xb8);
                          *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar31;
                          lVar20 = (*(long **)(lVar15 + 0xb8))[1];
                          unaff_x19[0xc0] = **(long **)(lVar15 + 0xb8);
                          *(int *)(unaff_x19 + 0xc1) = (int)lVar20;
                          uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
                          in_stack_00000040[3] = **(undefined8 **)(lVar15 + 0xb8);
                          *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
                          lVar20 = (*(long **)(lVar15 + 0xb8))[1];
                          unaff_x19[0xc3] = **(long **)(lVar15 + 0xb8);
                          *(int *)(unaff_x19 + 0xc4) = (int)lVar20;
                          uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
                          in_stack_00000040[6] = **(undefined8 **)(lVar15 + 0xb8);
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
                            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                            if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
                              lVar20 = __start_il2cpp();
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if ((*(char *)(lVar20 + 0x109) == '\0') &&
                                 (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                                lVar20 = unaff_x19[0xca];
                                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                                if ((lVar20 == 0) ||
                                   (lVar15 = *(long *)(lVar20 + 0xc0), lVar15 == 0))
                                goto LAB_00e443fc;
                                uVar12 = unaff_d14;
                                if (*(char *)(lVar15 + 0x18) != '\0') {
                                  fVar36 = *(float *)(lVar20 + 100);
                                  uVar12 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) -
                                                        fVar36);
                                }
                                if (*(char *)(lVar15 + 0x19) != '\0') {
                                  uVar31 = FUN_00e4e9f4(uVar12);
                                  lVar20 = unaff_x19[0xca];
                                  *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar31;
                                  *(float *)(unaff_x19 + 0xbf) = fVar36;
                                  *(float *)((long)unaff_x19 + 0x5fc) = fVar37;
                                  if (lVar20 == 0) goto LAB_00e443fc;
                                }
                                if (*(long *)(lVar20 + 0xc0) == 0) goto LAB_00e443fc;
                                if (*(char *)(*(long *)(lVar20 + 0xc0) + 0x28) != '\0') {
                                  fVar29 = (float)FUN_00e4e9f4(uVar12);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  fVar35 = fVar37 + *(float *)(unaff_x19 + 0xc1);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc0] =
                                       CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc0]);
                                  *(float *)(unaff_x19 + 0xc1) = fVar35;
                                  if ((unaff_x19[0xca] == 0) ||
                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e4e9f4(uVar12);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[3] =
                                       CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[3]);
                                  *(float *)((long)unaff_x19 + 0x614) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x614);
                                  if ((unaff_x19[0xca] == 0) ||
                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e4e9f4(uVar12);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  fVar36 = fVar37 + *(float *)(unaff_x19 + 0xc4);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc3] =
                                       CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc3]);
                                  *(float *)(unaff_x19 + 0xc4) = fVar36;
                                  if ((unaff_x19[0xca] == 0) ||
                                     (*(long *)(unaff_x19[0xca] + 0xc0) == 0)) goto LAB_00e443fc;
                                  fVar29 = (float)FUN_00e4e9f4(uVar12);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[6] =
                                       CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[6]);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x62c) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x62c);
                                  if (lVar20 == 0) goto LAB_00e443fc;
                                }
                                if (*(long *)(lVar20 + 0xc0) == 0) goto LAB_00e443fc;
                                if (*(char *)(*(long *)(lVar20 + 0xc0) + 0x50) != '\0') {
                                  FUN_00e5eda8(lVar20,0);
                                  fVar29 = (float)FUN_00e4eb50();
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  fVar35 = fVar37 + *(float *)(unaff_x19 + 0xc1);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc0] =
                                       CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc0]);
                                  *(float *)(unaff_x19 + 0xc1) = fVar35;
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b838(lVar20,0);
                                  fVar29 = (float)FUN_00e4eb50();
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[3] =
                                       CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[3]);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x614) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x614);
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  FUN_00e5eea4(lVar20,0);
                                  fVar29 = (float)FUN_00e4eb50();
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  fVar36 = fVar37 + *(float *)(unaff_x19 + 0xc4);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc3] =
                                       CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc3]);
                                  *(float *)(unaff_x19 + 0xc4) = fVar36;
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  FUN_00e5b7d8(lVar20,0);
                                  fVar29 = (float)FUN_00e4eb50();
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[6] =
                                       CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[6]);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x62c) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x62c);
                                  if (lVar20 == 0) goto LAB_00e443fc;
                                }
                                lVar15 = *(long *)(lVar20 + 0xc0);
                                if (lVar15 == 0) goto LAB_00e443fc;
                                if (*(char *)(lVar15 + 0x60) != '\0') {
                                  uVar25 = *(undefined8 *)(lVar15 + 0x68);
                                  uVar21 = FUN_00e5eda8(lVar20,0);
                                  fVar29 = (float)FUN_00e4ecc4(uVar21,lVar20,uVar25);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  fVar35 = fVar37 + *(float *)(unaff_x19 + 0xc1);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc0] =
                                       CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc0]);
                                  *(float *)(unaff_x19 + 0xc1) = fVar35;
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  uVar25 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
                                  uVar21 = FUN_00e5b838(lVar20,0);
                                  fVar29 = (float)FUN_00e4ecc4(uVar21,lVar20,uVar25);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[3] =
                                       CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[3] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[3]);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x614) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x614);
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  uVar25 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
                                  uVar21 = FUN_00e5eea4(lVar20,0);
                                  fVar29 = (float)FUN_00e4ecc4(uVar21,lVar20,uVar25);
                                  lVar20 = unaff_x19[0xca];
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar35;
                                  fVar36 = fVar37 + *(float *)(unaff_x19 + 0xc4);
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  unaff_x19[0xc3] =
                                       CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                                fVar29 + (float)unaff_x19[0xc3]);
                                  *(float *)(unaff_x19 + 0xc4) = fVar36;
                                  if ((lVar20 == 0) || (*(long *)(lVar20 + 0xc0) == 0))
                                  goto LAB_00e443fc;
                                  uVar25 = *(undefined8 *)(*(long *)(lVar20 + 0xc0) + 0x68);
                                  uVar21 = FUN_00e5b7d8(lVar20,0);
                                  fVar29 = (float)FUN_00e4ecc4(uVar21,lVar20,uVar25);
                                  *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                                  *(float *)(unaff_x19 + 200) = fVar36;
                                  *(float *)((long)unaff_x19 + 0x644) = fVar37;
                                  in_stack_00000040[6] =
                                       CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[6] >> 0x20
                                                                ),
                                                fVar29 + (float)in_stack_00000040[6]);
                                  *(float *)((long)unaff_x19 + 0x62c) =
                                       fVar37 + *(float *)((long)unaff_x19 + 0x62c);
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
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
                              in_stack_00000040[0x1e] =
                                   CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                            (float)((ulong)uVar21 >> 0x20),
                                            (float)unaff_x19[0x24] * (float)uVar21);
                            }
                            lVar20 = unaff_x19[0x5e];
                            *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            fVar29 = (float)FUN_00e5eda8(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            fVar35 = *(float *)((long)unaff_x19 + 0x674);
                            uVar12 = (ulong)(int)in_stack_00000068;
                            *(float *)(lVar20 + uVar12 * 0xc + 0x20) =
                                 fVar29 + fVar35 + *(float *)(unaff_x19 + 0xc0) +
                                 *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6)
                                 + *(float *)((long)unaff_x19 + 0x6e4);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5eda8(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            fVar29 = *(float *)((long)unaff_x19 + 0x604);
                            *(float *)(lVar20 + uVar12 * 0xc + 0x24) =
                                 fVar35 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                 *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634)
                                 + *(float *)(unaff_x19 + 0xdd);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5eda8(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            *(float *)(lVar20 + uVar12 * 0xc + 0x28) =
                                 fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                 *(float *)(unaff_x19 + 0xc1) + *(float *)((long)unaff_x19 + 0x5fc)
                                 + *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec)
                            ;
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            fVar29 = (float)FUN_00e5b838(*in_stack_00000060,0);
                            uVar13 = uVar12 | 1;
                            uVar23 = (uint)uVar13;
                            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                            fVar35 = *(float *)((long)unaff_x19 + 0x674);
                            *(float *)(lVar20 + uVar13 * 0xc + 0x20) =
                                 fVar29 + fVar35 + *(float *)((long)unaff_x19 + 0x60c) +
                                 *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6)
                                 + *(float *)((long)unaff_x19 + 0x6e4);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5b838(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                            fVar29 = *(float *)(unaff_x19 + 0xc2);
                            *(float *)(lVar20 + uVar13 * 0xc + 0x24) =
                                 fVar35 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                 *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634)
                                 + *(float *)(unaff_x19 + 0xdd);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5b838(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                            *(float *)(lVar20 + uVar13 * 0xc + 0x28) =
                                 fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                 *(float *)((long)unaff_x19 + 0x614) +
                                 *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                                 *(float *)((long)unaff_x19 + 0x6ec);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            fVar29 = (float)FUN_00e5eea4(*in_stack_00000060,0);
                            uVar26 = uVar12 | 2;
                            uVar24 = (uint)uVar26;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                            fVar35 = *(float *)((long)unaff_x19 + 0x674);
                            *(float *)(lVar20 + uVar26 * 0xc + 0x20) =
                                 fVar29 + fVar35 + *(float *)(unaff_x19 + 0xc3) +
                                 *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6)
                                 + *(float *)((long)unaff_x19 + 0x6e4);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5eea4(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                            fVar29 = *(float *)((long)unaff_x19 + 0x61c);
                            *(float *)(lVar20 + uVar26 * 0xc + 0x24) =
                                 fVar35 + *(float *)(unaff_x19 + 0xcf) + fVar29 +
                                 *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634)
                                 + *(float *)(unaff_x19 + 0xdd);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5eea4(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                            *(float *)(lVar20 + uVar26 * 0xc + 0x28) =
                                 fVar29 + *(float *)((long)unaff_x19 + 0x67c) +
                                 *(float *)(unaff_x19 + 0xc4) + *(float *)((long)unaff_x19 + 0x5fc)
                                 + *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec)
                            ;
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            fVar29 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
                            uVar27 = uVar12 | 3;
                            uVar17 = (uint)uVar27;
                            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                            fVar35 = *(float *)((long)unaff_x19 + 0x674);
                            *(float *)(lVar20 + uVar27 * 0xc + 0x20) =
                                 fVar29 + fVar35 + *(float *)((long)unaff_x19 + 0x624) +
                                 *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6)
                                 + *(float *)((long)unaff_x19 + 0x6e4);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5b7d8(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                            param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                            *(float *)(lVar20 + uVar27 * 0xc + 0x24) =
                                 fVar35 + *(float *)(unaff_x19 + 0xcf) +
                                 *(float *)(unaff_x19 + 0xc5) + *(float *)(unaff_x19 + 0xbf) +
                                 *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
                            lVar20 = unaff_x19[0x5e];
                            if ((lVar20 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
                            FUN_00e5b7d8(*in_stack_00000060,0);
                            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                            fVar29 = *(float *)((long)unaff_x19 + 0x62c);
                            *(float *)(lVar20 + uVar27 * 0xc + 0x28) =
                                 (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar29 +
                                 *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                                 *(float *)((long)unaff_x19 + 0x6ec);
                            lVar20 = unaff_x19[0xca];
                            if (lVar20 == 0) goto LAB_00e443fc;
                            lVar15 = *in_stack_00000020;
                            if (*(char *)(lVar20 + 0x108) == '\0') {
                              uVar31 = FUN_0272b9dc(lVar20 + 0x10,0);
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              lVar15 = lVar15 + uVar12 * 8;
                              *(undefined4 *)(lVar15 + 0x20) = uVar31;
                              *(float *)(lVar15 + 0x24) = fVar29;
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar13 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar26 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar27 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              uVar31 = FUN_00e5ecc0(*in_stack_00000060,0);
                              *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
                              if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                              FUN_00e5ecc0(unaff_x19[0xca],0);
                              *(float *)((long)unaff_x19 + 0x6cc) = fVar29;
                              unaff_x24 = in_stack_00000030;
                            }
                            else {
                              if ((*(long *)(lVar20 + 0x100) == 0) ||
                                 (uVar31 = FUN_00e5dd14(unaff_d14,*(long *)(lVar20 + 0x100),
                                                        *(undefined4 *)(lVar20 + 0x10c),0),
                                 lVar15 == 0)) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              lVar15 = lVar15 + uVar12 * 8;
                              *(undefined4 *)(lVar15 + 0x20) = uVar31;
                              *(float *)(lVar15 + 0x24) = fVar29;
                              dVar32 = *in_stack_00000060;
                              if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                              goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                                    *(undefined4 *)((long)dVar32 + 0x10c),0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar13 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              dVar32 = *in_stack_00000060;
                              if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                              goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                                    *(undefined4 *)((long)dVar32 + 0x10c),0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar26 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              dVar32 = *in_stack_00000060;
                              if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                              goto LAB_00e443fc;
                              lVar20 = *in_stack_00000020;
                              uVar31 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                                          *(undefined4 *)((long)dVar32 + 0x10c),0);
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              lVar20 = lVar20 + uVar27 * 8;
                              *(undefined4 *)(lVar20 + 0x20) = uVar31;
                              *(float *)(lVar20 + 0x24) = fVar29;
                              dVar32 = *in_stack_00000060;
                              if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0))
                              goto LAB_00e443fc;
                              uVar31 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar32 + 0x100),
                                                    *(undefined4 *)((long)dVar32 + 0x10c),0);
                              lVar20 = unaff_x19[0xca];
                              *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
                              *(float *)((long)unaff_x19 + 0x6cc) = fVar29;
                              if ((lVar20 == 0) || (lVar15 = *(long *)(lVar20 + 0x100), lVar15 == 0)
                                 ) goto LAB_00e443fc;
                              unaff_x24 = in_stack_00000030;
                              if (((1 < *(int *)(lVar15 + 0x28)) &&
                                  (0.0 < *(float *)(lVar15 + 0x34))) &&
                                 (*(int *)(lVar20 + 0x10c) < 0)) {
                                *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                              }
                            }
                          }
                          else {
                            dVar32 = *in_stack_00000060;
                            if (dVar32 == 0.0) goto LAB_00e443fc;
                            param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                            if ((*(float *)((long)dVar32 + 0x48) + *(float *)((long)dVar32 + 0x84) +
                                *(float *)((long)unaff_x19 + 0x634)) -
                                *(float *)((long)unaff_x19 + 0x53c) <=
                                DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
                            lVar20 = *in_stack_00000038;
                            if (DAT_03774d76 == '\0') {
                              thunk_FUN_00d48444(puVar7);
                              DAT_03774d76 = '\x01';
                            }
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                            uVar12 = (ulong)(int)in_stack_00000068;
                            lVar20 = lVar20 + uVar12 * 0xc;
                            *(undefined8 *)(lVar20 + 0x20) =
                                 **(undefined8 **)(*(long *)puVar7 + 0xb8);
                            *(undefined4 *)(lVar20 + 0x28) = uVar31;
                            lVar20 = *in_stack_00000038;
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar12 | 1)) goto LAB_00e44400;
                            lVar20 = lVar20 + (uVar12 | 1) * 0xc;
                            uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                            *(undefined8 *)(lVar20 + 0x20) =
                                 **(undefined8 **)(*(long *)puVar7 + 0xb8);
                            *(undefined4 *)(lVar20 + 0x28) = uVar31;
                            lVar20 = *in_stack_00000038;
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar12 | 2)) goto LAB_00e44400;
                            lVar20 = lVar20 + (uVar12 | 2) * 0xc;
                            uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                            *(undefined8 *)(lVar20 + 0x20) =
                                 **(undefined8 **)(*(long *)puVar7 + 0xb8);
                            *(undefined4 *)(lVar20 + 0x28) = uVar31;
                            lVar20 = *in_stack_00000038;
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= (uint)(uVar12 | 3)) goto LAB_00e44400;
                            lVar20 = lVar20 + (uVar12 | 3) * 0xc;
                            uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
                            *(undefined8 *)(lVar20 + 0x20) =
                                 **(undefined8 **)(*(long *)puVar7 + 0xb8);
                            *(undefined4 *)(lVar20 + 0x28) = uVar31;
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
                            lVar20 = unaff_x19[0x10];
                          }
                          else {
                            if ((*in_stack_00000060 == 0.0) ||
                               (lVar20 = *(long *)((long)*in_stack_00000060 + 0xf8), lVar20 == 0))
                            goto LAB_00e443fc;
                            lVar20 = *(long *)(lVar20 + 0x18);
                          }
                          if (((lVar20 == 0) || (lVar20 = FUN_0272bcf4(lVar20,0), lVar20 == 0)) ||
                             (plVar11 = (long *)FUN_0267dac8(lVar20,0), plVar11 == (long *)0x0))
                          goto LAB_00e443fc;
                          iVar10 = (**(code **)(*plVar11 + 0x188))
                                             (plVar11,*(undefined8 *)(*plVar11 + 400));
                          *(float *)(unaff_x19 + 0xda) = (float)iVar10;
                          iVar10 = (**(code **)(*plVar11 + 0x1a8))
                                             (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                          *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar10;
                          *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                          *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                               *(undefined4 *)((long)unaff_x19 + 0x6cc);
                          puVar7 = 
                          UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                          ;
                          if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                          _fStack0000000000000070 =
                               (double)CONCAT44((float)iVar10,(int)unaff_x19[0xda]);
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
                                       *(undefined8 *)puVar7);
                          if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                          in_stack_00000078 = unaff_x19[0xdb];
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          unaff_x29 = unaff_x22 | 2;
                          FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,
                                       *(undefined8 *)puVar7);
                          if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                          in_stack_00000078 = unaff_x19[0xdb];
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          in_stack_00000058 = unaff_x22 | 3;
                          FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,
                                       *(undefined8 *)puVar7);
                          unaff_x25 = (long *)StringLiteral_9119;
                          lVar20 = unaff_x19[0x60];
                          if (lVar20 == 0) goto LAB_00e443fc;
                          if ((*(uint *)(lVar20 + 0x18) <= in_stack_00000068) ||
                             (uVar23 = (uint)in_stack_00000058, *(uint *)(lVar20 + 0x18) <= uVar23))
                          goto LAB_00e44400;
                          lVar15 = unaff_x19[0xca];
                          fVar29 = unaff_s8;
                          if (*(float *)(lVar20 + 0x20 + unaff_x22 * 8) !=
                              *(float *)(lVar20 + 0x20 + in_stack_00000058 * 8)) {
                            fVar29 = fVar30;
                          }
                          *(float *)(unaff_x19 + 0xda) = fVar29;
                          if (lVar15 == 0) goto LAB_00e443fc;
                          cVar6 = *(char *)(lVar15 + 0x108);
                          fVar29 = fVar30;
                          if (cVar6 != '\0' || 0x7fffffff < *(uint *)(lVar15 + 0x138)) {
                            fVar29 = -1.0;
                          }
                          *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar15 + 0x84) * fVar29;
                          if (cVar6 == '\0') {
                            iVar34 = *(int *)(lVar15 + 0x160);
                            iVar10 = (**(code **)(*plVar11 + 0x188))
                                               (plVar11,*(undefined8 *)(*plVar11 + 400));
                            param_3 = 0x3e800000;
                            *(float *)(unaff_x19 + 0xdb) = (float)iVar34 / ((float)iVar10 * 0.25);
                            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                            iVar34 = *(int *)(unaff_x19[0xca] + 0x160);
                            iVar10 = (**(code **)(*plVar11 + 0x1a8))
                                               (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                            fVar35 = (float)iVar34;
                            fVar29 = (float)iVar10;
                            puVar19 = (undefined8 *)
                                      UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                            ;
                          }
                          else {
                            if (*(long *)(lVar15 + 0x100) == 0) goto LAB_00e443fc;
                            fVar29 = (float)FUN_00e5df18(*(long *)(lVar15 + 0x100),0);
                            puVar19 = (undefined8 *)
                                      UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                            ;
                            if (((*in_stack_00000060 == 0.0) ||
                                (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0))
                               || (plVar11 = *(long **)(lVar20 + 0x18), plVar11 == (long *)0x0))
                            goto LAB_00e443fc;
                            iVar10 = (**(code **)(*plVar11 + 0x188))
                                               (plVar11,*(undefined8 *)(*plVar11 + 400));
                            if ((*in_stack_00000060 == 0.0) ||
                               (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0))
                            goto LAB_00e443fc;
                            fVar35 = 0.25;
                            *(float *)(unaff_x19 + 0xdb) =
                                 fVar29 / (*(float *)(lVar20 + 0x40) * (float)iVar10 * 0.25);
                            FUN_00e5df18(lVar20,0);
                            if ((unaff_x19[0xca] == 0) ||
                               ((lVar20 = *(long *)(unaff_x19[0xca] + 0x100), lVar20 == 0 ||
                                (plVar11 = *(long **)(lVar20 + 0x18), plVar11 == (long *)0x0))))
                            goto LAB_00e443fc;
                            iVar10 = (**(code **)(*plVar11 + 0x1a8))
                                               (plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
                            if ((*in_stack_00000060 == 0.0) ||
                               (lVar20 = *(long *)((long)*in_stack_00000060 + 0x100), lVar20 == 0))
                            goto LAB_00e443fc;
                            fVar29 = *(float *)(lVar20 + 0x44) * (float)iVar10;
                          }
                          fVar36 = 0.25;
                          fVar35 = fVar35 / (fVar29 * 0.25);
                          *(float *)((long)unaff_x19 + 0x6dc) = fVar35;
                          if (unaff_x19[99] == 0) goto LAB_00e443fc;
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          in_stack_00000078 = CONCAT44(fVar35,(int)unaff_x19[0xdb]);
                          FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar19);
                          if (unaff_x19[99] == 0) goto LAB_00e443fc;
                          in_stack_00000078 = unaff_x19[0xdb];
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar19
                                      );
                          if (unaff_x19[99] == 0) goto LAB_00e443fc;
                          in_stack_00000078 = unaff_x19[0xdb];
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar19
                                      );
                          if (unaff_x19[99] == 0) goto LAB_00e443fc;
                          in_stack_00000078 = unaff_x19[0xdb];
                          _fStack0000000000000070 = (double)unaff_x19[0xda];
                          FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar19
                                      );
                          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                          uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar12 = FUN_02681b9c(uVar21,0,0);
                          fVar35 = (float)param_3;
                          fVar29 = (float)unaff_d14;
                          uVar17 = (uint)unaff_x28;
                          uVar24 = (uint)unaff_x29;
                          if ((uVar12 & 1) != 0) {
                            if (in_stack_00000050 == in_stack_00000010) {
                              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                              fVar37 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
                              param_3 = (ulong)(uint)fVar35;
                              if (fVar35 * fVar35 +
                                  (fVar37 - *pfVar14) * (fVar37 - *pfVar14) +
                                  (fVar36 - pfVar14[1]) * (fVar36 - pfVar14[1]) < DAT_028aa020)
                              goto LAB_00e3dbd8;
                            }
                            if ((*in_stack_00000060 == 0.0) ||
                               (lVar20 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar20 == 0))
                            goto LAB_00e443fc;
                            uVar21 = *(undefined8 *)(lVar20 + 0x38);
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
                            fVar36 = (float)((ulong)uVar21 >> 0x20) -
                                     (float)((ulong)**(undefined8 **)
                                                      (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                            if (DAT_028aa020 <= fVar35 * fVar35 + fVar36 * fVar36) {
                              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                            }
                            dVar32 = *in_stack_00000060;
                            if ((dVar32 == 0.0) ||
                               (lVar20 = *(long *)((long)dVar32 + 0xb0), lVar20 == 0))
                            goto LAB_00e443fc;
                            fVar37 = fVar29 * *(float *)(lVar20 + 0x38);
                            *(float *)(unaff_x19 + 0xc9) = fVar37;
                            fVar36 = fVar29 * *(float *)(lVar20 + 0x3c);
                            *(float *)((long)unaff_x19 + 0x64c) = fVar36;
                            fVar35 = unaff_s10;
                            if (*(char *)(lVar20 + 0x25) != '\0') {
                              fVar35 = 1.0 / *(float *)((long)dVar32 + 0x84);
                            }
                            lVar20 = *in_stack_00000038;
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            lVar15 = lVar20 + unaff_x22 * 0xc;
                            fVar28 = *(float *)(lVar15 + 0x20);
                            uVar21 = *(undefined8 *)(lVar15 + 0x24);
                            *(float *)(unaff_x19 + 0xcd) = fVar28;
                            in_stack_00000040[0xf] = uVar21;
                            *(float *)(unaff_x19 + 0xd0) = fVar28;
                            fVar33 = (float)uVar21;
                            *(float *)((long)unaff_x19 + 0x684) = fVar33;
                            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                            lVar15 = lVar20 + unaff_x28 * 0xc;
                            uVar31 = *(undefined4 *)(lVar15 + 0x20);
                            uVar21 = *(undefined8 *)(lVar15 + 0x24);
                            *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                            in_stack_00000040[0xf] = uVar21;
                            *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
                            *(int *)((long)unaff_x19 + 0x694) = (int)uVar21;
                            if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                            lVar15 = lVar20 + unaff_x29 * 0xc;
                            uVar31 = *(undefined4 *)(lVar15 + 0x20);
                            uVar21 = *(undefined8 *)(lVar15 + 0x24);
                            *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                            in_stack_00000040[0xf] = uVar21;
                            *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
                            *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar21;
                            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                            lVar20 = lVar20 + in_stack_00000058 * 0xc;
                            uVar31 = *(undefined4 *)(lVar20 + 0x20);
                            uVar21 = *(undefined8 *)(lVar20 + 0x24);
                            *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
                            in_stack_00000040[0xf] = uVar21;
                            *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
                            *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar21;
                            lVar20 = *(long *)((long)dVar32 + 0xb0);
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(char *)(lVar20 + 0x24) == '\0') {
                              lVar15 = *in_stack_00000028;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              uVar5 = *(uint *)(lVar15 + 0x18);
                              if (uVar5 <= in_stack_00000068) goto LAB_00e44400;
                              lVar16 = lVar15 + unaff_x22 * 8;
                              *(float *)(lVar16 + 0x20) =
                                   (fVar37 + fVar35 * fVar28) - *(float *)(lVar20 + 0x30);
                              *(float *)(lVar16 + 0x24) =
                                   (fVar36 + fVar35 * fVar33) - *(float *)(lVar20 + 0x34);
                              if (((uVar5 <= uVar17) ||
                                  (*(ulong *)(lVar15 + unaff_x28 * 8 + 0x20) =
                                        CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar35 +
                                                 (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                 (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >>
                                                        0x20),
                                                 ((float)unaff_x19[0xd2] * fVar35 +
                                                 (float)unaff_x19[0xc9]) -
                                                 (float)*(undefined8 *)(lVar20 + 0x30)),
                                  uVar5 <= uVar24)) ||
                                 (*(ulong *)(lVar15 + unaff_x29 * 8 + 0x20) =
                                       CONCAT44((fVar35 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                                (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                                (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >>
                                                       0x20),
                                                (fVar35 * (float)unaff_x19[0xd4] +
                                                (float)unaff_x19[0xc9]) -
                                                (float)*(undefined8 *)(lVar20 + 0x30)),
                                 uVar5 <= uVar23)) goto LAB_00e44400;
                              param_3 = unaff_x19[0xc9];
                              *(ulong *)(lVar15 + in_stack_00000058 * 8 + 0x20) =
                                   CONCAT44((fVar35 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                                            (float)(param_3 >> 0x20)) -
                                            (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                            (fVar35 * (float)unaff_x19[0xd6] + (float)param_3) -
                                            (float)*(undefined8 *)(lVar20 + 0x30));
                            }
                            else {
                              fVar3 = *(float *)((long)dVar32 + 0x44);
                              *(float *)(unaff_x19 + 0xd8) = fVar3;
                              fVar4 = *(float *)((long)dVar32 + 0x48);
                              lVar15 = unaff_x19[0x61];
                              *(float *)((long)unaff_x19 + 0x6c4) = fVar4;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              uVar5 = *(uint *)(lVar15 + 0x18);
                              if (uVar5 <= in_stack_00000068) goto LAB_00e44400;
                              lVar16 = lVar15 + unaff_x22 * 8;
                              *(float *)(lVar16 + 0x20) =
                                   (fVar37 + fVar35 * (fVar28 - fVar3)) - *(float *)(lVar20 + 0x30);
                              *(float *)(lVar16 + 0x24) =
                                   (fVar36 + fVar35 * (fVar33 - fVar4)) - *(float *)(lVar20 + 0x34);
                              if (((uVar5 <= uVar17) ||
                                  (*(ulong *)(lVar15 + unaff_x28 * 8 + 0x20) =
                                        CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                 ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                                 (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar35)
                                                 - (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >>
                                                          0x20),
                                                 ((float)unaff_x19[0xc9] +
                                                 ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) *
                                                 fVar35) - (float)*(undefined8 *)(lVar20 + 0x30)),
                                  uVar5 <= uVar24)) ||
                                 (*(ulong *)(lVar15 + unaff_x29 * 8 + 0x20) =
                                       CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                                fVar35 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                                         (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                                (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >>
                                                       0x20),
                                                ((float)unaff_x19[0xc9] +
                                                fVar35 * ((float)unaff_x19[0xd4] -
                                                         (float)unaff_x19[0xd8])) -
                                                (float)*(undefined8 *)(lVar20 + 0x30)),
                                 uVar5 <= uVar23)) goto LAB_00e44400;
                              param_3 = unaff_x19[0xd8];
                              *(ulong *)(lVar15 + in_stack_00000058 * 8 + 0x20) =
                                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                            fVar35 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                                     (float)(param_3 >> 0x20))) -
                                            (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20),
                                            ((float)unaff_x19[0xc9] +
                                            fVar35 * ((float)unaff_x19[0xd6] - (float)param_3)) -
                                            (float)*(undefined8 *)(lVar20 + 0x30));
                            }
                          }
LAB_00e3dbd8:
                          dVar32 = *in_stack_00000060;
                          if (dVar32 == 0.0) goto LAB_00e443fc;
                          if (*(char *)((long)dVar32 + 0x108) != '\0') {
                            if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                            if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
                              lVar20 = *in_stack_00000020;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              lVar15 = *in_stack_00000028;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(undefined8 *)(lVar15 + unaff_x22 * 8 + 0x20) =
                                   *(undefined8 *)(lVar20 + unaff_x22 * 8 + 0x20);
                              lVar20 = *in_stack_00000020;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              lVar15 = *in_stack_00000028;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_00e44400;
                              *(undefined8 *)(lVar15 + (long)(int)uVar17 * 8 + 0x20) =
                                   *(undefined8 *)(lVar20 + (long)(int)uVar17 * 8 + 0x20);
                              lVar20 = *in_stack_00000020;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              lVar15 = *in_stack_00000028;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                              *(undefined8 *)(lVar15 + (long)(int)uVar24 * 8 + 0x20) =
                                   *(undefined8 *)(lVar20 + (long)(int)uVar24 * 8 + 0x20);
                              lVar20 = *in_stack_00000020;
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              lVar15 = *in_stack_00000028;
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                              *(undefined8 *)(lVar15 + in_stack_00000058 * 8 + 0x20) =
                                   *(undefined8 *)(lVar20 + in_stack_00000058 * 8 + 0x20);
                              dVar32 = *in_stack_00000060;
                              if (dVar32 == 0.0) goto LAB_00e443fc;
                            }
                          }
                          __x = DAT_028aa048;
                          if (*(char *)((long)dVar32 + 0x108) != '\0') {
                            if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
                            if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
                              lVar20 = *unaff_x24;
                              dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar36 = 255.0;
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar35 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              lVar20 = *unaff_x24;
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar36 = 255.0;
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              *(uint *)(lVar20 + (long)(int)uVar17 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar35 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              lVar20 = *unaff_x24;
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar36 = 255.0;
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              *(uint *)(lVar20 + (long)(int)uVar24 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar35 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              lVar20 = *unaff_x24;
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar29 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = 255.0;
                              }
                              dVar32 = modf(__x,(double *)&stack0x00000070);
                              if (dVar32 == 0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar36 = 255.0;
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                              *(uint *)(lVar20 + in_stack_00000058 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                   ((int)fVar35 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              goto LAB_00e43400;
                            }
                          }
                          uVar21 = *(undefined8 *)((long)dVar32 + 0xa8);
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar12 = FUN_02681b9c(uVar21,0,0);
                          dVar32 = *in_stack_00000060;
                          if (dVar32 == 0.0) goto LAB_00e443fc;
                          if ((uVar12 & 1) == 0) {
                            uVar21 = *(undefined8 *)((long)dVar32 + 0xb0);
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar12 = FUN_02681b9c(uVar21,0,0);
                            if ((uVar12 & 1) != 0) {
                              unaff_x20 = *unaff_x24;
                              param_4 = (double *)&stack0x00000070;
                              unaff_d11 = DAT_028aa048;
                              goto code_r0x00e3deac;
                            }
                            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                            uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar12 = FUN_02681b9c(uVar21,0,0);
                            lVar20 = *unaff_x24;
                            if ((uVar12 & 1) == 0) {
                              fVar29 = *(float *)((long)unaff_x19 + 0x8c);
                              fVar35 = *(float *)(unaff_x19 + 0x12);
                              fVar37 = *(float *)((long)unaff_x19 + 0x94);
                              fVar36 = *(float *)(unaff_x19 + 0x13);
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar29 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3fd48;
                                }
                                fVar35 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
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
                              fVar29 = fVar37;
                              if (1.0 < fVar37) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar37 < 0.0) {
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
                              fVar37 = fVar36;
                              if (1.0 < fVar36) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar37 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar37 + -0.5);
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              fVar29 = *(float *)(unaff_x19 + 0x12);
                              lVar20 = unaff_x19[0x5f];
                              fVar36 = *(float *)((long)unaff_x19 + 0x94);
                              fVar35 = *(float *)(unaff_x19 + 0x13);
                              fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar37 = fVar29;
                              if (1.0 < fVar29) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40610;
                                }
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = fVar29;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              fVar29 = fVar36;
                              if (1.0 < fVar36) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar36 < 0.0) {
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
                              fVar36 = fVar35;
                              if (1.0 < fVar35) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar36 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar35 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                              *(uint *)(lVar20 + (long)(int)uVar17 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              fVar29 = *(float *)(unaff_x19 + 0x12);
                              lVar20 = unaff_x19[0x5f];
                              fVar36 = *(float *)((long)unaff_x19 + 0x94);
                              fVar35 = *(float *)(unaff_x19 + 0x13);
                              fVar30 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar37 = fVar29;
                              if (1.0 < fVar29) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40e20;
                                }
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = fVar29;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              fVar29 = fVar36;
                              if (1.0 < fVar36) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar36 < 0.0) {
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
                              fVar36 = fVar35;
                              if (1.0 < fVar35) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar36 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar35 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                              *(uint *)(lVar20 + (long)(int)uVar24 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              fVar30 = *(float *)((long)unaff_x19 + 0x8c);
                              fVar29 = *(float *)(unaff_x19 + 0x12);
                              lVar20 = unaff_x19[0x5f];
                              fVar36 = *(float *)((long)unaff_x19 + 0x94);
                              fVar35 = *(float *)(unaff_x19 + 0x13);
                            }
                            else {
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                              goto LAB_00e443fc;
                              fVar29 = *(float *)(lVar15 + 0x18);
                              fVar35 = *(float *)(lVar15 + 0x1c);
                              fVar37 = *(float *)(lVar15 + 0x20);
                              fVar36 = *(float *)(lVar15 + 0x24);
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar29 = fVar35;
                              if (1.0 < fVar35) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar29 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3fcc4;
                                }
                                fVar35 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
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
                              fVar29 = fVar37;
                              if (1.0 < fVar37) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar37 < 0.0) {
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
                              fVar37 = fVar36;
                              if (1.0 < fVar36) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar37 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar37 + -0.5);
                              }
                              if (lVar20 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                              goto LAB_00e443fc;
                              fVar29 = *(float *)(lVar20 + 0x1c);
                              lVar15 = *unaff_x24;
                              fVar36 = *(float *)(lVar20 + 0x20);
                              fVar35 = *(float *)(lVar20 + 0x24);
                              fVar30 = *(float *)(lVar20 + 0x18) * 255.0;
                              if (*(float *)(lVar20 + 0x18) < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar37 = fVar29;
                              if (1.0 < fVar29) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e4057c;
                                }
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = fVar29;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              fVar29 = fVar36;
                              if (1.0 < fVar36) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar36 < 0.0) {
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
                              fVar36 = fVar35;
                              if (1.0 < fVar35) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar36 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar35 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_00e44400;
                              *(uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                              goto LAB_00e443fc;
                              fVar29 = *(float *)(lVar20 + 0x1c);
                              lVar15 = *unaff_x24;
                              fVar36 = *(float *)(lVar20 + 0x20);
                              fVar35 = *(float *)(lVar20 + 0x24);
                              fVar30 = *(float *)(lVar20 + 0x18) * 255.0;
                              if (*(float *)(lVar20 + 0x18) < 0.0) {
                                fVar30 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar37 = fVar29;
                              if (1.0 < fVar29) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar37 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar32 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40d8c;
                                }
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = fVar29;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              fVar29 = fVar36;
                              if (1.0 < fVar36) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar36 < 0.0) {
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
                              fVar36 = fVar35;
                              if (1.0 < fVar35) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar36 = unaff_s8;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar35 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar15 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                              *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                                   (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                   ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                              if ((*in_stack_00000060 == 0.0) ||
                                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
                              goto LAB_00e443fc;
                              fVar30 = *(float *)(lVar15 + 0x18);
                              fVar29 = *(float *)(lVar15 + 0x1c);
                              lVar20 = *unaff_x24;
                              fVar36 = *(float *)(lVar15 + 0x20);
                              fVar35 = *(float *)(lVar15 + 0x24);
                            }
                            fVar37 = fVar30 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar37 = unaff_s8;
                            }
                            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar37 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar37 + -0.5);
                            }
                            fVar37 = fVar29;
                            if (1.0 < fVar29) {
                              fVar37 = 1.0;
                            }
                            fVar37 = fVar37 * 255.0;
                            if (fVar29 < 0.0) {
                              fVar37 = unaff_s8;
                            }
                            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e412dc;
                              }
                              fVar37 = (float)(int)(fVar37 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + -0.5);
                            }
                            fVar29 = fVar36;
                            if (1.0 < fVar36) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar36 < 0.0) {
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
                            param_3 = 0x3f800000;
                            fVar36 = fVar35;
                            if (1.0 < fVar35) {
                              fVar36 = 1.0;
                            }
                            fVar36 = fVar36 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar36 = unaff_s8;
                            }
                            dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                            if (0.0 <= fVar36) {
                              if (dVar32 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar36 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar35 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar35 = (float)(int)(fVar36 + -0.5);
                            }
                            if (lVar20 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
                            *(uint *)(lVar20 + in_stack_00000058 * 4 + 0x20) =
                                 (int)fVar30 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                                 ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            goto LAB_00e43400;
                          }
                          lVar20 = *(long *)((long)dVar32 + 0xa8);
                          if (lVar20 == 0) goto LAB_00e443fc;
                          fVar35 = *(float *)(lVar20 + 0x24);
                          if (fVar35 != 0.0) {
                            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                          }
                          unaff_x25 = (long *)StringLiteral_9119;
                          cVar6 = *(char *)(lVar20 + 0x2c);
                          lVar16 = *unaff_x24;
                          lVar15 = *(long *)(lVar20 + 0x18);
                          fVar29 = fVar29 * fVar35;
                          if (*(int *)(lVar20 + 0x28) == 1) {
                            if (cVar6 == '\0') {
                              if (lVar15 == 0) goto LAB_00e443fc;
                              fVar36 = *(float *)(lVar20 + 0x20);
                              fVar37 = *(float *)((long)dVar32 + 0x84);
                              fVar29 = fVar29 + (*(float *)((long)dVar32 + 0x48) * fVar36) / fVar37;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar35 = fVar29;
                              if (1.0 < fVar29) {
                                fVar35 = fVar30;
                              }
                              fVar28 = fVar35;
                              if (fVar29 < 0.0) {
                                fVar28 = 0.0;
                              }
                              fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
                              fVar29 = fVar28;
                              if (1.0 < fVar28) {
                                fVar29 = fVar30;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar28 < 0.0) {
                                fVar29 = 0.0;
                              }
                              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3eeac;
                                }
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = fVar30;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar29 + -0.5);
                              }
                              fVar30 = fVar35;
                              if (1.0 < fVar35) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e41534;
                                }
                                fVar35 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = fVar30;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar30 = fVar36;
                              if (1.0 < fVar36) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar36 = fVar37;
                              if (1.0 < fVar37) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar37 < 0.0) {
                                fVar36 = 0.0;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar16 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                   (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                   ((int)fVar30 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              dVar32 = *in_stack_00000060;
                              if (((dVar32 == 0.0) ||
                                  (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                                 (lVar15 = *(long *)(lVar20 + 0x18), lVar15 == 0))
                              goto LAB_00e443fc;
                              fVar35 = *(float *)((long)dVar32 + 0x48);
                              fVar36 = *(float *)((long)dVar32 + 0x84);
                              lVar16 = *unaff_x24;
                              fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                       (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                            }
                            else {
                              if (lVar15 == 0) goto LAB_00e443fc;
                              fVar36 = *(float *)((long)dVar32 + 0x84);
                              fVar37 = *(float *)(lVar20 + 0x20);
                              fVar29 = fVar29 + ((*(float *)((long)dVar32 + 0x48) + fVar36) * fVar37
                                                ) / fVar36;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar35 = fVar29;
                              if (1.0 < fVar29) {
                                fVar35 = fVar30;
                              }
                              fVar28 = fVar35;
                              if (fVar29 < 0.0) {
                                fVar28 = 0.0;
                              }
                              fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
                              fVar29 = fVar28;
                              if (1.0 < fVar28) {
                                fVar29 = fVar30;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar28 < 0.0) {
                                fVar29 = 0.0;
                              }
                              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3ed6c;
                                }
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = fVar30;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar29 + -0.5);
                              }
                              fVar30 = fVar35;
                              if (1.0 < fVar35) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f2ec;
                                }
                                fVar35 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = fVar30;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar30 = fVar36;
                              if (1.0 < fVar36) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar32 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar30 = (float)(int)(fVar30 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar36 = fVar37;
                              if (1.0 < fVar37) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar37 < 0.0) {
                                fVar36 = 0.0;
                              }
                              dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar32 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar32 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar36 + -0.5);
                              }
                              if (lVar16 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                              *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                   (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                   ((int)fVar30 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                              dVar32 = *in_stack_00000060;
                              if (((dVar32 == 0.0) ||
                                  (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                                 (lVar15 = *(long *)(lVar20 + 0x18), lVar15 == 0))
                              goto LAB_00e443fc;
                              fVar35 = *(float *)((long)dVar32 + 0x84);
                              fVar36 = *(float *)(lVar20 + 0x20);
                              lVar16 = *unaff_x24;
                              fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                       ((*(float *)((long)dVar32 + 0x48) + fVar35) * fVar36) /
                                       fVar35;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar30 = fVar29;
                              if (1.0 < fVar29) {
                                fVar30 = 1.0;
                              }
                            }
                            fVar37 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar37 = 0.0;
                            }
                            fVar37 = (float)FUN_0269ad38(fVar37,lVar15,0);
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
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e419a4;
                              }
                              fVar37 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41a34;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar35 = fVar36;
                            if (1.0 < fVar36) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar36 < 0.0) {
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
                            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
                            *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                 ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                               (*(long *)(lVar20 + 0x18) == 0)) goto LAB_00e443fc;
                            fVar35 = *(float *)((long)dVar32 + 0x48);
                            fVar36 = *(float *)((long)dVar32 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                     (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar37 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar37 = 0.0;
                            }
                            fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(lVar20 + 0x18),0);
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
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41cd0;
                              }
                              fVar37 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41d60;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar35 = fVar36;
                            if (1.0 < fVar36) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar36 < 0.0) {
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
                            if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                            *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                 ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                               (*(long *)(lVar20 + 0x18) == 0)) goto LAB_00e443fc;
                            fVar35 = *(float *)((long)dVar32 + 0x48);
                            fVar36 = *(float *)((long)dVar32 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                     (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar37 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar37 = 0.0;
                            }
                            fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(lVar20 + 0x18),0);
                            fVar29 = fVar37;
                            if (1.0 < fVar37) {
                              fVar29 = 1.0;
                            }
                            param_3 = 0x437f0000;
                            fVar29 = fVar29 * 255.0;
                            if (fVar37 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41ffc;
                              }
                              fVar37 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
LAB_00e42040:
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (fVar29 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                            if (dVar32 == 0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              fVar29 = fVar30 + 1.0;
                              goto LAB_00e425d4;
                            }
                            fVar30 = (float)(int)(fVar29 + 0.5);
                          }
                          else {
                            lVar18 = *in_stack_00000038;
                            if (lVar18 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar18 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            if (lVar15 == 0) goto LAB_00e443fc;
                            fVar36 = *(float *)(lVar18 + unaff_x22 * 0xc + 0x20);
                            fVar37 = *(float *)((long)dVar32 + 0x84);
                            fVar29 = fVar29 + (fVar36 * *(float *)(lVar20 + 0x20)) / fVar37;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar35 = fVar29;
                            if (1.0 < fVar29) {
                              fVar35 = fVar30;
                            }
                            fVar28 = fVar35;
                            if (fVar29 < 0.0) {
                              fVar28 = 0.0;
                            }
                            fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
                            fVar29 = fVar28;
                            if (1.0 < fVar28) {
                              fVar29 = fVar30;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar28 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3e0b0;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3ee80;
                              }
                              fVar35 = (float)(int)(fVar30 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                              fVar35 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar35 = fVar30;
                              }
                            }
                            else {
                              fVar35 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar30 = fVar36;
                            if (1.0 < fVar36) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar36 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar36 = fVar37;
                            if (1.0 < fVar37) {
                              fVar36 = 1.0;
                            }
                            fVar36 = fVar36 * 255.0;
                            if (fVar37 < 0.0) {
                              fVar36 = 0.0;
                            }
                            dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                            if (0.0 <= fVar36) {
                              if (dVar32 == 0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar36 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar36 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar36 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar36 = (float)(int)(fVar36 + -0.5);
                            }
                            if (lVar16 == 0) goto LAB_00e443fc;
                            fVar37 = 1.0;
                            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                                 (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                                 ((int)fVar30 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                            unaff_x25 = (long *)StringLiteral_9119;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                            lVar18 = *unaff_x24;
                            lVar16 = *(long *)(lVar20 + 0x18);
                            fVar30 = fStack0000000000000048 * *(float *)(lVar20 + 0x24);
                            if (cVar6 != '\0') {
                              if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                                if (lVar16 != 0) {
                                  fVar35 = *(float *)(lVar15 + (long)(int)uVar17 * 0xc + 0x20);
                                  fVar36 = *(float *)((long)dVar32 + 0x84);
                                  fVar30 = fVar30 + (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                                  fVar30 = fVar30 - (float)(int)fVar30;
                                  fVar29 = fVar30;
                                  if (1.0 < fVar30) {
                                    fVar29 = fVar37;
                                  }
                                  fVar28 = fVar29;
                                  if (fVar30 < 0.0) {
                                    fVar28 = 0.0;
                                  }
                                  fVar28 = (float)FUN_0269ad38(fVar28,lVar16,0);
                                  fVar30 = fVar28;
                                  if (1.0 < fVar28) {
                                    fVar30 = fVar37;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar28 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar32 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f234;
                                    }
                                    fVar37 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                    fVar37 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar37 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar37 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar29;
                                  if (1.0 < fVar29) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar29 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar32 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f594;
                                    }
                                    fVar29 = (float)(int)(fVar30 + 0.5);
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                    fVar29 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar29 = fVar30;
                                    }
                                  }
                                  else {
                                    fVar29 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar30 = fVar35;
                                  if (1.0 < fVar35) {
                                    fVar30 = 1.0;
                                  }
                                  fVar30 = fVar30 * 255.0;
                                  if (fVar35 < 0.0) {
                                    fVar30 = 0.0;
                                  }
                                  dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                                  if (0.0 <= fVar30) {
                                    if (dVar32 == 0.5) {
                                      fVar30 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar30 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar30 = (float)(int)(fVar30 + 0.5);
                                    }
                                  }
                                  else if (dVar32 == -0.5) {
                                    fVar30 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar30 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar30 = (float)(int)(fVar30 + -0.5);
                                  }
                                  fVar35 = fVar36;
                                  if (1.0 < fVar36) {
                                    fVar35 = 1.0;
                                  }
                                  fVar35 = fVar35 * 255.0;
                                  if (fVar36 < 0.0) {
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
                                  if (lVar18 != 0) {
                                    if (uVar17 < *(uint *)(lVar18 + 0x18)) {
                                      *(uint *)(lVar18 + (long)(int)uVar17 * 4 + 0x20) =
                                           (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                           ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                      dVar32 = *in_stack_00000060;
                                      if (((dVar32 != 0.0) &&
                                          (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 != 0)) &&
                                         (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                        if (uVar24 < *(uint *)(lVar15 + 0x18)) {
                                          if (*(long *)(lVar20 + 0x18) != 0) {
                                            fVar35 = *(float *)(lVar15 + (long)(int)uVar24 * 0xc +
                                                               0x20);
                                            fVar36 = *(float *)((long)dVar32 + 0x84);
                                            lVar15 = *unaff_x24;
                                            fVar29 = fStack0000000000000048 *
                                                     *(float *)(lVar20 + 0x24) +
                                                     (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                                            fVar29 = fVar29 - (float)(int)fVar29;
                                            fVar30 = fVar29;
                                            if (1.0 < fVar29) {
                                              fVar30 = 1.0;
                                            }
                                            fVar37 = fVar30;
                                            if (fVar29 < 0.0) {
                                              fVar37 = 0.0;
                                            }
                                            fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(lVar20 + 
                                                  0x18),0);
                                            fVar29 = fVar37;
                                            if (1.0 < fVar37) {
                                              fVar29 = 1.0;
                                            }
                                            fVar29 = fVar29 * 255.0;
                                            if (fVar37 < 0.0) {
                                              fVar29 = 0.0;
                                            }
                                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar29) {
                                              if (dVar32 == 0.5) {
                                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3f858;
                                              }
                                              fVar37 = (float)(int)(fVar29 + 0.5);
                                            }
                                            else if (dVar32 == -0.5) {
                                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                              fVar37 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar37 = fVar29;
                                              }
                                            }
                                            else {
                                              fVar37 = (float)(int)(fVar29 + -0.5);
                                            }
                                            fVar29 = fVar30;
                                            if (1.0 < fVar30) {
                                              fVar29 = 1.0;
                                            }
                                            fVar29 = fVar29 * 255.0;
                                            if (fVar30 < 0.0) {
                                              fVar29 = 0.0;
                                            }
                                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar29) {
                                              if (dVar32 == 0.5) {
                                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3f8e8;
                                              }
                                              fVar29 = (float)(int)(fVar29 + 0.5);
                                            }
                                            else if (dVar32 == -0.5) {
                                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                              fVar29 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar29 = fVar30;
                                              }
                                            }
                                            else {
                                              fVar29 = (float)(int)(fVar29 + -0.5);
                                            }
                                            fVar30 = fVar35;
                                            if (1.0 < fVar35) {
                                              fVar30 = 1.0;
                                            }
                                            fVar30 = fVar30 * 255.0;
                                            if (fVar35 < 0.0) {
                                              fVar30 = 0.0;
                                            }
                                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar30) {
                                              if (dVar32 == 0.5) {
                                                fVar30 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar30 = (float)(int)(fVar30 + 0.5);
                                              }
                                            }
                                            else if (dVar32 == -0.5) {
                                              fVar30 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar30 = (float)(int)(fVar30 + -0.5);
                                            }
                                            fVar35 = fVar36;
                                            if (1.0 < fVar36) {
                                              fVar35 = 1.0;
                                            }
                                            fVar35 = fVar35 * 255.0;
                                            if (fVar36 < 0.0) {
                                              fVar35 = 0.0;
                                            }
                                            dVar32 = modf((double)fVar35,(double *)&stack0x00000070)
                                            ;
                                            unaff_x25 = (long *)StringLiteral_9119;
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
                                            if (lVar15 != 0) {
                                              if (uVar24 < *(uint *)(lVar15 + 0x18)) {
                                                *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                                                     (int)fVar37 & 0xffU |
                                                     ((int)fVar29 & 0xffU) << 8 |
                                                     ((int)fVar30 & 0xffU) << 0x10 |
                                                     (int)fVar35 << 0x18;
                                                dVar32 = *in_stack_00000060;
                                                if (((dVar32 != 0.0) &&
                                                    (lVar20 = *(long *)((long)dVar32 + 0xa8),
                                                    lVar20 != 0)) &&
                                                   (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                                  if (uVar23 < *(uint *)(lVar15 + 0x18)) {
                                                    if (*(long *)(lVar20 + 0x18) != 0) {
                                                      fVar35 = *(float *)(lVar15 + in_stack_00000058
                                                                                   * 0xc + 0x20);
                                                      fVar36 = *(float *)((long)dVar32 + 0x84);
                                                      lVar15 = *unaff_x24;
                                                      fVar29 = fStack0000000000000048 *
                                                               *(float *)(lVar20 + 0x24) +
                                                               (fVar35 * *(float *)(lVar20 + 0x20))
                                                               / fVar36;
                                                      fVar29 = fVar29 - (float)(int)fVar29;
                                                      fVar30 = fVar29;
                                                      if (1.0 < fVar29) {
                                                        fVar30 = 1.0;
                                                      }
                                                      fVar37 = fVar30;
                                                      if (fVar29 < 0.0) {
                                                        fVar37 = 0.0;
                                                      }
                                                      fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(
                                                  lVar20 + 0x18),0);
                                                  fVar29 = fVar37;
                                                  if (1.0 < fVar37) {
                                                    fVar29 = 1.0;
                                                  }
                                                  param_3 = 0x437f0000;
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar37 < 0.0) {
                                                    fVar29 = 0.0;
                                                  }
                                                  dVar32 = modf((double)fVar29,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar29) {
                                                    if (dVar32 == 0.5) {
                                                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fbd0;
                                                    }
                                                    fVar37 = (float)(int)(fVar29 + 0.5);
                                                  }
                                                  else if (dVar32 == -0.5) {
                                                    fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                                    fVar37 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar37 = fVar29;
                                                    }
                                                  }
                                                  else {
                                                    fVar37 = (float)(int)(fVar29 + -0.5);
                                                  }
                                                  fVar29 = fVar30;
                                                  if (1.0 < fVar30) {
                                                    fVar29 = 1.0;
                                                  }
                                                  fVar29 = fVar29 * 255.0;
                                                  if (fVar30 < 0.0) {
                                                    fVar29 = 0.0;
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
                            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            if (lVar16 == 0) goto LAB_00e443fc;
                            fVar35 = *(float *)(lVar15 + unaff_x22 * 0xc + 0x20);
                            fVar36 = *(float *)((long)dVar32 + 0x84);
                            fVar30 = fVar30 + (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                            fVar30 = fVar30 - (float)(int)fVar30;
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = fVar37;
                            }
                            fVar28 = fVar29;
                            if (fVar30 < 0.0) {
                              fVar28 = 0.0;
                            }
                            fVar28 = (float)FUN_0269ad38(fVar28,lVar16,0);
                            fVar30 = fVar28;
                            if (1.0 < fVar28) {
                              fVar30 = fVar37;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar28 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f25c;
                              }
                              fVar37 = (float)(int)(fVar30 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar30;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar29 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e415c4;
                              }
                              fVar29 = (float)(int)(fVar30 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar35 = fVar36;
                            if (1.0 < fVar36) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar36 < 0.0) {
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
                            if (lVar18 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar18 + 0x18) <= uVar17) goto LAB_00e44400;
                            *(uint *)(lVar18 + (long)(int)uVar17 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                 ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            if (*(long *)(lVar20 + 0x18) == 0) goto LAB_00e443fc;
                            fVar35 = *(float *)(lVar15 + unaff_x22 * 0xc + 0x20);
                            fVar36 = *(float *)((long)dVar32 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                     (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar37 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar37 = 0.0;
                            }
                            fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(lVar20 + 0x18),0);
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
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e421fc;
                              }
                              fVar37 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e4228c;
                              }
                              fVar29 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                              fVar29 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar29 = fVar30;
                              }
                            }
                            else {
                              fVar29 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar30 = fVar35;
                            if (1.0 < fVar35) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar32 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                            }
                            else if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar35 = fVar36;
                            if (1.0 < fVar36) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar36 < 0.0) {
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
                            if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
                            *(uint *)(lVar15 + (long)(int)uVar24 * 4 + 0x20) =
                                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                 ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                            dVar32 = *in_stack_00000060;
                            if (((dVar32 == 0.0) ||
                                (lVar20 = *(long *)((long)dVar32 + 0xa8), lVar20 == 0)) ||
                               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
                            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                            if (*(long *)(lVar20 + 0x18) == 0) goto LAB_00e443fc;
                            fVar35 = *(float *)(lVar15 + unaff_x22 * 0xc + 0x20);
                            fVar36 = *(float *)((long)dVar32 + 0x84);
                            lVar15 = *unaff_x24;
                            fVar29 = fStack0000000000000048 * *(float *)(lVar20 + 0x24) +
                                     (fVar35 * *(float *)(lVar20 + 0x20)) / fVar36;
                            fVar29 = fVar29 - (float)(int)fVar29;
                            fVar30 = fVar29;
                            if (1.0 < fVar29) {
                              fVar30 = 1.0;
                            }
                            fVar37 = fVar30;
                            if (fVar29 < 0.0) {
                              fVar37 = 0.0;
                            }
                            fVar37 = (float)FUN_0269ad38(fVar37,*(long *)(lVar20 + 0x18),0);
                            fVar29 = fVar37;
                            if (1.0 < fVar37) {
                              fVar29 = 1.0;
                            }
                            param_3 = 0x437f0000;
                            fVar29 = fVar29 * 255.0;
                            if (fVar37 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) {
                              if (dVar32 == 0.5) {
                                fVar29 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e42560;
                              }
                              fVar37 = (float)(int)(fVar29 + 0.5);
                            }
                            else if (dVar32 == -0.5) {
                              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = fVar29;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar29 + -0.5);
                            }
                            fVar29 = fVar30;
                            if (1.0 < fVar30) {
                              fVar29 = 1.0;
                            }
                            fVar29 = fVar29 * 255.0;
                            if (fVar30 < 0.0) {
                              fVar29 = 0.0;
                            }
                            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                            if (0.0 <= fVar29) goto LAB_00e425b8;
LAB_00e4204c:
                            if (dVar32 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070;
                              fVar29 = fVar30 + -1.0;
LAB_00e425d4:
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = fVar29;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar29 + -0.5);
                            }
                          }
                          unaff_s8 = 0.0;
                          fVar29 = fVar35;
                          if (1.0 < fVar35) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar35 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e42654;
                            }
                            fVar35 = (float)(int)(fVar29 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                            fVar35 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar35 = fVar29;
                            }
                          }
                          else {
                            fVar35 = (float)(int)(fVar29 + -0.5);
                          }
                          fVar29 = fVar36;
                          if (1.0 < fVar36) {
                            fVar29 = 1.0;
                          }
                          fVar29 = fVar29 * 255.0;
                          if (fVar36 < 0.0) {
                            fVar29 = 0.0;
                          }
                          dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                          if (0.0 <= fVar29) {
                            if (dVar32 == 0.5) {
                              fVar29 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e426e4;
                            }
                            fVar36 = (float)(int)(fVar29 + 0.5);
                          }
                          else if (dVar32 == -0.5) {
                            fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                            fVar36 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar36 = fVar29;
                            }
                          }
                          else {
                            fVar36 = (float)(int)(fVar29 + -0.5);
                          }
                          if (lVar15 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
                          *(uint *)(lVar15 + in_stack_00000058 * 4 + 0x20) =
                               (int)fVar37 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                               ((int)fVar35 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
                          uVar21 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
                          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar12 = FUN_02681b9c(uVar21,0,0);
                        } while ((uVar12 & 1) == 0);
                        lVar20 = *unaff_x24;
                        if (lVar20 == 0) break;
                        if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                        puVar22 = (uint *)(lVar20 + unaff_x22 * 4 + 0x20);
                        uVar23 = *puVar22;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                        break;
                        fVar30 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                        fVar37 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                        fVar36 = *(float *)(lVar20 + 0x20);
                        fVar35 = *(float *)(lVar20 + 0x24);
                        fVar29 = fVar30 * 255.0;
                        if (fVar30 < 0.0) {
                          fVar29 = 0.0;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar30 = 1.0;
                            goto LAB_00e4287c;
                          }
                          fVar29 = (float)(int)(fVar29 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar30 = -1.0;
LAB_00e4287c:
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + fVar30;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar30 = fVar37 * 255.0;
                        fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                        if (fVar37 < 0.0) {
                          fVar30 = 0.0;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar30 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar30 = (float)(int)(fVar30 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
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
                        fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                        if (fVar36 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e429c8;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar36;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar36 = fVar35;
                        if (1.0 < fVar35) {
                          fVar36 = 1.0;
                        }
                        fVar36 = fVar36 * 255.0;
                        if (fVar35 < 0.0) {
                          fVar36 = 0.0;
                        }
                        dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                        if (0.0 <= fVar36) {
                          if (dVar32 == 0.5) {
                            fVar35 = 1.0;
                            goto LAB_00e42a44;
                          }
                          fVar36 = (float)(int)(fVar36 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar35 = -1.0;
LAB_00e42a44:
                          fVar36 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar36 = (float)_fStack0000000000000070 + fVar35;
                          }
                        }
                        else {
                          fVar36 = (float)(int)(fVar36 + -0.5);
                        }
                        *puVar22 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                   ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                        lVar20 = *unaff_x24;
                        if (lVar20 == 0) break;
                        if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
                        puVar22 = (uint *)(lVar20 + (long)(int)uVar17 * 4 + 0x20);
                        uVar23 = *puVar22;
                        if ((*in_stack_00000060 == 0.0) ||
                           (lVar20 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar20 == 0))
                        break;
                        fVar30 = ((float)(uVar23 & 0xff) / 255.0) * *(float *)(lVar20 + 0x18);
                        fVar37 = ((float)(uVar23 >> 8 & 0xff) / 255.0) * *(float *)(lVar20 + 0x1c);
                        fVar36 = *(float *)(lVar20 + 0x20);
                        fVar35 = *(float *)(lVar20 + 0x24);
                        fVar29 = fVar30 * 255.0;
                        if (fVar30 < 0.0) {
                          fVar29 = 0.0;
                        }
                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                        if (0.0 <= fVar29) {
                          if (dVar32 == 0.5) {
                            fVar30 = 1.0;
                            goto LAB_00e42b80;
                          }
                          fVar29 = (float)(int)(fVar29 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar30 = -1.0;
LAB_00e42b80:
                          fVar29 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar29 = (float)_fStack0000000000000070 + fVar30;
                          }
                        }
                        else {
                          fVar29 = (float)(int)(fVar29 + -0.5);
                        }
                        fVar30 = fVar37 * 255.0;
                        fVar36 = ((float)(uVar23 >> 0x10 & 0xff) / 255.0) * fVar36;
                        if (fVar37 < 0.0) {
                          fVar30 = 0.0;
                        }
                        dVar32 = modf((double)fVar30,(double *)&stack0x00000070);
                        if (0.0 <= fVar30) {
                          if (dVar32 == 0.5) {
                            fVar30 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar30 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar30 = (float)(int)(fVar30 + 0.5);
                          }
                        }
                        else if (dVar32 == -0.5) {
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
                        fVar35 = ((float)(uVar23 >> 0x18) / 255.0) * fVar35;
                        if (fVar36 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar32 == 0.5) {
                            fVar36 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42ccc;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar36;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar36 = fVar35;
                        if (1.0 < fVar35) {
                          fVar36 = 1.0;
                        }
                        fVar36 = fVar36 * 255.0;
                        if (fVar35 < 0.0) {
                          fVar36 = 0.0;
                        }
                        dVar32 = modf((double)fVar36,(double *)&stack0x00000070);
                        if (0.0 <= fVar36) {
                          if (dVar32 == 0.5) {
                            fVar35 = 1.0;
                            goto LAB_00e42d48;
                          }
                          fVar36 = (float)(int)(fVar36 + 0.5);
                        }
                        else if (dVar32 == -0.5) {
                          fVar35 = -1.0;
LAB_00e42d48:
                          fVar36 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar36 = (float)_fStack0000000000000070 + fVar35;
                          }
                        }
                        else {
                          fVar36 = (float)(int)(fVar36 + -0.5);
                        }
                        *puVar22 = (int)fVar29 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                   ((int)fVar37 & 0xffU) << 0x10 | (int)fVar36 << 0x18;
                        lVar20 = *unaff_x24;
                        if (lVar20 == 0) break;
                        if (*(uint *)(lVar20 + 0x18) <= uVar24) goto LAB_00e44400;
                        lVar20 = lVar20 + (long)(int)uVar24 * 4;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar15 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar15 + lVar20);
    *puVar2 = uVar31;
    puVar2[1] = (int)uVar12;
    puVar2[2] = (int)param_3;
    lVar15 = unaff_x19[0xca];
    if ((lVar15 == 0) || (lVar16 = unaff_x19[0xcc], lVar16 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar15 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar19 = (undefined8 *)(lVar16 + lVar20);
    lVar20 = lVar20 + 0xc;
    *puVar19 = *(undefined8 *)(lVar15 + 0x44);
    *(undefined4 *)(puVar19 + 1) = uVar31;
  } while (uVar23 != uVar13);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar1,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar20 = unaff_x19[0x59];
  if (lVar20 != 0) {
    (**(code **)(lVar20 + 0x18))
              (*(undefined8 *)(lVar20 + 0x40),*in_stack_00000038,*plVar11,*plVar1,
               *(undefined8 *)(lVar20 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar20 = __start_il2cpp();
  if (lVar20 != 0) {
    if ((*(char *)(lVar20 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


