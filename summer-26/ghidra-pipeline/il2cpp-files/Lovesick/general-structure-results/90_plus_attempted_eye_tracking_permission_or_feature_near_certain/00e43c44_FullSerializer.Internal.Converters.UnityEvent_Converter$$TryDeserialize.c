/*
FUNCTION_NAME: FullSerializer.Internal.Converters.UnityEvent_Converter$$TryDeserialize
ENTRY_POINT: 00e43c44
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

void FullSerializer_Internal_Converters_UnityEvent_Converter__TryDeserialize(double param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
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
  long *unaff_x19;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *unaff_x20;
  uint *puVar19;
  uint uVar20;
  long unaff_x21;
  long lVar21;
  uint uVar22;
  uint unaff_w22;
  undefined8 uVar23;
  ulong uVar24;
  uint uVar25;
  float unaff_w23;
  ulong uVar26;
  long *unaff_x24;
  long *plVar27;
  long *plVar28;
  long lVar29;
  double *unaff_x26;
  double *pdVar30;
  ulong unaff_x29;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  float fVar36;
  float fVar37;
  float unaff_s8;
  float fVar38;
  int iVar39;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
  float fVar40;
  float fVar41;
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
    plVar27 = unaff_x24;
    pdVar30 = unaff_x26;
    fVar38 = (float)param_1;
    if (((long)param_1 & 1U) != 0) {
      plVar27 = unaff_x24;
      pdVar30 = unaff_x26;
      fVar38 = (float)param_1 + -1.0;
    }
LAB_00e43cac:
    fVar32 = unaff_s12;
    if (1.0 < unaff_s12) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * unaff_w23;
    if (unaff_s12 < 0.0) {
      fVar32 = unaff_s8;
    }
    dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar35 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = (float)(int)(fVar32 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar32 = (float)(int)(fVar32 + -0.5);
    }
    fVar37 = unaff_s11;
    if (1.0 < unaff_s11) {
      fVar37 = 1.0;
    }
    fVar40 = (float)unaff_w22 / unaff_s9;
    fVar37 = fVar37 * unaff_w23;
    if (unaff_s11 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43dbc;
      }
      fVar41 = (float)(int)(fVar37 + 0.5);
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
      fVar41 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar41 = fVar37;
      }
    }
    else {
      fVar41 = (float)(int)(fVar37 + -0.5);
    }
    if (1.0 < fVar40) {
      fVar40 = 1.0;
    }
    fVar40 = fVar40 * unaff_w23;
    dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
    if (0.0 <= fVar40) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar40 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar40 + -0.5);
    }
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)unaff_x29) goto LAB_00e44400;
    *unaff_x20 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar41 & 0xffU) << 0x10 |
                 (int)fVar37 << 0x18;
    lVar21 = *plVar27;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + in_stack_00000058 * 4 + 0x20);
    uVar4 = *puVar19;
    fVar32 = (float)FUN_026982b0((float)(uVar4 & 0xff) / unaff_w23,0);
    fVar37 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / unaff_w23,0);
    fVar40 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / unaff_w23,0);
    fVar38 = fVar32;
    if (1.0 < fVar32) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * unaff_w23;
    if (fVar32 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar35 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    uVar10 = 0x3f800000;
    fVar32 = fVar37;
    if (1.0 < fVar37) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * unaff_w23;
    if (fVar37 < 0.0) {
      fVar32 = unaff_s8;
    }
    dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar35 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = (float)(int)(fVar32 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar32 = (float)(int)(fVar32 + -0.5);
    }
    fVar37 = fVar40;
    if (1.0 < fVar40) {
      fVar37 = 1.0;
    }
    fVar41 = (float)(uVar4 >> 0x18) / unaff_w23;
    fVar37 = fVar37 * unaff_w23;
    if (fVar40 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e440f4;
      }
      fVar40 = (float)(int)(fVar37 + 0.5);
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
      fVar40 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar40 = fVar37;
      }
    }
    else {
      fVar40 = (float)(int)(fVar37 + -0.5);
    }
    if (1.0 < fVar41) {
      fVar41 = 1.0;
    }
    fVar41 = fVar41 * unaff_w23;
    dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
    if (0.0 <= fVar41) {
      uVar13 = 0;
      if (dVar35 == 0.5) {
        fVar37 = 1.0;
        goto LAB_00e44170;
      }
      fVar41 = (float)(int)(fVar41 + 0.5);
    }
    else {
      uVar13 = 0;
      if (dVar35 == -0.5) {
        fVar37 = -1.0;
LAB_00e44170:
        fVar37 = (float)_fStack0000000000000070 + fVar37;
        uVar13 = (ulong)(uint)fVar37;
        fVar41 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar41 = fVar37;
        }
      }
      else {
        fVar41 = (float)(int)(fVar41 + -0.5);
      }
    }
    if (*(uint *)(lVar21 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    *puVar19 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar41 << 0x18;
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
          plVar27 = unaff_x19 + 0xcb;
          if (iVar9 != *(int *)(unaff_x19[0xcb] + 0x18)) {
            FUN_010afdd4(plVar27,iVar9,
                         *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
          }
          if ((unaff_x19[0xcc] == 0) || (lVar21 = unaff_x19[0xf], lVar21 == 0)) goto LAB_00e443fc;
          plVar11 = unaff_x19 + 0xcc;
          if (*(int *)(lVar21 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar11,*(int *)(lVar21 + 0x10),*(undefined8 *)puVar6);
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
        *pdVar30 = _fStack0000000000000070;
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        iVar9 = FUN_00e4e99c();
        if (iVar9 <= *(int *)((long)unaff_x19 + 0x38c)) {
          if (*pdVar30 == 0.0) goto LAB_00e443fc;
          *(undefined1 *)((long)*pdVar30 + 0x165) = 1;
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
          dVar35 = *pdVar30;
          if ((dVar35 == 0.0) || (*(long *)((long)dVar35 + 0x78) == 0)) goto LAB_00e443fc;
          fVar32 = *(float *)(*(long *)((long)dVar35 + 0x78) + 0x18);
          fVar38 = DAT_028aa034;
          if (fVar32 != 0.0) {
            fVar38 = fVar32;
          }
          if ((0.0 < (unaff_s15 - *(float *)((long)dVar35 + 100)) / fVar38) &&
             (*(char *)((long)dVar35 + 0x165) == '\0')) {
            *(undefined1 *)((long)dVar35 + 0x165) = 1;
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
                  fVar37 = *(float *)(lVar21 + 0x48);
                  fVar38 = *(float *)(unaff_x19 + 0x4b);
                  fVar40 = fVar37 + *(float *)((long)unaff_x19 + 0x50c);
                  fVar32 = *(float *)(unaff_x19 + 0x4a);
                  if (fVar37 <= *(float *)(unaff_x19 + 0x4a)) {
                    fVar32 = fVar37;
                  }
                  *(float *)(unaff_x19 + 0x4a) = fVar32;
                  fVar32 = *(float *)((long)unaff_x19 + 0x254);
                  if (fVar40 <= *(float *)((long)unaff_x19 + 0x254)) {
                    fVar32 = fVar40;
                  }
                  *(float *)((long)unaff_x19 + 0x254) = fVar32;
                  fVar32 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar21,0);
                  fVar32 = fVar32 + *(float *)(unaff_x19 + 0xa1) +
                           *(float *)((long)unaff_x19 + 0x55c);
                  if (fVar38 <= fVar32) {
                    fVar38 = fVar32;
                  }
                  *(float *)(unaff_x19 + 0x4b) = fVar38;
                }
              }
            }
            iVar39 = *(int *)((long)unaff_x19 + 0x38c);
            if (*(int *)((long)unaff_x19 + 0x38c) <= iVar9) {
              iVar39 = iVar9;
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
          lVar21 = unaff_x19[0x55];
          if (lVar21 != 0) {
            (**(code **)(lVar21 + 0x18))
                      (*(undefined8 *)(lVar21 + 0x40),*(undefined8 *)(lVar21 + 0x28));
          }
        }
        unaff_x19[0xc6] = 0;
        fVar32 = 0.0;
        *(undefined4 *)(unaff_x19 + 199) = 0;
        fVar38 = 0.0;
        if ((((0.0 < fStack000000000000004c) &&
             (uVar4 = *(uint *)(unaff_x19 + 0x2a), fVar38 = fVar32, uVar4 < 5)) &&
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
                fVar38 = fStack0000000000000070;
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
            fVar38 = 0.0;
            while (iVar9 < *(int *)(lVar21 + 0x18)) {
              FUN_0132138c(lVar21,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
              fVar38 = fVar38 + fStack0000000000000070;
              *(float *)((long)unaff_x19 + 0x634) = fVar38;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar38)
              break;
              lVar21 = unaff_x19[0xb];
              iVar9 = iVar9 + 1;
              if (lVar21 == 0) goto LAB_00e443fc;
            }
          }
        }
        *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        fVar32 = *(float *)((long)unaff_x19 + 0x53c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
        fVar37 = *(float *)((long)_fStack0000000000000070 + 0x5c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        fVar41 = *(float *)(unaff_x19 + 0xa8);
        fVar40 = *(float *)(unaff_x19 + 199) + fVar41;
        *(float *)((long)unaff_x19 + 0x634) =
             fVar38 + fVar32 + (fVar37 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
        *(float *)(unaff_x19 + 199) = fVar40;
        puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        fVar32 = 1.0;
        fVar38 = 1.0;
        uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar33;
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
            uVar33 = FUN_00e4ee40();
            *(undefined4 *)((long)unaff_x19 + 0x674) = uVar33;
            *(float *)(unaff_x19 + 0xcf) = fVar40;
            *(float *)((long)unaff_x19 + 0x67c) = fVar41;
          }
        }
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar6);
          DAT_03774d76 = '\x01';
        }
        lVar29 = *(long *)puVar6;
        uVar33 = *(undefined4 *)(*(undefined8 **)(lVar29 + 0xb8) + 1);
        *in_stack_00000040 = **(undefined8 **)(lVar29 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar33;
        lVar21 = (*(long **)(lVar29 + 0xb8))[1];
        unaff_x19[0xc0] = **(long **)(lVar29 + 0xb8);
        *(int *)(unaff_x19 + 0xc1) = (int)lVar21;
        uVar33 = *(undefined4 *)(*(undefined8 **)(lVar29 + 0xb8) + 1);
        in_stack_00000040[3] = **(undefined8 **)(lVar29 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x614) = uVar33;
        lVar21 = (*(long **)(lVar29 + 0xb8))[1];
        unaff_x19[0xc3] = **(long **)(lVar29 + 0xb8);
        *(int *)(unaff_x19 + 0xc4) = (int)lVar21;
        uVar33 = *(undefined4 *)(*(undefined8 **)(lVar29 + 0xb8) + 1);
        in_stack_00000040[6] = **(undefined8 **)(lVar29 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar33;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar17,0,0);
        if ((uVar10 & 1) != 0) {
          if (*pdVar30 == 0.0) goto LAB_00e443fc;
          if (*(float *)((long)*pdVar30 + 0x84) != 0.0) {
            lVar21 = __start_il2cpp();
            if (lVar21 == 0) goto LAB_00e443fc;
            if ((*(char *)(lVar21 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0'))
            {
              lVar21 = unaff_x19[0xca];
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              if ((lVar21 == 0) || (lVar29 = *(long *)(lVar21 + 0xc0), lVar29 == 0))
              goto LAB_00e443fc;
              fVar37 = fStack0000000000000048;
              if (*(char *)(lVar29 + 0x18) != '\0') {
                fVar40 = *(float *)(lVar21 + 100);
                fVar37 = *(float *)((long)unaff_x19 + 0x2ec) - fVar40;
              }
              if (*(char *)(lVar29 + 0x19) != '\0') {
                uVar33 = FUN_00e4e9f4(fVar37);
                lVar21 = unaff_x19[0xca];
                *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar33;
                *(float *)(unaff_x19 + 0xbf) = fVar40;
                *(float *)((long)unaff_x19 + 0x5fc) = fVar41;
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar21 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar21 + 0xc0) + 0x28) != '\0') {
                fVar31 = (float)FUN_00e4e9f4(fVar37);
                *(float *)((long)unaff_x19 + 0x63c) = fVar31;
                *(float *)(unaff_x19 + 200) = fVar40;
                fVar36 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc0] =
                     CONCAT44(fVar40 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar31 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar36;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar40 = (float)FUN_00e4e9f4(fVar37);
                *(float *)((long)unaff_x19 + 0x63c) = fVar40;
                *(float *)(unaff_x19 + 200) = fVar36;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[3] =
                     CONCAT44(fVar36 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar40 + (float)in_stack_00000040[3]);
                *(float *)((long)unaff_x19 + 0x614) = fVar41 + *(float *)((long)unaff_x19 + 0x614);
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar31 = (float)FUN_00e4e9f4(fVar37);
                *(float *)((long)unaff_x19 + 0x63c) = fVar31;
                *(float *)(unaff_x19 + 200) = fVar36;
                fVar40 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc3] =
                     CONCAT44(fVar36 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar31 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar40;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar37 = (float)FUN_00e4e9f4(fVar37);
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar40;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[6] =
                     CONCAT44(fVar40 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar37 + (float)in_stack_00000040[6]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar41 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar21 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar21 + 0xc0) + 0x50) != '\0') {
                FUN_00e5eda8(lVar21,0);
                fVar37 = (float)FUN_00e4eb50();
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar40;
                fVar31 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc0] =
                     CONCAT44(fVar40 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar37 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar31;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b838(lVar21,0);
                fVar37 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar31;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[3] =
                     CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar37 + (float)in_stack_00000040[3]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar41 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5eea4(lVar21,0);
                fVar37 = (float)FUN_00e4eb50();
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar31;
                fVar40 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc3] =
                     CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar37 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar40;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b7d8(lVar21,0);
                fVar37 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar40;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[6] =
                     CONCAT44(fVar40 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar37 + (float)in_stack_00000040[6]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar41 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar21 == 0) goto LAB_00e443fc;
              }
              lVar29 = *(long *)(lVar21 + 0xc0);
              if (lVar29 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar29 + 0x60) != '\0') {
                uVar23 = *(undefined8 *)(lVar29 + 0x68);
                uVar17 = FUN_00e5eda8(lVar21,0);
                fVar37 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar40;
                fVar31 = fVar41 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc0] =
                     CONCAT44(fVar40 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar37 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar31;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5b838(lVar21,0);
                fVar37 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar31;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[3] =
                     CONCAT44(fVar31 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar37 + (float)in_stack_00000040[3]);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar41 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5eea4(lVar21,0);
                fVar37 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                lVar21 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar31;
                fVar40 = fVar41 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                unaff_x19[0xc3] =
                     CONCAT44(fVar31 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar37 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar40;
                if ((lVar21 == 0) || (*(long *)(lVar21 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar23 = *(undefined8 *)(*(long *)(lVar21 + 0xc0) + 0x68);
                uVar17 = FUN_00e5b7d8(lVar21,0);
                fVar37 = (float)FUN_00e4ecc4(uVar17,lVar21,uVar23);
                *(float *)((long)unaff_x19 + 0x63c) = fVar37;
                *(float *)(unaff_x19 + 200) = fVar40;
                *(float *)((long)unaff_x19 + 0x644) = fVar41;
                in_stack_00000040[6] =
                     CONCAT44(fVar40 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar37 + (float)in_stack_00000040[6]);
                *(float *)((long)unaff_x19 + 0x62c) = fVar41 + *(float *)((long)unaff_x19 + 0x62c);
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
            if (*pdVar30 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*pdVar30 + 0x80);
            in_stack_00000040[0x1e] =
                 CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar17 >> 0x20),
                          (float)unaff_x19[0x24] * (float)uVar17);
          }
          lVar21 = unaff_x19[0x5e];
          *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5eda8(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar40 = *(float *)((long)unaff_x19 + 0x674);
          uVar13 = (ulong)(int)uVar4;
          *(float *)(lVar21 + uVar13 * 0xc + 0x20) =
               fVar37 + fVar40 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x604);
          *(float *)(lVar21 + uVar13 * 0xc + 0x24) =
               fVar40 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          *(float *)(lVar21 + uVar13 * 0xc + 0x28) =
               fVar37 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5b838(*pdVar30,0);
          uVar24 = uVar13 | 1;
          uVar20 = (uint)uVar24;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar40 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar24 * 0xc + 0x20) =
               fVar37 + fVar40 + *(float *)((long)unaff_x19 + 0x60c) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          fVar37 = *(float *)(unaff_x19 + 0xc2);
          *(float *)(lVar21 + uVar24 * 0xc + 0x24) =
               fVar40 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          *(float *)(lVar21 + uVar24 * 0xc + 0x28) =
               fVar37 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5eea4(*pdVar30,0);
          uVar12 = uVar13 | 2;
          uVar22 = (uint)uVar12;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar40 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar12 * 0xc + 0x20) =
               fVar37 + fVar40 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x61c);
          *(float *)(lVar21 + uVar12 * 0xc + 0x24) =
               fVar40 + *(float *)(unaff_x19 + 0xcf) + fVar37 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          *(float *)(lVar21 + uVar12 * 0xc + 0x28) =
               fVar37 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5b7d8(*pdVar30,0);
          uVar26 = uVar13 | 3;
          uVar25 = (uint)uVar26;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          fVar40 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar21 + uVar26 * 0xc + 0x20) =
               fVar37 + fVar40 + *(float *)((long)unaff_x19 + 0x624) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          uVar10 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
          *(float *)(lVar21 + uVar26 * 0xc + 0x24) =
               fVar40 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
               *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
               *(float *)(unaff_x19 + 0xdd);
          lVar21 = unaff_x19[0x5e];
          if ((lVar21 == 0) || (*pdVar30 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*pdVar30,0);
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          fVar37 = *(float *)((long)unaff_x19 + 0x62c);
          *(float *)(lVar21 + uVar26 * 0xc + 0x28) =
               (float)uVar10 + *(float *)((long)unaff_x19 + 0x67c) + fVar37 +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar21 = unaff_x19[0xca];
          if (lVar21 == 0) goto LAB_00e443fc;
          lVar29 = *in_stack_00000020;
          if (*(char *)(lVar21 + 0x108) == '\0') {
            uVar33 = FUN_0272b9dc(lVar21 + 0x10,0);
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar29 = lVar29 + uVar13 * 8;
            *(undefined4 *)(lVar29 + 0x20) = uVar33;
            *(float *)(lVar29 + 0x24) = fVar37;
            if (*pdVar30 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = thunk_FUN_0272b8d8((long)*pdVar30 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar21 = lVar21 + uVar24 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            if (*pdVar30 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = FUN_0272b9c8((long)*pdVar30 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + uVar12 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            if (*pdVar30 == 0.0) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = FUN_0272b98c((long)*pdVar30 + 0x10,0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar21 = lVar21 + uVar26 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            if (*pdVar30 == 0.0) goto LAB_00e443fc;
            uVar33 = FUN_00e5ecc0(*pdVar30,0);
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            FUN_00e5ecc0(unaff_x19[0xca],0);
            *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
            plVar27 = in_stack_00000030;
          }
          else {
            if ((*(long *)(lVar21 + 0x100) == 0) ||
               (uVar33 = FUN_00e5dd14(fStack0000000000000048,*(long *)(lVar21 + 0x100),
                                      *(undefined4 *)(lVar21 + 0x10c),0), lVar29 == 0))
            goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar29 = lVar29 + uVar13 * 8;
            *(undefined4 *)(lVar29 + 0x20) = uVar33;
            *(float *)(lVar29 + 0x24) = fVar37;
            dVar35 = *pdVar30;
            if ((dVar35 == 0.0) || (*(long *)((long)dVar35 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = FUN_00e5de6c(fStack0000000000000048,*(long *)((long)dVar35 + 0x100),
                                  *(undefined4 *)((long)dVar35 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar21 = lVar21 + uVar24 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            dVar35 = *pdVar30;
            if ((dVar35 == 0.0) || (*(long *)((long)dVar35 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = FUN_00e5dea4(fStack0000000000000048,*(long *)((long)dVar35 + 0x100),
                                  *(undefined4 *)((long)dVar35 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + uVar12 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            dVar35 = *pdVar30;
            if ((dVar35 == 0.0) || (*(long *)((long)dVar35 + 0x100) == 0)) goto LAB_00e443fc;
            lVar21 = *in_stack_00000020;
            uVar33 = thunk_FUN_00e5dd60(fStack0000000000000048,*(long *)((long)dVar35 + 0x100),
                                        *(undefined4 *)((long)dVar35 + 0x10c),0);
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar21 = lVar21 + uVar26 * 8;
            *(undefined4 *)(lVar21 + 0x20) = uVar33;
            *(float *)(lVar21 + 0x24) = fVar37;
            dVar35 = *pdVar30;
            if ((dVar35 == 0.0) || (*(long *)((long)dVar35 + 0x100) == 0)) goto LAB_00e443fc;
            uVar33 = FUN_00e5dedc(fStack0000000000000048,*(long *)((long)dVar35 + 0x100),
                                  *(undefined4 *)((long)dVar35 + 0x10c),0);
            lVar21 = unaff_x19[0xca];
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar33;
            *(float *)((long)unaff_x19 + 0x6cc) = fVar37;
            if ((lVar21 == 0) || (lVar29 = *(long *)(lVar21 + 0x100), lVar29 == 0))
            goto LAB_00e443fc;
            plVar27 = in_stack_00000030;
            if (((1 < *(int *)(lVar29 + 0x28)) && (0.0 < *(float *)(lVar29 + 0x34))) &&
               (*(int *)(lVar21 + 0x10c) < 0)) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
          }
        }
        else {
          dVar35 = *pdVar30;
          if (dVar35 == 0.0) goto LAB_00e443fc;
          uVar10 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
          if ((*(float *)((long)dVar35 + 0x48) + *(float *)((long)dVar35 + 0x84) +
              *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
              DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
          lVar21 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774d76 = '\x01';
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          uVar13 = (ulong)(int)uVar4;
          lVar21 = lVar21 + uVar13 * 0xc;
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar33;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 1)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 1) * 0xc;
          uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar33;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 2)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 2) * 0xc;
          uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar33;
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= (uint)(uVar13 | 3)) goto LAB_00e44400;
          lVar21 = lVar21 + (uVar13 | 3) * 0xc;
          uVar33 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar21 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar21 + 0x28) = uVar33;
        }
        if (*pdVar30 == 0.0) goto LAB_00e443fc;
        uVar17 = *(undefined8 *)((long)*pdVar30 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_02681b9c(uVar17,0,0);
        if ((uVar13 & 1) == 0) {
          lVar21 = unaff_x19[0x10];
        }
        else {
          if ((*pdVar30 == 0.0) || (lVar21 = *(long *)((long)*pdVar30 + 0xf8), lVar21 == 0))
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
        uVar13 = uVar24 | 1;
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
        plVar28 = (long *)StringLiteral_9119;
        lVar21 = unaff_x19[0x60];
        if (lVar21 == 0) goto LAB_00e443fc;
        if ((*(uint *)(lVar21 + 0x18) <= uVar4) ||
           (uVar20 = (uint)in_stack_00000058, *(uint *)(lVar21 + 0x18) <= uVar20))
        goto LAB_00e44400;
        lVar29 = unaff_x19[0xca];
        fVar37 = unaff_s8;
        if (*(float *)(lVar21 + 0x20 + uVar24 * 8) !=
            *(float *)(lVar21 + 0x20 + in_stack_00000058 * 8)) {
          fVar37 = fVar32;
        }
        *(float *)(unaff_x19 + 0xda) = fVar37;
        if (lVar29 == 0) goto LAB_00e443fc;
        cVar5 = *(char *)(lVar29 + 0x108);
        fVar37 = fVar32;
        if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar29 + 0x138)) {
          fVar37 = -1.0;
        }
        *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar29 + 0x84) * fVar37;
        if (cVar5 == '\0') {
          iVar39 = *(int *)(lVar29 + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          uVar10 = 0x3e800000;
          *(float *)(unaff_x19 + 0xdb) = (float)iVar39 / ((float)iVar9 * 0.25);
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          iVar39 = *(int *)(unaff_x19[0xca] + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          fVar40 = (float)iVar39;
          fVar37 = (float)iVar9;
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        }
        else {
          if (*(long *)(lVar29 + 0x100) == 0) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5df18(*(long *)(lVar29 + 0x100),0);
          puVar18 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
          if (((*in_stack_00000060 == 0.0) ||
              (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) ||
             (plVar11 = *(long **)(lVar21 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) goto LAB_00e443fc;
          fVar40 = 0.25;
          *(float *)(unaff_x19 + 0xdb) = fVar37 / (*(float *)(lVar21 + 0x40) * (float)iVar9 * 0.25);
          FUN_00e5df18(lVar21,0);
          if ((unaff_x19[0xca] == 0) ||
             ((lVar21 = *(long *)(unaff_x19[0xca] + 0x100), lVar21 == 0 ||
              (plVar11 = *(long **)(lVar21 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0x100), lVar21 == 0)) goto LAB_00e443fc;
          fVar37 = *(float *)(lVar21 + 0x44) * (float)iVar9;
        }
        fVar41 = 0.25;
        fVar40 = fVar40 / (fVar37 * 0.25);
        *(float *)((long)unaff_x19 + 0x6dc) = fVar40;
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000078 = CONCAT44(fVar40,(int)unaff_x19[0xdb]);
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
        uVar12 = FUN_02681b9c(uVar17,0,0);
        fVar37 = (float)uVar10;
        uVar25 = (uint)uVar13;
        uVar22 = (uint)unaff_x29;
        if ((uVar12 & 1) != 0) {
          if (in_stack_00000050 == in_stack_00000010) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            fVar40 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
                (fVar40 - *pfVar14) * (fVar40 - *pfVar14) +
                (fVar41 - pfVar14[1]) * (fVar41 - pfVar14[1]) < DAT_028aa020) goto LAB_00e3dbd8;
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
          fVar37 = (float)uVar17 -
                   (float)**(undefined8 **)
                            (*(long *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                            + 0xb8);
          fVar40 = (float)((ulong)uVar17 >> 0x20) -
                   (float)((ulong)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8) >> 0x20);
          if (DAT_028aa020 <= fVar37 * fVar37 + fVar40 * fVar40) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          dVar35 = *in_stack_00000060;
          if ((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xb0), lVar21 == 0))
          goto LAB_00e443fc;
          fVar40 = fStack0000000000000048 * *(float *)(lVar21 + 0x38);
          *(float *)(unaff_x19 + 0xc9) = fVar40;
          fVar37 = fStack0000000000000048 * *(float *)(lVar21 + 0x3c);
          *(float *)((long)unaff_x19 + 0x64c) = fVar37;
          if (*(char *)(lVar21 + 0x25) != '\0') {
            fVar38 = 1.0 / *(float *)((long)dVar35 + 0x84);
          }
          lVar21 = *in_stack_00000038;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          lVar29 = lVar21 + uVar24 * 0xc;
          fVar41 = *(float *)(lVar29 + 0x20);
          uVar17 = *(undefined8 *)(lVar29 + 0x24);
          *(float *)(unaff_x19 + 0xcd) = fVar41;
          in_stack_00000040[0xf] = uVar17;
          *(float *)(unaff_x19 + 0xd0) = fVar41;
          fVar31 = (float)uVar17;
          *(float *)((long)unaff_x19 + 0x684) = fVar31;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar29 = lVar21 + uVar13 * 0xc;
          uVar33 = *(undefined4 *)(lVar29 + 0x20);
          uVar17 = *(undefined8 *)(lVar29 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd2) = uVar33;
          *(int *)((long)unaff_x19 + 0x694) = (int)uVar17;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar29 = lVar21 + unaff_x29 * 0xc;
          uVar33 = *(undefined4 *)(lVar29 + 0x20);
          uVar17 = *(undefined8 *)(lVar29 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar33;
          *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar17;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          lVar21 = lVar21 + in_stack_00000058 * 0xc;
          uVar33 = *(undefined4 *)(lVar21 + 0x20);
          uVar17 = *(undefined8 *)(lVar21 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar33;
          in_stack_00000040[0xf] = uVar17;
          *(undefined4 *)(unaff_x19 + 0xd6) = uVar33;
          *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar17;
          lVar21 = *(long *)((long)dVar35 + 0xb0);
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(char *)(lVar21 + 0x24) == '\0') {
            lVar29 = *in_stack_00000028;
            if (lVar29 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar29 + 0x18);
            if (uVar3 <= uVar4) goto LAB_00e44400;
            lVar15 = lVar29 + uVar24 * 8;
            *(float *)(lVar15 + 0x20) = (fVar40 + fVar38 * fVar41) - *(float *)(lVar21 + 0x30);
            *(float *)(lVar15 + 0x24) = (fVar37 + fVar38 * fVar31) - *(float *)(lVar21 + 0x34);
            if (((uVar3 <= uVar25) ||
                (*(ulong *)(lVar29 + uVar13 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar38 +
                               (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                               (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xd2] * fVar38 + (float)unaff_x19[0xc9]) -
                               (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar22)) ||
               (*(ulong *)(lVar29 + unaff_x29 * 8 + 0x20) =
                     CONCAT44((fVar38 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                              (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                              (fVar38 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                              (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar20))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xc9];
            *(ulong *)(lVar29 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44((fVar38 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                          (float)(uVar10 >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                          (fVar38 * (float)unaff_x19[0xd6] + (float)uVar10) -
                          (float)*(undefined8 *)(lVar21 + 0x30));
          }
          else {
            fVar36 = *(float *)((long)dVar35 + 0x44);
            *(float *)(unaff_x19 + 0xd8) = fVar36;
            fVar2 = *(float *)((long)dVar35 + 0x48);
            lVar29 = unaff_x19[0x61];
            *(float *)((long)unaff_x19 + 0x6c4) = fVar2;
            if (lVar29 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar29 + 0x18);
            if (uVar3 <= uVar4) goto LAB_00e44400;
            lVar15 = lVar29 + uVar24 * 8;
            *(float *)(lVar15 + 0x20) =
                 (fVar40 + fVar38 * (fVar41 - fVar36)) - *(float *)(lVar21 + 0x30);
            *(float *)(lVar15 + 0x24) =
                 (fVar37 + fVar38 * (fVar31 - fVar2)) - *(float *)(lVar21 + 0x34);
            if (((uVar3 <= uVar25) ||
                (*(ulong *)(lVar29 + uVar13 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                               ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                               (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar38) -
                               (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xc9] +
                               ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar38) -
                               (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar22)) ||
               (*(ulong *)(lVar29 + unaff_x29 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar38 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar38 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                              (float)*(undefined8 *)(lVar21 + 0x30)), uVar3 <= uVar20))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xd8];
            *(ulong *)(lVar29 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar38 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                   (float)(uVar10 >> 0x20))) -
                          (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] +
                          fVar38 * ((float)unaff_x19[0xd6] - (float)uVar10)) -
                          (float)*(undefined8 *)(lVar21 + 0x30));
          }
        }
LAB_00e3dbd8:
        dVar35 = *in_stack_00000060;
        if (dVar35 == 0.0) goto LAB_00e443fc;
        if (*(char *)((long)dVar35 + 0x108) != '\0') {
          if (*(long *)((long)dVar35 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar35 + 0x100) + 0x20) == '\0') {
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar29 = *in_stack_00000028;
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
            *(undefined8 *)(lVar29 + uVar24 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + uVar24 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            lVar29 = *in_stack_00000028;
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar25) goto LAB_00e44400;
            *(undefined8 *)(lVar29 + (long)(int)uVar25 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + (long)(int)uVar25 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar29 = *in_stack_00000028;
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_00e44400;
            *(undefined8 *)(lVar29 + (long)(int)uVar22 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + (long)(int)uVar22 * 8 + 0x20);
            lVar21 = *in_stack_00000020;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            lVar29 = *in_stack_00000028;
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_00e44400;
            *(undefined8 *)(lVar29 + in_stack_00000058 * 8 + 0x20) =
                 *(undefined8 *)(lVar21 + in_stack_00000058 * 8 + 0x20);
            dVar35 = *in_stack_00000060;
            if (dVar35 == 0.0) goto LAB_00e443fc;
          }
        }
        dVar34 = DAT_028aa048;
        if (*(char *)((long)dVar35 + 0x108) == '\0') {
LAB_00e3dd34:
          uVar17 = *(undefined8 *)((long)dVar35 + 0xa8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_02681b9c(uVar17,0,0);
          dVar35 = *in_stack_00000060;
          if (dVar35 == 0.0) goto LAB_00e443fc;
          if ((uVar13 & 1) == 0) {
            uVar17 = *(undefined8 *)((long)dVar35 + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            dVar35 = DAT_028aa048;
            if ((uVar13 & 1) == 0) {
              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
              uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_02681b9c(uVar17,0,0);
              lVar21 = *plVar27;
              if ((uVar10 & 1) == 0) {
                fVar32 = *(float *)((long)unaff_x19 + 0x8c);
                fVar37 = *(float *)(unaff_x19 + 0x12);
                fVar41 = *(float *)((long)unaff_x19 + 0x94);
                fVar40 = *(float *)(unaff_x19 + 0x13);
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar32 = fVar37;
                if (1.0 < fVar37) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar37 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fd48;
                  }
                  fVar37 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar35 == -0.5) {
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
                fVar32 = fVar41;
                if (1.0 < fVar41) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar41 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar41 = fVar40;
                if (1.0 < fVar40) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar40 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar41 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar41 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                fVar32 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar40 = *(float *)((long)unaff_x19 + 0x94);
                fVar37 = *(float *)(unaff_x19 + 0x13);
                fVar38 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar41 = fVar32;
                if (1.0 < fVar32) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar32 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40610;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar32;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar32 = fVar40;
                if (1.0 < fVar40) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar40 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar40 = fVar37;
                if (1.0 < fVar37) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar37 < 0.0) {
                  fVar40 = unaff_s8;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
                *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                fVar32 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar40 = *(float *)((long)unaff_x19 + 0x94);
                fVar37 = *(float *)(unaff_x19 + 0x13);
                fVar38 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar41 = fVar32;
                if (1.0 < fVar32) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar32 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40e20;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar32;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar32 = fVar40;
                if (1.0 < fVar40) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar40 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar40 = fVar37;
                if (1.0 < fVar37) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar37 < 0.0) {
                  fVar40 = unaff_s8;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
                *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                fVar38 = *(float *)((long)unaff_x19 + 0x8c);
                fVar32 = *(float *)(unaff_x19 + 0x12);
                lVar21 = unaff_x19[0x5f];
                fVar40 = *(float *)((long)unaff_x19 + 0x94);
                fVar37 = *(float *)(unaff_x19 + 0x13);
              }
              else {
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar29 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar29 == 0))
                goto LAB_00e443fc;
                fVar32 = *(float *)(lVar29 + 0x18);
                fVar37 = *(float *)(lVar29 + 0x1c);
                fVar41 = *(float *)(lVar29 + 0x20);
                fVar40 = *(float *)(lVar29 + 0x24);
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar32 < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar32 = fVar37;
                if (1.0 < fVar37) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar37 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fcc4;
                  }
                  fVar37 = (float)(int)(fVar32 + 0.5);
                }
                else if (dVar35 == -0.5) {
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
                fVar32 = fVar41;
                if (1.0 < fVar41) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar41 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar41 = fVar40;
                if (1.0 < fVar40) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar40 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar41 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar41 + -0.5);
                }
                if (lVar21 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
                goto LAB_00e443fc;
                fVar32 = *(float *)(lVar21 + 0x1c);
                lVar29 = *plVar27;
                fVar40 = *(float *)(lVar21 + 0x20);
                fVar37 = *(float *)(lVar21 + 0x24);
                fVar38 = *(float *)(lVar21 + 0x18) * 255.0;
                if (*(float *)(lVar21 + 0x18) < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar41 = fVar32;
                if (1.0 < fVar32) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar32 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e4057c;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar32;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar32 = fVar40;
                if (1.0 < fVar40) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar40 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar40 = fVar37;
                if (1.0 < fVar37) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar37 < 0.0) {
                  fVar40 = unaff_s8;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar29 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar29 + 0x18) <= uVar25) goto LAB_00e44400;
                *(uint *)(lVar29 + (long)(int)uVar25 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
                goto LAB_00e443fc;
                fVar32 = *(float *)(lVar21 + 0x1c);
                lVar29 = *plVar27;
                fVar40 = *(float *)(lVar21 + 0x20);
                fVar37 = *(float *)(lVar21 + 0x24);
                fVar38 = *(float *)(lVar21 + 0x18) * 255.0;
                if (*(float *)(lVar21 + 0x18) < 0.0) {
                  fVar38 = unaff_s8;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar41 = fVar32;
                if (1.0 < fVar32) {
                  fVar41 = 1.0;
                }
                fVar41 = fVar41 * 255.0;
                if (fVar32 < 0.0) {
                  fVar41 = unaff_s8;
                }
                dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
                if (0.0 <= fVar41) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40d8c;
                  }
                  fVar41 = (float)(int)(fVar41 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = fVar32;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar41 + -0.5);
                }
                fVar32 = fVar40;
                if (1.0 < fVar40) {
                  fVar32 = 1.0;
                }
                fVar32 = fVar32 * 255.0;
                if (fVar40 < 0.0) {
                  fVar32 = unaff_s8;
                }
                dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                if (0.0 <= fVar32) {
                  if (dVar35 == 0.5) {
                    fVar32 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar32 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar32 = (float)(int)(fVar32 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + -0.5);
                }
                fVar40 = fVar37;
                if (1.0 < fVar37) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar37 < 0.0) {
                  fVar40 = unaff_s8;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar29 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_00e44400;
                *(uint *)(lVar29 + (long)(int)uVar22 * 4 + 0x20) =
                     (int)fVar38 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                     ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar29 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar29 == 0))
                goto LAB_00e443fc;
                fVar38 = *(float *)(lVar29 + 0x18);
                fVar32 = *(float *)(lVar29 + 0x1c);
                lVar21 = *plVar27;
                fVar40 = *(float *)(lVar29 + 0x20);
                fVar37 = *(float *)(lVar29 + 0x24);
              }
              fVar41 = fVar38 * 255.0;
              if (fVar38 < 0.0) {
                fVar41 = unaff_s8;
              }
              dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar41 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar41 + -0.5);
              }
              fVar41 = fVar32;
              if (1.0 < fVar32) {
                fVar41 = 1.0;
              }
              fVar41 = fVar41 * 255.0;
              if (fVar32 < 0.0) {
                fVar41 = unaff_s8;
              }
              dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar41 = (float)(int)(fVar41 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar41 + -0.5);
              }
              fVar32 = fVar40;
              if (1.0 < fVar40) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar40 < 0.0) {
                fVar32 = unaff_s8;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar32 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              uVar10 = 0x3f800000;
              fVar40 = fVar37;
              if (1.0 < fVar37) {
                fVar40 = 1.0;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar37 < 0.0) {
                fVar40 = unaff_s8;
              }
              dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar35 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar40 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar40 + -0.5);
              }
              if (lVar21 != 0) {
                if (uVar20 < *(uint *)(lVar21 + 0x18)) {
                  *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
                       (int)fVar38 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                       ((int)fVar32 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                  goto LAB_00e43400;
                }
                goto LAB_00e44400;
              }
              goto LAB_00e443fc;
            }
            lVar21 = *plVar27;
            dVar34 = modf(DAT_028aa048,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar32 = 255.0;
            }
            dVar34 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar34 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar35 = modf(dVar35,(double *)&stack0x00000070);
            if (dVar35 == 0.5) {
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar40 = 255.0;
            }
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
            *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            if ((uVar13 & 1) == 0) goto LAB_00e43400;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar32 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar40 = *(float *)(lVar21 + 0x20);
            fVar37 = *(float *)(lVar21 + 0x24);
            fVar38 = fVar32 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = 1.0;
                goto LAB_00e3ede4;
              }
              fVar32 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar38 = -1.0;
LAB_00e3ede4:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + fVar38;
              }
            }
            else {
              fVar32 = (float)(int)(fVar38 + -0.5);
            }
            fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
            fVar38 = fVar41 * 255.0;
            if (fVar41 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar35 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar41 = fVar40;
            if (1.0 < fVar40) {
              fVar41 = 1.0;
            }
            fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
            fVar41 = fVar41 * 255.0;
            if (fVar40 < 0.0) {
              fVar41 = unaff_s8;
            }
            dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
            if (0.0 <= fVar41) {
              if (dVar35 == 0.5) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ffb0;
              }
              fVar41 = (float)(int)(fVar41 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar40;
              }
            }
            else {
              fVar41 = (float)(int)(fVar41 + -0.5);
            }
            fVar40 = fVar37;
            if (1.0 < fVar37) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar37 < 0.0) {
              fVar40 = unaff_s8;
            }
            dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar35 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e40174;
              }
              fVar40 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar37 = -1.0;
LAB_00e40174:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            *puVar19 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                       ((int)fVar41 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar32 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar40 = *(float *)(lVar21 + 0x20);
            fVar37 = *(float *)(lVar21 + 0x24);
            fVar38 = fVar32 * 255.0;
            if (fVar32 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = 1.0;
                goto LAB_00e404dc;
              }
              fVar32 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar38 = -1.0;
LAB_00e404dc:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + fVar38;
              }
            }
            else {
              fVar32 = (float)(int)(fVar38 + -0.5);
            }
            fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
            fVar38 = fVar41 * 255.0;
            if (fVar41 < 0.0) {
              fVar38 = unaff_s8;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar35 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar41 = fVar40;
            if (1.0 < fVar40) {
              fVar41 = 1.0;
            }
            fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
            fVar41 = fVar41 * 255.0;
            if (fVar40 < 0.0) {
              fVar41 = unaff_s8;
            }
            dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
            if (0.0 <= fVar41) {
              if (dVar35 == 0.5) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40888;
              }
              fVar41 = (float)(int)(fVar41 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar40;
              }
            }
            else {
              fVar41 = (float)(int)(fVar41 + -0.5);
            }
            fVar40 = fVar37;
            if (1.0 < fVar37) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar37 < 0.0) {
              fVar40 = unaff_s8;
            }
            dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar35 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e40a4c;
              }
              fVar40 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar37 = -1.0;
LAB_00e40a4c:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            *puVar19 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                       ((int)fVar41 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + (long)(int)uVar22 * 4;
          }
          else {
            lVar21 = *(long *)((long)dVar35 + 0xa8);
            if (lVar21 == 0) goto LAB_00e443fc;
            fVar38 = *(float *)(lVar21 + 0x24);
            if (fVar38 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            plVar28 = (long *)StringLiteral_9119;
            cVar5 = *(char *)(lVar21 + 0x2c);
            lVar15 = *plVar27;
            lVar29 = *(long *)(lVar21 + 0x18);
            fVar38 = fStack0000000000000048 * fVar38;
            if (*(int *)(lVar21 + 0x28) == 1) {
              if (cVar5 == '\0') {
                if (lVar29 == 0) goto LAB_00e443fc;
                fVar40 = *(float *)(lVar21 + 0x20);
                fVar41 = *(float *)((long)dVar35 + 0x84);
                fVar38 = fVar38 + (*(float *)((long)dVar35 + 0x48) * fVar40) / fVar41;
                fVar38 = fVar38 - (float)(int)fVar38;
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = fVar32;
                }
                fVar31 = fVar37;
                if (fVar38 < 0.0) {
                  fVar31 = 0.0;
                }
                fVar31 = (float)FUN_0269ad38(fVar31,lVar29,0);
                fVar38 = fVar31;
                if (1.0 < fVar31) {
                  fVar38 = fVar32;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar31 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3eeac;
                  }
                  fVar32 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = fVar38;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar38 + -0.5);
                }
                fVar38 = fVar37;
                if (1.0 < fVar37) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar37 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e41534;
                  }
                  fVar37 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = fVar38;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar38 + -0.5);
                }
                fVar38 = fVar40;
                if (1.0 < fVar40) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar40 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar40 = fVar41;
                if (1.0 < fVar41) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar41 < 0.0) {
                  fVar40 = 0.0;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                     (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                dVar35 = *in_stack_00000060;
                if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                   (lVar29 = *(long *)(lVar21 + 0x18), lVar29 == 0)) goto LAB_00e443fc;
                fVar37 = *(float *)((long)dVar35 + 0x48);
                fVar40 = *(float *)((long)dVar35 + 0x84);
                lVar15 = *plVar27;
                fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                         (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
                fVar32 = fVar32 - (float)(int)fVar32;
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
              }
              else {
                if (lVar29 == 0) goto LAB_00e443fc;
                fVar40 = *(float *)((long)dVar35 + 0x84);
                fVar41 = *(float *)(lVar21 + 0x20);
                fVar38 = fVar38 + ((*(float *)((long)dVar35 + 0x48) + fVar40) * fVar41) / fVar40;
                fVar38 = fVar38 - (float)(int)fVar38;
                fVar37 = fVar38;
                if (1.0 < fVar38) {
                  fVar37 = fVar32;
                }
                fVar31 = fVar37;
                if (fVar38 < 0.0) {
                  fVar31 = 0.0;
                }
                fVar31 = (float)FUN_0269ad38(fVar31,lVar29,0);
                fVar38 = fVar31;
                if (1.0 < fVar31) {
                  fVar38 = fVar32;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar31 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ed6c;
                  }
                  fVar32 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar32 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar32 = fVar38;
                  }
                }
                else {
                  fVar32 = (float)(int)(fVar38 + -0.5);
                }
                fVar38 = fVar37;
                if (1.0 < fVar37) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar37 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3f2ec;
                  }
                  fVar37 = (float)(int)(fVar38 + 0.5);
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = fVar38;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar38 + -0.5);
                }
                fVar38 = fVar40;
                if (1.0 < fVar40) {
                  fVar38 = 1.0;
                }
                fVar38 = fVar38 * 255.0;
                if (fVar40 < 0.0) {
                  fVar38 = 0.0;
                }
                dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                if (0.0 <= fVar38) {
                  if (dVar35 == 0.5) {
                    fVar38 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar38 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar38 = (float)(int)(fVar38 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + -0.5);
                }
                fVar40 = fVar41;
                if (1.0 < fVar41) {
                  fVar40 = 1.0;
                }
                fVar40 = fVar40 * 255.0;
                if (fVar41 < 0.0) {
                  fVar40 = 0.0;
                }
                dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
                if (0.0 <= fVar40) {
                  if (dVar35 == 0.5) {
                    fVar40 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar40 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar40 = (float)(int)(fVar40 + 0.5);
                  }
                }
                else if (dVar35 == -0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar40 + -0.5);
                }
                if (lVar15 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                     (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
                dVar35 = *in_stack_00000060;
                if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                   (lVar29 = *(long *)(lVar21 + 0x18), lVar29 == 0)) goto LAB_00e443fc;
                fVar37 = *(float *)((long)dVar35 + 0x84);
                fVar40 = *(float *)(lVar21 + 0x20);
                lVar15 = *plVar27;
                fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                         ((*(float *)((long)dVar35 + 0x48) + fVar37) * fVar40) / fVar37;
                fVar32 = fVar32 - (float)(int)fVar32;
                fVar38 = fVar32;
                if (1.0 < fVar32) {
                  fVar38 = 1.0;
                }
              }
              fVar41 = fVar38;
              if (fVar32 < 0.0) {
                fVar41 = 0.0;
              }
              fVar41 = (float)FUN_0269ad38(fVar41,lVar29,0);
              fVar32 = fVar41;
              if (1.0 < fVar41) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar41 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar41 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar38;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar37 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar37 = fVar40;
              if (1.0 < fVar40) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar40 < 0.0) {
                fVar37 = 0.0;
              }
              dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar35 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar15 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar15 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar35 = *in_stack_00000060;
              if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                 (*(long *)(lVar21 + 0x18) == 0)) goto LAB_00e443fc;
              fVar37 = *(float *)((long)dVar35 + 0x48);
              fVar40 = *(float *)((long)dVar35 + 0x84);
              lVar29 = *plVar27;
              fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar41 = fVar38;
              if (fVar32 < 0.0) {
                fVar41 = 0.0;
              }
              fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18),0);
              fVar32 = fVar41;
              if (1.0 < fVar41) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar41 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar41 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar38;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar37 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar37 = fVar40;
              if (1.0 < fVar40) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar40 < 0.0) {
                fVar37 = 0.0;
              }
              dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar35 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar29 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_00e44400;
              *(uint *)(lVar29 + (long)(int)uVar22 * 4 + 0x20) =
                   (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar35 = *in_stack_00000060;
              if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                 (*(long *)(lVar21 + 0x18) == 0)) goto LAB_00e443fc;
              fVar37 = *(float *)((long)dVar35 + 0x48);
              fVar40 = *(float *)((long)dVar35 + 0x84);
              lVar29 = *plVar27;
              fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar41 = fVar38;
              if (fVar32 < 0.0) {
                fVar41 = 0.0;
              }
              fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18),0);
              fVar32 = fVar41;
              if (1.0 < fVar41) {
                fVar32 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar32 = fVar32 * 255.0;
              if (fVar41 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar41 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = 0.0;
              }
LAB_00e42040:
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (fVar32 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar35 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                fVar32 = fVar38 + 1.0;
                goto LAB_00e425d4;
              }
              fVar38 = (float)(int)(fVar32 + 0.5);
            }
            else {
              lVar16 = *in_stack_00000038;
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar29 == 0) goto LAB_00e443fc;
              fVar40 = *(float *)(lVar16 + uVar24 * 0xc + 0x20);
              fVar41 = *(float *)((long)dVar35 + 0x84);
              fVar38 = fVar38 + (fVar40 * *(float *)(lVar21 + 0x20)) / fVar41;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar37 = fVar38;
              if (1.0 < fVar38) {
                fVar37 = fVar32;
              }
              fVar31 = fVar37;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              fVar31 = (float)FUN_0269ad38(fVar31,lVar29,0);
              fVar38 = fVar31;
              if (1.0 < fVar31) {
                fVar38 = fVar32;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar31 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3e0b0;
                }
                fVar32 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar38;
                }
              }
              else {
                fVar32 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar37 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ee80;
                }
                fVar37 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = fVar38;
                }
              }
              else {
                fVar37 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar40;
              if (1.0 < fVar40) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar40 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar40 = fVar41;
              if (1.0 < fVar41) {
                fVar40 = 1.0;
              }
              fVar40 = fVar40 * 255.0;
              if (fVar41 < 0.0) {
                fVar40 = 0.0;
              }
              dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
              if (0.0 <= fVar40) {
                if (dVar35 == 0.5) {
                  fVar40 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar40 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar40 = (float)(int)(fVar40 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar40 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar40 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar40 = (float)(int)(fVar40 + -0.5);
              }
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar41 = 1.0;
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_00e44400;
              *(uint *)(lVar15 + uVar24 * 4 + 0x20) =
                   (int)fVar32 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar40 << 0x18;
              plVar28 = (long *)StringLiteral_9119;
              dVar35 = *in_stack_00000060;
              if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                 (lVar29 = *in_stack_00000038, lVar29 == 0)) goto LAB_00e443fc;
              lVar16 = *plVar27;
              lVar15 = *(long *)(lVar21 + 0x18);
              fVar38 = fStack0000000000000048 * *(float *)(lVar21 + 0x24);
              if (cVar5 != '\0') {
                if (uVar25 < *(uint *)(lVar29 + 0x18)) {
                  if (lVar15 != 0) {
                    fVar37 = *(float *)(lVar29 + (long)(int)uVar25 * 0xc + 0x20);
                    fVar40 = *(float *)((long)dVar35 + 0x84);
                    fVar38 = fVar38 + (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
                    fVar38 = fVar38 - (float)(int)fVar38;
                    fVar32 = fVar38;
                    if (1.0 < fVar38) {
                      fVar32 = fVar41;
                    }
                    fVar31 = fVar32;
                    if (fVar38 < 0.0) {
                      fVar31 = 0.0;
                    }
                    fVar31 = (float)FUN_0269ad38(fVar31,lVar15,0);
                    fVar38 = fVar31;
                    if (1.0 < fVar31) {
                      fVar38 = fVar41;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar31 < 0.0) {
                      fVar38 = 0.0;
                    }
                    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar35 == 0.5) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar41 = (float)(int)(fVar38 + 0.5);
                    }
                    else if (dVar35 == -0.5) {
                      fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar41 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar41 = fVar38;
                      }
                    }
                    else {
                      fVar41 = (float)(int)(fVar38 + -0.5);
                    }
                    fVar38 = fVar32;
                    if (1.0 < fVar32) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar32 < 0.0) {
                      fVar38 = 0.0;
                    }
                    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar35 == 0.5) {
                        fVar38 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar32 = (float)(int)(fVar38 + 0.5);
                    }
                    else if (dVar35 == -0.5) {
                      fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar32 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar32 = fVar38;
                      }
                    }
                    else {
                      fVar32 = (float)(int)(fVar38 + -0.5);
                    }
                    fVar38 = fVar37;
                    if (1.0 < fVar37) {
                      fVar38 = 1.0;
                    }
                    fVar38 = fVar38 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar38 = 0.0;
                    }
                    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                    if (0.0 <= fVar38) {
                      if (dVar35 == 0.5) {
                        fVar38 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar38 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar38 = (float)(int)(fVar38 + 0.5);
                      }
                    }
                    else if (dVar35 == -0.5) {
                      fVar38 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar38 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar38 = (float)(int)(fVar38 + -0.5);
                    }
                    fVar37 = fVar40;
                    if (1.0 < fVar40) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar40 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar35 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar35 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    if (lVar16 != 0) {
                      if (uVar25 < *(uint *)(lVar16 + 0x18)) {
                        *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                             (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                             ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                        dVar35 = *in_stack_00000060;
                        if (((dVar35 != 0.0) &&
                            (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 != 0)) &&
                           (lVar29 = *in_stack_00000038, lVar29 != 0)) {
                          if (uVar22 < *(uint *)(lVar29 + 0x18)) {
                            if (*(long *)(lVar21 + 0x18) != 0) {
                              fVar37 = *(float *)(lVar29 + (long)(int)uVar22 * 0xc + 0x20);
                              fVar40 = *(float *)((long)dVar35 + 0x84);
                              lVar29 = *plVar27;
                              fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                                       (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
                              fVar32 = fVar32 - (float)(int)fVar32;
                              fVar38 = fVar32;
                              if (1.0 < fVar32) {
                                fVar38 = 1.0;
                              }
                              fVar41 = fVar38;
                              if (fVar32 < 0.0) {
                                fVar41 = 0.0;
                              }
                              fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18),0);
                              fVar32 = fVar41;
                              if (1.0 < fVar41) {
                                fVar32 = 1.0;
                              }
                              fVar32 = fVar32 * 255.0;
                              if (fVar41 < 0.0) {
                                fVar32 = 0.0;
                              }
                              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                              if (0.0 <= fVar32) {
                                if (dVar35 == 0.5) {
                                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar41 = (float)(int)(fVar32 + 0.5);
                              }
                              else if (dVar35 == -0.5) {
                                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = fVar32;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar32 + -0.5);
                              }
                              fVar32 = fVar38;
                              if (1.0 < fVar38) {
                                fVar32 = 1.0;
                              }
                              fVar32 = fVar32 * 255.0;
                              if (fVar38 < 0.0) {
                                fVar32 = 0.0;
                              }
                              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                              if (0.0 <= fVar32) {
                                if (dVar35 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar32 = (float)(int)(fVar32 + 0.5);
                              }
                              else if (dVar35 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                fVar32 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar32 = fVar38;
                                }
                              }
                              else {
                                fVar32 = (float)(int)(fVar32 + -0.5);
                              }
                              fVar38 = fVar37;
                              if (1.0 < fVar37) {
                                fVar38 = 1.0;
                              }
                              fVar38 = fVar38 * 255.0;
                              if (fVar37 < 0.0) {
                                fVar38 = 0.0;
                              }
                              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
                              if (0.0 <= fVar38) {
                                if (dVar35 == 0.5) {
                                  fVar38 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar38 = (float)(int)(fVar38 + 0.5);
                                }
                              }
                              else if (dVar35 == -0.5) {
                                fVar38 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar38 = (float)(int)(fVar38 + -0.5);
                              }
                              fVar37 = fVar40;
                              if (1.0 < fVar40) {
                                fVar37 = 1.0;
                              }
                              fVar37 = fVar37 * 255.0;
                              if (fVar40 < 0.0) {
                                fVar37 = 0.0;
                              }
                              dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
                              plVar28 = (long *)StringLiteral_9119;
                              if (0.0 <= fVar37) {
                                if (dVar35 == 0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + 0.5);
                                }
                              }
                              else if (dVar35 == -0.5) {
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              if (lVar29 != 0) {
                                if (uVar22 < *(uint *)(lVar29 + 0x18)) {
                                  *(uint *)(lVar29 + (long)(int)uVar22 * 4 + 0x20) =
                                       (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 |
                                       ((int)fVar38 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                  dVar35 = *in_stack_00000060;
                                  if (((dVar35 != 0.0) &&
                                      (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 != 0)) &&
                                     (lVar29 = *in_stack_00000038, lVar29 != 0)) {
                                    if (uVar20 < *(uint *)(lVar29 + 0x18)) {
                                      if (*(long *)(lVar21 + 0x18) != 0) {
                                        fVar37 = *(float *)(lVar29 + in_stack_00000058 * 0xc + 0x20)
                                        ;
                                        fVar40 = *(float *)((long)dVar35 + 0x84);
                                        lVar29 = *plVar27;
                                        fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24)
                                                 + (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
                                        fVar32 = fVar32 - (float)(int)fVar32;
                                        fVar38 = fVar32;
                                        if (1.0 < fVar32) {
                                          fVar38 = 1.0;
                                        }
                                        fVar41 = fVar38;
                                        if (fVar32 < 0.0) {
                                          fVar41 = 0.0;
                                        }
                                        fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18)
                                                                     ,0);
                                        fVar32 = fVar41;
                                        if (1.0 < fVar41) {
                                          fVar32 = 1.0;
                                        }
                                        uVar10 = 0x437f0000;
                                        fVar32 = fVar32 * 255.0;
                                        if (fVar41 < 0.0) {
                                          fVar32 = 0.0;
                                        }
                                        dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
                                        if (0.0 <= fVar32) {
                                          if (dVar35 == 0.5) {
                                            fVar32 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar41 = (float)(int)(fVar32 + 0.5);
                                        }
                                        else if (dVar35 == -0.5) {
                                          fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                          fVar41 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar41 = fVar32;
                                          }
                                        }
                                        else {
                                          fVar41 = (float)(int)(fVar32 + -0.5);
                                        }
                                        fVar32 = fVar38;
                                        if (1.0 < fVar38) {
                                          fVar32 = 1.0;
                                        }
                                        fVar32 = fVar32 * 255.0;
                                        if (fVar38 < 0.0) {
                                          fVar32 = 0.0;
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
              if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar15 == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar29 + uVar24 * 0xc + 0x20);
              fVar40 = *(float *)((long)dVar35 + 0x84);
              fVar38 = fVar38 + (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = fVar41;
              }
              fVar31 = fVar32;
              if (fVar38 < 0.0) {
                fVar31 = 0.0;
              }
              fVar31 = (float)FUN_0269ad38(fVar31,lVar15,0);
              fVar38 = fVar31;
              if (1.0 < fVar31) {
                fVar38 = fVar41;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar31 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar41 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar38;
                }
              }
              else {
                fVar41 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar32 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar32 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar38;
                }
              }
              else {
                fVar32 = (float)(int)(fVar38 + -0.5);
              }
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar37 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar37 = fVar40;
              if (1.0 < fVar40) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar40 < 0.0) {
                fVar37 = 0.0;
              }
              dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar35 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar16 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar16 + 0x18) <= uVar25) goto LAB_00e44400;
              *(uint *)(lVar16 + (long)(int)uVar25 * 4 + 0x20) =
                   (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar35 = *in_stack_00000060;
              if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                 (lVar29 = *in_stack_00000038, lVar29 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar29 + uVar24 * 0xc + 0x20);
              fVar40 = *(float *)((long)dVar35 + 0x84);
              lVar29 = *plVar27;
              fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar41 = fVar38;
              if (fVar32 < 0.0) {
                fVar41 = 0.0;
              }
              fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18),0);
              fVar32 = fVar41;
              if (1.0 < fVar41) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar41 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar41 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar32 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                fVar32 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar32 = fVar38;
                }
              }
              else {
                fVar32 = (float)(int)(fVar32 + -0.5);
              }
              fVar38 = fVar37;
              if (1.0 < fVar37) {
                fVar38 = 1.0;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar37 < 0.0) {
                fVar38 = 0.0;
              }
              dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar35 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar38 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar37 = fVar40;
              if (1.0 < fVar40) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar40 < 0.0) {
                fVar37 = 0.0;
              }
              dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar35 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar35 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              if (lVar29 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar29 + 0x18) <= uVar22) goto LAB_00e44400;
              *(uint *)(lVar29 + (long)(int)uVar22 * 4 + 0x20) =
                   (int)fVar41 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10
                   | (int)fVar37 << 0x18;
              dVar35 = *in_stack_00000060;
              if (((dVar35 == 0.0) || (lVar21 = *(long *)((long)dVar35 + 0xa8), lVar21 == 0)) ||
                 (lVar29 = *in_stack_00000038, lVar29 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar29 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_00e443fc;
              fVar37 = *(float *)(lVar29 + uVar24 * 0xc + 0x20);
              fVar40 = *(float *)((long)dVar35 + 0x84);
              lVar29 = *plVar27;
              fVar32 = fStack0000000000000048 * *(float *)(lVar21 + 0x24) +
                       (fVar37 * *(float *)(lVar21 + 0x20)) / fVar40;
              fVar32 = fVar32 - (float)(int)fVar32;
              fVar38 = fVar32;
              if (1.0 < fVar32) {
                fVar38 = 1.0;
              }
              fVar41 = fVar38;
              if (fVar32 < 0.0) {
                fVar41 = 0.0;
              }
              fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar21 + 0x18),0);
              fVar32 = fVar41;
              if (1.0 < fVar41) {
                fVar32 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar32 = fVar32 * 255.0;
              if (fVar41 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) {
                if (dVar35 == 0.5) {
                  fVar32 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar41 = (float)(int)(fVar32 + 0.5);
              }
              else if (dVar35 == -0.5) {
                fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = fVar32;
                }
              }
              else {
                fVar41 = (float)(int)(fVar32 + -0.5);
              }
              fVar32 = fVar38;
              if (1.0 < fVar38) {
                fVar32 = 1.0;
              }
              fVar32 = fVar32 * 255.0;
              if (fVar38 < 0.0) {
                fVar32 = 0.0;
              }
              dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
              if (0.0 <= fVar32) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar35 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                fVar32 = fVar38 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar32;
                }
              }
              else {
                fVar38 = (float)(int)(fVar32 + -0.5);
              }
            }
            unaff_s8 = 0.0;
            fVar32 = fVar37;
            if (1.0 < fVar37) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar37 < 0.0) {
              fVar32 = 0.0;
            }
            dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar35 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42654;
              }
              fVar37 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar35 == -0.5) {
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
            fVar32 = fVar40;
            if (1.0 < fVar40) {
              fVar32 = 1.0;
            }
            fVar32 = fVar32 * 255.0;
            if (fVar40 < 0.0) {
              fVar32 = 0.0;
            }
            dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar35 == 0.5) {
                fVar32 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar40 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar32 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = fVar32;
              }
            }
            else {
              fVar40 = (float)(int)(fVar32 + -0.5);
            }
            if (lVar29 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_00e44400;
            *(uint *)(lVar29 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar41 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
                 (int)fVar40 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar17 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_02681b9c(uVar17,0,0);
            if ((uVar13 & 1) == 0) goto LAB_00e43400;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar38 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar40 = *(float *)(lVar21 + 0x20);
            fVar37 = *(float *)(lVar21 + 0x24);
            fVar32 = fVar38 * 255.0;
            if (fVar38 < 0.0) {
              fVar32 = 0.0;
            }
            dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar35 == 0.5) {
                fVar38 = 1.0;
                goto LAB_00e4287c;
              }
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar38 = -1.0;
LAB_00e4287c:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + fVar38;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar38 = fVar41 * 255.0;
            fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
            if (fVar41 < 0.0) {
              fVar38 = 0.0;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar35 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar41 = fVar40;
            if (1.0 < fVar40) {
              fVar41 = 1.0;
            }
            fVar41 = fVar41 * 255.0;
            fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
            if (fVar40 < 0.0) {
              fVar41 = 0.0;
            }
            dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
            if (0.0 <= fVar41) {
              if (dVar35 == 0.5) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e429c8;
              }
              fVar41 = (float)(int)(fVar41 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar40;
              }
            }
            else {
              fVar41 = (float)(int)(fVar41 + -0.5);
            }
            fVar40 = fVar37;
            if (1.0 < fVar37) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar37 < 0.0) {
              fVar40 = 0.0;
            }
            dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar35 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e42a44;
              }
              fVar40 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar37 = -1.0;
LAB_00e42a44:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            *puVar19 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                       ((int)fVar41 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
            puVar19 = (uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20);
            uVar3 = *puVar19;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0))
            goto LAB_00e443fc;
            fVar38 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar21 + 0x18);
            fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
            fVar40 = *(float *)(lVar21 + 0x20);
            fVar37 = *(float *)(lVar21 + 0x24);
            fVar32 = fVar38 * 255.0;
            if (fVar38 < 0.0) {
              fVar32 = 0.0;
            }
            dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
            if (0.0 <= fVar32) {
              if (dVar35 == 0.5) {
                fVar38 = 1.0;
                goto LAB_00e42b80;
              }
              fVar32 = (float)(int)(fVar32 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar38 = -1.0;
LAB_00e42b80:
              fVar32 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar32 = (float)_fStack0000000000000070 + fVar38;
              }
            }
            else {
              fVar32 = (float)(int)(fVar32 + -0.5);
            }
            fVar38 = fVar41 * 255.0;
            fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
            if (fVar41 < 0.0) {
              fVar38 = 0.0;
            }
            dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar35 == 0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
            }
            else if (dVar35 == -0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar41 = fVar40;
            if (1.0 < fVar40) {
              fVar41 = 1.0;
            }
            fVar41 = fVar41 * 255.0;
            fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
            if (fVar40 < 0.0) {
              fVar41 = 0.0;
            }
            dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
            if (0.0 <= fVar41) {
              if (dVar35 == 0.5) {
                fVar40 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42ccc;
              }
              fVar41 = (float)(int)(fVar41 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar40;
              }
            }
            else {
              fVar41 = (float)(int)(fVar41 + -0.5);
            }
            fVar40 = fVar37;
            if (1.0 < fVar37) {
              fVar40 = 1.0;
            }
            fVar40 = fVar40 * 255.0;
            if (fVar37 < 0.0) {
              fVar40 = 0.0;
            }
            dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
            if (0.0 <= fVar40) {
              if (dVar35 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e42d48;
              }
              fVar40 = (float)(int)(fVar40 + 0.5);
            }
            else if (dVar35 == -0.5) {
              fVar37 = -1.0;
LAB_00e42d48:
              fVar40 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar40 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar40 = (float)(int)(fVar40 + -0.5);
            }
            *puVar19 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                       ((int)fVar41 & 0xffU) << 0x10 | (int)fVar40 << 0x18;
            lVar21 = *plVar27;
            if (lVar21 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar21 = lVar21 + (long)(int)uVar22 * 4;
          }
          uVar3 = *(uint *)(lVar21 + 0x20);
          if ((*in_stack_00000060 == 0.0) ||
             (lVar29 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar29 == 0)) goto LAB_00e443fc;
          fVar32 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar29 + 0x18);
          fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar29 + 0x1c);
          fVar40 = *(float *)(lVar29 + 0x20);
          fVar37 = *(float *)(lVar29 + 0x24);
          fVar38 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar35 == 0.5) {
              fVar38 = 1.0;
              goto FUN_00e42e84;
            }
            fVar32 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar35 == -0.5) {
            fVar38 = -1.0;
FUN_00e42e84:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar32 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
          fVar38 = fVar41 * 255.0;
          if (fVar41 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar35 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar35 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar41 = fVar40;
          if (1.0 < fVar40) {
            fVar41 = 1.0;
          }
          fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
          fVar41 = fVar41 * 255.0;
          if (fVar40 < 0.0) {
            fVar41 = unaff_s8;
          }
          dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar35 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar35 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = fVar40;
            }
          }
          else {
            fVar41 = (float)(int)(fVar41 + -0.5);
          }
          fVar40 = fVar37;
          if (1.0 < fVar37) {
            fVar40 = 1.0;
          }
          fVar40 = fVar40 * 255.0;
          if (fVar37 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar35 == 0.5) {
              fVar37 = 1.0;
              goto LAB_00e4304c;
            }
            fVar40 = (float)(int)(fVar40 + 0.5);
          }
          else if (dVar35 == -0.5) {
            fVar37 = -1.0;
LAB_00e4304c:
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar40 = (float)(int)(fVar40 + -0.5);
          }
          *(uint *)(lVar21 + 0x20) =
               (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar41 & 0xffU) << 0x10 |
               (int)fVar40 << 0x18;
          lVar21 = *plVar27;
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          puVar19 = (uint *)(lVar21 + in_stack_00000058 * 4 + 0x20);
          uVar3 = *puVar19;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar21 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar21 == 0)) goto LAB_00e443fc;
          fVar32 = (float)(uVar3 & 0xff) / 255.0;
          uVar10 = (ulong)(uint)fVar32;
          fVar32 = fVar32 * *(float *)(lVar21 + 0x18);
          fVar41 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar21 + 0x1c);
          fVar40 = *(float *)(lVar21 + 0x20);
          fVar37 = *(float *)(lVar21 + 0x24);
          fVar38 = fVar32 * 255.0;
          if (fVar32 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar35 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e4318c;
            }
            fVar32 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar35 == -0.5) {
            fVar38 = -1.0;
LAB_00e4318c:
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar32 = (float)(int)(fVar38 + -0.5);
          }
          fVar40 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar40;
          fVar38 = fVar41 * 255.0;
          if (fVar41 < 0.0) {
            fVar38 = unaff_s8;
          }
          dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar35 == 0.5) {
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
          }
          else if (dVar35 == -0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          fVar41 = fVar40;
          if (1.0 < fVar40) {
            fVar41 = 1.0;
          }
          fVar37 = ((float)(uVar3 >> 0x18) / 255.0) * fVar37;
          fVar41 = fVar41 * 255.0;
          if (fVar40 < 0.0) {
            fVar41 = unaff_s8;
          }
          dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar35 == 0.5) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar35 == -0.5) {
            fVar40 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = fVar40;
            }
          }
          else {
            fVar41 = (float)(int)(fVar41 + -0.5);
          }
          fVar40 = fVar37;
          if (1.0 < fVar37) {
            fVar40 = 1.0;
          }
          fVar40 = fVar40 * 255.0;
          if (fVar37 < 0.0) {
            fVar40 = unaff_s8;
          }
          dVar35 = modf((double)fVar40,(double *)&stack0x00000070);
          if (0.0 <= fVar40) {
            if (dVar35 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar40 + 0.5);
            }
          }
          else if (dVar35 == -0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar37 = (float)(int)(fVar40 + -0.5);
          }
          *puVar19 = (int)fVar32 & 0xffU | ((int)fVar38 & 0xffU) << 8 |
                     ((int)fVar41 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
          unaff_s15 = in_stack_00000008._4_4_;
        }
        else {
          if (*(long *)((long)dVar35 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar35 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
          lVar21 = *plVar27;
          dVar35 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
          *(uint *)(lVar21 + uVar24 * 4 + 0x20) =
               (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar40 << 0x18;
          lVar21 = *plVar27;
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20) =
               (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar40 << 0x18;
          lVar21 = *plVar27;
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar21 + (long)(int)uVar22 * 4 + 0x20) =
               (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar40 << 0x18;
          lVar21 = *plVar27;
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar32 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar32 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar32 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar35 = modf(dVar34,(double *)&stack0x00000070);
          if (dVar35 == 0.5) {
            fVar40 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar40 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar40 = 255.0;
          }
          if (lVar21 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
          *(uint *)(lVar21 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10 |
               (int)fVar40 << 0x18;
        }
LAB_00e43400:
        lVar21 = *plVar27;
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
        lVar21 = lVar21 + uVar24 * 4;
        fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar38);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar21 = lVar21 + (long)(int)uVar25 * 4;
        fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar38);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar21 = lVar21 + (long)(int)uVar22 * 4;
        fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar38);
        lVar21 = unaff_x19[0x5f];
        if (lVar21 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar21 + 0x18) <= uVar20) goto LAB_00e44400;
        lVar21 = lVar21 + in_stack_00000058 * 4;
        uVar13 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
        fVar38 = (float)NEON_ucvtf((uint)*(byte *)(lVar21 + 0x23));
        *(char *)(lVar21 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar38);
        uVar12 = FUN_00e3703c();
        pdVar30 = in_stack_00000060;
      } while ((uVar12 & 1) != 0);
      lVar21 = *plVar28;
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar21 = *plVar28;
      }
    } while (*(int *)(*(long *)(lVar21 + 0xb8) + 0x20) != 1);
    lVar21 = *plVar27;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + uVar24 * 4 + 0x20);
    uVar20 = *puVar19;
    fVar32 = (float)FUN_026982b0((float)(uVar20 & 0xff) / 255.0,0);
    fVar37 = (float)FUN_026982b0((float)(uVar20 >> 8 & 0xff) / 255.0,0);
    fVar40 = (float)FUN_026982b0((float)(uVar20 >> 0x10 & 0xff) / 255.0,0);
    fVar38 = fVar32;
    if (1.0 < fVar32) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar32 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar35 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    fVar32 = fVar37;
    if (1.0 < fVar37) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * 255.0;
    if (fVar37 < 0.0) {
      fVar32 = unaff_s8;
    }
    dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar35 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = (float)(int)(fVar32 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar32 = (float)(int)(fVar32 + -0.5);
    }
    fVar37 = fVar40;
    if (1.0 < fVar40) {
      fVar37 = 1.0;
    }
    fVar41 = (float)(uVar20 >> 0x18) / 255.0;
    fVar37 = fVar37 * 255.0;
    if (fVar40 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43744;
      }
      fVar40 = (float)(int)(fVar37 + 0.5);
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
      fVar40 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar40 = fVar37;
      }
    }
    else {
      fVar40 = (float)(int)(fVar37 + -0.5);
    }
    if (1.0 < fVar41) {
      fVar41 = 1.0;
    }
    fVar41 = fVar41 * 255.0;
    dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
    if (0.0 <= fVar41) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar41 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar41 + -0.5);
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar4) goto LAB_00e44400;
    *puVar19 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
    lVar21 = *in_stack_00000030;
    if (lVar21 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
    puVar19 = (uint *)(lVar21 + (long)(int)uVar25 * 4 + 0x20);
    uVar4 = *puVar19;
    fVar32 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    fVar37 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    fVar40 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar38 = fVar32;
    if (1.0 < fVar32) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar32 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar35 == 0.5) {
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar38 = (float)(int)(fVar38 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar38 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar38 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar38 = (float)(int)(fVar38 + -0.5);
    }
    unaff_w23 = 255.0;
    fVar32 = fVar37;
    if (1.0 < fVar37) {
      fVar32 = 1.0;
    }
    fVar32 = fVar32 * 255.0;
    if (fVar37 < 0.0) {
      fVar32 = unaff_s8;
    }
    dVar35 = modf((double)fVar32,(double *)&stack0x00000070);
    if (0.0 <= fVar32) {
      if (dVar35 == 0.5) {
        fVar32 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar32 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar32 = (float)(int)(fVar32 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar32 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar32 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar32 = (float)(int)(fVar32 + -0.5);
    }
    fVar37 = fVar40;
    if (1.0 < fVar40) {
      fVar37 = 1.0;
    }
    fVar41 = (float)(uVar4 >> 0x18) / 255.0;
    fVar37 = fVar37 * 255.0;
    if (fVar40 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar35 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43a84;
      }
      fVar40 = (float)(int)(fVar37 + 0.5);
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
      fVar40 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar40 = fVar37;
      }
    }
    else {
      fVar40 = (float)(int)(fVar37 + -0.5);
    }
    if (1.0 < fVar41) {
      fVar41 = 1.0;
    }
    unaff_s9 = 255.0;
    fVar41 = fVar41 * 255.0;
    dVar35 = modf((double)fVar41,(double *)&stack0x00000070);
    if (0.0 <= fVar41) {
      if (dVar35 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar41 + 0.5);
      }
    }
    else if (dVar35 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar41 + -0.5);
    }
    if (*(uint *)(lVar21 + 0x18) <= uVar25) goto LAB_00e44400;
    *puVar19 = (int)fVar38 & 0xffU | ((int)fVar32 & 0xffU) << 8 | ((int)fVar40 & 0xffU) << 0x10 |
               (int)fVar37 << 0x18;
    unaff_x21 = *in_stack_00000030;
    if (unaff_x21 == 0) goto LAB_00e443fc;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_00e44400;
    unaff_x20 = (uint *)(unaff_x21 + (long)(int)uVar22 * 4 + 0x20);
    uVar4 = *unaff_x20;
    unaff_w22 = uVar4 >> 0x18;
    fVar32 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    unaff_s12 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    unaff_s11 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar38 = fVar32;
    if (1.0 < fVar32) {
      fVar38 = 1.0;
    }
    fVar38 = fVar38 * 255.0;
    if (fVar32 < 0.0) {
      fVar38 = unaff_s8;
    }
    dVar35 = modf((double)fVar38,(double *)&stack0x00000070);
    if (0.0 <= fVar38) {
      if (dVar35 == 0.5) {
        plVar27 = in_stack_00000030;
        fVar38 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar38 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        plVar27 = in_stack_00000030;
        unaff_s9 = 255.0;
        fVar38 = (float)(int)(fVar38 + 0.5);
      }
      goto LAB_00e43cac;
    }
    unaff_x24 = in_stack_00000030;
    unaff_x26 = in_stack_00000060;
    param_1 = _fStack0000000000000070;
    if (dVar35 != -0.5) {
      plVar27 = in_stack_00000030;
      fVar38 = (float)(int)(fVar38 + -0.5);
      goto LAB_00e43cac;
    }
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar24 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar29 = unaff_x19[0xcb];
    uVar33 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar29 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar29 + 0x18) <= uVar24) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar29 + lVar21);
    *puVar1 = uVar33;
    puVar1[1] = (int)uVar13;
    puVar1[2] = (int)uVar10;
    lVar29 = unaff_x19[0xca];
    if ((lVar29 == 0) || (lVar15 = unaff_x19[0xcc], lVar15 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_00e44400;
    uVar33 = *(undefined4 *)(lVar29 + 0x4c);
    uVar24 = uVar24 + 1;
    puVar18 = (undefined8 *)(lVar15 + lVar21);
    lVar21 = lVar21 + 0xc;
    *puVar18 = *(undefined8 *)(lVar29 + 0x44);
    *(undefined4 *)(puVar18 + 1) = uVar33;
  } while (uVar4 != uVar24);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar27,*plVar11,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar21 = unaff_x19[0x59];
  if (lVar21 != 0) {
    (**(code **)(lVar21 + 0x18))
              (*(undefined8 *)(lVar21 + 0x40),*in_stack_00000038,*plVar27,*plVar11,
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


