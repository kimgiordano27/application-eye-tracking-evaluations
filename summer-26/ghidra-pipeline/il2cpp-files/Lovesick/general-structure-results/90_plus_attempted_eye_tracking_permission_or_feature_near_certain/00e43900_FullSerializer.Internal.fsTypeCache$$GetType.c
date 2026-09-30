/*
FUNCTION_NAME: FullSerializer.Internal.fsTypeCache$$GetType
ENTRY_POINT: 00e43900
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

void FullSerializer_Internal_fsTypeCache__GetType(void)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  short sVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  long *unaff_x19;
  undefined8 uVar17;
  undefined8 *puVar18;
  long unaff_x20;
  uint *puVar19;
  uint uVar20;
  uint *unaff_x21;
  long lVar21;
  uint uVar22;
  undefined8 uVar23;
  ulong unaff_x22;
  ulong uVar24;
  uint uVar25;
  uint unaff_w23;
  ulong uVar26;
  long unaff_x24;
  long *plVar27;
  long lVar28;
  double *unaff_x26;
  ulong unaff_x29;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float unaff_s8;
  float fVar36;
  int iVar37;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fVar38;
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
  float fStack0000000000000070;
  long in_stack_00000078;
  
  do {
    if ((bool)in_ZR) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar36 = (float)(int)(unaff_s10 + -0.5);
    }
LAB_00e43970:
    fVar30 = unaff_s12;
    if (1.0 < unaff_s12) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * 255.0;
    if (unaff_s12 < 0.0) {
      fVar30 = unaff_s8;
    }
    dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar33 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar35 = unaff_s11;
    if (1.0 < unaff_s11) {
      fVar35 = 1.0;
    }
    fVar38 = (float)unaff_w23 / unaff_s9;
    fVar35 = fVar35 * 255.0;
    if (unaff_s11 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43a84;
      }
      fVar39 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
      fVar39 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar39 = fVar35;
      }
    }
    else {
      fVar39 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar38) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar38 + -0.5);
    }
    if (*(uint *)(unaff_x24 + 0x18) <= (uint)unaff_x22) goto LAB_00e44400;
    *unaff_x21 = (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
                 (int)fVar35 << 0x18;
    lVar21 = *in_stack_00000030;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + unaff_x20 * 4 + 0x20);
    uVar4 = *puVar19;
    fVar30 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar36 = fVar30;
    if (1.0 < fVar30) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * 255.0;
    if (fVar30 < 0.0) {
      fVar36 = unaff_s8;
    }
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar36 = (float)(int)(fVar36 + -0.5);
    }
    fVar30 = fVar35;
    if (1.0 < fVar35) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * 255.0;
    if (fVar35 < 0.0) {
      fVar30 = unaff_s8;
    }
    dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar33 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar35 = fVar38;
    if (1.0 < fVar38) {
      fVar35 = 1.0;
    }
    fVar39 = (float)(uVar4 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar38 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43dbc;
      }
      fVar38 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar35;
      }
    }
    else {
      fVar38 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar39) {
      fVar39 = 1.0;
    }
    fVar39 = fVar39 * 255.0;
    dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
    if (0.0 <= fVar39) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar39 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar39 + -0.5);
    }
    if (*(uint *)(lVar21 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
    *puVar19 = (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
    lVar21 = *in_stack_00000030;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + in_stack_00000058 * 4 + 0x20);
    uVar4 = *puVar19;
    fVar30 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    fVar38 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar36 = fVar30;
    if (1.0 < fVar30) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * 255.0;
    if (fVar30 < 0.0) {
      fVar36 = unaff_s8;
    }
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar36 = (float)(int)(fVar36 + -0.5);
    }
    uVar10 = 0x3f800000;
    fVar30 = fVar35;
    if (1.0 < fVar35) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * 255.0;
    if (fVar35 < 0.0) {
      fVar30 = unaff_s8;
    }
    dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar33 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar35 = fVar38;
    if (1.0 < fVar38) {
      fVar35 = 1.0;
    }
    fVar39 = (float)(uVar4 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar38 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e440f4;
      }
      fVar38 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar35;
      }
    }
    else {
      fVar38 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar39) {
      fVar39 = 1.0;
    }
    fVar39 = fVar39 * 255.0;
    dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
    if (0.0 <= fVar39) {
      uVar13 = 0;
      if (dVar33 == 0.5) {
        fVar35 = 1.0;
        goto LAB_00e44170;
      }
      fVar39 = (float)(int)(fVar39 + 0.5);
    }
    else {
      uVar13 = 0;
      if (dVar33 == -0.5) {
        fVar35 = -1.0;
LAB_00e44170:
        fVar35 = (float)_fStack0000000000000070 + fVar35;
        uVar13 = (ulong)(uint)fVar35;
        fVar39 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar39 = fVar35;
        }
      }
      else {
        fVar39 = (float)(int)(fVar39 + -0.5);
      }
    }
    if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    *puVar19 = (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
    do {
      do {
        puVar7 = StringLiteral_4992;
        puVar6 = OVREyeGaze_TypeInfo;
        in_stack_00000050 = in_stack_00000050 + 1;
        if (in_stack_00000050 == in_stack_00000018) {
          if (((unaff_x19[0x58] == 0) || (iVar9 = FUN_026c82cc(unaff_x19[0x58],0), iVar9 < 1)) &&
             (unaff_x19[0x59] == 0)) goto LAB_00e443b0;
          puVar6 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
          if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
          iVar9 = *(int *)(unaff_x19[0xf] + 0x10);
          plVar11 = unaff_x19 + 0xcb;
          if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
            FUN_010afdd4(plVar11,iVar9,
                         *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
          }
          if ((unaff_x19[0xcc] == 0) || (lVar21 = unaff_x19[0xf], lVar21 == 0)) goto LAB_00e443fc;
          plVar27 = unaff_x19 + 0xcc;
          if (*(int *)(lVar21 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar27,*(int *)(lVar21 + 0x10),*(undefined8 *)puVar6);
            lVar21 = unaff_x19[0xf];
            if (lVar21 == 0) goto LAB_00e443fc;
          }
          uVar4 = *(uint *)(lVar21 + 0x10);
          if ((int)uVar4 < 1) goto LAB_00e44358;
          uVar24 = 0;
          lVar21 = 0x20;
          goto LAB_00e442cc;
        }
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        FUN_0132138c(unaff_x19[9],in_stack_00000050 & 0xffffffff,&stack0x00000070,
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
          dVar33 = *unaff_x26;
          if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x78) == 0)) goto LAB_00e443fc;
          fVar30 = *(float *)(*(long *)((long)dVar33 + 0x78) + 0x18);
          fVar36 = DAT_028aa034;
          if (fVar30 != 0.0) {
            fVar36 = fVar30;
          }
          if ((0.0 < (unaff_s15 - *(float *)((long)dVar33 + 100)) / fVar36) &&
             (*(char *)((long)dVar33 + 0x165) == '\0')) {
            *(undefined1 *)((long)dVar33 + 0x165) = 1;
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
                  lVar21 = unaff_x19[0xca];
                  if (lVar21 == 0) goto LAB_00e443fc;
                  fVar35 = *(float *)(lVar21 + 0x48);
                  fVar36 = *(float *)(unaff_x19 + 0x4b);
                  fVar38 = fVar35 + *(float *)((long)unaff_x19 + 0x50c);
                  fVar30 = *(float *)(unaff_x19 + 0x4a);
                  if (fVar35 <= *(float *)(unaff_x19 + 0x4a)) {
                    fVar30 = fVar35;
                  }
                  *(float *)(unaff_x19 + 0x4a) = fVar30;
                  fVar30 = *(float *)((long)unaff_x19 + 0x254);
                  if (fVar38 <= *(float *)((long)unaff_x19 + 0x254)) {
                    fVar30 = fVar38;
                  }
                  *(float *)((long)unaff_x19 + 0x254) = fVar30;
                  fVar30 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar21,0);
                  fVar30 = fVar30 + *(float *)(unaff_x19 + 0xa1) +
                           *(float *)((long)unaff_x19 + 0x55c);
                  if (fVar36 <= fVar30) {
                    fVar36 = fVar30;
                  }
                  *(float *)(unaff_x19 + 0x4b) = fVar36;
                }
              }
            }
            iVar37 = *(int *)((long)unaff_x19 + 0x38c);
            if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
              iVar37 = iVar9;
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
          lVar21 = unaff_x19[0x55];
          if (lVar21 != 0) {
            (**(code **)(lVar21 + 0x18))
                      (*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
          }
        }
        unaff_x19[0xc6] = 0;
        fVar30 = 0.0;
        *(undefined4 *)(unaff_x19 + 199) = 0;
        fVar36 = 0.0;
        if ((((0.0 < fStack000000000000004c) &&
             (uVar4 = *(uint *)(unaff_x19 + 0x2a), fVar36 = fVar30, uVar4 < 5)) &&
            ((1 << (ulong)(uVar4 & 0x1f) & 0x19U) != 0)) &&
           (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
          if (uVar4 == 4) {
            lVar21 = unaff_x19[0xc];
            if (lVar21 == 0) goto LAB_00e443fc;
            if (0 < *(int *)(lVar21 + 0x18)) {
              iVar9 = 0;
              do {
                FUN_0132138c(lVar21,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
                *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                fVar36 = fStack0000000000000070;
                if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                    fStack0000000000000070) break;
                lVar21 = unaff_x19[0xc];
                if (lVar21 == 0) goto LAB_00e443fc;
                iVar9 = iVar9 + 1;
              } while (iVar9 < *(int *)(lVar21 + 0x18));
            }
          }
          else {
            lVar21 = unaff_x19[0xb];
            if (lVar21 == 0) goto LAB_00e443fc;
            iVar9 = 0;
            fVar36 = 0.0;
            while (iVar9 < *(int *)(lVar21 + 0x18)) {
              FUN_0132138c(lVar21,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
              fVar36 = fVar36 + fStack0000000000000070;
              *(float *)((long)unaff_x19 + 0x634) = fVar36;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar36)
              break;
              lVar21 = unaff_x19[0xb];
              iVar9 = iVar9 + 1;
              if (lVar21 == 0) goto LAB_00e443fc;
            }
          }
        }
        *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        fVar30 = *(float *)((long)unaff_x19 + 0x53c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
        fVar35 = *(float *)((long)_fStack0000000000000070 + 0x5c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        fVar39 = *(float *)(unaff_x19 + 0xa8);
        fVar38 = *(float *)(unaff_x19 + 199) + fVar39;
        *(float *)((long)unaff_x19 + 0x634) =
             fVar36 + fVar30 + (fVar35 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
        *(float *)(unaff_x19 + 199) = fVar38;
        puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        fVar30 = 1.0;
        fVar36 = 1.0;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar31;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)(unaff_x19[0xca] + 200);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar17,0,0);
        if ((uVar10 & 1) != 0) {
          lVar21 = __start_il2cpp();
          if (lVar21 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar21 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar31 = FUN_00e4ee40();
            *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
            *(float *)(unaff_x19 + 0xcf) = fVar38;
            *(float *)((long)unaff_x19 + 0x67c) = fVar39;
          }
        }
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar6);
          DAT_03774d76 = '\x01';
        }
        lVar28 = *(long *)puVar6;
        uVar31 = *(undefined4 *)(*(undefined8 **)(lVar28 + 0xb8) + 1);
        *in_stack_00000040 = **(undefined8 **)(lVar28 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar31;
        lVar21 = (*(long **)(lVar28 + 0xb8))[1];
        unaff_x19[0xc0] = **(long **)(lVar28 + 0xb8);
        *(int *)(unaff_x19 + 0xc1) = (int)lVar21;
        uVar31 = *(undefined4 *)(*(undefined8 **)(lVar28 + 0xb8) + 1);
        in_stack_00000040[3] = **(undefined8 **)(lVar28 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
        lVar21 = (*(long **)(lVar28 + 0xb8))[1];
        unaff_x19[0xc3] = **(long **)(lVar28 + 0xb8);
        *(int *)(unaff_x19 + 0xc4) = (int)lVar21;
        uVar31 = *(undefined4 *)(*(undefined8 **)(lVar28 + 0xb8) + 1);
        in_stack_00000040[6] = **(undefined8 **)(lVar28 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar31;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar17,0,0);
        if ((uVar10 & 1) != 0) {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
            lVar21 = __start_il2cpp();
            if (lVar21 == 0) goto LAB_00e443fc;
            if ((*(char *)(lVar21 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0'))
            {
              lVar21 = unaff_x19[0xca];
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              if ((lVar21 == 0) || (lVar28 = *(long *)(lVar21 + 0xc0), lVar28 == 0))
              goto LAB_00e443fc;
              fVar35 = fStack0000000000000048;
              if (*(char *)(lVar28 + 0x18) != '\0') {
                fVar38 = *(float *)(lVar21 + 100);
                fVar35 = *(float *)((long)unaff_x19 + 0x2ec) - fVar38;
              }
              if (*(char *)(lVar28 + 0x19) != '\0') {
                uVar31 = FUN_00e4e9f4(fVar35);
                lVar21 = unaff_x19[0xca];
                *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar31;
                *(float *)(unaff_x19 + 0xbf) = fVar38;
                *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar21 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar21 + 0xc0) + 0x28) != '\0') {
                fVar29 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                *(float *)(unaff_x19 + 200) = fVar38;
                fVar34 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc0] =
                     CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar29 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar34;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar38 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar38;
                *(float *)(unaff_x19 + 200) = fVar34;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[3] =
                     CONCAT44(fVar34 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar38 + (float)in_stack_00000040[3]);
                *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar29 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar29;
                *(float *)(unaff_x19 + 200) = fVar34;
                fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc3] =
                     CONCAT44(fVar34 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar29 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar38;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar35 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar38;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[6] =
                     CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar21 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar21 + 0xc0) + 0x50) != '\0') {
                FUN_00e5eda8(lVar21,0);
                fVar35 = (float)FUN_00e4eb50();
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar38;
                fVar29 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc0] =
                     CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar29;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b838(lVar21,0);
                fVar35 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar29;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[3] =
                     CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar35 + (float)in_stack_00000040[3]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5eea4(lVar21,0);
                fVar35 = (float)FUN_00e4eb50();
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar29;
                fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc3] =
                     CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar38;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b7d8(lVar21,0);
                fVar35 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar38;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[6] =
                     CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              lVar28 = *(long *)(lVar21 + 0xc0);
              if (lVar28 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar28 + 0x60) != '\0') {
                uVar23 = *(undefined8 *)(lVar28 + 0x68);
                uVar17 = FUN_00e5eda8(lVar21,0);
                fVar35 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar38;
                fVar29 = fVar39 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc0] =
                     CONCAT44(fVar38 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar29;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5b838(lVar21,0);
                fVar35 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar29;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[3] =
                     CONCAT44(fVar29 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar35 + (float)in_stack_00000040[3]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5eea4(lVar21,0);
                fVar35 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar29;
                fVar38 = fVar39 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                unaff_x19[0xc3] =
                     CONCAT44(fVar29 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar38;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5b7d8(lVar21,0);
                fVar35 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar38;
                *(float *)((long)unaff_x19 + 0x644) = fVar39;
                in_stack_00000040[6] =
                     CONCAT44(fVar38 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
              }
            }
          }
        }
        uVar4 = (int)in_stack_00000050 << 2;
        if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
          if (*(char *)((long)unaff_x19 + 300) == '\0') {
            in_stack_00000040[0x1e] = unaff_x19[0x24];
          }
          else {
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*unaff_x26 + 0x80);
            in_stack_00000040[0x1e] =
                 CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar17 >> 0x20),
                          (float)unaff_x19[0x24] * (float)uVar17);
          }
          lVar21 = unaff_x19[0x5e];
          *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar38 = *(float *)((long)unaff_x19 + 0x674);
          uVar13 = (ulong)(int)uVar4;
          *(float *)(lVar21 + uVar13 * 0xc + 0x20) =
               fVar35 + fVar38 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x604);
          *(float *)(lVar21 + uVar13 * 0xc + 0x24) =
               fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          *(float *)(lVar21 + uVar13 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b838(*unaff_x26,0);
          uVar24 = uVar13 | 1;
          uVar20 = (uint)uVar24;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar38 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar24 * 0xc + 0x20) =
               fVar35 + fVar38 + *(float *)((long)unaff_x19 + 0x60c) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar35 = *(float *)(unaff_x19 + 0xc2);
          *(float *)(lVar21 + uVar24 * 0xc + 0x24) =
               fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          *(float *)(lVar21 + uVar24 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5eea4(*unaff_x26,0);
          uVar12 = uVar13 | 2;
          uVar22 = (uint)uVar12;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar38 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar12 * 0xc + 0x20) =
               fVar35 + fVar38 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x61c);
          *(float *)(lVar21 + uVar12 * 0xc + 0x24) =
               fVar38 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          *(float *)(lVar21 + uVar12 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b7d8(*unaff_x26,0);
          uVar26 = uVar13 | 3;
          uVar25 = (uint)uVar26;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          fVar38 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar26 * 0xc + 0x20) =
               fVar35 + fVar38 + *(float *)((long)unaff_x19 + 0x624) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          uVar10 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
          *(float *)(lVar21 + uVar26 * 0xc + 0x24) =
               fVar38 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
               *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
               *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x62c);
          *(float *)(lVar21 + uVar26 * 0xc + 0x28) =
               (float)uVar10 + *(float *)((long)unaff_x19 + 0x67c) + fVar35 +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0xca];
          if (lVar21 == 0) goto LAB_00e443fc;
          lVar28 = *in_stack_00000020;
          if (*(char *)(lVar21 + 0x108) == '\0') {
            uVar31 = FUN_0272b9dc(lVar21 + 0x10,0);
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = lVar28 + uVar13 * 8;
            *(undefined4 *)(lVar28 + 0x20) = uVar31;
            *(float *)(lVar28 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar21 = lVar21 + uVar24 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + uVar12 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar21 = lVar21 + uVar26 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            uVar31 = FUN_00e5ecc0(*unaff_x26,0);
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            FUN_00e5ecc0(unaff_x19[0xca],0);
            *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
          }
          else {
            if ((*(long *)(lVar21 + 0x100) == 0) ||
               (uVar31 = FUN_00e5dd14(fStack0000000000000048,*(long *)(lVar21 + 0x100),
                                      *(undefined4 *)(lVar21 + 0x10c),0), lVar28 == 0))
            goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = lVar28 + uVar13 * 8;
            *(undefined4 *)(lVar28 + 0x20) = uVar31;
            *(float *)(lVar28 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = FUN_00e5de6c(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar21 = lVar21 + uVar24 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = FUN_00e5dea4(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + uVar12 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar31 = thunk_FUN_00e5dd60(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                        *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar21 = lVar21 + uVar26 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar31;
            *(float *)(lVar21 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            uVar31 = FUN_00e5dedc(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            lVar21 = unaff_x19[0xca];
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
            *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
            if ((lVar21 == 0) || (lVar28 = *(long *)(lVar21 + 0x100), lVar28 == 0))
            goto LAB_00e443fc;
            if (((1 < *(int *)(lVar28 + 0x28)) && (0.0 < *(float *)(lVar28 + 0x34))) &&
               (*(int *)(lVar21 + 0x10c) < 0)) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
          }
        }
        else {
          dVar33 = *unaff_x26;
          if (dVar33 == 0.0) goto LAB_00e443fc;
          uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
          if ((*(float *)((long)dVar33 + 0x48) + *(float *)((long)dVar33 + 0x84) +
              *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
              DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
          lVar21 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774d76 = '\x01';
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          uVar13 = (ulong)(int)uVar4;
          lVar21 = lVar21 + uVar13 * 0xc;
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar31;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 1)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 1) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar31;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 2)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 2) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar31;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 3)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 3) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar31;
        }
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_02681b9c(uVar17,0,0);
        if ((uVar13 & 1) == 0) {
          lVar21 = unaff_x19[0x10];
        }
        else {
          if ((*unaff_x26 == 0.0) || (lVar21 = *(long *)((long)*unaff_x26 + 0xf8), lVar21 == 0))
          goto LAB_00e443fc;
          lVar21 = *(long *)(lVar21 + 0x18);
        }
        if (((lVar21 == 0) || (lVar21 = FUN_0272bcf4(lVar21,0), lVar21 == 0)) ||
           (plVar11 = (long *)FUN_0267dac8(lVar21,0), plVar11 == (long *)0x0)) goto LAB_00e443fc;
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
        FUN_0132149c(unaff_x19[0x62],uVar4,&stack0x00000070,
                     *(undefined8 *)
                      UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        uVar24 = (ulong)(int)uVar4;
        unaff_x22 = uVar24 | 1;
        FUN_0132149c(unaff_x19[0x62],uVar4 | 1,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        unaff_x29 = uVar24 | 2;
        FUN_0132149c(unaff_x19[0x62],unaff_x29,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000058 = uVar24 | 3;
        FUN_0132149c(unaff_x19[0x62],uVar4 | 3,&stack0x00000070,*(undefined8 *)puVar6);
        plVar27 = (long *)StringLiteral_9119;
        lVar21 = unaff_x19[0x60];
        if (lVar21 == 0) goto LAB_00e443fc;
        if ((*(uint *)(lVar21 + 0x18) <= uVar4) ||
           (uVar20 = (uint)in_stack_00000058, *(uint *)(lVar21 + 0x18) <= uVar20))
        goto LAB_00e44400;
        lVar28 = unaff_x19[0xca];
        fVar35 = unaff_s8;
        if (*(float *)(lVar21 + 0x20 + uVar24 * 8) !=
            *(float *)(lVar21 + 0x20 + in_stack_00000058 * 8)) {
          fVar35 = fVar30;
        }
        *(float *)(unaff_x19 + 0xda) = fVar35;
        if (lVar28 == 0) goto LAB_00e443fc;
        cVar5 = *(char *)(lVar28 + 0x108);
        fVar35 = fVar30;
        if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar28 + 0x138)) {
          fVar35 = -1.0;
        }
        *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar28 + 0x84) * fVar35;
        if (cVar5 == '\0') {
          iVar37 = *(int *)(lVar28 + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          uVar10 = 0x3e800000;
          *(float *)(unaff_x19 + 0xdb) = (float)iVar37 / ((float)iVar9 * 0.25);
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          iVar37 = *(int *)(unaff_x19[0xca] + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          fVar38 = (float)iVar37;
          fVar35 = (float)iVar9;
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        }
        else {
          if (*(long *)(lVar28 + 0x100) == 0) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5df18(*(long *)(lVar28 + 0x100),0);
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
          if (((*in_stack_00000060 == 0.0) ||
              (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) ||
             (plVar11 = *(long **)(lVar21 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) goto LAB_00e443fc;
          fVar38 = 0.25;
          *(float *)(unaff_x19 + 0xdb) = fVar35 / (*(float *)(lVar21 + 0x40) * (float)iVar9 * 0.25);
          FUN_00e5df18(lVar21,0);
          if ((unaff_x19[0xca] == 0) ||
             ((lVar21 = *(long *)(unaff_x19[0xca] + 0x100), lVar21 == 0 ||
              (plVar11 = *(long **)(lVar21 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) goto LAB_00e443fc;
          fVar35 = *(float *)(lVar21 + 0x44) * (float)iVar9;
        }
        fVar39 = 0.25;
        fVar38 = fVar38 / (fVar35 * 0.25);
        *(float *)((long)unaff_x19 + 0x6dc) = fVar38;
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000078 = CONCAT44(fVar38,(int)unaff_x19[0xdb]);
        FUN_0132149c(unaff_x19[99],uVar4,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 1,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 2,&stack0x00000070,*puVar18);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 3,&stack0x00000070,*puVar18);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_02681b9c(uVar17,0,0);
        fVar35 = (float)uVar10;
        uVar25 = (uint)unaff_x22;
        uVar22 = (uint)unaff_x29;
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
            fVar35 = fVar35 - pfVar14[2];
            uVar10 = (ulong)(uint)fVar35;
            if (fVar35 * fVar35 +
                (fVar38 - *pfVar14) * (fVar38 - *pfVar14) +
                (fVar39 - pfVar14[1]) * (fVar39 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
          }
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0xb0), lVar21 == 0)) goto LAB_00e443fc;
          uVar17 = *(undefined8 *)(lVar21 + 0x38);
          if (DAT_03774d77 == '\0') {
            thunk_FUN_00d48444(
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                              );
            DAT_03774d77 = '\x01';
          }
          fVar35 = (float)uVar17 -
                   (float)**(undefined8 **)
                            (*(long *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                            + 0xb8);
          fVar38 = (float)((ulong)uVar17 >> 0x20) -
                   (float)((ulong)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8) >> 0x20);
          if (DAT_028aa020 <= fVar35 * fVar35 + fVar38 * fVar38) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          dVar33 = *in_stack_00000060;
          if ((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xb0), lVar21 == 0))
          goto LAB_00e443fc;
          fVar38 = fStack0000000000000048 * *(float *)(lVar21 + 0x38);
          *(float *)(unaff_x19 + 0xc9) = fVar38;
          fVar35 = fStack0000000000000048 * *(float *)(lVar21 + 0x3c);
          *(float *)((long)unaff_x19 + 0x64c) = fVar35;
          if (*(char *)(lVar21 + 0x25) != '\0') {
            fVar36 = 1.0 / *(float *)((long)dVar33 + 0x84);
          }
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          lVar28 = lVar21 + uVar24 * 0xc;
          fVar39 = *(float *)(lVar28 + 0x20);
          uVar17 = *(undefined8 *)(lVar28 + 0x24);
          *(float *)(unaff_x19 + 0xcd) = fVar39;
          in_stack_00000040[0xf] = uVar17;
          *(float *)(unaff_x19 + 0xd0) = fVar39;
          fVar29 = (float)uVar17;
          *(float *)((long)unaff_x19 + 0x684) = fVar29;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar28 = lVar21 + unaff_x22 * 0xc;
          uVar31 = *(undefined4 *)(lVar28 + 0x20);
          uVar17 = *(undefined8 *)(lVar28 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
          *(int *)((long)unaff_x19 + 0x694) = (int)uVar17;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar28 = lVar21 + unaff_x29 * 0xc;
          uVar31 = *(undefined4 *)(lVar28 + 0x20);
          uVar17 = *(undefined8 *)(lVar28 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
          *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar17;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          lVar21 = lVar21 + in_stack_00000058 * 0xc;
          uVar31 = *(undefined4 *)(lVar21 + 0x20);
          uVar17 = *(undefined8 *)(lVar21 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
          *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar17;
          lVar21 = *(long *)((long)dVar33 + 0xb0);
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(char *)(lVar21 + 0x24) == '\0') {
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar28 + 0x18);
            if (uVar3 <= uVar4) goto LAB_00e44400;
            lVar15 = lVar28 + uVar24 * 8;
            *(float *)(lVar15 + 0x20) = (fVar38 + fVar36 * fVar39) - *(float *)(lVar21 + 0x30);
            *(float *)(lVar15 + 0x24) = (fVar35 + fVar36 * fVar29) - *(float *)(lVar21 + 0x34);
            if (((uVar3 <= uVar25) ||
                (*(ulong *)(lVar28 + unaff_x22 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar36 +
                               (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                               (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xd2] * fVar36 + (float)unaff_x19[0xc9]) -
                               (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar22)) ||
               (*(ulong *)(lVar28 + unaff_x29 * 8 + 0x20) =
                     CONCAT44((fVar36 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                              (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                              (fVar36 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                              (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar20))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xc9];
            *(ulong *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44((fVar36 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                          (float)(uVar10 >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                          (fVar36 * (float)unaff_x19[0xd6] + (float)uVar10) -
                          (float)*(undefined8 *)(lVar21 + 0x30));
          }
          else {
            fVar34 = *(float *)((long)dVar33 + 0x44);
            *(float *)(unaff_x19 + 0xd8) = fVar34;
            fVar2 = *(float *)((long)dVar33 + 0x48);
            lVar28 = unaff_x19[0x61];
            *(float *)((long)unaff_x19 + 0x6c4) = fVar2;
            if (lVar28 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar28 + 0x18);
            if (uVar3 <= uVar4) goto LAB_00e44400;
            lVar15 = lVar28 + uVar24 * 8;
            *(float *)(lVar15 + 0x20) =
                 (fVar38 + fVar36 * (fVar39 - fVar34)) - *(float *)(lVar21 + 0x30);
            *(float *)(lVar15 + 0x24) =
                 (fVar35 + fVar36 * (fVar29 - fVar2)) - *(float *)(lVar21 + 0x34);
            if (((uVar3 <= uVar25) ||
                (*(ulong *)(lVar28 + unaff_x22 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                               ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                               (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar36) -
                               (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xc9] +
                               ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar36) -
                               (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar22)) ||
               (*(ulong *)(lVar28 + unaff_x29 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar36 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar36 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                              (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar20))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xd8];
            *(ulong *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar36 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                   (float)(uVar10 >> 0x20))) -
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] +
                          fVar36 * ((float)unaff_x19[0xd6] - (float)uVar10)) -
                          (float)*(undefined8 *)(lVar21 + 0x30));
          }
        }
LAB_00e3dbd8:
        dVar33 = *in_stack_00000060;
        if (dVar33 == 0.0) goto LAB_00e443fc;
        if (*(char *)((long)dVar33 + 0x108) != '\0') {
          if (*(long *)((long)dVar33 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar33 + 0x100) + 0x20) == '\0') {
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + uVar24 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + uVar24 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + (long)(int)uVar25 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + (long)(int)uVar25 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + (long)(int)uVar22 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + (long)(int)uVar22 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + in_stack_00000058 * 8 + 0x20);
            dVar33 = *in_stack_00000060;
            if (dVar33 == 0.0) goto LAB_00e443fc;
          }
        }
        dVar32 = DAT_028aa048;
        if (*(char *)((long)dVar33 + 0x108) == '\0') {
LAB_00e3dd34:
          uVar17 = *(undefined8 *)((long)dVar33 + 0xa8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_02681b9c(uVar17,0,0);
          dVar33 = *in_stack_00000060;
          if (dVar33 == 0.0) goto LAB_00e443fc;
          if ((uVar13 & 1) == 0) {
            uVar17 = *(undefined8 *)((long)dVar33 + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            dVar33 = DAT_028aa048;
            if ((uVar13 & 1) == 0) {
              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
              uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_02681b9c(uVar17,0,0);
              lVar21 = *in_stack_00000030;
              if ((uVar10 & 1) == 0) {
                fVar30 = *(float *)((long)unaff_x19 + 0x8c);
                fVar35 = *(float *)(unaff_x19 + 0x12);
                fVar39 = *(float *)((long)unaff_x19 + 0x94);
                fVar38 = *(float *)(unaff_x19 + 0x13);
                fVar36 = fVar30;
                if (1.0 < fVar30) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar30 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar30 = fVar35;
                if (1.0 < fVar35) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar35 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fd48;
                  }
                  fVar35 = (float)(int)(fVar30 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar30;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar30 + -0.5);
                }
                fVar30 = fVar39;
                if (1.0 < fVar39) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar39 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar39 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                fVar30 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar38 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
                fVar36 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar39 = fVar30;
                if (1.0 < fVar30) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar30 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40610;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + -0.5);
                }
                fVar38 = fVar35;
                if (1.0 < fVar35) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar35 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
                *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                fVar30 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar38 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
                fVar36 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar39 = fVar30;
                if (1.0 < fVar30) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar30 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40e20;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + -0.5);
                }
                fVar38 = fVar35;
                if (1.0 < fVar35) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar35 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
                *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                fVar36 = *(float *)((long)unaff_x19 + 0x8c);
                fVar30 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar38 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
              }
              else {
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0))
                goto LAB_00e443fc;
                fVar30 = *(float *)(lVar28 + 0x18);
                fVar35 = *(float *)(lVar28 + 0x1c);
                fVar39 = *(float *)(lVar28 + 0x20);
                fVar38 = *(float *)(lVar28 + 0x24);
                fVar36 = fVar30;
                if (1.0 < fVar30) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar30 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar30 = fVar35;
                if (1.0 < fVar35) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar35 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fcc4;
                  }
                  fVar35 = (float)(int)(fVar30 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar30;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar30 + -0.5);
                }
                fVar30 = fVar39;
                if (1.0 < fVar39) {
                  fVar30 = 1.0;
                }
                fVar30 = fVar30 * 255.0;
                if (fVar39 < 0.0) {
                  fVar30 = unaff_s8;
                }
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar39 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
                goto LAB_00e443fc;
                fVar30 = *(float *)(lVar21 + 0x1c);
                lVar28 = *in_stack_00000030;
                fVar38 = *(float *)(lVar21 + 0x20);
                fVar35 = *(float *)(lVar21 + 0x24);
                fVar36 = *(float *)(lVar21 + 0x18) * 255.0;
                if (*(float *)(lVar21 + 0x18) < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar39 = fVar30;
                if (1.0 < fVar30) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar30 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e4057c;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + -0.5);
                }
                fVar38 = fVar35;
                if (1.0 < fVar35) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar35 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar28 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar28 + 0x18) <= uVar25) goto LAB_00e44400;
                *(uint *)(lVar28 + (long)(int)uVar25 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
                goto LAB_00e443fc;
                fVar30 = *(float *)(lVar21 + 0x1c);
                lVar28 = *in_stack_00000030;
                fVar38 = *(float *)(lVar21 + 0x20);
                fVar35 = *(float *)(lVar21 + 0x24);
                fVar36 = *(float *)(lVar21 + 0x18) * 255.0;
                if (*(float *)(lVar21 + 0x18) < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar39 = fVar30;
                if (1.0 < fVar30) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar30 < 0.0) {
                  fVar39 = unaff_s8;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40d8c;
                  }
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                if (0.0 <= fVar30) {
                  if (dVar33 == 0.5) {
                    fVar30 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar30 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar30 = (float)(int)(fVar30 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + -0.5);
                }
                fVar38 = fVar35;
                if (1.0 < fVar35) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar35 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar28 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
                *(uint *)(lVar28 + (long)(int)uVar22 * 4 + 0x20) =
                     (int)fVar36 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0))
                goto LAB_00e443fc;
                fVar36 = *(float *)(lVar28 + 0x18);
                fVar30 = *(float *)(lVar28 + 0x1c);
                lVar21 = *in_stack_00000030;
                fVar38 = *(float *)(lVar28 + 0x20);
                fVar35 = *(float *)(lVar28 + 0x24);
              }
              fVar39 = fVar36 * 255.0;
              if (fVar36 < 0.0) {
                fVar39 = unaff_s8;
              }
              dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar39 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar39 + -0.5);
              }
              fVar39 = fVar30;
              if (1.0 < fVar30) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar30 < 0.0) {
                fVar39 = unaff_s8;
              }
              dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar30 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              uVar10 = 0x3f800000;
              fVar38 = fVar35;
              if (1.0 < fVar35) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar35 < 0.0) {
                fVar38 = unaff_s8;
              }
              dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar33 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar21 != 0) {
                if (uVar20 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
                       (int)fVar36 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar30 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  goto LAB_00e43400;
                }
                goto LAB_00e44400;
              }
              goto LAB_00e443fc;
            }
            lVar21 = *in_stack_00000030;
            dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar30 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = 255.0;
            }
            dVar33 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar33 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            if ((uVar13 & 1) == 0) goto LAB_00e43400;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar38 = *(float *)(lVar21 + 0x20);
            fVar35 = *(float *)(lVar21 + 0x24);
            fVar36 = fVar30 * 255.0;
            if (fVar30 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = 1.0;
                goto LAB_00e3ede4;
              }
              fVar30 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar36 = -1.0;
LAB_00e3ede4:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + fVar36;
              }
            }
            else {
              fVar30 = (float)(int)(fVar36 + -0.5);
            }
            fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
            fVar36 = fVar39 * 255.0;
            if (fVar39 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar38;
            if (1.0 < fVar38) {
              fVar39 = 1.0;
            }
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            fVar39 = fVar39 * 255.0;
            if (fVar38 < 0.0) {
              fVar39 = unaff_s8;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ffb0;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            fVar38 = fVar35;
            if (1.0 < fVar35) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar35 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e40174;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e40174:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            *puVar19 = (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar38 = *(float *)(lVar21 + 0x20);
            fVar35 = *(float *)(lVar21 + 0x24);
            fVar36 = fVar30 * 255.0;
            if (fVar30 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = 1.0;
                goto LAB_00e404dc;
              }
              fVar30 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar36 = -1.0;
LAB_00e404dc:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + fVar36;
              }
            }
            else {
              fVar30 = (float)(int)(fVar36 + -0.5);
            }
            fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
            fVar36 = fVar39 * 255.0;
            if (fVar39 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar38;
            if (1.0 < fVar38) {
              fVar39 = 1.0;
            }
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            fVar39 = fVar39 * 255.0;
            if (fVar38 < 0.0) {
              fVar39 = unaff_s8;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40888;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            fVar38 = fVar35;
            if (1.0 < fVar35) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar35 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e40a4c;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e40a4c:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            *puVar19 = (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + (long)(int)uVar22 * 4;
          }
          else {
            lVar21 = *(long *)((long)dVar33 + 0xa8);
            if (lVar21 == 0) goto LAB_00e443fc;
            fVar36 = *(float *)(lVar21 + 0x24);
            if (fVar36 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            plVar27 = (long *)StringLiteral_9119;
            cVar5 = *(char *)(lVar21 + 0x2c);
            lVar15 = *in_stack_00000030;
            lVar28 = *(long *)(lVar21 + 0x18);
            fVar36 = fStack0000000000000048 * fVar36;
            if (*(int *)(lVar21 + 0x28) == 1) {
              if (cVar5 == '\0') {
                if (lVar28 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)(lVar21 + 0x20);
                fVar39 = *(float *)((long)dVar33 + 0x84);
                fVar36 = fVar36 + (*(float *)((long)dVar33 + 0x48) * fVar38) / fVar39;
                fVar36 = fVar36 - (float)(int)fVar36;
                fVar35 = fVar36;
                if (1.0 < fVar36) {
                  fVar35 = fVar30;
                }
                fVar29 = fVar35;
                if (fVar36 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar28,0);
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = fVar30;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3eeac;
                  }
                  fVar30 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = fVar36;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar36 + -0.5);
                }
                fVar36 = fVar35;
                if (1.0 < fVar35) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar35 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e41534;
                  }
                  fVar35 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar36;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar36 + -0.5);
                }
                fVar36 = fVar38;
                if (1.0 < fVar38) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar38 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar38 = fVar39;
                if (1.0 < fVar39) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar39 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                     (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                dVar33 = *in_stack_00000060;
                if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                   (lVar28 = *(long *)(lVar21 + 0x18), lVar28 == 0)) goto LAB_00e443fc;
                fVar35 = *(float *)((long)dVar33 + 0x48);
                fVar38 = *(float *)((long)dVar33 + 0x84);
                lVar15 = *in_stack_00000030;
                fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                         (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
                fVar30 = fVar30 - (float)(int)fVar30;
                fVar36 = fVar30;
                if (1.0 < fVar30) {
                  fVar36 = 1.0;
                }
              }
              else {
                if (lVar28 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)((long)dVar33 + 0x84);
                fVar39 = *(float *)(lVar21 + 0x20);
                fVar36 = fVar36 + ((*(float *)((long)dVar33 + 0x48) + fVar38) * fVar39) / fVar38;
                fVar36 = fVar36 - (float)(int)fVar36;
                fVar35 = fVar36;
                if (1.0 < fVar36) {
                  fVar35 = fVar30;
                }
                fVar29 = fVar35;
                if (fVar36 < 0.0) {
                  fVar29 = 0.0;
                }
                fVar29 = (float)FUN_0269ad38(fVar29,lVar28,0);
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = fVar30;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ed6c;
                  }
                  fVar30 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar30 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar30 = fVar36;
                  }
                }
                else {
                  fVar30 = (float)(int)(fVar36 + -0.5);
                }
                fVar36 = fVar35;
                if (1.0 < fVar35) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar35 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3f2ec;
                  }
                  fVar35 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar36;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar36 + -0.5);
                }
                fVar36 = fVar38;
                if (1.0 < fVar38) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar38 < 0.0) {
                  fVar36 = 0.0;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar36 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar36 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar36 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar38 = fVar39;
                if (1.0 < fVar39) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar39 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar33 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                     (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
                dVar33 = *in_stack_00000060;
                if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                   (lVar28 = *(long *)(lVar21 + 0x18), lVar28 == 0)) goto LAB_00e443fc;
                fVar35 = *(float *)((long)dVar33 + 0x84);
                fVar38 = *(float *)(lVar21 + 0x20);
                lVar15 = *in_stack_00000030;
                fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                         ((*(float *)((long)dVar33 + 0x48) + fVar35) * fVar38) / fVar35;
                fVar30 = fVar30 - (float)(int)fVar30;
                fVar36 = fVar30;
                if (1.0 < fVar30) {
                  fVar36 = 1.0;
                }
              }
              fVar39 = fVar36;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,lVar28,0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar36 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar36;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar36 = fVar35;
              if (1.0 < fVar35) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar35 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar38 < 0.0) {
                fVar35 = 0.0;
              }
              dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar33 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                 (*(long *)(lVar21 + 0x18) == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar33 + 0x48);
              fVar38 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *in_stack_00000030;
              fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar36 = fVar30;
              if (1.0 < fVar30) {
                fVar36 = 1.0;
              }
              fVar39 = fVar36;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar36 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar36;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar36 = fVar35;
              if (1.0 < fVar35) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar35 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar38 < 0.0) {
                fVar35 = 0.0;
              }
              dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar33 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar28 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
              *(uint *)(lVar28 + (long)(int)uVar22 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                 (*(long *)(lVar21 + 0x18) == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar33 + 0x48);
              fVar38 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *in_stack_00000030;
              fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar36 = fVar30;
              if (1.0 < fVar30) {
                fVar36 = 1.0;
              }
              fVar39 = fVar36;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar36 < 0.0) {
                fVar30 = 0.0;
              }
LAB_00e42040:
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (fVar30 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar33 == 0.5) {
                fVar36 = (float)_fStack0000000000000070;
                fVar30 = fVar36 + 1.0;
                goto LAB_00e425d4;
              }
              fVar36 = (float)(int)(fVar30 + 0.5);
            }
            else {
              lVar16 = *in_stack_00000038;
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar28 == 0) goto LAB_00e443fc;
              fVar38 = *(float *)(lVar16 + uVar24 * 0xc + 0x20);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              fVar36 = fVar36 + (fVar38 * *(float *)(lVar21 + 0x20)) / fVar39;
              fVar36 = fVar36 - (float)(int)fVar36;
              fVar35 = fVar36;
              if (1.0 < fVar36) {
                fVar35 = fVar30;
              }
              fVar29 = fVar35;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar28,0);
              fVar36 = fVar29;
              if (1.0 < fVar29) {
                fVar36 = fVar30;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3e0b0;
                }
                fVar30 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar36;
                }
              }
              else {
                fVar30 = (float)(int)(fVar36 + -0.5);
              }
              fVar36 = fVar35;
              if (1.0 < fVar35) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar35 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ee80;
                }
                fVar35 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar36;
                }
              }
              else {
                fVar35 = (float)(int)(fVar36 + -0.5);
              }
              fVar36 = fVar38;
              if (1.0 < fVar38) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar38 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar38 = fVar39;
              if (1.0 < fVar39) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar39 < 0.0) {
                fVar38 = 0.0;
              }
              dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar33 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar39 = 1.0;
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                   (int)fVar30 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              plVar27 = (long *)StringLiteral_9119;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              lVar16 = *in_stack_00000030;
              lVar15 = *(long *)(lVar21 + 0x18);
              fVar36 = fStack0000000000000048 * *(float *)(lVar21 + 0x24);
              if (cVar5 != '\0') {
                if (uVar25 < *(uint *)(lVar28 + 0x18)) {
                  if (lVar15 != 0) {
                    fVar35 = *(float *)(lVar28 + (long)(int)uVar25 * 0xc + 0x20);
                    fVar38 = *(float *)((long)dVar33 + 0x84);
                    fVar36 = fVar36 + (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
                    fVar36 = fVar36 - (float)(int)fVar36;
                    fVar30 = fVar36;
                    if (1.0 < fVar36) {
                      fVar30 = fVar39;
                    }
                    fVar29 = fVar30;
                    if (fVar36 < 0.0) {
                      fVar29 = 0.0;
                    }
                    fVar29 = (float)FUN_0269ad38(fVar29,lVar15,0);
                    fVar36 = fVar29;
                    if (1.0 < fVar29) {
                      fVar36 = fVar39;
                    }
                    fVar36 = fVar36 * 255.0;
                    if (fVar29 < 0.0) {
                      fVar36 = 0.0;
                    }
                    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                    if (0.0 <= fVar36) {
                      if (dVar33 == 0.5) {
                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar39 = (float)(int)(fVar36 + 0.5);
                    }
                    else if (dVar33 == -0.5) {
                      fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = fVar36;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar36 + -0.5);
                    }
                    fVar36 = fVar30;
                    if (1.0 < fVar30) {
                      fVar36 = 1.0;
                    }
                    fVar36 = fVar36 * 255.0;
                    if (fVar30 < 0.0) {
                      fVar36 = 0.0;
                    }
                    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                    if (0.0 <= fVar36) {
                      if (dVar33 == 0.5) {
                        fVar36 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar30 = (float)(int)(fVar36 + 0.5);
                    }
                    else if (dVar33 == -0.5) {
                      fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar30 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar30 = fVar36;
                      }
                    }
                    else {
                      fVar30 = (float)(int)(fVar36 + -0.5);
                    }
                    fVar36 = fVar35;
                    if (1.0 < fVar35) {
                      fVar36 = 1.0;
                    }
                    fVar36 = fVar36 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar36 = 0.0;
                    }
                    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                    if (0.0 <= fVar36) {
                      if (dVar33 == 0.5) {
                        fVar36 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar36 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar36 = (float)(int)(fVar36 + 0.5);
                      }
                    }
                    else if (dVar33 == -0.5) {
                      fVar36 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar36 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar36 = (float)(int)(fVar36 + -0.5);
                    }
                    fVar35 = fVar38;
                    if (1.0 < fVar38) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar38 < 0.0) {
                      fVar35 = 0.0;
                    }
                    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
                    if (0.0 <= fVar35) {
                      if (dVar33 == 0.5) {
                        fVar35 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar35 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar35 = (float)(int)(fVar35 + 0.5);
                      }
                    }
                    else if (dVar33 == -0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + -0.5);
                    }
                    if (lVar16 != 0) {
                      if (uVar25 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                             (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                             ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                        dVar33 = *in_stack_00000060;
                        if (((dVar33 != 0.0) &&
                            (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 != 0)) &&
                           (lVar28 = *in_stack_00000038, lVar28 != 0)) {
                          if (uVar22 < *(uint *)(lVar28 + 0x18)) {
                            if (*(long *)(lVar21 + 0x18) != 0) {
                              fVar35 = *(float *)(lVar28 + (long)(int)uVar22 * 0xc + 0x20);
                              fVar38 = *(float *)((long)dVar33 + 0x84);
                              lVar28 = *in_stack_00000030;
                              fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                                       (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
                              fVar30 = fVar30 - (float)(int)fVar30;
                              fVar36 = fVar30;
                              if (1.0 < fVar30) {
                                fVar36 = 1.0;
                              }
                              fVar39 = fVar36;
                              if (fVar30 < 0.0) {
                                fVar39 = 0.0;
                              }
                              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18),0);
                              fVar30 = fVar39;
                              if (1.0 < fVar39) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar33 == 0.5) {
                                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar39 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar33 == -0.5) {
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
                              fVar30 = fVar36;
                              if (1.0 < fVar36) {
                                fVar30 = 1.0;
                              }
                              fVar30 = fVar30 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar30 = 0.0;
                              }
                              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                              if (0.0 <= fVar30) {
                                if (dVar33 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar30 = (float)(int)(fVar30 + 0.5);
                              }
                              else if (dVar33 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                fVar30 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar30 = fVar36;
                                }
                              }
                              else {
                                fVar30 = (float)(int)(fVar30 + -0.5);
                              }
                              fVar36 = fVar35;
                              if (1.0 < fVar35) {
                                fVar36 = 1.0;
                              }
                              fVar36 = fVar36 * 255.0;
                              if (fVar35 < 0.0) {
                                fVar36 = 0.0;
                              }
                              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                              if (0.0 <= fVar36) {
                                if (dVar33 == 0.5) {
                                  fVar36 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar36 = (float)(int)(fVar36 + 0.5);
                                }
                              }
                              else if (dVar33 == -0.5) {
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar36 + -0.5);
                              }
                              fVar35 = fVar38;
                              if (1.0 < fVar38) {
                                fVar35 = 1.0;
                              }
                              fVar35 = fVar35 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar35 = 0.0;
                              }
                              dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
                              plVar27 = (long *)StringLiteral_9119;
                              if (0.0 <= fVar35) {
                                if (dVar33 == 0.5) {
                                  fVar35 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar35 = (float)(int)(fVar35 + 0.5);
                                }
                              }
                              else if (dVar33 == -0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar35 + -0.5);
                              }
                              if (lVar28 != 0) {
                                if (uVar22 < *(uint *)(lVar28 + 0x18)) {
                                  *(uint *)(lVar28 + (long)(int)uVar22 * 4 + 0x20) =
                                       (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 |
                                       ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                  dVar33 = *in_stack_00000060;
                                  if (((dVar33 != 0.0) &&
                                      (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 != 0)) &&
                                     (lVar28 = *in_stack_00000038, lVar28 != 0)) {
                                    if (uVar20 < *(uint *)(lVar28 + 0x18)) {
                                      if (*(long *)(lVar21 + 0x18) != 0) {
                                        fVar35 = *(float *)(lVar28 + in_stack_00000058 * 0xc + 0x20)
                                        ;
                                        fVar38 = *(float *)((long)dVar33 + 0x84);
                                        lVar28 = *in_stack_00000030;
                                        fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24)
                                                 + (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
                                        fVar30 = fVar30 - (float)(int)fVar30;
                                        fVar36 = fVar30;
                                        if (1.0 < fVar30) {
                                          fVar36 = 1.0;
                                        }
                                        fVar39 = fVar36;
                                        if (fVar30 < 0.0) {
                                          fVar39 = 0.0;
                                        }
                                        fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18)
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
                                        dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
                                        if (0.0 <= fVar30) {
                                          if (dVar33 == 0.5) {
                                            fVar30 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar39 = (float)(int)(fVar30 + 0.5);
                                        }
                                        else if (dVar33 == -0.5) {
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
                                        fVar30 = fVar36;
                                        if (1.0 < fVar36) {
                                          fVar30 = 1.0;
                                        }
                                        fVar30 = fVar30 * 255.0;
                                        if (fVar36 < 0.0) {
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
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar24 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar33 + 0x84);
              fVar36 = fVar36 + (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
              fVar36 = fVar36 - (float)(int)fVar36;
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = fVar39;
              }
              fVar29 = fVar30;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              fVar29 = (float)FUN_0269ad38(fVar29,lVar15,0);
              fVar36 = fVar29;
              if (1.0 < fVar29) {
                fVar36 = fVar39;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar39 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar36;
                }
              }
              else {
                fVar39 = (float)(int)(fVar36 + -0.5);
              }
              fVar36 = fVar30;
              if (1.0 < fVar30) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar30 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar30 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar36;
                }
              }
              else {
                fVar30 = (float)(int)(fVar36 + -0.5);
              }
              fVar36 = fVar35;
              if (1.0 < fVar35) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar35 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar38 < 0.0) {
                fVar35 = 0.0;
              }
              dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar33 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar24 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *in_stack_00000030;
              fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar36 = fVar30;
              if (1.0 < fVar30) {
                fVar36 = 1.0;
              }
              fVar39 = fVar36;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar36 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar30 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                fVar30 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar30 = fVar36;
                }
              }
              else {
                fVar30 = (float)(int)(fVar30 + -0.5);
              }
              fVar36 = fVar35;
              if (1.0 < fVar35) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar35 < 0.0) {
                fVar36 = 0.0;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar38 < 0.0) {
                fVar35 = 0.0;
              }
              dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar33 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              if (lVar28 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
              *(uint *)(lVar28 + (long)(int)uVar22 * 4 + 0x20) =
                   (int)fVar39 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar21 = *(long *)((long)dVar33 + 0xa8), lVar21 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar24 * 0xc + 0x20);
              fVar38 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *in_stack_00000030;
              fVar30 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar35 * *(float *)(lVar21 + 0x20)) / fVar38;
              fVar30 = fVar30 - (float)(int)fVar30;
              fVar36 = fVar30;
              if (1.0 < fVar30) {
                fVar36 = 1.0;
              }
              fVar39 = fVar36;
              if (fVar30 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,*(long *)(lVar21 + 0x18),0);
              fVar30 = fVar39;
              if (1.0 < fVar39) {
                fVar30 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar30 = fVar30 * 255.0;
              if (fVar39 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) {
                if (dVar33 == 0.5) {
                  fVar30 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar39 = (float)(int)(fVar30 + 0.5);
              }
              else if (dVar33 == -0.5) {
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
              fVar30 = fVar36;
              if (1.0 < fVar36) {
                fVar30 = 1.0;
              }
              fVar30 = fVar30 * 255.0;
              if (fVar36 < 0.0) {
                fVar30 = 0.0;
              }
              dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
              if (0.0 <= fVar30) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar33 == -0.5) {
                fVar36 = (float)_fStack0000000000000070;
                fVar30 = fVar36 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar30;
                }
              }
              else {
                fVar36 = (float)(int)(fVar30 + -0.5);
              }
            }
            unaff_s8 = 0.0;
            fVar30 = fVar35;
            if (1.0 < fVar35) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar35 < 0.0) {
              fVar30 = 0.0;
            }
            dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar33 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42654;
              }
              fVar35 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar30 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar30;
              }
            }
            else {
              fVar35 = (float)(int)(fVar30 + -0.5);
            }
            fVar30 = fVar38;
            if (1.0 < fVar38) {
              fVar30 = 1.0;
            }
            fVar30 = fVar30 * 255.0;
            if (fVar38 < 0.0) {
              fVar30 = 0.0;
            }
            dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar33 == 0.5) {
                fVar30 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar38 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar20) goto LAB_00e44400;
            *(uint *)(lVar28 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar39 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar38 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            if ((uVar13 & 1) == 0) goto LAB_00e43400;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar36 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar38 = *(float *)(lVar21 + 0x20);
            fVar35 = *(float *)(lVar21 + 0x24);
            fVar30 = fVar36 * 255.0;
            if (fVar36 < 0.0) {
              fVar30 = 0.0;
            }
            dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar33 == 0.5) {
                fVar36 = 1.0;
                goto LAB_00e4287c;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar36 = -1.0;
LAB_00e4287c:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + fVar36;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar36 = fVar39 * 255.0;
            fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
            if (fVar39 < 0.0) {
              fVar36 = 0.0;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar38;
            if (1.0 < fVar38) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            if (fVar38 < 0.0) {
              fVar39 = 0.0;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e429c8;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            fVar38 = fVar35;
            if (1.0 < fVar35) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar35 < 0.0) {
              fVar38 = 0.0;
            }
            dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e42a44;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e42a44:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            *puVar19 = (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar36 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar38 = *(float *)(lVar21 + 0x20);
            fVar35 = *(float *)(lVar21 + 0x24);
            fVar30 = fVar36 * 255.0;
            if (fVar36 < 0.0) {
              fVar30 = 0.0;
            }
            dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
            if (0.0 <= fVar30) {
              if (dVar33 == 0.5) {
                fVar36 = 1.0;
                goto LAB_00e42b80;
              }
              fVar30 = (float)(int)(fVar30 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar36 = -1.0;
LAB_00e42b80:
              fVar30 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar30 = (float)_fStack0000000000000070 + fVar36;
              }
            }
            else {
              fVar30 = (float)(int)(fVar30 + -0.5);
            }
            fVar36 = fVar39 * 255.0;
            fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
            if (fVar39 < 0.0) {
              fVar36 = 0.0;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar38;
            if (1.0 < fVar38) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            if (fVar38 < 0.0) {
              fVar39 = 0.0;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42ccc;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            fVar38 = fVar35;
            if (1.0 < fVar35) {
              fVar38 = 1.0;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar35 < 0.0) {
              fVar38 = 0.0;
            }
            dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e42d48;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e42d48:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            *puVar19 = (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                       ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
            lVar21 = *in_stack_00000030;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + (long)(int)uVar22 * 4;
          }
          uVar3 = *(uint *)(lVar21 + 0x20);
          if ((*in_stack_00000060 == 0.0) ||
             (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0)) goto LAB_00e443fc;
          fVar30 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar28 + 0x18);
          fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x1c);
          fVar38 = *(float *)(lVar28 + 0x20);
          fVar35 = *(float *)(lVar28 + 0x24);
          fVar36 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar36 = 1.0;
              goto FUN_00e42e84;
            }
            fVar30 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar36 = -1.0;
FUN_00e42e84:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar36;
            }
          }
          else {
            fVar30 = (float)(int)(fVar36 + -0.5);
          }
          fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
          fVar36 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar33 == -0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
          fVar39 = fVar39 * 255.0;
          if (fVar38 < 0.0) {
            fVar39 = unaff_s8;
          }
          dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar33 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar33 == -0.5) {
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
          fVar38 = fVar35;
          if (1.0 < fVar35) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar35 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar33 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e4304c;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar35 = -1.0;
LAB_00e4304c:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *(uint *)(lVar21 + 0x20) =
               (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          lVar21 = *in_stack_00000030;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          puVar19 = (uint *)(lVar21 + in_stack_00000058 * 4 + 0x20);
          uVar3 = *puVar19;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0)) goto LAB_00e443fc;
          fVar30 = (float)(uVar3 & 0xff) / 255.0;
          uVar10 = (ulong)(uint)fVar30;
          fVar30 = fVar30 * *(float *)(lVar21 + 0x18);
          fVar39 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
          fVar38 = *(float *)(lVar21 + 0x20);
          fVar35 = *(float *)(lVar21 + 0x24);
          fVar36 = fVar30 * 255.0;
          if (fVar30 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar36 = 1.0;
              goto LAB_00e4318c;
            }
            fVar30 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar36 = -1.0;
LAB_00e4318c:
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + fVar36;
            }
          }
          else {
            fVar30 = (float)(int)(fVar36 + -0.5);
          }
          fVar38 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar38;
          fVar36 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
          }
          else if (dVar33 == -0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar39 = fVar38;
          if (1.0 < fVar38) {
            fVar39 = 1.0;
          }
          fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
          fVar39 = fVar39 * 255.0;
          if (fVar38 < 0.0) {
            fVar39 = unaff_s8;
          }
          dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar33 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar33 == -0.5) {
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
          fVar38 = fVar35;
          if (1.0 < fVar35) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar35 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar33 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar33 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar33 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar38 + -0.5);
          }
          *puVar19 = (int)fVar30 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          unaff_s15 = in_stack_00000008._4_4_;
        }
        else {
          if (*(long *)((long)dVar33 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar33 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
          lVar21 = *in_stack_00000030;
          dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar36 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
               (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          lVar21 = *in_stack_00000030;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar36 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          lVar21 = *in_stack_00000030;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar36 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
               (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          lVar21 = *in_stack_00000030;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar36 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar30 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar30 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar30 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
        }
LAB_00e43400:
        lVar21 = *in_stack_00000030;
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
        lVar21 = lVar21 + uVar24 * 4;
        fVar36 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar36);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar21 = lVar21 + (long)(int)uVar25 * 4;
        fVar36 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar36);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
        unaff_x20 = (long)(int)uVar22;
        lVar21 = lVar21 + unaff_x20 * 4;
        fVar36 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar36);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
        lVar21 = lVar21 + in_stack_00000058 * 4;
        uVar13 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
        fVar36 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar36);
        uVar12 = FUN_00e3703c();
        unaff_x26 = in_stack_00000060;
      } while ((uVar12 & 1) != 0);
      lVar21 = *plVar27;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar27;
      }
    } while (*(int *)(*(long *)(lVar21 + 0xb8) + 0x20) != 1);
    lVar21 = *in_stack_00000030;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
    uVar20 = *puVar19;
    fVar30 = (float)FUN_026982b0((float)(uVar20 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar20 >> 8 & 0xff) / 255.0,0);
    fVar38 = (float)FUN_026982b0((float)(uVar20 >> 0x10 & 0xff) / 255.0,0);
    fVar36 = fVar30;
    if (1.0 < fVar30) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * 255.0;
    if (fVar30 < 0.0) {
      fVar36 = unaff_s8;
    }
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar36 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar36 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar36 = (float)(int)(fVar36 + -0.5);
    }
    fVar30 = fVar35;
    if (1.0 < fVar35) {
      fVar30 = 1.0;
    }
    fVar30 = fVar30 * 255.0;
    if (fVar35 < 0.0) {
      fVar30 = unaff_s8;
    }
    dVar33 = modf((double)fVar30,(double *)&stack0x00000070);
    if (0.0 <= fVar30) {
      if (dVar33 == 0.5) {
        fVar30 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar30 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar30 = (float)(int)(fVar30 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar30 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar30 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar30 = (float)(int)(fVar30 + -0.5);
    }
    fVar35 = fVar38;
    if (1.0 < fVar38) {
      fVar35 = 1.0;
    }
    unaff_s9 = 255.0;
    fVar39 = (float)(uVar20 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar38 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43744;
      }
      fVar38 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = fVar35;
      }
    }
    else {
      fVar38 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar39) {
      fVar39 = 1.0;
    }
    fVar39 = fVar39 * 255.0;
    dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
    if (0.0 <= fVar39) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar39 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar39 + -0.5);
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
    *puVar19 = (int)fVar36 & 0xffU | ((int)fVar30 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
    unaff_x24 = *in_stack_00000030;
    if (unaff_x24 == 0) goto LAB_00e443fc;
    if (*(uint *)(unaff_x24 + 0x18) <= uVar25) goto LAB_00e44400;
    unaff_x21 = (uint *)(unaff_x24 + (long)(int)uVar25 * 4 + 0x20);
    uVar4 = *unaff_x21;
    unaff_w23 = uVar4 >> 0x18;
    fVar30 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    unaff_s12 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    unaff_s11 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar36 = fVar30;
    if (1.0 < fVar30) {
      fVar36 = 1.0;
    }
    unaff_s10 = fVar36 * 255.0;
    if (fVar30 < 0.0) {
      unaff_s10 = unaff_s8;
    }
    dVar33 = modf((double)unaff_s10,(double *)&stack0x00000070);
    if (0.0 <= unaff_s10) {
      if (dVar33 == 0.5) {
        fVar36 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar36 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar36 = (float)(int)(unaff_s10 + 0.5);
      }
      goto LAB_00e43970;
    }
    in_ZR = false;
    if (!NAN(dVar33)) {
      in_ZR = dVar33 == -0.5;
      unaff_s9 = 255.0;
    }
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar24 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar28 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar28 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar28 + 0x18) <= uVar24) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar28 + lVar21);
    *puVar1 = uVar31;
    puVar1[1] = (int)uVar13;
    puVar1[2] = (int)uVar10;
    lVar28 = unaff_x19[0xca];
    if ((lVar28 == 0) || (lVar15 = unaff_x19[0xcc], lVar15 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar28 + 0x4c);
    uVar24 = uVar24 + 1;
    puVar18 = (undefined8 *)(lVar15 + lVar21);
    lVar21 = lVar21 + 0xc;
    *puVar18 = *(undefined8 *)(lVar28 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar31;
  } while (uVar4 != uVar24);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar27,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar21 = unaff_x19[0x59];
  if (lVar21 != 0) {
    (**(code **)(lVar21 + 0x18))
              (*(undefined8 *)(lVar21 + 0x40),*in_stack_00000038,*plVar11,*plVar27,
               *(undefined8 *)(lVar21 + 0x28));
  }
  *(undefined1 *)(unaff_x19 + 0x2e) = 1;
LAB_00e443b0:
  lVar21 = __start_il2cpp();
  if (lVar21 != 0) {
    if ((*(char *)(lVar21 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


