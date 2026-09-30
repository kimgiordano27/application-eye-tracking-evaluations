/*
FUNCTION_NAME: FullSerializer.Internal.fsIEnumerableConverter$$GetAddMethod
ENTRY_POINT: 00e3c188
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

void FullSerializer_Internal_fsIEnumerableConverter__GetAddMethod
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long *unaff_x19;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 uVar29;
  uint uVar30;
  long *unaff_x24;
  long *plVar31;
  ulong uVar32;
  ulong unaff_x29;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  ulong unaff_d14;
  ulong uVar45;
  float unaff_s15;
  float fStack000000000000000c;
  long *in_stack_00000020;
  long *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000048;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  if (0 < (int)unaff_x29) {
    uVar26 = 0;
    pdVar1 = (double *)(unaff_x19 + 0xca);
    fVar44 = (float)unaff_d14;
    uVar45 = unaff_d14;
    fStack000000000000000c = unaff_s15;
    do {
      puVar9 = StringLiteral_4992;
      puVar8 = OVREyeGaze_TypeInfo;
      fVar35 = 0.0;
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      FUN_0132138c(unaff_x19[9],uVar26 & 0xffffffff,&stack0x00000070,
                   *(undefined8 *)StringLiteral_4992);
      *pdVar1 = _fStack0000000000000070;
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      iVar11 = FUN_00e4e99c();
      if (iVar11 <= *(int *)((long)unaff_x19 + 0x38c)) {
        if (*pdVar1 == 0.0) goto LAB_00e443fc;
        *(undefined1 *)((long)*pdVar1 + 0x165) = 1;
      }
      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
        FUN_00e45d2c();
      }
      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
      if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
        uVar13 = FUN_0269e56c(0);
        if (((in_stack_00000048._4_4_ == 0.0) || ((uVar13 & 1) == 0)) ||
           (1 < (int)unaff_x19[0x2a] - 3U)) {
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          iVar11 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
          *(int *)((long)unaff_x19 + 0x38c) = iVar11;
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],iVar11,&stack0x00000070,*(undefined8 *)puVar9),
             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
          *(undefined4 *)(unaff_x19 + 0x4a) = *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
          if ((unaff_x19[9] == 0) ||
             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),&stack0x00000070,
                           *(undefined8 *)puVar9), _fStack0000000000000070 == 0.0))
          goto LAB_00e443fc;
          *(float *)((long)unaff_x19 + 0x254) =
               *(float *)((long)_fStack0000000000000070 + 0x48) +
               *(float *)((long)unaff_x19 + 0x50c);
          *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
        }
      }
      else {
        dVar17 = *pdVar1;
        if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x78) == 0)) goto LAB_00e443fc;
        fVar33 = *(float *)(*(long *)((long)dVar17 + 0x78) + 0x18);
        fVar42 = DAT_028aa034;
        if (fVar33 != 0.0) {
          fVar42 = fVar33;
        }
        if ((0.0 < (unaff_s15 - *(float *)((long)dVar17 + 100)) / fVar42) &&
           (*(char *)((long)dVar17 + 0x165) == '\0')) {
          *(undefined1 *)((long)dVar17 + 0x165) = 1;
          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
          sVar10 = FUN_015fa29c(unaff_x19[0xf],uVar26 & 0xffffffff,0);
          if (sVar10 != 0x200b) {
            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
            sVar10 = FUN_015fa29c(unaff_x19[0xf],uVar26 & 0xffffffff,0);
            if (sVar10 != 0x20) {
              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
              sVar10 = FUN_015fa29c(unaff_x19[0xf],uVar26 & 0xffffffff,0);
              if (sVar10 != 10) {
                lVar12 = unaff_x19[0xca];
                if (lVar12 == 0) goto LAB_00e443fc;
                fVar38 = *(float *)(lVar12 + 0x48);
                fVar42 = *(float *)(unaff_x19 + 0x4b);
                fVar41 = fVar38 + *(float *)((long)unaff_x19 + 0x50c);
                fVar33 = *(float *)(unaff_x19 + 0x4a);
                if (fVar38 <= *(float *)(unaff_x19 + 0x4a)) {
                  fVar33 = fVar38;
                }
                *(float *)(unaff_x19 + 0x4a) = fVar33;
                fVar33 = *(float *)((long)unaff_x19 + 0x254);
                if (fVar41 <= *(float *)((long)unaff_x19 + 0x254)) {
                  fVar33 = fVar41;
                }
                *(float *)((long)unaff_x19 + 0x254) = fVar33;
                fVar33 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),lVar12,0);
                fVar33 = fVar33 + *(float *)(unaff_x19 + 0xa1) + *(float *)((long)unaff_x19 + 0x55c)
                ;
                if (fVar42 <= fVar33) {
                  fVar42 = fVar33;
                }
                *(float *)(unaff_x19 + 0x4b) = fVar42;
              }
            }
          }
          iVar43 = *(int *)((long)unaff_x19 + 0x38c);
          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar11) {
            iVar43 = iVar11;
          }
          *(int *)((long)unaff_x19 + 0x38c) = iVar43;
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
        lVar12 = unaff_x19[0x55];
        if (lVar12 != 0) {
          (**(code **)(lVar12 + 0x18))
                    (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(lVar12 + 0x28));
        }
      }
      unaff_x19[0xc6] = 0;
      fVar33 = 0.0;
      *(undefined4 *)(unaff_x19 + 199) = 0;
      fVar42 = 0.0;
      if ((((0.0 < in_stack_00000048._4_4_) &&
           (uVar3 = *(uint *)(unaff_x19 + 0x2a), fVar42 = fVar33, uVar3 < 5)) &&
          ((1 << (ulong)(uVar3 & 0x1f) & 0x19U) != 0)) &&
         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
        if (uVar3 == 4) {
          lVar12 = unaff_x19[0xc];
          if (lVar12 == 0) goto LAB_00e443fc;
          if (0 < *(int *)(lVar12 + 0x18)) {
            iVar11 = 0;
            do {
              FUN_0132138c(lVar12,iVar11,&stack0x00000070,*(undefined8 *)puVar8);
              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
              fVar42 = fStack0000000000000070;
              if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                  fStack0000000000000070) break;
              lVar12 = unaff_x19[0xc];
              if (lVar12 == 0) goto LAB_00e443fc;
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(lVar12 + 0x18));
          }
        }
        else {
          lVar12 = unaff_x19[0xb];
          if (lVar12 == 0) goto LAB_00e443fc;
          iVar11 = 0;
          fVar42 = 0.0;
          while (iVar11 < *(int *)(lVar12 + 0x18)) {
            FUN_0132138c(lVar12,iVar11,&stack0x00000070,*(undefined8 *)puVar8);
            fVar42 = fVar42 + fStack0000000000000070;
            *(float *)((long)unaff_x19 + 0x634) = fVar42;
            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <= fVar42)
            break;
            lVar12 = unaff_x19[0xb];
            iVar11 = iVar11 + 1;
            if (lVar12 == 0) goto LAB_00e443fc;
          }
        }
      }
      *(float *)(unaff_x19 + 0xc6) = *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
      if (unaff_x19[9] == 0) goto LAB_00e443fc;
      fVar33 = *(float *)((long)unaff_x19 + 0x53c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar9);
      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
      fVar38 = *(float *)((long)_fStack0000000000000070 + 0x5c);
      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar9);
      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
      fVar39 = *(float *)(unaff_x19 + 0xa8);
      fVar41 = *(float *)(unaff_x19 + 199) + fVar39;
      *(float *)((long)unaff_x19 + 0x634) =
           fVar42 + fVar33 + (fVar38 + -1.0) * *(float *)((long)_fStack0000000000000070 + 0x84);
      *(float *)(unaff_x19 + 199) = fVar41;
      puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      fVar33 = 1.0;
      fVar42 = 1.0;
      uVar34 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
      *(undefined8 *)((long)unaff_x19 + 0x674) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar34;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar21 = *(undefined8 *)(unaff_x19[0xca] + 200);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(uVar21,0,0);
      if ((uVar13 & 1) != 0) {
        lVar12 = __start_il2cpp();
        if (lVar12 == 0) goto LAB_00e443fc;
        if ((*(char *)(lVar12 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          uVar34 = FUN_00e4ee40();
          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar34;
          *(float *)(unaff_x19 + 0xcf) = fVar41;
          *(float *)((long)unaff_x19 + 0x67c) = fVar39;
        }
      }
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(puVar8);
        DAT_03774d76 = '\x01';
      }
      lVar18 = *(long *)puVar8;
      uVar34 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      *(undefined8 *)((long)unaff_x19 + 0x5f4) = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar34;
      lVar12 = (*(long **)(lVar18 + 0xb8))[1];
      unaff_x19[0xc0] = **(long **)(lVar18 + 0xb8);
      *(int *)(unaff_x19 + 0xc1) = (int)lVar12;
      uVar34 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      *(undefined8 *)((long)unaff_x19 + 0x60c) = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar34;
      lVar12 = (*(long **)(lVar18 + 0xb8))[1];
      unaff_x19[0xc3] = **(long **)(lVar18 + 0xb8);
      *(int *)(unaff_x19 + 0xc4) = (int)lVar12;
      uVar34 = *(undefined4 *)(*(undefined8 **)(lVar18 + 0xb8) + 1);
      *(undefined8 *)((long)unaff_x19 + 0x624) = **(undefined8 **)(lVar18 + 0xb8);
      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar34;
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(uVar21,0,0);
      if ((uVar13 & 1) != 0) {
        if (*pdVar1 == 0.0) goto LAB_00e443fc;
        if (*(float *)((long)*pdVar1 + 0x84) != 0.0) {
          lVar12 = __start_il2cpp();
          if (lVar12 == 0) goto LAB_00e443fc;
          if ((*(char *)(lVar12 + 0x109) == '\0') && (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
            lVar12 = unaff_x19[0xca];
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            if ((lVar12 == 0) || (lVar18 = *(long *)(lVar12 + 0xc0), lVar18 == 0))
            goto LAB_00e443fc;
            uVar13 = uVar45;
            if (*(char *)(lVar18 + 0x18) != '\0') {
              fVar41 = *(float *)(lVar12 + 100);
              uVar13 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar41);
            }
            if (*(char *)(lVar18 + 0x19) != '\0') {
              uVar34 = FUN_00e4e9f4(uVar13);
              lVar12 = unaff_x19[0xca];
              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar34;
              *(float *)(unaff_x19 + 0xbf) = fVar41;
              *(float *)((long)unaff_x19 + 0x5fc) = fVar39;
              if (lVar12 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar12 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar12 + 0xc0) + 0x28) != '\0') {
              fVar38 = (float)FUN_00e4e9f4(uVar13);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc0] =
                   CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar37;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar38 = (float)FUN_00e4e9f4(uVar13);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x60c) =
                   CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
              *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar38 = (float)FUN_00e4e9f4(uVar13);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              fVar41 = fVar39 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc3] =
                   CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar41;
              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
              goto LAB_00e443fc;
              fVar38 = (float)FUN_00e4e9f4(uVar13);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x624) =
                   CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar12 == 0) goto LAB_00e443fc;
            }
            if (*(long *)(lVar12 + 0xc0) == 0) goto LAB_00e443fc;
            if (*(char *)(*(long *)(lVar12 + 0xc0) + 0x50) != '\0') {
              FUN_00e5eda8(lVar12,0);
              fVar38 = (float)FUN_00e4eb50();
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc0] =
                   CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar37;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b838(lVar12,0);
              fVar38 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x60c) =
                   CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5eea4(lVar12,0);
              fVar38 = (float)FUN_00e4eb50();
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              fVar41 = fVar39 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc3] =
                   CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar41;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              FUN_00e5b7d8(lVar12,0);
              fVar38 = (float)FUN_00e4eb50();
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x624) =
                   CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
              if (lVar12 == 0) goto LAB_00e443fc;
            }
            lVar18 = *(long *)(lVar12 + 0xc0);
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(char *)(lVar18 + 0x60) != '\0') {
              uVar29 = *(undefined8 *)(lVar18 + 0x68);
              uVar21 = FUN_00e5eda8(lVar12,0);
              fVar38 = (float)FUN_00e4ecc4(uVar21,lVar12,uVar29);
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              fVar37 = fVar39 + *(float *)(unaff_x19 + 0xc1);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc0] =
                   CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc0]);
              *(float *)(unaff_x19 + 0xc1) = fVar37;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar29 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x68);
              uVar21 = FUN_00e5b838(lVar12,0);
              fVar38 = (float)FUN_00e4ecc4(uVar21,lVar12,uVar29);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x60c) =
                   CONCAT44(fVar37 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x60c) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x614) = fVar39 + *(float *)((long)unaff_x19 + 0x614);
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar29 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x68);
              uVar21 = FUN_00e5eea4(lVar12,0);
              fVar38 = (float)FUN_00e4ecc4(uVar21,lVar12,uVar29);
              lVar12 = unaff_x19[0xca];
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar37;
              fVar41 = fVar39 + *(float *)(unaff_x19 + 0xc4);
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              unaff_x19[0xc3] =
                   CONCAT44(fVar37 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                            fVar38 + (float)unaff_x19[0xc3]);
              *(float *)(unaff_x19 + 0xc4) = fVar41;
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0xc0) == 0)) goto LAB_00e443fc;
              uVar29 = *(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x68);
              uVar21 = FUN_00e5b7d8(lVar12,0);
              fVar38 = (float)FUN_00e4ecc4(uVar21,lVar12,uVar29);
              *(float *)((long)unaff_x19 + 0x63c) = fVar38;
              *(float *)(unaff_x19 + 200) = fVar41;
              *(float *)((long)unaff_x19 + 0x644) = fVar39;
              *(ulong *)((long)unaff_x19 + 0x624) =
                   CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)((long)unaff_x19 + 0x624) >> 0x20
                                            ),
                            fVar38 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
              *(float *)((long)unaff_x19 + 0x62c) = fVar39 + *(float *)((long)unaff_x19 + 0x62c);
            }
          }
        }
      }
      uVar3 = (int)uVar26 << 2;
      if ((in_stack_00000048._4_4_ <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
        if (*(char *)((long)unaff_x19 + 300) == '\0') {
          *(long *)((long)unaff_x19 + 0x6e4) = unaff_x19[0x24];
        }
        else {
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          uVar21 = *(undefined8 *)((long)*pdVar1 + 0x80);
          *(ulong *)((long)unaff_x19 + 0x6e4) =
               CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) * (float)((ulong)uVar21 >> 0x20),
                        (float)unaff_x19[0x24] * (float)uVar21);
        }
        lVar12 = unaff_x19[0x5e];
        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        fVar38 = (float)FUN_00e5eda8(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        fVar41 = *(float *)((long)unaff_x19 + 0x674);
        uVar13 = (ulong)(int)uVar3;
        *(float *)(lVar12 + uVar13 * 0xc + 0x20) =
             fVar38 + fVar41 + *(float *)(unaff_x19 + 0xc0) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        fVar38 = *(float *)((long)unaff_x19 + 0x604);
        *(float *)(lVar12 + uVar13 * 0xc + 0x24) =
             fVar41 + *(float *)(unaff_x19 + 0xcf) + fVar38 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eda8(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        *(float *)(lVar12 + uVar13 * 0xc + 0x28) =
             fVar38 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        fVar38 = (float)FUN_00e5b838(*pdVar1,0);
        uVar32 = uVar13 | 1;
        uVar25 = (uint)uVar32;
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        fVar41 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar12 + uVar32 * 0xc + 0x20) =
             fVar38 + fVar41 + *(float *)((long)unaff_x19 + 0x60c) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        fVar38 = *(float *)(unaff_x19 + 0xc2);
        *(float *)(lVar12 + uVar32 * 0xc + 0x24) =
             fVar41 + *(float *)(unaff_x19 + 0xcf) + fVar38 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b838(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        *(float *)(lVar12 + uVar32 * 0xc + 0x28) =
             fVar38 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)((long)unaff_x19 + 0x614) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        fVar38 = (float)FUN_00e5eea4(*pdVar1,0);
        uVar16 = uVar13 | 2;
        uVar28 = (uint)uVar16;
        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
        fVar41 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar12 + uVar16 * 0xc + 0x20) =
             fVar38 + fVar41 + *(float *)(unaff_x19 + 0xc3) + *(float *)((long)unaff_x19 + 0x5f4) +
             *(float *)(unaff_x19 + 0xc6) + *(float *)((long)unaff_x19 + 0x6e4);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
        fVar38 = *(float *)((long)unaff_x19 + 0x61c);
        *(float *)(lVar12 + uVar16 * 0xc + 0x24) =
             fVar41 + *(float *)(unaff_x19 + 0xcf) + fVar38 + *(float *)(unaff_x19 + 0xbf) +
             *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5eea4(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
        *(float *)(lVar12 + uVar16 * 0xc + 0x28) =
             fVar38 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        fVar38 = (float)FUN_00e5b7d8(*pdVar1,0);
        uVar27 = uVar13 | 3;
        uVar30 = (uint)uVar27;
        if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
        fVar41 = *(float *)((long)unaff_x19 + 0x674);
        *(float *)(lVar12 + uVar27 * 0xc + 0x20) =
             fVar38 + fVar41 + *(float *)((long)unaff_x19 + 0x624) +
             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
             *(float *)((long)unaff_x19 + 0x6e4);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
        param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
        *(float *)(lVar12 + uVar27 * 0xc + 0x24) =
             fVar41 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
             *(float *)(unaff_x19 + 0xdd);
        lVar12 = unaff_x19[0x5e];
        if ((lVar12 == 0) || (*pdVar1 == 0.0)) goto LAB_00e443fc;
        FUN_00e5b7d8(*pdVar1,0);
        if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
        fVar38 = *(float *)((long)unaff_x19 + 0x62c);
        *(float *)(lVar12 + uVar27 * 0xc + 0x28) =
             (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar38 +
             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
             *(float *)((long)unaff_x19 + 0x6ec);
        lVar12 = unaff_x19[0xca];
        if (lVar12 == 0) goto LAB_00e443fc;
        lVar18 = *in_stack_00000020;
        if (*(char *)(lVar12 + 0x108) == '\0') {
          uVar34 = FUN_0272b9dc(lVar12 + 0x10,0);
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
          lVar18 = lVar18 + uVar13 * 8;
          *(undefined4 *)(lVar18 + 0x20) = uVar34;
          *(float *)(lVar18 + 0x24) = fVar38;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = thunk_FUN_0272b8d8((long)*pdVar1 + 0x10,0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar12 = lVar12 + uVar32 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = FUN_0272b9c8((long)*pdVar1 + 0x10,0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar12 = lVar12 + uVar16 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = FUN_0272b98c((long)*pdVar1 + 0x10,0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          lVar12 = lVar12 + uVar27 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          uVar34 = FUN_00e5ecc0(*pdVar1,0);
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar34;
          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
          FUN_00e5ecc0(unaff_x19[0xca],0);
          *(float *)((long)unaff_x19 + 0x6cc) = fVar38;
          unaff_x24 = in_stack_00000030;
        }
        else {
          if ((*(long *)(lVar12 + 0x100) == 0) ||
             (uVar34 = FUN_00e5dd14(uVar45,*(long *)(lVar12 + 0x100),*(undefined4 *)(lVar12 + 0x10c)
                                    ,0), lVar18 == 0)) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
          lVar18 = lVar18 + uVar13 * 8;
          *(undefined4 *)(lVar18 + 0x20) = uVar34;
          *(float *)(lVar18 + 0x24) = fVar38;
          dVar17 = *pdVar1;
          if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = FUN_00e5de6c(uVar45,*(long *)((long)dVar17 + 0x100),
                                *(undefined4 *)((long)dVar17 + 0x10c),0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar12 = lVar12 + uVar32 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          dVar17 = *pdVar1;
          if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = FUN_00e5dea4(uVar45,*(long *)((long)dVar17 + 0x100),
                                *(undefined4 *)((long)dVar17 + 0x10c),0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar12 = lVar12 + uVar16 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          dVar17 = *pdVar1;
          if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
          lVar12 = *in_stack_00000020;
          uVar34 = thunk_FUN_00e5dd60(uVar45,*(long *)((long)dVar17 + 0x100),
                                      *(undefined4 *)((long)dVar17 + 0x10c),0);
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          lVar12 = lVar12 + uVar27 * 8;
          *(undefined4 *)(lVar12 + 0x20) = uVar34;
          *(float *)(lVar12 + 0x24) = fVar38;
          dVar17 = *pdVar1;
          if ((dVar17 == 0.0) || (*(long *)((long)dVar17 + 0x100) == 0)) goto LAB_00e443fc;
          uVar34 = FUN_00e5dedc(uVar45,*(long *)((long)dVar17 + 0x100),
                                *(undefined4 *)((long)dVar17 + 0x10c),0);
          lVar12 = unaff_x19[0xca];
          *(undefined4 *)(unaff_x19 + 0xd9) = uVar34;
          *(float *)((long)unaff_x19 + 0x6cc) = fVar38;
          if ((lVar12 == 0) || (lVar18 = *(long *)(lVar12 + 0x100), lVar18 == 0)) goto LAB_00e443fc;
          unaff_x24 = in_stack_00000030;
          if (((1 < *(int *)(lVar18 + 0x28)) && (0.0 < *(float *)(lVar18 + 0x34))) &&
             (*(int *)(lVar12 + 0x10c) < 0)) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
        }
      }
      else {
        dVar17 = *pdVar1;
        if (dVar17 == 0.0) goto LAB_00e443fc;
        param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
        if ((*(float *)((long)dVar17 + 0x48) + *(float *)((long)dVar17 + 0x84) +
            *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
        lVar12 = *in_stack_00000038;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(puVar8);
          DAT_03774d76 = '\x01';
        }
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        uVar34 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        uVar13 = (ulong)(int)uVar3;
        lVar12 = lVar12 + uVar13 * 0xc;
        *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar12 + 0x28) = uVar34;
        lVar12 = *in_stack_00000038;
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= (uint)(uVar13 | 1)) goto LAB_00e44400;
        lVar12 = lVar12 + (uVar13 | 1) * 0xc;
        uVar34 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar12 + 0x28) = uVar34;
        lVar12 = *in_stack_00000038;
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= (uint)(uVar13 | 2)) goto LAB_00e44400;
        lVar12 = lVar12 + (uVar13 | 2) * 0xc;
        uVar34 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar12 + 0x28) = uVar34;
        lVar12 = *in_stack_00000038;
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= (uint)(uVar13 | 3)) goto LAB_00e44400;
        lVar12 = lVar12 + (uVar13 | 3) * 0xc;
        uVar34 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar12 + 0x20) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar12 + 0x28) = uVar34;
      }
      if (*pdVar1 == 0.0) goto LAB_00e443fc;
      uVar21 = *(undefined8 *)((long)*pdVar1 + 0xf8);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(uVar21,0,0);
      if ((uVar13 & 1) == 0) {
        lVar12 = unaff_x19[0x10];
      }
      else {
        if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xf8), lVar12 == 0))
        goto LAB_00e443fc;
        lVar12 = *(long *)(lVar12 + 0x18);
      }
      if (((lVar12 == 0) || (lVar12 = FUN_0272bcf4(lVar12,0), lVar12 == 0)) ||
         (plVar14 = (long *)FUN_0267dac8(lVar12,0), plVar14 == (long *)0x0)) goto LAB_00e443fc;
      iVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
      *(float *)(unaff_x19 + 0xda) = (float)iVar11;
      iVar11 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar11;
      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
      *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
      puVar8 = UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)CONCAT44((float)iVar11,(int)unaff_x19[0xda]);
      in_stack_00000078 = unaff_x19[0xd9];
      FUN_0132149c(unaff_x19[0x62],uVar3,&stack0x00000070,
                   *(undefined8 *)
                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar13 = (ulong)(int)uVar3;
      uVar32 = uVar13 | 1;
      FUN_0132149c(unaff_x19[0x62],uVar3 | 1,&stack0x00000070,*(undefined8 *)puVar8);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar16 = uVar13 | 2;
      FUN_0132149c(unaff_x19[0x62],uVar16,&stack0x00000070,*(undefined8 *)puVar8);
      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      uVar27 = uVar13 | 3;
      FUN_0132149c(unaff_x19[0x62],uVar3 | 3,&stack0x00000070,*(undefined8 *)puVar8);
      plVar31 = (long *)StringLiteral_9119;
      lVar12 = unaff_x19[0x60];
      if (lVar12 == 0) goto LAB_00e443fc;
      if ((*(uint *)(lVar12 + 0x18) <= uVar3) ||
         (uVar25 = (uint)uVar27, *(uint *)(lVar12 + 0x18) <= uVar25)) goto LAB_00e44400;
      lVar18 = unaff_x19[0xca];
      fVar38 = fVar35;
      if (*(float *)(lVar12 + 0x20 + uVar13 * 8) != *(float *)(lVar12 + 0x20 + uVar27 * 8)) {
        fVar38 = fVar33;
      }
      *(float *)(unaff_x19 + 0xda) = fVar38;
      if (lVar18 == 0) goto LAB_00e443fc;
      cVar7 = *(char *)(lVar18 + 0x108);
      fVar38 = fVar33;
      if (cVar7 != '\0' || 0x7fffffff < *(uint *)(lVar18 + 0x138)) {
        fVar38 = -1.0;
      }
      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar18 + 0x84) * fVar38;
      if (cVar7 == '\0') {
        iVar43 = *(int *)(lVar18 + 0x160);
        iVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        param_3 = 0x3e800000;
        *(float *)(unaff_x19 + 0xdb) = (float)iVar43 / ((float)iVar11 * 0.25);
        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
        iVar43 = *(int *)(unaff_x19[0xca] + 0x160);
        iVar11 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        fVar41 = (float)iVar43;
        fVar38 = (float)iVar11;
        puVar22 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
      }
      else {
        if (*(long *)(lVar18 + 0x100) == 0) goto LAB_00e443fc;
        fVar38 = (float)FUN_00e5df18(*(long *)(lVar18 + 0x100),0);
        puVar22 = (undefined8 *)
                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
        if (((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0x100), lVar12 == 0)) ||
           (plVar14 = *(long **)(lVar12 + 0x18), plVar14 == (long *)0x0)) goto LAB_00e443fc;
        iVar11 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
        if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0x100), lVar12 == 0))
        goto LAB_00e443fc;
        fVar41 = 0.25;
        *(float *)(unaff_x19 + 0xdb) = fVar38 / (*(float *)(lVar12 + 0x40) * (float)iVar11 * 0.25);
        FUN_00e5df18(lVar12,0);
        if ((unaff_x19[0xca] == 0) ||
           ((lVar12 = *(long *)(unaff_x19[0xca] + 0x100), lVar12 == 0 ||
            (plVar14 = *(long **)(lVar12 + 0x18), plVar14 == (long *)0x0)))) goto LAB_00e443fc;
        iVar11 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0x100), lVar12 == 0))
        goto LAB_00e443fc;
        fVar38 = *(float *)(lVar12 + 0x44) * (float)iVar11;
      }
      fVar39 = 0.25;
      fVar41 = fVar41 / (fVar38 * 0.25);
      *(float *)((long)unaff_x19 + 0x6dc) = fVar41;
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      in_stack_00000078 = CONCAT44(fVar41,(int)unaff_x19[0xdb]);
      FUN_0132149c(unaff_x19[99],uVar3,&stack0x00000070,*puVar22);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar3 | 1,&stack0x00000070,*puVar22);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar3 | 2,&stack0x00000070,*puVar22);
      if (unaff_x19[99] == 0) goto LAB_00e443fc;
      in_stack_00000078 = unaff_x19[0xdb];
      _fStack0000000000000070 = (double)unaff_x19[0xda];
      FUN_0132149c(unaff_x19[99],uVar3 | 3,&stack0x00000070,*puVar22);
      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
      uVar21 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar15 = FUN_02681b9c(uVar21,0,0);
      fVar41 = (float)param_3;
      fVar38 = (float)uVar45;
      uVar30 = (uint)uVar32;
      uVar28 = (uint)uVar16;
      if ((uVar15 & 1) != 0) {
        if (uVar26 == (int)unaff_x29 - 1) {
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          fVar37 = (float)FUN_00e5b838(*pdVar1,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          pfVar19 = *(float **)
                     (*(long *)
                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                     + 0xb8);
          fVar41 = fVar41 - pfVar19[2];
          param_3 = (ulong)(uint)fVar41;
          if (fVar41 * fVar41 +
              (fVar37 - *pfVar19) * (fVar37 - *pfVar19) +
              (fVar39 - pfVar19[1]) * (fVar39 - pfVar19[1]) < DAT_028aa020) goto LAB_00e3dbd8;
        }
        if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xb0), lVar12 == 0))
        goto LAB_00e443fc;
        uVar21 = *(undefined8 *)(lVar12 + 0x38);
        if (DAT_03774d77 == '\0') {
          thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__)
          ;
          DAT_03774d77 = '\x01';
        }
        fVar41 = (float)uVar21 -
                 (float)**(undefined8 **)
                          (*(long *)
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__ +
                          0xb8);
        fVar39 = (float)((ulong)uVar21 >> 0x20) -
                 (float)((ulong)**(undefined8 **)
                                  (*(long *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                  + 0xb8) >> 0x20);
        if (DAT_028aa020 <= fVar41 * fVar41 + fVar39 * fVar39) {
          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
        }
        dVar17 = *pdVar1;
        if ((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xb0), lVar12 == 0))
        goto LAB_00e443fc;
        fVar39 = fVar38 * *(float *)(lVar12 + 0x38);
        *(float *)(unaff_x19 + 0xc9) = fVar39;
        fVar41 = fVar38 * *(float *)(lVar12 + 0x3c);
        *(float *)((long)unaff_x19 + 0x64c) = fVar41;
        if (*(char *)(lVar12 + 0x25) != '\0') {
          fVar42 = 1.0 / *(float *)((long)dVar17 + 0x84);
        }
        lVar12 = *in_stack_00000038;
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        lVar18 = lVar12 + uVar13 * 0xc;
        fVar37 = *(float *)(lVar18 + 0x20);
        uVar21 = *(undefined8 *)(lVar18 + 0x24);
        *(float *)(unaff_x19 + 0xcd) = fVar37;
        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar21;
        *(float *)(unaff_x19 + 0xd0) = fVar37;
        fVar40 = (float)uVar21;
        *(float *)((long)unaff_x19 + 0x684) = fVar40;
        if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
        lVar18 = lVar12 + uVar32 * 0xc;
        uVar34 = *(undefined4 *)(lVar18 + 0x20);
        uVar21 = *(undefined8 *)(lVar18 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar34;
        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar21;
        *(undefined4 *)(unaff_x19 + 0xd2) = uVar34;
        *(int *)((long)unaff_x19 + 0x694) = (int)uVar21;
        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
        lVar18 = lVar12 + uVar16 * 0xc;
        uVar34 = *(undefined4 *)(lVar18 + 0x20);
        uVar21 = *(undefined8 *)(lVar18 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar34;
        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar21;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar34;
        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar21;
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        lVar12 = lVar12 + uVar27 * 0xc;
        uVar34 = *(undefined4 *)(lVar12 + 0x20);
        uVar21 = *(undefined8 *)(lVar12 + 0x24);
        *(undefined4 *)(unaff_x19 + 0xcd) = uVar34;
        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar21;
        *(undefined4 *)(unaff_x19 + 0xd6) = uVar34;
        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar21;
        lVar12 = *(long *)((long)dVar17 + 0xb0);
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(char *)(lVar12 + 0x24) == '\0') {
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          uVar6 = *(uint *)(lVar18 + 0x18);
          if (uVar6 <= uVar3) goto LAB_00e44400;
          lVar23 = lVar18 + uVar13 * 8;
          *(float *)(lVar23 + 0x20) = (fVar39 + fVar42 * fVar37) - *(float *)(lVar12 + 0x30);
          *(float *)(lVar23 + 0x24) = (fVar41 + fVar42 * fVar40) - *(float *)(lVar12 + 0x34);
          if (((uVar6 <= uVar30) ||
              (*(ulong *)(lVar18 + uVar32 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar42 +
                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                             (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xd2] * fVar42 + (float)unaff_x19[0xc9]) -
                             (float)*(undefined8 *)(lVar12 + 0x30)), uVar6 <= uVar28)) ||
             (*(ulong *)(lVar18 + uVar16 * 8 + 0x20) =
                   CONCAT44((fVar42 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                            (fVar42 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                            (float)*(undefined8 *)(lVar12 + 0x30)), uVar6 <= uVar25))
          goto LAB_00e44400;
          param_3 = unaff_x19[0xc9];
          *(ulong *)(lVar18 + uVar27 * 8 + 0x20) =
               CONCAT44((fVar42 * (float)((ulong)unaff_x19[0xd6] >> 0x20) + (float)(param_3 >> 0x20)
                        ) - (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                        (fVar42 * (float)unaff_x19[0xd6] + (float)param_3) -
                        (float)*(undefined8 *)(lVar12 + 0x30));
        }
        else {
          fVar4 = *(float *)((long)dVar17 + 0x44);
          *(float *)(unaff_x19 + 0xd8) = fVar4;
          fVar5 = *(float *)((long)dVar17 + 0x48);
          lVar18 = unaff_x19[0x61];
          *(float *)((long)unaff_x19 + 0x6c4) = fVar5;
          if (lVar18 == 0) goto LAB_00e443fc;
          uVar6 = *(uint *)(lVar18 + 0x18);
          if (uVar6 <= uVar3) goto LAB_00e44400;
          lVar23 = lVar18 + uVar13 * 8;
          *(float *)(lVar23 + 0x20) =
               (fVar39 + fVar42 * (fVar37 - fVar4)) - *(float *)(lVar12 + 0x30);
          *(float *)(lVar23 + 0x24) =
               (fVar41 + fVar42 * (fVar40 - fVar5)) - *(float *)(lVar12 + 0x34);
          if (((uVar6 <= uVar30) ||
              (*(ulong *)(lVar18 + uVar32 * 8 + 0x20) =
                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar42) -
                             (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                             ((float)unaff_x19[0xc9] +
                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar42) -
                             (float)*(undefined8 *)(lVar12 + 0x30)), uVar6 <= uVar28)) ||
             (*(ulong *)(lVar18 + uVar16 * 8 + 0x20) =
                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                            fVar42 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                            (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                            ((float)unaff_x19[0xc9] +
                            fVar42 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                            (float)*(undefined8 *)(lVar12 + 0x30)), uVar6 <= uVar25))
          goto LAB_00e44400;
          param_3 = unaff_x19[0xd8];
          *(ulong *)(lVar18 + uVar27 * 8 + 0x20) =
               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                        fVar42 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) - (float)(param_3 >> 0x20)
                                 )) - (float)((ulong)*(undefined8 *)(lVar12 + 0x30) >> 0x20),
                        ((float)unaff_x19[0xc9] + fVar42 * ((float)unaff_x19[0xd6] - (float)param_3)
                        ) - (float)*(undefined8 *)(lVar12 + 0x30));
        }
      }
LAB_00e3dbd8:
      dVar17 = *pdVar1;
      if (dVar17 == 0.0) goto LAB_00e443fc;
      if (*(char *)((long)dVar17 + 0x108) != '\0') {
        if (*(long *)((long)dVar17 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar17 + 0x100) + 0x20) == '\0') {
          lVar12 = *in_stack_00000020;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + uVar13 * 8 + 0x20) = *(undefined8 *)(lVar12 + uVar13 * 8 + 0x20);
          lVar12 = *in_stack_00000020;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + (long)(int)uVar30 * 8 + 0x20) =
               *(undefined8 *)(lVar12 + (long)(int)uVar30 * 8 + 0x20);
          lVar12 = *in_stack_00000020;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + (long)(int)uVar28 * 8 + 0x20) =
               *(undefined8 *)(lVar12 + (long)(int)uVar28 * 8 + 0x20);
          lVar12 = *in_stack_00000020;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          lVar18 = *in_stack_00000028;
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_00e44400;
          *(undefined8 *)(lVar18 + uVar27 * 8 + 0x20) = *(undefined8 *)(lVar12 + uVar27 * 8 + 0x20);
          dVar17 = *pdVar1;
          if (dVar17 == 0.0) goto LAB_00e443fc;
        }
      }
      dVar36 = DAT_028aa048;
      if (*(char *)((long)dVar17 + 0x108) == '\0') {
LAB_00e3dd34:
        uVar21 = *(undefined8 *)((long)dVar17 + 0xa8);
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar32 = FUN_02681b9c(uVar21,0,0);
        dVar17 = *pdVar1;
        if (dVar17 == 0.0) goto LAB_00e443fc;
        if ((uVar32 & 1) == 0) {
          uVar21 = *(undefined8 *)((long)dVar17 + 0xb0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar32 = FUN_02681b9c(uVar21,0,0);
          dVar17 = DAT_028aa048;
          if ((uVar32 & 1) == 0) {
            if (*pdVar1 == 0.0) goto LAB_00e443fc;
            uVar21 = *(undefined8 *)((long)*pdVar1 + 0xa0);
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar32 = FUN_02681b9c(uVar21,0,0);
            lVar12 = *unaff_x24;
            if ((uVar32 & 1) == 0) {
              fVar33 = *(float *)((long)unaff_x19 + 0x8c);
              fVar38 = *(float *)(unaff_x19 + 0x12);
              fVar39 = *(float *)((long)unaff_x19 + 0x94);
              fVar41 = *(float *)(unaff_x19 + 0x13);
              fVar42 = fVar33;
              if (1.0 < fVar33) {
                fVar42 = 1.0;
              }
              fVar42 = fVar42 * 255.0;
              if (fVar33 < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fd48;
                }
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar33;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              fVar33 = fVar39;
              if (1.0 < fVar39) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar39 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar39 = fVar41;
              if (1.0 < fVar41) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar41 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar39 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar41 = (float)(int)(fVar39 + -0.5);
              }
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
              *(uint *)(lVar12 + uVar13 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar41 << 0x18;
              fVar33 = *(float *)(unaff_x19 + 0x12);
              lVar12 = unaff_x19[0x5f];
              fVar41 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
              fVar42 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar39 = fVar33;
              if (1.0 < fVar33) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar33 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40610;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar33;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              fVar33 = fVar41;
              if (1.0 < fVar41) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar41 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar41 = fVar38;
              if (1.0 < fVar38) {
                fVar41 = 1.0;
              }
              fVar41 = fVar41 * 255.0;
              if (fVar38 < 0.0) {
                fVar41 = fVar35;
              }
              dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar41 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar41 + -0.5);
              }
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
              *(uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              fVar33 = *(float *)(unaff_x19 + 0x12);
              lVar12 = unaff_x19[0x5f];
              fVar41 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
              fVar42 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar39 = fVar33;
              if (1.0 < fVar33) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar33 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40e20;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar33;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              fVar33 = fVar41;
              if (1.0 < fVar41) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar41 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar41 = fVar38;
              if (1.0 < fVar38) {
                fVar41 = 1.0;
              }
              fVar41 = fVar41 * 255.0;
              if (fVar38 < 0.0) {
                fVar41 = fVar35;
              }
              dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar41 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar41 + -0.5);
              }
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar12 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              fVar42 = *(float *)((long)unaff_x19 + 0x8c);
              fVar33 = *(float *)(unaff_x19 + 0x12);
              lVar12 = unaff_x19[0x5f];
              fVar41 = *(float *)((long)unaff_x19 + 0x94);
              fVar38 = *(float *)(unaff_x19 + 0x13);
            }
            else {
              if ((*pdVar1 == 0.0) || (lVar18 = *(long *)((long)*pdVar1 + 0xa0), lVar18 == 0))
              goto LAB_00e443fc;
              fVar33 = *(float *)(lVar18 + 0x18);
              fVar38 = *(float *)(lVar18 + 0x1c);
              fVar39 = *(float *)(lVar18 + 0x20);
              fVar41 = *(float *)(lVar18 + 0x24);
              fVar42 = fVar33;
              if (1.0 < fVar33) {
                fVar42 = 1.0;
              }
              fVar42 = fVar42 * 255.0;
              if (fVar33 < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar33 = fVar38;
              if (1.0 < fVar38) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar38 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3fcc4;
                }
                fVar38 = (float)(int)(fVar33 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar33;
                }
              }
              else {
                fVar38 = (float)(int)(fVar33 + -0.5);
              }
              fVar33 = fVar39;
              if (1.0 < fVar39) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar39 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar39 = fVar41;
              if (1.0 < fVar41) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar41 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar41 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar41 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar41 = (float)(int)(fVar39 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar41 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar41 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar41 = (float)(int)(fVar39 + -0.5);
              }
              if (lVar12 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
              *(uint *)(lVar12 + uVar13 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar38 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar41 << 0x18;
              if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
              goto LAB_00e443fc;
              fVar33 = *(float *)(lVar12 + 0x1c);
              lVar18 = *unaff_x24;
              fVar41 = *(float *)(lVar12 + 0x20);
              fVar38 = *(float *)(lVar12 + 0x24);
              fVar42 = *(float *)(lVar12 + 0x18) * 255.0;
              if (*(float *)(lVar12 + 0x18) < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar39 = fVar33;
              if (1.0 < fVar33) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar33 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e4057c;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar33;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              fVar33 = fVar41;
              if (1.0 < fVar41) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar41 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar41 = fVar38;
              if (1.0 < fVar38) {
                fVar41 = 1.0;
              }
              fVar41 = fVar41 * 255.0;
              if (fVar38 < 0.0) {
                fVar41 = fVar35;
              }
              dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar41 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar41 + -0.5);
              }
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar30) goto LAB_00e44400;
              *(uint *)(lVar18 + (long)(int)uVar30 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
              goto LAB_00e443fc;
              fVar33 = *(float *)(lVar12 + 0x1c);
              lVar18 = *unaff_x24;
              fVar41 = *(float *)(lVar12 + 0x20);
              fVar38 = *(float *)(lVar12 + 0x24);
              fVar42 = *(float *)(lVar12 + 0x18) * 255.0;
              if (*(float *)(lVar12 + 0x18) < 0.0) {
                fVar42 = fVar35;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              fVar39 = fVar33;
              if (1.0 < fVar33) {
                fVar39 = 1.0;
              }
              fVar39 = fVar39 * 255.0;
              if (fVar33 < 0.0) {
                fVar39 = fVar35;
              }
              dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
              if (0.0 <= fVar39) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e40d8c;
                }
                fVar39 = (float)(int)(fVar39 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                fVar39 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar39 = fVar33;
                }
              }
              else {
                fVar39 = (float)(int)(fVar39 + -0.5);
              }
              fVar33 = fVar41;
              if (1.0 < fVar41) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar41 < 0.0) {
                fVar33 = fVar35;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar33 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar33 = (float)(int)(fVar33 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar41 = fVar38;
              if (1.0 < fVar38) {
                fVar41 = 1.0;
              }
              fVar41 = fVar41 * 255.0;
              if (fVar38 < 0.0) {
                fVar41 = fVar35;
              }
              dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
              if (0.0 <= fVar41) {
                if (dVar17 == 0.5) {
                  fVar38 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar38 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar38 = (float)(int)(fVar41 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar38 = (float)(int)(fVar41 + -0.5);
              }
              if (lVar18 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_00e44400;
              *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                   (int)fVar42 & 0xffU | ((int)fVar39 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10
                   | (int)fVar38 << 0x18;
              if ((*pdVar1 == 0.0) || (lVar18 = *(long *)((long)*pdVar1 + 0xa0), lVar18 == 0))
              goto LAB_00e443fc;
              fVar42 = *(float *)(lVar18 + 0x18);
              fVar33 = *(float *)(lVar18 + 0x1c);
              lVar12 = *unaff_x24;
              fVar41 = *(float *)(lVar18 + 0x20);
              fVar38 = *(float *)(lVar18 + 0x24);
            }
            fVar39 = fVar42 * 255.0;
            if (fVar42 < 0.0) {
              fVar39 = fVar35;
            }
            dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar39 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar39 + -0.5);
            }
            fVar39 = fVar33;
            if (1.0 < fVar33) {
              fVar39 = 1.0;
            }
            fVar39 = fVar39 * 255.0;
            if (fVar33 < 0.0) {
              fVar39 = fVar35;
            }
            dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
            if (0.0 <= fVar39) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e412dc;
              }
              fVar39 = (float)(int)(fVar39 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
              fVar39 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar39 = fVar33;
              }
            }
            else {
              fVar39 = (float)(int)(fVar39 + -0.5);
            }
            fVar33 = fVar41;
            if (1.0 < fVar41) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar41 < 0.0) {
              fVar33 = fVar35;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            param_3 = 0x3f800000;
            fVar41 = fVar38;
            if (1.0 < fVar38) {
              fVar41 = 1.0;
            }
            fVar41 = fVar41 * 255.0;
            if (fVar38 < 0.0) {
              fVar41 = fVar35;
            }
            dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
            if (0.0 <= fVar41) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar41 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar41 + -0.5);
            }
            if (lVar12 != 0) {
              if (uVar25 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar12 + uVar27 * 4 + 0x20) =
                     (int)fVar42 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                     ((int)fVar33 & 0xffU) << 0x10 | (int)fVar35 << 0x18;
                goto LAB_00e43400;
              }
              goto LAB_00e44400;
            }
            goto LAB_00e443fc;
          }
          lVar12 = *unaff_x24;
          dVar36 = modf(DAT_028aa048,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar42 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar41 = 255.0;
          }
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          *(uint *)(lVar12 + uVar13 * 4 + 0x20) =
               (int)fVar42 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar41 << 0x18;
          lVar12 = *unaff_x24;
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar42 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar41 = 255.0;
          }
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          *(uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20) =
               (int)fVar42 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar41 << 0x18;
          lVar12 = *unaff_x24;
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar42 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar41 = 255.0;
          }
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          *(uint *)(lVar12 + (long)(int)uVar28 * 4 + 0x20) =
               (int)fVar42 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar41 << 0x18;
          lVar12 = *unaff_x24;
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar42 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = 255.0;
          }
          dVar36 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar36 == 0.5) {
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar38 = 255.0;
          }
          dVar17 = modf(dVar17,(double *)&stack0x00000070);
          if (dVar17 == 0.5) {
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar41 = 255.0;
          }
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar12 + uVar27 * 4 + 0x20) =
               (int)fVar42 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar38 & 0xffU) << 0x10 |
               (int)fVar41 << 0x18;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          uVar21 = *(undefined8 *)((long)*pdVar1 + 0xa0);
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar32 = FUN_02681b9c(uVar21,0,0);
          if ((uVar32 & 1) == 0) goto LAB_00e43400;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + uVar13 * 4 + 0x20);
          uVar6 = *puVar24;
          if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
          goto LAB_00e443fc;
          fVar33 = ((float)(uVar6 & 0xff) / 255.0) * *(float *)(lVar12 + 0x18);
          fVar39 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
          fVar41 = *(float *)(lVar12 + 0x20);
          fVar38 = *(float *)(lVar12 + 0x24);
          fVar42 = fVar33 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = fVar35;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = 1.0;
              goto LAB_00e3ede4;
            }
            fVar33 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar42 = -1.0;
LAB_00e3ede4:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar42;
            }
          }
          else {
            fVar33 = (float)(int)(fVar42 + -0.5);
          }
          fVar41 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar41;
          fVar42 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar42 = fVar35;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar39 = fVar41;
          if (1.0 < fVar41) {
            fVar39 = 1.0;
          }
          fVar38 = ((float)(uVar6 >> 0x18) / 255.0) * fVar38;
          fVar39 = fVar39 * 255.0;
          if (fVar41 < 0.0) {
            fVar39 = fVar35;
          }
          dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar17 == 0.5) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e3ffb0;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar41;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar41 = fVar38;
          if (1.0 < fVar38) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          if (fVar38 < 0.0) {
            fVar41 = fVar35;
          }
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar38 = 1.0;
              goto LAB_00e40174;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = -1.0;
LAB_00e40174:
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = (float)_fStack0000000000000070 + fVar38;
            }
          }
          else {
            fVar41 = (float)(int)(fVar41 + -0.5);
          }
          *puVar24 = (int)fVar33 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar41 << 0x18;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20);
          uVar6 = *puVar24;
          if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
          goto LAB_00e443fc;
          fVar33 = ((float)(uVar6 & 0xff) / 255.0) * *(float *)(lVar12 + 0x18);
          fVar39 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
          fVar41 = *(float *)(lVar12 + 0x20);
          fVar38 = *(float *)(lVar12 + 0x24);
          fVar42 = fVar33 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = fVar35;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = 1.0;
              goto LAB_00e404dc;
            }
            fVar33 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar42 = -1.0;
LAB_00e404dc:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + fVar42;
            }
          }
          else {
            fVar33 = (float)(int)(fVar42 + -0.5);
          }
          fVar41 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar41;
          fVar42 = fVar39 * 255.0;
          if (fVar39 < 0.0) {
            fVar42 = fVar35;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar39 = fVar41;
          if (1.0 < fVar41) {
            fVar39 = 1.0;
          }
          fVar38 = ((float)(uVar6 >> 0x18) / 255.0) * fVar38;
          fVar39 = fVar39 * 255.0;
          if (fVar41 < 0.0) {
            fVar39 = fVar35;
          }
          dVar17 = modf((double)fVar39,(double *)&stack0x00000070);
          if (0.0 <= fVar39) {
            if (dVar17 == 0.5) {
              fVar41 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e40888;
            }
            fVar39 = (float)(int)(fVar39 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
            fVar39 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar39 = fVar41;
            }
          }
          else {
            fVar39 = (float)(int)(fVar39 + -0.5);
          }
          fVar41 = fVar38;
          if (1.0 < fVar38) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          if (fVar38 < 0.0) {
            fVar41 = fVar35;
          }
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e40a4c;
            }
            fVar38 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar35 = -1.0;
LAB_00e40a4c:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar38 = (float)(int)(fVar41 + -0.5);
          }
          *puVar24 = (int)fVar33 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar12 = lVar12 + (long)(int)uVar28 * 4;
        }
        else {
          lVar12 = *(long *)((long)dVar17 + 0xa8);
          if (lVar12 == 0) goto LAB_00e443fc;
          fVar35 = *(float *)(lVar12 + 0x24);
          if (fVar35 != 0.0) {
            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
          }
          plVar31 = (long *)StringLiteral_9119;
          cVar7 = *(char *)(lVar12 + 0x2c);
          lVar23 = *unaff_x24;
          lVar18 = *(long *)(lVar12 + 0x18);
          fVar38 = fVar38 * fVar35;
          if (*(int *)(lVar12 + 0x28) == 1) {
            if (cVar7 == '\0') {
              if (lVar18 == 0) goto LAB_00e443fc;
              fVar42 = *(float *)(lVar12 + 0x20);
              fVar41 = *(float *)((long)dVar17 + 0x84);
              fVar38 = fVar38 + (*(float *)((long)dVar17 + 0x48) * fVar42) / fVar41;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = fVar33;
              }
              fVar39 = fVar35;
              if (fVar38 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,lVar18,0);
              fVar38 = fVar39;
              if (1.0 < fVar39) {
                fVar38 = fVar33;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar39 < 0.0) {
                fVar38 = 0.0;
              }
              dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3eeac;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar33;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar33 = fVar35;
              if (1.0 < fVar35) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar35 < 0.0) {
                fVar33 = 0.0;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e41534;
                }
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = fVar35;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar35 = fVar42;
              if (1.0 < fVar42) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar42 < 0.0) {
                fVar35 = 0.0;
              }
              dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar17 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              fVar42 = fVar41;
              if (1.0 < fVar41) {
                fVar42 = 1.0;
              }
              fVar42 = fVar42 * 255.0;
              if (fVar41 < 0.0) {
                fVar42 = 0.0;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              if (lVar23 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_00e44400;
              *(uint *)(lVar23 + uVar13 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar42 << 0x18;
              dVar17 = *pdVar1;
              if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
                 (lVar18 = *(long *)(lVar12 + 0x18), lVar18 == 0)) goto LAB_00e443fc;
              fVar33 = *(float *)((long)dVar17 + 0x48);
              fVar38 = *(float *)((long)dVar17 + 0x84);
              lVar23 = *unaff_x24;
              fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                       (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
              fVar42 = fVar42 - (float)(int)fVar42;
              fVar35 = fVar42;
              if (1.0 < fVar42) {
                fVar35 = 1.0;
              }
            }
            else {
              if (lVar18 == 0) goto LAB_00e443fc;
              fVar42 = *(float *)((long)dVar17 + 0x84);
              fVar41 = *(float *)(lVar12 + 0x20);
              fVar38 = fVar38 + ((*(float *)((long)dVar17 + 0x48) + fVar42) * fVar41) / fVar42;
              fVar38 = fVar38 - (float)(int)fVar38;
              fVar35 = fVar38;
              if (1.0 < fVar38) {
                fVar35 = fVar33;
              }
              fVar39 = fVar35;
              if (fVar38 < 0.0) {
                fVar39 = 0.0;
              }
              fVar39 = (float)FUN_0269ad38(fVar39,lVar18,0);
              fVar38 = fVar39;
              if (1.0 < fVar39) {
                fVar38 = fVar33;
              }
              fVar38 = fVar38 * 255.0;
              if (fVar39 < 0.0) {
                fVar38 = 0.0;
              }
              dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
              if (0.0 <= fVar38) {
                if (dVar17 == 0.5) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3ed6c;
                }
                fVar38 = (float)(int)(fVar38 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                fVar38 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar38 = fVar33;
                }
              }
              else {
                fVar38 = (float)(int)(fVar38 + -0.5);
              }
              fVar33 = fVar35;
              if (1.0 < fVar35) {
                fVar33 = 1.0;
              }
              fVar33 = fVar33 * 255.0;
              if (fVar35 < 0.0) {
                fVar33 = 0.0;
              }
              dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
              if (0.0 <= fVar33) {
                if (dVar17 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                  goto LAB_00e3f2ec;
                }
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
              else if (dVar17 == -0.5) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = fVar35;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + -0.5);
              }
              fVar35 = fVar42;
              if (1.0 < fVar42) {
                fVar35 = 1.0;
              }
              fVar35 = fVar35 * 255.0;
              if (fVar42 < 0.0) {
                fVar35 = 0.0;
              }
              dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
              if (0.0 <= fVar35) {
                if (dVar17 == 0.5) {
                  fVar35 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar35 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar35 = (float)(int)(fVar35 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + -0.5);
              }
              fVar42 = fVar41;
              if (1.0 < fVar41) {
                fVar42 = 1.0;
              }
              fVar42 = fVar42 * 255.0;
              if (fVar41 < 0.0) {
                fVar42 = 0.0;
              }
              dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
              if (0.0 <= fVar42) {
                if (dVar17 == 0.5) {
                  fVar42 = (float)_fStack0000000000000070;
                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                    fVar42 = (float)_fStack0000000000000070 + 1.0;
                  }
                }
                else {
                  fVar42 = (float)(int)(fVar42 + 0.5);
                }
              }
              else if (dVar17 == -0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + -1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + -0.5);
              }
              if (lVar23 == 0) goto LAB_00e443fc;
              if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_00e44400;
              *(uint *)(lVar23 + uVar13 * 4 + 0x20) =
                   (int)fVar38 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10
                   | (int)fVar42 << 0x18;
              dVar17 = *pdVar1;
              if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
                 (lVar18 = *(long *)(lVar12 + 0x18), lVar18 == 0)) goto LAB_00e443fc;
              fVar33 = *(float *)((long)dVar17 + 0x84);
              fVar38 = *(float *)(lVar12 + 0x20);
              lVar23 = *unaff_x24;
              fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                       ((*(float *)((long)dVar17 + 0x48) + fVar33) * fVar38) / fVar33;
              fVar42 = fVar42 - (float)(int)fVar42;
              fVar35 = fVar42;
              if (1.0 < fVar42) {
                fVar35 = 1.0;
              }
            }
            fVar41 = fVar35;
            if (fVar42 < 0.0) {
              fVar41 = 0.0;
            }
            fVar41 = (float)FUN_0269ad38(fVar41,lVar18,0);
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e419a4;
              }
              fVar41 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar42;
              }
            }
            else {
              fVar41 = (float)(int)(fVar42 + -0.5);
            }
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar35 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41a34;
              }
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = fVar35;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + -0.5);
            }
            fVar35 = fVar33;
            if (1.0 < fVar33) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar33 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            fVar33 = fVar38;
            if (1.0 < fVar38) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar38 < 0.0) {
              fVar33 = 0.0;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar23 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar23 + 0x18) <= uVar30) goto LAB_00e44400;
            *(uint *)(lVar23 + (long)(int)uVar30 * 4 + 0x20) =
                 (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar17 = *pdVar1;
            if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
               (*(long *)(lVar12 + 0x18) == 0)) goto LAB_00e443fc;
            fVar33 = *(float *)((long)dVar17 + 0x48);
            fVar38 = *(float *)((long)dVar17 + 0x84);
            lVar18 = *unaff_x24;
            fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                     (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
            fVar42 = fVar42 - (float)(int)fVar42;
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar41 = fVar35;
            if (fVar42 < 0.0) {
              fVar41 = 0.0;
            }
            fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0);
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41cd0;
              }
              fVar41 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar42;
              }
            }
            else {
              fVar41 = (float)(int)(fVar42 + -0.5);
            }
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar35 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41d60;
              }
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = fVar35;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + -0.5);
            }
            fVar35 = fVar33;
            if (1.0 < fVar33) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar33 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            fVar33 = fVar38;
            if (1.0 < fVar38) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar38 < 0.0) {
              fVar33 = 0.0;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar17 = *pdVar1;
            if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
               (*(long *)(lVar12 + 0x18) == 0)) goto LAB_00e443fc;
            fVar33 = *(float *)((long)dVar17 + 0x48);
            fVar38 = *(float *)((long)dVar17 + 0x84);
            lVar18 = *unaff_x24;
            fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                     (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
            fVar42 = fVar42 - (float)(int)fVar42;
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar41 = fVar35;
            if (fVar42 < 0.0) {
              fVar41 = 0.0;
            }
            fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0);
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e41ffc;
              }
              fVar41 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar42;
              }
            }
            else {
              fVar41 = (float)(int)(fVar42 + -0.5);
            }
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar35 < 0.0) {
              fVar42 = 0.0;
            }
LAB_00e42040:
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (fVar42 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              fVar42 = fVar35 + 1.0;
              goto LAB_00e425d4;
            }
            fVar35 = (float)(int)(fVar42 + 0.5);
          }
          else {
            lVar20 = *in_stack_00000038;
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar3) goto LAB_00e44400;
            if (lVar18 == 0) goto LAB_00e443fc;
            fVar42 = *(float *)(lVar20 + uVar13 * 0xc + 0x20);
            fVar41 = *(float *)((long)dVar17 + 0x84);
            fVar38 = fVar38 + (fVar42 * *(float *)(lVar12 + 0x20)) / fVar41;
            fVar38 = fVar38 - (float)(int)fVar38;
            fVar35 = fVar38;
            if (1.0 < fVar38) {
              fVar35 = fVar33;
            }
            fVar39 = fVar35;
            if (fVar38 < 0.0) {
              fVar39 = 0.0;
            }
            fVar39 = (float)FUN_0269ad38(fVar39,lVar18,0);
            fVar38 = fVar39;
            if (1.0 < fVar39) {
              fVar38 = fVar33;
            }
            fVar38 = fVar38 * 255.0;
            if (fVar39 < 0.0) {
              fVar38 = 0.0;
            }
            dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
            if (0.0 <= fVar38) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3e0b0;
              }
              fVar38 = (float)(int)(fVar38 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
              fVar38 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar38 = fVar33;
              }
            }
            else {
              fVar38 = (float)(int)(fVar38 + -0.5);
            }
            fVar33 = fVar35;
            if (1.0 < fVar35) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar35 < 0.0) {
              fVar33 = 0.0;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3ee80;
              }
              fVar33 = (float)(int)(fVar33 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = fVar35;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar42 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar42 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar42 = (float)(int)(fVar42 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + -0.5);
            }
            if (lVar23 == 0) goto LAB_00e443fc;
            fVar41 = 1.0;
            if (*(uint *)(lVar23 + 0x18) <= uVar3) goto LAB_00e44400;
            *(uint *)(lVar23 + uVar13 * 4 + 0x20) =
                 (int)fVar38 & 0xffU | ((int)fVar33 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar42 << 0x18;
            plVar31 = (long *)StringLiteral_9119;
            dVar17 = *pdVar1;
            if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            lVar20 = *unaff_x24;
            lVar23 = *(long *)(lVar12 + 0x18);
            fVar35 = fVar44 * *(float *)(lVar12 + 0x24);
            if (cVar7 != '\0') {
              if (uVar30 < *(uint *)(lVar18 + 0x18)) {
                if (lVar23 != 0) {
                  fVar33 = *(float *)(lVar18 + (long)(int)uVar30 * 0xc + 0x20);
                  fVar38 = *(float *)((long)dVar17 + 0x84);
                  fVar35 = fVar35 + (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
                  fVar35 = fVar35 - (float)(int)fVar35;
                  fVar42 = fVar35;
                  if (1.0 < fVar35) {
                    fVar42 = fVar41;
                  }
                  fVar39 = fVar42;
                  if (fVar35 < 0.0) {
                    fVar39 = 0.0;
                  }
                  fVar39 = (float)FUN_0269ad38(fVar39,lVar23,0);
                  fVar35 = fVar39;
                  if (1.0 < fVar39) {
                    fVar35 = fVar41;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar17 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f234;
                    }
                    fVar41 = (float)(int)(fVar35 + 0.5);
                  }
                  else if (dVar17 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                    fVar41 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar41 = fVar35;
                    }
                  }
                  else {
                    fVar41 = (float)(int)(fVar35 + -0.5);
                  }
                  fVar35 = fVar42;
                  if (1.0 < fVar42) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar42 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar17 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e3f594;
                    }
                    fVar42 = (float)(int)(fVar35 + 0.5);
                  }
                  else if (dVar17 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = fVar35;
                    }
                  }
                  else {
                    fVar42 = (float)(int)(fVar35 + -0.5);
                  }
                  fVar35 = fVar33;
                  if (1.0 < fVar33) {
                    fVar35 = 1.0;
                  }
                  fVar35 = fVar35 * 255.0;
                  if (fVar33 < 0.0) {
                    fVar35 = 0.0;
                  }
                  dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
                  if (0.0 <= fVar35) {
                    if (dVar17 == 0.5) {
                      fVar35 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar35 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar35 = (float)(int)(fVar35 + 0.5);
                    }
                  }
                  else if (dVar17 == -0.5) {
                    fVar35 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar35 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar35 = (float)(int)(fVar35 + -0.5);
                  }
                  fVar33 = fVar38;
                  if (1.0 < fVar38) {
                    fVar33 = 1.0;
                  }
                  fVar33 = fVar33 * 255.0;
                  if (fVar38 < 0.0) {
                    fVar33 = 0.0;
                  }
                  dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
                  if (0.0 <= fVar33) {
                    if (dVar17 == 0.5) {
                      fVar33 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar33 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar33 = (float)(int)(fVar33 + 0.5);
                    }
                  }
                  else if (dVar17 == -0.5) {
                    fVar33 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar33 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar33 = (float)(int)(fVar33 + -0.5);
                  }
                  if (lVar20 != 0) {
                    if (uVar30 < *(uint *)(lVar20 + 0x18)) {
                      *(uint *)(lVar20 + (long)(int)uVar30 * 4 + 0x20) =
                           (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                           ((int)fVar35 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
                      dVar17 = *pdVar1;
                      if (((dVar17 != 0.0) && (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 != 0)
                          ) && (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                        if (uVar28 < *(uint *)(lVar18 + 0x18)) {
                          if (*(long *)(lVar12 + 0x18) != 0) {
                            fVar33 = *(float *)(lVar18 + (long)(int)uVar28 * 0xc + 0x20);
                            fVar38 = *(float *)((long)dVar17 + 0x84);
                            lVar18 = *unaff_x24;
                            fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                                     (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
                            fVar42 = fVar42 - (float)(int)fVar42;
                            fVar35 = fVar42;
                            if (1.0 < fVar42) {
                              fVar35 = 1.0;
                            }
                            fVar41 = fVar35;
                            if (fVar42 < 0.0) {
                              fVar41 = 0.0;
                            }
                            fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0);
                            fVar42 = fVar41;
                            if (1.0 < fVar41) {
                              fVar42 = 1.0;
                            }
                            fVar42 = fVar42 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar42 = 0.0;
                            }
                            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
                            if (0.0 <= fVar42) {
                              if (dVar17 == 0.5) {
                                fVar42 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f858;
                              }
                              fVar41 = (float)(int)(fVar42 + 0.5);
                            }
                            else if (dVar17 == -0.5) {
                              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = fVar42;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar42 + -0.5);
                            }
                            fVar42 = fVar35;
                            if (1.0 < fVar35) {
                              fVar42 = 1.0;
                            }
                            fVar42 = fVar42 * 255.0;
                            if (fVar35 < 0.0) {
                              fVar42 = 0.0;
                            }
                            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
                            if (0.0 <= fVar42) {
                              if (dVar17 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f8e8;
                              }
                              fVar42 = (float)(int)(fVar42 + 0.5);
                            }
                            else if (dVar17 == -0.5) {
                              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                              fVar42 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar42 = fVar35;
                              }
                            }
                            else {
                              fVar42 = (float)(int)(fVar42 + -0.5);
                            }
                            fVar35 = fVar33;
                            if (1.0 < fVar33) {
                              fVar35 = 1.0;
                            }
                            fVar35 = fVar35 * 255.0;
                            if (fVar33 < 0.0) {
                              fVar35 = 0.0;
                            }
                            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
                            if (0.0 <= fVar35) {
                              if (dVar17 == 0.5) {
                                fVar35 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar35 = (float)(int)(fVar35 + 0.5);
                              }
                            }
                            else if (dVar17 == -0.5) {
                              fVar35 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar35 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar35 = (float)(int)(fVar35 + -0.5);
                            }
                            fVar33 = fVar38;
                            if (1.0 < fVar38) {
                              fVar33 = 1.0;
                            }
                            fVar33 = fVar33 * 255.0;
                            if (fVar38 < 0.0) {
                              fVar33 = 0.0;
                            }
                            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
                            plVar31 = (long *)StringLiteral_9119;
                            if (0.0 <= fVar33) {
                              if (dVar17 == 0.5) {
                                fVar33 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar33 = (float)(int)(fVar33 + 0.5);
                              }
                            }
                            else if (dVar17 == -0.5) {
                              fVar33 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar33 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar33 = (float)(int)(fVar33 + -0.5);
                            }
                            if (lVar18 != 0) {
                              if (uVar28 < *(uint *)(lVar18 + 0x18)) {
                                *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                                     (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                                     ((int)fVar35 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
                                dVar17 = *pdVar1;
                                if (((dVar17 != 0.0) &&
                                    (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 != 0)) &&
                                   (lVar18 = *in_stack_00000038, lVar18 != 0)) {
                                  if (uVar25 < *(uint *)(lVar18 + 0x18)) {
                                    if (*(long *)(lVar12 + 0x18) != 0) {
                                      fVar33 = *(float *)(lVar18 + uVar27 * 0xc + 0x20);
                                      fVar38 = *(float *)((long)dVar17 + 0x84);
                                      lVar18 = *unaff_x24;
                                      fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                                               (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
                                      fVar42 = fVar42 - (float)(int)fVar42;
                                      fVar35 = fVar42;
                                      if (1.0 < fVar42) {
                                        fVar35 = 1.0;
                                      }
                                      fVar41 = fVar35;
                                      if (fVar42 < 0.0) {
                                        fVar41 = 0.0;
                                      }
                                      fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0
                                                                  );
                                      fVar42 = fVar41;
                                      if (1.0 < fVar41) {
                                        fVar42 = 1.0;
                                      }
                                      param_3 = 0x437f0000;
                                      fVar42 = fVar42 * 255.0;
                                      if (fVar41 < 0.0) {
                                        fVar42 = 0.0;
                                      }
                                      dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
                                      if (0.0 <= fVar42) {
                                        if (dVar17 == 0.5) {
                                          fVar42 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3fbd0;
                                        }
                                        fVar41 = (float)(int)(fVar42 + 0.5);
                                      }
                                      else if (dVar17 == -0.5) {
                                        fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                        fVar41 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar41 = fVar42;
                                        }
                                      }
                                      else {
                                        fVar41 = (float)(int)(fVar42 + -0.5);
                                      }
                                      fVar42 = fVar35;
                                      if (1.0 < fVar35) {
                                        fVar42 = 1.0;
                                      }
                                      fVar42 = fVar42 * 255.0;
                                      if (fVar35 < 0.0) {
                                        fVar42 = 0.0;
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
            if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
            if (lVar23 == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar18 + uVar13 * 0xc + 0x20);
            fVar38 = *(float *)((long)dVar17 + 0x84);
            fVar35 = fVar35 + (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
            fVar35 = fVar35 - (float)(int)fVar35;
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = fVar41;
            }
            fVar39 = fVar42;
            if (fVar35 < 0.0) {
              fVar39 = 0.0;
            }
            fVar39 = (float)FUN_0269ad38(fVar39,lVar23,0);
            fVar35 = fVar39;
            if (1.0 < fVar39) {
              fVar35 = fVar41;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar39 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e3f25c;
              }
              fVar41 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar35;
              }
            }
            else {
              fVar41 = (float)(int)(fVar35 + -0.5);
            }
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar42 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e415c4;
              }
              fVar42 = (float)(int)(fVar35 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = fVar35;
              }
            }
            else {
              fVar42 = (float)(int)(fVar35 + -0.5);
            }
            fVar35 = fVar33;
            if (1.0 < fVar33) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar33 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            fVar33 = fVar38;
            if (1.0 < fVar38) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar38 < 0.0) {
              fVar33 = 0.0;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar20 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar20 + 0x18) <= uVar30) goto LAB_00e44400;
            *(uint *)(lVar20 + (long)(int)uVar30 * 4 + 0x20) =
                 (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar17 = *pdVar1;
            if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
            if (*(long *)(lVar12 + 0x18) == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar18 + uVar13 * 0xc + 0x20);
            fVar38 = *(float *)((long)dVar17 + 0x84);
            lVar18 = *unaff_x24;
            fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                     (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
            fVar42 = fVar42 - (float)(int)fVar42;
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar41 = fVar35;
            if (fVar42 < 0.0) {
              fVar41 = 0.0;
            }
            fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0);
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e421fc;
              }
              fVar41 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar42;
              }
            }
            else {
              fVar41 = (float)(int)(fVar42 + -0.5);
            }
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar35 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e4228c;
              }
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = fVar35;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + -0.5);
            }
            fVar35 = fVar33;
            if (1.0 < fVar33) {
              fVar35 = 1.0;
            }
            fVar35 = fVar35 * 255.0;
            if (fVar33 < 0.0) {
              fVar35 = 0.0;
            }
            dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
            if (0.0 <= fVar35) {
              if (dVar17 == 0.5) {
                fVar35 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar35 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar35 = (float)(int)(fVar35 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + -0.5);
            }
            fVar33 = fVar38;
            if (1.0 < fVar38) {
              fVar33 = 1.0;
            }
            fVar33 = fVar33 * 255.0;
            if (fVar38 < 0.0) {
              fVar33 = 0.0;
            }
            dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
            if (0.0 <= fVar33) {
              if (dVar17 == 0.5) {
                fVar33 = (float)_fStack0000000000000070;
                if (((long)_fStack0000000000000070 & 1U) != 0) {
                  fVar33 = (float)_fStack0000000000000070 + 1.0;
                }
              }
              else {
                fVar33 = (float)(int)(fVar33 + 0.5);
              }
            }
            else if (dVar17 == -0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + -1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar33 + -0.5);
            }
            if (lVar18 == 0) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar28) goto LAB_00e44400;
            *(uint *)(lVar18 + (long)(int)uVar28 * 4 + 0x20) =
                 (int)fVar41 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar35 & 0xffU) << 0x10 |
                 (int)fVar33 << 0x18;
            dVar17 = *pdVar1;
            if (((dVar17 == 0.0) || (lVar12 = *(long *)((long)dVar17 + 0xa8), lVar12 == 0)) ||
               (lVar18 = *in_stack_00000038, lVar18 == 0)) goto LAB_00e443fc;
            if (*(uint *)(lVar18 + 0x18) <= uVar3) goto LAB_00e44400;
            if (*(long *)(lVar12 + 0x18) == 0) goto LAB_00e443fc;
            fVar33 = *(float *)(lVar18 + uVar13 * 0xc + 0x20);
            fVar38 = *(float *)((long)dVar17 + 0x84);
            lVar18 = *unaff_x24;
            fVar42 = fVar44 * *(float *)(lVar12 + 0x24) +
                     (fVar33 * *(float *)(lVar12 + 0x20)) / fVar38;
            fVar42 = fVar42 - (float)(int)fVar42;
            fVar35 = fVar42;
            if (1.0 < fVar42) {
              fVar35 = 1.0;
            }
            fVar41 = fVar35;
            if (fVar42 < 0.0) {
              fVar41 = 0.0;
            }
            fVar41 = (float)FUN_0269ad38(fVar41,*(long *)(lVar12 + 0x18),0);
            fVar42 = fVar41;
            if (1.0 < fVar41) {
              fVar42 = 1.0;
            }
            param_3 = 0x437f0000;
            fVar42 = fVar42 * 255.0;
            if (fVar41 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) {
              if (dVar17 == 0.5) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
                goto LAB_00e42560;
              }
              fVar41 = (float)(int)(fVar42 + 0.5);
            }
            else if (dVar17 == -0.5) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar42;
              }
            }
            else {
              fVar41 = (float)(int)(fVar42 + -0.5);
            }
            fVar42 = fVar35;
            if (1.0 < fVar35) {
              fVar42 = 1.0;
            }
            fVar42 = fVar42 * 255.0;
            if (fVar35 < 0.0) {
              fVar42 = 0.0;
            }
            dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
            if (0.0 <= fVar42) goto LAB_00e425b8;
LAB_00e4204c:
            if (dVar17 == -0.5) {
              fVar35 = (float)_fStack0000000000000070;
              fVar42 = fVar35 + -1.0;
LAB_00e425d4:
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = fVar42;
              }
            }
            else {
              fVar35 = (float)(int)(fVar42 + -0.5);
            }
          }
          fVar42 = fVar33;
          if (1.0 < fVar33) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42654;
            }
            fVar33 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = fVar42;
            }
          }
          else {
            fVar33 = (float)(int)(fVar42 + -0.5);
          }
          fVar42 = fVar38;
          if (1.0 < fVar38) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar38 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e426e4;
            }
            fVar38 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar42;
            }
          }
          else {
            fVar38 = (float)(int)(fVar42 + -0.5);
          }
          if (lVar18 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_00e44400;
          *(uint *)(lVar18 + uVar27 * 4 + 0x20) =
               (int)fVar41 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
               (int)fVar38 << 0x18;
          if (*pdVar1 == 0.0) goto LAB_00e443fc;
          uVar21 = *(undefined8 *)((long)*pdVar1 + 0xa0);
          uVar45 = unaff_d14 & 0xffffffff;
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar32 = FUN_02681b9c(uVar21,0,0);
          if ((uVar32 & 1) == 0) goto LAB_00e43400;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + uVar13 * 4 + 0x20);
          uVar6 = *puVar24;
          if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
          goto LAB_00e443fc;
          fVar35 = ((float)(uVar6 & 0xff) / 255.0) * *(float *)(lVar12 + 0x18);
          fVar41 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
          fVar38 = *(float *)(lVar12 + 0x20);
          fVar33 = *(float *)(lVar12 + 0x24);
          fVar42 = fVar35 * 255.0;
          if (fVar35 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e4287c;
            }
            fVar42 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar35 = -1.0;
LAB_00e4287c:
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar35 = fVar41 * 255.0;
          fVar38 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar38;
          if (fVar41 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          fVar41 = fVar38;
          if (1.0 < fVar38) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          fVar33 = ((float)(uVar6 >> 0x18) / 255.0) * fVar33;
          if (fVar38 < 0.0) {
            fVar41 = 0.0;
          }
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e429c8;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = fVar38;
            }
          }
          else {
            fVar41 = (float)(int)(fVar41 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = 0.0;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e42a44;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = -1.0;
LAB_00e42a44:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *puVar24 = (int)fVar42 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar41 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20);
          uVar6 = *puVar24;
          if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
          goto LAB_00e443fc;
          fVar35 = ((float)(uVar6 & 0xff) / 255.0) * *(float *)(lVar12 + 0x18);
          fVar41 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
          fVar38 = *(float *)(lVar12 + 0x20);
          fVar33 = *(float *)(lVar12 + 0x24);
          fVar42 = fVar35 * 255.0;
          if (fVar35 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar35 = 1.0;
              goto LAB_00e42b80;
            }
            fVar42 = (float)(int)(fVar42 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar35 = -1.0;
LAB_00e42b80:
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + fVar35;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar35 = fVar41 * 255.0;
          fVar38 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar38;
          if (fVar41 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          fVar41 = fVar38;
          if (1.0 < fVar38) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          fVar33 = ((float)(uVar6 >> 0x18) / 255.0) * fVar33;
          if (fVar38 < 0.0) {
            fVar41 = 0.0;
          }
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar38 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e42ccc;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
            fVar41 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar41 = fVar38;
            }
          }
          else {
            fVar41 = (float)(int)(fVar41 + -0.5);
          }
          fVar38 = fVar33;
          if (1.0 < fVar33) {
            fVar38 = 1.0;
          }
          fVar38 = fVar38 * 255.0;
          if (fVar33 < 0.0) {
            fVar38 = 0.0;
          }
          dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
          if (0.0 <= fVar38) {
            if (dVar17 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e42d48;
            }
            fVar38 = (float)(int)(fVar38 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = -1.0;
LAB_00e42d48:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = (float)_fStack0000000000000070 + fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar38 + -0.5);
          }
          *puVar24 = (int)fVar42 & 0xffU | ((int)fVar35 & 0xffU) << 8 |
                     ((int)fVar41 & 0xffU) << 0x10 | (int)fVar38 << 0x18;
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          lVar12 = lVar12 + (long)(int)uVar28 * 4;
        }
        uVar6 = *(uint *)(lVar12 + 0x20);
        if ((*pdVar1 == 0.0) || (lVar18 = *(long *)((long)*pdVar1 + 0xa0), lVar18 == 0))
        goto LAB_00e443fc;
        fVar35 = ((float)(uVar6 & 0xff) / 255.0) * *(float *)(lVar18 + 0x18);
        fVar41 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar18 + 0x1c);
        fVar38 = *(float *)(lVar18 + 0x20);
        fVar33 = *(float *)(lVar18 + 0x24);
        fVar42 = fVar35 * 255.0;
        if (fVar35 < 0.0) {
          fVar42 = 0.0;
        }
        dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
        if (0.0 <= fVar42) {
          if (dVar17 == 0.5) {
            fVar35 = 1.0;
            goto FUN_00e42e84;
          }
          fVar42 = (float)(int)(fVar42 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar35 = -1.0;
FUN_00e42e84:
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + fVar35;
          }
        }
        else {
          fVar42 = (float)(int)(fVar42 + -0.5);
        }
        fVar35 = fVar41 * 255.0;
        fVar38 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar38;
        if (fVar41 < 0.0) {
          fVar35 = 0.0;
        }
        dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
        if (0.0 <= fVar35) {
          if (dVar17 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar35 = (float)(int)(fVar35 + -0.5);
        }
        fVar41 = fVar38;
        if (1.0 < fVar38) {
          fVar41 = 1.0;
        }
        fVar41 = fVar41 * 255.0;
        fVar33 = ((float)(uVar6 >> 0x18) / 255.0) * fVar33;
        if (fVar38 < 0.0) {
          fVar41 = 0.0;
        }
        dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
        if (0.0 <= fVar41) {
          if (dVar17 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e42fd0;
          }
          fVar41 = (float)(int)(fVar41 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
          fVar41 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar41 = fVar38;
          }
        }
        else {
          fVar41 = (float)(int)(fVar41 + -0.5);
        }
        fVar38 = fVar33;
        if (1.0 < fVar33) {
          fVar38 = 1.0;
        }
        fVar38 = fVar38 * 255.0;
        if (fVar33 < 0.0) {
          fVar38 = 0.0;
        }
        dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar17 == 0.5) {
            fVar33 = 1.0;
            goto LAB_00e4304c;
          }
          fVar38 = (float)(int)(fVar38 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar33 = -1.0;
LAB_00e4304c:
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + fVar33;
          }
        }
        else {
          fVar38 = (float)(int)(fVar38 + -0.5);
        }
        *(uint *)(lVar12 + 0x20) =
             (int)fVar42 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar41 & 0xffU) << 0x10 |
             (int)fVar38 << 0x18;
        lVar12 = *unaff_x24;
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        puVar24 = (uint *)(lVar12 + uVar27 * 4 + 0x20);
        uVar6 = *puVar24;
        if ((*pdVar1 == 0.0) || (lVar12 = *(long *)((long)*pdVar1 + 0xa0), lVar12 == 0))
        goto LAB_00e443fc;
        fVar35 = (float)(uVar6 & 0xff) / 255.0;
        param_3 = (ulong)(uint)fVar35;
        fVar35 = fVar35 * *(float *)(lVar12 + 0x18);
        fVar41 = ((float)(uVar6 >> 8 & 0xff) / 255.0) * *(float *)(lVar12 + 0x1c);
        fVar38 = *(float *)(lVar12 + 0x20);
        fVar33 = *(float *)(lVar12 + 0x24);
        fVar42 = fVar35 * 255.0;
        if (fVar35 < 0.0) {
          fVar42 = 0.0;
        }
        dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
        if (0.0 <= fVar42) {
          if (dVar17 == 0.5) {
            fVar35 = 1.0;
            goto LAB_00e4318c;
          }
          fVar42 = (float)(int)(fVar42 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar35 = -1.0;
LAB_00e4318c:
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + fVar35;
          }
        }
        else {
          fVar42 = (float)(int)(fVar42 + -0.5);
        }
        fVar35 = fVar41 * 255.0;
        fVar38 = ((float)(uVar6 >> 0x10 & 0xff) / 255.0) * fVar38;
        if (fVar41 < 0.0) {
          fVar35 = 0.0;
        }
        dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
        if (0.0 <= fVar35) {
          if (dVar17 == 0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar35 = (float)(int)(fVar35 + -0.5);
        }
        fVar41 = fVar38;
        if (1.0 < fVar38) {
          fVar41 = 1.0;
        }
        fVar41 = fVar41 * 255.0;
        fVar33 = ((float)(uVar6 >> 0x18) / 255.0) * fVar33;
        if (fVar38 < 0.0) {
          fVar41 = 0.0;
        }
        dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
        unaff_s15 = fStack000000000000000c;
        if (0.0 <= fVar41) {
          if (dVar17 == 0.5) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
            goto LAB_00e432e0;
          }
          fVar41 = (float)(int)(fVar41 + 0.5);
        }
        else if (dVar17 == -0.5) {
          fVar38 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
          fVar41 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar41 = fVar38;
          }
        }
        else {
          fVar41 = (float)(int)(fVar41 + -0.5);
        }
        fVar38 = fVar33;
        if (1.0 < fVar33) {
          fVar38 = 1.0;
        }
        fVar38 = fVar38 * 255.0;
        if (fVar33 < 0.0) {
          fVar38 = 0.0;
        }
        dVar17 = modf((double)fVar38,(double *)&stack0x00000070);
        if (0.0 <= fVar38) {
          if (dVar17 == 0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar38 + 0.5);
          }
        }
        else if (dVar17 == -0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
          }
        }
        else {
          fVar33 = (float)(int)(fVar38 + -0.5);
        }
        uVar45 = unaff_d14 & 0xffffffff;
        *puVar24 = (int)fVar42 & 0xffU | ((int)fVar35 & 0xffU) << 8 | ((int)fVar41 & 0xffU) << 0x10
                   | (int)fVar33 << 0x18;
      }
      else {
        if (*(long *)((long)dVar17 + 0x100) == 0) goto LAB_00e443fc;
        if (*(char *)(*(long *)((long)dVar17 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
        lVar12 = *unaff_x24;
        dVar17 = modf(DAT_028aa048,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar42 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
        *(uint *)(lVar12 + uVar13 * 4 + 0x20) =
             (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar38 << 0x18;
        lVar12 = *unaff_x24;
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar42 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
        *(uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20) =
             (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar38 << 0x18;
        lVar12 = *unaff_x24;
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar42 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
        *(uint *)(lVar12 + (long)(int)uVar28 * 4 + 0x20) =
             (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar38 << 0x18;
        lVar12 = *unaff_x24;
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar35 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar35 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar35 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar42 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar42 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar42 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar33 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar33 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar33 = 255.0;
        }
        dVar17 = modf(dVar36,(double *)&stack0x00000070);
        if (dVar17 == 0.5) {
          fVar38 = (float)_fStack0000000000000070;
          if (((long)_fStack0000000000000070 & 1U) != 0) {
            fVar38 = (float)_fStack0000000000000070 + 1.0;
          }
        }
        else {
          fVar38 = 255.0;
        }
        if (lVar12 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
        *(uint *)(lVar12 + uVar27 * 4 + 0x20) =
             (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10 |
             (int)fVar38 << 0x18;
      }
LAB_00e43400:
      lVar12 = *unaff_x24;
      if (lVar12 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
      lVar12 = lVar12 + uVar13 * 4;
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x23));
      *(char *)(lVar12 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
      lVar12 = unaff_x19[0x5f];
      if (lVar12 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
      lVar12 = lVar12 + (long)(int)uVar30 * 4;
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x23));
      *(char *)(lVar12 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
      lVar12 = unaff_x19[0x5f];
      if (lVar12 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
      lVar12 = lVar12 + (long)(int)uVar28 * 4;
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x23));
      *(char *)(lVar12 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
      lVar12 = unaff_x19[0x5f];
      if (lVar12 == 0) goto LAB_00e443fc;
      if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
      lVar12 = lVar12 + uVar27 * 4;
      param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
      fVar35 = (float)NEON_ucvtf((uint)*(byte *)(lVar12 + 0x23));
      *(char *)(lVar12 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar35);
      uVar32 = FUN_00e3703c();
      if ((uVar32 & 1) == 0) {
        lVar12 = *plVar31;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar12 = *plVar31;
        }
        if (*(int *)(*(long *)(lVar12 + 0xb8) + 0x20) == 1) {
          lVar12 = *unaff_x24;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + uVar13 * 4 + 0x20);
          uVar6 = *puVar24;
          fVar42 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
          fVar35 = fVar42;
          if (1.0 < fVar42) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar42 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          fVar42 = fVar33;
          if (1.0 < fVar33) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          fVar41 = (float)(uVar6 >> 0x18) / 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43744;
            }
            fVar38 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar41) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar41 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar41 + -0.5);
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar3) goto LAB_00e44400;
          *puVar24 = (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar12 = *in_stack_00000030;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + (long)(int)uVar30 * 4 + 0x20);
          uVar3 = *puVar24;
          fVar42 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
          fVar35 = fVar42;
          if (1.0 < fVar42) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar42 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          fVar42 = fVar33;
          if (1.0 < fVar33) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          fVar41 = (float)(uVar3 >> 0x18) / 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43a84;
            }
            fVar38 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar41) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar41 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar41 + -0.5);
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar30) goto LAB_00e44400;
          *puVar24 = (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar12 = *in_stack_00000030;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + (long)(int)uVar28 * 4 + 0x20);
          uVar3 = *puVar24;
          fVar42 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
          fVar35 = fVar42;
          if (1.0 < fVar42) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar42 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          fVar42 = fVar33;
          if (1.0 < fVar33) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          fVar41 = (float)(uVar3 >> 0x18) / 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e43dbc;
            }
            fVar38 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar41) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar33 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar33 = (float)(int)(fVar41 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar33 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar33 = (float)(int)(fVar41 + -0.5);
          }
          if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_00e44400;
          *puVar24 = (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar33 << 0x18;
          lVar12 = *in_stack_00000030;
          if (lVar12 == 0) goto LAB_00e443fc;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          puVar24 = (uint *)(lVar12 + uVar27 * 4 + 0x20);
          uVar3 = *puVar24;
          fVar42 = (float)FUN_026982b0((float)(uVar3 & 0xff) / 255.0,0);
          fVar33 = (float)FUN_026982b0((float)(uVar3 >> 8 & 0xff) / 255.0,0);
          fVar38 = (float)FUN_026982b0((float)(uVar3 >> 0x10 & 0xff) / 255.0,0);
          fVar35 = fVar42;
          if (1.0 < fVar42) {
            fVar35 = 1.0;
          }
          fVar35 = fVar35 * 255.0;
          if (fVar42 < 0.0) {
            fVar35 = 0.0;
          }
          dVar17 = modf((double)fVar35,(double *)&stack0x00000070);
          if (0.0 <= fVar35) {
            if (dVar17 == 0.5) {
              fVar35 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar35 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar35 = (float)(int)(fVar35 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar35 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar35 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar35 = (float)(int)(fVar35 + -0.5);
          }
          param_3 = 0x3f800000;
          fVar42 = fVar33;
          if (1.0 < fVar33) {
            fVar42 = 1.0;
          }
          fVar42 = fVar42 * 255.0;
          if (fVar33 < 0.0) {
            fVar42 = 0.0;
          }
          dVar17 = modf((double)fVar42,(double *)&stack0x00000070);
          if (0.0 <= fVar42) {
            if (dVar17 == 0.5) {
              fVar42 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar42 = (float)_fStack0000000000000070 + 1.0;
              }
            }
            else {
              fVar42 = (float)(int)(fVar42 + 0.5);
            }
          }
          else if (dVar17 == -0.5) {
            fVar42 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar42 = (float)_fStack0000000000000070 + -1.0;
            }
          }
          else {
            fVar42 = (float)(int)(fVar42 + -0.5);
          }
          fVar33 = fVar38;
          if (1.0 < fVar38) {
            fVar33 = 1.0;
          }
          fVar33 = fVar33 * 255.0;
          fVar41 = (float)(uVar3 >> 0x18) / 255.0;
          if (fVar38 < 0.0) {
            fVar33 = 0.0;
          }
          dVar17 = modf((double)fVar33,(double *)&stack0x00000070);
          if (0.0 <= fVar33) {
            if (dVar17 == 0.5) {
              fVar33 = (float)_fStack0000000000000070 + 1.0;
              goto LAB_00e440f4;
            }
            fVar38 = (float)(int)(fVar33 + 0.5);
          }
          else if (dVar17 == -0.5) {
            fVar33 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
            fVar38 = (float)_fStack0000000000000070;
            if (((long)_fStack0000000000000070 & 1U) != 0) {
              fVar38 = fVar33;
            }
          }
          else {
            fVar38 = (float)(int)(fVar33 + -0.5);
          }
          if (1.0 < fVar41) {
            fVar41 = 1.0;
          }
          fVar41 = fVar41 * 255.0;
          dVar17 = modf((double)fVar41,(double *)&stack0x00000070);
          if (0.0 <= fVar41) {
            param_2 = 0;
            if (dVar17 == 0.5) {
              fVar33 = 1.0;
              goto LAB_00e44170;
            }
            fVar41 = (float)(int)(fVar41 + 0.5);
          }
          else {
            param_2 = 0;
            if (dVar17 == -0.5) {
              fVar33 = -1.0;
LAB_00e44170:
              fVar33 = (float)_fStack0000000000000070 + fVar33;
              param_2 = (ulong)(uint)fVar33;
              fVar41 = (float)_fStack0000000000000070;
              if (((long)_fStack0000000000000070 & 1U) != 0) {
                fVar41 = fVar33;
              }
            }
            else {
              fVar41 = (float)(int)(fVar41 + -0.5);
            }
          }
          uVar45 = unaff_d14 & 0xffffffff;
          if (*(uint *)(lVar12 + 0x18) <= uVar25) goto LAB_00e44400;
          *puVar24 = (int)fVar35 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                     ((int)fVar38 & 0xffU) << 0x10 | (int)fVar41 << 0x18;
          unaff_x24 = in_stack_00000030;
        }
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != unaff_x29);
  }
  puVar8 = StringLiteral_4992;
  if (((unaff_x19[0x58] != 0) && (iVar11 = FUN_026c82cc(unaff_x19[0x58],0), 0 < iVar11)) ||
     (unaff_x19[0x59] != 0)) {
    puVar9 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
    if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
    iVar11 = *(int *)(unaff_x19[0xf] + 0x10);
    plVar14 = unaff_x19 + 0xcb;
    if (iVar11 != *(int *)(unaff_x19[0xcb] + 0x18)) {
      FUN_010afdd4(plVar14,iVar11,
                   *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
    }
    if ((unaff_x19[0xcc] == 0) || (lVar12 = unaff_x19[0xf], lVar12 == 0)) goto LAB_00e443fc;
    plVar31 = unaff_x19 + 0xcc;
    if (*(int *)(lVar12 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
      FUN_010afdd4(plVar31,*(int *)(lVar12 + 0x10),*(undefined8 *)puVar9);
      lVar12 = unaff_x19[0xf];
      if (lVar12 == 0) goto LAB_00e443fc;
    }
    uVar3 = *(uint *)(lVar12 + 0x10);
    if (0 < (int)uVar3) {
      uVar26 = 0;
      lVar12 = 0x20;
      do {
        if (unaff_x19[9] == 0) goto LAB_00e443fc;
        FUN_0132138c(unaff_x19[9],uVar26 & 0xffffffff,&stack0x00000070,*(undefined8 *)puVar8);
        unaff_x19[0xca] = (long)_fStack0000000000000070;
        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
        lVar18 = unaff_x19[0xcb];
        uVar34 = FUN_00e58a1c(_fStack0000000000000070,0);
        if (lVar18 == 0) goto LAB_00e443fc;
        if (*(uint *)(lVar18 + 0x18) <= uVar26) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        puVar2 = (undefined4 *)(lVar18 + lVar12);
        *puVar2 = uVar34;
        puVar2[1] = (int)param_2;
        puVar2[2] = (int)param_3;
        lVar18 = unaff_x19[0xca];
        if ((lVar18 == 0) || (lVar23 = unaff_x19[0xcc], lVar23 == 0)) goto LAB_00e443fc;
        if (*(uint *)(lVar23 + 0x18) <= uVar26) goto LAB_00e44400;
        uVar34 = *(undefined4 *)(lVar18 + 0x4c);
        uVar26 = uVar26 + 1;
        puVar22 = (undefined8 *)(lVar23 + lVar12);
        lVar12 = lVar12 + 0xc;
        *puVar22 = *(undefined8 *)(lVar18 + 0x44);
        *(undefined4 *)(puVar22 + 1) = uVar34;
      } while (uVar3 != uVar26);
    }
    if (unaff_x19[0x58] != 0) {
      FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar14,*plVar31,
                   *(undefined8 *)StringLiteral_225);
    }
    lVar12 = unaff_x19[0x59];
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),*in_stack_00000038,*plVar14,*plVar31,
                 *(undefined8 *)(lVar12 + 0x28));
    }
    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
  }
  lVar12 = __start_il2cpp();
  if (lVar12 != 0) {
    if ((*(char *)(lVar12 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    }
    return;
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


