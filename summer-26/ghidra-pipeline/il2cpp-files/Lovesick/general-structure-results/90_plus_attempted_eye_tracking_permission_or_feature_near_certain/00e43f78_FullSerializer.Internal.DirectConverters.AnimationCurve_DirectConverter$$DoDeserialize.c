/*
FUNCTION_NAME: FullSerializer.Internal.DirectConverters.AnimationCurve_DirectConverter$$DoDeserialize
ENTRY_POINT: 00e43f78
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

void FullSerializer_Internal_DirectConverters_AnimationCurve_DirectConverter__DoDeserialize(void)

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
  ulong uVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x19;
  undefined8 uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  uint *unaff_x20;
  uint uVar22;
  long unaff_x21;
  uint uVar23;
  uint unaff_w22;
  undefined8 uVar24;
  ulong uVar25;
  uint uVar26;
  float unaff_w23;
  long *unaff_x24;
  long *plVar27;
  long lVar28;
  double *unaff_x26;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_s8;
  float fVar37;
  int iVar38;
  float unaff_s9;
  float unaff_s11;
  float unaff_s12;
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
    fVar37 = (float)_fStack0000000000000070;
    if (((long)_fStack0000000000000070 & 1U) != 0) {
      fVar37 = (float)_fStack0000000000000070 + -1.0;
    }
LAB_00e43fe4:
    uVar10 = 0x3f800000;
    fVar29 = unaff_s12;
    if (1.0 < unaff_s12) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * unaff_w23;
    if (unaff_s12 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar33 == 0.5) {
                    /* try { // try from 00e44048 to 00f4420f has its CatchHandler @ 00e44048
                       catch() { ... } // from try @ 00e44048 with catch @ 00e44048
                       catch() { ... } // from try @ 00e44370 with catch @ 00e44048 */
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar35 = unaff_s11;
    if (1.0 < unaff_s11) {
      fVar35 = 1.0;
    }
    fVar39 = (float)unaff_w22 / unaff_s9;
    fVar35 = fVar35 * unaff_w23;
    if (unaff_s11 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e440f4;
      }
      fVar36 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
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
    if (1.0 < fVar39) {
      fVar39 = 1.0;
    }
    fVar39 = fVar39 * unaff_w23;
    dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
    if (0.0 <= fVar39) {
      uVar14 = 0;
      if (dVar33 == 0.5) {
        fVar35 = 1.0;
        goto LAB_00e44170;
      }
      fVar39 = (float)(int)(fVar39 + 0.5);
    }
    else {
      uVar14 = 0;
      if (dVar33 == -0.5) {
        fVar35 = -1.0;
LAB_00e44170:
        fVar35 = (float)_fStack0000000000000070 + fVar35;
        uVar14 = (ulong)(uint)fVar35;
        fVar39 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar39 = fVar35;
        }
      }
      else {
        fVar39 = (float)(int)(fVar39 + -0.5);
      }
    }
    if (*(uint *)(unaff_x21 + 0x18) <= (uint)in_stack_00000058) goto LAB_00e44400;
    *unaff_x20 = (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10 |
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
          if ((unaff_x19[0xcc] == 0) || (lVar16 = unaff_x19[0xf], lVar16 == 0)) goto LAB_00e443fc;
          plVar27 = unaff_x19 + 0xcc;
          if (*(int *)(lVar16 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
            FUN_010afdd4(plVar27,*(int *)(lVar16 + 0x10),*(undefined8 *)puVar6);
            lVar16 = unaff_x19[0xf];
            if (lVar16 == 0) goto LAB_00e443fc;
          }
          uVar4 = *(uint *)(lVar16 + 0x10);
          if ((int)uVar4 < 1) goto LAB_00e44358;
          uVar25 = 0;
          lVar16 = 0x20;
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
          fVar29 = *(float *)(*(long *)((long)dVar33 + 0x78) + 0x18);
          fVar37 = DAT_028aa034;
          if (fVar29 != 0.0) {
            fVar37 = fVar29;
          }
          if ((0.0 < (unaff_s15 - *(float *)((long)dVar33 + 100)) / fVar37) &&
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
                  lVar16 = unaff_x19[0xca];
                  if (lVar16 == 0) goto LAB_00e443fc;
                  fVar35 = *(float *)(lVar16 + 0x48);
                  fVar37 = *(float *)(unaff_x19 + 0x4b);
                  fVar39 = fVar35 + *(float *)((long)unaff_x19 + 0x50c);
                  fVar29 = *(float *)(unaff_x19 + 0x4a);
                  if (fVar35 <= *(float *)(unaff_x19 + 0x4a)) {
                    fVar29 = fVar35;
                  }
                  *(float *)(unaff_x19 + 0x4a) = fVar29;
                  fVar29 = *(float *)((long)unaff_x19 + 0x254);
                  if (fVar39 <= *(float *)((long)unaff_x19 + 0x254)) {
                    fVar29 = fVar39;
                  }
                  *(float *)((long)unaff_x19 + 0x254) = fVar29;
                  fVar29 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar16,0);
                  fVar29 = fVar29 + *(float *)(unaff_x19 + 0xa1) +
                           *(float *)((long)unaff_x19 + 0x55c);
                  if (fVar37 <= fVar29) {
                    fVar37 = fVar29;
                  }
                  *(float *)(unaff_x19 + 0x4b) = fVar37;
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
                      (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
          }
        }
        unaff_x19[0xc6] = 0;
        fVar29 = 0.0;
        *(undefined4 *)(unaff_x19 + 199) = 0;
        fVar37 = 0.0;
        if ((((0.0 < fStack000000000000004c) &&
             (uVar4 = *(uint *)(unaff_x19 + 0x2a), fVar37 = fVar29, uVar4 < 5)) &&
            ((1 << (ulong)(uVar4 & 0x1f) & 0x19U) != 0)) &&
           (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
          if (uVar4 == 4) {
            lVar16 = unaff_x19[0xc];
            if (lVar16 == 0) goto LAB_00e443fc;
            if (0 < *(int *)(lVar16 + 0x18)) {
              iVar9 = 0;
              do {
                FUN_0132138c(lVar16,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
                *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                fVar37 = fStack0000000000000070;
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
            fVar37 = 0.0;
            while (iVar9 < *(int *)(lVar16 + 0x18)) {
              FUN_0132138c(lVar16,iVar9,&stack0x00000070,*(undefined8 *)puVar6);
              fVar37 = fVar37 + fStack0000000000000070;
              *(float *)((long)unaff_x19 + 0x634) = fVar37;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar37)
              break;
              lVar16 = unaff_x19[0xb];
              iVar9 = iVar9 + 1;
              if (lVar16 == 0) goto LAB_00e443fc;
            }
          }
        }
        *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        fVar29 = *(float *)((long)unaff_x19 + 0x53c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
        fVar35 = *(float *)((long)_fStack0000000000000070 + 0x5c);
        FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar7);
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        fVar36 = *(float *)(unaff_x19 + 0xa8);
        fVar39 = *(float *)(unaff_x19 + 199) + fVar36;
        *(float *)((long)unaff_x19 + 0x634) =
             fVar37 + fVar29 + (fVar35 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
        *(float *)(unaff_x19 + 199) = fVar39;
        puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        fVar29 = 1.0;
        fVar37 = 1.0;
        uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
        in_stack_00000040[0x10] = **(undefined8 **)(*(long *)puVar6 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar31;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 200);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar19,0,0);
        if ((uVar10 & 1) != 0) {
          lVar16 = __start_il2cpp();
          if (lVar16 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar16 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
            uVar31 = FUN_00e4ee40();
            *(undefined4 *)((long)unaff_x19 + 0x674) = uVar31;
            *(float *)(unaff_x19 + 0xcf) = fVar39;
            *(float *)((long)unaff_x19 + 0x67c) = fVar36;
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
        lVar16 = (*(long **)(lVar28 + 0xb8))[1];
        unaff_x19[0xc0] = **(long **)(lVar28 + 0xb8);
        *(int *)(unaff_x19 + 0xc1) = (int)lVar16;
        uVar31 = *(undefined4 *)(*(undefined8 **)(lVar28 + 0xb8) + 1);
        in_stack_00000040[3] = **(undefined8 **)(lVar28 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x614) = uVar31;
        lVar16 = (*(long **)(lVar28 + 0xb8))[1];
        unaff_x19[0xc3] = **(long **)(lVar28 + 0xb8);
        *(int *)(unaff_x19 + 0xc4) = (int)lVar16;
        uVar31 = *(undefined4 *)(*(undefined8 **)(lVar28 + 0xb8) + 1);
        in_stack_00000040[6] = **(undefined8 **)(lVar28 + 0xb8);
        *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar31;
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_02681b9c(uVar19,0,0);
        if ((uVar10 & 1) != 0) {
          if (*unaff_x26 == 0.0) goto LAB_00e443fc;
          if (*(float *)((long)*unaff_x26 + 0x84) != 0.0) {
            lVar16 = __start_il2cpp();
            if (lVar16 == 0) goto LAB_00e443fc;
            if ((*(char *)(lVar16 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0'))
            {
              lVar16 = unaff_x19[0xca];
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
              if ((lVar16 == 0) || (lVar28 = *(long *)(lVar16 + 0xc0), lVar28 == 0))
              goto LAB_00e443fc;
              fVar35 = fStack0000000000000048;
              if (*(char *)(lVar28 + 0x18) != '\0') {
                fVar39 = *(float *)(lVar16 + 100);
                fVar35 = *(float *)((long)unaff_x19 + 0x2ec) - fVar39;
              }
              if (*(char *)(lVar28 + 0x19) != '\0') {
                uVar31 = FUN_00e4e9f4(fVar35);
                lVar16 = unaff_x19[0xca];
                *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar31;
                *(float *)(unaff_x19 + 0xbf) = fVar39;
                *(float *)((long)unaff_x19 + 0x5fc) = fVar36;
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x28) != '\0') {
                fVar30 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar30;
                *(float *)(unaff_x19 + 200) = fVar39;
                fVar34 = fVar36 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc0] =
                     CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar30 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar34;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar39 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar39;
                *(float *)(unaff_x19 + 200) = fVar34;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[3] =
                     CONCAT44(fVar34 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar39 + (float)in_stack_00000040[3]);
                *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar30 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar30;
                *(float *)(unaff_x19 + 200) = fVar34;
                fVar39 = fVar36 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc3] =
                     CONCAT44(fVar34 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar30 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar39;
                if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                goto LAB_00e443fc;
                fVar35 = (float)FUN_00e4e9f4(fVar35);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar39;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[6] =
                     CONCAT44(fVar39 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              if (*(long *)(lVar16 + 0xc0) == 0) goto LAB_00e443fc;
              if (*(char *)(*(long *)(lVar16 + 0xc0) + 0x50) != '\0') {
                FUN_00e5eda8(lVar16,0);
                fVar35 = (float)FUN_00e4eb50();
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar39;
                fVar30 = fVar36 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc0] =
                     CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar30;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b838(lVar16,0);
                fVar35 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar30;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[3] =
                     CONCAT44(fVar30 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar35 + (float)in_stack_00000040[3]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5eea4(lVar16,0);
                fVar35 = (float)FUN_00e4eb50();
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar30;
                fVar39 = fVar36 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc3] =
                     CONCAT44(fVar30 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar39;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                FUN_00e5b7d8(lVar16,0);
                fVar35 = (float)FUN_00e4eb50();
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar39;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[6] =
                     CONCAT44(fVar39 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
                if (lVar16 == 0) goto LAB_00e443fc;
              }
              lVar28 = *(long *)(lVar16 + 0xc0);
              if (lVar28 == 0) goto LAB_00e443fc;
              if (*(char *)(lVar28 + 0x60) != '\0') {
                uVar24 = *(undefined8 *)(lVar28 + 0x68);
                uVar19 = FUN_00e5eda8(lVar16,0);
                fVar35 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar39;
                fVar30 = fVar36 + *(float *)(unaff_x19 + 0xc1);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc0] =
                     CONCAT44(fVar39 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc0]);
                *(float *)(unaff_x19 + 0xc1) = fVar30;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5b838(lVar16,0);
                fVar35 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar30;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[3] =
                     CONCAT44(fVar30 + (float)((ulong)in_stack_00000040[3] >> 0x20),
                              fVar35 + (float)in_stack_00000040[3]);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x614) = fVar36 + *(float *)((long)unaff_x19 + 0x614);
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5eea4(lVar16,0);
                fVar35 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                lVar16 = unaff_x19[0xca];
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar30;
                fVar39 = fVar36 + *(float *)(unaff_x19 + 0xc4);
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                unaff_x19[0xc3] =
                     CONCAT44(fVar30 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                              fVar35 + (float)unaff_x19[0xc3]);
                *(float *)(unaff_x19 + 0xc4) = fVar39;
                if ((lVar16 == 0) || (*(long *)(lVar16 + 0xc0) == 0)) goto LAB_00e443fc;
                uVar24 = *(undefined8 *)(*(long *)(lVar16 + 0xc0) + 0x68);
                uVar19 = FUN_00e5b7d8(lVar16,0);
                fVar35 = (float)FUN_00e4ecc4(uVar19,lVar16,uVar24);
                *(float *)((long)unaff_x19 + 0x63c) = fVar35;
                *(float *)(unaff_x19 + 200) = fVar39;
                *(float *)((long)unaff_x19 + 0x644) = fVar36;
                in_stack_00000040[6] =
                     CONCAT44(fVar39 + (float)((ulong)in_stack_00000040[6] >> 0x20),
                              fVar35 + (float)in_stack_00000040[6]);
                *(float *)((long)unaff_x19 + 0x62c) = fVar36 + *(float *)((long)unaff_x19 + 0x62c);
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
            uVar19 = *(undefined8 *)((long)*unaff_x26 + 0x80);
            in_stack_00000040[0x1e] =
                 CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar19 >> 0x20),
                          (float)unaff_x19[0x24] * (float)uVar19);
          }
          lVar16 = unaff_x19[0x5e];
          *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar39 = *(float *)((long)unaff_x19 + 0x674);
          uVar14 = (ulong)(int)uVar4;
          *(float *)(lVar16 + uVar14 * 0xc + 0x20) =
               fVar35 + fVar39 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x604);
          *(float *)(lVar16 + uVar14 * 0xc + 0x24) =
               fVar39 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eda8(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          *(float *)(lVar16 + uVar14 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b838(*unaff_x26,0);
          uVar25 = uVar14 | 1;
          uVar22 = (uint)uVar25;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar39 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar25 * 0xc + 0x20) =
               fVar35 + fVar39 + *(float *)((long)unaff_x19 + 0x60c) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          fVar35 = *(float *)(unaff_x19 + 0xc2);
          *(float *)(lVar16 + uVar25 * 0xc + 0x24) =
               fVar39 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b838(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          *(float *)(lVar16 + uVar25 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5eea4(*unaff_x26,0);
          uVar13 = uVar14 | 2;
          uVar23 = (uint)uVar13;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar39 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar13 * 0xc + 0x20) =
               fVar35 + fVar39 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4)
               + *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x61c);
          *(float *)(lVar16 + uVar13 * 0xc + 0x24) =
               fVar39 + *(float *)(unaff_x19 + 0xcf) + fVar35 + *(float *)(unaff_x19 + 0xbf) +
               *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5eea4(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          *(float *)(lVar16 + uVar13 * 0xc + 0x28) =
               fVar35 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5b7d8(*unaff_x26,0);
          uVar12 = uVar14 | 3;
          uVar26 = (uint)uVar12;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          fVar39 = *(float *)((long)unaff_x19 + 0x674);
          *(float *)(lVar16 + uVar12 * 0xc + 0x20) =
               fVar35 + fVar39 + *(float *)((long)unaff_x19 + 0x624) +
               *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
               *(float *)((long)unaff_x19 + 0x6e4);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          uVar10 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
          *(float *)(lVar16 + uVar12 * 0xc + 0x24) =
               fVar39 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
               *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
               *(float *)(unaff_x19 + 0xdd);
          lVar16 = unaff_x19[0x5e];
          if ((lVar16 == 0) || (*unaff_x26 == 0.0)) goto LAB_00e443fc;
          FUN_00e5b7d8(*unaff_x26,0);
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          fVar35 = *(float *)((long)unaff_x19 + 0x62c);
          *(float *)(lVar16 + uVar12 * 0xc + 0x28) =
               (float)uVar10 + *(float *)((long)unaff_x19 + 0x67c) + fVar35 +
               *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
               *(float *)((long)unaff_x19 + 0x6ec);
          lVar16 = unaff_x19[0xca];
          if (lVar16 == 0) goto LAB_00e443fc;
          lVar28 = *in_stack_00000020;
          if (*(char *)(lVar16 + 0x108) == '\0') {
            uVar31 = FUN_0272b9dc(lVar16 + 0x10,0);
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = lVar28 + uVar14 * 8;
            *(undefined4 *)(lVar28 + 0x20) = uVar31;
            *(float *)(lVar28 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = thunk_FUN_0272b8d8((long)*unaff_x26 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar16 = lVar16 + uVar25 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar31;
            *(float *)(lVar16 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = FUN_0272b9c8((long)*unaff_x26 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + uVar13 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar31;
            *(float *)(lVar16 + 0x24) = fVar35;
            if (*unaff_x26 == 0.0) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = FUN_0272b98c((long)*unaff_x26 + 0x10,0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + uVar12 * 8;
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
               (uVar31 = FUN_00e5dd14(fStack0000000000000048,*(long *)(lVar16 + 0x100),
                                      *(undefined4 *)(lVar16 + 0x10c),0), lVar28 == 0))
            goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = lVar28 + uVar14 * 8;
            *(undefined4 *)(lVar28 + 0x20) = uVar31;
            *(float *)(lVar28 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = FUN_00e5de6c(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar16 = lVar16 + uVar25 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar31;
            *(float *)(lVar16 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = FUN_00e5dea4(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + uVar13 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar31;
            *(float *)(lVar16 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            lVar16 = *in_stack_00000020;
            uVar31 = thunk_FUN_00e5dd60(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                        *(undefined4 *)((long)dVar33 + 0x10c),0);
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar16 = lVar16 + uVar12 * 8;
            *(undefined4 *)(lVar16 + 0x20) = uVar31;
            *(float *)(lVar16 + 0x24) = fVar35;
            dVar33 = *unaff_x26;
            if ((dVar33 == 0.0) || (*(long *)((long)dVar33 + 0x100) == 0)) goto LAB_00e443fc;
            uVar31 = FUN_00e5dedc(fStack0000000000000048,*(long *)((long)dVar33 + 0x100),
                                  *(undefined4 *)((long)dVar33 + 0x10c),0);
            lVar16 = unaff_x19[0xca];
            *(undefined4 *)(unaff_x19 + 0xd9) = uVar31;
            *(float *)((long)unaff_x19 + 0x6cc) = fVar35;
            if ((lVar16 == 0) || (lVar28 = *(long *)(lVar16 + 0x100), lVar28 == 0))
            goto LAB_00e443fc;
            unaff_x24 = in_stack_00000030;
            if (((1 < *(int *)(lVar28 + 0x28)) && (0.0 < *(float *)(lVar28 + 0x34))) &&
               (*(int *)(lVar16 + 0x10c) < 0)) {
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
          lVar16 = *in_stack_00000038;
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(puVar6);
            DAT_03774d76 = '\x01';
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          uVar14 = (ulong)(int)uVar4;
          lVar16 = lVar16 + uVar14 * 0xc;
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar31;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 1)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar14 | 1) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar31;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 2)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar14 | 2) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar31;
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= (uint)(uVar14 | 3)) goto LAB_00e44400;
          lVar16 = lVar16 + (uVar14 | 3) * 0xc;
          uVar31 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
          *(undefined8 *)(lVar16 + 0x20) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
          *(undefined4 *)(lVar16 + 0x28) = uVar31;
        }
        if (*unaff_x26 == 0.0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)((long)*unaff_x26 + 0xf8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_02681b9c(uVar19,0,0);
        if ((uVar14 & 1) == 0) {
          lVar16 = unaff_x19[0x10];
        }
        else {
          if ((*unaff_x26 == 0.0) || (lVar16 = *(long *)((long)*unaff_x26 + 0xf8), lVar16 == 0))
          goto LAB_00e443fc;
          lVar16 = *(long *)(lVar16 + 0x18);
        }
        if (((lVar16 == 0) || (lVar16 = FUN_0272bcf4(lVar16,0), lVar16 == 0)) ||
           (plVar11 = (long *)FUN_0267dac8(lVar16,0), plVar11 == (long *)0x0)) goto LAB_00e443fc;
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
        uVar25 = (ulong)(int)uVar4;
        uVar14 = uVar25 | 1;
        FUN_0132149c(unaff_x19[0x62],uVar4 | 1,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        uVar13 = uVar25 | 2;
        FUN_0132149c(unaff_x19[0x62],uVar13,&stack0x00000070,*(undefined8 *)puVar6);
        if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000058 = uVar25 | 3;
        FUN_0132149c(unaff_x19[0x62],uVar4 | 3,&stack0x00000070,*(undefined8 *)puVar6);
        plVar27 = (long *)StringLiteral_9119;
        lVar16 = unaff_x19[0x60];
        if (lVar16 == 0) goto LAB_00e443fc;
        if ((*(uint *)(lVar16 + 0x18) <= uVar4) ||
           (uVar22 = (uint)in_stack_00000058, *(uint *)(lVar16 + 0x18) <= uVar22))
        goto LAB_00e44400;
        lVar28 = unaff_x19[0xca];
        fVar35 = unaff_s8;
        if (*(float *)(lVar16 + 0x20 + uVar25 * 8) !=
            *(float *)(lVar16 + 0x20 + in_stack_00000058 * 8)) {
          fVar35 = fVar29;
        }
        *(float *)(unaff_x19 + 0xda) = fVar35;
        if (lVar28 == 0) goto LAB_00e443fc;
        cVar5 = *(char *)(lVar28 + 0x108);
        fVar35 = fVar29;
        if (cVar5 != '\0' || 0x7fffffff < *(uint *)(lVar28 + 0x138)) {
          fVar35 = -1.0;
        }
        *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar28 + 0x84) * fVar35;
        if (cVar5 == '\0') {
          iVar38 = *(int *)(lVar28 + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          uVar10 = 0x3e800000;
          *(float *)(unaff_x19 + 0xdb) = (float)iVar38 / ((float)iVar9 * 0.25);
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          iVar38 = *(int *)(unaff_x19[0xca] + 0x160);
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          fVar39 = (float)iVar38;
          fVar35 = (float)iVar9;
          puVar20 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        }
        else {
          if (*(long *)(lVar28 + 0x100) == 0) goto LAB_00e443fc;
          fVar35 = (float)FUN_00e5df18(*(long *)(lVar28 + 0x100),0);
          puVar20 = (undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
          if (((*in_stack_00000060 == 0.0) ||
              (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) ||
             (plVar11 = *(long **)(lVar16 + 0x18), plVar11 == (long *)0x0)) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) goto LAB_00e443fc;
          fVar39 = 0.25;
          *(float *)(unaff_x19 + 0xdb) = fVar35 / (*(float *)(lVar16 + 0x40) * (float)iVar9 * 0.25);
          FUN_00e5df18(lVar16,0);
          if ((unaff_x19[0xca] == 0) ||
             ((lVar16 = *(long *)(unaff_x19[0xca] + 0x100), lVar16 == 0 ||
              (plVar11 = *(long **)(lVar16 + 0x18), plVar11 == (long *)0x0)))) goto LAB_00e443fc;
          iVar9 = (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0x100), lVar16 == 0)) goto LAB_00e443fc;
          fVar35 = *(float *)(lVar16 + 0x44) * (float)iVar9;
        }
        fVar36 = 0.25;
        fVar39 = fVar39 / (fVar35 * 0.25);
        *(float *)((long)unaff_x19 + 0x6dc) = fVar39;
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        in_stack_00000078 = CONCAT44(fVar39,(int)unaff_x19[0xdb]);
        FUN_0132149c(unaff_x19[99],uVar4,&stack0x00000070,*puVar20);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 1,&stack0x00000070,*puVar20);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 2,&stack0x00000070,*puVar20);
        if (unaff_x19[99] == 0) goto LAB_00e443fc;
        in_stack_00000078 = unaff_x19[0xdb];
        _fStack0000000000000070 = (double)unaff_x19[0xda];
        FUN_0132149c(unaff_x19[99],uVar4 | 3,&stack0x00000070,*puVar20);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        uVar19 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_02681b9c(uVar19,0,0);
        fVar35 = (float)uVar10;
        uVar26 = (uint)uVar14;
        uVar23 = (uint)uVar13;
        if ((uVar12 & 1) != 0) {
          if (in_stack_00000050 == in_stack_00000010) {
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            fVar39 = (float)FUN_00e5b838(*in_stack_00000060,0);
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
            fVar35 = fVar35 - pfVar15[2];
            uVar10 = (ulong)(uint)fVar35;
            if (fVar35 * fVar35 +
                (fVar39 - *pfVar15) * (fVar39 - *pfVar15) +
                (fVar36 - pfVar15[1]) * (fVar36 - pfVar15[1]) < DAT_028aa020) goto LAB_00e3dbd8;
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
          fVar35 = (float)uVar19 -
                   (float)**(undefined8 **)
                            (*(long *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                            + 0xb8);
          fVar39 = (float)((ulong)uVar19 >> 0x20) -
                   (float)((ulong)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8) >> 0x20);
          if (DAT_028aa020 <= fVar35 * fVar35 + fVar39 * fVar39) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          dVar33 = *in_stack_00000060;
          if ((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xb0), lVar16 == 0))
          goto LAB_00e443fc;
          fVar39 = fStack0000000000000048 * *(float *)(lVar16 + 0x38);
          *(float *)(unaff_x19 + 0xc9) = fVar39;
          fVar35 = fStack0000000000000048 * *(float *)(lVar16 + 0x3c);
          *(float *)((long)unaff_x19 + 0x64c) = fVar35;
          if (*(char *)(lVar16 + 0x25) != '\0') {
            fVar37 = 1.0 / *(float *)((long)dVar33 + 0x84);
          }
          lVar16 = *in_stack_00000038;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          lVar28 = lVar16 + uVar25 * 0xc;
          fVar36 = *(float *)(lVar28 + 0x20);
          uVar19 = *(undefined8 *)(lVar28 + 0x24);
          *(float *)(unaff_x19 + 0xcd) = fVar36;
          in_stack_00000040[0xf] = uVar19;
          *(float *)(unaff_x19 + 0xd0) = fVar36;
          fVar30 = (float)uVar19;
          *(float *)((long)unaff_x19 + 0x684) = fVar30;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          lVar28 = lVar16 + uVar14 * 0xc;
          uVar31 = *(undefined4 *)(lVar28 + 0x20);
          uVar19 = *(undefined8 *)(lVar28 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd2) = uVar31;
          *(int *)((long)unaff_x19 + 0x694) = (int)uVar19;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          lVar28 = lVar16 + uVar13 * 0xc;
          uVar31 = *(undefined4 *)(lVar28 + 0x20);
          uVar19 = *(undefined8 *)(lVar28 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar31;
          *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar19;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          lVar16 = lVar16 + in_stack_00000058 * 0xc;
          uVar31 = *(undefined4 *)(lVar16 + 0x20);
          uVar19 = *(undefined8 *)(lVar16 + 0x24);
          *(undefined4 *)(unaff_x19 + 0xcd) = uVar31;
          in_stack_00000040[0xf] = uVar19;
          *(undefined4 *)(unaff_x19 + 0xd6) = uVar31;
          *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar19;
          lVar16 = *(long *)((long)dVar33 + 0xb0);
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(char *)(lVar16 + 0x24) == '\0') {
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            uVar3 = *(uint *)(lVar28 + 0x18);
            if (uVar3 <= uVar4) goto LAB_00e44400;
            lVar17 = lVar28 + uVar25 * 8;
            *(float *)(lVar17 + 0x20) = (fVar39 + fVar37 * fVar36) - *(float *)(lVar16 + 0x30);
            *(float *)(lVar17 + 0x24) = (fVar35 + fVar37 * fVar30) - *(float *)(lVar16 + 0x34);
            if (((uVar3 <= uVar26) ||
                (*(ulong *)(lVar28 + uVar14 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar37 +
                               (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                               (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xd2] * fVar37 + (float)unaff_x19[0xc9]) -
                               (float)*(undefined8 *)(lVar16 + 0x30)), uVar3 <= uVar23)) ||
               (*(ulong *)(lVar28 + uVar13 * 8 + 0x20) =
                     CONCAT44((fVar37 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                              (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                              (fVar37 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                              (float)*(undefined8 *)(lVar16 + 0x30)), uVar3 <= uVar22))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xc9];
            *(ulong *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44((fVar37 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                          (float)(uVar10 >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                          (fVar37 * (float)unaff_x19[0xd6] + (float)uVar10) -
                          (float)*(undefined8 *)(lVar16 + 0x30));
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
            lVar17 = lVar28 + uVar25 * 8;
            *(float *)(lVar17 + 0x20) =
                 (fVar39 + fVar37 * (fVar36 - fVar34)) - *(float *)(lVar16 + 0x30);
            *(float *)(lVar17 + 0x24) =
                 (fVar35 + fVar37 * (fVar30 - fVar2)) - *(float *)(lVar16 + 0x34);
            if (((uVar3 <= uVar26) ||
                (*(ulong *)(lVar28 + uVar14 * 8 + 0x20) =
                      CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                               ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                               (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar37) -
                               (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                               ((float)unaff_x19[0xc9] +
                               ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar37) -
                               (float)*(undefined8 *)(lVar16 + 0x30)), uVar3 <= uVar23)) ||
               (*(ulong *)(lVar28 + uVar13 * 8 + 0x20) =
                     CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                              fVar37 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                              (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                              ((float)unaff_x19[0xc9] +
                              fVar37 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                              (float)*(undefined8 *)(lVar16 + 0x30)), uVar3 <= uVar22))
            goto LAB_00e44400;
            uVar10 = unaff_x19[0xd8];
            *(ulong *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                          fVar37 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                   (float)(uVar10 >> 0x20))) -
                          (float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20),
                          ((float)unaff_x19[0xc9] +
                          fVar37 * ((float)unaff_x19[0xd6] - (float)uVar10)) -
                          (float)*(undefined8 *)(lVar16 + 0x30));
          }
        }
LAB_00e3dbd8:
        dVar33 = *in_stack_00000060;
        if (dVar33 == 0.0) goto LAB_00e443fc;
        if (*(char *)((long)dVar33 + 0x108) != '\0') {
          if (*(long *)((long)dVar33 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar33 + 0x100) + 0x20) == '\0') {
            lVar16 = *in_stack_00000020;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + uVar25 * 8 + 0x20) =
                 *(undefined8 *)(lVar16 + uVar25 * 8 + 0x20);
            lVar16 = *in_stack_00000020;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar26) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + (long)(int)uVar26 * 8 + 0x20) =
                 *(undefined8 *)(lVar16 + (long)(int)uVar26 * 8 + 0x20);
            lVar16 = *in_stack_00000020;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + (long)(int)uVar23 * 8 + 0x20) =
                 *(undefined8 *)(lVar16 + (long)(int)uVar23 * 8 + 0x20);
            lVar16 = *in_stack_00000020;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            lVar28 = *in_stack_00000028;
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
            *(undefined8 *)(lVar28 + in_stack_00000058 * 8 + 0x20) =
                 *(undefined8 *)(lVar16 + in_stack_00000058 * 8 + 0x20);
            dVar33 = *in_stack_00000060;
            if (dVar33 == 0.0) goto LAB_00e443fc;
          }
        }
        dVar32 = DAT_028aa048;
        if (*(char *)((long)dVar33 + 0x108) == '\0') {
LAB_00e3dd34:
          uVar19 = *(undefined8 *)((long)dVar33 + 0xa8);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_02681b9c(uVar19,0,0);
          dVar33 = *in_stack_00000060;
          if (dVar33 == 0.0) goto LAB_00e443fc;
          if ((uVar14 & 1) == 0) {
            uVar19 = *(undefined8 *)((long)dVar33 + 0xb0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_02681b9c(uVar19,0,0);
            dVar33 = DAT_028aa048;
            if ((uVar14 & 1) == 0) {
              if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
              uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
              if (*(int *)(*(long *)
                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                          0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_02681b9c(uVar19,0,0);
              lVar16 = *unaff_x24;
              if ((uVar10 & 1) == 0) {
                fVar29 = *(float *)((long)unaff_x19 + 0x8c);
                fVar35 = *(float *)(unaff_x19 + 0x12);
                fVar36 = *(float *)((long)unaff_x19 + 0x94);
                fVar39 = *(float *)(unaff_x19 + 0x13);
                fVar37 = fVar29;
                if (1.0 < fVar29) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar29 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar29 = fVar35;
                if (1.0 < fVar35) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar35 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fd48;
                  }
                  fVar35 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                fVar29 = fVar36;
                if (1.0 < fVar36) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar36 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar36 = fVar39;
                if (1.0 < fVar39) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar39 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar36 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar16 + uVar25 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar39 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
                fVar37 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40610;
                  }
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = fVar29;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar29 = fVar39;
                if (1.0 < fVar39) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar39 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar39 = fVar35;
                if (1.0 < fVar35) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar35 < 0.0) {
                  fVar39 = unaff_s8;
                }
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
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
                *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar39 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
                fVar37 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40e20;
                  }
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = fVar29;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar29 = fVar39;
                if (1.0 < fVar39) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar39 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar39 = fVar35;
                if (1.0 < fVar35) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar35 < 0.0) {
                  fVar39 = unaff_s8;
                }
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
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                fVar37 = *(float *)((long)unaff_x19 + 0x8c);
                fVar29 = *(float *)(unaff_x19 + 0x12);
                lVar16 = unaff_x19[0x5f];
                fVar39 = *(float *)((long)unaff_x19 + 0x94);
                fVar35 = *(float *)(unaff_x19 + 0x13);
              }
              else {
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar28 + 0x18);
                fVar35 = *(float *)(lVar28 + 0x1c);
                fVar36 = *(float *)(lVar28 + 0x20);
                fVar39 = *(float *)(lVar28 + 0x24);
                fVar37 = fVar29;
                if (1.0 < fVar29) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar29 < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar29 = fVar35;
                if (1.0 < fVar35) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar35 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3fcc4;
                  }
                  fVar35 = (float)(int)(fVar29 + 0.5);
                }
                else if (dVar33 == -0.5) {
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
                fVar29 = fVar36;
                if (1.0 < fVar36) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar36 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar36 = fVar39;
                if (1.0 < fVar39) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar39 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar36 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar36 + -0.5);
                }
                if (lVar16 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar16 + uVar25 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar16 + 0x1c);
                lVar28 = *unaff_x24;
                fVar39 = *(float *)(lVar16 + 0x20);
                fVar35 = *(float *)(lVar16 + 0x24);
                fVar37 = *(float *)(lVar16 + 0x18) * 255.0;
                if (*(float *)(lVar16 + 0x18) < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e4057c;
                  }
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = fVar29;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar29 = fVar39;
                if (1.0 < fVar39) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar39 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar39 = fVar35;
                if (1.0 < fVar35) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar35 < 0.0) {
                  fVar39 = unaff_s8;
                }
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
                if (lVar28 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar28 + 0x18) <= uVar26) goto LAB_00e44400;
                *(uint *)(lVar28 + (long)(int)uVar26 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
                goto LAB_00e443fc;
                fVar29 = *(float *)(lVar16 + 0x1c);
                lVar28 = *unaff_x24;
                fVar39 = *(float *)(lVar16 + 0x20);
                fVar35 = *(float *)(lVar16 + 0x24);
                fVar37 = *(float *)(lVar16 + 0x18) * 255.0;
                if (*(float *)(lVar16 + 0x18) < 0.0) {
                  fVar37 = unaff_s8;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar36 = fVar29;
                if (1.0 < fVar29) {
                  fVar36 = 1.0;
                }
                fVar36 = fVar36 * 255.0;
                if (fVar29 < 0.0) {
                  fVar36 = unaff_s8;
                }
                dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
                if (0.0 <= fVar36) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e40d8c;
                  }
                  fVar36 = (float)(int)(fVar36 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                  fVar36 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar36 = fVar29;
                  }
                }
                else {
                  fVar36 = (float)(int)(fVar36 + -0.5);
                }
                fVar29 = fVar39;
                if (1.0 < fVar39) {
                  fVar29 = 1.0;
                }
                fVar29 = fVar29 * 255.0;
                if (fVar39 < 0.0) {
                  fVar29 = unaff_s8;
                }
                dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                if (0.0 <= fVar29) {
                  if (dVar33 == 0.5) {
                    fVar29 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar29 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar29 = (float)(int)(fVar29 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + -0.5);
                }
                fVar39 = fVar35;
                if (1.0 < fVar35) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar35 < 0.0) {
                  fVar39 = unaff_s8;
                }
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
                if (lVar28 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_00e44400;
                *(uint *)(lVar28 + (long)(int)uVar23 * 4 + 0x20) =
                     (int)fVar37 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                     ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                if ((*in_stack_00000060 == 0.0) ||
                   (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0))
                goto LAB_00e443fc;
                fVar37 = *(float *)(lVar28 + 0x18);
                fVar29 = *(float *)(lVar28 + 0x1c);
                lVar16 = *unaff_x24;
                fVar39 = *(float *)(lVar28 + 0x20);
                fVar35 = *(float *)(lVar28 + 0x24);
              }
              fVar36 = fVar37 * 255.0;
              if (fVar37 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar36 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar36 + -0.5);
              }
              fVar36 = fVar29;
              if (1.0 < fVar29) {
                fVar36 = 1.0;
              }
              fVar36 = fVar36 * 255.0;
              if (fVar29 < 0.0) {
                fVar36 = unaff_s8;
              }
              dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
              if (0.0 <= fVar36) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e412dc;
                }
                fVar36 = (float)(int)(fVar36 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar36 + -0.5);
              }
              fVar29 = fVar39;
              if (1.0 < fVar39) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar39 < 0.0) {
                fVar29 = unaff_s8;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar29 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar29 = (float)(int)(fVar29 + -0.5);
              }
              uVar10 = 0x3f800000;
              fVar39 = fVar35;
              if (1.0 < fVar35) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar35 < 0.0) {
                fVar39 = unaff_s8;
              }
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
              if (lVar16 != 0) {
                if (uVar22 < *(uint *)(lVar16 + 0x18)) {
                  *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                       (int)fVar37 & 0xffU | ((int)fVar36 & 0xffU) << 8 |
                       ((int)fVar29 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                  goto LAB_00e43400;
                }
                goto LAB_00e44400;
              }
              goto LAB_00e443fc;
            }
            lVar16 = *unaff_x24;
            dVar32 = modf(DAT_028aa048,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = 255.0;
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
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar39 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
            *(uint *)(lVar16 + uVar25 * 4 + 0x20) =
                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = 255.0;
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
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar39 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = 255.0;
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
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar39 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = 255.0;
            }
            dVar32 = modf(dVar33,(double *)&stack0x00000070);
            if (dVar32 == 0.5) {
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar29 = 255.0;
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
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar39 = 255.0;
            }
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar39 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_02681b9c(uVar19,0,0);
            if ((uVar14 & 1) == 0) goto LAB_00e43400;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + uVar25 * 4 + 0x20);
            uVar3 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar39 = *(float *)(lVar16 + 0x20);
            fVar35 = *(float *)(lVar16 + 0x24);
            fVar37 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e3ede4;
              }
              fVar29 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar37 = -1.0;
LAB_00e3ede4:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar29 = (float)(int)(fVar37 + -0.5);
            }
            fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
            fVar37 = fVar36 * 255.0;
            if (fVar36 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            fVar36 = fVar39;
            if (1.0 < fVar39) {
              fVar36 = 1.0;
            }
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            fVar36 = fVar36 * 255.0;
            if (fVar39 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ffb0;
              }
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar39;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar35;
            if (1.0 < fVar35) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            if (fVar35 < 0.0) {
              fVar39 = unaff_s8;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e40174;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e40174:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar39 = (float)(int)(fVar39 + -0.5);
            }
            *puVar21 = (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar36 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20);
            uVar3 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar39 = *(float *)(lVar16 + 0x20);
            fVar35 = *(float *)(lVar16 + 0x24);
            fVar37 = fVar29 * 255.0;
            if (fVar29 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e404dc;
              }
              fVar29 = (float)(int)(fVar37 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar37 = -1.0;
LAB_00e404dc:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar29 = (float)(int)(fVar37 + -0.5);
            }
            fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
            fVar37 = fVar36 * 255.0;
            if (fVar36 < 0.0) {
              fVar37 = unaff_s8;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            fVar36 = fVar39;
            if (1.0 < fVar39) {
              fVar36 = 1.0;
            }
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            fVar36 = fVar36 * 255.0;
            if (fVar39 < 0.0) {
              fVar36 = unaff_s8;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e40888;
              }
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar39;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar35;
            if (1.0 < fVar35) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            if (fVar35 < 0.0) {
              fVar39 = unaff_s8;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e40a4c;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e40a4c:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar39 = (float)(int)(fVar39 + -0.5);
            }
            *puVar21 = (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar36 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + (long)(int)uVar23 * 4;
          }
          else {
            lVar16 = *(long *)((long)dVar33 + 0xa8);
            if (lVar16 == 0) goto LAB_00e443fc;
            fVar37 = *(float *)(lVar16 + 0x24);
            if (fVar37 != 0.0) {
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            plVar27 = (long *)StringLiteral_9119;
            cVar5 = *(char *)(lVar16 + 0x2c);
            lVar17 = *unaff_x24;
            lVar28 = *(long *)(lVar16 + 0x18);
            fVar37 = fStack0000000000000048 * fVar37;
            if (*(int *)(lVar16 + 0x28) == 1) {
              if (cVar5 == '\0') {
                if (lVar28 == 0) goto LAB_00e443fc;
                fVar39 = *(float *)(lVar16 + 0x20);
                fVar36 = *(float *)((long)dVar33 + 0x84);
                fVar37 = fVar37 + (*(float *)((long)dVar33 + 0x48) * fVar39) / fVar36;
                fVar37 = fVar37 - (float)(int)fVar37;
                fVar35 = fVar37;
                if (1.0 < fVar37) {
                  fVar35 = fVar29;
                }
                fVar30 = fVar35;
                if (fVar37 < 0.0) {
                  fVar30 = 0.0;
                }
                fVar30 = (float)FUN_0269ad38(fVar30,lVar28,0);
                fVar37 = fVar30;
                if (1.0 < fVar30) {
                  fVar37 = fVar29;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar30 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3eeac;
                  }
                  fVar29 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar37;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar37 + -0.5);
                }
                fVar37 = fVar35;
                if (1.0 < fVar35) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar35 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e41534;
                  }
                  fVar35 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar37;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar37 + -0.5);
                }
                fVar37 = fVar39;
                if (1.0 < fVar39) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar39 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar39 = fVar36;
                if (1.0 < fVar36) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar36 < 0.0) {
                  fVar39 = 0.0;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar39 + -0.5);
                }
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar17 + uVar25 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                dVar33 = *in_stack_00000060;
                if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                   (lVar28 = *(long *)(lVar16 + 0x18), lVar28 == 0)) goto LAB_00e443fc;
                fVar35 = *(float *)((long)dVar33 + 0x48);
                fVar39 = *(float *)((long)dVar33 + 0x84);
                lVar17 = *unaff_x24;
                fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                         (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
                fVar29 = fVar29 - (float)(int)fVar29;
                fVar37 = fVar29;
                if (1.0 < fVar29) {
                  fVar37 = 1.0;
                }
              }
              else {
                if (lVar28 == 0) goto LAB_00e443fc;
                fVar39 = *(float *)((long)dVar33 + 0x84);
                fVar36 = *(float *)(lVar16 + 0x20);
                fVar37 = fVar37 + ((*(float *)((long)dVar33 + 0x48) + fVar39) * fVar36) / fVar39;
                fVar37 = fVar37 - (float)(int)fVar37;
                fVar35 = fVar37;
                if (1.0 < fVar37) {
                  fVar35 = fVar29;
                }
                fVar30 = fVar35;
                if (fVar37 < 0.0) {
                  fVar30 = 0.0;
                }
                fVar30 = (float)FUN_0269ad38(fVar30,lVar28,0);
                fVar37 = fVar30;
                if (1.0 < fVar30) {
                  fVar37 = fVar29;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar30 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3ed6c;
                  }
                  fVar29 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                  fVar29 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar29 = fVar37;
                  }
                }
                else {
                  fVar29 = (float)(int)(fVar37 + -0.5);
                }
                fVar37 = fVar35;
                if (1.0 < fVar35) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar35 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                    goto LAB_00e3f2ec;
                  }
                  fVar35 = (float)(int)(fVar37 + 0.5);
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = fVar37;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar37 + -0.5);
                }
                fVar37 = fVar39;
                if (1.0 < fVar39) {
                  fVar37 = 1.0;
                }
                fVar37 = fVar37 * 255.0;
                if (fVar39 < 0.0) {
                  fVar37 = 0.0;
                }
                dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                if (0.0 <= fVar37) {
                  if (dVar33 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar37 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + -0.5);
                }
                fVar39 = fVar36;
                if (1.0 < fVar36) {
                  fVar39 = 1.0;
                }
                fVar39 = fVar39 * 255.0;
                if (fVar36 < 0.0) {
                  fVar39 = 0.0;
                }
                dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
                if (0.0 <= fVar39) {
                  if (dVar33 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + 0.5);
                  }
                }
                else if (dVar33 == -0.5) {
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = (float)_fStack0000000000000070 + -1.0;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar39 + -0.5);
                }
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_00e44400;
                *(uint *)(lVar17 + uVar25 * 4 + 0x20) =
                     (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar37 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                dVar33 = *in_stack_00000060;
                if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                   (lVar28 = *(long *)(lVar16 + 0x18), lVar28 == 0)) goto LAB_00e443fc;
                fVar35 = *(float *)((long)dVar33 + 0x84);
                fVar39 = *(float *)(lVar16 + 0x20);
                lVar17 = *unaff_x24;
                fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                         ((*(float *)((long)dVar33 + 0x48) + fVar35) * fVar39) / fVar35;
                fVar29 = fVar29 - (float)(int)fVar29;
                fVar37 = fVar29;
                if (1.0 < fVar29) {
                  fVar37 = 1.0;
                }
              }
              fVar36 = fVar37;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              fVar36 = (float)FUN_0269ad38(fVar36,lVar28,0);
              fVar29 = fVar36;
              if (1.0 < fVar36) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e419a4;
                }
                fVar36 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar37 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41a34;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar37;
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
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar35 = fVar39;
              if (1.0 < fVar39) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar39 < 0.0) {
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
              if (lVar17 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar17 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar17 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                 (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar33 + 0x48);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar37 = fVar29;
              if (1.0 < fVar29) {
                fVar37 = 1.0;
              }
              fVar36 = fVar37;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18),0);
              fVar29 = fVar36;
              if (1.0 < fVar36) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41cd0;
                }
                fVar36 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar37 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41d60;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar37;
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
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar35 = fVar39;
              if (1.0 < fVar39) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar39 < 0.0) {
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
              if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar28 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                 (*(long *)(lVar16 + 0x18) == 0)) goto LAB_00e443fc;
              fVar35 = *(float *)((long)dVar33 + 0x48);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar37 = fVar29;
              if (1.0 < fVar29) {
                fVar37 = 1.0;
              }
              fVar36 = fVar37;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18),0);
              fVar29 = fVar36;
              if (1.0 < fVar36) {
                fVar29 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar29 = fVar29 * 255.0;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41ffc;
                }
                fVar36 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar37 < 0.0) {
                fVar29 = 0.0;
              }
LAB_00e42040:
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (fVar29 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
              if (dVar33 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                fVar29 = fVar37 + 1.0;
                goto LAB_00e425d4;
              }
              fVar37 = (float)(int)(fVar29 + 0.5);
            }
            else {
              lVar18 = *in_stack_00000038;
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar28 == 0) goto LAB_00e443fc;
              fVar39 = *(float *)(lVar18 + uVar25 * 0xc + 0x20);
              fVar36 = *(float *)((long)dVar33 + 0x84);
              fVar37 = fVar37 + (fVar39 * *(float *)(lVar16 + 0x20)) / fVar36;
              fVar37 = fVar37 - (float)(int)fVar37;
              fVar35 = fVar37;
              if (1.0 < fVar37) {
                fVar35 = fVar29;
              }
              fVar30 = fVar35;
              if (fVar37 < 0.0) {
                fVar30 = 0.0;
              }
              fVar30 = (float)FUN_0269ad38(fVar30,lVar28,0);
              fVar37 = fVar30;
              if (1.0 < fVar30) {
                fVar37 = fVar29;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar30 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3e0b0;
                }
                fVar29 = (float)(int)(fVar37 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar37;
                }
              }
              else {
                fVar29 = (float)(int)(fVar37 + -0.5);
              }
              fVar37 = fVar35;
              if (1.0 < fVar35) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar35 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ee80;
                }
                fVar35 = (float)(int)(fVar37 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = fVar37;
                }
              }
              else {
                fVar35 = (float)(int)(fVar37 + -0.5);
              }
              fVar37 = fVar39;
              if (1.0 < fVar39) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar39 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar39 = fVar36;
              if (1.0 < fVar36) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar36 < 0.0) {
                fVar39 = 0.0;
              }
              dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar33 == 0.5) {
                  fVar39 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar39 = (float)(int)(fVar39 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              if (lVar17 == 0) goto LAB_00e443fc;
              fVar36 = 1.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_00e44400;
              *(uint *)(lVar17 + uVar25 * 4 + 0x20) =
                   (int)fVar29 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10
                   | (int)fVar39 << 0x18;
              plVar27 = (long *)StringLiteral_9119;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              lVar18 = *unaff_x24;
              lVar17 = *(long *)(lVar16 + 0x18);
              fVar37 = fStack0000000000000048 * *(float *)(lVar16 + 0x24);
              if (cVar5 != '\0') {
                if (uVar26 < *(uint *)(lVar28 + 0x18)) {
                  if (lVar17 != 0) {
                    fVar35 = *(float *)(lVar28 + (long)(int)uVar26 * 0xc + 0x20);
                    fVar39 = *(float *)((long)dVar33 + 0x84);
                    fVar37 = fVar37 + (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
                    fVar37 = fVar37 - (float)(int)fVar37;
                    fVar29 = fVar37;
                    if (1.0 < fVar37) {
                      fVar29 = fVar36;
                    }
                    fVar30 = fVar29;
                    if (fVar37 < 0.0) {
                      fVar30 = 0.0;
                    }
                    fVar30 = (float)FUN_0269ad38(fVar30,lVar17,0);
                    fVar37 = fVar30;
                    if (1.0 < fVar30) {
                      fVar37 = fVar36;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar30 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar33 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f234;
                      }
                      fVar36 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar33 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                      fVar36 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar36 = fVar37;
                      }
                    }
                    else {
                      fVar36 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar37 = fVar29;
                    if (1.0 < fVar29) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar29 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar33 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3f594;
                      }
                      fVar29 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar33 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                      fVar29 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar29 = fVar37;
                      }
                    }
                    else {
                      fVar29 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar37 = fVar35;
                    if (1.0 < fVar35) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    if (fVar35 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar33 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                    }
                    else if (dVar33 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar37 + -0.5);
                    }
                    fVar35 = fVar39;
                    if (1.0 < fVar39) {
                      fVar35 = 1.0;
                    }
                    fVar35 = fVar35 * 255.0;
                    if (fVar39 < 0.0) {
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
                    if (lVar18 != 0) {
                      if (uVar26 < *(uint *)(lVar18 + 0x18)) {
                        *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                             (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                        dVar33 = *in_stack_00000060;
                        if (((dVar33 != 0.0) &&
                            (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 != 0)) &&
                           (lVar28 = *in_stack_00000038, lVar28 != 0)) {
                          if (uVar23 < *(uint *)(lVar28 + 0x18)) {
                            if (*(long *)(lVar16 + 0x18) != 0) {
                              fVar35 = *(float *)(lVar28 + (long)(int)uVar23 * 0xc + 0x20);
                              fVar39 = *(float *)((long)dVar33 + 0x84);
                              lVar28 = *unaff_x24;
                              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
                              fVar29 = fVar29 - (float)(int)fVar29;
                              fVar37 = fVar29;
                              if (1.0 < fVar29) {
                                fVar37 = 1.0;
                              }
                              fVar36 = fVar37;
                              if (fVar29 < 0.0) {
                                fVar36 = 0.0;
                              }
                              fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18),0);
                              fVar29 = fVar36;
                              if (1.0 < fVar36) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar36 < 0.0) {
                                fVar29 = 0.0;
                              }
                              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar33 == 0.5) {
                                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f858;
                                }
                                fVar36 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar33 == -0.5) {
                                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                fVar36 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar36 = fVar29;
                                }
                              }
                              else {
                                fVar36 = (float)(int)(fVar29 + -0.5);
                              }
                              fVar29 = fVar37;
                              if (1.0 < fVar37) {
                                fVar29 = 1.0;
                              }
                              fVar29 = fVar29 * 255.0;
                              if (fVar37 < 0.0) {
                                fVar29 = 0.0;
                              }
                              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                              if (0.0 <= fVar29) {
                                if (dVar33 == 0.5) {
                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f8e8;
                                }
                                fVar29 = (float)(int)(fVar29 + 0.5);
                              }
                              else if (dVar33 == -0.5) {
                                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                fVar29 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar29 = fVar37;
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
                                fVar37 = 0.0;
                              }
                              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
                              if (0.0 <= fVar37) {
                                if (dVar33 == 0.5) {
                                  fVar37 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar37 = (float)(int)(fVar37 + 0.5);
                                }
                              }
                              else if (dVar33 == -0.5) {
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + -0.5);
                              }
                              fVar35 = fVar39;
                              if (1.0 < fVar39) {
                                fVar35 = 1.0;
                              }
                              fVar35 = fVar35 * 255.0;
                              if (fVar39 < 0.0) {
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
                                if (uVar23 < *(uint *)(lVar28 + 0x18)) {
                                  *(uint *)(lVar28 + (long)(int)uVar23 * 4 + 0x20) =
                                       (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 |
                                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                                  dVar33 = *in_stack_00000060;
                                  if (((dVar33 != 0.0) &&
                                      (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 != 0)) &&
                                     (lVar28 = *in_stack_00000038, lVar28 != 0)) {
                                    if (uVar22 < *(uint *)(lVar28 + 0x18)) {
                                      if (*(long *)(lVar16 + 0x18) != 0) {
                                        fVar35 = *(float *)(lVar28 + in_stack_00000058 * 0xc + 0x20)
                                        ;
                                        fVar39 = *(float *)((long)dVar33 + 0x84);
                                        lVar28 = *unaff_x24;
                                        fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24)
                                                 + (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
                                        fVar29 = fVar29 - (float)(int)fVar29;
                                        fVar37 = fVar29;
                                        if (1.0 < fVar29) {
                                          fVar37 = 1.0;
                                        }
                                        fVar36 = fVar37;
                                        if (fVar29 < 0.0) {
                                          fVar36 = 0.0;
                                        }
                                        fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18)
                                                                     ,0);
                                        fVar29 = fVar36;
                                        if (1.0 < fVar36) {
                                          fVar29 = 1.0;
                                        }
                                        uVar10 = 0x437f0000;
                                        fVar29 = fVar29 * 255.0;
                                        if (fVar36 < 0.0) {
                                          fVar29 = 0.0;
                                        }
                                        dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
                                        if (0.0 <= fVar29) {
                                          if (dVar33 == 0.5) {
                                            fVar29 = (float)_fStack0000000000000070 + 1.0;
                                            goto LAB_00e3fbd0;
                                          }
                                          fVar36 = (float)(int)(fVar29 + 0.5);
                                        }
                                        else if (dVar33 == -0.5) {
                                          fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                          fVar36 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar36 = fVar29;
                                          }
                                        }
                                        else {
                                          fVar36 = (float)(int)(fVar29 + -0.5);
                                        }
                                        fVar29 = fVar37;
                                        if (1.0 < fVar37) {
                                          fVar29 = 1.0;
                                        }
                                        fVar29 = fVar29 * 255.0;
                                        if (fVar37 < 0.0) {
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
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (lVar17 == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar25 * 0xc + 0x20);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              fVar37 = fVar37 + (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
              fVar37 = fVar37 - (float)(int)fVar37;
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = fVar36;
              }
              fVar30 = fVar29;
              if (fVar37 < 0.0) {
                fVar30 = 0.0;
              }
              fVar30 = (float)FUN_0269ad38(fVar30,lVar17,0);
              fVar37 = fVar30;
              if (1.0 < fVar30) {
                fVar37 = fVar36;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar30 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f25c;
                }
                fVar36 = (float)(int)(fVar37 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar37;
                }
              }
              else {
                fVar36 = (float)(int)(fVar37 + -0.5);
              }
              fVar37 = fVar29;
              if (1.0 < fVar29) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar29 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e415c4;
                }
                fVar29 = (float)(int)(fVar37 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar37;
                }
              }
              else {
                fVar29 = (float)(int)(fVar37 + -0.5);
              }
              fVar37 = fVar35;
              if (1.0 < fVar35) {
                fVar37 = 1.0;
              }
              fVar37 = fVar37 * 255.0;
              if (fVar35 < 0.0) {
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar35 = fVar39;
              if (1.0 < fVar39) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar39 < 0.0) {
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
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar26) goto LAB_00e44400;
              *(uint *)(lVar18 + (long)(int)uVar26 * 4 + 0x20) =
                   (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar25 * 0xc + 0x20);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar37 = fVar29;
              if (1.0 < fVar29) {
                fVar37 = 1.0;
              }
              fVar36 = fVar37;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18),0);
              fVar29 = fVar36;
              if (1.0 < fVar36) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e421fc;
                }
                fVar36 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar37 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4228c;
                }
                fVar29 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                fVar29 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar29 = fVar37;
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
                fVar37 = 0.0;
              }
              dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
              if (0.0 <= fVar37) {
                if (dVar33 == 0.5) {
                  fVar37 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar37 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar37 = (float)(int)(fVar37 + 0.5);
                }
              }
              else if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + -0.5);
              }
              fVar35 = fVar39;
              if (1.0 < fVar39) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar39 < 0.0) {
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
              if (*(uint *)(lVar28 + 0x18) <= uVar23) goto LAB_00e44400;
              *(uint *)(lVar28 + (long)(int)uVar23 * 4 + 0x20) =
                   (int)fVar36 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar37 & 0xffU) << 0x10
                   | (int)fVar35 << 0x18;
              dVar33 = *in_stack_00000060;
              if (((dVar33 == 0.0) || (lVar16 = *(long *)((long)dVar33 + 0xa8), lVar16 == 0)) ||
                 (lVar28 = *in_stack_00000038, lVar28 == 0)) goto LAB_00e443fc;
              if (*(uint *)(lVar28 + 0x18) <= uVar4) goto LAB_00e44400;
              if (*(long *)(lVar16 + 0x18) == 0) goto LAB_00e443fc;
              fVar35 = *(float *)(lVar28 + uVar25 * 0xc + 0x20);
              fVar39 = *(float *)((long)dVar33 + 0x84);
              lVar28 = *unaff_x24;
              fVar29 = fStack0000000000000048 * *(float *)(lVar16 + 0x24) +
                       (fVar35 * *(float *)(lVar16 + 0x20)) / fVar39;
              fVar29 = fVar29 - (float)(int)fVar29;
              fVar37 = fVar29;
              if (1.0 < fVar29) {
                fVar37 = 1.0;
              }
              fVar36 = fVar37;
              if (fVar29 < 0.0) {
                fVar36 = 0.0;
              }
              fVar36 = (float)FUN_0269ad38(fVar36,*(long *)(lVar16 + 0x18),0);
              fVar29 = fVar36;
              if (1.0 < fVar36) {
                fVar29 = 1.0;
              }
              uVar10 = 0x437f0000;
              fVar29 = fVar29 * 255.0;
              if (fVar36 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) {
                if (dVar33 == 0.5) {
                  fVar29 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e42560;
                }
                fVar36 = (float)(int)(fVar29 + 0.5);
              }
              else if (dVar33 == -0.5) {
                fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                fVar36 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar36 = fVar29;
                }
              }
              else {
                fVar36 = (float)(int)(fVar29 + -0.5);
              }
              fVar29 = fVar37;
              if (1.0 < fVar37) {
                fVar29 = 1.0;
              }
              fVar29 = fVar29 * 255.0;
              if (fVar37 < 0.0) {
                fVar29 = 0.0;
              }
              dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
              if (0.0 <= fVar29) goto LAB_00e425b8;
LAB_00e4204c:
              if (dVar33 == -0.5) {
                fVar37 = (float)_fStack0000000000000070;
                fVar29 = fVar37 + -1.0;
LAB_00e425d4:
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = fVar29;
                }
              }
              else {
                fVar37 = (float)(int)(fVar29 + -0.5);
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
            dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar33 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42654;
              }
              fVar35 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar33 == -0.5) {
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
            fVar29 = fVar39;
            if (1.0 < fVar39) {
              fVar29 = 1.0;
            }
            fVar29 = fVar29 * 255.0;
            if (fVar39 < 0.0) {
              fVar29 = 0.0;
            }
            dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar33 == 0.5) {
                fVar29 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e426e4;
              }
              fVar39 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar29 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = fVar29;
              }
            }
            else {
              fVar39 = (float)(int)(fVar29 + -0.5);
            }
            if (lVar28 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar28 + 0x18) <= uVar22) goto LAB_00e44400;
            *(uint *)(lVar28 + in_stack_00000058 * 4 + 0x20) =
                 (int)fVar36 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar39 << 0x18;
            if (*in_stack_00000060 == 0.0) goto LAB_00e443fc;
            uVar19 = *(undefined8 *)((long)*in_stack_00000060 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_02681b9c(uVar19,0,0);
            if ((uVar14 & 1) == 0) goto LAB_00e43400;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + uVar25 * 4 + 0x20);
            uVar3 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar37 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar39 = *(float *)(lVar16 + 0x20);
            fVar35 = *(float *)(lVar16 + 0x24);
            fVar29 = fVar37 * 255.0;
            if (fVar37 < 0.0) {
              fVar29 = 0.0;
            }
            dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar33 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e4287c;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar37 = -1.0;
LAB_00e4287c:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar37 = fVar36 * 255.0;
            fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
            if (fVar36 < 0.0) {
              fVar37 = 0.0;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            fVar36 = fVar39;
            if (1.0 < fVar39) {
              fVar36 = 1.0;
            }
            fVar36 = fVar36 * 255.0;
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            if (fVar39 < 0.0) {
              fVar36 = 0.0;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e429c8;
              }
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar39;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar35;
            if (1.0 < fVar35) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            if (fVar35 < 0.0) {
              fVar39 = 0.0;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e42a44;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e42a44:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar39 = (float)(int)(fVar39 + -0.5);
            }
            *puVar21 = (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar36 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
            puVar21 = (uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20);
            uVar3 = *puVar21;
            if ((*in_stack_00000060 == 0.0) ||
               (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0))
            goto LAB_00e443fc;
            fVar37 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar16 + 0x18);
            fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
            fVar39 = *(float *)(lVar16 + 0x20);
            fVar35 = *(float *)(lVar16 + 0x24);
            fVar29 = fVar37 * 255.0;
            if (fVar37 < 0.0) {
              fVar29 = 0.0;
            }
            dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
            if (0.0 <= fVar29) {
              if (dVar33 == 0.5) {
                fVar37 = 1.0;
                goto LAB_00e42b80;
              }
              fVar29 = (float)(int)(fVar29 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar37 = -1.0;
LAB_00e42b80:
              fVar29 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar29 = (float)_fStack0000000000000070 + fVar37;
              }
            }
            else {
              fVar29 = (float)(int)(fVar29 + -0.5);
            }
            fVar37 = fVar36 * 255.0;
            fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
            if (fVar36 < 0.0) {
              fVar37 = 0.0;
            }
            dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
            if (0.0 <= fVar37) {
              if (dVar33 == 0.5) {
                fVar37 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar37 = (float)(int)(fVar37 + 0.5);
              }
            }
            else if (dVar33 == -0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + -0.5);
            }
            fVar36 = fVar39;
            if (1.0 < fVar39) {
              fVar36 = 1.0;
            }
            fVar36 = fVar36 * 255.0;
            fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
            if (fVar39 < 0.0) {
              fVar36 = 0.0;
            }
            dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
            if (0.0 <= fVar36) {
              if (dVar33 == 0.5) {
                fVar39 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42ccc;
              }
              fVar36 = (float)(int)(fVar36 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
              fVar36 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar36 = fVar39;
              }
            }
            else {
              fVar36 = (float)(int)(fVar36 + -0.5);
            }
            fVar39 = fVar35;
            if (1.0 < fVar35) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            if (fVar35 < 0.0) {
              fVar39 = 0.0;
            }
            dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar33 == 0.5) {
                fVar35 = 1.0;
                goto LAB_00e42d48;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar33 == -0.5) {
              fVar35 = -1.0;
LAB_00e42d48:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = (float)_fStack0000000000000070 + fVar35;
              }
            }
            else {
              fVar39 = (float)(int)(fVar39 + -0.5);
            }
            *puVar21 = (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                       ((int)fVar36 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
            lVar16 = *unaff_x24;
            if (lVar16 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
            lVar16 = lVar16 + (long)(int)uVar23 * 4;
          }
          uVar3 = *(uint *)(lVar16 + 0x20);
          if ((*in_stack_00000060 == 0.0) ||
             (lVar28 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar28 == 0)) goto LAB_00e443fc;
          fVar29 = ((float)(uVar3 & 0xff) / 255.0) * *(float *)(lVar28 + 0x18);
          fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar28 + 0x1c);
          fVar39 = *(float *)(lVar28 + 0x20);
          fVar35 = *(float *)(lVar28 + 0x24);
          fVar37 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar33 == 0.5) {
              fVar37 = 1.0;
              goto FUN_00e42e84;
            }
            fVar29 = (float)(int)(fVar37 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar37 = -1.0;
FUN_00e42e84:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar29 = (float)(int)(fVar37 + -0.5);
          }
          fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
          fVar37 = fVar36 * 255.0;
          if (fVar36 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar33 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
          }
          else if (dVar33 == -0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar37 = (float)(int)(fVar37 + -0.5);
          }
          fVar36 = fVar39;
          if (1.0 < fVar39) {
            fVar36 = 1.0;
          }
          fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
          fVar36 = fVar36 * 255.0;
          if (fVar39 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42fd0;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar39;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar39 = fVar35;
          if (1.0 < fVar35) {
            fVar39 = 1.0;
          }
          fVar39 = fVar39 * 255.0;
          if (fVar35 < 0.0) {
            fVar39 = unaff_s8;
          }
          dVar33 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar33 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e4304c;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar35 = -1.0;
LAB_00e4304c:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          *(uint *)(lVar16 + 0x20) =
               (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 | ((int)fVar36 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
          lVar16 = *unaff_x24;
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          puVar21 = (uint *)(lVar16 + in_stack_00000058 * 4 + 0x20);
          uVar3 = *puVar21;
          if ((*in_stack_00000060 == 0.0) ||
             (lVar16 = *(long *)((long)*in_stack_00000060 + 0xa0), lVar16 == 0)) goto LAB_00e443fc;
          fVar29 = (float)(uVar3 & 0xff) / 255.0;
          uVar10 = (ulong)(uint)fVar29;
          fVar29 = fVar29 * *(float *)(lVar16 + 0x18);
          fVar36 = ((float)(uVar3 >> 8 & 0xff) / 255.0) * *(float *)(lVar16 + 0x1c);
          fVar39 = *(float *)(lVar16 + 0x20);
          fVar35 = *(float *)(lVar16 + 0x24);
          fVar37 = fVar29 * 255.0;
          if (fVar29 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar33 == 0.5) {
              fVar37 = 1.0;
              goto LAB_00e4318c;
            }
            fVar29 = (float)(int)(fVar37 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar37 = -1.0;
LAB_00e4318c:
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + fVar37;
            }
          }
          else {
            fVar29 = (float)(int)(fVar37 + -0.5);
          }
          fVar39 = ((float)(uVar3 >> 0x10 & 0xff) / 255.0) * fVar39;
          fVar37 = fVar36 * 255.0;
          if (fVar36 < 0.0) {
            fVar37 = unaff_s8;
          }
          dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
          if (0.0 <= fVar37) {
            if (dVar33 == 0.5) {
              fVar37 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar37 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar37 = (float)(int)(fVar37 + 0.5);
            }
          }
          else if (dVar33 == -0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar37 = (float)(int)(fVar37 + -0.5);
          }
          fVar36 = fVar39;
          if (1.0 < fVar39) {
            fVar36 = 1.0;
          }
          fVar35 = ((float)(uVar3 >> 0x18) / 255.0) * fVar35;
          fVar36 = fVar36 * 255.0;
          if (fVar39 < 0.0) {
            fVar36 = unaff_s8;
          }
          dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
          if (0.0 <= fVar36) {
            if (dVar33 == 0.5) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e432e0;
            }
            fVar36 = (float)(int)(fVar36 + 0.5);
          }
          else if (dVar33 == -0.5) {
            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
            fVar36 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar36 = fVar39;
            }
          }
          else {
            fVar36 = (float)(int)(fVar36 + -0.5);
          }
          fVar39 = fVar35;
          if (1.0 < fVar35) {
            fVar39 = 1.0;
          }
          fVar39 = fVar39 * 255.0;
          if (fVar35 < 0.0) {
            fVar39 = unaff_s8;
          }
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
          *puVar21 = (int)fVar29 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                     ((int)fVar36 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
          unaff_s15 = in_stack_00000008._4_4_;
        }
        else {
          if (*(long *)((long)dVar33 + 0x100) == 0) goto LAB_00e443fc;
          if (*(char *)(*(long *)((long)dVar33 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
          lVar16 = *unaff_x24;
          dVar33 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
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
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar39 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
          *(uint *)(lVar16 + uVar25 * 4 + 0x20) =
               (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
          lVar16 = *unaff_x24;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
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
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar39 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
          *(uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20) =
               (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
          lVar16 = *unaff_x24;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
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
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar39 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
          *(uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20) =
               (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
          lVar16 = *unaff_x24;
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar37 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar37 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar37 = 255.0;
          }
          dVar33 = modf(dVar32,(double *)&stack0x00000070);
          if (dVar33 == 0.5) {
            fVar29 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar29 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar29 = 255.0;
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
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar39 = 255.0;
          }
          if (lVar16 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
          *(uint *)(lVar16 + in_stack_00000058 * 4 + 0x20) =
               (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
               (int)fVar39 << 0x18;
        }
LAB_00e43400:
        lVar16 = *unaff_x24;
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
        lVar16 = lVar16 + uVar25 * 4;
        fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
        lVar16 = lVar16 + (long)(int)uVar26 * 4;
        fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
        lVar16 = lVar16 + (long)(int)uVar23 * 4;
        fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
        lVar16 = unaff_x19[0x5f];
        if (lVar16 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar16 + 0x18) <= uVar22) goto LAB_00e44400;
        lVar16 = lVar16 + in_stack_00000058 * 4;
        uVar14 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
        fVar37 = (float)NEON_ucvtf((uint)*(byte *)(lVar16 + 0x23));
        *(char *)(lVar16 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar37);
        uVar13 = FUN_00e3703c();
        unaff_x26 = in_stack_00000060;
      } while ((uVar13 & 1) != 0);
      lVar16 = *plVar27;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar16 = *plVar27;
      }
    } while (*(int *)(*(long *)(lVar16 + 0xb8) + 0x20) != 1);
    lVar16 = *unaff_x24;
    if (lVar16 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
    puVar21 = (uint *)(lVar16 + uVar25 * 4 + 0x20);
    uVar3 = *puVar21;
    fVar29 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
    fVar39 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
    fVar37 = fVar29;
    if (1.0 < fVar29) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * 255.0;
    if (fVar29 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar33 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar37 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar37 + -0.5);
    }
    fVar29 = fVar35;
    if (1.0 < fVar35) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar35 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar33 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar35 = fVar39;
    if (1.0 < fVar39) {
      fVar35 = 1.0;
    }
    fVar36 = (float)(uVar3 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar39 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43744;
      }
      fVar39 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
      fVar39 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar39 = fVar35;
      }
    }
    else {
      fVar39 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar36) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * 255.0;
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar36 + -0.5);
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar4) goto LAB_00e44400;
    *puVar21 = (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
    lVar16 = *in_stack_00000030;
    if (lVar16 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
    puVar21 = (uint *)(lVar16 + (long)(int)uVar26 * 4 + 0x20);
    uVar4 = *puVar21;
    fVar29 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    fVar39 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar37 = fVar29;
    if (1.0 < fVar29) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * 255.0;
    if (fVar29 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar33 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar37 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar37 + -0.5);
    }
    unaff_w23 = 255.0;
    fVar29 = fVar35;
    if (1.0 < fVar35) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar35 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar33 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar35 = fVar39;
    if (1.0 < fVar39) {
      fVar35 = 1.0;
    }
    fVar36 = (float)(uVar4 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar39 < 0.0) {
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
    if (1.0 < fVar36) {
      fVar36 = 1.0;
    }
    fVar36 = fVar36 * 255.0;
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar36 + -0.5);
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_00e44400;
    *puVar21 = (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
    lVar16 = *in_stack_00000030;
    if (lVar16 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
    puVar21 = (uint *)(lVar16 + (long)(int)uVar23 * 4 + 0x20);
    uVar4 = *puVar21;
    fVar29 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    fVar35 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    fVar39 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar37 = fVar29;
    if (1.0 < fVar29) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * 255.0;
    if (fVar29 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar33 == 0.5) {
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar37 = (float)(int)(fVar37 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar37 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar37 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar37 = (float)(int)(fVar37 + -0.5);
    }
    fVar29 = fVar35;
    if (1.0 < fVar35) {
      fVar29 = 1.0;
    }
    fVar29 = fVar29 * 255.0;
    if (fVar35 < 0.0) {
      fVar29 = unaff_s8;
    }
    dVar33 = modf((double)fVar29,(double *)&stack0x00000070);
    if (0.0 <= fVar29) {
      if (dVar33 == 0.5) {
        fVar29 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar29 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar29 = (float)(int)(fVar29 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar29 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar29 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar29 = (float)(int)(fVar29 + -0.5);
    }
    fVar35 = fVar39;
    if (1.0 < fVar39) {
      fVar35 = 1.0;
    }
    fVar36 = (float)(uVar4 >> 0x18) / 255.0;
    fVar35 = fVar35 * 255.0;
    if (fVar39 < 0.0) {
      fVar35 = unaff_s8;
    }
    dVar33 = modf((double)fVar35,(double *)&stack0x00000070);
    if (0.0 <= fVar35) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070 + 1.0;
        goto LAB_00e43dbc;
      }
      fVar39 = (float)(int)(fVar35 + 0.5);
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
      fVar39 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar39 = fVar35;
      }
    }
    else {
      fVar39 = (float)(int)(fVar35 + -0.5);
    }
    if (1.0 < fVar36) {
      fVar36 = 1.0;
    }
    unaff_s9 = 255.0;
    fVar36 = fVar36 * 255.0;
    dVar33 = modf((double)fVar36,(double *)&stack0x00000070);
    if (0.0 <= fVar36) {
      if (dVar33 == 0.5) {
        fVar35 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar35 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        fVar35 = (float)(int)(fVar36 + 0.5);
      }
    }
    else if (dVar33 == -0.5) {
      fVar35 = (float)_fStack0000000000000070;
      if (((long)_fStack0000000000000070 & 1U) != 0) {
        fVar35 = (float)_fStack0000000000000070 + -1.0;
      }
    }
    else {
      fVar35 = (float)(int)(fVar36 + -0.5);
    }
    if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_00e44400;
    *puVar21 = (int)fVar37 & 0xffU | ((int)fVar29 & 0xffU) << 8 | ((int)fVar39 & 0xffU) << 0x10 |
               (int)fVar35 << 0x18;
    unaff_x21 = *in_stack_00000030;
    if (unaff_x21 == 0) goto LAB_00e443fc;
    if (*(uint *)(unaff_x21 + 0x18) <= uVar22) goto LAB_00e44400;
    unaff_x20 = (uint *)(unaff_x21 + in_stack_00000058 * 4 + 0x20);
    uVar4 = *unaff_x20;
    unaff_w22 = uVar4 >> 0x18;
    fVar29 = (float)FUN_026982b0((float)(uVar4 & 0xff) / 255.0,0);
    unaff_s12 = (float)FUN_026982b0((float)(uVar4 >> 8 & 0xff) / 255.0,0);
    unaff_s11 = (float)FUN_026982b0((float)(uVar4 >> 0x10 & 0xff) / 255.0,0);
    fVar37 = fVar29;
    if (1.0 < fVar29) {
      fVar37 = 1.0;
    }
    fVar37 = fVar37 * 255.0;
    if (fVar29 < 0.0) {
      fVar37 = unaff_s8;
    }
    dVar33 = modf((double)fVar37,(double *)&stack0x00000070);
    if (0.0 <= fVar37) {
      if (dVar33 == 0.5) {
        unaff_x24 = in_stack_00000030;
        fVar37 = (float)_fStack0000000000000070;
        if (((long)_fStack0000000000000070 & 1U) != 0) {
          fVar37 = (float)_fStack0000000000000070 + 1.0;
        }
      }
      else {
        unaff_x24 = in_stack_00000030;
        unaff_s9 = 255.0;
        fVar37 = (float)(int)(fVar37 + 0.5);
      }
      goto LAB_00e43fe4;
    }
    unaff_x24 = in_stack_00000030;
    if (dVar33 != -0.5) {
      fVar37 = (float)(int)(fVar37 + -0.5);
      goto LAB_00e43fe4;
    }
  } while( true );
LAB_00e442cc:
  do {
    if (unaff_x19[9] == 0) goto LAB_00e443fc;
    FUN_0132138c(unaff_x19[9],uVar25 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar7);
    unaff_x19[0xca] = (long)_fStack0000000000000070;
    if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
    lVar28 = unaff_x19[0xcb];
    uVar31 = FUN_00e58a1c(_fStack0000000000000070,0);
    if (lVar28 == 0) goto LAB_00e443fc;
    if (*(uint *)(lVar28 + 0x18) <= uVar25) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    puVar1 = (undefined4 *)(lVar28 + lVar16);
    *puVar1 = uVar31;
    puVar1[1] = (int)uVar14;
    puVar1[2] = (int)uVar10;
    lVar28 = unaff_x19[0xca];
    if ((lVar28 == 0) || (lVar17 = unaff_x19[0xcc], lVar17 == 0)) goto LAB_00e443fc;
    if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_00e44400;
    uVar31 = *(undefined4 *)(lVar28 + 0x4c);
    uVar25 = uVar25 + 1;
    puVar20 = (undefined8 *)(lVar17 + lVar16);
    lVar16 = lVar16 + 0xc;
    *puVar20 = *(undefined8 *)(lVar28 + 0x44);
    *(undefined4 *)(puVar20 + 1) = uVar31;
  } while (uVar4 != uVar25);
LAB_00e44358:
  if (unaff_x19[0x58] != 0) {
    FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar11,*plVar27,
                 *(undefined8 *)StringLiteral_225);
  }
  lVar16 = unaff_x19[0x59];
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))
              (*(undefined8 *)(lVar16 + 0x40),*in_stack_00000038,*plVar11,*plVar27,
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


