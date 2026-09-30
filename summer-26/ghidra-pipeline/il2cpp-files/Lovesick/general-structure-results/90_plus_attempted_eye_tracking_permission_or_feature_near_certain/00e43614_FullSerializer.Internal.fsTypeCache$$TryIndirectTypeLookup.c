/*
FUNCTION_NAME: FullSerializer.Internal.fsTypeCache$$TryIndirectTypeLookup
ENTRY_POINT: 00e43614
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

void FullSerializer_Internal_fsTypeCache__TryIndirectTypeLookup(void)

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
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  long *unaff_x19;
  undefined8 uVar16;
  undefined8 *puVar17;
  long unaff_x20;
  uint uVar18;
  uint *unaff_x21;
  uint *puVar19;
  uint uVar20;
  undefined8 uVar21;
  ulong unaff_x22;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  long unaff_x23;
  long unaff_x24;
  long lVar25;
  uint unaff_w25;
  long *plVar26;
  long lVar27;
  double *unaff_x26;
  float unaff_w28;
  ulong unaff_x29;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float unaff_s8;
  float fVar35;
  int iVar36;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar37;
  float fVar38;
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
  
  do {
    fVar35 = (float)(int)(unaff_s10 + -0.5);
LAB_00e43634:
    fVar29 = unaff_s12;
    if (1.0 < unaff_s12) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * unaff_w28;
    if (unaff_s12 < 0.0) {
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
    fVar34 = unaff_s11;
    if (1.0 < unaff_s11) {
      fVar34 = 1.0;
    }
    fVar37 = (float)unaff_w25 / unaff_s9;
    fVar34 = fVar34 * unaff_w28;
    if (unaff_s11 < 0.0) {
      fVar34 = unaff_s8;
    }
    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
    if (0.0 <= fVar34) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43744;
      }
      fVar38 = (float)(int)(fVar34 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar34;
      }
    }
    else {
      fVar38 = (float)(int)(fVar34 + -0.5);
    }
    if (1.0 < fVar37) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * unaff_w28;
    dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar34 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar34 = (float)(int)(fVar37 + 0.5);
      }
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar37 + -0.5);
    }
    if (*(uint *)(unaff_x24 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    *unaff_x21 = (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
                 (int)fVar34 << 0x18;
    lVar25 = *in_stack_00000030;
    if (lVar25 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar25 + 0x18) <= (uint)unaff_x22) goto LAB_00e44400;
    puVar19 = (uint *)(lVar25 + unaff_x23 * 4 + 0x20);
    uVar18 = *puVar19;
    fVar29 = (float)FUN_026982b0((float)(uVar18 & 0xff) / unaff_w28,0);
    fVar34 = (float)FUN_026982b0((float)(uVar18 >> 8 & 0xff) / unaff_w28,0);
    fVar37 = (float)FUN_026982b0((float)(uVar18 >> 0x10 & 0xff) / unaff_w28,0);
    fVar35 = fVar29;
    if (1.0 < fVar29) {
      fVar35 = 1.0;
    }
    fVar35 = fVar35 * unaff_w28;
    if (fVar29 < 0.0) {
      fVar35 = unaff_s8;
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
    fVar38 = (float)(uVar18 >> 0x18) / unaff_w28;
    fVar34 = fVar34 * 255.0;
    if (fVar37 < 0.0) {
      fVar34 = unaff_s8;
    }
    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
    if (0.0 <= fVar34) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43a84;
      }
      fVar37 = (float)(int)(fVar34 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = fVar34;
      }
    }
    else {
      fVar37 = (float)(int)(fVar34 + -0.5);
    }
    if (1.0 < fVar38) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar34 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar34 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar38 + -0.5);
    }
    if (*(uint *)(lVar25 + 0x18) <= (uint)unaff_x22) goto LAB_00e44400;
    *puVar19 = (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
    lVar25 = *in_stack_00000030;
    if (lVar25 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar25 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
    puVar19 = (uint *)(lVar25 + unaff_x20 * 4 + 0x20);
    uVar18 = *puVar19;
    fVar29 = (float)FUN_026982b0((float)(uVar18 & 0xff) / 255.0,0);
    fVar34 = (float)FUN_026982b0((float)(uVar18 >> 8 & 0xff) / 255.0,0);
    fVar37 = (float)FUN_026982b0((float)(uVar18 >> 0x10 & 0xff) / 255.0,0);
    fVar35 = fVar29;
    if (1.0 < fVar29) {
      fVar35 = 1.0;
    }
    fVar35 = fVar35 * 255.0;
    if (fVar29 < 0.0) {
      fVar35 = unaff_s8;
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
    fVar38 = (float)(uVar18 >> 0x18) / 255.0;
    fVar34 = fVar34 * 255.0;
    if (fVar37 < 0.0) {
      fVar34 = unaff_s8;
    }
    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
    if (0.0 <= fVar34) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43dbc;
      }
      fVar37 = (float)(int)(fVar34 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = fVar34;
      }
    }
    else {
      fVar37 = (float)(int)(fVar34 + -0.5);
    }
    if (1.0 < fVar38) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar34 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar34 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar34 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar34 = (float)(int)(fVar38 + -0.5);
    }
    if (*(uint *)(lVar25 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
    *puVar19 = (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar34 << 0x18;
    lVar25 = *in_stack_00000030;
    if (lVar25 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    puVar19 = (uint *)(lVar25 + in_stack_00000058 * 4 + 0x20);
    uVar18 = *puVar19;
    fVar29 = (float)FUN_026982b0((float)(uVar18 & 0xff) / 255.0,0);
    fVar34 = (float)FUN_026982b0((float)(uVar18 >> 8 & 0xff) / 255.0,0);
    fVar37 = (float)FUN_026982b0((float)(uVar18 >> 0x10 & 0xff) / 255.0,0);
    fVar35 = fVar29;
    if (1.0 < fVar29) {
      fVar35 = 1.0;
    }
    fVar35 = fVar35 * 255.0;
    if (fVar29 < 0.0) {
      fVar35 = unaff_s8;
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
    uVar9 = 0x3f800000;
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
    fVar38 = (float)(uVar18 >> 0x18) / 255.0;
    fVar34 = fVar34 * 255.0;
    if (fVar37 < 0.0) {
      fVar34 = unaff_s8;
    }
    dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
    if (0.0 <= fVar34) {
      if (dVar32 == 0.5) {
        fVar34 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e440f4;
      }
      fVar37 = (float)(int)(fVar34 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar34 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = fVar34;
      }
    }
    else {
      fVar37 = (float)(int)(fVar34 + -0.5);
    }
    if (1.0 < fVar38) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      uVar12 = 0;
      if (dVar32 == 0.5) {
        fVar34 = 1.0;
        goto LAB_00e44170;
      }
      fVar38 = (float)(int)(fVar38 + 0.5);
    }
    else {
      uVar12 = 0;
      if (dVar32 == -0.5) {
        fVar34 = -1.0;
LAB_00e44170:
        fVar34 = (float)_fStack0000000000000070 + fVar34;
        uVar12 = (ulong)(uint)fVar34;
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = fVar34;
        }
      }
      else {
        fVar38 = (float)(int)(fVar38 + -0.5);
      }
    }
    if (*(uint *)(lVar25 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    *puVar19 = (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
    do {
      do {
        puVar6 = StringLiteral_4992;
        puVar5 = OVREyeGaze_TypeInfo;
        in_stack_00000050 = in_stack_00000050 + 1;
        if (in_stack_00000050 == in_stack_00000018) {
          if (((unaff_x19[0x58] == 0) || (iVar8 = FUN_026c82cc(unaff_x19[0x58],0), iVar8 < 1)) &&
             (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
          puVar5 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
          if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
          iVar8 = *(int *)(unaff_x19[0xf] + 0x10);
          plVar10 = unaff_x19 + 0xcb;
          if (iVar8 != *(int *)(unaff_x19[0xcb] + 0x18)) {
            FUN_010afdd4(plVar10,iVar8,
                         *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
          }
          if ((unaff_x19[0xcc] == 0) || (lVar25 = unaff_x19[0xf], lVar25 == 0)) goto LAB_00e443fc;
          plVar26 = unaff_x19 + 0xcc;
          if (*(int *)(lVar25 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar26,*(int *)(lVar25 + 0x10),*(undefined8 *)puVar5);
            lVar25 = unaff_x19[0xf];
            if (lVar25 == 0) goto LAB_00e443fc;
          }
          uVar18 = *(uint *)(lVar25 + 0x10);
          if ((int)uVar18 < 1) goto LAB_00e44358;
          uVar22 = 0;
          lVar25 = 0x20;
          goto LAB_00e442cc;
        }
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
                     *(undefined8 *)StringLiteral_4992);
        *unaff_x26 = _fStack0000000000000070;
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        iVar8 = FUN_00e4e99c();
        if (iVar8 <= *(int *)((long)unaff_x19 + 0x38c)) {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          *(undefined1 *)((long)*unaff_x26 + 0x165) = 1;
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
               (FUN_0132138c(unaff_x19[9],iVar8,&stack0x00000070,*(undefined8 *)puVar6),
               _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
            *(undefined4 *)(unaff_x19 + 0x4a) =
                 *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
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
          dVar32 = *unaff_x26;
          if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x78) == 0)) goto LAB_00e443fc;
          fVar29 = *(float *)(*(long *)((long)dVar32 + 0x78) + 0x18);
          fVar35 = DAT_028aa034;
          if (fVar29 != 0.0) {
            fVar35 = fVar29;
          }
          if ((0.0 < (unaff_s15 - *(float *)((long)dVar32 + 100)) / fVar35) &&
             (*(char *)((long)dVar32 + 0x165) == '\0')) {
            *(undefined1 *)((long)dVar32 + 0x165) = 1;
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
                  lVar25 = unaff_x19[0xca];
                  if (lVar25 == 0) goto LAB_00e443fc;
                  fVar34 = *(float *)(lVar25 + 0x48);
                  fVar35 = *(float *)(unaff_x19 + 0x4b);
                  fVar37 = fVar34 + *(float *)((long)unaff_x19 + 0x50c);
                  fVar29 = *(float *)(unaff_x19 + 0x4a);
                  if (fVar34 <= *(float *)(unaff_x19 + 0x4a)) {
                    fVar29 = fVar34;
                  }
                  *(float *)(unaff_x19 + 0x4a) = fVar29;
                  fVar29 = *(float *)((long)unaff_x19 + 0x254);
                  if (fVar37 <= *(float *)((long)unaff_x19 + 0x254)) {
                    fVar29 = fVar37;
                  }
                  *(float *)((long)unaff_x19 + 0x254) = fVar29;
                  fVar29 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar25,0);
                  fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) +
                           *(float *)((long)unaff_x19 + 0x55c);
                  if (fVar35 <= fVar29) {
                    fVar35 = fVar29;
                  }
                  *(float *)(unaff_x19 + 0x4b) = fVar35;
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
          lVar25 = unaff_x19[0x55];
          if (lVar25 != 0) {
            (**(code **)(lVar25 + 0x18))
                      (*(undefined8 *)(lVar25 + 0x40),*(undefined8 *)(lVar25 + 0x28));
          }
        }
        unaff_x19[0xc6] = 0;
        fVar29 = 0.0;
        *(undefined4 *)(unaff_x19 + 199) = 0;
        fVar35 = 0.0;
        if ((((0.0 < fStack000000000000004c) &&
             (uVar18 = *(uint *)(unaff_x19 + 0x2a), fVar35 = fVar29, uVar18 < 5)) &&
            ((1 << (ulong)(uVar18 & 0x1f) & 0x19U) != 0)) &&
           (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
          if (uVar18 == 4) {
            lVar25 = unaff_x19[0xc];
            if (lVar25 == 0) goto LAB_00e443fc;
            if (0 < *(int *)(lVar25 + 0x18)) {
              iVar8 = 0;
              do {
                FUN_0132138c(lVar25,iVar8,&stack0x00000070,*(undefined8 *)puVar5);
                *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                fVar35 = fStack0000000000000070;
                if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
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
            fVar35 = 0.0;
            while (iVar8 < *(int *)(lVar25 + 0x18)) {
              FUN_0132138c(lVar25,iVar8,&stack0x00000070,*(undefined8 *)puVar5);
              fVar35 = fVar35 + fStack0000000000000070;
              *(float *)((long)unaff_x19 + 0x634) = fVar35;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar35)
              break;
              lVar25 = unaff_x19[0xb];
              iVar8 = iVar8 + 1;
              if (lVar25 == 0) goto LAB_00e443fc;
            }
          }
        }
        *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        fVar29 = *(float *)((long)unaff_x19 + 0x53c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
        if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
        fVar34 = *(float *)((long)_fStack0000000000000070 + 0x5c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar6);
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        fVar38 = *(float *)(unaff_x19 + 0xa8);
        fVar37 = *(float *)(unaff_x19 + 199) + fVar38;
        *(float *)((long)unaff_x19 + 0x634) =
             fVar35 + fVar29 + (fVar34 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
        *(float *)(unaff_x19 + 199) = fVar37;
        puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        fVar29 = 1.0;
        fVar35 = 1.0;
        uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
        in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar30;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar16 = *(undefined8 *)(unaff_x19[0xca] + 200);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_02681b9c(uVar16,0,0);
        if ((uVar9 & 1) != 0) {
          lVar25 = __start_il2cpp();
          if (lVar25 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar25 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar30 = FUN_00e4ee40();
            *(undefined4 *)((long)unaff_x19 + 0x674) = uVar30;
            *(float *)(unaff_x19 + 0xcf) = fVar37;
            *(float *)((long)unaff_x19 + 0x67c) = fVar38;
          }
        }
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar5);
          DAT_03774d76 = '\x01';
        }
        lVar27 = *(long *)puVar5;
        uVar30 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
        *in_stack_00000040 = **(undefined8 **)(lVar27 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar30;
        lVar25 = (*(long **)(lVar27 + 0xb8))[1];
        unaff_x19[0xc0] = **(long **)(lVar27 + 0xb8);
        *(int *)(unaff_x19 + 0xc1) = (int)lVar25;
        uVar30 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
        in_stack_00000040[3] = **(undefined8 **)(lVar27 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x614) = uVar30;
        lVar25 = (*(long **)(lVar27 + 0xb8))[1];
        unaff_x19[0xc3] = **(long **)(lVar27 + 0xb8);
        *(int *)(unaff_x19 + 0xc4) = (int)lVar25;
        uVar30 = *(undefined4 *)(*(undefined8 **)(lVar27 + 0xb8) + 1);
        in_stack_00000040[6] = **(undefined8 **)(lVar27 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar30;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar16 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_02681b9c(uVar16,0,0);
        if ((uVar9 & 1) != 0) {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
            lVar25 = __start_il2cpp();
            if (lVar25 == 0) goto LAB_00e443fc;
            if ((*(char *)(lVar25 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0'))
            {
              lVar25 = unaff_x19[0xca];
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0xc0), lVar27 == 0))
              goto LAB_00e443fc;
              fVar34 = fStack0000000000000048;
              if (*(char *)(lVar27 + 0x18) != '\0') {
                fVar37 = *(float *)(lVar25 + 100);
                fVar34 = *(float *)((long)unaff_x19 + 0x2ec) - fVar37;
              }
              if (*(char *)(lVar27 + 0x19) != '\0') {
                uVar30 = FUN_00e4e9f4(fVar34);
                lVar25 = unaff_x19[0xca];
                *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar30;
                *(float *)(unaff_x19 + 0xbf) = fVar37;
                *(float *)((long)unaff_x19 + 0x5fc) = fVar38;
                if (lVar25 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar25 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar25 + 0xc0) + 0x28) != '\0') {
                fVar28 = (float)FUN_00e4e9f4(fVar34);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar37;
                fVar33 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc0] =
                     CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar33;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar37 = (float)FUN_00e4e9f4(fVar34);
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar33;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[3] =
                     CONCAT44(fVar33 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar37 + (float)in_stack_00000040[3]);
                *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar28 = (float)FUN_00e4e9f4(fVar34);
                *(float *)((long)unaff_x19 + 0x63c) = fVar28;
                *(float *)(unaff_x19 + 200) = fVar33;
                fVar37 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc3] =
                     CONCAT44(fVar33 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar28 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar37;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar34 = (float)FUN_00e4e9f4(fVar34);
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar37;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[6] =
                     CONCAT44(fVar37 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar34 + (float)in_stack_00000040[6]);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar38 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar25 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar25 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar25 + 0xc0) + 0x50) != '\0') {
                FUN_00e5eda8(lVar25,0);
                fVar34 = (float)FUN_00e4eb50();
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar37;
                fVar28 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc0] =
                     CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar34 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar28;
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b838(lVar25,0);
                fVar34 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar28;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[3] =
                     CONCAT44(fVar28 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar34 + (float)in_stack_00000040[3]);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5eea4(lVar25,0);
                fVar34 = (float)FUN_00e4eb50();
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar28;
                fVar37 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc3] =
                     CONCAT44(fVar28 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar34 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar37;
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b7d8(lVar25,0);
                fVar34 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar37;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[6] =
                     CONCAT44(fVar37 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar34 + (float)in_stack_00000040[6]);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar38 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar25 == 0) goto LAB_00e443fc;
              }
              lVar27 = *(long *)(lVar25 + 0xc0);
              if (lVar27 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar27 + 0x60) != '\0') {
                uVar21 = *(undefined8 *)(lVar27 + 0x68);
                uVar16 = FUN_00e5eda8(lVar25,0);
                fVar34 = (float)FUN_00e4ecc4(uVar16,lVar25,uVar21);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar37;
                fVar28 = fVar38 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc0] =
                     CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar34 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar28;
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar21 = *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x68);
                uVar16 = FUN_00e5b838(lVar25,0);
                fVar34 = (float)FUN_00e4ecc4(uVar16,lVar25,uVar21);
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar28;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[3] =
                     CONCAT44(fVar28 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar34 + (float)in_stack_00000040[3]);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar38 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar21 = *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x68);
                uVar16 = FUN_00e5eea4(lVar25,0);
                fVar34 = (float)FUN_00e4ecc4(uVar16,lVar25,uVar21);
                lVar25 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar28;
                fVar37 = fVar38 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                unaff_x19[0xc3] =
                     CONCAT44(fVar28 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar34 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar37;
                if ((lVar25 == 0) || (*(long *)(lVar25 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar21 = *(undefined8 *)(*(long *)(lVar25 + 0xc0) + 0x68);
                uVar16 = FUN_00e5b7d8(lVar25,0);
                fVar34 = (float)FUN_00e4ecc4(uVar16,lVar25,uVar21);
                *(float *)((long)unaff_x19 + 0x63c) = fVar34;
                *(float *)(unaff_x19 + 200) = fVar37;
                *(float *)((long)unaff_x19 + 0x644) = fVar38;
                in_stack_00000040[6] =
                     CONCAT44(fVar37 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar34 + (float)in_stack_00000040[6]);
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
            uVar16 = *(undefined8 *)((long)*unaff_x26 + 0x80);
            in_stack_00000040[0x1e] =
                 CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar16 >> 0x20),
                          (float)unaff_x19[0x24] * (float)uVar16);
          }
          lVar25 = unaff_x19[0x5e];
          *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar34 = (float)FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x674);
          uVar12 = (ulong)(int)in_stack_00000068;
          *(float *)(lVar25 + uVar12 * 0xc + 0x20) =
               fVar34 + fVar37 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          fVar34 = *(float *)((long)unaff_x19 + 0x604);
          *(float *)(lVar25 + uVar12 * 0xc + 0x24) =
               fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar34 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(float *)(lVar25 + uVar12 * 0xc + 0x28) =
               fVar34 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar34 = (float)FUN_00e5b838(*unaff_x26,0);
          uVar22 = uVar12 | 1;
          uVar18 = (uint)uVar22;
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar25 + uVar22 * 0xc + 0x20) =
               fVar34 + fVar37 + *(float *)((long)unaff_x19 + 0x60c) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          fVar34 = *(float *)(unaff_x19 + 0xc2);
          *(float *)(lVar25 + uVar22 * 0xc + 0x24) =
               fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar34 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          *(float *)(lVar25 + uVar22 * 0xc + 0x28) =
               fVar34 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar34 = (float)FUN_00e5eea4(*unaff_x26,0);
          uVar11 = uVar12 | 2;
          uVar20 = (uint)uVar11;
          if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar25 + uVar11 * 0xc + 0x20) =
               fVar34 + fVar37 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar34 = *(float *)((long)unaff_x19 + 0x61c);
          *(float *)(lVar25 + uVar11 * 0xc + 0x24) =
               fVar37 + *(float *)(unaff_x19 + 0xcf) + fVar34 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
          *(float *)(lVar25 + uVar11 * 0xc + 0x28) =
               fVar34 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar34 = (float)FUN_00e5b7d8(*unaff_x26,0);
          uVar24 = uVar12 | 3;
          uVar23 = (uint)uVar24;
          if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar25 + uVar24 * 0xc + 0x20) =
               fVar34 + fVar37 + *(float *)((long)unaff_x19 + 0x624) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
          uVar9 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
          *(float *)(lVar25 + uVar24 * 0xc + 0x24) =
               fVar37 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
               *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
               *(float *)(unaff_x19 + 0xdd);
          lVar25 = unaff_x19[0x5e];
          if ((lVar25 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar34 = *(float *)((long)unaff_x19 + 0x62c);
          *(float *)(lVar25 + uVar24 * 0xc + 0x28) =
               (float)uVar9 + *(float *)((long)unaff_x19 + 0x67c) + fVar34 +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar25 = unaff_x19[0xca];
          if (lVar25 == 0) goto LAB_00e443fc;
          lVar27 = *in_stack_00000020;
          if (*(char *)(lVar25 + 0x108) == '\0') {
            uVar30 = FUN_0272b9dc(lVar25 + 0x10,0);
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar27 = lVar27 + uVar12 * 8;
            *(undefined4 *)(lVar27 + 0x20) = uVar30;
            *(float *)(lVar27 + 0x24) = fVar34;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
            lVar25 = lVar25 + uVar22 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar25 = lVar25 + uVar11 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar25 = lVar25 + uVar24 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            uVar30 = FUN_00e5ecc0(*unaff_x26,0);
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            FUN_00e5ecc0(unaff_x19[0xca],0);
            *(float *)((long)unaff_x19 + 0x6cc) = fVar34;
          }
          else {
            if ((*(long *)(lVar25 + 0x100) == 0) ||
               (uVar30 = FUN_00e5dd14(fStack0000000000000048,*(long *)(lVar25 + 0x100),
                                      *(undefined4 *)(lVar25 + 0x10c),0), lVar27 == 0))
            goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar27 = lVar27 + uVar12 * 8;
            *(undefined4 *)(lVar27 + 0x20) = uVar30;
            *(float *)(lVar27 + 0x24) = fVar34;
            dVar32 = *unaff_x26;
            if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0)) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = FUN_00e5de6c(fStack0000000000000048,*(long *)((long)dVar32 + 0x100),
                                  *(undefined4 *)((long)dVar32 + 0x10c),0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
            lVar25 = lVar25 + uVar22 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            dVar32 = *unaff_x26;
            if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0)) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = FUN_00e5dea4(fStack0000000000000048,*(long *)((long)dVar32 + 0x100),
                                  *(undefined4 *)((long)dVar32 + 0x10c),0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar25 = lVar25 + uVar11 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            dVar32 = *unaff_x26;
            if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0)) goto LAB_00e443fc;
            lVar25 = *in_stack_00000020;
            uVar30 = thunk_FUN_00e5dd60(fStack0000000000000048,*(long *)((long)dVar32 + 0x100),
                                        *(undefined4 *)((long)dVar32 + 0x10c),0);
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar25 = lVar25 + uVar24 * 8;
            *(undefined4 *)(lVar25 + 0x20) = uVar30;
            *(float *)(lVar25 + 0x24) = fVar34;
            dVar32 = *unaff_x26;
            if ((dVar32 == 0.0) || (*(long *)((long)dVar32 + 0x100) == 0)) goto LAB_00e443fc;
            uVar30 = FUN_00e5dedc(fStack0000000000000048,*(long *)((long)dVar32 + 0x100),
                                  *(undefined4 *)((long)dVar32 + 0x10c),0);
            lVar25 = unaff_x19[0xca];
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar30;
            *(float *)((long)unaff_x19 + 0x6cc) = fVar34;
            if ((lVar25 == 0) || (lVar27 = *(long *)(lVar25 + 0x100), lVar27 == 0))
            goto LAB_00e443fc;
            if (((1 < *(int *)(lVar27 + 0x28)) && (0.0 < *(float *)(lVar27 + 0x34))) &&
               (*(int *)(lVar25 + 0x10c) < 0)) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
          }
        }
        else {
          dVar32 = *unaff_x26;
          if (dVar32 == 0.0) goto LAB_00e443fc;
          uVar9 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
          if ((*(float *)((long)dVar32 + 0x48) + *(float *)((long)dVar32 + 0x84) +
              *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
              DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
          lVar25 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar5);
            DAT_03774d76 = '\x01';
          }
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          uVar12 = (ulong)(int)in_stack_00000068;
          lVar25 = lVar25 + uVar12 * 0xc;
          *(undefined8 *)(lVar25 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar25 + 0x28) = uVar30;
          lVar25 = *in_stack_00000038;
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar12 | 1)) goto LAB_00e44400;
          lVar25 = lVar25 + (uVar12 | 1) * 0xc;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar25 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar25 + 0x28) = uVar30;
          lVar25 = *in_stack_00000038;
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar12 | 2)) goto LAB_00e44400;
          lVar25 = lVar25 + (uVar12 | 2) * 0xc;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar25 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar25 + 0x28) = uVar30;
          lVar25 = *in_stack_00000038;
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= (uint)(uVar12 | 3)) goto LAB_00e44400;
          lVar25 = lVar25 + (uVar12 | 3) * 0xc;
          uVar30 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
          *(undefined8 *)(lVar25 + 0x20) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
          *(undefined4 *)(lVar25 + 0x28) = uVar30;
        }
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        uVar16 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(uVar16,0,0);
        if ((uVar12 & 1) == 0) {
          lVar25 = unaff_x19[0x10];
        }
        else {
          if ((*unaff_x26 == 0.0) || (lVar25 = *(long *)((long)*unaff_x26 + 0xf8), lVar25 == 0))
          goto LAB_00e443fc;
          lVar25 = *(long *)(lVar25 + 0x18);
        }
        if (((lVar25 == 0) || (lVar25 = FUN_0272bcf4(lVar25,0), lVar25 == 0)) ||
           (plVar10 = (long *)FUN_0267dac8(lVar25,0), plVar10 == (long *)0x0)) goto LAB_00e443fc;
        iVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
        *(float *)(unaff_x19 + 0xda) = (float)iVar8;
        iVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
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
        uVar22 = (ulong)(int)in_stack_00000068;
        unaff_x22 = uVar22 | 1;
        FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 1,&stack0x00000070,*(undefined8 *)puVar5);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        unaff_x29 = uVar22 | 2;
        FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar5);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000058 = uVar22 | 3;
        FUN_0132149c(unaff_x19[0x62],in_stack_00000068 | 3,&stack0x00000070,*(undefined8 *)puVar5);
        plVar26 = (long *)StringLiteral_9119;
        lVar25 = unaff_x19[0x60];
        if (lVar25 == 0) goto LAB_00e443fc;
        if ((*(uint *)(lVar25 + 0x18) <= in_stack_00000068) ||
           (uVar18 = (uint)in_stack_00000058, *(uint *)(lVar25 + 0x18) <= uVar18))
        goto LAB_00e44400;
        lVar27 = unaff_x19[0xca];
        fVar34 = unaff_s8;
        if (*(float *)(lVar25 + 0x20 + uVar22 * 8) !=
            *(float *)(lVar25 + 0x20 + in_stack_00000058 * 8)) {
          fVar34 = fVar29;
        }
        *(float *)(unaff_x19 + 0xda) = fVar34;
        if (lVar27 == 0) goto LAB_00e443fc;
        cVar4 = *(char *)(lVar27 + 0x108);
        fVar34 = fVar29;
        if (cVar4 != '\0' || 0x7fffffff < *(uint *)(lVar27 + 0x138)) {
          fVar34 = -1.0;
        }
        *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar27 + 0x84) * fVar34;
        if (cVar4 == '\0') {
          iVar36 = *(int *)(lVar27 + 0x160);
          iVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          uVar9 = 0x3e800000;
          *(float *)(unaff_x19 + 0xdb) = (float)iVar36 / ((float)iVar8 * 0.25);
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          iVar36 = *(int *)(unaff_x19[0xca] + 0x160);
          iVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          fVar37 = (float)iVar36;
          fVar34 = (float)iVar8;
          puVar17 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        }
        else {
          if (*(long *)(lVar27 + 0x100) == 0) goto LAB_00e443fc;
          fVar34 = (float)FUN_00e5df18(*(long *)(lVar27 + 0x100),0);
          puVar17 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
          if (((*in_stack_00000060 == 0.0) ||
              (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100), lVar25 == 0)) ||
             (plVar10 = *(long **)(lVar25 + 0x18), plVar10 == (long *)0x0)) goto LAB_00e443fc;
          iVar8 = (**(code **)(*plVar10 + 0x188))(plVar10,*(undefined8 *)(*plVar10 + 400));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100), lVar25 == 0)) goto LAB_00e443fc;
          fVar37 = 0.25;
          *(float *)(unaff_x19 + 0xdb) = fVar34 / (*(float *)(lVar25 + 0x40) * (float)iVar8 * 0.25);
          FUN_00e5df18(lVar25,0);
          if ((unaff_x19[0xca] == 0) ||
             ((lVar25 = *(long *)(unaff_x19[0xca] + 0x100), lVar25 == 0 ||
              (plVar10 = *(long **)(lVar25 + 0x18), plVar10 == (long *)0x0)))) goto LAB_00e443fc;
          iVar8 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar25 = *(long *)((long)*in_stack_00000060 + 0x100), lVar25 == 0)) goto LAB_00e443fc;
          fVar34 = *(float *)(lVar25 + 0x44) * (float)iVar8;
        }
        fVar38 = 0.25;
        fVar37 = fVar37 / (fVar34 * 0.25);
        *(float *)((long)unaff_x19 + 0x6dc) = fVar37;
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000078 = CONCAT44(fVar37,(int)unaff_x19[0xdb]);
        FUN_0132149c(unaff_x19[99],in_stack_00000068,&stack0x00000070,*puVar17);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 1,&stack0x00000070,*puVar17);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 2,&stack0x00000070,*puVar17);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],in_stack_00000068 | 3,&stack0x00000070,*puVar17);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar16 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(uVar16,0,0);
        fVar34 = (float)uVar9;
        uVar23 = (uint)unaff_x22;
        uVar20 = (uint)unaff_x29;
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
            pfVar13 = *(float **)
                       (*(long *)
                         Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                       + 0xb8);
            fVar34 = fVar34 - pfVar13[2];
            uVar9 = (ulong)(uint)fVar34;
            if (fVar34 * fVar34 +
                (fVar37 - *pfVar13) * (fVar37 - *pfVar13) +
                (fVar38 - pfVar13[1]) * (fVar38 - pfVar13[1]) < DAT_028aa020) goto LAB_00e3dbd8;
          }
          if ((*in_stack_00000060 == 0.0) ||
             (lVar25 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar25 == 0)) goto LAB_00e443fc;
          uVar16 = *(undefined8 *)(lVar25 + 0x38);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              );
            DAT_03774d77 = '\x01';
          }
          fVar34 = (float)uVar16 -
                   (float)**(undefined8 **)
                            (*(long *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                            + 0xb8);
          fVar37 = (float)((ulong)uVar16 >> 0x20) -
                   (float)((ulong)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8) >> 0x20);
          if (DAT_028aa020 <= fVar34 * fVar34 + fVar37 * fVar37) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          dVar32 = *in_stack_00000060;
          if ((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xb0), lVar25 == 0))
          goto LAB_00e443fc;
          fVar37 = fStack0000000000000048 * *(float *)(lVar25 + 0x38);
          *(float *)(unaff_x19 + 0xc9) = fVar37;
          fVar34 = fStack0000000000000048 * *(float *)(lVar25 + 0x3c);
          *(float *)((long)unaff_x19 + 0x64c) = fVar34;
          if (*(char *)(lVar25 + 0x25) != '\0') {
            fVar35 = 1.0 / *(float *)((long)dVar32 + 0x84);
          }
          lVar25 = *in_stack_00000038;
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          lVar27 = lVar25 + uVar22 * 0xc;
          fVar38 = *(float *)(lVar27 + 0x20);
          uVar16 = *(undefined8 *)(lVar27 + 0x24);
          *(float *)(unaff_x19 + 0xcd) = fVar38;
          in_stack_00000040[0xf] = uVar16;
          *(float *)(unaff_x19 + 0xd0) = fVar38;
          fVar28 = (float)uVar16;
          *(float *)((long)unaff_x19 + 0x684) = fVar28;
          if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar27 = lVar25 + unaff_x22 * 0xc;
          uVar30 = *(undefined4 *)(lVar27 + 0x20);
          uVar16 = *(undefined8 *)(lVar27 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
          in_stack_00000040[0xf] = uVar16;
          *(undefined4 *)(unaff_x19 + 0xd2) = uVar30;
          *(int *)((long)unaff_x19 + 0x694) = (int)uVar16;
          if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
          lVar27 = lVar25 + unaff_x29 * 0xc;
          uVar30 = *(undefined4 *)(lVar27 + 0x20);
          uVar16 = *(undefined8 *)(lVar27 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
          in_stack_00000040[0xf] = uVar16;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar30;
          *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar16;
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          lVar25 = lVar25 + in_stack_00000058 * 0xc;
          uVar30 = *(undefined4 *)(lVar25 + 0x20);
          uVar16 = *(undefined8 *)(lVar25 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar30;
          in_stack_00000040[0xf] = uVar16;
          *(undefined4 *)(unaff_x19 + 0xd6) = uVar30;
          *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar16;
          lVar25 = *(long *)((long)dVar32 + 0xb0);
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(char *)(lVar25 + 0x24) == '\0') {
            lVar27 = *in_stack_00000028;
            if (lVar27 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar27 + 0x18);
            if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
            lVar14 = lVar27 + uVar22 * 8;
            *(float *)(lVar14 + 0x20) = (fVar37 + fVar35 * fVar38) - *(float *)(lVar25 + 0x30);
            *(float *)(lVar14 + 0x24) = (fVar34 + fVar35 * fVar28) - *(float *)(lVar25 + 0x34);
            if (((uVar3 <= uVar23) ||
                (*(ulong *)(lVar27 + unaff_x22 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar35 +
                               (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                               (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xd2] * fVar35 + (float)unaff_x19[0xc9]) -
                               (float)*(undefined8 *)(lVar25 + 0x30)), uVar3 <= uVar20)) ||
               (*(ulong *)(lVar27 + unaff_x29 * 8 + 0x20) =
                     CONCAT44((fVar35 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                              (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                              (fVar35 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                              (float)*(undefined8 *)(lVar25 + 0x30)), uVar3 <= uVar18))
            goto LAB_00e44400;
            uVar9 = unaff_x19[0xc9];
            *(ulong *)(lVar27 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44((fVar35 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(uVar9 >> 0x20)
                          ) - (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                          (fVar35 * (float)unaff_x19[0xd6] + (float)uVar9) -
                          (float)*(undefined8 *)(lVar25 + 0x30));
          }
          else {
            fVar33 = *(float *)((long)dVar32 + 0x44);
            *(float *)(unaff_x19 + 0xd8) = fVar33;
            fVar2 = *(float *)((long)dVar32 + 0x48);
            lVar27 = unaff_x19[0x61];
            *(float *)((long)unaff_x19 + 0x6c4) = fVar2;
            if (lVar27 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar27 + 0x18);
            if (uVar3 <= in_stack_00000068) goto LAB_00e44400;
            lVar14 = lVar27 + uVar22 * 8;
            *(float *)(lVar14 + 0x20) =
                 (fVar37 + fVar35 * (fVar38 - fVar33)) - *(float *)(lVar25 + 0x30);
            *(float *)(lVar14 + 0x24) =
                 (fVar34 + fVar35 * (fVar28 - fVar2)) - *(float *)(lVar25 + 0x34);
            if (((uVar3 <= uVar23) ||
                (*(ulong *)(lVar27 + unaff_x22 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                               ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                               (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar35) -
                               (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xc9] +
                               ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar35) -
                               (float)*(undefined8 *)(lVar25 + 0x30)), uVar3 <= uVar20)) ||
               (*(ulong *)(lVar27 + unaff_x29 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar35 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar35 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                              (float)*(undefined8 *)(lVar25 + 0x30)), uVar3 <= uVar18))
            goto LAB_00e44400;
            uVar9 = unaff_x19[0xd8];
            *(ulong *)(lVar27 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar35 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(uVar9 >> 0x20)
                                   )) - (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] + fVar35 * ((float)unaff_x19[0xd6] - (float)uVar9)
                          ) - (float)*(undefined8 *)(lVar25 + 0x30));
          }
        }
LAB_00e3dbd8:
        dVar32 = *in_stack_00000060;
        if (dVar32 == 0.0) goto LAB_00e443fc;
        if (*(char *)((long)dVar32 + 0x108) != '\0') {
          if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) == '\0') {
            lVar25 = *in_stack_00000020;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            lVar27 = *in_stack_00000028;
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *(undefined8 *)(lVar27 + uVar22 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + uVar22 * 8 + 0x20);
            lVar25 = *in_stack_00000020;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar27 = *in_stack_00000028;
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_00e44400;
            *(undefined8 *)(lVar27 + (long)(int)uVar23 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + (long)(int)uVar23 * 8 + 0x20);
            lVar25 = *in_stack_00000020;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar27 = *in_stack_00000028;
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_00e44400;
            *(undefined8 *)(lVar27 + (long)(int)uVar20 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + (long)(int)uVar20 * 8 + 0x20);
            lVar25 = *in_stack_00000020;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
            lVar27 = *in_stack_00000028;
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_00e44400;
            *(undefined8 *)(lVar27 + in_stack_00000058 * 8 + 0x20) =
                 *(undefined8 *)(lVar25 + in_stack_00000058 * 8 + 0x20);
            dVar32 = *in_stack_00000060;
            if (dVar32 == 0.0) goto LAB_00e443fc;
          }
        }
        dVar31 = DAT_028aa048;
        if (*(char *)((long)dVar32 + 0x108) == '\0') {
LAB_00e3dd34:
          uVar16 = *(undefined8 *)((long)dVar32 + 0xa8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_02681b9c(uVar16,0,0);
          dVar32 = *in_stack_00000060;
          if (dVar32 == 0.0) goto LAB_00e443fc;
          if ((uVar12 & 1) == 0) {
            uVar16 = *(undefined8 *)((long)dVar32 + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(uVar16,0,0);
            dVar32 = DAT_028aa048;
            if ((uVar12 & 1) == 0) {
              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
              uVar16 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_02681b9c(uVar16,0,0);
              lVar25 = *in_stack_00000030;
              if ((uVar9 & 1) == 0) {
                fVar29 = *(float *)((long)unaff_x19 + 0x8c);
                fVar34 = *(float *)(unaff_x19 + 0x12);
                fVar38 = *(float *)((long)unaff_x19 + 0x94);
                fVar37 = *(float *)(unaff_x19 + 0x13);
                fVar35 = fVar29;
                if (1.0 < fVar29) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar29 < 0.0) {
                  fVar35 = unaff_s8;
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
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fd48;
                  }
                  fVar34 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar29;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar29 + -0.5);
                }
                fVar29 = fVar38;
                if (1.0 < fVar38) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar38 < 0.0) {
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
                if (lVar25 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar25 + uVar22 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar25 = unaff_x19[0x5f];
                fVar37 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
                fVar35 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar35 = unaff_s8;
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
                fVar38 = fVar29;
                if (1.0 < fVar29) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar29 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar32 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40610;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar32 == -0.5) {
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
                fVar37 = fVar34;
                if (1.0 < fVar34) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar34 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar32 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar32 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar37 + -0.5);
                }
                if (lVar25 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar25 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar25 = unaff_x19[0x5f];
                fVar37 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
                fVar35 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar35 = unaff_s8;
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
                fVar38 = fVar29;
                if (1.0 < fVar29) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar29 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar32 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40e20;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar32 == -0.5) {
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
                fVar37 = fVar34;
                if (1.0 < fVar34) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar34 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar32 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar32 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar37 + -0.5);
                }
                if (lVar25 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
                *(uint *)(lVar25 + (long)(int)uVar20 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                fVar35 = *(float *)((long)unaff_x19 + 0x8c);
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar25 = unaff_x19[0x5f];
                fVar37 = *(float *)((long)unaff_x19 + 0x94);
                fVar34 = *(float *)(unaff_x19 + 0x13);
              }
              else {
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar27 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar27 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar27 + 0x18);
                fVar34 = *(float *)(lVar27 + 0x1c);
                fVar38 = *(float *)(lVar27 + 0x20);
                fVar37 = *(float *)(lVar27 + 0x24);
                fVar35 = fVar29;
                if (1.0 < fVar29) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar29 < 0.0) {
                  fVar35 = unaff_s8;
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
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fcc4;
                  }
                  fVar34 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar29;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar29 + -0.5);
                }
                fVar29 = fVar38;
                if (1.0 < fVar38) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar38 < 0.0) {
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
                if (lVar25 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar25 + uVar22 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar25 + 0x1c);
                lVar27 = *in_stack_00000030;
                fVar37 = *(float *)(lVar25 + 0x20);
                fVar34 = *(float *)(lVar25 + 0x24);
                fVar35 = *(float *)(lVar25 + 0x18) * 255.0;
                if (*(float *)(lVar25 + 0x18) < 0.0) {
                  fVar35 = unaff_s8;
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
                fVar38 = fVar29;
                if (1.0 < fVar29) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar29 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar32 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e4057c;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar32 == -0.5) {
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
                fVar37 = fVar34;
                if (1.0 < fVar34) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar34 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar32 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar32 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar37 + -0.5);
                }
                if (lVar27 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar27 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar27 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar25 + 0x1c);
                lVar27 = *in_stack_00000030;
                fVar37 = *(float *)(lVar25 + 0x20);
                fVar34 = *(float *)(lVar25 + 0x24);
                fVar35 = *(float *)(lVar25 + 0x18) * 255.0;
                if (*(float *)(lVar25 + 0x18) < 0.0) {
                  fVar35 = unaff_s8;
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
                fVar38 = fVar29;
                if (1.0 < fVar29) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar29 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar32 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40d8c;
                  }
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar32 == -0.5) {
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
                fVar37 = fVar34;
                if (1.0 < fVar34) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar34 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar32 == 0.5) {
                    fVar34 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar34 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar34 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar32 == -0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar37 + -0.5);
                }
                if (lVar27 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_00e44400;
                *(uint *)(lVar27 + (long)(int)uVar20 * 4 + 0x20) =
                     (int)fVar35 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar27 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar27 == 0))
                goto LAB_00e443fc;
                fVar35 = *(float *)(lVar27 + 0x18);
                fVar29 = *(float *)(lVar27 + 0x1c);
                lVar25 = *in_stack_00000030;
                fVar37 = *(float *)(lVar27 + 0x20);
                fVar34 = *(float *)(lVar27 + 0x24);
              }
              fVar38 = fVar35 * 255.0;
              if (fVar35 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar32 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar29;
              if (1.0 < fVar29) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar29 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar32 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar29;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
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
              uVar9 = 0x3f800000;
              fVar37 = fVar34;
              if (1.0 < fVar34) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar34 < 0.0) {
                fVar37 = unaff_s8;
              }
              dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar32 == 0.5) {
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar32 == -0.5) {
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar34 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar25 != 0) {
                if (uVar18 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar25 + in_stack_00000058 * 4 + 0x20) =
                       (int)fVar35 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                  goto LAB_00e43400;
                }
                goto LAB_00e44400;
              }
              goto LAB_00e443fc;
            }
            lVar25 = *in_stack_00000030;
            dVar31 = modf(DAT_028aa048,(double *)&stack0x00000070);
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
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            *(uint *)(lVar25 + uVar22 * 4 + 0x20) =
                 (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
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
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar25 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
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
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            *(uint *)(lVar25 + (long)(int)uVar20 * 4 + 0x20) =
                 (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
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
            if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
            *(uint *)(lVar25 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar16 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(uVar16,0,0);
            if ((uVar12 & 1) == 0) goto LAB_00e43400;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            puVar19 = (uint *)(lVar25 + uVar22 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
            goto LAB_00e443fc;
            fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
            fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
            fVar37 = *(float *)(lVar25 + 0x20);
            fVar34 = *(float *)(lVar25 + 0x24);
            fVar35 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar35 = unaff_s8;
            }
            dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar32 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e3ede4;
              }
              fVar29 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar35 = -1.0;
LAB_00e3ede4:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar35 + -0.5);
            }
            fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
            fVar35 = fVar38 * 255.0;
            if (fVar38 < 0.0) {
              fVar35 = unaff_s8;
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
            fVar38 = fVar37;
            if (1.0 < fVar37) {
              fVar38 = 1.0;
            }
            fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
            fVar38 = fVar38 * 255.0;
            if (fVar37 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar32 == 0.5) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ffb0;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar37;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar37 = fVar34;
            if (1.0 < fVar34) {
              fVar37 = 1.0;
            }
            fVar37 = fVar37 * 255.0;
            if (fVar34 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar32 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e40174;
              }
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar34 = -1.0;
LAB_00e40174:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            *puVar19 = (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                       ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            puVar19 = (uint *)(lVar25 + (long)(int)uVar23 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
            goto LAB_00e443fc;
            fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
            fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
            fVar37 = *(float *)(lVar25 + 0x20);
            fVar34 = *(float *)(lVar25 + 0x24);
            fVar35 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar35 = unaff_s8;
            }
            dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar32 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e404dc;
              }
              fVar29 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar35 = -1.0;
LAB_00e404dc:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar35 + -0.5);
            }
            fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
            fVar35 = fVar38 * 255.0;
            if (fVar38 < 0.0) {
              fVar35 = unaff_s8;
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
            fVar38 = fVar37;
            if (1.0 < fVar37) {
              fVar38 = 1.0;
            }
            fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
            fVar38 = fVar38 * 255.0;
            if (fVar37 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar32 == 0.5) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40888;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar37;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar37 = fVar34;
            if (1.0 < fVar34) {
              fVar37 = 1.0;
            }
            fVar37 = fVar37 * 255.0;
            if (fVar34 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar32 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e40a4c;
              }
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar34 = -1.0;
LAB_00e40a4c:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            *puVar19 = (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                       ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar25 = lVar25 + (long)(int)uVar20 * 4;
          }
          else {
            lVar25 = *(long *)((long)dVar32 + 0xa8);
            if (lVar25 == 0) goto LAB_00e443fc;
            fVar35 = *(float *)(lVar25 + 0x24);
            if (fVar35 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            plVar26 = (long *)StringLiteral_9119;
            cVar4 = *(char *)(lVar25 + 0x2c);
            lVar14 = *in_stack_00000030;
            lVar27 = *(long *)(lVar25 + 0x18);
            fVar35 = fStack0000000000000048 * fVar35;
            if (*(int *)(lVar25 + 0x28) == 1) {
              if (cVar4 == '\0') {
                if (lVar27 == 0) goto LAB_00e443fc;
                fVar37 = *(float *)(lVar25 + 0x20);
                fVar38 = *(float *)((long)dVar32 + 0x84);
                fVar35 = fVar35 + (*(float *)((long)dVar32 + 0x48) * fVar37) / fVar38;
                fVar35 = fVar35 - (float)(int)fVar35;
                fVar34 = fVar35;
                if (1.0 < fVar35) {
                  fVar34 = fVar29;
                }
                fVar28 = fVar34;
                if (fVar35 < 0.0) {
                  fVar28 = 0.0;
                }
                fVar28 = (float)FUN_0269ad38(fVar28,lVar27,0);
                fVar35 = fVar28;
                if (1.0 < fVar28) {
                  fVar35 = fVar29;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar28 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar32 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3eeac;
                  }
                  fVar29 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar35;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar35 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar34 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar32 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e41534;
                  }
                  fVar34 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar35;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
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
                if (lVar14 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar14 + uVar22 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                dVar32 = *in_stack_00000060;
                if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                   (lVar27 = *(long *)(lVar25 + 0x18), lVar27 == 0)) goto LAB_00e443fc;
                fVar34 = *(float *)((long)dVar32 + 0x48);
                fVar37 = *(float *)((long)dVar32 + 0x84);
                lVar14 = *in_stack_00000030;
                fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                         (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
                fVar29 = fVar29 - (float)(int)fVar29;
                fVar35 = fVar29;
                if (1.0 < fVar29) {
                  fVar35 = 1.0;
                }
              }
              else {
                if (lVar27 == 0) goto LAB_00e443fc;
                fVar37 = *(float *)((long)dVar32 + 0x84);
                fVar38 = *(float *)(lVar25 + 0x20);
                fVar35 = fVar35 + ((*(float *)((long)dVar32 + 0x48) + fVar37) * fVar38) / fVar37;
                fVar35 = fVar35 - (float)(int)fVar35;
                fVar34 = fVar35;
                if (1.0 < fVar35) {
                  fVar34 = fVar29;
                }
                fVar28 = fVar34;
                if (fVar35 < 0.0) {
                  fVar28 = 0.0;
                }
                fVar28 = (float)FUN_0269ad38(fVar28,lVar27,0);
                fVar35 = fVar28;
                if (1.0 < fVar28) {
                  fVar35 = fVar29;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar28 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar32 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ed6c;
                  }
                  fVar29 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar35;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar35 + -0.5);
                }
                fVar35 = fVar34;
                if (1.0 < fVar34) {
                  fVar35 = 1.0;
                }
                fVar35 = fVar35 * 255.0;
                if (fVar34 < 0.0) {
                  fVar35 = 0.0;
                }
                dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                if (0.0 <= fVar35) {
                  if (dVar32 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3f2ec;
                  }
                  fVar34 = (float)(int)(fVar35 + 0.5);
                }
                else if (dVar32 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar34 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar34 = fVar35;
                  }
                }
                else {
                  fVar34 = (float)(int)(fVar35 + -0.5);
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
                if (lVar14 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
                *(uint *)(lVar14 + uVar22 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 |
                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                dVar32 = *in_stack_00000060;
                if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                   (lVar27 = *(long *)(lVar25 + 0x18), lVar27 == 0)) goto LAB_00e443fc;
                fVar34 = *(float *)((long)dVar32 + 0x84);
                fVar37 = *(float *)(lVar25 + 0x20);
                lVar14 = *in_stack_00000030;
                fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                         ((*(float *)((long)dVar32 + 0x48) + fVar34) * fVar37) / fVar34;
                fVar29 = fVar29 - (float)(int)fVar29;
                fVar35 = fVar29;
                if (1.0 < fVar29) {
                  fVar35 = 1.0;
                }
              }
              fVar38 = fVar35;
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
              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar32 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar38 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
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
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
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
              if (lVar14 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar14 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar14 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar32 = *in_stack_00000060;
              if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                 (*(long *)(lVar25 + 0x18) == 0)) goto LAB_00e443fc;
              fVar34 = *(float *)((long)dVar32 + 0x48);
              fVar37 = *(float *)((long)dVar32 + 0x84);
              lVar27 = *in_stack_00000030;
              fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                       (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar35 = fVar29;
              if (1.0 < fVar29) {
                fVar35 = 1.0;
              }
              fVar38 = fVar35;
              if (fVar29 < 0.0) {
                fVar38 = 0.0;
              }
              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18),0);
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
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar38 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
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
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
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
              if (lVar27 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_00e44400;
              *(uint *)(lVar27 + (long)(int)uVar20 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar32 = *in_stack_00000060;
              if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                 (*(long *)(lVar25 + 0x18) == 0)) goto LAB_00e443fc;
              fVar34 = *(float *)((long)dVar32 + 0x48);
              fVar37 = *(float *)((long)dVar32 + 0x84);
              lVar27 = *in_stack_00000030;
              fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                       (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar35 = fVar29;
              if (1.0 < fVar29) {
                fVar35 = 1.0;
              }
              fVar38 = fVar35;
              if (fVar29 < 0.0) {
                fVar38 = 0.0;
              }
              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18),0);
              fVar29 = fVar38;
              if (1.0 < fVar38) {
                fVar29 = 1.0;
              }
              uVar9 = 0x437f0000;
              fVar29 = fVar29 * 255.0;
              if (fVar38 < 0.0) {
                fVar29 = 0.0;
              }
              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar32 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar38 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
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
              fVar29 = fVar35;
              if (1.0 < fVar35) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar35 < 0.0) {
                fVar29 = 0.0;
              }
LAB_00e42040:
              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
              if (fVar29 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar32 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                fVar29 = fVar35 + 1.0;
                goto LAB_00e425d4;
              }
              fVar35 = (float)(int)(fVar29 + 0.5);
            }
            else {
              lVar15 = *in_stack_00000038;
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar27 == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar15 + uVar22 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar32 + 0x84);
              fVar35 = fVar35 + (fVar37 * *(float *)(lVar25 + 0x20)) / fVar38;
              fVar35 = fVar35 - (float)(int)fVar35;
              fVar34 = fVar35;
              if (1.0 < fVar35) {
                fVar34 = fVar29;
              }
              fVar28 = fVar34;
              if (fVar35 < 0.0) {
                fVar28 = 0.0;
              }
              fVar28 = (float)FUN_0269ad38(fVar28,lVar27,0);
              fVar35 = fVar28;
              if (1.0 < fVar28) {
                fVar35 = fVar29;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar28 < 0.0) {
                fVar35 = 0.0;
              }
              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar32 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3e0b0;
                }
                fVar29 = (float)(int)(fVar35 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar35;
                }
              }
              else {
                fVar29 = (float)(int)(fVar35 + -0.5);
              }
              fVar35 = fVar34;
              if (1.0 < fVar34) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar34 < 0.0) {
                fVar35 = 0.0;
              }
              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar32 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ee80;
                }
                fVar34 = (float)(int)(fVar35 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar34 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar34 = fVar35;
                }
              }
              else {
                fVar34 = (float)(int)(fVar35 + -0.5);
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
              if (lVar14 == 0) goto LAB_00e443fc;
              fVar38 = 1.0;
              if (*(uint *)(lVar14 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              *(uint *)(lVar14 + uVar22 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              plVar26 = (long *)StringLiteral_9119;
              dVar32 = *in_stack_00000060;
              if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                 (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
              lVar15 = *in_stack_00000030;
              lVar14 = *(long *)(lVar25 + 0x18);
              fVar35 = fStack0000000000000048 * *(float *)(lVar25 + 0x24);
              if (cVar4 != '\0') {
                if (uVar23 < *(uint *)(lVar27 + 0x18)) {
                  if (lVar14 != 0) {
                    fVar34 = *(float *)(lVar27 + (long)(int)uVar23 * 0xc + 0x20);
                    fVar37 = *(float *)((long)dVar32 + 0x84);
                    fVar35 = fVar35 + (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
                    fVar35 = fVar35 - (float)(int)fVar35;
                    fVar29 = fVar35;
                    if (1.0 < fVar35) {
                      fVar29 = fVar38;
                    }
                    fVar28 = fVar29;
                    if (fVar35 < 0.0) {
                      fVar28 = 0.0;
                    }
                    fVar28 = (float)FUN_0269ad38(fVar28,lVar14,0);
                    fVar35 = fVar28;
                    if (1.0 < fVar28) {
                      fVar35 = fVar38;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar28 < 0.0) {
                      fVar35 = 0.0;
                    }
                    dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar32 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar38 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar32 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = fVar35;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar35 = fVar29;
                    if (1.0 < fVar29) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar29 < 0.0) {
                      fVar35 = 0.0;
                    }
                    dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar32 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar29 = (float)(int)(fVar35 + 0.5);
                    }
                    else if (dVar32 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = fVar35;
                      }
                    }
                    else {
                      fVar29 = (float)(int)(fVar35 + -0.5);
                    }
                    fVar35 = fVar34;
                    if (1.0 < fVar34) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar34 < 0.0) {
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
                    if (lVar15 != 0) {
                      if (uVar23 < *(uint *)(lVar15 + 0x18)) {
                        *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
                             (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                             ((int)fVar35 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                        dVar32 = *in_stack_00000060;
                        if (((dVar32 != 0.0) &&
                            (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 != 0)) &&
                           (lVar27 = *in_stack_00000038, lVar27 != 0)) {
                          if (uVar20 < *(uint *)(lVar27 + 0x18)) {
                            if (*(long *)(lVar25 + 0x18) != 0) {
                              fVar34 = *(float *)(lVar27 + (long)(int)uVar20 * 0xc + 0x20);
                              fVar37 = *(float *)((long)dVar32 + 0x84);
                              lVar27 = *in_stack_00000030;
                              fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                                       (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar35 = fVar29;
                              if (1.0 < fVar29) {
                                fVar35 = 1.0;
                              }
                              fVar38 = fVar35;
                              if (fVar29 < 0.0) {
                                fVar38 = 0.0;
                              }
                              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18),0);
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
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar38 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
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
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar32 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
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
                              fVar34 = fVar37;
                              if (1.0 < fVar37) {
                                fVar34 = 1.0;
                              }
                              fVar34 = fVar34 * 255.0;
                              if (fVar37 < 0.0) {
                                fVar34 = 0.0;
                              }
                              dVar32 = modf((double)fVar34,(double *)&stack0x00000070);
                              plVar26 = (long *)StringLiteral_9119;
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
                              if (lVar27 != 0) {
                                if (uVar20 < *(uint *)(lVar27 + 0x18)) {
                                  *(uint *)(lVar27 + (long)(int)uVar20 * 4 + 0x20) =
                                       (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                       ((int)fVar35 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
                                  dVar32 = *in_stack_00000060;
                                  if (((dVar32 != 0.0) &&
                                      (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 != 0)) &&
                                     (lVar27 = *in_stack_00000038, lVar27 != 0)) {
                                    if (uVar18 < *(uint *)(lVar27 + 0x18)) {
                                      if (*(long *)(lVar25 + 0x18) != 0) {
                                        fVar34 = *(float *)(lVar27 + in_stack_00000058 * 0xc + 0x20)
                                        ;
                                        fVar37 = *(float *)((long)dVar32 + 0x84);
                                        lVar27 = *in_stack_00000030;
                                        fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24)
                                                 + (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
                                        fVar29 = fVar29 - (float)(int)fVar29;
                                        fVar35 = fVar29;
                                        if (1.0 < fVar29) {
                                          fVar35 = 1.0;
                                        }
                                        fVar38 = fVar35;
                                        if (fVar29 < 0.0) {
                                          fVar38 = 0.0;
                                        }
                                        fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18)
                                                                     ,0);
                                        fVar29 = fVar38;
                                        if (1.0 < fVar38) {
                                          fVar29 = 1.0;
                                        }
                                        uVar9 = 0x437f0000;
                                        fVar29 = fVar29 * 255.0;
                                        if (fVar38 < 0.0) {
                                          fVar29 = 0.0;
                                        }
                                        dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
                                        if (0.0 <= fVar29) {
                                          if (dVar32 == 0.5) {
                                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar38 = (float)(int)(fVar29 + 0.5);
                                        }
                                        else if (dVar32 == -0.5) {
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
                                        fVar29 = fVar35;
                                        if (1.0 < fVar35) {
                                          fVar29 = 1.0;
                                        }
                                        fVar29 = fVar29 * 255.0;
                                        if (fVar35 < 0.0) {
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
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (lVar14 == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar27 + uVar22 * 0xc + 0x20);
              fVar37 = *(float *)((long)dVar32 + 0x84);
              fVar35 = fVar35 + (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
              fVar35 = fVar35 - (float)(int)fVar35;
              fVar29 = fVar35;
              if (1.0 < fVar35) {
                fVar29 = fVar38;
              }
              fVar28 = fVar29;
              if (fVar35 < 0.0) {
                fVar28 = 0.0;
              }
              fVar28 = (float)FUN_0269ad38(fVar28,lVar14,0);
              fVar35 = fVar28;
              if (1.0 < fVar28) {
                fVar35 = fVar38;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar28 < 0.0) {
                fVar35 = 0.0;
              }
              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar32 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar38 = (float)(int)(fVar35 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar35;
                }
              }
              else {
                fVar38 = (float)(int)(fVar35 + -0.5);
              }
              fVar35 = fVar29;
              if (1.0 < fVar29) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar29 < 0.0) {
                fVar35 = 0.0;
              }
              dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar32 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar29 = (float)(int)(fVar35 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar35;
                }
              }
              else {
                fVar29 = (float)(int)(fVar35 + -0.5);
              }
              fVar35 = fVar34;
              if (1.0 < fVar34) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar34 < 0.0) {
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
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar32 = *in_stack_00000060;
              if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                 (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar25 + 0x18) == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar27 + uVar22 * 0xc + 0x20);
              fVar37 = *(float *)((long)dVar32 + 0x84);
              lVar27 = *in_stack_00000030;
              fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                       (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar35 = fVar29;
              if (1.0 < fVar29) {
                fVar35 = 1.0;
              }
              fVar38 = fVar35;
              if (fVar29 < 0.0) {
                fVar38 = 0.0;
              }
              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18),0);
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
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar38 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
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
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
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
              if (lVar27 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar27 + 0x18) <= uVar20) goto LAB_00e44400;
              *(uint *)(lVar27 + (long)(int)uVar20 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar34 << 0x18;
              dVar32 = *in_stack_00000060;
              if (((dVar32 == 0.0) || (lVar25 = *(long *)((long)dVar32 + 0xa8), lVar25 == 0)) ||
                 (lVar27 = *in_stack_00000038, lVar27 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
              if (*(long *)(lVar25 + 0x18) == 0) goto LAB_00e443fc;
              fVar34 = *(float *)(lVar27 + uVar22 * 0xc + 0x20);
              fVar37 = *(float *)((long)dVar32 + 0x84);
              lVar27 = *in_stack_00000030;
              fVar29 = fStack0000000000000048 * *(float *)(lVar25 + 0x24) +
                       (fVar34 * *(float *)(lVar25 + 0x20)) / fVar37;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar35 = fVar29;
              if (1.0 < fVar29) {
                fVar35 = 1.0;
              }
              fVar38 = fVar35;
              if (fVar29 < 0.0) {
                fVar38 = 0.0;
              }
              fVar38 = (float)FUN_0269ad38(fVar38,*(long *)(lVar25 + 0x18),0);
              fVar29 = fVar38;
              if (1.0 < fVar38) {
                fVar29 = 1.0;
              }
              uVar9 = 0x437f0000;
              fVar29 = fVar29 * 255.0;
              if (fVar38 < 0.0) {
                fVar29 = 0.0;
              }
              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar32 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar38 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar32 == -0.5) {
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
              fVar29 = fVar35;
              if (1.0 < fVar35) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar35 < 0.0) {
                fVar29 = 0.0;
              }
              dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar32 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                fVar29 = fVar35 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar29;
                }
              }
              else {
                fVar35 = (float)(int)(fVar29 + -0.5);
              }
            }
            unaff_s8 = 0.0;
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
                goto LAB_00e42654;
              }
              fVar34 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
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
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar37 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = fVar29;
              }
            }
            else {
              fVar37 = (float)(int)(fVar29 + -0.5);
            }
            if (lVar27 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar27 + 0x18) <= uVar18) goto LAB_00e44400;
            *(uint *)(lVar27 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar16 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_02681b9c(uVar16,0,0);
            if ((uVar12 & 1) == 0) goto LAB_00e43400;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
            puVar19 = (uint *)(lVar25 + uVar22 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
            goto LAB_00e443fc;
            fVar35 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
            fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
            fVar37 = *(float *)(lVar25 + 0x20);
            fVar34 = *(float *)(lVar25 + 0x24);
            fVar29 = fVar35 * 255.0;
            if (fVar35 < 0.0) {
              fVar29 = 0.0;
            }
            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar32 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e4287c;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar35 = -1.0;
LAB_00e4287c:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar38 * 255.0;
            fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
            if (fVar38 < 0.0) {
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
            fVar38 = fVar37;
            if (1.0 < fVar37) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
            if (fVar37 < 0.0) {
              fVar38 = 0.0;
            }
            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar32 == 0.5) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e429c8;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar37;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar37 = fVar34;
            if (1.0 < fVar34) {
              fVar37 = 1.0;
            }
            fVar37 = fVar37 * 255.0;
            if (fVar34 < 0.0) {
              fVar37 = 0.0;
            }
            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar32 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e42a44;
              }
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar34 = -1.0;
LAB_00e42a44:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            *puVar19 = (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                       ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
            puVar19 = (uint *)(lVar25 + (long)(int)uVar23 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0))
            goto LAB_00e443fc;
            fVar35 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
            fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
            fVar37 = *(float *)(lVar25 + 0x20);
            fVar34 = *(float *)(lVar25 + 0x24);
            fVar29 = fVar35 * 255.0;
            if (fVar35 < 0.0) {
              fVar29 = 0.0;
            }
            dVar32 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar32 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e42b80;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar35 = -1.0;
LAB_00e42b80:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar35 = fVar38 * 255.0;
            fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
            if (fVar38 < 0.0) {
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
            fVar38 = fVar37;
            if (1.0 < fVar37) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
            if (fVar37 < 0.0) {
              fVar38 = 0.0;
            }
            dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar32 == 0.5) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42ccc;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar37;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar37 = fVar34;
            if (1.0 < fVar34) {
              fVar37 = 1.0;
            }
            fVar37 = fVar37 * 255.0;
            if (fVar34 < 0.0) {
              fVar37 = 0.0;
            }
            dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar32 == 0.5) {
                fVar34 = 1.0;
                goto LAB_00e42d48;
              }
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar32 == -0.5) {
              fVar34 = -1.0;
LAB_00e42d48:
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + fVar34;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            *puVar19 = (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                       ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
            lVar25 = *in_stack_00000030;
            if (lVar25 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar25 = lVar25 + (long)(int)uVar20 * 4;
          }
          uVar3 = *(uint *)(lVar25 + 0x20);
          if ((*in_stack_00000060 == 0.0) ||
             (lVar27 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar27 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar27 + 0x18);
          fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar27 + 0x1c);
          fVar37 = *(float *)(lVar27 + 0x20);
          fVar34 = *(float *)(lVar27 + 0x24);
          fVar35 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar32 == 0.5) {
              fVar35 = 1.0;
              goto FUN_00e42e84;
            }
            fVar29 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar35 = -1.0;
FUN_00e42e84:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar29 = (float)(int)(fVar35 + -0.5);
          }
          fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
          fVar35 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar35 = unaff_s8;
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
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar37;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar37 = fVar34;
          if (1.0 < fVar34) {
            fVar37 = 1.0;
          }
          fVar37 = fVar37 * 255.0;
          if (fVar34 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar32 == 0.5) {
              fVar34 = 1.0;
              goto LAB_00e4304c;
            }
            fVar37 = (float)(int)(fVar37 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar34 = -1.0;
LAB_00e4304c:
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + fVar34;
            }
          }
          else {
            fVar37 = (float)(int)(fVar37 + -0.5);
          }
          *(uint *)(lVar25 + 0x20) =
               (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
          lVar25 = *in_stack_00000030;
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          puVar19 = (uint *)(lVar25 + in_stack_00000058 * 4 + 0x20);
          uVar3 = *puVar19;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar25 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar25 == 0)) goto LAB_00e443fc;
          fVar29 = (float)(uVar3 & 0xff) / 255.0;
          uVar9 = (ulong)(uint)fVar29;
          fVar29 = fVar29 * *(float *)(lVar25 + 0x18);
          fVar38 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
          fVar37 = *(float *)(lVar25 + 0x20);
          fVar34 = *(float *)(lVar25 + 0x24);
          fVar35 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar35 = unaff_s8;
          }
          dVar32 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar32 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e4318c;
            }
            fVar29 = (float)(int)(fVar35 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar35 = -1.0;
LAB_00e4318c:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar29 = (float)(int)(fVar35 + -0.5);
          }
          fVar37 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar37;
          fVar35 = fVar38 * 255.0;
          if (fVar38 < 0.0) {
            fVar35 = unaff_s8;
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
          fVar38 = fVar37;
          if (1.0 < fVar37) {
            fVar38 = 1.0;
          }
          fVar34 = ((float)(uVar3 >> 0x18) / 255.0) * fVar34;
          fVar38 = fVar38 * 255.0;
          if (fVar37 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar32 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar32 == -0.5) {
            fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar37;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar37 = fVar34;
          if (1.0 < fVar34) {
            fVar37 = 1.0;
          }
          fVar37 = fVar37 * 255.0;
          if (fVar34 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar32 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar32 == 0.5) {
              fVar34 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar34 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar34 = (float)(int)(fVar37 + 0.5);
            }
          }
          else if (dVar32 == -0.5) {
            fVar34 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar34 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar34 = (float)(int)(fVar37 + -0.5);
          }
          *puVar19 = (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar34 << 0x18;
          unaff_s15 = in_stack_00000008._4_4_;
        }
        else {
          if (*(long *)((long)dVar32 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar32 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
          lVar25 = *in_stack_00000030;
          dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
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
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
          *(uint *)(lVar25 + uVar22 * 4 + 0x20) =
               (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
          lVar25 = *in_stack_00000030;
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
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar25 + (long)(int)uVar23 * 4 + 0x20) =
               (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
          lVar25 = *in_stack_00000030;
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
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
          *(uint *)(lVar25 + (long)(int)uVar20 * 4 + 0x20) =
               (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
          lVar25 = *in_stack_00000030;
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
          if (lVar25 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
          *(uint *)(lVar25 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar35 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar34 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
        }
LAB_00e43400:
        unaff_w28 = 255.0;
        lVar25 = *in_stack_00000030;
        if (lVar25 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar25 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
        lVar25 = lVar25 + uVar22 * 4;
        fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
        *(char *)(lVar25 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
        lVar25 = unaff_x19[0x5f];
        if (lVar25 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_00e44400;
        unaff_x23 = (long)(int)uVar23;
        lVar25 = lVar25 + unaff_x23 * 4;
        fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
        *(char *)(lVar25 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
        lVar25 = unaff_x19[0x5f];
        if (lVar25 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar25 + 0x18) <= uVar20) goto LAB_00e44400;
        unaff_x20 = (long)(int)uVar20;
        lVar25 = lVar25 + unaff_x20 * 4;
        fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
        *(char *)(lVar25 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
        lVar25 = unaff_x19[0x5f];
        if (lVar25 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar25 + 0x18) <= uVar18) goto LAB_00e44400;
        lVar25 = lVar25 + in_stack_00000058 * 4;
        uVar12 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
        fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar25 + 0x23));
        *(char *)(lVar25 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
        uVar11 = FUN_00e3703c();
        unaff_x26 = in_stack_00000060;
      } while ((uVar11 & 1) != 0);
      lVar25 = *plVar26;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar25 = *plVar26;
      }
    } while (*(int *)(*(long *)(lVar25 + 0xb8) + 0x20) != 1);
    unaff_x24 = *in_stack_00000030;
    if (unaff_x24 == 0) goto LAB_00e443fc;
    if (*(uint *)(unaff_x24 + 0x18) <= in_stack_00000068) goto LAB_00e44400;
    unaff_x21 = (uint *)(unaff_x24 + uVar22 * 4 + 0x20);
    uVar18 = *unaff_x21;
    unaff_s9 = 255.0;
    unaff_w25 = uVar18 >> 0x18;
    fVar29 = (float)FUN_026982b0((float)(uVar18 & 0xff) / 255.0,0);
    unaff_s12 = (float)FUN_026982b0((float)(uVar18 >> 8 & 0xff) / 255.0,0);
    unaff_s11 = (float)FUN_026982b0((float)(uVar18 >> 0x10 & 0xff) / 255.0,0);
    fVar35 = fVar29;
    if (1.0 < fVar29) {
      fVar35 = 1.0;
    }
    unaff_s10 = fVar35 * 255.0;
    if (fVar29 < 0.0) {
      unaff_s10 = unaff_s8;
    }
    dVar32 = modf((double)unaff_s10,(double *)&stack0x00000070);
    if (0.0 <= unaff_s10) {
      if (dVar32 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        unaff_s9 = 255.0;
        fVar35 = (float)(int)(unaff_s10 + 0.5);
      }
      goto LAB_00e43634;
    }
    if (dVar32 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
      goto LAB_00e43634;
    }
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar22 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar6);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar27 = unaff_x19[0xcb];
    uVar30 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar27 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar27 + 0x18) <= uVar22) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar27 + lVar25);
    *puVar1 = uVar30;
    puVar1[1] = (int)uVar12;
    puVar1[2] = (int)uVar9;
    lVar27 = unaff_x19[0xca];
    if ((lVar27 == 0) || (lVar14 = unaff_x19[0xcc], lVar14 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar14 + 0x18) <= uVar22) goto LAB_00e44400;
    uVar30 = *(undefined4 *)(lVar27 + 0x4c);
    uVar22 = uVar22 + 1;
    puVar17 = (undefined8 *)(lVar14 + lVar25);
    lVar25 = lVar25 + 0xc;
    *puVar17 = *(undefined8 *)(lVar27 + 0x44);
    *(undefined4 *)(puVar17 + 1) = uVar30;
  } while (uVar18 != uVar22);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar10,*plVar26,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar25 = unaff_x19[0x59];
  if (lVar25 != 0) {
    (**(code **)(lVar25 + 0x18))
              (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000038,*plVar10,*plVar26,
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


