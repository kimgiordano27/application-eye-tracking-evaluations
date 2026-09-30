/*
FUNCTION_NAME: FullSerializer.Internal.fsNullableConverter$$CreateInstance
ENTRY_POINT: 00e3dcf0
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

void FullSerializer_Internal_fsNullableConverter__CreateInstance
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

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
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  double dVar15;
  long in_x9;
  long lVar16;
  long lVar17;
  long *unaff_x19;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  ulong unaff_x21;
  uint uVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong unaff_x22;
  uint uVar26;
  float unaff_w23;
  ulong uVar27;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float unaff_s8;
  int iVar36;
  float unaff_s10;
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
  double *in_stack_00000060;
  uint in_stack_00000068;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  while( true ) {
    if (*(uint *)(in_x9 + 0x18) <= (uint)unaff_x21) goto LAB_00e44400;
    *(undefined8 *)(in_x9 + unaff_x21 * 8 + 0x20) = *(undefined8 *)(param_1 + unaff_x21 * 8 + 0x20);
    dVar15 = *in_stack_00000060;
    if (dVar15 == 0.0) break;
    do {
      do {
        dVar33 = DAT_028aa048;
        uVar26 = (uint)unaff_x29;
        uVar23 = (uint)unaff_x28;
        uVar22 = (uint)unaff_x21;
        if (*(char *)((long)dVar15 + 0x108) == '\0') {
LAB_00e3dd34:
          uVar19 = *(undefined8 *)((long)dVar15 + 0xa8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_02681b9c(uVar19,0,0);
          dVar15 = *in_stack_00000060;
          if (dVar15 == 0.0) goto LAB_00e443fc;
          if ((uVar11 & 1) == 0) {
            uVar19 = *(undefined8 *)((long)dVar15 + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_02681b9c(uVar19,0,0);
            dVar15 = DAT_028aa048;
            if ((uVar11 & 1) == 0) {
              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
              uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_02681b9c(uVar19,0,0);
              lVar16 = *unaff_x26;
              if ((uVar11 & 1) == 0) {
                fVar31 = *(float *)((long)unaff_x19 + 0x8c);
                fVar34 = *(float *)(unaff_x19 + 0x12);
                fVar29 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
                fVar28 = fVar31;
                if (unaff_s10 < fVar31) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar31 = fVar34;
                if (1.0 < fVar34) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fd48;
                  }
                  fVar34 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar31;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar31 + -0.5);
                }
                fVar31 = fVar29;
                if (1.0 < fVar29) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar29 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar29 = fVar35;
                if (1.0 < fVar35) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar29 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                fVar31 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar35 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
                fVar28 = *(float *)((long)unaff_x19 + 0x8c) * unaff_w23;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar29 = fVar31;
                if (1.0 < fVar31) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40610;
                  }
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar31;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar31 = fVar35;
                if (1.0 < fVar35) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar35 = unaff_s8;
                }
                dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar15 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar35 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                fVar31 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar35 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
                fVar28 = *(float *)((long)unaff_x19 + 0x8c) * unaff_w23;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar29 = fVar31;
                if (1.0 < fVar31) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40e20;
                  }
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar31;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar31 = fVar35;
                if (1.0 < fVar35) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar35 = unaff_s8;
                }
                dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar15 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar35 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
                *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                fVar28 = *(float *)((long)unaff_x19 + 0x8c);
                fVar31 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar35 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
              }
              else {
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar12 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar12 == 0))
                goto LAB_00e443fc;
                fVar31 = *(float *)(lVar12 + 0x18);
                fVar34 = *(float *)(lVar12 + 0x1c);
                fVar29 = *(float *)(lVar12 + 0x20);
                fVar35 = *(float *)(lVar12 + 0x24);
                fVar28 = fVar31;
                if (unaff_s10 < fVar31) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar31 = fVar34;
                if (1.0 < fVar34) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fcc4;
                  }
                  fVar34 = (float)(int)(fVar31 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar31;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar31 + -0.5);
                }
                fVar31 = fVar29;
                if (1.0 < fVar29) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar29 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar29 = fVar35;
                if (1.0 < fVar35) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar29 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                goto LAB_00e443fc;
                fVar31 = *(float *)(lVar16 + 0x1c);
                lVar12 = *unaff_x26;
                fVar35 = *(float *)(lVar16 + 0x20);
                fVar34 = *(float *)(lVar16 + 0x24);
                fVar28 = *(float *)(lVar16 + 0x18) * unaff_w23;
                if (*(float *)(lVar16 + 0x18) < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar29 = fVar31;
                if (1.0 < fVar31) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e4057c;
                  }
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar31;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar31 = fVar35;
                if (1.0 < fVar35) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar35 = unaff_s8;
                }
                dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar15 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar35 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
                }
                if (lVar12 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar12 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                goto LAB_00e443fc;
                fVar31 = *(float *)(lVar16 + 0x1c);
                lVar12 = *unaff_x26;
                fVar35 = *(float *)(lVar16 + 0x20);
                fVar34 = *(float *)(lVar16 + 0x24);
                fVar28 = *(float *)(lVar16 + 0x18) * unaff_w23;
                if (*(float *)(lVar16 + 0x18) < 0.0) {
                  fVar28 = unaff_s8;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + -0.5);
                }
                fVar29 = fVar31;
                if (1.0 < fVar31) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * unaff_w23;
                if (fVar31 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40d8c;
                  }
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar31;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar31 = fVar35;
                if (1.0 < fVar35) {
                  fVar31 = 1.0;
                }
                fVar31 = fVar31 * unaff_w23;
                if (fVar35 < 0.0) {
                  fVar31 = unaff_s8;
                }
                dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                if (0.0 <= fVar31) {
                  if (dVar15 == 0.5) {
                    fVar31 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar31 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar31 = (float)(int)(fVar31 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * unaff_w23;
                if (fVar34 < 0.0) {
                  fVar35 = unaff_s8;
                }
                dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar15 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar35 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
                }
                if (lVar12 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar12 + 0x18) <= uVar26) goto LAB_00e44400;
                *(uint *)(lVar12 + (long)(int)uVar26 * 4 + 0x20) =
                     (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                     ((int)fVar31 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar12 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar12 == 0))
                goto LAB_00e443fc;
                fVar28 = *(float *)(lVar12 + 0x18);
                fVar31 = *(float *)(lVar12 + 0x1c);
                lVar16 = *unaff_x26;
                fVar35 = *(float *)(lVar12 + 0x20);
                fVar34 = *(float *)(lVar12 + 0x24);
              }
              fVar29 = fVar28 * unaff_w23;
              if (fVar28 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar31;
              if (1.0 < fVar31) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * unaff_w23;
              if (fVar31 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              fVar31 = fVar35;
              if (1.0 < fVar35) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * unaff_w23;
              if (fVar35 < 0.0) {
                fVar31 = unaff_s8;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar31 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              param_4 = 0x3f800000;
              fVar35 = fVar34;
              if (1.0 < fVar34) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * unaff_w23;
              if (fVar34 < 0.0) {
                fVar35 = unaff_s8;
              }
              dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar15 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar16 != 0) {
                if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                       (int)fVar28 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                       ((int)fVar31 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                  goto LAB_00e43400;
                }
                goto LAB_00e44400;
              }
              goto LAB_00e443fc;
            }
            lVar16 = *unaff_x26;
            dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + unaff_s10;
              }
            }
            else {
              fVar28 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + unaff_s10;
              }
            }
            else {
              fVar31 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + unaff_s10;
              }
            }
            else {
              fVar34 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar34 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar34 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar31 = 255.0;
            }
            dVar33 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar34 = 255.0;
            }
            dVar15 = modf(dVar15,(double *)&stack0x00000070);
            if (dVar15 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_02681b9c(uVar19,0,0);
            if ((uVar11 & 1) == 0) goto LAB_00e43400;
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
            uVar4 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar35 = *(float *)(lVar16 + 0x20);
            fVar34 = *(float *)(lVar16 + 0x24);
            fVar28 = fVar31 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = 1.0;
                goto LAB_00e3ede4;
              }
              fVar31 = (float)(int)(fVar28 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar28 = -1.0;
LAB_00e3ede4:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + fVar28;
              }
            }
            else {
              fVar31 = (float)(int)(fVar28 + -0.5);
            }
            fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
            fVar28 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar29 = fVar35;
            if (1.0 < fVar35) {
              fVar29 = 1.0;
            }
            fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
            fVar29 = fVar29 * 255.0;
            if (fVar35 < 0.0) {
              fVar29 = unaff_s8;
            }
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ffb0;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar34;
            if (1.0 < fVar34) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar34 < 0.0) {
              fVar35 = unaff_s8;
            }
            dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar15 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e40174;
              }
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = -1.0;
LAB_00e40174:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            *puVar21 = (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
            uVar4 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar35 = *(float *)(lVar16 + 0x20);
            fVar34 = *(float *)(lVar16 + 0x24);
            fVar28 = fVar31 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = 1.0;
                goto LAB_00e404dc;
              }
              fVar31 = (float)(int)(fVar28 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar28 = -1.0;
LAB_00e404dc:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + fVar28;
              }
            }
            else {
              fVar31 = (float)(int)(fVar28 + -0.5);
            }
            fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
            fVar28 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar29 = fVar35;
            if (1.0 < fVar35) {
              fVar29 = 1.0;
            }
            fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
            fVar29 = fVar29 * 255.0;
            if (fVar35 < 0.0) {
              fVar29 = unaff_s8;
            }
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40888;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar34;
            if (1.0 < fVar34) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar34 < 0.0) {
              fVar35 = unaff_s8;
            }
            dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar15 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e40a4c;
              }
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = -1.0;
LAB_00e40a4c:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            *puVar21 = (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + (long)(int)uVar26 * 4;
          }
          else {
            lVar16 = *(long *)((long)dVar15 + 0xa8);
            if (lVar16 == 0) goto LAB_00e443fc;
            fVar28 = *(float *)(lVar16 + 0x24);
            if (fVar28 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            unaff_x25 = (long *)StringLiteral_9119;
            cVar5 = *(char *)(lVar16 + 0x2c);
            lVar20 = *unaff_x26;
            lVar12 = *(long *)(lVar16 + 0x18);
            fVar28 = (float)unaff_d14 * fVar28;
            if (*(int *)(lVar16 + 0x28) == 1) {
              if (cVar5 == '\0') {
                if (lVar12 == 0) goto LAB_00e443fc;
                fVar34 = *(float *)(lVar16 + 0x20);
                fVar35 = *(float *)((long)dVar15 + 0x84);
                fVar28 = fVar28 + (*(float *)((long)dVar15 + 0x48) * fVar34) / fVar35;
                fVar28 = fVar28 - (float)(int)fVar28;
                fVar31 = fVar28;
                if (unaff_s10 < fVar28) {
                  fVar31 = unaff_s10;
                }
                fVar29 = fVar31;
                if (fVar28 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar12,0);
                fVar28 = fVar29;
                if (unaff_s10 < fVar29) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar29 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                    goto LAB_00e3eeac;
                  }
                  fVar29 = (float)(int)(fVar28 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar28;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar28 + -0.5);
                }
                fVar28 = fVar31;
                if (unaff_s10 < fVar31) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar31 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                    goto LAB_00e41534;
                  }
                  fVar31 = (float)(int)(fVar28 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = fVar28;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar28 + -0.5);
                }
                fVar28 = fVar34;
                if (unaff_s10 < fVar34) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar34 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
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
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                dVar15 = *in_stack_00000060;
                if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                   (lVar12 = *(long *)(lVar16 + 0x18), lVar12 == 0)) goto LAB_00e443fc;
                fVar34 = *(float *)((long)dVar15 + 0x48);
                fVar35 = *(float *)((long)dVar15 + 0x84);
                lVar20 = *unaff_x26;
                fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                         (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
                fVar31 = fVar31 - (float)(int)fVar31;
                fVar28 = fVar31;
                if (1.0 < fVar31) {
                  fVar28 = 1.0;
                }
              }
              else {
                if (lVar12 == 0) goto LAB_00e443fc;
                fVar34 = *(float *)((long)dVar15 + 0x84);
                fVar35 = *(float *)(lVar16 + 0x20);
                fVar28 = fVar28 + ((*(float *)((long)dVar15 + 0x48) + fVar34) * fVar35) / fVar34;
                fVar28 = fVar28 - (float)(int)fVar28;
                fVar31 = fVar28;
                if (unaff_s10 < fVar28) {
                  fVar31 = unaff_s10;
                }
                fVar29 = fVar31;
                if (fVar28 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar12,0);
                fVar28 = fVar29;
                if (unaff_s10 < fVar29) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar29 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                    goto LAB_00e3ed6c;
                  }
                  fVar29 = (float)(int)(fVar28 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar28;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar28 + -0.5);
                }
                fVar28 = fVar31;
                if (unaff_s10 < fVar31) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar31 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                    goto LAB_00e3f2ec;
                  }
                  fVar31 = (float)(int)(fVar28 + 0.5);
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar31 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar31 = fVar28;
                  }
                }
                else {
                  fVar31 = (float)(int)(fVar28 + -0.5);
                }
                fVar28 = fVar34;
                if (unaff_s10 < fVar34) {
                  fVar28 = unaff_s10;
                }
                fVar28 = fVar28 * 255.0;
                if (fVar34 < 0.0) {
                  fVar28 = 0.0;
                }
                dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                if (0.0 <= fVar28) {
                  if (dVar15 == 0.5) {
                    fVar28 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar28 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar28 = (float)(int)(fVar28 + 0.5);
                  }
                }
                else if (dVar15 == -0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + -1.0;
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
                if (lVar20 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                dVar15 = *in_stack_00000060;
                if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                   (lVar12 = *(long *)(lVar16 + 0x18), lVar12 == 0)) goto LAB_00e443fc;
                fVar34 = *(float *)((long)dVar15 + 0x84);
                fVar35 = *(float *)(lVar16 + 0x20);
                lVar20 = *unaff_x26;
                fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                         ((*(float *)((long)dVar15 + 0x48) + fVar34) * fVar35) / fVar34;
                fVar31 = fVar31 - (float)(int)fVar31;
                fVar28 = fVar31;
                if (1.0 < fVar31) {
                  fVar28 = 1.0;
                }
              }
              fVar29 = fVar28;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar12,0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar29 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar28;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar28 = fVar34;
              if (1.0 < fVar34) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar34 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
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
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar15 = *in_stack_00000060;
              if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                 (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
              fVar34 = *(float *)((long)dVar15 + 0x48);
              fVar35 = *(float *)((long)dVar15 + 0x84);
              lVar12 = *unaff_x26;
              fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar29 = fVar28;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18),0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar29 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar28;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar28 = fVar34;
              if (1.0 < fVar34) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar34 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
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
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar12 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar15 = *in_stack_00000060;
              if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                 (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
              fVar34 = *(float *)((long)dVar15 + 0x48);
              fVar35 = *(float *)((long)dVar15 + 0x84);
              lVar12 = *unaff_x26;
              fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar29 = fVar28;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18),0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              param_4 = 0x437f0000;
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar29 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = 0.0;
              }
LAB_00e42040:
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (fVar31 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                fVar31 = fVar28 + 1.0;
                goto LAB_00e425d4;
              }
              fVar28 = (float)(int)(fVar31 + 0.5);
            }
            else {
              lVar17 = *in_stack_00000038;
              if (lVar17 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar17 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar12 == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar17 + unaff_x22 * unaff_x24 + 0x20);
              fVar35 = *(float *)((long)dVar15 + 0x84);
              fVar28 = fVar28 + (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
              fVar28 = fVar28 - (float)(int)fVar28;
              fVar31 = fVar28;
              if (unaff_s10 < fVar28) {
                fVar31 = unaff_s10;
              }
              fVar29 = fVar31;
              if (fVar28 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar12,0);
              fVar28 = fVar29;
              if (unaff_s10 < fVar29) {
                fVar28 = unaff_s10;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar29 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3e0b0;
                }
                fVar29 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar28;
                }
              }
              else {
                fVar29 = (float)(int)(fVar28 + -0.5);
              }
              fVar28 = fVar31;
              if (unaff_s10 < fVar31) {
                fVar28 = unaff_s10;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar31 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3ee80;
                }
                fVar31 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar28;
                }
              }
              else {
                fVar31 = (float)(int)(fVar28 + -0.5);
              }
              fVar28 = fVar34;
              if (unaff_s10 < fVar34) {
                fVar28 = unaff_s10;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar34 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
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
              if (lVar20 == 0) goto LAB_00e443fc;
              fVar35 = 1.0;
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              unaff_x25 = (long *)StringLiteral_9119;
              dVar15 = *in_stack_00000060;
              if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                 (lVar12 = *in_stack_00000038, lVar12 == 0)) goto LAB_00e443fc;
              lVar17 = *unaff_x26;
              lVar20 = *(long *)(lVar16 + 0x18);
              fVar28 = fStack0000000000000048 * *(float *)(lVar16 + 0x24);
              if (cVar5 != '\0') {
                if (uVar23 < *(uint *)(lVar12 + 0x18)) {
                  if (lVar20 != 0) {
                    fVar34 = *(float *)(lVar12 + (int)uVar23 * unaff_x24 + 0x20);
                    fVar29 = *(float *)((long)dVar15 + 0x84);
                    fVar28 = fVar28 + (fVar34 * *(float *)(lVar16 + 0x20)) / fVar29;
                    fVar28 = fVar28 - (float)(int)fVar28;
                    fVar31 = fVar28;
                    if (1.0 < fVar28) {
                      fVar31 = fVar35;
                    }
                    fVar30 = fVar31;
                    if (fVar28 < 0.0) {
                      fVar30 = 0.0;
                    }
                    fVar30 = (float)FUN_0269ad38(fVar30,lVar20,0);
                    fVar28 = fVar30;
                    if (1.0 < fVar30) {
                      fVar28 = fVar35;
                    }
                    fVar28 = fVar28 * 255.0;
                    if (fVar30 < 0.0) {
                      fVar28 = 0.0;
                    }
                    dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                    if (0.0 <= fVar28) {
                      if (dVar15 == 0.5) {
                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar35 = (float)(int)(fVar28 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = fVar28;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar28 + -0.5);
                    }
                    fVar28 = fVar31;
                    if (1.0 < fVar31) {
                      fVar28 = 1.0;
                    }
                    fVar28 = fVar28 * 255.0;
                    if (fVar31 < 0.0) {
                      fVar28 = 0.0;
                    }
                    dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                    if (0.0 <= fVar28) {
                      if (dVar15 == 0.5) {
                        fVar28 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar31 = (float)(int)(fVar28 + 0.5);
                    }
                    else if (dVar15 == -0.5) {
                      fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar31 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar31 = fVar28;
                      }
                    }
                    else {
                      fVar31 = (float)(int)(fVar28 + -0.5);
                    }
                    fVar28 = fVar34;
                    if (1.0 < fVar34) {
                      fVar28 = 1.0;
                    }
                    fVar28 = fVar28 * 255.0;
                    if (fVar34 < 0.0) {
                      fVar28 = 0.0;
                    }
                    dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                    if (0.0 <= fVar28) {
                      if (dVar15 == 0.5) {
                        fVar28 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar28 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar28 = (float)(int)(fVar28 + 0.5);
                      }
                    }
                    else if (dVar15 == -0.5) {
                      fVar28 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar28 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar28 = (float)(int)(fVar28 + -0.5);
                    }
                    fVar34 = fVar29;
                    if (1.0 < fVar29) {
                      fVar34 = 1.0;
                    }
                    fVar34 = fVar34 * 255.0;
                    if (fVar29 < 0.0) {
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
                    if (lVar17 != 0) {
                      if (uVar23 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(lVar17 + (long)(int)uVar23 * 4 + 0x20) =
                             (int)fVar35 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                             ((int)fVar28 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                        dVar15 = *in_stack_00000060;
                        if (((dVar15 != 0.0) &&
                            (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
                           (lVar12 = *in_stack_00000038, lVar12 != 0)) {
                          if (uVar26 < *(uint *)(lVar12 + 0x18)) {
                            if (*(long *)(lVar16 + 0x18) != 0) {
                              fVar34 = *(float *)(lVar12 + (int)uVar26 * unaff_x24 + 0x20);
                              fVar35 = *(float *)((long)dVar15 + 0x84);
                              lVar12 = *unaff_x26;
                              fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                       (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
                              fVar31 = fVar31 - (float)(int)fVar31;
                              fVar28 = fVar31;
                              if (1.0 < fVar31) {
                                fVar28 = 1.0;
                              }
                              fVar29 = fVar28;
                              if (fVar31 < 0.0) {
                                fVar29 = 0.0;
                              }
                              fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18),0);
                              fVar31 = fVar29;
                              if (1.0 < fVar29) {
                                fVar31 = 1.0;
                              }
                              fVar31 = fVar31 * 255.0;
                              if (fVar29 < 0.0) {
                                fVar31 = 0.0;
                              }
                              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                              if (0.0 <= fVar31) {
                                if (dVar15 == 0.5) {
                                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar29 = (float)(int)(fVar31 + 0.5);
                              }
                              else if (dVar15 == -0.5) {
                                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = fVar31;
                                }
                              }
                              else {
                                fVar29 = (float)(int)(fVar31 + -0.5);
                              }
                              fVar31 = fVar28;
                              if (1.0 < fVar28) {
                                fVar31 = 1.0;
                              }
                              fVar31 = fVar31 * 255.0;
                              if (fVar28 < 0.0) {
                                fVar31 = 0.0;
                              }
                              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                              if (0.0 <= fVar31) {
                                if (dVar15 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar31 = (float)(int)(fVar31 + 0.5);
                              }
                              else if (dVar15 == -0.5) {
                                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                fVar31 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar31 = fVar28;
                                }
                              }
                              else {
                                fVar31 = (float)(int)(fVar31 + -0.5);
                              }
                              fVar28 = fVar34;
                              if (1.0 < fVar34) {
                                fVar28 = 1.0;
                              }
                              fVar28 = fVar28 * 255.0;
                              if (fVar34 < 0.0) {
                                fVar28 = 0.0;
                              }
                              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
                              if (0.0 <= fVar28) {
                                if (dVar15 == 0.5) {
                                  fVar28 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar28 = (float)(int)(fVar28 + 0.5);
                                }
                              }
                              else if (dVar15 == -0.5) {
                                fVar28 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar28 = (float)_fStack0000000000000070 + -1.0;
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
                              dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
                              unaff_x25 = (long *)StringLiteral_9119;
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
                              if (lVar12 != 0) {
                                if (uVar26 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar12 + (long)(int)uVar26 * 4 + 0x20) =
                                       (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                                       ((int)fVar28 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                                  dVar15 = *in_stack_00000060;
                                  if (((dVar15 != 0.0) &&
                                      (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 != 0)) &&
                                     (lVar12 = *in_stack_00000038, lVar12 != 0)) {
                                    if (uVar22 < *(uint *)(lVar12 + 0x18)) {
                                      if (*(long *)(lVar16 + 0x18) != 0) {
                                        fVar34 = *(float *)(lVar12 + unaff_x21 * unaff_x24 + 0x20);
                                        fVar35 = *(float *)((long)dVar15 + 0x84);
                                        lVar12 = *unaff_x26;
                                        fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24)
                                                 + (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
                                        fVar31 = fVar31 - (float)(int)fVar31;
                                        fVar28 = fVar31;
                                        if (1.0 < fVar31) {
                                          fVar28 = 1.0;
                                        }
                                        fVar29 = fVar28;
                                        if (fVar31 < 0.0) {
                                          fVar29 = 0.0;
                                        }
                                        fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18)
                                                                     ,0);
                                        fVar31 = fVar29;
                                        if (1.0 < fVar29) {
                                          fVar31 = 1.0;
                                        }
                                        param_4 = 0x437f0000;
                                        fVar31 = fVar31 * 255.0;
                                        if (fVar29 < 0.0) {
                                          fVar31 = 0.0;
                                        }
                                        dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
                                        if (0.0 <= fVar31) {
                                          if (dVar15 == 0.5) {
                                            fVar31 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar29 = (float)(int)(fVar31 + 0.5);
                                        }
                                        else if (dVar15 == -0.5) {
                                          fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                          fVar29 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar29 = fVar31;
                                          }
                                        }
                                        else {
                                          fVar29 = (float)(int)(fVar31 + -0.5);
                                        }
                                        fVar31 = fVar28;
                                        if (1.0 < fVar28) {
                                          fVar31 = 1.0;
                                        }
                                        fVar31 = fVar31 * 255.0;
                                        if (fVar28 < 0.0) {
                                          fVar31 = 0.0;
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
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar20 == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar12 + unaff_x22 * unaff_x24 + 0x20);
              fVar29 = *(float *)((long)dVar15 + 0x84);
              fVar28 = fVar28 + (fVar34 * *(float *)(lVar16 + 0x20)) / fVar29;
              fVar28 = fVar28 - (float)(int)fVar28;
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = fVar35;
              }
              fVar30 = fVar31;
              if (fVar28 < 0.0) {
                fVar30 = 0.0;
              }
              fVar30 = (float)FUN_0269ad38(fVar30,lVar20,0);
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = fVar35;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar30 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar35 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar28;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar31 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar31 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar28;
                }
              }
              else {
                fVar31 = (float)(int)(fVar28 + -0.5);
              }
              fVar28 = fVar34;
              if (1.0 < fVar34) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar34 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar34 = fVar29;
              if (1.0 < fVar29) {
                fVar34 = 1.0;
              }
              fVar34 = fVar34 * 255.0;
              if (fVar29 < 0.0) {
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
              if (lVar17 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar17 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar35 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar15 = *in_stack_00000060;
              if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                 (lVar12 = *in_stack_00000038, lVar12 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar12 + unaff_x22 * unaff_x24 + 0x20);
              fVar35 = *(float *)((long)dVar15 + 0x84);
              lVar12 = *unaff_x26;
              fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar29 = fVar28;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18),0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar29 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = fVar28;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + -0.5);
              }
              fVar28 = fVar34;
              if (1.0 < fVar34) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar34 < 0.0) {
                fVar28 = 0.0;
              }
              dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar15 == 0.5) {
                  fVar28 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar28 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar28 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + -1.0;
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
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar12 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar15 = *in_stack_00000060;
              if (((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xa8), lVar16 == 0)) ||
                 (lVar12 = *in_stack_00000038, lVar12 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar12 + unaff_x22 * unaff_x24 + 0x20);
              fVar35 = *(float *)((long)dVar15 + 0x84);
              lVar12 = *unaff_x26;
              fVar31 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar34 * *(float *)(lVar16 + 0x20)) / fVar35;
              fVar31 = fVar31 - (float)(int)fVar31;
              fVar28 = fVar31;
              if (1.0 < fVar31) {
                fVar28 = 1.0;
              }
              fVar29 = fVar28;
              if (fVar31 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,*(long *)(lVar16 + 0x18),0);
              fVar31 = fVar29;
              if (1.0 < fVar29) {
                fVar31 = 1.0;
              }
              param_4 = 0x437f0000;
              fVar31 = fVar31 * 255.0;
              if (fVar29 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) {
                if (dVar15 == 0.5) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar29 = (float)(int)(fVar31 + 0.5);
              }
              else if (dVar15 == -0.5) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar31;
                }
              }
              else {
                fVar29 = (float)(int)(fVar31 + -0.5);
              }
              fVar31 = fVar28;
              if (1.0 < fVar28) {
                fVar31 = 1.0;
              }
              fVar31 = fVar31 * 255.0;
              if (fVar28 < 0.0) {
                fVar31 = 0.0;
              }
              dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
              if (0.0 <= fVar31) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar15 == -0.5) {
                fVar28 = (float)_fStack0000000000000070;
                fVar31 = fVar28 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar31;
                }
              }
              else {
                fVar28 = (float)(int)(fVar31 + -0.5);
              }
            }
            unaff_s8 = 0.0;
            fVar31 = fVar34;
            if (1.0 < fVar34) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = 0.0;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42654;
              }
              fVar34 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = fVar31;
              }
            }
            else {
              fVar34 = (float)(int)(fVar31 + -0.5);
            }
            fVar31 = fVar35;
            if (1.0 < fVar35) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar35 < 0.0) {
              fVar31 = 0.0;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar35 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar31;
              }
            }
            else {
              fVar35 = (float)(int)(fVar31 + -0.5);
            }
            if (lVar12 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar12 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar12 + unaff_x21 * 4 + 0x20) =
                 (int)fVar29 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
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
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
            uVar4 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar28 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar35 = *(float *)(lVar16 + 0x20);
            fVar34 = *(float *)(lVar16 + 0x24);
            fVar31 = fVar28 * 255.0;
            if (fVar28 < 0.0) {
              fVar31 = 0.0;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar28 = 1.0;
                goto LAB_00e4287c;
              }
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar28 = -1.0;
LAB_00e4287c:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + fVar28;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar28 = fVar29 * 255.0;
            fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
            if (fVar29 < 0.0) {
              fVar28 = 0.0;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar29 = fVar35;
            if (1.0 < fVar35) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
            if (fVar35 < 0.0) {
              fVar29 = 0.0;
            }
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e429c8;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar34;
            if (1.0 < fVar34) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar34 < 0.0) {
              fVar35 = 0.0;
            }
            dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar15 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e42a44;
              }
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = -1.0;
LAB_00e42a44:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            *puVar21 = (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
            uVar4 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar28 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar35 = *(float *)(lVar16 + 0x20);
            fVar34 = *(float *)(lVar16 + 0x24);
            fVar31 = fVar28 * 255.0;
            if (fVar28 < 0.0) {
              fVar31 = 0.0;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar28 = 1.0;
                goto LAB_00e42b80;
              }
              fVar31 = (float)(int)(fVar31 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar28 = -1.0;
LAB_00e42b80:
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + fVar28;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar28 = fVar29 * 255.0;
            fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
            if (fVar29 < 0.0) {
              fVar28 = 0.0;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar29 = fVar35;
            if (1.0 < fVar35) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
            if (fVar35 < 0.0) {
              fVar29 = 0.0;
            }
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42ccc;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar34;
            if (1.0 < fVar34) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar34 < 0.0) {
              fVar35 = 0.0;
            }
            dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar15 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e42d48;
              }
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = -1.0;
LAB_00e42d48:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            *puVar21 = (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + (long)(int)uVar26 * 4;
          }
          uVar4 = *(uint *)(lVar16 + 0x20);
          if ((*in_stack_00000060 == 0.0) ||
             (lVar12 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar12 == 0)) goto LAB_00e443fc;
          fVar31 = ((float)(uVar4 & 0xff) / 255.0) * *(float *)(lVar12 + 0x18);
          fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
          fVar35 = *(float *)(lVar12 + 0x20);
          fVar34 = *(float *)(lVar12 + 0x24);
          fVar28 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar15 == 0.5) {
              fVar28 = 1.0;
              goto FUN_00e42e84;
            }
            fVar31 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar28 = -1.0;
FUN_00e42e84:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
          fVar28 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar15 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar15 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar15 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = fVar35;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar34;
          if (1.0 < fVar34) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar34 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar15 == 0.5) {
              fVar34 = 1.0;
              goto LAB_00e4304c;
            }
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar34 = -1.0;
LAB_00e4304c:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + fVar34;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          *(uint *)(lVar16 + 0x20) =
               (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar29 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar16 = *unaff_x26;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          puVar21 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
          uVar4 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0)) goto LAB_00e443fc;
          fVar31 = (float)(uVar4 & 0xff) / 255.0;
          param_4 = (ulong)(uint)fVar31;
          fVar31 = fVar31 * *(float *)(lVar16 + 0x18);
          fVar29 = ((float)(uVar4 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
          fVar35 = *(float *)(lVar16 + 0x20);
          fVar34 = *(float *)(lVar16 + 0x24);
          fVar28 = fVar31 * 255.0;
          if (fVar31 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar15 == 0.5) {
              fVar28 = 1.0;
              goto LAB_00e4318c;
            }
            fVar31 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar28 = -1.0;
LAB_00e4318c:
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + fVar28;
            }
          }
          else {
            fVar31 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = ((float)(uVar4 >> 0x10 & 0xff) / 255.0) * fVar35;
          fVar28 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar15 == 0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar15 == -0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar29 = fVar35;
          if (1.0 < fVar35) {
            fVar29 = 1.0;
          }
          fVar34 = ((float)(uVar4 >> 0x18) / 255.0) * fVar34;
          fVar29 = fVar29 * 255.0;
          if (fVar35 < 0.0) {
            fVar29 = unaff_s8;
          }
          dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
          if (0.0 <= fVar29) {
            if (dVar15 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar29 = (float)(int)(fVar29 + 0.5);
          }
          else if (dVar15 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = fVar35;
            }
          }
          else {
            fVar29 = (float)(int)(fVar29 + -0.5);
          }
          fVar35 = fVar34;
          if (1.0 < fVar34) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar34 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar15 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar15 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar15 == -0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar34 = (float)(int)(fVar35 + -0.5);
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          *puVar21 = (int)fVar31 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          unaff_s15 = in_stack_00000008._4_4_;
        }
        else {
          if (*(long *)((long)dVar15 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
          lVar16 = *unaff_x26;
          dVar15 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar34 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(uint *)(lVar16 + unaff_x22 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar16 = *unaff_x26;
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar16 = *unaff_x26;
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar16 = *unaff_x26;
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar28 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar31 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar31 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar31 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar34 = 255.0;
          }
          dVar15 = modf(dVar33,(double *)&stack0x00000070);
          if (dVar15 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar16 + unaff_x21 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
        }
LAB_00e43400:
        lVar16 = *unaff_x26;
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        lVar16 = lVar16 + unaff_x22 * 4;
        fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
        lVar16 = lVar16 + (long)(int)uVar23 * 4;
        fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar16 = lVar16 + (long)(int)uVar26 * 4;
        fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar16 = lVar16 + unaff_x21 * 4;
        uVar11 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
        fVar28 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar28);
        uVar13 = FUN_00e3703c();
        if ((uVar13 & 1) == 0) {
          lVar16 = *unaff_x25;
          if (*(int *)(lVar16 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar16 = *unaff_x25;
          }
          if (*(int *)(*(long *)(lVar16 + 0xb8) + 0x20) == 1) {
            lVar16 = *unaff_x26;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + unaff_x22 * 4 + 0x20);
            uVar4 = *puVar21;
            fVar31 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
            fVar34 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
            fVar35 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
            fVar28 = fVar31;
            if (1.0 < fVar31) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar31 = fVar34;
            if (1.0 < fVar34) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar34 = fVar35;
            if (1.0 < fVar35) {
              fVar34 = 1.0;
            }
            fVar29 = (float)(uVar4 >> 0x18) / 255.0;
            fVar34 = fVar34 * 255.0;
            if (fVar35 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e43744;
              }
              fVar35 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar34 + -0.5);
            }
            if (1.0 < fVar29) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar29 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar29 + -0.5);
            }
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *puVar21 = (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                       ((int)fVar35 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
            lVar16 = *in_stack_00000030;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
            uVar4 = *puVar21;
            fVar31 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
            fVar34 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
            fVar35 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
            fVar28 = fVar31;
            if (1.0 < fVar31) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar31 = fVar34;
            if (1.0 < fVar34) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar34 = fVar35;
            if (1.0 < fVar35) {
              fVar34 = 1.0;
            }
            fVar29 = (float)(uVar4 >> 0x18) / 255.0;
            fVar34 = fVar34 * 255.0;
            if (fVar35 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e43a84;
              }
              fVar35 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar34 + -0.5);
            }
            if (1.0 < fVar29) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar29 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar29 + -0.5);
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            *puVar21 = (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                       ((int)fVar35 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
            lVar16 = *in_stack_00000030;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20);
            uVar23 = *puVar21;
            fVar31 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
            fVar34 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
            fVar35 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
            fVar28 = fVar31;
            if (1.0 < fVar31) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar31 = fVar34;
            if (1.0 < fVar34) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar34 = fVar35;
            if (1.0 < fVar35) {
              fVar34 = 1.0;
            }
            fVar29 = (float)(uVar23 >> 0x18) / 255.0;
            fVar34 = fVar34 * 255.0;
            if (fVar35 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e43dbc;
              }
              fVar35 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar34 + -0.5);
            }
            if (1.0 < fVar29) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar29 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar29 + -0.5);
            }
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            *puVar21 = (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                       ((int)fVar35 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
            lVar16 = *in_stack_00000030;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + unaff_x21 * 4 + 0x20);
            uVar23 = *puVar21;
            fVar31 = (float)FUN_026982b0((float)(uVar23 & 0xff) / 255.0,0);
            fVar34 = (float)FUN_026982b0((float)(uVar23 >> 8 & 0xff) / 255.0,0);
            fVar35 = (float)FUN_026982b0((float)(uVar23 >> 0x10 & 0xff) / 255.0,0);
            fVar28 = fVar31;
            if (1.0 < fVar31) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar31 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar15 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar15 == 0.5) {
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            param_4 = 0x3f800000;
            fVar31 = fVar34;
            if (1.0 < fVar34) {
              fVar31 = 1.0;
            }
            fVar31 = fVar31 * 255.0;
            if (fVar34 < 0.0) {
              fVar31 = unaff_s8;
            }
            dVar15 = modf((double)fVar31,(double *)&stack0x00000070);
            if (0.0 <= fVar31) {
              if (dVar15 == 0.5) {
                fVar31 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar31 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar31 = (float)(int)(fVar31 + 0.5);
              }
            }
            else if (dVar15 == -0.5) {
              fVar31 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar31 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar31 = (float)(int)(fVar31 + -0.5);
            }
            fVar34 = fVar35;
            if (1.0 < fVar35) {
              fVar34 = 1.0;
            }
            fVar29 = (float)(uVar23 >> 0x18) / 255.0;
            fVar34 = fVar34 * 255.0;
            if (fVar35 < 0.0) {
              fVar34 = unaff_s8;
            }
            dVar15 = modf((double)fVar34,(double *)&stack0x00000070);
            if (0.0 <= fVar34) {
              if (dVar15 == 0.5) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e440f4;
              }
              fVar35 = (float)(int)(fVar34 + 0.5);
            }
            else if (dVar15 == -0.5) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar34;
              }
            }
            else {
              fVar35 = (float)(int)(fVar34 + -0.5);
            }
            if (1.0 < fVar29) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            dVar15 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              uVar11 = 0;
              if (dVar15 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e44170;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else {
              uVar11 = 0;
              if (dVar15 == -0.5) {
                fVar34 = -1.0;
LAB_00e44170:
                fVar34 = (float)_fStack0000000000000070 + fVar34;
                uVar11 = (ulong)(uint)fVar34;
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar34;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
            }
            unaff_d14 = _fStack0000000000000048 & 0xffffffff;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            *puVar21 = (int)fVar28 & 0xffU | ((int)fVar31 & 0xffU) << 8 |
                       ((int)fVar35 & 0xffU) << 0x10 | (int)fVar29 << 0x18;
            unaff_x26 = in_stack_00000030;
          }
        }
        puVar7 = StringLiteral_4992;
        puVar6 = OVREyeGaze_TypeInfo;
        in_stack_00000050 = in_stack_00000050 + 1;
        if (in_stack_00000050 == in_stack_00000018) {
          if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
             (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
          puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
          if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
          iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
          plVar10 = unaff_x19 + 0xcb;
          if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
            FUN_010afdd4(plVar10,iVar9,
                         *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
          }
          if ((unaff_x19[0xcc] == 0) || (lVar16 = unaff_x19[0xf], lVar16 == 0)) goto LAB_00e443fc;
          plVar1 = unaff_x19 + 0xcc;
          if (*(int *)(lVar16 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar1,*(int *)(lVar16 + 0x10),*(undefined8 *)puVar6);
            lVar16 = unaff_x19[0xf];
            if (lVar16 == 0) goto LAB_00e443fc;
          }
          uVar22 = *(uint *)(lVar16 + 0x10);
          if ((int)uVar22 < 1) goto LAB_00e44358;
          uVar13 = 0;
          lVar16 = 0x20;
          goto LAB_00e442cc;
        }
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                     *(undefined8 *)StringLiteral_4992);
        *in_stack_00000060 = _fStack0000000000000070;
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        iVar9 = FUN_00e4e99c();
        if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          *(undefined1 *)((long)*in_stack_00000060 + 0x165) = 1;
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
            iVar9 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
            *(int *)((long)unaff_x19 + 0x38c) = iVar9;
            if ((unaff_x19[9] == 0) ||
               (FUN_0132138c(unaff_x19[9],iVar9,&stack0x00000070,*(undefined8 *)puVar7),
               _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
            *(undefined4 *)(unaff_x19 + 0x4a) =
                 *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
            if ((unaff_x19[9] == 0) ||
               (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                             *(undefined8 *)puVar7), _fStack0000000000000070 == 0.0))
            goto LAB_00e443fc;
            *(float *)((long)unaff_x19 + 0x254) =
                 *(float *)((long)_fStack0000000000000070 + 0x48) +
                 *(float *)((long)unaff_x19 + 0x50c);
            *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
          }
        }
        else {
          dVar15 = *in_stack_00000060;
          if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x78) == 0)) goto LAB_00e443fc;
          fVar31 = *(float *)(*(long *)((long)dVar15 + 0x78) + 0x18);
          fVar28 = DAT_028aa034;
          if (fVar31 != 0.0) {
            fVar28 = fVar31;
          }
          if ((0.0 < (unaff_s15 - *(float *)((long)dVar15 + 100)) / fVar28) &&
             (*(char *)((long)dVar15 + 0x165) == '\0')) {
            *(undefined1 *)((long)dVar15 + 0x165) = 1;
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
                  lVar16 = unaff_x19[0xca];
                  if (lVar16 == 0) goto LAB_00e443fc;
                  fVar34 = *(float *)(lVar16 + 0x48);
                  fVar28 = *(float *)(unaff_x19 + 0x4b);
                  fVar35 = fVar34 + *(float *)((long)unaff_x19 + 0x50c);
                  fVar31 = *(float *)(unaff_x19 + 0x4a);
                  if (fVar34 <= *(float *)(unaff_x19 + 0x4a)) {
                    fVar31 = fVar34;
                  }
                  *(float *)(unaff_x19 + 0x4a) = fVar31;
                  fVar31 = *(float *)((long)unaff_x19 + 0x254);
                  if (fVar35 <= *(float *)((long)unaff_x19 + 0x254)) {
                    fVar31 = fVar35;
                  }
                  *(float *)((long)unaff_x19 + 0x254) = fVar31;
                  fVar31 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar16,0);
                  fVar31 = fVar31 + *(float *)(unaff_x19 + 0xa1) +
                           *(float *)((long)unaff_x19 + 0x55c);
                  if (fVar28 <= fVar31) {
                    fVar28 = fVar31;
                  }
                  *(float *)(unaff_x19 + 0x4b) = fVar28;
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
          lVar16 = unaff_x19[0x55];
          if (lVar16 != 0) {
            (**(code **)(lVar16 + 0x18))
                      (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
          }
        }
        unaff_x19[0xc6] = 0;
        fVar31 = 0.0;
        *(undefined4 *)(unaff_x19 + 199) = 0;
        fVar28 = 0.0;
        if ((((0.0 < fStack000000000000004c) &&
             (uVar22 = *(uint *)(unaff_x19 + 0x2a), fVar28 = fVar31, uVar22 < 5)) &&
            ((1 << (ulong)(uVar22 & 0x1f) & 0x19U) != 0)) &&
           (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
          if (uVar22 == 4) {
            lVar16 = unaff_x19[0xc];
            if (lVar16 == 0) goto LAB_00e443fc;
            if (0 < *(int *)(lVar16 + 0x18)) {
              iVar9 = 0;
              do {
                FUN_0132138c(lVar16,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
                *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                fVar28 = fStack0000000000000070;
                if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
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
            fVar28 = 0.0;
            while (iVar9 < *(int *)(lVar16 + 0x18)) {
              FUN_0132138c(lVar16,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
              fVar28 = fVar28 + fStack0000000000000070;
              *(float *)((long)unaff_x19 + 0x634) = fVar28;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar28)
              break;
              lVar16 = unaff_x19[0xb];
              iVar9 = iVar9 + 1;
              if (lVar16 == 0) goto LAB_00e443fc;
            }
          }
        }
        *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        fVar31 = *(float *)((long)unaff_x19 + 0x53c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
        fVar34 = *(float *)((long)_fStack0000000000000070 + 0x5c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        fVar29 = *(float *)(unaff_x19 + 0xa8);
        fVar35 = *(float *)(unaff_x19 + 199) + fVar29;
        *(float *)((long)unaff_x19 + 0x634) =
             fVar28 + fVar31 + (fVar34 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
        *(float *)(unaff_x19 + 199) = fVar35;
        puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        unaff_s10 = 1.0;
        uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar32;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(uVar19,0,0);
        if ((uVar11 & 1) != 0) {
          lVar16 = __start_il2cpp();
          if (lVar16 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar16 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar32 = FUN_00e4ee40();
            *(undefined4 *)((long)unaff_x19 + 0x674) = uVar32;
            *(float *)(unaff_x19 + 0xcf) = fVar35;
            *(float *)((long)unaff_x19 + 0x67c) = fVar29;
          }
        }
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar6);
          DAT_03774d76 = '\x01';
        }
        lVar12 = *(long *)puVar6;
        uVar32 = *(undefined4 *)(*(undefined8 **)(lVar12 + 0xb8) + 1);
        *in_stack_00000040 = **(undefined8 **)(lVar12 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar32;
        lVar16 = (*(long **)(lVar12 + 0xb8))[1];
        unaff_x19[0xc0] = **(long **)(lVar12 + 0xb8);
        *(int *)(unaff_x19 + 0xc1) = (int)lVar16;
        uVar32 = *(undefined4 *)(*(undefined8 **)(lVar12 + 0xb8) + 1);
        in_stack_00000040[3] = **(undefined8 **)(lVar12 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x614) = uVar32;
        lVar16 = (*(long **)(lVar12 + 0xb8))[1];
        unaff_x19[0xc3] = **(long **)(lVar12 + 0xb8);
        *(int *)(unaff_x19 + 0xc4) = (int)lVar16;
        uVar32 = *(undefined4 *)(*(undefined8 **)(lVar12 + 0xb8) + 1);
        in_stack_00000040[6] = **(undefined8 **)(lVar12 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar32;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(uVar19,0,0);
        if ((uVar11 & 1) != 0) {
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
            lVar16 = __start_il2cpp();
            if (lVar16 == 0) goto LAB_00e443fc;
            if ((*(char *)(lVar16 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0'))
            {
              lVar16 = unaff_x19[0xca];
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              if ((lVar16 == 0) || (lVar12 = *(long *)(lVar16 + 0xc0), lVar12 == 0))
              goto LAB_00e443fc;
              uVar11 = unaff_d14;
              if (*(char *)(lVar12 + 0x18) != '\0') {
                fVar35 = *(float *)(lVar16 + 100);
                uVar11 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar35);
              }
              if (*(char *)(lVar12 + 0x19) != '\0') {
                uVar32 = FUN_00e4e9f4(uVar11);
                lVar16 = unaff_x19[0xca];
                *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar32;
                *(float *)(unaff_x19 + 0xbf) = fVar35;
                *(float *)((long)unaff_x19 + 0x5fc) = fVar29;
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x28) != '\0') {
                fVar28 = (float)FUN_00e4e9f4(uVar11);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar35;
                fVar31 = fVar29 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc0] =
                     CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar31;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar28 = (float)FUN_00e4e9f4(uVar11);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[3] =
                     CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar28 + (float)in_stack_00000040[3]);
                *(float *)((long)unaff_x19 + 0x614) = fVar29 + *(float *)((long)unaff_x19 + 0x614);
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar28 = (float)FUN_00e4e9f4(uVar11);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                fVar35 = fVar29 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc3] =
                     CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar35;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar28 = (float)FUN_00e4e9f4(uVar11);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar35;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[6] =
                     CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar28 + (float)in_stack_00000040[6]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar29 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x50) != '\0') {
                FUN_00e5eda8(lVar16,0);
                fVar28 = (float)FUN_00e4eb50();
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar35;
                fVar31 = fVar29 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc0] =
                     CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar31;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b838(lVar16,0);
                fVar28 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[3] =
                     CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar28 + (float)in_stack_00000040[3]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar29 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5eea4(lVar16,0);
                fVar28 = (float)FUN_00e4eb50();
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                fVar35 = fVar29 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc3] =
                     CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar35;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b7d8(lVar16,0);
                fVar28 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar35;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[6] =
                     CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar28 + (float)in_stack_00000040[6]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar29 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              lVar12 = *(long *)(lVar16 + 0xc0);
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar12 + 0x60) != '\0') {
                uVar24 = *(undefined8 *)(lVar12 + 0x68);
                uVar19 = FUN_00e5eda8(lVar16,0);
                fVar28 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar35;
                fVar31 = fVar29 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc0] =
                     CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar31;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5b838(lVar16,0);
                fVar28 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[3] =
                     CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar28 + (float)in_stack_00000040[3]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar29 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5eea4(lVar16,0);
                fVar28 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar31;
                fVar34 = fVar29 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                unaff_x19[0xc3] =
                     CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar34;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5b7d8(lVar16,0);
                fVar28 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar34;
                *(float *)((long)unaff_x19 + 0x644) = fVar29;
                in_stack_00000040[6] =
                     CONCAT44(fVar34 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar28 + (float)in_stack_00000040[6]);
                *(float *)((long)unaff_x19 + 0x62c) = fVar29 + *(float *)((long)unaff_x19 + 0x62c);
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
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0x80);
            in_stack_00000040[0x1e] =
                 CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                          (float)unaff_x19[0x24] * (float)uVar19);
          }
          lVar16 = unaff_x19[0x5e];
          *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5eda8(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          fVar31 = *(float *)((long)unaff_x19 + 0x674);
          uVar11 = (ulong)(int)in_stack_00000068;
          *(float *)(lVar16 + uVar11 * 0xc + 0x20) =
               fVar28 + fVar31 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          fVar28 = *(float *)((long)unaff_x19 + 0x604);
          *(float *)(lVar16 + uVar11 * 0xc + 0x24) =
               fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar28 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(float *)(lVar16 + uVar11 * 0xc + 0x28) =
               fVar28 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5b838(*in_stack_00000060,0);
          uVar13 = uVar11 | 1;
          uVar22 = (uint)uVar13;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar31 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar13 * 0xc + 0x20) =
               fVar28 + fVar31 + *(float *)((long)unaff_x19 + 0x60c) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar28 = *(float *)(unaff_x19 + 0xc2);
          *(float *)(lVar16 + uVar13 * 0xc + 0x24) =
               fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar28 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          *(float *)(lVar16 + uVar13 * 0xc + 0x28) =
               fVar28 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5eea4(*in_stack_00000060,0);
          uVar25 = uVar11 | 2;
          uVar23 = (uint)uVar25;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar31 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar25 * 0xc + 0x20) =
               fVar28 + fVar31 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar28 = *(float *)((long)unaff_x19 + 0x61c);
          *(float *)(lVar16 + uVar25 * 0xc + 0x24) =
               fVar31 + *(float *)(unaff_x19 + 0xcf) + fVar28 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          *(float *)(lVar16 + uVar25 * 0xc + 0x28) =
               fVar28 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
          uVar27 = uVar11 | 3;
          uVar26 = (uint)uVar27;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          fVar31 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar27 * 0xc + 0x20) =
               fVar28 + fVar31 + *(float *)((long)unaff_x19 + 0x624) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          param_4 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
          *(float *)(lVar16 + uVar27 * 0xc + 0x24) =
               fVar31 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
               *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
               *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*in_stack_00000060,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          fVar28 = *(float *)((long)unaff_x19 + 0x62c);
          *(float *)(lVar16 + uVar27 * 0xc + 0x28) =
               (float)param_4 + *(float *)((long)unaff_x19 + 0x67c) + fVar28 +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0xca];
          if (lVar16 == 0) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          if (*(char *)(lVar16 + 0x108) == '\0') {
            uVar32 = FUN_0272b9dc(lVar16 + 0x10,0);
            if (lVar12 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar12 = lVar12 + uVar11 * 8;
            *(undefined4 *)(lVar12 + 0x20) = uVar32;
            *(float *)(lVar12 + 0x24) = fVar28;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar16 = lVar16 + uVar13 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + uVar25 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + uVar27 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar32 = FUN_00e5ecc0(*in_stack_00000060,0);
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            FUN_00e5ecc0(unaff_x19[0xca],0);
            *(float *)((long)unaff_x19 + 0x6cc) = fVar28;
            unaff_x26 = in_stack_00000030;
          }
          else {
            if ((*(long *)(lVar16 + 0x100) == 0) ||
               (uVar32 = FUN_00e5dd14(unaff_d14,*(long *)(lVar16 + 0x100),
                                      *(undefined4 *)(lVar16 + 0x10c),0), lVar12 == 0))
            goto LAB_00e443fc;
            if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar12 = lVar12 + uVar11 * 8;
            *(undefined4 *)(lVar12 + 0x20) = uVar32;
            *(float *)(lVar12 + 0x24) = fVar28;
            dVar15 = *in_stack_00000060;
            if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar15 + 0x100),
                                  *(undefined4 *)((long)dVar15 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar16 = lVar16 + uVar13 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            dVar15 = *in_stack_00000060;
            if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar15 + 0x100),
                                  *(undefined4 *)((long)dVar15 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + uVar25 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            dVar15 = *in_stack_00000060;
            if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar32 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar15 + 0x100),
                                        *(undefined4 *)((long)dVar15 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + uVar27 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar32;
            *(float *)(lVar16 + 0x24) = fVar28;
            dVar15 = *in_stack_00000060;
            if ((dVar15 == 0.0) || (*(long *)((long)dVar15 + 0x100) == 0)) goto LAB_00e443fc;
            uVar32 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar15 + 0x100),
                                  *(undefined4 *)((long)dVar15 + 0x10c),0);
            lVar16 = unaff_x19[0xca];
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar32;
            *(float *)((long)unaff_x19 + 0x6cc) = fVar28;
            if ((lVar16 == 0) || (lVar12 = *(long *)(lVar16 + 0x100), lVar12 == 0))
            goto LAB_00e443fc;
            unaff_x26 = in_stack_00000030;
            if (((1 < *(int *)(lVar12 + 0x28)) && (0.0 < *(float *)(lVar12 + 0x34))) &&
               (*(int *)(lVar16 + 0x10c) < 0)) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
          }
        }
        else {
          dVar15 = *in_stack_00000060;
          if (dVar15 == 0.0) goto LAB_00e443fc;
          param_4 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
          if ((*(float *)((long)dVar15 + 0x48) + *(float *)((long)dVar15 + 0x84) +
              *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
              DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
          lVar16 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774d76 = '\x01';
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          uVar11 = (ulong)(int)in_stack_00000068;
          lVar16 = lVar16 + uVar11 * 0xc;
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar32;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar11 | 1)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar11 | 1) * 0xc;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar32;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar11 | 2)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar11 | 2) * 0xc;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar32;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar11 | 3)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar11 | 3) * 0xc;
          uVar32 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar32;
        }
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(uVar19,0,0);
        if ((uVar11 & 1) == 0) {
          lVar16 = unaff_x19[0x10];
        }
        else {
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0xf8), lVar16 == 0)) goto LAB_00e443fc;
          lVar16 = *(long *)(lVar16 + 0x18);
        }
        if (((lVar16 == 0) || (lVar16 = FUN_0272bcf4(lVar16,0), lVar16 == 0)) ||
           (plVar10 = (long *)FUN_0267dac8(lVar16,0), plVar10 == (long *)0x0)) goto LAB_00e443fc;
        iVar9 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        *(float *)(unaff_x19 + 0xda) = (float)iVar9;
        iVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
        *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar9;
        *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
        *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
        puVar6 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)CONCAT44((float)iVar9,(int)unaff_x19[0xda]);
        in_stack_00000078 = unaff_x19[0xd9];
        FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                     *(undefined8 *)
                      UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        unaff_x22 = (ulong)(int)in_stack_00000068;
        unaff_x28 = unaff_x22 | 1;
        FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        unaff_x29 = unaff_x22 | 2;
        FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        unaff_x21 = unaff_x22 | 3;
        FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,*(undefined8 *)puVar6);
        unaff_x25 = (long *)StringLiteral_9119;
        lVar16 = unaff_x19[0x60];
        if (lVar16 == 0) goto LAB_00e443fc;
        if ((*(uint *)(lVar16 + 0x18) <= in_stack_00000068) ||
           (uVar22 = (uint)unaff_x21, *(uint *)(lVar16 + 0x18) <= uVar22)) goto LAB_00e44400;
        lVar12 = unaff_x19[0xca];
        fVar28 = unaff_s8;
        if (*(float *)(lVar16 + 0x20 + unaff_x22 * 8) != *(float *)(lVar16 + 0x20 + unaff_x21 * 8))
        {
          fVar28 = 1.0;
        }
        *(float *)(unaff_x19 + 0xda) = fVar28;
        if (lVar12 == 0) goto LAB_00e443fc;
        cVar5 = *(char *)(lVar12 + 0x108);
        fVar28 = 1.0;
        if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar12 + 0x138)) {
          fVar28 = -1.0;
        }
        *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar12 + 0x84) * fVar28;
        if (cVar5 == '\0') {
          iVar36 = *(int *)(lVar12 + 0x160);
          iVar9 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          param_4 = 0x3e800000;
          *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar9 * 0.25);
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
          iVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          fVar31 = (float)iVar36;
          fVar28 = (float)iVar9;
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        }
        else {
          if (*(long *)(lVar12 + 0x100) == 0) goto LAB_00e443fc;
          fVar28 = (float)FUN_00e5df18(*(long *)(lVar12 + 0x100),0);
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
          if (((*in_stack_00000060 == 0.0) ||
              (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) ||
             (plVar10 = *(long **)(lVar16 + 0x18), plVar10 == (long *)0x0)) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) goto LAB_00e443fc;
          fVar31 = 0.25;
          *(float *)(unaff_x19 + 0xdb) = fVar28 / (*(float *)(lVar16 + 0x40) * (float)iVar9 * 0.25);
          FUN_00e5df18(lVar16,0);
          if ((unaff_x19[0xca] == 0) ||
             ((lVar16 = *(long *)(unaff_x19[0xca] + 0x100), lVar16 == 0 ||
              (plVar10 = *(long **)(lVar16 + 0x18), plVar10 == (long *)0x0)))) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) goto LAB_00e443fc;
          fVar28 = *(float *)(lVar16 + 0x44) * (float)iVar9;
        }
        fVar34 = 0.25;
        fVar31 = fVar31 / (fVar28 * 0.25);
        *(float *)((long)unaff_x19 + 0x6dc) = fVar31;
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000078 = CONCAT44(fVar31,(int)unaff_x19[0xdb]);
        FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar18);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_02681b9c(uVar19,0,0);
        fVar28 = (float)param_4;
        uVar26 = (uint)unaff_x28;
        uVar23 = (uint)unaff_x29;
        if ((uVar11 & 1) != 0) {
          if (in_stack_00000050 == in_stack_00000010) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            fVar31 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
            fVar28 = fVar28 - pfVar14[2];
            param_4 = (ulong)(uint)fVar28;
            if (fVar28 * fVar28 +
                (fVar31 - *pfVar14) * (fVar31 - *pfVar14) +
                (fVar34 - pfVar14[1]) * (fVar34 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
          }
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar16 == 0)) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)(lVar16 + 0x38);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              );
            DAT_03774d77 = '\x01';
          }
          fVar28 = (float)uVar19 -
                   (float)**(undefined8 **)
                            (*(long *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                            + 0xb8);
          fVar31 = (float)((ulong)uVar19 >> 0x20) -
                   (float)((ulong)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8) >> 0x20);
          if (DAT_028aa020 <= fVar28 * fVar28 + fVar31 * fVar31) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          dVar15 = *in_stack_00000060;
          if ((dVar15 == 0.0) || (lVar16 = *(long *)((long)dVar15 + 0xb0), lVar16 == 0))
          goto LAB_00e443fc;
          fVar34 = (float)unaff_d14 * *(float *)(lVar16 + 0x38);
          *(float *)(unaff_x19 + 0xc9) = fVar34;
          fVar31 = (float)unaff_d14 * *(float *)(lVar16 + 0x3c);
          *(float *)((long)unaff_x19 + 0x64c) = fVar31;
          fVar28 = unaff_s10;
          if (*(char *)(lVar16 + 0x25) != '\0') {
            fVar28 = 1.0 / *(float *)((long)dVar15 + 0x84);
          }
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar12 = lVar16 + unaff_x22 * 0xc;
          fVar35 = *(float *)(lVar12 + 0x20);
          uVar19 = *(undefined8 *)(lVar12 + 0x24);
          *(float *)(unaff_x19 + 0xcd) = fVar35;
          in_stack_00000040[0xf] = uVar19;
          *(float *)(unaff_x19 + 0xd0) = fVar35;
          fVar29 = (float)uVar19;
          *(float *)((long)unaff_x19 + 0x684) = fVar29;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar12 = lVar16 + unaff_x28 * 0xc;
          uVar32 = *(undefined4 *)(lVar12 + 0x20);
          uVar19 = *(undefined8 *)(lVar12 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd2) = uVar32;
          *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar12 = lVar16 + unaff_x29 * 0xc;
          uVar32 = *(undefined4 *)(lVar12 + 0x20);
          uVar19 = *(undefined8 *)(lVar12 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar32;
          *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar16 = lVar16 + unaff_x21 * 0xc;
          uVar32 = *(undefined4 *)(lVar16 + 0x20);
          uVar19 = *(undefined8 *)(lVar16 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar32;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd6) = uVar32;
          *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
          lVar16 = *(long *)((long)dVar15 + 0xb0);
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(char *)(lVar16 + 0x24) == '\0') {
            lVar12 = *in_stack_00000028;
            if (lVar12 == 0) goto LAB_00e443fc;
            uVar4 = *(uint *)(lVar12 + 0x18);
            if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
            lVar20 = lVar12 + unaff_x22 * 8;
            *(float *)(lVar20 + 0x20) = (fVar34 + fVar28 * fVar35) - *(float *)(lVar16 + 0x30);
            *(float *)(lVar20 + 0x24) = (fVar31 + fVar28 * fVar29) - *(float *)(lVar16 + 0x34);
            if (((uVar4 <= uVar26) ||
                (*(ulong *)(lVar12 + unaff_x28 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar28 +
                               (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                               (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xd2] * fVar28 + (float)unaff_x19[0xc9]) -
                               (float)*(undefined8 *)(lVar16 + 0x30)), uVar4 <= uVar23)) ||
               (*(ulong *)(lVar12 + unaff_x29 * 8 + 0x20) =
                     CONCAT44((fVar28 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                              (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                              (fVar28 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                              (float)*(undefined8 *)(lVar16 + 0x30)), uVar4 <= uVar22))
            goto LAB_00e44400;
            param_4 = unaff_x19[0xc9];
            *(ulong *)(lVar12 + unaff_x21 * 8 + 0x20) =
                 CONCAT44((fVar28 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                          (float)(param_4 >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                          (fVar28 * (float)unaff_x19[0xd6] + (float)param_4) -
                          (float)*(undefined8 *)(lVar16 + 0x30));
          }
          else {
            fVar30 = *(float *)((long)dVar15 + 0x44);
            *(float *)(unaff_x19 + 0xd8) = fVar30;
            fVar3 = *(float *)((long)dVar15 + 0x48);
            lVar12 = unaff_x19[0x61];
            *(float *)((long)unaff_x19 + 0x6c4) = fVar3;
            if (lVar12 == 0) goto LAB_00e443fc;
            uVar4 = *(uint *)(lVar12 + 0x18);
            if (uVar4 <= in_stack_00000068) goto LAB_00e44400;
            lVar20 = lVar12 + unaff_x22 * 8;
            *(float *)(lVar20 + 0x20) =
                 (fVar34 + fVar28 * (fVar35 - fVar30)) - *(float *)(lVar16 + 0x30);
            *(float *)(lVar20 + 0x24) =
                 (fVar31 + fVar28 * (fVar29 - fVar3)) - *(float *)(lVar16 + 0x34);
            if (((uVar4 <= uVar26) ||
                (*(ulong *)(lVar12 + unaff_x28 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                               ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                               (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar28) -
                               (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xc9] +
                               ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar28) -
                               (float)*(undefined8 *)(lVar16 + 0x30)), uVar4 <= uVar23)) ||
               (*(ulong *)(lVar12 + unaff_x29 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar28 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar28 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                              (float)*(undefined8 *)(lVar16 + 0x30)), uVar4 <= uVar22))
            goto LAB_00e44400;
            param_4 = unaff_x19[0xd8];
            *(ulong *)(lVar12 + unaff_x21 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar28 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                   (float)(param_4 >> 0x20))) -
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] +
                          fVar28 * ((float)unaff_x19[0xd6] - (float)param_4)) -
                          (float)*(undefined8 *)(lVar16 + 0x30));
          }
        }
LAB_00e3dbd8:
        unaff_x24 = 0xc;
        dVar15 = *in_stack_00000060;
        if (dVar15 == 0.0) goto LAB_00e443fc;
        unaff_w23 = 255.0;
      } while (*(char *)((long)dVar15 + 0x108) == '\0');
      if (*(long *)((long)dVar15 + 0x100) == 0) goto LAB_00e443fc;
    } while (*(char *)(*(long *)((long)dVar15 + 0x100) + 0x20) != '\0');
    lVar16 = *in_stack_00000020;
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    lVar12 = *in_stack_00000028;
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    *(undefined8 *)(lVar12 + unaff_x22 * 8 + 0x20) = *(undefined8 *)(lVar16 + unaff_x22 * 8 + 0x20);
    lVar16 = *in_stack_00000020;
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
    lVar12 = *in_stack_00000028;
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar26) goto LAB_00e44400;
    *(undefined8 *)(lVar12 + (long)(int)uVar26 * 8 + 0x20) =
         *(undefined8 *)(lVar16 + (long)(int)uVar26 * 8 + 0x20);
    lVar16 = *in_stack_00000020;
    if (lVar16 == 0) break;
    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
    lVar12 = *in_stack_00000028;
    if (lVar12 == 0) break;
    if (*(uint *)(lVar12 + 0x18) <= uVar23) goto LAB_00e44400;
    *(undefined8 *)(lVar12 + (long)(int)uVar23 * 8 + 0x20) =
         *(undefined8 *)(lVar16 + (long)(int)uVar23 * 8 + 0x20);
    param_1 = *in_stack_00000020;
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= uVar22) goto LAB_00e44400;
    in_x9 = *in_stack_00000028;
    if (in_x9 == 0) break;
  }
  goto LAB_00e443fc;
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar13 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar12 = unaff_x19[0xcb];
    uVar32 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar12 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar12 + 0x18) <= uVar13) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar2 = (undefined4 *)(lVar12 + lVar16);
    *puVar2 = uVar32;
    puVar2[1] = (int)uVar11;
    puVar2[2] = (int)param_4;
    lVar12 = unaff_x19[0xca];
    if ((lVar12 == 0) || (lVar20 = unaff_x19[0xcc], lVar20 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar13) goto LAB_00e44400;
    uVar32 = *(undefined4 *)(lVar12 + 0x4c);
    uVar13 = uVar13 + 1;
    puVar18 = (undefined8 *)(lVar20 + lVar16);
    lVar16 = lVar16 + 0xc;
    *puVar18 = *(undefined8 *)(lVar12 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar32;
  } while (uVar22 != uVar13);
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


