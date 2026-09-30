/*
FUNCTION_NAME: FullSerializer.Internal.fsNullableConverter$$CanProcess
ENTRY_POINT: 00e3db70
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

void FullSerializer_Internal_fsNullableConverter__CanProcess
               (long param_1,float param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 *puVar2;
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
  double dVar13;
  long lVar14;
  long in_x9;
  long lVar15;
  uint in_w10;
  long lVar16;
  long in_x11;
  uint uVar17;
  long *unaff_x19;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  ulong unaff_x21;
  undefined8 uVar23;
  ulong uVar24;
  ulong unaff_x22;
  uint uVar25;
  ulong uVar26;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  ulong unaff_x28;
  ulong unaff_x29;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  float fVar33;
  ulong uVar34;
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
  
  while ((*(ulong *)(in_x11 + 0x20) =
               CONCAT44(((float)((ulong)param_3 >> 0x20) * param_2 + (float)((ulong)param_4 >> 0x20)
                        ) - (float)((ulong)param_5 >> 0x20),
                        ((float)param_3 * param_2 + (float)param_4) - (float)param_5),
         (uint)unaff_x29 < in_w10 &&
         (*(ulong *)(in_x9 + unaff_x29 * 8 + 0x20) =
               CONCAT44((param_2 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                        (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                        (param_2 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                        (float)*(undefined8 *)(param_1 + 0x30)), (uint)unaff_x21 < in_w10))) {
    uVar34 = unaff_x19[0xc9];
    *(ulong *)(in_x9 + unaff_x21 * 8 + 0x20) =
         CONCAT44((param_2 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(uVar34 >> 0x20)) -
                  (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                  (param_2 * (float)unaff_x19[0xd6] + (float)uVar34) -
                  (float)*(undefined8 *)(param_1 + 0x30));
LAB_00e3dbd8:
    do {
      dVar13 = *in_stack_00000060;
      if (dVar13 == 0.0) goto LAB_00e443fc;
      uVar17 = (uint)unaff_x28;
      uVar25 = (uint)unaff_x29;
      uVar22 = (uint)unaff_x21;
      if (*(char *)((long)dVar13 + 0x108) != '\0') {
        if (*(long *)((long)dVar13 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar13 + 0x100) + 0x20) == '\0') {
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + unaff_x22 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + unaff_x22 * 8 + 0x20);
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar17 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar17 * 8 + 0x20);
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + (long)(int)uVar25 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + (long)(int)uVar25 * 8 + 0x20);
          lVar14 = *unaff_x27;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar15 = *in_stack_00000028;
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          *(undefined8 *)(lVar15 + unaff_x21 * 8 + 0x20) =
               *(undefined8 *)(lVar14 + unaff_x21 * 8 + 0x20);
          dVar13 = *in_stack_00000060;
          if (dVar13 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar32 = DAT_028aa048;
      if (*(char *)((long)dVar13 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar19 = *(undefined8 *)((long)dVar13 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar19,0,0);
        dVar13 = *in_stack_00000060;
        if (dVar13 == 0.0) goto LAB_00e443fc;
        if ((uVar10 & 1) == 0) {
          uVar19 = *(undefined8 *)((long)dVar13 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_02681b9c(uVar19,0,0);
          dVar13 = DAT_028aa048;
          if ((uVar10 & 1) == 0) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar34 = FUN_02681b9c(uVar19,0,0);
            lVar14 = *unaff_x26;
            if ((uVar34 & 1) == 0) {
              fVar30 = *(float *)((long)unaff_x19 + 0x8c);
              fVar33 = *(float *)(unaff_x19 + 0x12);
              fVar28 = *(float *)((long)unaff_x19 + 0x94);
              fVar35 = *(float *)(unaff_x19 + 0x13);
              fVar27 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar30 < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar30 = fVar33;
              if (1.0 < fVar33) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar33 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fd48;
                }
                fVar33 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = fVar30;
                }
              }
              else {
                fVar33 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar28;
              if (1.0 < fVar28) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar28 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar14 + unaff_x22 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              fVar30 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar35 = *(float *)((long)unaff_x19 + 0x94);
              fVar33 = *(float *)(unaff_x19 + 0x13);
              fVar27 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar30 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40610;
                }
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar30;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar33;
              if (1.0 < fVar33) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar33 < 0.0) {
                fVar35 = unaff_s8;
              }
              dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              fVar30 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar35 = *(float *)((long)unaff_x19 + 0x94);
              fVar33 = *(float *)(unaff_x19 + 0x13);
              fVar27 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar30 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40e20;
                }
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar30;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar33;
              if (1.0 < fVar33) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar33 < 0.0) {
                fVar35 = unaff_s8;
              }
              dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              fVar27 = *(float *)((long)unaff_x19 + 0x8c);
              fVar30 = *(float *)(unaff_x19 + 0x12);
              lVar14 = unaff_x19[0x5f];
              fVar35 = *(float *)((long)unaff_x19 + 0x94);
              fVar33 = *(float *)(unaff_x19 + 0x13);
            }
            else {
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar30 = *(float *)(lVar15 + 0x18);
              fVar33 = *(float *)(lVar15 + 0x1c);
              fVar28 = *(float *)(lVar15 + 0x20);
              fVar35 = *(float *)(lVar15 + 0x24);
              fVar27 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar30 < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar30 = fVar33;
              if (1.0 < fVar33) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar33 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fcc4;
                }
                fVar33 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = fVar30;
                }
              }
              else {
                fVar33 = (float)(int)(fVar30 + -0.5);
              }
              fVar30 = fVar28;
              if (1.0 < fVar28) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar28 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar28 = fVar35;
              if (1.0 < fVar35) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar35 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar28 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar28 + -0.5);
              }
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar14 + unaff_x22 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar30 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x26;
              fVar35 = *(float *)(lVar14 + 0x20);
              fVar33 = *(float *)(lVar14 + 0x24);
              fVar27 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar30 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4057c;
                }
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar30;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar33;
              if (1.0 < fVar33) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar33 < 0.0) {
                fVar35 = unaff_s8;
              }
              dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar17 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0))
              goto LAB_00e443fc;
              fVar30 = *(float *)(lVar14 + 0x1c);
              lVar15 = *unaff_x26;
              fVar35 = *(float *)(lVar14 + 0x20);
              fVar33 = *(float *)(lVar14 + 0x24);
              fVar27 = *(float *)(lVar14 + 0x18) * 255.0;
              if (*(float *)(lVar14 + 0x18) < 0.0) {
                fVar27 = unaff_s8;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar28 = fVar30;
              if (1.0 < fVar30) {
                fVar28 = 1.0;
              }
              fVar28 = fVar28 * 255.0;
              if (fVar30 < 0.0) {
                fVar28 = unaff_s8;
              }
              dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
              if (0.0 <= fVar28) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40d8c;
                }
                fVar28 = (float)(int)(fVar28 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar30;
                }
              }
              else {
                fVar28 = (float)(int)(fVar28 + -0.5);
              }
              fVar30 = fVar35;
              if (1.0 < fVar35) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar35 < 0.0) {
                fVar30 = unaff_s8;
              }
              dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar13 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar35 = fVar33;
              if (1.0 < fVar33) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar33 < 0.0) {
                fVar35 = unaff_s8;
              }
              dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar27 & 0xffU | ((int)fVar28 & 0xffU) << 8 | ((int)fVar30 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              if ((*in_stack_00000060 == 0.0) ||
                 (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0))
              goto LAB_00e443fc;
              fVar27 = *(float *)(lVar15 + 0x18);
              fVar30 = *(float *)(lVar15 + 0x1c);
              lVar14 = *unaff_x26;
              fVar35 = *(float *)(lVar15 + 0x20);
              fVar33 = *(float *)(lVar15 + 0x24);
            }
            fVar28 = fVar27 * 255.0;
            if (fVar27 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar28 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar28 + -0.5);
            }
            fVar28 = fVar30;
            if (1.0 < fVar30) {
              fVar28 = 1.0;
            }
            fVar28 = fVar28 * 255.0;
            if (fVar30 < 0.0) {
              fVar28 = unaff_s8;
            }
            dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
            if (0.0 <= fVar28) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e412dc;
              }
              fVar28 = (float)(int)(fVar28 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = unaff_s8;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            uVar34 = 0x3f800000;
            fVar35 = fVar33;
            if (1.0 < fVar33) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar33 < 0.0) {
              fVar35 = unaff_s8;
            }
            dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar35 + -0.5);
            }
            if (lVar14 != 0) {
              if (uVar22 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar14 + unaff_x21 * 4 + 0x20) =
                     (int)fVar27 & 0xffU | ((int)fVar28 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
                goto LAB_00e43400;
              }
              goto LAB_00e44400;
            }
            goto LAB_00e443fc;
          }
          lVar14 = *unaff_x26;
          dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar27 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + unaff_s10;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(uint *)(lVar14 + unaff_x22 * 4 + 0x20) =
               (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar27 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) =
               (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar27 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar27 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar32 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar32 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar13 = modf(dVar13,(double *)&stack0x00000070);
          if (dVar13 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar14 + unaff_x21 * 4 + 0x20) =
               (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_02681b9c(uVar19,0,0);
          if ((uVar10 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + unaff_x22 * 4 + 0x20);
          uVar3 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar35 = *(float *)(lVar14 + 0x20);
          fVar33 = *(float *)(lVar14 + 0x24);
          fVar27 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar30 = (float)(int)(fVar27 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar27 = -1.0;
LAB_00e3ede4:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar27;
            }
          }
          else {
            fVar30 = (float)(int)(fVar27 + -0.5);
          }
          fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
          fVar27 = fVar28 * 255.0;
          if (fVar28 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = fVar33;
          if (1.0 < fVar33) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar33 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar13 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e40174;
            }
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = -1.0;
LAB_00e40174:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
          uVar3 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar35 = *(float *)(lVar14 + 0x20);
          fVar33 = *(float *)(lVar14 + 0x24);
          fVar27 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = 1.0;
              goto LAB_00e404dc;
            }
            fVar30 = (float)(int)(fVar27 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar27 = -1.0;
LAB_00e404dc:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar27;
            }
          }
          else {
            fVar30 = (float)(int)(fVar27 + -0.5);
          }
          fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
          fVar27 = fVar28 * 255.0;
          if (fVar28 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
          fVar28 = fVar28 * 255.0;
          if (fVar35 < 0.0) {
            fVar28 = unaff_s8;
          }
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = fVar33;
          if (1.0 < fVar33) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar33 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar13 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = -1.0;
LAB_00e40a4c:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar25 * 4;
        }
        else {
          lVar14 = *(long *)((long)dVar13 + 0xa8);
          if (lVar14 == 0) goto LAB_00e443fc;
          fVar27 = *(float *)(lVar14 + 0x24);
          if (fVar27 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          unaff_x25 = (long *)StringLiteral_9119;
          cVar4 = *(char *)(lVar14 + 0x2c);
          lVar20 = *unaff_x26;
          lVar15 = *(long *)(lVar14 + 0x18);
          fVar27 = (float)unaff_d14 * fVar27;
          if (*(int *)(lVar14 + 0x28) == 1) {
            if (cVar4 == '\0') {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar33 = *(float *)(lVar14 + 0x20);
              fVar35 = *(float *)((long)dVar13 + 0x84);
              fVar27 = fVar27 + (*(float *)((long)dVar13 + 0x48) * fVar33) / fVar35;
              fVar27 = fVar27 - (float)(int)fVar27;
              fVar30 = fVar27;
              if (unaff_s10 < fVar27) {
                fVar30 = unaff_s10;
              }
              fVar28 = fVar30;
              if (fVar27 < 0.0) {
                fVar28 = 0.0;
              }
              fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
              fVar27 = fVar28;
              if (unaff_s10 < fVar28) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar28 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3eeac;
                }
                fVar28 = (float)(int)(fVar27 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar27;
                }
              }
              else {
                fVar28 = (float)(int)(fVar27 + -0.5);
              }
              fVar27 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar30 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e41534;
                }
                fVar30 = (float)(int)(fVar27 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar27;
                }
              }
              else {
                fVar30 = (float)(int)(fVar27 + -0.5);
              }
              fVar27 = fVar33;
              if (unaff_s10 < fVar33) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar33 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar33 = fVar35;
              if (1.0 < fVar35) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar35 < 0.0) {
                fVar33 = 0.0;
              }
              dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                   (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              dVar13 = *in_stack_00000060;
              if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar33 = *(float *)((long)dVar13 + 0x48);
              fVar35 = *(float *)((long)dVar13 + 0x84);
              lVar20 = *unaff_x26;
              fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar27 = fVar30;
              if (1.0 < fVar30) {
                fVar27 = 1.0;
              }
            }
            else {
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar33 = *(float *)((long)dVar13 + 0x84);
              fVar35 = *(float *)(lVar14 + 0x20);
              fVar27 = fVar27 + ((*(float *)((long)dVar13 + 0x48) + fVar33) * fVar35) / fVar33;
              fVar27 = fVar27 - (float)(int)fVar27;
              fVar30 = fVar27;
              if (unaff_s10 < fVar27) {
                fVar30 = unaff_s10;
              }
              fVar28 = fVar30;
              if (fVar27 < 0.0) {
                fVar28 = 0.0;
              }
              fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
              fVar27 = fVar28;
              if (unaff_s10 < fVar28) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar28 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3ed6c;
                }
                fVar28 = (float)(int)(fVar27 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar28 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar28 = fVar27;
                }
              }
              else {
                fVar28 = (float)(int)(fVar27 + -0.5);
              }
              fVar27 = fVar30;
              if (unaff_s10 < fVar30) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar30 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                  goto LAB_00e3f2ec;
                }
                fVar30 = (float)(int)(fVar27 + 0.5);
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar27;
                }
              }
              else {
                fVar30 = (float)(int)(fVar27 + -0.5);
              }
              fVar27 = fVar33;
              if (unaff_s10 < fVar33) {
                fVar27 = unaff_s10;
              }
              fVar27 = fVar27 * 255.0;
              if (fVar33 < 0.0) {
                fVar27 = 0.0;
              }
              dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
              if (0.0 <= fVar27) {
                if (dVar13 == 0.5) {
                  fVar27 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar27 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar27 = (float)(int)(fVar27 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + -0.5);
              }
              fVar33 = fVar35;
              if (1.0 < fVar35) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar35 < 0.0) {
                fVar33 = 0.0;
              }
              dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar13 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar13 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              if (lVar20 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                   (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
              dVar13 = *in_stack_00000060;
              if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
                 (lVar15 = *(long *)(lVar14 + 0x18), lVar15 == 0)) goto LAB_00e443fc;
              fVar33 = *(float *)((long)dVar13 + 0x84);
              fVar35 = *(float *)(lVar14 + 0x20);
              lVar20 = *unaff_x26;
              fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                       ((*(float *)((long)dVar13 + 0x48) + fVar33) * fVar35) / fVar33;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar27 = fVar30;
              if (1.0 < fVar30) {
                fVar27 = 1.0;
              }
            }
            fVar28 = fVar27;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
            fVar30 = fVar28;
            if (1.0 < fVar28) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar28 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar27 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar27;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar27 = fVar33;
            if (1.0 < fVar33) {
              fVar27 = 1.0;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar33 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + -0.5);
            }
            fVar33 = fVar35;
            if (1.0 < fVar35) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar35 < 0.0) {
              fVar33 = 0.0;
            }
            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar17) goto LAB_00e44400;
            *(uint *)(lVar20 + (long)(int)uVar17 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar13 = *in_stack_00000060;
            if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar33 = *(float *)((long)dVar13 + 0x48);
            fVar35 = *(float *)((long)dVar13 + 0x84);
            lVar15 = *unaff_x26;
            fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar27 = fVar30;
            if (1.0 < fVar30) {
              fVar27 = 1.0;
            }
            fVar28 = fVar27;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0);
            fVar30 = fVar28;
            if (1.0 < fVar28) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar28 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar27 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar27;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar27 = fVar33;
            if (1.0 < fVar33) {
              fVar27 = 1.0;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar33 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + -0.5);
            }
            fVar33 = fVar35;
            if (1.0 < fVar35) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar35 < 0.0) {
              fVar33 = 0.0;
            }
            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar13 = *in_stack_00000060;
            if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
               (*(long *)(lVar14 + 0x18) == 0)) goto LAB_00e443fc;
            fVar33 = *(float *)((long)dVar13 + 0x48);
            fVar35 = *(float *)((long)dVar13 + 0x84);
            lVar15 = *unaff_x26;
            fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar27 = fVar30;
            if (1.0 < fVar30) {
              fVar27 = 1.0;
            }
            fVar28 = fVar27;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0);
            fVar30 = fVar28;
            if (1.0 < fVar28) {
              fVar30 = 1.0;
            }
            uVar34 = 0x437f0000;
            fVar30 = fVar30 * 255.0;
            if (fVar28 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar27 < 0.0) {
              fVar30 = 0.0;
            }
LAB_00e42040:
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (fVar30 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              fVar30 = fVar27 + 1.0;
              goto LAB_00e425d4;
            }
            fVar27 = (float)(int)(fVar30 + 0.5);
          }
          else {
            lVar16 = *in_stack_00000038;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (lVar15 == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar16 + unaff_x22 * unaff_x24 + 0x20);
            fVar35 = *(float *)((long)dVar13 + 0x84);
            fVar27 = fVar27 + (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
            fVar27 = fVar27 - (float)(int)fVar27;
            fVar30 = fVar27;
            if (unaff_s10 < fVar27) {
              fVar30 = unaff_s10;
            }
            fVar28 = fVar30;
            if (fVar27 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,lVar15,0);
            fVar27 = fVar28;
            if (unaff_s10 < fVar28) {
              fVar27 = unaff_s10;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar28 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3e0b0;
              }
              fVar28 = (float)(int)(fVar27 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar27;
              }
            }
            else {
              fVar28 = (float)(int)(fVar27 + -0.5);
            }
            fVar27 = fVar30;
            if (unaff_s10 < fVar30) {
              fVar27 = unaff_s10;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar30 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + unaff_s10;
                goto LAB_00e3ee80;
              }
              fVar30 = (float)(int)(fVar27 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar27;
              }
            }
            else {
              fVar30 = (float)(int)(fVar27 + -0.5);
            }
            fVar27 = fVar33;
            if (unaff_s10 < fVar33) {
              fVar27 = unaff_s10;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar33 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + -0.5);
            }
            fVar33 = fVar35;
            if (1.0 < fVar35) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar35 < 0.0) {
              fVar33 = 0.0;
            }
            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar20 == 0) goto LAB_00e443fc;
            fVar35 = 1.0;
            if (*(uint *)(lVar20 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *(uint *)(lVar20 + unaff_x22 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            unaff_x25 = (long *)StringLiteral_9119;
            dVar13 = *in_stack_00000060;
            if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            lVar16 = *unaff_x26;
            lVar20 = *(long *)(lVar14 + 0x18);
            fVar27 = fStack0000000000000048 * *(float *)(lVar14 + 0x24);
            if (cVar4 != '\0') {
              if (uVar17 < *(uint *)(lVar15 + 0x18)) {
                if (lVar20 != 0) {
                  fVar33 = *(float *)(lVar15 + (int)uVar17 * unaff_x24 + 0x20);
                  fVar28 = *(float *)((long)dVar13 + 0x84);
                  fVar27 = fVar27 + (fVar33 * *(float *)(lVar14 + 0x20)) / fVar28;
                  fVar27 = fVar27 - (float)(int)fVar27;
                  fVar30 = fVar27;
                  if (1.0 < fVar27) {
                    fVar30 = fVar35;
                  }
                  fVar29 = fVar30;
                  if (fVar27 < 0.0) {
                    fVar29 = 0.0;
                  }
                  fVar29 = (float)FUN_0269ad38(fVar29,lVar20,0);
                  fVar27 = fVar29;
                  if (1.0 < fVar29) {
                    fVar27 = fVar35;
                  }
                  fVar27 = fVar27 * 255.0;
                  if (fVar29 < 0.0) {
                    fVar27 = 0.0;
                  }
                  dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
                  if (0.0 <= fVar27) {
                    if (dVar13 == 0.5) {
                      fVar27 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar35 = (float)(int)(fVar27 + 0.5);
                  }
                  else if (dVar13 == -0.5) {
                    fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = fVar27;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar27 + -0.5);
                  }
                  fVar27 = fVar30;
                  if (1.0 < fVar30) {
                    fVar27 = 1.0;
                  }
                  fVar27 = fVar27 * 255.0;
                  if (fVar30 < 0.0) {
                    fVar27 = 0.0;
                  }
                  dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
                  if (0.0 <= fVar27) {
                    if (dVar13 == 0.5) {
                      fVar27 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar30 = (float)(int)(fVar27 + 0.5);
                  }
                  else if (dVar13 == -0.5) {
                    fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = fVar27;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar27 + -0.5);
                  }
                  fVar27 = fVar33;
                  if (1.0 < fVar33) {
                    fVar27 = 1.0;
                  }
                  fVar27 = fVar27 * 255.0;
                  if (fVar33 < 0.0) {
                    fVar27 = 0.0;
                  }
                  dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
                  if (0.0 <= fVar27) {
                    if (dVar13 == 0.5) {
                      fVar27 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar27 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar27 = (float)(int)(fVar27 + 0.5);
                    }
                  }
                  else if (dVar13 == -0.5) {
                    fVar27 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar27 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar27 = (float)(int)(fVar27 + -0.5);
                  }
                  fVar33 = fVar28;
                  if (1.0 < fVar28) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar28 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar13 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + 0.5);
                    }
                  }
                  else if (dVar13 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
                  }
                  if (lVar16 != 0) {
                    if (uVar17 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                           (int)fVar35 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                           ((int)fVar27 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
                      dVar13 = *in_stack_00000060;
                      if (((dVar13 != 0.0) && (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 != 0)
                          ) && (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                        if (uVar25 < *(uint *)(lVar15 + 0x18)) {
                          if (*(long *)(lVar14 + 0x18) != 0) {
                            fVar33 = *(float *)(lVar15 + (int)uVar25 * unaff_x24 + 0x20);
                            fVar35 = *(float *)((long)dVar13 + 0x84);
                            lVar15 = *unaff_x26;
                            fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                     (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
                            fVar30 = fVar30 - (float)(int)fVar30;
                            fVar27 = fVar30;
                            if (1.0 < fVar30) {
                              fVar27 = 1.0;
                            }
                            fVar28 = fVar27;
                            if (fVar30 < 0.0) {
                              fVar28 = 0.0;
                            }
                            fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0);
                            fVar30 = fVar28;
                            if (1.0 < fVar28) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar28 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar13 == 0.5) {
                                fVar30 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar28 = (float)(int)(fVar30 + 0.5);
                            }
                            else if (dVar13 == -0.5) {
                              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar28 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar28 = fVar30;
                              }
                            }
                            else {
                              fVar28 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar30 = fVar27;
                            if (1.0 < fVar27) {
                              fVar30 = 1.0;
                            }
                            fVar30 = fVar30 * 255.0;
                            if (fVar27 < 0.0) {
                              fVar30 = 0.0;
                            }
                            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
                            if (0.0 <= fVar30) {
                              if (dVar13 == 0.5) {
                                fVar27 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar30 = (float)(int)(fVar30 + 0.5);
                            }
                            else if (dVar13 == -0.5) {
                              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar30 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar30 = fVar27;
                              }
                            }
                            else {
                              fVar30 = (float)(int)(fVar30 + -0.5);
                            }
                            fVar27 = fVar33;
                            if (1.0 < fVar33) {
                              fVar27 = 1.0;
                            }
                            fVar27 = fVar27 * 255.0;
                            if (fVar33 < 0.0) {
                              fVar27 = 0.0;
                            }
                            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
                            if (0.0 <= fVar27) {
                              if (dVar13 == 0.5) {
                                fVar27 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar27 = (float)(int)(fVar27 + 0.5);
                              }
                            }
                            else if (dVar13 == -0.5) {
                              fVar27 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar27 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar27 = (float)(int)(fVar27 + -0.5);
                            }
                            fVar33 = fVar35;
                            if (1.0 < fVar35) {
                              fVar33 = 1.0;
                            }
                            fVar33 = fVar33 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar33 = 0.0;
                            }
                            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
                            unaff_x25 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar33) {
                              if (dVar13 == 0.5) {
                                fVar33 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar33 = (float)(int)(fVar33 + 0.5);
                              }
                            }
                            else if (dVar13 == -0.5) {
                              fVar33 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar33 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar33 = (float)(int)(fVar33 + -0.5);
                            }
                            if (lVar15 != 0) {
                              if (uVar25 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                                     (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                     ((int)fVar27 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
                                dVar13 = *in_stack_00000060;
                                if (((dVar13 != 0.0) &&
                                    (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 != 0)) &&
                                   (lVar15 = *in_stack_00000038, lVar15 != 0)) {
                                  if (uVar22 < *(uint *)(lVar15 + 0x18)) {
                                    if (*(long *)(lVar14 + 0x18) != 0) {
                                      fVar33 = *(float *)(lVar15 + unaff_x21 * unaff_x24 + 0x20);
                                      fVar35 = *(float *)((long)dVar13 + 0x84);
                                      lVar15 = *unaff_x26;
                                      fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                                               (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
                                      fVar30 = fVar30 - (float)(int)fVar30;
                                      fVar27 = fVar30;
                                      if (1.0 < fVar30) {
                                        fVar27 = 1.0;
                                      }
                                      fVar28 = fVar27;
                                      if (fVar30 < 0.0) {
                                        fVar28 = 0.0;
                                      }
                                      fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0
                                                                  );
                                      fVar30 = fVar28;
                                      if (1.0 < fVar28) {
                                        fVar30 = 1.0;
                                      }
                                      uVar34 = 0x437f0000;
                                      fVar30 = fVar30 * 255.0;
                                      if (fVar28 < 0.0) {
                                        fVar30 = 0.0;
                                      }
                                      dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
                                      if (0.0 <= fVar30) {
                                        if (dVar13 == 0.5) {
                                          fVar30 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar28 = (float)(int)(fVar30 + 0.5);
                                      }
                                      else if (dVar13 == -0.5) {
                                        fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar28 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar28 = fVar30;
                                        }
                                      }
                                      else {
                                        fVar28 = (float)(int)(fVar30 + -0.5);
                                      }
                                      fVar30 = fVar27;
                                      if (1.0 < fVar27) {
                                        fVar30 = 1.0;
                                      }
                                      fVar30 = fVar30 * 255.0;
                                      if (fVar27 < 0.0) {
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
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (lVar20 == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar15 + unaff_x22 * unaff_x24 + 0x20);
            fVar28 = *(float *)((long)dVar13 + 0x84);
            fVar27 = fVar27 + (fVar33 * *(float *)(lVar14 + 0x20)) / fVar28;
            fVar27 = fVar27 - (float)(int)fVar27;
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = fVar35;
            }
            fVar29 = fVar30;
            if (fVar27 < 0.0) {
              fVar29 = 0.0;
            }
            fVar29 = (float)FUN_0269ad38(fVar29,lVar20,0);
            fVar27 = fVar29;
            if (1.0 < fVar29) {
              fVar27 = fVar35;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar29 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar35 = (float)(int)(fVar27 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar27;
              }
            }
            else {
              fVar35 = (float)(int)(fVar27 + -0.5);
            }
            fVar27 = fVar30;
            if (1.0 < fVar30) {
              fVar27 = 1.0;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar30 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar30 = (float)(int)(fVar27 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar27;
              }
            }
            else {
              fVar30 = (float)(int)(fVar27 + -0.5);
            }
            fVar27 = fVar33;
            if (1.0 < fVar33) {
              fVar27 = 1.0;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar33 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + -0.5);
            }
            fVar33 = fVar28;
            if (1.0 < fVar28) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar28 < 0.0) {
              fVar33 = 0.0;
            }
            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar17) goto LAB_00e44400;
            *(uint *)(lVar16 + (long)(int)uVar17 * 4 + 0x20) =
                 (int)fVar35 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar13 = *in_stack_00000060;
            if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar15 + unaff_x22 * unaff_x24 + 0x20);
            fVar35 = *(float *)((long)dVar13 + 0x84);
            lVar15 = *unaff_x26;
            fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar27 = fVar30;
            if (1.0 < fVar30) {
              fVar27 = 1.0;
            }
            fVar28 = fVar27;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0);
            fVar30 = fVar28;
            if (1.0 < fVar28) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar28 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar27 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = fVar27;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar27 = fVar33;
            if (1.0 < fVar33) {
              fVar27 = 1.0;
            }
            fVar27 = fVar27 * 255.0;
            if (fVar33 < 0.0) {
              fVar27 = 0.0;
            }
            dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
            if (0.0 <= fVar27) {
              if (dVar13 == 0.5) {
                fVar27 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar27 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar27 = (float)(int)(fVar27 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + -0.5);
            }
            fVar33 = fVar35;
            if (1.0 < fVar35) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar35 < 0.0) {
              fVar33 = 0.0;
            }
            dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar13 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar13 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar28 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar27 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar13 = *in_stack_00000060;
            if (((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xa8), lVar14 == 0)) ||
               (lVar15 = *in_stack_00000038, lVar15 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            if (*(long *)(lVar14 + 0x18) == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar15 + unaff_x22 * unaff_x24 + 0x20);
            fVar35 = *(float *)((long)dVar13 + 0x84);
            lVar15 = *unaff_x26;
            fVar30 = fStack0000000000000048 * *(float *)(lVar14 + 0x24) +
                     (fVar33 * *(float *)(lVar14 + 0x20)) / fVar35;
            fVar30 = fVar30 - (float)(int)fVar30;
            fVar27 = fVar30;
            if (1.0 < fVar30) {
              fVar27 = 1.0;
            }
            fVar28 = fVar27;
            if (fVar30 < 0.0) {
              fVar28 = 0.0;
            }
            fVar28 = (float)FUN_0269ad38(fVar28,*(long *)(lVar14 + 0x18),0);
            fVar30 = fVar28;
            if (1.0 < fVar28) {
              fVar30 = 1.0;
            }
            uVar34 = 0x437f0000;
            fVar30 = fVar30 * 255.0;
            if (fVar28 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar13 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar28 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar13 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar30;
              }
            }
            else {
              fVar28 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar27;
            if (1.0 < fVar27) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar27 < 0.0) {
              fVar30 = 0.0;
            }
            dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar13 == -0.5) {
              fVar27 = (float)_fStack0000000000000070;
              fVar30 = fVar27 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = fVar30;
              }
            }
            else {
              fVar27 = (float)(int)(fVar30 + -0.5);
            }
          }
          unaff_s8 = 0.0;
          fVar30 = fVar33;
          if (1.0 < fVar33) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar33 < 0.0) {
            fVar30 = 0.0;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar33 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar30;
            }
          }
          else {
            fVar33 = (float)(int)(fVar30 + -0.5);
          }
          fVar30 = fVar35;
          if (1.0 < fVar35) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar35 < 0.0) {
            fVar30 = 0.0;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar35 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar30;
            }
          }
          else {
            fVar35 = (float)(int)(fVar30 + -0.5);
          }
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar15 + unaff_x21 * 4 + 0x20) =
               (int)fVar28 & 0xffU | ((int)fVar27 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar10 = FUN_02681b9c(uVar19,0,0);
          if ((uVar10 & 1) == 0) goto LAB_00e43400;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + unaff_x22 * 4 + 0x20);
          uVar3 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar27 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar35 = *(float *)(lVar14 + 0x20);
          fVar33 = *(float *)(lVar14 + 0x24);
          fVar30 = fVar27 * 255.0;
          if (fVar27 < 0.0) {
            fVar30 = 0.0;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar27 = 1.0;
              goto LAB_00e4287c;
            }
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar27 = -1.0;
LAB_00e4287c:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar27;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar27 = fVar28 * 255.0;
          fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
          if (fVar28 < 0.0) {
            fVar27 = 0.0;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
          if (fVar35 < 0.0) {
            fVar28 = 0.0;
          }
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = fVar33;
          if (1.0 < fVar33) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar33 < 0.0) {
            fVar35 = 0.0;
          }
          dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar13 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e42a44;
            }
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = -1.0;
LAB_00e42a44:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
          uVar3 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
          fVar27 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar14 + 0x18);
          fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
          fVar35 = *(float *)(lVar14 + 0x20);
          fVar33 = *(float *)(lVar14 + 0x24);
          fVar30 = fVar27 * 255.0;
          if (fVar27 < 0.0) {
            fVar30 = 0.0;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar27 = 1.0;
              goto LAB_00e42b80;
            }
            fVar30 = (float)(int)(fVar30 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar27 = -1.0;
LAB_00e42b80:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar27;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar27 = fVar28 * 255.0;
          fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
          if (fVar28 < 0.0) {
            fVar27 = 0.0;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar28 = fVar35;
          if (1.0 < fVar35) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
          if (fVar35 < 0.0) {
            fVar28 = 0.0;
          }
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar28 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar28 = fVar35;
            }
          }
          else {
            fVar28 = (float)(int)(fVar28 + -0.5);
          }
          fVar35 = fVar33;
          if (1.0 < fVar33) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar33 < 0.0) {
            fVar35 = 0.0;
          }
          dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar13 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e42d48;
            }
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = -1.0;
LAB_00e42d48:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          *puVar21 = (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 |
                     ((int)fVar28 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + (long)(int)uVar25 * 4;
        }
        uVar3 = *(uint *)(lVar14 + 0x20);
        if ((*in_stack_00000060 == 0.0) ||
           (lVar15 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar15 == 0)) goto LAB_00e443fc;
        fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar15 + 0x18);
        fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar15 + 0x1c);
        fVar35 = *(float *)(lVar15 + 0x20);
        fVar33 = *(float *)(lVar15 + 0x24);
        fVar27 = fVar30 * 255.0;
        if (fVar30 < 0.0) {
          fVar27 = unaff_s8;
        }
        dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
        if (0.0 <= fVar27) {
          if (dVar13 == 0.5) {
            fVar27 = 1.0;
            goto FUN_00e42e84;
          }
          fVar30 = (float)(int)(fVar27 + 0.5);
        }
        else if (dVar13 == -0.5) {
          fVar27 = -1.0;
FUN_00e42e84:
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + fVar27;
          }
        }
        else {
          fVar30 = (float)(int)(fVar27 + -0.5);
        }
        fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
        fVar27 = fVar28 * 255.0;
        if (fVar28 < 0.0) {
          fVar27 = unaff_s8;
        }
        dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
        if (0.0 <= fVar27) {
          if (dVar13 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + 0.5);
          }
        }
        else if (dVar13 == -0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar27 = (float)(int)(fVar27 + -0.5);
        }
        fVar28 = fVar35;
        if (1.0 < fVar35) {
          fVar28 = 1.0;
        }
        fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
        fVar28 = fVar28 * 255.0;
        if (fVar35 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar13 == 0.5) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar28 = (float)(int)(fVar28 + 0.5);
        }
        else if (dVar13 == -0.5) {
          fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = fVar35;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
        fVar35 = fVar33;
        if (1.0 < fVar33) {
          fVar35 = 1.0;
        }
        fVar35 = fVar35 * 255.0;
        if (fVar33 < 0.0) {
          fVar35 = unaff_s8;
        }
        dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
        if (0.0 <= fVar35) {
          if (dVar13 == 0.5) {
            fVar33 = 1.0;
            goto LAB_00e4304c;
          }
          fVar35 = (float)(int)(fVar35 + 0.5);
        }
        else if (dVar13 == -0.5) {
          fVar33 = -1.0;
LAB_00e4304c:
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + fVar33;
          }
        }
        else {
          fVar35 = (float)(int)(fVar35 + -0.5);
        }
        *(uint *)(lVar14 + 0x20) =
             (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10 |
             (int)fVar35 << 0x18;
        lVar14 = *unaff_x26;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        puVar21 = (uint *)(lVar14 + unaff_x21 * 4 + 0x20);
        uVar3 = *puVar21;
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar14 == 0)) goto LAB_00e443fc;
        fVar30 = (float)(uVar3 & 0xff) / 255.0;
        uVar34 = (ulong)(uint)fVar30;
        fVar30 = fVar30 * *(float *)(lVar14 + 0x18);
        fVar28 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar14 + 0x1c);
        fVar35 = *(float *)(lVar14 + 0x20);
        fVar33 = *(float *)(lVar14 + 0x24);
        fVar27 = fVar30 * 255.0;
        if (fVar30 < 0.0) {
          fVar27 = unaff_s8;
        }
        dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
        if (0.0 <= fVar27) {
          if (dVar13 == 0.5) {
            fVar27 = 1.0;
            goto LAB_00e4318c;
          }
          fVar30 = (float)(int)(fVar27 + 0.5);
        }
        else if (dVar13 == -0.5) {
          fVar27 = -1.0;
LAB_00e4318c:
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + fVar27;
          }
        }
        else {
          fVar30 = (float)(int)(fVar27 + -0.5);
        }
        fVar35 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar35;
        fVar27 = fVar28 * 255.0;
        if (fVar28 < 0.0) {
          fVar27 = unaff_s8;
        }
        dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
        if (0.0 <= fVar27) {
          if (dVar13 == 0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + 0.5);
          }
        }
        else if (dVar13 == -0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar27 = (float)(int)(fVar27 + -0.5);
        }
        fVar28 = fVar35;
        if (1.0 < fVar35) {
          fVar28 = 1.0;
        }
        fVar33 = ((float)(uVar3 >> 0x18) / 255.0) * fVar33;
        fVar28 = fVar28 * 255.0;
        if (fVar35 < 0.0) {
          fVar28 = unaff_s8;
        }
        dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
        if (0.0 <= fVar28) {
          if (dVar13 == 0.5) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar28 = (float)(int)(fVar28 + 0.5);
        }
        else if (dVar13 == -0.5) {
          fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar28 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar28 = fVar35;
          }
        }
        else {
          fVar28 = (float)(int)(fVar28 + -0.5);
        }
        fVar35 = fVar33;
        if (1.0 < fVar33) {
          fVar35 = 1.0;
        }
        fVar35 = fVar35 * 255.0;
        if (fVar33 < 0.0) {
          fVar35 = unaff_s8;
        }
        dVar13 = modf((double)fVar35,(double *)&stack0x00000070);
        if (0.0 <= fVar35) {
          if (dVar13 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar35 + 0.5);
          }
        }
        else if (dVar13 == -0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar33 = (float)(int)(fVar35 + -0.5);
        }
        unaff_d14 = _fStack0000000000000048 & 0xffffffff;
        *puVar21 = (int)fVar30 & 0xffU | ((int)fVar27 & 0xffU) << 8 | ((int)fVar28 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
        unaff_s15 = in_stack_00000008._4_4_;
      }
      else {
        if (*(long *)((long)dVar13 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar13 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
        lVar14 = *unaff_x26;
        dVar13 = modf(DAT_028aa048,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar27 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + unaff_s10;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        *(uint *)(lVar14 + unaff_x22 * 4 + 0x20) =
             (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar35 << 0x18;
        lVar14 = *unaff_x26;
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar27 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20) =
             (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar35 << 0x18;
        lVar14 = *unaff_x26;
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar27 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        *(uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20) =
             (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar35 << 0x18;
        lVar14 = *unaff_x26;
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar27 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar27 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar27 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar30 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar30 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar30 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar13 = modf(dVar32,(double *)&stack0x00000070);
        if (dVar13 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        *(uint *)(lVar14 + unaff_x21 * 4 + 0x20) =
             (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar35 << 0x18;
      }
LAB_00e43400:
      lVar14 = *unaff_x26;
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
      lVar14 = lVar14 + unaff_x22 * 4;
      fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar27);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar17 * 4;
      fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar27);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
      lVar14 = lVar14 + (long)(int)uVar25 * 4;
      fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar27);
      lVar14 = unaff_x19[0x5f];
      if (lVar14 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
      lVar14 = lVar14 + unaff_x21 * 4;
      uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar14 + 0x23));
      *(char *)(lVar14 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar27);
      uVar11 = FUN_00e3703c();
      if ((uVar11 & 1) == 0) {
        lVar14 = *unaff_x25;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar14 = *unaff_x25;
        }
        if (*(int *)(*(long *)(lVar14 + 0xb8) + 0x20) == 1) {
          lVar14 = *unaff_x26;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + unaff_x22 * 4 + 0x20);
          uVar3 = *puVar21;
          fVar30 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
          fVar27 = fVar30;
          if (1.0 < fVar30) {
            fVar27 = 1.0;
          }
          fVar27 = fVar27 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar30 = fVar33;
          if (1.0 < fVar33) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar33 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar33 = fVar35;
          if (1.0 < fVar35) {
            fVar33 = 1.0;
          }
          fVar28 = (float)(uVar3 >> 0x18) / 255.0;
          fVar33 = fVar33 * 255.0;
          if (fVar35 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar35 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar28) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar28 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *puVar21 = (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + (long)(int)uVar17 * 4 + 0x20);
          uVar3 = *puVar21;
          fVar30 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
          fVar27 = fVar30;
          if (1.0 < fVar30) {
            fVar27 = 1.0;
          }
          fVar27 = fVar27 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar30 = fVar33;
          if (1.0 < fVar33) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar33 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar33 = fVar35;
          if (1.0 < fVar35) {
            fVar33 = 1.0;
          }
          fVar28 = (float)(uVar3 >> 0x18) / 255.0;
          fVar33 = fVar33 * 255.0;
          if (fVar35 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar35 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar28) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar28 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          *puVar21 = (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + (long)(int)uVar25 * 4 + 0x20);
          uVar17 = *puVar21;
          fVar30 = (float)FUN_026982b0((float)(uVar17 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar17 >> 8 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar17 >> 0x10 & 0xff) / 255.0,0);
          fVar27 = fVar30;
          if (1.0 < fVar30) {
            fVar27 = 1.0;
          }
          fVar27 = fVar27 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          fVar30 = fVar33;
          if (1.0 < fVar33) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar33 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar33 = fVar35;
          if (1.0 < fVar35) {
            fVar33 = 1.0;
          }
          fVar28 = (float)(uVar17 >> 0x18) / 255.0;
          fVar33 = fVar33 * 255.0;
          if (fVar35 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar35 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar28) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar28 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar28 + -0.5);
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          *puVar21 = (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar14 = *in_stack_00000030;
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          puVar21 = (uint *)(lVar14 + unaff_x21 * 4 + 0x20);
          uVar17 = *puVar21;
          fVar30 = (float)FUN_026982b0((float)(uVar17 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar17 >> 8 & 0xff) / 255.0,0);
          fVar35 = (float)FUN_026982b0((float)(uVar17 >> 0x10 & 0xff) / 255.0,0);
          fVar27 = fVar30;
          if (1.0 < fVar30) {
            fVar27 = 1.0;
          }
          fVar27 = fVar27 * 255.0;
          if (fVar30 < 0.0) {
            fVar27 = unaff_s8;
          }
          dVar13 = modf((double)fVar27,(double *)&stack0x00000070);
          if (0.0 <= fVar27) {
            if (dVar13 == 0.5) {
              fVar27 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar27 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar27 = (float)(int)(fVar27 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar27 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar27 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar27 = (float)(int)(fVar27 + -0.5);
          }
          uVar34 = 0x3f800000;
          fVar30 = fVar33;
          if (1.0 < fVar33) {
            fVar30 = 1.0;
          }
          fVar30 = fVar30 * 255.0;
          if (fVar33 < 0.0) {
            fVar30 = unaff_s8;
          }
          dVar13 = modf((double)fVar30,(double *)&stack0x00000070);
          if (0.0 <= fVar30) {
            if (dVar13 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
          }
          else if (dVar13 == -0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar30 = (float)(int)(fVar30 + -0.5);
          }
          fVar33 = fVar35;
          if (1.0 < fVar35) {
            fVar33 = 1.0;
          }
          fVar28 = (float)(uVar17 >> 0x18) / 255.0;
          fVar33 = fVar33 * 255.0;
          if (fVar35 < 0.0) {
            fVar33 = unaff_s8;
          }
          dVar13 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar13 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar35 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar13 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = fVar33;
            }
          }
          else {
            fVar35 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar28) {
            fVar28 = 1.0;
          }
          fVar28 = fVar28 * 255.0;
          dVar13 = modf((double)fVar28,(double *)&stack0x00000070);
          if (0.0 <= fVar28) {
            uVar10 = 0;
            if (dVar13 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e44170;
            }
            fVar28 = (float)(int)(fVar28 + 0.5);
          }
          else {
            uVar10 = 0;
            if (dVar13 == -0.5) {
              fVar33 = -1.0;
LAB_00e44170:
              fVar33 = (float)_fStack0000000000000070 + fVar33;
              uVar10 = (ulong)(uint)fVar33;
              fVar28 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar28 = fVar33;
              }
            }
            else {
              fVar28 = (float)(int)(fVar28 + -0.5);
            }
          }
          unaff_d14 = _fStack0000000000000048 & 0xffffffff;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          *puVar21 = (int)fVar27 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar28 << 0x18;
          unaff_x26 = in_stack_00000030;
        }
      }
      puVar6 = StringLiteral_4992;
      puVar5 = OVREyeGaze_TypeInfo;
      in_stack_00000050 = in_stack_00000050 + 1;
      if (in_stack_00000050 == in_stack_00000018) {
        if (((unaff_x19[0x58] == 0) || (iVar8 = FUN_026c82cc(unaff_x19[0x58],0), iVar8 < 1)) &&
           (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
        puVar5 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
        if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
        iVar8 = *(int *)(unaff_x19[0xf] + 0x10);
        plVar9 = unaff_x19 + 0xcb;
        if (iVar8 != *(int *)(unaff_x19[0xcb] + 0x18)) {
          FUN_010afdd4(plVar9,iVar8,
                       *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
        }
        if ((unaff_x19[0xcc] == 0) || (lVar14 = unaff_x19[0xf], lVar14 == 0)) goto LAB_00e443fc;
        plVar1 = unaff_x19 + 0xcc;
        if (*(int *)(lVar14 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
          FUN_010afdd4(plVar1,*(int *)(lVar14 + 0x10),*(undefined8 *)puVar5);
          lVar14 = unaff_x19[0xf];
          if (lVar14 == 0) goto LAB_00e443fc;
        }
        uVar22 = *(uint *)(lVar14 + 0x10);
        if ((int)uVar22 < 1) goto LAB_00e44358;
        uVar11 = 0;
        lVar14 = 0x20;
        goto LAB_00e442cc;
      }
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
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
        uVar34 = FUN_0269e56c(0);
        if (((fStack000000000000004c == 0.0) || ((uVar34 & 1) == 0)) ||
           (1 < (int)unaff_x19[0x2a] - 3U)) {
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          iVar8 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
          *(int *)((long)unaff_x19 + 0x38c) = iVar8;
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],iVar8,&stack0x00000070,*(undefined8 *)puVar6),
             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
          *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                           *(undefined8 *)puVar6), _fStack0000000000000070 == 0.0))
          goto LAB_00e443fc;
          *(float *)((long)unaff_x19 + 0x254) =
               *(float *)((long)_fStack0000000000000070 + 0x48) +
               *(float *)((long)unaff_x19 + 0x50c);
          *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
        }
      }
      else {
        dVar13 = *in_stack_00000060;
        if ((dVar13 == 0.0) || (*(long *)((long)dVar13 + 0x78) == 0)) goto LAB_00e443fc;
        fVar30 = *(float *)(*(long *)((long)dVar13 + 0x78) + 0x18);
        fVar27 = DAT_028aa034;
        if (fVar30 != 0.0) {
          fVar27 = fVar30;
        }
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar13 + 100)) / fVar27) &&
           (*(char *)((long)dVar13 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar13 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar7 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
          if (sVar7 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar7 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
            if (sVar7 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar7 = FUN_015fa29c(unaff_x19[0xf],in_stack_00000050 & 0xffffffff,0);
              if (sVar7 != 10) {
                lVar14 = unaff_x19[0xca];
                if (lVar14 == 0) goto LAB_00e443fc;
                fVar33 = *(float *)(lVar14 + 0x48);
                fVar27 = *(float *)(unaff_x19 + 0x4b);
                fVar35 = fVar33 + *(float *)((long)unaff_x19 + 0x50c);
                fVar30 = *(float *)(unaff_x19 + 0x4a);
                if (fVar33 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar30 = fVar33;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar30;
                fVar30 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar35 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar30 = fVar35;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar30;
                fVar30 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar14,0);
                fVar30 = fVar30 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar27 <= fVar30) {
                  fVar27 = fVar30;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar27;
              }
            }
          }
          iVar36 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar8) {
            iVar36 = iVar8;
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
        lVar14 = unaff_x19[0x55];
        if (lVar14 != 0) {
          (**(code **)(lVar14 + 0x18))
                    (*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar14 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar30 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
      fVar27 = 0.0;
      if ((((0.0 < fStack000000000000004c) &&
           (uVar22 = *(uint *)(unaff_x19 + 0x2a), fVar27 = fVar30, uVar22 < 5)) &&
          ((1 << (ulong)(uVar22 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
        if (uVar22 == 4) {
          lVar14 = unaff_x19[0xc];
          if (lVar14 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar14 + 0x18)) {
            iVar8 = 0;
            do {
              FUN_0132138c(lVar14,iVar8,&stack0x00000070,*(undefined8 *)puVar5);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar27 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar14 = unaff_x19[0xc];
              if (lVar14 == 0) goto LAB_00e443fc;
              iVar8 = iVar8 + 1;
            } while (iVar8 < *(int *)(lVar14 + 0x18));
          }
        }
        else {
          lVar14 = unaff_x19[0xb];
          if (lVar14 == 0) goto LAB_00e443fc;
          iVar8 = 0;
          fVar27 = 0.0;
          while (iVar8 < *(int *)(lVar14 + 0x18)) {
            FUN_0132138c(lVar14,iVar8,&stack0x00000070,*(undefined8 *)puVar5);
            fVar27 = fVar27 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar27;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar27)
            break;
            lVar14 = unaff_x19[0xb];
            iVar8 = iVar8 + 1;
            if (lVar14 == 0) goto LAB_00e443fc;
          }
        }
      }
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar30 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar33 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar28 = *(float *)(unaff_x19 + 0xa8);
      fVar35 = *(float *)(unaff_x19 + 199) + fVar28;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar27 + fVar30 + (fVar33 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar35;
      puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      unaff_s10 = 1.0;
      uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
      in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar5 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar31;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar34 = FUN_02681b9c(uVar19,0,0);
      if ((uVar34 & 1) != 0) {
        lVar14 = __start_il2cpp();
        if (lVar14 == 0) goto LAB_00e443fc;
        if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          uVar31 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
          *(float *)(unaff_x19 + 0xcf) = fVar35;
          *(float *)((long)unaff_x19 + 0x67c) = fVar28;
        }
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar5);
        DAT_03774d76 = '\x01';
      }
      lVar15 = *(long *)puVar5;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      *in_stack_00000040 = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar31;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar14;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      in_stack_00000040[3] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
      lVar14 = (*(long **)(lVar15 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar15 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar14;
      uVar31 = *(undefined4 *)(*(undefined8 **)(lVar15 + 0xb8) + 1);
      in_stack_00000040[6] = **(undefined8 **)(lVar15 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar31;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar34 = FUN_02681b9c(uVar19,0,0);
      if ((uVar34 & 1) != 0) {
        if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*in_stack_00000060 + 0x84) != 0.0) {
          lVar14 = __start_il2cpp();
          if (lVar14 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar14 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar14 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0xc0), lVar15 == 0))
            goto LAB_00e443fc;
            uVar34 = unaff_d14;
            if (*(char *)(lVar15 + 0x18) != '\0') {
              fVar35 = *(float *)(lVar14 + 100);
              uVar34 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar35);
            }
            if (*(char *)(lVar15 + 0x19) != '\0') {
              uVar31 = FUN_00e4e9f4(uVar34);
              lVar14 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar31;
              *(float *)(unaff_x19 + 0xbf) = fVar35;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar28;
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x28) != '\0') {
              fVar27 = (float)FUN_00e4e9f4(uVar34);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar30 = fVar28 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc0] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar30;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar27 = (float)FUN_00e4e9f4(uVar34);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[3] =
                   CONCAT44(fVar30 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar27 + (float)in_stack_00000040[3]);
              *(float *)((long)unaff_x19 + 0x614) = fVar28 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar27 = (float)FUN_00e4e9f4(uVar34);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              fVar35 = fVar28 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc3] =
                   CONCAT44(fVar30 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar35;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar27 = (float)FUN_00e4e9f4(uVar34);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[6] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar27 + (float)in_stack_00000040[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar28 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar14 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar14 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar14,0);
              fVar27 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar30 = fVar28 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc0] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar30;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar14,0);
              fVar27 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[3] =
                   CONCAT44(fVar30 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar27 + (float)in_stack_00000040[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar28 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar14,0);
              fVar27 = (float)FUN_00e4eb50();
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              fVar35 = fVar28 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc3] =
                   CONCAT44(fVar30 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar35;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar14,0);
              fVar27 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar35;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[6] =
                   CONCAT44(fVar35 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar27 + (float)in_stack_00000040[6]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar28 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar14 == 0) goto LAB_00e443fc;
            }
            lVar15 = *(long *)(lVar14 + 0xc0);
            if (lVar15 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar15 + 0x60) != '\0') {
              uVar23 = *(undefined8 *)(lVar15 + 0x68);
              uVar19 = FUN_00e5eda8(lVar14,0);
              fVar27 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar23);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar35;
              fVar30 = fVar28 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc0] =
                   CONCAT44(fVar35 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar30;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar23 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b838(lVar14,0);
              fVar27 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar23);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[3] =
                   CONCAT44(fVar30 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                            fVar27 + (float)in_stack_00000040[3]);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar28 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar23 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5eea4(lVar14,0);
              fVar27 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar23);
              lVar14 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar30;
              fVar33 = fVar28 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              unaff_x19[0xc3] =
                   CONCAT44(fVar30 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar27 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar33;
              if ((lVar14 == 0) || (*(long *)(lVar14 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar23 = *(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x68);
              uVar19 = FUN_00e5b7d8(lVar14,0);
              fVar27 = (float)FUN_00e4ecc4(uVar19,lVar14,uVar23);
              *(float *)((long)unaff_x19 + 0x63c) = fVar27;
              *(float *)(unaff_x19 + 200) = fVar33;
              *(float *)((long)unaff_x19 + 0x644) = fVar28;
              in_stack_00000040[6] =
                   CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                            fVar27 + (float)in_stack_00000040[6]);
              *(float *)((long)unaff_x19 + 0x62c) = fVar28 + *(float *)((long)unaff_x19 + 0x62c);
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
        lVar14 = unaff_x19[0x5e];
        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar27 = (float)FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x674);
        uVar10 = (ulong)(int)in_stack_00000068;
        *(float *)(lVar14 + uVar10 * 0xc + 0x20) =
             fVar27 + fVar30 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        fVar27 = *(float *)((long)unaff_x19 + 0x604);
        *(float *)(lVar14 + uVar10 * 0xc + 0x24) =
             fVar30 + *(float *)(unaff_x19 + 0xcf) + fVar27 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        *(float *)(lVar14 + uVar10 * 0xc + 0x28) =
             fVar27 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar27 = (float)FUN_00e5b838(*in_stack_00000060,0);
        uVar11 = uVar10 | 1;
        uVar22 = (uint)uVar11;
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar11 * 0xc + 0x20) =
             fVar27 + fVar30 + *(float *)((long)unaff_x19 + 0x60c) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        fVar27 = *(float *)(unaff_x19 + 0xc2);
        *(float *)(lVar14 + uVar11 * 0xc + 0x24) =
             fVar30 + *(float *)(unaff_x19 + 0xcf) + fVar27 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
        *(float *)(lVar14 + uVar11 * 0xc + 0x28) =
             fVar27 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar27 = (float)FUN_00e5eea4(*in_stack_00000060,0);
        uVar24 = uVar10 | 2;
        uVar17 = (uint)uVar24;
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar24 * 0xc + 0x20) =
             fVar27 + fVar30 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
        fVar27 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar14 + uVar24 * 0xc + 0x24) =
             fVar30 + *(float *)(unaff_x19 + 0xcf) + fVar27 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
        *(float *)(lVar14 + uVar24 * 0xc + 0x28) =
             fVar27 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        fVar27 = (float)FUN_00e5b7d8(*in_stack_00000060,0);
        uVar26 = uVar10 | 3;
        uVar25 = (uint)uVar26;
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        fVar30 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar14 + uVar26 * 0xc + 0x20) =
             fVar27 + fVar30 + *(float *)((long)unaff_x19 + 0x624) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        uVar34 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
        *(float *)(lVar14 + uVar26 * 0xc + 0x24) =
             fVar30 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
             *(float *)(unaff_x19 + 0xdd);
        lVar14 = unaff_x19[0x5e];
        if ((lVar14 == 0) || (*in_stack_00000060 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*in_stack_00000060,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
        fVar27 = *(float *)((long)unaff_x19 + 0x62c);
        *(float *)(lVar14 + uVar26 * 0xc + 0x28) =
             (float)uVar34 + *(float *)((long)unaff_x19 + 0x67c) + fVar27 +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar14 = unaff_x19[0xca];
        if (lVar14 == 0) goto LAB_00e443fc;
        lVar15 = *in_stack_00000020;
        if (*(char *)(lVar14 + 0x108) == '\0') {
          uVar31 = FUN_0272b9dc(lVar14 + 0x10,0);
          if (lVar15 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar15 = lVar15 + uVar10 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar31;
          *(float *)(lVar15 + 0x24) = fVar27;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = thunk_FUN_0272b8d8((long)*in_stack_00000060 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar14 = lVar14 + uVar11 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = FUN_0272b9c8((long)*in_stack_00000060 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          lVar14 = lVar14 + uVar24 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = FUN_0272b98c((long)*in_stack_00000060 + 0x10,0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + uVar26 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
          uVar31 = FUN_00e5ecc0(*in_stack_00000060,0);
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          FUN_00e5ecc0(unaff_x19[0xca],0);
          *(float *)((long)unaff_x19 + 0x6cc) = fVar27;
          unaff_x26 = in_stack_00000030;
        }
        else {
          if ((*(long *)(lVar14 + 0x100) == 0) ||
             (uVar31 = FUN_00e5dd14(unaff_d14,*(long *)(lVar14 + 0x100),
                                    *(undefined4 *)(lVar14 + 0x10c),0), lVar15 == 0))
          goto LAB_00e443fc;
          if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar15 = lVar15 + uVar10 * 8;
          *(undefined4 *)(lVar15 + 0x20) = uVar31;
          *(float *)(lVar15 + 0x24) = fVar27;
          dVar13 = *in_stack_00000060;
          if ((dVar13 == 0.0) || (*(long *)((long)dVar13 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = FUN_00e5de6c(unaff_d14,*(long *)((long)dVar13 + 0x100),
                                *(undefined4 *)((long)dVar13 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar14 = lVar14 + uVar11 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          dVar13 = *in_stack_00000060;
          if ((dVar13 == 0.0) || (*(long *)((long)dVar13 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = FUN_00e5dea4(unaff_d14,*(long *)((long)dVar13 + 0x100),
                                *(undefined4 *)((long)dVar13 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar17) goto LAB_00e44400;
          lVar14 = lVar14 + uVar24 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          dVar13 = *in_stack_00000060;
          if ((dVar13 == 0.0) || (*(long *)((long)dVar13 + 0x100) == 0)) goto LAB_00e443fc;
          lVar14 = *in_stack_00000020;
          uVar31 = thunk_FUN_00e5dd60(unaff_d14,*(long *)((long)dVar13 + 0x100),
                                      *(undefined4 *)((long)dVar13 + 0x10c),0);
          if (lVar14 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar14 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar14 = lVar14 + uVar26 * 8;
          *(undefined4 *)(lVar14 + 0x20) = uVar31;
          *(float *)(lVar14 + 0x24) = fVar27;
          dVar13 = *in_stack_00000060;
          if ((dVar13 == 0.0) || (*(long *)((long)dVar13 + 0x100) == 0)) goto LAB_00e443fc;
          uVar31 = FUN_00e5dedc(unaff_d14,*(long *)((long)dVar13 + 0x100),
                                *(undefined4 *)((long)dVar13 + 0x10c),0);
          lVar14 = unaff_x19[0xca];
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
          *(float *)((long)unaff_x19 + 0x6cc) = fVar27;
          if ((lVar14 == 0) || (lVar15 = *(long *)(lVar14 + 0x100), lVar15 == 0)) goto LAB_00e443fc;
          unaff_x26 = in_stack_00000030;
          if (((1 < *(int *)(lVar15 + 0x28)) && (0.0 < *(float *)(lVar15 + 0x34))) &&
             (*(int *)(lVar14 + 0x10c) < 0)) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
        }
      }
      else {
        dVar13 = *in_stack_00000060;
        if (dVar13 == 0.0) goto LAB_00e443fc;
        uVar34 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if ((*(float *)((long)dVar13 + 0x48) + *(float *)((long)dVar13 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
        lVar14 = *in_stack_00000038;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar5);
          DAT_03774d76 = '\x01';
        }
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
        uVar10 = (ulong)(int)in_stack_00000068;
        lVar14 = lVar14 + uVar10 * 0xc;
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 1)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar10 | 1) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 2)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar10 | 2) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
        lVar14 = *in_stack_00000038;
        if (lVar14 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar10 | 3)) goto LAB_00e44400;
        lVar14 = lVar14 + (uVar10 | 3) * 0xc;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
        *(undefined8 *)(lVar14 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined4 *)(lVar14 + 0x28) = uVar31;
      }
      if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
      uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar19,0,0);
      if ((uVar10 & 1) == 0) {
        lVar14 = unaff_x19[0x10];
      }
      else {
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0xf8), lVar14 == 0)) goto LAB_00e443fc;
        lVar14 = *(long *)(lVar14 + 0x18);
      }
      if (((lVar14 == 0) || (lVar14 = FUN_0272bcf4(lVar14,0), lVar14 == 0)) ||
         (plVar9 = (long *)FUN_0267dac8(lVar14,0), plVar9 == (long *)0x0)) goto LAB_00e443fc;
      unaff_x24 = 0xc;
      iVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar8;
      iVar8 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar8;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar5 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar8,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x22 = (ulong)(int)in_stack_00000068;
      unaff_x28 = unaff_x22 | 1;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,*(undefined8 *)puVar5);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x29 = unaff_x22 | 2;
      FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar5);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      unaff_x21 = unaff_x22 | 3;
      FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,*(undefined8 *)puVar5);
      unaff_x25 = (long *)StringLiteral_9119;
      lVar14 = unaff_x19[0x60];
      if (lVar14 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar14 + 0x18) <= in_stack_00000068) ||
         (uVar22 = (uint)unaff_x21, *(uint *)(lVar14 + 0x18) <= uVar22)) goto LAB_00e44400;
      lVar15 = unaff_x19[0xca];
      fVar27 = unaff_s8;
      if (*(float *)(lVar14 + 0x20 + unaff_x22 * 8) != *(float *)(lVar14 + 0x20 + unaff_x21 * 8)) {
        fVar27 = 1.0;
      }
      *(float *)(unaff_x19 + 0xda) = fVar27;
      if (lVar15 == 0) goto LAB_00e443fc;
      cVar4 = *(char *)(lVar15 + 0x108);
      fVar27 = 1.0;
      if (cVar4 != '\0' || 0x7fffffff < *(uint *)(lVar15 + 0x138)) {
        fVar27 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar15 + 0x84) * fVar27;
      if (cVar4 == '\0') {
        iVar36 = *(int *)(lVar15 + 0x160);
        iVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        uVar34 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar8 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar8 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        fVar30 = (float)iVar36;
        fVar27 = (float)iVar8;
        puVar18 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar15 + 0x100) == 0) goto LAB_00e443fc;
        fVar27 = (float)FUN_00e5df18(*(long *)(lVar15 + 0x100),0);
        puVar18 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*in_stack_00000060 == 0.0) ||
            (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) ||
           (plVar9 = *(long **)(lVar14 + 0x18), plVar9 == (long *)0x0)) goto LAB_00e443fc;
        iVar8 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar30 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar27 / (*(float *)(lVar14 + 0x40) * (float)iVar8 * 0.25);
        FUN_00e5df18(lVar14,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar14 = *(long *)(unaff_x19[0xca] + 0x100), lVar14 == 0 ||
            (plVar9 = *(long **)(lVar14 + 0x18), plVar9 == (long *)0x0)))) goto LAB_00e443fc;
        iVar8 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
        if ((*in_stack_00000060 == 0.0) ||
           (lVar14 = *(long *)((long)*in_stack_00000060 + 0x100), lVar14 == 0)) goto LAB_00e443fc;
        fVar27 = *(float *)(lVar14 + 0x44) * (float)iVar8;
      }
      fVar33 = 0.25;
      fVar30 = fVar30 / (fVar27 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar30;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar30,(int)unaff_x19[0xdb]);
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
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_02681b9c(uVar19,0,0);
      fVar27 = (float)uVar34;
      unaff_x27 = in_stack_00000020;
    } while ((uVar10 & 1) == 0);
    if (in_stack_00000050 == in_stack_00000010) {
      if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
      fVar30 = (float)FUN_00e5b838(*in_stack_00000060,0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      pfVar12 = *(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
      fVar27 = fVar27 - pfVar12[2];
      uVar34 = (ulong)(uint)fVar27;
      if (fVar27 * fVar27 +
          (fVar30 - *pfVar12) * (fVar30 - *pfVar12) + (fVar33 - pfVar12[1]) * (fVar33 - pfVar12[1])
          < DAT_028aa020) goto LAB_00e3dbd8;
    }
    if ((*in_stack_00000060 == 0.0) ||
       (lVar14 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar14 == 0)) goto LAB_00e443fc;
    uVar19 = *(undefined8 *)(lVar14 + 0x38);
    if (DAT_03774d77 == '\0') {
      thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__);
      DAT_03774d77 = '\x01';
    }
    fVar27 = (float)uVar19 -
             (float)**(undefined8 **)
                      (*(long *)
                        Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                      0xb8);
    fVar30 = (float)((ulong)uVar19 >> 0x20) -
             (float)((ulong)**(undefined8 **)
                              (*(long *)
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              + 0xb8) >> 0x20);
    if (DAT_028aa020 <= fVar27 * fVar27 + fVar30 * fVar30) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
    }
    dVar13 = *in_stack_00000060;
    if ((dVar13 == 0.0) || (lVar14 = *(long *)((long)dVar13 + 0xb0), lVar14 == 0))
    goto LAB_00e443fc;
    fVar30 = (float)unaff_d14 * *(float *)(lVar14 + 0x38);
    *(float *)(unaff_x19 + 0xc9) = fVar30;
    fVar27 = (float)unaff_d14 * *(float *)(lVar14 + 0x3c);
    *(float *)((long)unaff_x19 + 0x64c) = fVar27;
    param_2 = unaff_s10;
    if (*(char *)(lVar14 + 0x25) != '\0') {
      param_2 = 1.0 / *(float *)((long)dVar13 + 0x84);
    }
    lVar14 = *in_stack_00000038;
    if (lVar14 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) break;
    lVar15 = lVar14 + unaff_x22 * 0xc;
    fVar33 = *(float *)(lVar15 + 0x20);
    uVar19 = *(undefined8 *)(lVar15 + 0x24);
    *(float *)(unaff_x19 + 0xcd) = fVar33;
    in_stack_00000040[0xf] = uVar19;
    *(float *)(unaff_x19 + 0xd0) = fVar33;
    fVar35 = (float)uVar19;
    *(float *)((long)unaff_x19 + 0x684) = fVar35;
    uVar17 = (uint)unaff_x28;
    if (*(uint *)(lVar14 + 0x18) <= uVar17) break;
    lVar15 = lVar14 + unaff_x28 * 0xc;
    uVar31 = *(undefined4 *)(lVar15 + 0x20);
    uVar19 = *(undefined8 *)(lVar15 + 0x24);
    *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
    in_stack_00000040[0xf] = uVar19;
    *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
    *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
    if (*(uint *)(lVar14 + 0x18) <= (uint)unaff_x29) break;
    lVar15 = lVar14 + unaff_x29 * 0xc;
    uVar31 = *(undefined4 *)(lVar15 + 0x20);
    uVar19 = *(undefined8 *)(lVar15 + 0x24);
    *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
    in_stack_00000040[0xf] = uVar19;
    *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
    *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
    if (*(uint *)(lVar14 + 0x18) <= uVar22) break;
    lVar14 = lVar14 + unaff_x21 * 0xc;
    uVar31 = *(undefined4 *)(lVar14 + 0x20);
    uVar19 = *(undefined8 *)(lVar14 + 0x24);
    unaff_x24 = 0xc;
    *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
    in_stack_00000040[0xf] = uVar19;
    *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
    *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
    param_1 = *(long *)((long)dVar13 + 0xb0);
    if (param_1 == 0) goto LAB_00e443fc;
    if (*(char *)(param_1 + 0x24) != '\0') {
      fVar28 = *(float *)((long)dVar13 + 0x44);
      *(float *)(unaff_x19 + 0xd8) = fVar28;
      fVar29 = *(float *)((long)dVar13 + 0x48);
      lVar14 = unaff_x19[0x61];
      *(float *)((long)unaff_x19 + 0x6c4) = fVar29;
      if (lVar14 == 0) goto LAB_00e443fc;
      uVar25 = *(uint *)(lVar14 + 0x18);
      if (uVar25 <= in_stack_00000068) break;
      lVar15 = lVar14 + unaff_x22 * 8;
      *(float *)(lVar15 + 0x20) =
           (fVar30 + param_2 * (fVar33 - fVar28)) - *(float *)(param_1 + 0x30);
      *(float *)(lVar15 + 0x24) =
           (fVar27 + param_2 * (fVar35 - fVar29)) - *(float *)(param_1 + 0x34);
      if (((uVar25 <= uVar17) ||
          (*(ulong *)(lVar14 + unaff_x28 * 8 + 0x20) =
                CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                         ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                         (float)((ulong)unaff_x19[0xd8] >> 0x20)) * param_2) -
                         (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                         ((float)unaff_x19[0xc9] +
                         ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * param_2) -
                         (float)*(undefined8 *)(param_1 + 0x30)), uVar25 <= (uint)unaff_x29)) ||
         (*(ulong *)(lVar14 + unaff_x29 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        param_2 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                  (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] +
                        param_2 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                        (float)*(undefined8 *)(param_1 + 0x30)), uVar25 <= uVar22)) break;
      uVar34 = unaff_x19[0xd8];
      *(ulong *)(lVar14 + unaff_x21 * 8 + 0x20) =
           CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                    param_2 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(uVar34 >> 0x20))) -
                    (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                    ((float)unaff_x19[0xc9] + param_2 * ((float)unaff_x19[0xd6] - (float)uVar34)) -
                    (float)*(undefined8 *)(param_1 + 0x30));
      goto LAB_00e3dbd8;
    }
    in_x9 = *in_stack_00000028;
    if (in_x9 == 0) goto LAB_00e443fc;
    in_w10 = *(uint *)(in_x9 + 0x18);
    if (in_w10 <= in_stack_00000068) break;
    lVar14 = in_x9 + unaff_x22 * 8;
    *(float *)(lVar14 + 0x20) = (fVar30 + param_2 * fVar33) - *(float *)(param_1 + 0x30);
    *(float *)(lVar14 + 0x24) = (fVar27 + param_2 * fVar35) - *(float *)(param_1 + 0x34);
    if (in_w10 <= uVar17) break;
    param_3 = unaff_x19[0xd2];
    param_4 = unaff_x19[0xc9];
    param_5 = *(undefined8 *)(param_1 + 0x30);
    in_x11 = in_x9 + unaff_x28 * 8;
  }
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar11 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar15 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar15 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar11) goto LAB_00e44400;
    puVar2 = (undefined4 *)(lVar15 + lVar14);
    *puVar2 = uVar31;
    puVar2[1] = (int)uVar10;
    puVar2[2] = (int)uVar34;
    lVar15 = unaff_x19[0xca];
    if ((lVar15 == 0) || (lVar20 = unaff_x19[0xcc], lVar20 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar20 + 0x18) <= uVar11) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar15 + 0x4c);
    uVar11 = uVar11 + 1;
    puVar18 = (undefined8 *)(lVar20 + lVar14);
    lVar14 = lVar14 + 0xc;
    *puVar18 = *(undefined8 *)(lVar15 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar31;
  } while (uVar22 != uVar11);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar9,*plVar1,*(undefined8 *)StringLiteral_225
                );
  }
  lVar14 = unaff_x19[0x59];
  if (lVar14 != 0) {
    (**(code **)(lVar14 + 0x18))
              (*(undefined8 *)(lVar14 + 0x40),*in_stack_00000038,*plVar9,*plVar1,
               *(undefined8 *)(lVar14 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar14 = __start_il2cpp();
  if (lVar14 != 0) {
    if ((*(char *)(lVar14 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


