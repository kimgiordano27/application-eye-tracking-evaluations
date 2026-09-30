/*
FUNCTION_NAME: FullSerializer.Internal.fsGuidConverter$$CreateInstance
ENTRY_POINT: 00e3c06c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 119
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_1
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

void FullSerializer_Internal_fsGuidConverter__CreateInstance
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  double *pdVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  char cVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  short sVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  double dVar22;
  long lVar23;
  float *pfVar24;
  long lVar25;
  long *unaff_x19;
  int unaff_w20;
  undefined8 *puVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 *unaff_x21;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  long *unaff_x22;
  undefined8 uVar33;
  uint uVar34;
  long *plVar35;
  ulong uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  float fVar48;
  ulong unaff_d14;
  ulong uVar49;
  float unaff_s15;
  float fStack000000000000000c;
  long *in_stack_00000038;
  undefined8 in_stack_00000048;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  if (unaff_x19[0x61] != 0) {
    plVar1 = unaff_x19 + 0x61;
    if (unaff_w20 != *(int *)(unaff_x19[0x61] + 0x18)) {
      FUN_010afdd4(plVar1,unaff_w20,*unaff_x21);
    }
    if (unaff_x19[0x5f] != 0) {
      plVar2 = unaff_x19 + 0x5f;
      if (unaff_w20 != *(int *)(unaff_x19[0x5f] + 0x18)) {
        FUN_010afdd4(plVar2,unaff_w20,
                     *(undefined8 *)
                      Method_RCG_Lovesick_InteractiveObjects_RecordStoreLock_HandlePlaced__);
      }
      puVar13 = Method_TinyJSON_Variant_ToDateTime__;
      puVar12 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
      puVar11 = Method_System_Collections_Generic_Dictionary<string,_JsonSchemaNode>_GetEnumerator__
      ;
      if (unaff_x19[0x62] != 0) {
        if (*(int *)(unaff_x19[0x62] + 0x18) != unaff_w20) {
          uVar16 = FUN_00da4fb8(*(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                                ,unaff_w20);
          lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar13);
          if (lVar17 == 0) goto LAB_00e443fc;
          FUN_01320f6c(lVar17,uVar16,*(undefined8 *)puVar11);
          unaff_x19[0x62] = lVar17;
        }
        if (unaff_x19[99] != 0) {
          if (*(int *)(unaff_x19[99] + 0x18) != unaff_w20) {
            uVar16 = FUN_00da4fb8(*(undefined8 *)puVar12,unaff_w20);
            lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar13);
            if (lVar17 == 0) goto LAB_00e443fc;
            FUN_01320f6c(lVar17,uVar16,*(undefined8 *)puVar11);
            unaff_x19[99] = lVar17;
          }
          if (unaff_x19[0xf] != 0) {
            uVar5 = *(uint *)(unaff_x19[0xf] + 0x10);
            if (0 < (int)uVar5) {
              uVar30 = 0;
              pdVar3 = (double *)(unaff_x19 + 0xca);
              fVar48 = (float)unaff_d14;
              uVar49 = unaff_d14;
              fStack000000000000000c = unaff_s15;
              do {
                puVar12 = StringLiteral_4992;
                puVar11 = OVREyeGaze_TypeInfo;
                fVar39 = 0.0;
                if (unaff_x19[9] == 0) goto LAB_00e443fc;
                FUN_0132138c(unaff_x19[9],uVar30 & 0xffffffff,&stack0x00000070,
                             *(undefined8 *)StringLiteral_4992);
                *pdVar3 = _fStack0000000000000070;
                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                iVar15 = FUN_00e4e99c();
                if (iVar15 <= *(int *)((long)unaff_x19 + 0x38c)) {
                  if (*pdVar3 == 0.0) goto LAB_00e443fc;
                  *(undefined1 *)((long)*pdVar3 + 0x165) = 1;
                }
                if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                  FUN_00e45d2c();
                }
                *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                  uVar18 = FUN_0269e56c(0);
                  if (((in_stack_00000048._4_4_ == 0.0) || ((uVar18 & 1) == 0)) ||
                     (1 < (int)unaff_x19[0x2a] - 3U)) {
                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                    iVar15 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                    *(int *)((long)unaff_x19 + 0x38c) = iVar15;
                    if ((unaff_x19[9] == 0) ||
                       (FUN_0132138c(unaff_x19[9],iVar15,&stack0x00000070,*(undefined8 *)puVar12),
                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                    *(undefined4 *)(unaff_x19 + 0x4a) =
                         *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                    if ((unaff_x19[9] == 0) ||
                       (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                     &stack0x00000070,*(undefined8 *)puVar12),
                       _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                    *(float *)((long)unaff_x19 + 0x254) =
                         *(float *)((long)_fStack0000000000000070 + 0x48) +
                         *(float *)((long)unaff_x19 + 0x50c);
                    *(undefined4 *)(unaff_x19 + 0x4b) = *(undefined4 *)((long)unaff_x19 + 0x18c);
                  }
                }
                else {
                  dVar22 = *pdVar3;
                  if ((dVar22 == 0.0) || (*(long *)((long)dVar22 + 0x78) == 0)) goto LAB_00e443fc;
                  fVar37 = *(float *)(*(long *)((long)dVar22 + 0x78) + 0x18);
                  fVar46 = DAT_028aa034;
                  if (fVar37 != 0.0) {
                    fVar46 = fVar37;
                  }
                  if ((0.0 < (unaff_s15 - *(float *)((long)dVar22 + 100)) / fVar46) &&
                     (*(char *)((long)dVar22 + 0x165) == '\0')) {
                    *(undefined1 *)((long)dVar22 + 0x165) = 1;
                    *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                    if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                    sVar14 = FUN_015fa29c(unaff_x19[0xf],uVar30 & 0xffffffff,0);
                    if (sVar14 != 0x200b) {
                      *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                      if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                      sVar14 = FUN_015fa29c(unaff_x19[0xf],uVar30 & 0xffffffff,0);
                      if (sVar14 != 0x20) {
                        if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                        sVar14 = FUN_015fa29c(unaff_x19[0xf],uVar30 & 0xffffffff,0);
                        if (sVar14 != 10) {
                          lVar17 = unaff_x19[0xca];
                          if (lVar17 == 0) goto LAB_00e443fc;
                          fVar42 = *(float *)(lVar17 + 0x48);
                          fVar46 = *(float *)(unaff_x19 + 0x4b);
                          fVar45 = fVar42 + *(float *)((long)unaff_x19 + 0x50c);
                          fVar37 = *(float *)(unaff_x19 + 0x4a);
                          if (fVar42 <= *(float *)(unaff_x19 + 0x4a)) {
                            fVar37 = fVar42;
                          }
                          *(float *)(unaff_x19 + 0x4a) = fVar37;
                          fVar37 = *(float *)((long)unaff_x19 + 0x254);
                          if (fVar45 <= *(float *)((long)unaff_x19 + 0x254)) {
                            fVar37 = fVar45;
                          }
                          *(float *)((long)unaff_x19 + 0x254) = fVar37;
                          fVar37 = (float)FUN_00e5ef30(*(undefined4 *)((long)unaff_x19 + 0x134),
                                                       lVar17,0);
                          fVar37 = fVar37 + *(float *)(unaff_x19 + 0xa1) +
                                   *(float *)((long)unaff_x19 + 0x55c);
                          if (fVar46 <= fVar37) {
                            fVar46 = fVar37;
                          }
                          *(float *)(unaff_x19 + 0x4b) = fVar46;
                        }
                      }
                    }
                    iVar47 = *(int *)((long)unaff_x19 + 0x38c);
                    if (*(int *)((long)unaff_x19 + 0x38c) <= iVar15) {
                      iVar47 = iVar15;
                    }
                    *(int *)((long)unaff_x19 + 0x38c) = iVar47;
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
                  lVar17 = unaff_x19[0x55];
                  if (lVar17 != 0) {
                    (**(code **)(lVar17 + 0x18))
                              (*(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x28));
                  }
                }
                unaff_x19[0xc6] = 0;
                fVar37 = 0.0;
                *(undefined4 *)(unaff_x19 + 199) = 0;
                fVar46 = 0.0;
                if ((((0.0 < in_stack_00000048._4_4_) &&
                     (uVar6 = *(uint *)(unaff_x19 + 0x2a), fVar46 = fVar37, uVar6 < 5)) &&
                    ((1 << (ulong)(uVar6 & 0x1f) & 0x19U) != 0)) &&
                   (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
                  if (uVar6 == 4) {
                    lVar17 = unaff_x19[0xc];
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (0 < *(int *)(lVar17 + 0x18)) {
                      iVar15 = 0;
                      do {
                        FUN_0132138c(lVar17,iVar15,&stack0x00000070,*(undefined8 *)puVar11);
                        *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                        fVar46 = fStack0000000000000070;
                        if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                            fStack0000000000000070) break;
                        lVar17 = unaff_x19[0xc];
                        if (lVar17 == 0) goto LAB_00e443fc;
                        iVar15 = iVar15 + 1;
                      } while (iVar15 < *(int *)(lVar17 + 0x18));
                    }
                  }
                  else {
                    lVar17 = unaff_x19[0xb];
                    if (lVar17 == 0) goto LAB_00e443fc;
                    iVar15 = 0;
                    fVar46 = 0.0;
                    while (iVar15 < *(int *)(lVar17 + 0x18)) {
                      FUN_0132138c(lVar17,iVar15,&stack0x00000070,*(undefined8 *)puVar11);
                      fVar46 = fVar46 + fStack0000000000000070;
                      *(float *)((long)unaff_x19 + 0x634) = fVar46;
                      if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184) <=
                          fVar46) break;
                      lVar17 = unaff_x19[0xb];
                      iVar15 = iVar15 + 1;
                      if (lVar17 == 0) goto LAB_00e443fc;
                    }
                  }
                }
                *(float *)(unaff_x19 + 0xc6) =
                     *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                if (unaff_x19[9] == 0) goto LAB_00e443fc;
                fVar37 = *(float *)((long)unaff_x19 + 0x53c);
                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar12);
                if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0)) goto LAB_00e443fc;
                fVar42 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar12);
                if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                fVar43 = *(float *)(unaff_x19 + 0xa8);
                fVar45 = *(float *)(unaff_x19 + 199) + fVar43;
                *(float *)((long)unaff_x19 + 0x634) =
                     fVar46 + fVar37 + (fVar42 + -1.0) *
                                       *(float *)((long)_fStack0000000000000070 + 0x84);
                *(float *)(unaff_x19 + 199) = fVar45;
                puVar11 = 
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(
                                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    );
                  DAT_03774d76 = '\x01';
                }
                fVar37 = 1.0;
                fVar46 = 1.0;
                uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
                *(undefined8 *)((long)unaff_x19 + 0x674) =
                     **(undefined8 **)(*(long *)puVar11 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar38;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar16 = *(undefined8 *)(unaff_x19[0xca] + 200);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar18 = FUN_02681b9c(uVar16,0,0);
                if ((uVar18 & 1) != 0) {
                  lVar17 = __start_il2cpp();
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if ((*(char *)(lVar17 + 0x109) == '\0') &&
                     (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                    uVar38 = FUN_00e4ee40();
                    *(undefined4 *)((long)unaff_x19 + 0x674) = uVar38;
                    *(float *)(unaff_x19 + 0xcf) = fVar45;
                    *(float *)((long)unaff_x19 + 0x67c) = fVar43;
                  }
                }
                if (DAT_03774d76 == '\0') {
                  thunk_FUN_00d48444(puVar11);
                  DAT_03774d76 = '\x01';
                }
                lVar23 = *(long *)puVar11;
                uVar38 = *(undefined4 *)(*(undefined8 **)(lVar23 + 0xb8) + 1);
                *(undefined8 *)((long)unaff_x19 + 0x5f4) = **(undefined8 **)(lVar23 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar38;
                lVar17 = (*(long **)(lVar23 + 0xb8))[1];
                unaff_x19[0xc0] = **(long **)(lVar23 + 0xb8);
                *(int *)(unaff_x19 + 0xc1) = (int)lVar17;
                uVar38 = *(undefined4 *)(*(undefined8 **)(lVar23 + 0xb8) + 1);
                *(undefined8 *)((long)unaff_x19 + 0x60c) = **(undefined8 **)(lVar23 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x614) = uVar38;
                lVar17 = (*(long **)(lVar23 + 0xb8))[1];
                unaff_x19[0xc3] = **(long **)(lVar23 + 0xb8);
                *(int *)(unaff_x19 + 0xc4) = (int)lVar17;
                uVar38 = *(undefined4 *)(*(undefined8 **)(lVar23 + 0xb8) + 1);
                *(undefined8 *)((long)unaff_x19 + 0x624) = **(undefined8 **)(lVar23 + 0xb8);
                *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar38;
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar16 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar18 = FUN_02681b9c(uVar16,0,0);
                if ((uVar18 & 1) != 0) {
                  if (*pdVar3 == 0.0) goto LAB_00e443fc;
                  if (*(float *)((long)*pdVar3 + 0x84) != 0.0) {
                    lVar17 = __start_il2cpp();
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if ((*(char *)(lVar17 + 0x109) == '\0') &&
                       (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                      lVar17 = unaff_x19[0xca];
                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                      if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0xc0), lVar23 == 0))
                      goto LAB_00e443fc;
                      uVar18 = uVar49;
                      if (*(char *)(lVar23 + 0x18) != '\0') {
                        fVar45 = *(float *)(lVar17 + 100);
                        uVar18 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar45);
                      }
                      if (*(char *)(lVar23 + 0x19) != '\0') {
                        uVar38 = FUN_00e4e9f4(uVar18);
                        lVar17 = unaff_x19[0xca];
                        *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar38;
                        *(float *)(unaff_x19 + 0xbf) = fVar45;
                        *(float *)((long)unaff_x19 + 0x5fc) = fVar43;
                        if (lVar17 == 0) goto LAB_00e443fc;
                      }
                      if (*(long *)(lVar17 + 0xc0) == 0) goto LAB_00e443fc;
                      if (*(char *)(*(long *)(lVar17 + 0xc0) + 0x28) != '\0') {
                        fVar42 = (float)FUN_00e4e9f4(uVar18);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        fVar41 = fVar43 + *(float *)(unaff_x19 + 0xc1);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc0] =
                             CONCAT44(fVar45 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc0]);
                        *(float *)(unaff_x19 + 0xc1) = fVar41;
                        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                        goto LAB_00e443fc;
                        fVar42 = (float)FUN_00e4e9f4(uVar18);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x60c) =
                             CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x60c) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                        *(float *)((long)unaff_x19 + 0x614) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x614);
                        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                        goto LAB_00e443fc;
                        fVar42 = (float)FUN_00e4e9f4(uVar18);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        fVar45 = fVar43 + *(float *)(unaff_x19 + 0xc4);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc3] =
                             CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc3]);
                        *(float *)(unaff_x19 + 0xc4) = fVar45;
                        if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0))
                        goto LAB_00e443fc;
                        fVar42 = (float)FUN_00e4e9f4(uVar18);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x624) =
                             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x624) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x62c) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x62c);
                        if (lVar17 == 0) goto LAB_00e443fc;
                      }
                      if (*(long *)(lVar17 + 0xc0) == 0) goto LAB_00e443fc;
                      if (*(char *)(*(long *)(lVar17 + 0xc0) + 0x50) != '\0') {
                        FUN_00e5eda8(lVar17,0);
                        fVar42 = (float)FUN_00e4eb50();
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        fVar41 = fVar43 + *(float *)(unaff_x19 + 0xc1);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc0] =
                             CONCAT44(fVar45 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc0]);
                        *(float *)(unaff_x19 + 0xc1) = fVar41;
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        FUN_00e5b838(lVar17,0);
                        fVar42 = (float)FUN_00e4eb50();
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x60c) =
                             CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x60c) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x614) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x614);
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        FUN_00e5eea4(lVar17,0);
                        fVar42 = (float)FUN_00e4eb50();
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        fVar45 = fVar43 + *(float *)(unaff_x19 + 0xc4);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc3] =
                             CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc3]);
                        *(float *)(unaff_x19 + 0xc4) = fVar45;
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        FUN_00e5b7d8(lVar17,0);
                        fVar42 = (float)FUN_00e4eb50();
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x624) =
                             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x624) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x62c) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x62c);
                        if (lVar17 == 0) goto LAB_00e443fc;
                      }
                      lVar23 = *(long *)(lVar17 + 0xc0);
                      if (lVar23 == 0) goto LAB_00e443fc;
                      if (*(char *)(lVar23 + 0x60) != '\0') {
                        uVar33 = *(undefined8 *)(lVar23 + 0x68);
                        uVar16 = FUN_00e5eda8(lVar17,0);
                        fVar42 = (float)FUN_00e4ecc4(uVar16,lVar17,uVar33);
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        fVar41 = fVar43 + *(float *)(unaff_x19 + 0xc1);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc0] =
                             CONCAT44(fVar45 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc0]);
                        *(float *)(unaff_x19 + 0xc1) = fVar41;
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        uVar33 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x68);
                        uVar16 = FUN_00e5b838(lVar17,0);
                        fVar42 = (float)FUN_00e4ecc4(uVar16,lVar17,uVar33);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x60c) =
                             CONCAT44(fVar41 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x60c) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c));
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x614) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x614);
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        uVar33 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x68);
                        uVar16 = FUN_00e5eea4(lVar17,0);
                        fVar42 = (float)FUN_00e4ecc4(uVar16,lVar17,uVar33);
                        lVar17 = unaff_x19[0xca];
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar41;
                        fVar45 = fVar43 + *(float *)(unaff_x19 + 0xc4);
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        unaff_x19[0xc3] =
                             CONCAT44(fVar41 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                      fVar42 + (float)unaff_x19[0xc3]);
                        *(float *)(unaff_x19 + 0xc4) = fVar45;
                        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xc0) == 0)) goto LAB_00e443fc;
                        uVar33 = *(undefined8 *)(*(long *)(lVar17 + 0xc0) + 0x68);
                        uVar16 = FUN_00e5b7d8(lVar17,0);
                        fVar42 = (float)FUN_00e4ecc4(uVar16,lVar17,uVar33);
                        *(float *)((long)unaff_x19 + 0x63c) = fVar42;
                        *(float *)(unaff_x19 + 200) = fVar45;
                        *(float *)((long)unaff_x19 + 0x644) = fVar43;
                        *(ulong *)((long)unaff_x19 + 0x624) =
                             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)
                                                               ((long)unaff_x19 + 0x624) >> 0x20),
                                      fVar42 + (float)*(undefined8 *)((long)unaff_x19 + 0x624));
                        *(float *)((long)unaff_x19 + 0x62c) =
                             fVar43 + *(float *)((long)unaff_x19 + 0x62c);
                      }
                    }
                  }
                }
                uVar6 = (int)uVar30 << 2;
                if ((in_stack_00000048._4_4_ <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
                  if (*(char *)((long)unaff_x19 + 300) == '\0') {
                    *(long *)((long)unaff_x19 + 0x6e4) = unaff_x19[0x24];
                  }
                  else {
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    uVar16 = *(undefined8 *)((long)*pdVar3 + 0x80);
                    *(ulong *)((long)unaff_x19 + 0x6e4) =
                         CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                  (float)((ulong)uVar16 >> 0x20),
                                  (float)unaff_x19[0x24] * (float)uVar16);
                  }
                  lVar17 = unaff_x19[0x5e];
                  *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  fVar42 = (float)FUN_00e5eda8(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  fVar45 = *(float *)((long)unaff_x19 + 0x674);
                  uVar18 = (ulong)(int)uVar6;
                  *(float *)(lVar17 + uVar18 * 0xc + 0x20) =
                       fVar42 + fVar45 + *(float *)(unaff_x19 + 0xc0) +
                       *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                       *(float *)((long)unaff_x19 + 0x6e4);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5eda8(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  fVar42 = *(float *)((long)unaff_x19 + 0x604);
                  *(float *)(lVar17 + uVar18 * 0xc + 0x24) =
                       fVar45 + *(float *)(unaff_x19 + 0xcf) + fVar42 + *(float *)(unaff_x19 + 0xbf)
                       + *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5eda8(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  *(float *)(lVar17 + uVar18 * 0xc + 0x28) =
                       fVar42 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc1) +
                       *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                       *(float *)((long)unaff_x19 + 0x6ec);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  fVar42 = (float)FUN_00e5b838(*pdVar3,0);
                  uVar36 = uVar18 | 1;
                  uVar29 = (uint)uVar36;
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  fVar45 = *(float *)((long)unaff_x19 + 0x674);
                  *(float *)(lVar17 + uVar36 * 0xc + 0x20) =
                       fVar42 + fVar45 + *(float *)((long)unaff_x19 + 0x60c) +
                       *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                       *(float *)((long)unaff_x19 + 0x6e4);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5b838(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  fVar42 = *(float *)(unaff_x19 + 0xc2);
                  *(float *)(lVar17 + uVar36 * 0xc + 0x24) =
                       fVar45 + *(float *)(unaff_x19 + 0xcf) + fVar42 + *(float *)(unaff_x19 + 0xbf)
                       + *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5b838(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  *(float *)(lVar17 + uVar36 * 0xc + 0x28) =
                       fVar42 + *(float *)((long)unaff_x19 + 0x67c) +
                       *(float *)((long)unaff_x19 + 0x614) + *(float *)((long)unaff_x19 + 0x5fc) +
                       *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  fVar42 = (float)FUN_00e5eea4(*pdVar3,0);
                  uVar21 = uVar18 | 2;
                  uVar32 = (uint)uVar21;
                  if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                  fVar45 = *(float *)((long)unaff_x19 + 0x674);
                  *(float *)(lVar17 + uVar21 * 0xc + 0x20) =
                       fVar42 + fVar45 + *(float *)(unaff_x19 + 0xc3) +
                       *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                       *(float *)((long)unaff_x19 + 0x6e4);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5eea4(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                  fVar42 = *(float *)((long)unaff_x19 + 0x61c);
                  *(float *)(lVar17 + uVar21 * 0xc + 0x24) =
                       fVar45 + *(float *)(unaff_x19 + 0xcf) + fVar42 + *(float *)(unaff_x19 + 0xbf)
                       + *(float *)((long)unaff_x19 + 0x634) + *(float *)(unaff_x19 + 0xdd);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5eea4(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                  *(float *)(lVar17 + uVar21 * 0xc + 0x28) =
                       fVar42 + *(float *)((long)unaff_x19 + 0x67c) + *(float *)(unaff_x19 + 0xc4) +
                       *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                       *(float *)((long)unaff_x19 + 0x6ec);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  fVar42 = (float)FUN_00e5b7d8(*pdVar3,0);
                  uVar31 = uVar18 | 3;
                  uVar34 = (uint)uVar31;
                  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                  fVar45 = *(float *)((long)unaff_x19 + 0x674);
                  *(float *)(lVar17 + uVar31 * 0xc + 0x20) =
                       fVar42 + fVar45 + *(float *)((long)unaff_x19 + 0x624) +
                       *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                       *(float *)((long)unaff_x19 + 0x6e4);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5b7d8(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                  param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                  *(float *)(lVar17 + uVar31 * 0xc + 0x24) =
                       fVar45 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                       *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                       *(float *)(unaff_x19 + 0xdd);
                  lVar17 = unaff_x19[0x5e];
                  if ((lVar17 == 0) || (*pdVar3 == 0.0)) goto LAB_00e443fc;
                  FUN_00e5b7d8(*pdVar3,0);
                  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                  fVar42 = *(float *)((long)unaff_x19 + 0x62c);
                  *(float *)(lVar17 + uVar31 * 0xc + 0x28) =
                       (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar42 +
                       *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                       *(float *)((long)unaff_x19 + 0x6ec);
                  lVar17 = unaff_x19[0xca];
                  if (lVar17 == 0) goto LAB_00e443fc;
                  lVar23 = *unaff_x22;
                  if (*(char *)(lVar17 + 0x108) == '\0') {
                    uVar38 = FUN_0272b9dc(lVar17 + 0x10,0);
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                    lVar23 = lVar23 + uVar18 * 8;
                    *(undefined4 *)(lVar23 + 0x20) = uVar38;
                    *(float *)(lVar23 + 0x24) = fVar42;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = thunk_FUN_0272b8d8((long)*pdVar3 + 0x10,0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar36 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = FUN_0272b9c8((long)*pdVar3 + 0x10,0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar21 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = FUN_0272b98c((long)*pdVar3 + 0x10,0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar31 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    uVar38 = FUN_00e5ecc0(*pdVar3,0);
                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar38;
                    if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                    FUN_00e5ecc0(unaff_x19[0xca],0);
                    *(float *)((long)unaff_x19 + 0x6cc) = fVar42;
                  }
                  else {
                    if ((*(long *)(lVar17 + 0x100) == 0) ||
                       (uVar38 = FUN_00e5dd14(uVar49,*(long *)(lVar17 + 0x100),
                                              *(undefined4 *)(lVar17 + 0x10c),0), lVar23 == 0))
                    goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                    lVar23 = lVar23 + uVar18 * 8;
                    *(undefined4 *)(lVar23 + 0x20) = uVar38;
                    *(float *)(lVar23 + 0x24) = fVar42;
                    dVar22 = *pdVar3;
                    if ((dVar22 == 0.0) || (*(long *)((long)dVar22 + 0x100) == 0))
                    goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = FUN_00e5de6c(uVar49,*(long *)((long)dVar22 + 0x100),
                                          *(undefined4 *)((long)dVar22 + 0x10c),0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar36 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    dVar22 = *pdVar3;
                    if ((dVar22 == 0.0) || (*(long *)((long)dVar22 + 0x100) == 0))
                    goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = FUN_00e5dea4(uVar49,*(long *)((long)dVar22 + 0x100),
                                          *(undefined4 *)((long)dVar22 + 0x10c),0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar21 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    dVar22 = *pdVar3;
                    if ((dVar22 == 0.0) || (*(long *)((long)dVar22 + 0x100) == 0))
                    goto LAB_00e443fc;
                    lVar17 = *unaff_x22;
                    uVar38 = thunk_FUN_00e5dd60(uVar49,*(long *)((long)dVar22 + 0x100),
                                                *(undefined4 *)((long)dVar22 + 0x10c),0);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    lVar17 = lVar17 + uVar31 * 8;
                    *(undefined4 *)(lVar17 + 0x20) = uVar38;
                    *(float *)(lVar17 + 0x24) = fVar42;
                    dVar22 = *pdVar3;
                    if ((dVar22 == 0.0) || (*(long *)((long)dVar22 + 0x100) == 0))
                    goto LAB_00e443fc;
                    uVar38 = FUN_00e5dedc(uVar49,*(long *)((long)dVar22 + 0x100),
                                          *(undefined4 *)((long)dVar22 + 0x10c),0);
                    lVar17 = unaff_x19[0xca];
                    *(undefined4 *)(unaff_x19 + 0xd9) = uVar38;
                    *(float *)((long)unaff_x19 + 0x6cc) = fVar42;
                    if ((lVar17 == 0) || (lVar23 = *(long *)(lVar17 + 0x100), lVar23 == 0))
                    goto LAB_00e443fc;
                    if (((1 < *(int *)(lVar23 + 0x28)) && (0.0 < *(float *)(lVar23 + 0x34))) &&
                       (*(int *)(lVar17 + 0x10c) < 0)) {
                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                    }
                  }
                }
                else {
                  dVar22 = *pdVar3;
                  if (dVar22 == 0.0) goto LAB_00e443fc;
                  param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                  if ((*(float *)((long)dVar22 + 0x48) + *(float *)((long)dVar22 + 0x84) +
                      *(float *)((long)unaff_x19 + 0x634)) - *(float *)((long)unaff_x19 + 0x53c) <=
                      DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
                  lVar17 = *in_stack_00000038;
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(puVar11);
                    DAT_03774d76 = '\x01';
                  }
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
                  uVar18 = (ulong)(int)uVar6;
                  lVar17 = lVar17 + uVar18 * 0xc;
                  *(undefined8 *)(lVar17 + 0x20) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
                  *(undefined4 *)(lVar17 + 0x28) = uVar38;
                  lVar17 = *in_stack_00000038;
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= (uint)(uVar18 | 1)) goto LAB_00e44400;
                  lVar17 = lVar17 + (uVar18 | 1) * 0xc;
                  uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
                  *(undefined8 *)(lVar17 + 0x20) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
                  *(undefined4 *)(lVar17 + 0x28) = uVar38;
                  lVar17 = *in_stack_00000038;
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= (uint)(uVar18 | 2)) goto LAB_00e44400;
                  lVar17 = lVar17 + (uVar18 | 2) * 0xc;
                  uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
                  *(undefined8 *)(lVar17 + 0x20) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
                  *(undefined4 *)(lVar17 + 0x28) = uVar38;
                  lVar17 = *in_stack_00000038;
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= (uint)(uVar18 | 3)) goto LAB_00e44400;
                  lVar17 = lVar17 + (uVar18 | 3) * 0xc;
                  uVar38 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar11 + 0xb8) + 1);
                  *(undefined8 *)(lVar17 + 0x20) = **(undefined8 **)(*(long *)puVar11 + 0xb8);
                  *(undefined4 *)(lVar17 + 0x28) = uVar38;
                }
                if (*pdVar3 == 0.0) goto LAB_00e443fc;
                uVar16 = *(undefined8 *)((long)*pdVar3 + 0xf8);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar18 = FUN_02681b9c(uVar16,0,0);
                if ((uVar18 & 1) == 0) {
                  lVar17 = unaff_x19[0x10];
                }
                else {
                  if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xf8), lVar17 == 0))
                  goto LAB_00e443fc;
                  lVar17 = *(long *)(lVar17 + 0x18);
                }
                if (((lVar17 == 0) || (lVar17 = FUN_0272bcf4(lVar17,0), lVar17 == 0)) ||
                   (plVar19 = (long *)FUN_0267dac8(lVar17,0), plVar19 == (long *)0x0))
                goto LAB_00e443fc;
                iVar15 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
                *(float *)(unaff_x19 + 0xda) = (float)iVar15;
                iVar15 = (**(code **)(*plVar19 + 0x1a8))(plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
                *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar15;
                *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                *(undefined4 *)((long)unaff_x19 + 0x6dc) = *(undefined4 *)((long)unaff_x19 + 0x6cc);
                puVar11 = 
                UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                _fStack0000000000000070 = (double)CONCAT44((float)iVar15,(int)unaff_x19[0xda]);
                in_stack_00000078 = unaff_x19[0xd9];
                FUN_0132149c(unaff_x19[0x62],uVar6,&stack0x00000070,
                             *(undefined8 *)
                              UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                            );
                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                uVar18 = (ulong)(int)uVar6;
                uVar36 = uVar18 | 1;
                FUN_0132149c(unaff_x19[0x62],uVar6 | 1,&stack0x00000070,*(undefined8 *)puVar11);
                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                uVar21 = uVar18 | 2;
                FUN_0132149c(unaff_x19[0x62],uVar21,&stack0x00000070,*(undefined8 *)puVar11);
                if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                uVar31 = uVar18 | 3;
                FUN_0132149c(unaff_x19[0x62],uVar6 | 3,&stack0x00000070,*(undefined8 *)puVar11);
                plVar35 = (long *)StringLiteral_9119;
                lVar17 = unaff_x19[0x60];
                if (lVar17 == 0) goto LAB_00e443fc;
                if ((*(uint *)(lVar17 + 0x18) <= uVar6) ||
                   (uVar29 = (uint)uVar31, *(uint *)(lVar17 + 0x18) <= uVar29)) goto LAB_00e44400;
                lVar23 = unaff_x19[0xca];
                fVar42 = fVar39;
                if (*(float *)(lVar17 + 0x20 + uVar18 * 8) != *(float *)(lVar17 + 0x20 + uVar31 * 8)
                   ) {
                  fVar42 = fVar37;
                }
                *(float *)(unaff_x19 + 0xda) = fVar42;
                if (lVar23 == 0) goto LAB_00e443fc;
                cVar10 = *(char *)(lVar23 + 0x108);
                fVar42 = fVar37;
                if (cVar10 != '\0' || 0x7fffffff < *(uint *)(lVar23 + 0x138)) {
                  fVar42 = -1.0;
                }
                *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar23 + 0x84) * fVar42;
                if (cVar10 == '\0') {
                  iVar47 = *(int *)(lVar23 + 0x160);
                  iVar15 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
                  param_3 = 0x3e800000;
                  *(float *)(unaff_x19 + 0xdb) = (float)iVar47 / ((float)iVar15 * 0.25);
                  if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                  iVar47 = *(int *)(unaff_x19[0xca] + 0x160);
                  iVar15 = (**(code **)(*plVar19 + 0x1a8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
                  fVar45 = (float)iVar47;
                  fVar42 = (float)iVar15;
                  puVar26 = (undefined8 *)
                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                  ;
                }
                else {
                  if (*(long *)(lVar23 + 0x100) == 0) goto LAB_00e443fc;
                  fVar42 = (float)FUN_00e5df18(*(long *)(lVar23 + 0x100),0);
                  puVar26 = (undefined8 *)
                            UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                  ;
                  if (((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0x100), lVar17 == 0))
                     || (plVar19 = *(long **)(lVar17 + 0x18), plVar19 == (long *)0x0))
                  goto LAB_00e443fc;
                  iVar15 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
                  if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0x100), lVar17 == 0))
                  goto LAB_00e443fc;
                  fVar45 = 0.25;
                  *(float *)(unaff_x19 + 0xdb) =
                       fVar42 / (*(float *)(lVar17 + 0x40) * (float)iVar15 * 0.25);
                  FUN_00e5df18(lVar17,0);
                  if ((unaff_x19[0xca] == 0) ||
                     ((lVar17 = *(long *)(unaff_x19[0xca] + 0x100), lVar17 == 0 ||
                      (plVar19 = *(long **)(lVar17 + 0x18), plVar19 == (long *)0x0))))
                  goto LAB_00e443fc;
                  iVar15 = (**(code **)(*plVar19 + 0x1a8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x1b0));
                  if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0x100), lVar17 == 0))
                  goto LAB_00e443fc;
                  fVar42 = *(float *)(lVar17 + 0x44) * (float)iVar15;
                }
                fVar43 = 0.25;
                fVar45 = fVar45 / (fVar42 * 0.25);
                *(float *)((long)unaff_x19 + 0x6dc) = fVar45;
                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                in_stack_00000078 = CONCAT44(fVar45,(int)unaff_x19[0xdb]);
                FUN_0132149c(unaff_x19[99],uVar6,&stack0x00000070,*puVar26);
                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                FUN_0132149c(unaff_x19[99],uVar6 | 1,&stack0x00000070,*puVar26);
                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                FUN_0132149c(unaff_x19[99],uVar6 | 2,&stack0x00000070,*puVar26);
                if (unaff_x19[99] == 0) goto LAB_00e443fc;
                in_stack_00000078 = unaff_x19[0xdb];
                _fStack0000000000000070 = (double)unaff_x19[0xda];
                FUN_0132149c(unaff_x19[99],uVar6 | 3,&stack0x00000070,*puVar26);
                if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                uVar16 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar20 = FUN_02681b9c(uVar16,0,0);
                fVar45 = (float)param_3;
                fVar42 = (float)uVar49;
                uVar34 = (uint)uVar36;
                uVar32 = (uint)uVar21;
                if ((uVar20 & 1) != 0) {
                  if (uVar30 == uVar5 - 1) {
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    fVar41 = (float)FUN_00e5b838(*pdVar3,0);
                    if (DAT_03774d76 == '\0') {
                      thunk_FUN_00d48444(
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                        );
                      DAT_03774d76 = '\x01';
                    }
                    pfVar24 = *(float **)
                               (*(long *)
                                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                               + 0xb8);
                    fVar45 = fVar45 - pfVar24[2];
                    param_3 = (ulong)(uint)fVar45;
                    if (fVar45 * fVar45 +
                        (fVar41 - *pfVar24) * (fVar41 - *pfVar24) +
                        (fVar43 - pfVar24[1]) * (fVar43 - pfVar24[1]) < DAT_028aa020)
                    goto LAB_00e3dbd8;
                  }
                  if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xb0), lVar17 == 0))
                  goto LAB_00e443fc;
                  uVar16 = *(undefined8 *)(lVar17 + 0x38);
                  if (DAT_03774d77 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                      );
                    DAT_03774d77 = '\x01';
                  }
                  fVar45 = (float)uVar16 -
                           (float)**(undefined8 **)
                                    (*(long *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                    + 0xb8);
                  fVar43 = (float)((ulong)uVar16 >> 0x20) -
                           (float)((ulong)**(undefined8 **)
                                            (*(long *)
                                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                            + 0xb8) >> 0x20);
                  if (DAT_028aa020 <= fVar45 * fVar45 + fVar43 * fVar43) {
                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                  }
                  dVar22 = *pdVar3;
                  if ((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xb0), lVar17 == 0))
                  goto LAB_00e443fc;
                  fVar43 = fVar42 * *(float *)(lVar17 + 0x38);
                  *(float *)(unaff_x19 + 0xc9) = fVar43;
                  fVar45 = fVar42 * *(float *)(lVar17 + 0x3c);
                  *(float *)((long)unaff_x19 + 0x64c) = fVar45;
                  if (*(char *)(lVar17 + 0x25) != '\0') {
                    fVar46 = 1.0 / *(float *)((long)dVar22 + 0x84);
                  }
                  lVar17 = *in_stack_00000038;
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  lVar23 = lVar17 + uVar18 * 0xc;
                  fVar41 = *(float *)(lVar23 + 0x20);
                  uVar16 = *(undefined8 *)(lVar23 + 0x24);
                  *(float *)(unaff_x19 + 0xcd) = fVar41;
                  *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar16;
                  *(float *)(unaff_x19 + 0xd0) = fVar41;
                  fVar44 = (float)uVar16;
                  *(float *)((long)unaff_x19 + 0x684) = fVar44;
                  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                  lVar23 = lVar17 + uVar36 * 0xc;
                  uVar38 = *(undefined4 *)(lVar23 + 0x20);
                  uVar16 = *(undefined8 *)(lVar23 + 0x24);
                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar38;
                  *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar16;
                  *(undefined4 *)(unaff_x19 + 0xd2) = uVar38;
                  *(int *)((long)unaff_x19 + 0x694) = (int)uVar16;
                  if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                  lVar23 = lVar17 + uVar21 * 0xc;
                  uVar38 = *(undefined4 *)(lVar23 + 0x20);
                  uVar16 = *(undefined8 *)(lVar23 + 0x24);
                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar38;
                  *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar16;
                  *(undefined4 *)(unaff_x19 + 0xd4) = uVar38;
                  *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar16;
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  lVar17 = lVar17 + uVar31 * 0xc;
                  uVar38 = *(undefined4 *)(lVar17 + 0x20);
                  uVar16 = *(undefined8 *)(lVar17 + 0x24);
                  *(undefined4 *)(unaff_x19 + 0xcd) = uVar38;
                  *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar16;
                  *(undefined4 *)(unaff_x19 + 0xd6) = uVar38;
                  *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar16;
                  lVar17 = *(long *)((long)dVar22 + 0xb0);
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(char *)(lVar17 + 0x24) == '\0') {
                    lVar23 = *plVar1;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    uVar9 = *(uint *)(lVar23 + 0x18);
                    if (uVar9 <= uVar6) goto LAB_00e44400;
                    lVar27 = lVar23 + uVar18 * 8;
                    *(float *)(lVar27 + 0x20) =
                         (fVar43 + fVar46 * fVar41) - *(float *)(lVar17 + 0x30);
                    *(float *)(lVar27 + 0x24) =
                         (fVar45 + fVar46 * fVar44) - *(float *)(lVar17 + 0x34);
                    if (((uVar9 <= uVar34) ||
                        (*(ulong *)(lVar23 + uVar36 * 8 + 0x20) =
                              CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar46 +
                                       (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                       (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                       ((float)unaff_x19[0xd2] * fVar46 + (float)unaff_x19[0xc9]) -
                                       (float)*(undefined8 *)(lVar17 + 0x30)), uVar9 <= uVar32)) ||
                       (*(ulong *)(lVar23 + uVar21 * 8 + 0x20) =
                             CONCAT44((fVar46 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                      (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                      (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                      (fVar46 * (float)unaff_x19[0xd4] + (float)unaff_x19[0xc9]) -
                                      (float)*(undefined8 *)(lVar17 + 0x30)), uVar9 <= uVar29))
                    goto LAB_00e44400;
                    param_3 = unaff_x19[0xc9];
                    *(ulong *)(lVar23 + uVar31 * 8 + 0x20) =
                         CONCAT44((fVar46 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                                  (float)(param_3 >> 0x20)) -
                                  (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                  (fVar46 * (float)unaff_x19[0xd6] + (float)param_3) -
                                  (float)*(undefined8 *)(lVar17 + 0x30));
                  }
                  else {
                    fVar7 = *(float *)((long)dVar22 + 0x44);
                    *(float *)(unaff_x19 + 0xd8) = fVar7;
                    fVar8 = *(float *)((long)dVar22 + 0x48);
                    lVar23 = unaff_x19[0x61];
                    *(float *)((long)unaff_x19 + 0x6c4) = fVar8;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    uVar9 = *(uint *)(lVar23 + 0x18);
                    if (uVar9 <= uVar6) goto LAB_00e44400;
                    lVar27 = lVar23 + uVar18 * 8;
                    *(float *)(lVar27 + 0x20) =
                         (fVar43 + fVar46 * (fVar41 - fVar7)) - *(float *)(lVar17 + 0x30);
                    *(float *)(lVar27 + 0x24) =
                         (fVar45 + fVar46 * (fVar44 - fVar8)) - *(float *)(lVar17 + 0x34);
                    if (((uVar9 <= uVar34) ||
                        (*(ulong *)(lVar23 + uVar36 * 8 + 0x20) =
                              CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                       ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                       (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar46) -
                                       (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                       ((float)unaff_x19[0xc9] +
                                       ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) * fVar46) -
                                       (float)*(undefined8 *)(lVar17 + 0x30)), uVar9 <= uVar32)) ||
                       (*(ulong *)(lVar23 + uVar21 * 8 + 0x20) =
                             CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                      fVar46 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                               (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                      (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                      ((float)unaff_x19[0xc9] +
                                      fVar46 * ((float)unaff_x19[0xd4] - (float)unaff_x19[0xd8])) -
                                      (float)*(undefined8 *)(lVar17 + 0x30)), uVar9 <= uVar29))
                    goto LAB_00e44400;
                    param_3 = unaff_x19[0xd8];
                    *(ulong *)(lVar23 + uVar31 * 8 + 0x20) =
                         CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                  fVar46 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                           (float)(param_3 >> 0x20))) -
                                  (float)((ulong)*(undefined8 *)(lVar17 + 0x30) >> 0x20),
                                  ((float)unaff_x19[0xc9] +
                                  fVar46 * ((float)unaff_x19[0xd6] - (float)param_3)) -
                                  (float)*(undefined8 *)(lVar17 + 0x30));
                  }
                }
LAB_00e3dbd8:
                dVar22 = *pdVar3;
                if (dVar22 == 0.0) goto LAB_00e443fc;
                if (*(char *)((long)dVar22 + 0x108) != '\0') {
                  if (*(long *)((long)dVar22 + 0x100) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)((long)dVar22 + 0x100) + 0x20) == '\0') {
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    lVar23 = *plVar1;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(undefined8 *)(lVar23 + uVar18 * 8 + 0x20) =
                         *(undefined8 *)(lVar17 + uVar18 * 8 + 0x20);
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    lVar23 = *plVar1;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar34) goto LAB_00e44400;
                    *(undefined8 *)(lVar23 + (long)(int)uVar34 * 8 + 0x20) =
                         *(undefined8 *)(lVar17 + (long)(int)uVar34 * 8 + 0x20);
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    lVar23 = *plVar1;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_00e44400;
                    *(undefined8 *)(lVar23 + (long)(int)uVar32 * 8 + 0x20) =
                         *(undefined8 *)(lVar17 + (long)(int)uVar32 * 8 + 0x20);
                    lVar17 = *unaff_x22;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    lVar23 = *plVar1;
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_00e44400;
                    *(undefined8 *)(lVar23 + uVar31 * 8 + 0x20) =
                         *(undefined8 *)(lVar17 + uVar31 * 8 + 0x20);
                    dVar22 = *pdVar3;
                    if (dVar22 == 0.0) goto LAB_00e443fc;
                  }
                }
                dVar40 = DAT_028aa048;
                if (*(char *)((long)dVar22 + 0x108) == '\0') {
LAB_00e3dd34:
                  uVar16 = *(undefined8 *)((long)dVar22 + 0xa8);
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar36 = FUN_02681b9c(uVar16,0,0);
                  dVar22 = *pdVar3;
                  if (dVar22 == 0.0) goto LAB_00e443fc;
                  if ((uVar36 & 1) == 0) {
                    uVar16 = *(undefined8 *)((long)dVar22 + 0xb0);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar36 = FUN_02681b9c(uVar16,0,0);
                    dVar22 = DAT_028aa048;
                    if ((uVar36 & 1) == 0) {
                      if (*pdVar3 == 0.0) goto LAB_00e443fc;
                      uVar16 = *(undefined8 *)((long)*pdVar3 + 0xa0);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar36 = FUN_02681b9c(uVar16,0,0);
                      lVar17 = *plVar2;
                      if ((uVar36 & 1) == 0) {
                        fVar37 = *(float *)((long)unaff_x19 + 0x8c);
                        fVar42 = *(float *)(unaff_x19 + 0x12);
                        fVar43 = *(float *)((long)unaff_x19 + 0x94);
                        fVar45 = *(float *)(unaff_x19 + 0x13);
                        fVar46 = fVar37;
                        if (1.0 < fVar37) {
                          fVar46 = 1.0;
                        }
                        fVar46 = fVar46 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar37 = fVar42;
                        if (1.0 < fVar42) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3fd48;
                          }
                          fVar42 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = fVar37;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar37 = fVar43;
                        if (1.0 < fVar43) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar43 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar43 = fVar45;
                        if (1.0 < fVar45) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar43 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar45 = (float)(int)(fVar43 + -0.5);
                        }
                        if (lVar17 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                        *(uint *)(lVar17 + uVar18 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        fVar37 = *(float *)(unaff_x19 + 0x12);
                        lVar17 = unaff_x19[0x5f];
                        fVar45 = *(float *)((long)unaff_x19 + 0x94);
                        fVar42 = *(float *)(unaff_x19 + 0x13);
                        fVar46 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                        if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar43 = fVar37;
                        if (1.0 < fVar37) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e40610;
                          }
                          fVar43 = (float)(int)(fVar43 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                          fVar43 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar43 = fVar37;
                          }
                        }
                        else {
                          fVar43 = (float)(int)(fVar43 + -0.5);
                        }
                        fVar37 = fVar45;
                        if (1.0 < fVar45) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar45 = fVar42;
                        if (1.0 < fVar42) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar45 = fVar39;
                        }
                        dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar22 == 0.5) {
                            fVar42 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar42 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar42 = (float)(int)(fVar45 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar45 + -0.5);
                        }
                        if (lVar17 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                        *(uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar43 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                        fVar37 = *(float *)(unaff_x19 + 0x12);
                        lVar17 = unaff_x19[0x5f];
                        fVar45 = *(float *)((long)unaff_x19 + 0x94);
                        fVar42 = *(float *)(unaff_x19 + 0x13);
                        fVar46 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                        if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar43 = fVar37;
                        if (1.0 < fVar37) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e40e20;
                          }
                          fVar43 = (float)(int)(fVar43 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                          fVar43 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar43 = fVar37;
                          }
                        }
                        else {
                          fVar43 = (float)(int)(fVar43 + -0.5);
                        }
                        fVar37 = fVar45;
                        if (1.0 < fVar45) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar45 = fVar42;
                        if (1.0 < fVar42) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar45 = fVar39;
                        }
                        dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar22 == 0.5) {
                            fVar42 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar42 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar42 = (float)(int)(fVar45 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar45 + -0.5);
                        }
                        if (lVar17 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                        *(uint *)(lVar17 + (long)(int)uVar32 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar43 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                        fVar46 = *(float *)((long)unaff_x19 + 0x8c);
                        fVar37 = *(float *)(unaff_x19 + 0x12);
                        lVar17 = unaff_x19[0x5f];
                        fVar45 = *(float *)((long)unaff_x19 + 0x94);
                        fVar42 = *(float *)(unaff_x19 + 0x13);
                      }
                      else {
                        if ((*pdVar3 == 0.0) ||
                           (lVar23 = *(long *)((long)*pdVar3 + 0xa0), lVar23 == 0))
                        goto LAB_00e443fc;
                        fVar37 = *(float *)(lVar23 + 0x18);
                        fVar42 = *(float *)(lVar23 + 0x1c);
                        fVar43 = *(float *)(lVar23 + 0x20);
                        fVar45 = *(float *)(lVar23 + 0x24);
                        fVar46 = fVar37;
                        if (1.0 < fVar37) {
                          fVar46 = 1.0;
                        }
                        fVar46 = fVar46 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar37 = fVar42;
                        if (1.0 < fVar42) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3fcc4;
                          }
                          fVar42 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = fVar37;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar37 = fVar43;
                        if (1.0 < fVar43) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar43 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar43 = fVar45;
                        if (1.0 < fVar45) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar43 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar45 = (float)(int)(fVar43 + -0.5);
                        }
                        if (lVar17 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                        *(uint *)(lVar17 + uVar18 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar42 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        if ((*pdVar3 == 0.0) ||
                           (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                        goto LAB_00e443fc;
                        fVar37 = *(float *)(lVar17 + 0x1c);
                        lVar23 = *plVar2;
                        fVar45 = *(float *)(lVar17 + 0x20);
                        fVar42 = *(float *)(lVar17 + 0x24);
                        fVar46 = *(float *)(lVar17 + 0x18) * 255.0;
                        if (*(float *)(lVar17 + 0x18) < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar43 = fVar37;
                        if (1.0 < fVar37) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e4057c;
                          }
                          fVar43 = (float)(int)(fVar43 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                          fVar43 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar43 = fVar37;
                          }
                        }
                        else {
                          fVar43 = (float)(int)(fVar43 + -0.5);
                        }
                        fVar37 = fVar45;
                        if (1.0 < fVar45) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar45 = fVar42;
                        if (1.0 < fVar42) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar45 = fVar39;
                        }
                        dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar22 == 0.5) {
                            fVar42 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar42 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar42 = (float)(int)(fVar45 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar45 + -0.5);
                        }
                        if (lVar23 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar23 + 0x18) <= uVar34) goto LAB_00e44400;
                        *(uint *)(lVar23 + (long)(int)uVar34 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar43 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                        if ((*pdVar3 == 0.0) ||
                           (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                        goto LAB_00e443fc;
                        fVar37 = *(float *)(lVar17 + 0x1c);
                        lVar23 = *plVar2;
                        fVar45 = *(float *)(lVar17 + 0x20);
                        fVar42 = *(float *)(lVar17 + 0x24);
                        fVar46 = *(float *)(lVar17 + 0x18) * 255.0;
                        if (*(float *)(lVar17 + 0x18) < 0.0) {
                          fVar46 = fVar39;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        fVar43 = fVar37;
                        if (1.0 < fVar37) {
                          fVar43 = 1.0;
                        }
                        fVar43 = fVar43 * 255.0;
                        if (fVar37 < 0.0) {
                          fVar43 = fVar39;
                        }
                        dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                        if (0.0 <= fVar43) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e40d8c;
                          }
                          fVar43 = (float)(int)(fVar43 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                          fVar43 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar43 = fVar37;
                          }
                        }
                        else {
                          fVar43 = (float)(int)(fVar43 + -0.5);
                        }
                        fVar37 = fVar45;
                        if (1.0 < fVar45) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar37 = fVar39;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar37 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar37 = (float)(int)(fVar37 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar45 = fVar42;
                        if (1.0 < fVar42) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar42 < 0.0) {
                          fVar45 = fVar39;
                        }
                        dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar22 == 0.5) {
                            fVar42 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar42 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar42 = (float)(int)(fVar45 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar45 + -0.5);
                        }
                        if (lVar23 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_00e44400;
                        *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                             (int)fVar46 & 0xffU | ((int)fVar43 & 0xffU) << 8 |
                             ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                        if ((*pdVar3 == 0.0) ||
                           (lVar23 = *(long *)((long)*pdVar3 + 0xa0), lVar23 == 0))
                        goto LAB_00e443fc;
                        fVar46 = *(float *)(lVar23 + 0x18);
                        fVar37 = *(float *)(lVar23 + 0x1c);
                        lVar17 = *plVar2;
                        fVar45 = *(float *)(lVar23 + 0x20);
                        fVar42 = *(float *)(lVar23 + 0x24);
                      }
                      fVar43 = fVar46 * 255.0;
                      if (fVar46 < 0.0) {
                        fVar43 = fVar39;
                      }
                      dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                      if (0.0 <= fVar43) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar43 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar43 + -0.5);
                      }
                      fVar43 = fVar37;
                      if (1.0 < fVar37) {
                        fVar43 = 1.0;
                      }
                      fVar43 = fVar43 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar43 = fVar39;
                      }
                      dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                      if (0.0 <= fVar43) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e412dc;
                        }
                        fVar43 = (float)(int)(fVar43 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                        fVar43 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar43 = fVar37;
                        }
                      }
                      else {
                        fVar43 = (float)(int)(fVar43 + -0.5);
                      }
                      fVar37 = fVar45;
                      if (1.0 < fVar45) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar37 = fVar39;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      param_3 = 0x3f800000;
                      fVar45 = fVar42;
                      if (1.0 < fVar42) {
                        fVar45 = 1.0;
                      }
                      fVar45 = fVar45 * 255.0;
                      if (fVar42 < 0.0) {
                        fVar45 = fVar39;
                      }
                      dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                      if (0.0 <= fVar45) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar45 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar45 + -0.5);
                      }
                      if (lVar17 != 0) {
                        if (uVar29 < *(uint *)(lVar17 + 0x18)) {
                          *(uint *)(lVar17 + uVar31 * 4 + 0x20) =
                               (int)fVar46 & 0xffU | ((int)fVar43 & 0xffU) << 8 |
                               ((int)fVar37 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                          goto LAB_00e43400;
                        }
                        goto LAB_00e44400;
                      }
                      goto LAB_00e443fc;
                    }
                    lVar17 = *plVar2;
                    dVar40 = modf(DAT_028aa048,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar46 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar42 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar45 = 255.0;
                    }
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    *(uint *)(lVar17 + uVar18 * 4 + 0x20) =
                         (int)fVar46 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                         ((int)fVar42 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                    lVar17 = *plVar2;
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar46 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar42 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar45 = 255.0;
                    }
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    *(uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20) =
                         (int)fVar46 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                         ((int)fVar42 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                    lVar17 = *plVar2;
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar46 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar42 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar45 = 255.0;
                    }
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    *(uint *)(lVar17 + (long)(int)uVar32 * 4 + 0x20) =
                         (int)fVar46 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                         ((int)fVar42 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                    lVar17 = *plVar2;
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar46 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = 255.0;
                    }
                    dVar40 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar40 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar42 = 255.0;
                    }
                    dVar22 = modf(dVar22,(double *)&stack0x00000070);
                    if (dVar22 == 0.5) {
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar45 = 255.0;
                    }
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    *(uint *)(lVar17 + uVar31 * 4 + 0x20) =
                         (int)fVar46 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                         ((int)fVar42 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    uVar16 = *(undefined8 *)((long)*pdVar3 + 0xa0);
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar36 = FUN_02681b9c(uVar16,0,0);
                    if ((uVar36 & 1) == 0) goto LAB_00e43400;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + uVar18 * 4 + 0x20);
                    uVar9 = *puVar28;
                    if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                    goto LAB_00e443fc;
                    fVar37 = ((float)(uVar9 & 0xff) / 255.0) * *(float *)(lVar17 + 0x18);
                    fVar43 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x1c);
                    fVar45 = *(float *)(lVar17 + 0x20);
                    fVar42 = *(float *)(lVar17 + 0x24);
                    fVar46 = fVar37 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = fVar39;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = 1.0;
                        goto LAB_00e3ede4;
                      }
                      fVar37 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = -1.0;
LAB_00e3ede4:
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + fVar46;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar45 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar45;
                    fVar46 = fVar43 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar46 = fVar39;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar43 = fVar45;
                    if (1.0 < fVar45) {
                      fVar43 = 1.0;
                    }
                    fVar42 = ((float)(uVar9 >> 0x18) / 255.0) * fVar42;
                    fVar43 = fVar43 * 255.0;
                    if (fVar45 < 0.0) {
                      fVar43 = fVar39;
                    }
                    dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar22 == 0.5) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e3ffb0;
                      }
                      fVar43 = (float)(int)(fVar43 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                      fVar43 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar43 = fVar45;
                      }
                    }
                    else {
                      fVar43 = (float)(int)(fVar43 + -0.5);
                    }
                    fVar45 = fVar42;
                    if (1.0 < fVar42) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    if (fVar42 < 0.0) {
                      fVar45 = fVar39;
                    }
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar42 = 1.0;
                        goto LAB_00e40174;
                      }
                      fVar45 = (float)(int)(fVar45 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar42 = -1.0;
LAB_00e40174:
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = (float)_fStack0000000000000070 + fVar42;
                      }
                    }
                    else {
                      fVar45 = (float)(int)(fVar45 + -0.5);
                    }
                    *puVar28 = (int)fVar37 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar43 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20);
                    uVar9 = *puVar28;
                    if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                    goto LAB_00e443fc;
                    fVar37 = ((float)(uVar9 & 0xff) / 255.0) * *(float *)(lVar17 + 0x18);
                    fVar43 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x1c);
                    fVar45 = *(float *)(lVar17 + 0x20);
                    fVar42 = *(float *)(lVar17 + 0x24);
                    fVar46 = fVar37 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = fVar39;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = 1.0;
                        goto LAB_00e404dc;
                      }
                      fVar37 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = -1.0;
LAB_00e404dc:
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + fVar46;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar45 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar45;
                    fVar46 = fVar43 * 255.0;
                    if (fVar43 < 0.0) {
                      fVar46 = fVar39;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar43 = fVar45;
                    if (1.0 < fVar45) {
                      fVar43 = 1.0;
                    }
                    fVar42 = ((float)(uVar9 >> 0x18) / 255.0) * fVar42;
                    fVar43 = fVar43 * 255.0;
                    if (fVar45 < 0.0) {
                      fVar43 = fVar39;
                    }
                    dVar22 = modf((double)fVar43,(double *)&stack0x00000070);
                    if (0.0 <= fVar43) {
                      if (dVar22 == 0.5) {
                        fVar45 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e40888;
                      }
                      fVar43 = (float)(int)(fVar43 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                      fVar43 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar43 = fVar45;
                      }
                    }
                    else {
                      fVar43 = (float)(int)(fVar43 + -0.5);
                    }
                    fVar45 = fVar42;
                    if (1.0 < fVar42) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    if (fVar42 < 0.0) {
                      fVar45 = fVar39;
                    }
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar39 = 1.0;
                        goto LAB_00e40a4c;
                      }
                      fVar42 = (float)(int)(fVar45 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = -1.0;
LAB_00e40a4c:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + fVar39;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar45 + -0.5);
                    }
                    *puVar28 = (int)fVar37 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar43 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    lVar17 = lVar17 + (long)(int)uVar32 * 4;
                  }
                  else {
                    lVar17 = *(long *)((long)dVar22 + 0xa8);
                    if (lVar17 == 0) goto LAB_00e443fc;
                    fVar39 = *(float *)(lVar17 + 0x24);
                    if (fVar39 != 0.0) {
                      *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                    }
                    plVar35 = (long *)StringLiteral_9119;
                    cVar10 = *(char *)(lVar17 + 0x2c);
                    lVar27 = *plVar2;
                    lVar23 = *(long *)(lVar17 + 0x18);
                    fVar42 = fVar42 * fVar39;
                    if (*(int *)(lVar17 + 0x28) == 1) {
                      if (cVar10 == '\0') {
                        if (lVar23 == 0) goto LAB_00e443fc;
                        fVar46 = *(float *)(lVar17 + 0x20);
                        fVar45 = *(float *)((long)dVar22 + 0x84);
                        fVar42 = fVar42 + (*(float *)((long)dVar22 + 0x48) * fVar46) / fVar45;
                        fVar42 = fVar42 - (float)(int)fVar42;
                        fVar39 = fVar42;
                        if (1.0 < fVar42) {
                          fVar39 = fVar37;
                        }
                        fVar43 = fVar39;
                        if (fVar42 < 0.0) {
                          fVar43 = 0.0;
                        }
                        fVar43 = (float)FUN_0269ad38(fVar43,lVar23,0);
                        fVar42 = fVar43;
                        if (1.0 < fVar43) {
                          fVar42 = fVar37;
                        }
                        fVar42 = fVar42 * 255.0;
                        if (fVar43 < 0.0) {
                          fVar42 = 0.0;
                        }
                        dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                        if (0.0 <= fVar42) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3eeac;
                          }
                          fVar42 = (float)(int)(fVar42 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = fVar37;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar42 + -0.5);
                        }
                        fVar37 = fVar39;
                        if (1.0 < fVar39) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e41534;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar39;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar39 = fVar46;
                        if (1.0 < fVar46) {
                          fVar39 = 1.0;
                        }
                        fVar39 = fVar39 * 255.0;
                        if (fVar46 < 0.0) {
                          fVar39 = 0.0;
                        }
                        dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar22 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar39 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + -0.5);
                        }
                        fVar46 = fVar45;
                        if (1.0 < fVar45) {
                          fVar46 = 1.0;
                        }
                        fVar46 = fVar46 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar46 = 0.0;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        if (lVar27 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar27 + 0x18) <= uVar6) goto LAB_00e44400;
                        *(uint *)(lVar27 + uVar18 * 4 + 0x20) =
                             (int)fVar42 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar46 << 0x18;
                        dVar22 = *pdVar3;
                        if (((dVar22 == 0.0) ||
                            (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)) ||
                           (lVar23 = *(long *)(lVar17 + 0x18), lVar23 == 0)) goto LAB_00e443fc;
                        fVar37 = *(float *)((long)dVar22 + 0x48);
                        fVar42 = *(float *)((long)dVar22 + 0x84);
                        lVar27 = *plVar2;
                        fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                                 (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                        fVar46 = fVar46 - (float)(int)fVar46;
                        fVar39 = fVar46;
                        if (1.0 < fVar46) {
                          fVar39 = 1.0;
                        }
                      }
                      else {
                        if (lVar23 == 0) goto LAB_00e443fc;
                        fVar46 = *(float *)((long)dVar22 + 0x84);
                        fVar45 = *(float *)(lVar17 + 0x20);
                        fVar42 = fVar42 + ((*(float *)((long)dVar22 + 0x48) + fVar46) * fVar45) /
                                          fVar46;
                        fVar42 = fVar42 - (float)(int)fVar42;
                        fVar39 = fVar42;
                        if (1.0 < fVar42) {
                          fVar39 = fVar37;
                        }
                        fVar43 = fVar39;
                        if (fVar42 < 0.0) {
                          fVar43 = 0.0;
                        }
                        fVar43 = (float)FUN_0269ad38(fVar43,lVar23,0);
                        fVar42 = fVar43;
                        if (1.0 < fVar43) {
                          fVar42 = fVar37;
                        }
                        fVar42 = fVar42 * 255.0;
                        if (fVar43 < 0.0) {
                          fVar42 = 0.0;
                        }
                        dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                        if (0.0 <= fVar42) {
                          if (dVar22 == 0.5) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3ed6c;
                          }
                          fVar42 = (float)(int)(fVar42 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                          fVar42 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar42 = fVar37;
                          }
                        }
                        else {
                          fVar42 = (float)(int)(fVar42 + -0.5);
                        }
                        fVar37 = fVar39;
                        if (1.0 < fVar39) {
                          fVar37 = 1.0;
                        }
                        fVar37 = fVar37 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar37 = 0.0;
                        }
                        dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                        if (0.0 <= fVar37) {
                          if (dVar22 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e3f2ec;
                          }
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                        else if (dVar22 == -0.5) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = fVar39;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + -0.5);
                        }
                        fVar39 = fVar46;
                        if (1.0 < fVar46) {
                          fVar39 = 1.0;
                        }
                        fVar39 = fVar39 * 255.0;
                        if (fVar46 < 0.0) {
                          fVar39 = 0.0;
                        }
                        dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                        if (0.0 <= fVar39) {
                          if (dVar22 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar39 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + -0.5);
                        }
                        fVar46 = fVar45;
                        if (1.0 < fVar45) {
                          fVar46 = 1.0;
                        }
                        fVar46 = fVar46 * 255.0;
                        if (fVar45 < 0.0) {
                          fVar46 = 0.0;
                        }
                        dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                        if (0.0 <= fVar46) {
                          if (dVar22 == 0.5) {
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                        }
                        else if (dVar22 == -0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + -0.5);
                        }
                        if (lVar27 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar27 + 0x18) <= uVar6) goto LAB_00e44400;
                        *(uint *)(lVar27 + uVar18 * 4 + 0x20) =
                             (int)fVar42 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar46 << 0x18;
                        dVar22 = *pdVar3;
                        if (((dVar22 == 0.0) ||
                            (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)) ||
                           (lVar23 = *(long *)(lVar17 + 0x18), lVar23 == 0)) goto LAB_00e443fc;
                        fVar37 = *(float *)((long)dVar22 + 0x84);
                        fVar42 = *(float *)(lVar17 + 0x20);
                        lVar27 = *plVar2;
                        fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                                 ((*(float *)((long)dVar22 + 0x48) + fVar37) * fVar42) / fVar37;
                        fVar46 = fVar46 - (float)(int)fVar46;
                        fVar39 = fVar46;
                        if (1.0 < fVar46) {
                          fVar39 = 1.0;
                        }
                      }
                      fVar45 = fVar39;
                      if (fVar46 < 0.0) {
                        fVar45 = 0.0;
                      }
                      fVar45 = (float)FUN_0269ad38(fVar45,lVar23,0);
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e419a4;
                        }
                        fVar45 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar46;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e41a34;
                        }
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = fVar39;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar37 = fVar42;
                      if (1.0 < fVar42) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar42 < 0.0) {
                        fVar37 = 0.0;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      if (lVar27 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_00e44400;
                      *(uint *)(lVar27 + (long)(int)uVar34 * 4 + 0x20) =
                           (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      dVar22 = *pdVar3;
                      if (((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)
                          ) || (*(long *)(lVar17 + 0x18) == 0)) goto LAB_00e443fc;
                      fVar37 = *(float *)((long)dVar22 + 0x48);
                      fVar42 = *(float *)((long)dVar22 + 0x84);
                      lVar23 = *plVar2;
                      fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                               (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                      fVar46 = fVar46 - (float)(int)fVar46;
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar45 = fVar39;
                      if (fVar46 < 0.0) {
                        fVar45 = 0.0;
                      }
                      fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17 + 0x18),0);
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e41cd0;
                        }
                        fVar45 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar46;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e41d60;
                        }
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = fVar39;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar37 = fVar42;
                      if (1.0 < fVar42) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar42 < 0.0) {
                        fVar37 = 0.0;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      if (lVar23 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_00e44400;
                      *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                           (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      dVar22 = *pdVar3;
                      if (((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)
                          ) || (*(long *)(lVar17 + 0x18) == 0)) goto LAB_00e443fc;
                      fVar37 = *(float *)((long)dVar22 + 0x48);
                      fVar42 = *(float *)((long)dVar22 + 0x84);
                      lVar23 = *plVar2;
                      fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                               (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                      fVar46 = fVar46 - (float)(int)fVar46;
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar45 = fVar39;
                      if (fVar46 < 0.0) {
                        fVar45 = 0.0;
                      }
                      fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17 + 0x18),0);
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      param_3 = 0x437f0000;
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e41ffc;
                        }
                        fVar45 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar46;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar46 = 0.0;
                      }
LAB_00e42040:
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (fVar46 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        fVar46 = fVar39 + 1.0;
                        goto LAB_00e425d4;
                      }
                      fVar39 = (float)(int)(fVar46 + 0.5);
                    }
                    else {
                      lVar25 = *in_stack_00000038;
                      if (lVar25 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar25 + 0x18) <= uVar6) goto LAB_00e44400;
                      if (lVar23 == 0) goto LAB_00e443fc;
                      fVar46 = *(float *)(lVar25 + uVar18 * 0xc + 0x20);
                      fVar45 = *(float *)((long)dVar22 + 0x84);
                      fVar42 = fVar42 + (fVar46 * *(float *)(lVar17 + 0x20)) / fVar45;
                      fVar42 = fVar42 - (float)(int)fVar42;
                      fVar39 = fVar42;
                      if (1.0 < fVar42) {
                        fVar39 = fVar37;
                      }
                      fVar43 = fVar39;
                      if (fVar42 < 0.0) {
                        fVar43 = 0.0;
                      }
                      fVar43 = (float)FUN_0269ad38(fVar43,lVar23,0);
                      fVar42 = fVar43;
                      if (1.0 < fVar43) {
                        fVar42 = fVar37;
                      }
                      fVar42 = fVar42 * 255.0;
                      if (fVar43 < 0.0) {
                        fVar42 = 0.0;
                      }
                      dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                      if (0.0 <= fVar42) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e3e0b0;
                        }
                        fVar42 = (float)(int)(fVar42 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                        fVar42 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar42 = fVar37;
                        }
                      }
                      else {
                        fVar42 = (float)(int)(fVar42 + -0.5);
                      }
                      fVar37 = fVar39;
                      if (1.0 < fVar39) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar37 = 0.0;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e3ee80;
                        }
                        fVar37 = (float)(int)(fVar37 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = fVar39;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar46 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar46 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar46 = (float)(int)(fVar46 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + -0.5);
                      }
                      if (lVar27 == 0) goto LAB_00e443fc;
                      fVar45 = 1.0;
                      if (*(uint *)(lVar27 + 0x18) <= uVar6) goto LAB_00e44400;
                      *(uint *)(lVar27 + uVar18 * 4 + 0x20) =
                           (int)fVar42 & 0xffU | ((int)fVar37 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar46 << 0x18;
                      plVar35 = (long *)StringLiteral_9119;
                      dVar22 = *pdVar3;
                      if (((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)
                          ) || (lVar23 = *in_stack_00000038, lVar23 == 0)) goto LAB_00e443fc;
                      lVar25 = *plVar2;
                      lVar27 = *(long *)(lVar17 + 0x18);
                      fVar39 = fVar48 * *(float *)(lVar17 + 0x24);
                      if (cVar10 != '\0') {
                        if (uVar34 < *(uint *)(lVar23 + 0x18)) {
                          if (lVar27 != 0) {
                            fVar37 = *(float *)(lVar23 + (long)(int)uVar34 * 0xc + 0x20);
                            fVar42 = *(float *)((long)dVar22 + 0x84);
                            fVar39 = fVar39 + (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                            fVar39 = fVar39 - (float)(int)fVar39;
                            fVar46 = fVar39;
                            if (1.0 < fVar39) {
                              fVar46 = fVar45;
                            }
                            fVar43 = fVar46;
                            if (fVar39 < 0.0) {
                              fVar43 = 0.0;
                            }
                            fVar43 = (float)FUN_0269ad38(fVar43,lVar27,0);
                            fVar39 = fVar43;
                            if (1.0 < fVar43) {
                              fVar39 = fVar45;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar43 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar22 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f234;
                              }
                              fVar45 = (float)(int)(fVar39 + 0.5);
                            }
                            else if (dVar22 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                              fVar45 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar45 = fVar39;
                              }
                            }
                            else {
                              fVar45 = (float)(int)(fVar39 + -0.5);
                            }
                            fVar39 = fVar46;
                            if (1.0 < fVar46) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar46 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar22 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f594;
                              }
                              fVar46 = (float)(int)(fVar39 + 0.5);
                            }
                            else if (dVar22 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                              fVar46 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar46 = fVar39;
                              }
                            }
                            else {
                              fVar46 = (float)(int)(fVar39 + -0.5);
                            }
                            fVar39 = fVar37;
                            if (1.0 < fVar37) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar37 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar22 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar22 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            fVar37 = fVar42;
                            if (1.0 < fVar42) {
                              fVar37 = 1.0;
                            }
                            fVar37 = fVar37 * 255.0;
                            if (fVar42 < 0.0) {
                              fVar37 = 0.0;
                            }
                            dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                            if (0.0 <= fVar37) {
                              if (dVar22 == 0.5) {
                                fVar37 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar37 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar37 = (float)(int)(fVar37 + 0.5);
                              }
                            }
                            else if (dVar22 == -0.5) {
                              fVar37 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar37 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar37 = (float)(int)(fVar37 + -0.5);
                            }
                            if (lVar25 != 0) {
                              if (uVar34 < *(uint *)(lVar25 + 0x18)) {
                                *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                                     (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                dVar22 = *pdVar3;
                                if (((dVar22 != 0.0) &&
                                    (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 != 0)) &&
                                   (lVar23 = *in_stack_00000038, lVar23 != 0)) {
                                  if (uVar32 < *(uint *)(lVar23 + 0x18)) {
                                    if (*(long *)(lVar17 + 0x18) != 0) {
                                      fVar37 = *(float *)(lVar23 + (long)(int)uVar32 * 0xc + 0x20);
                                      fVar42 = *(float *)((long)dVar22 + 0x84);
                                      lVar23 = *plVar2;
                                      fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                                               (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                                      fVar46 = fVar46 - (float)(int)fVar46;
                                      fVar39 = fVar46;
                                      if (1.0 < fVar46) {
                                        fVar39 = 1.0;
                                      }
                                      fVar45 = fVar39;
                                      if (fVar46 < 0.0) {
                                        fVar45 = 0.0;
                                      }
                                      fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17 + 0x18),0
                                                                  );
                                      fVar46 = fVar45;
                                      if (1.0 < fVar45) {
                                        fVar46 = 1.0;
                                      }
                                      fVar46 = fVar46 * 255.0;
                                      if (fVar45 < 0.0) {
                                        fVar46 = 0.0;
                                      }
                                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                                      if (0.0 <= fVar46) {
                                        if (dVar22 == 0.5) {
                                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3f858;
                                        }
                                        fVar45 = (float)(int)(fVar46 + 0.5);
                                      }
                                      else if (dVar22 == -0.5) {
                                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                        fVar45 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar45 = fVar46;
                                        }
                                      }
                                      else {
                                        fVar45 = (float)(int)(fVar46 + -0.5);
                                      }
                                      fVar46 = fVar39;
                                      if (1.0 < fVar39) {
                                        fVar46 = 1.0;
                                      }
                                      fVar46 = fVar46 * 255.0;
                                      if (fVar39 < 0.0) {
                                        fVar46 = 0.0;
                                      }
                                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                                      if (0.0 <= fVar46) {
                                        if (dVar22 == 0.5) {
                                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                                          goto LAB_00e3f8e8;
                                        }
                                        fVar46 = (float)(int)(fVar46 + 0.5);
                                      }
                                      else if (dVar22 == -0.5) {
                                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                        fVar46 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar46 = fVar39;
                                        }
                                      }
                                      else {
                                        fVar46 = (float)(int)(fVar46 + -0.5);
                                      }
                                      fVar39 = fVar37;
                                      if (1.0 < fVar37) {
                                        fVar39 = 1.0;
                                      }
                                      fVar39 = fVar39 * 255.0;
                                      if (fVar37 < 0.0) {
                                        fVar39 = 0.0;
                                      }
                                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                                      if (0.0 <= fVar39) {
                                        if (dVar22 == 0.5) {
                                          fVar39 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar39 = (float)(int)(fVar39 + 0.5);
                                        }
                                      }
                                      else if (dVar22 == -0.5) {
                                        fVar39 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar39 = (float)(int)(fVar39 + -0.5);
                                      }
                                      fVar37 = fVar42;
                                      if (1.0 < fVar42) {
                                        fVar37 = 1.0;
                                      }
                                      fVar37 = fVar37 * 255.0;
                                      if (fVar42 < 0.0) {
                                        fVar37 = 0.0;
                                      }
                                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                                      plVar35 = (long *)StringLiteral_9119;
                                      if (0.0 <= fVar37) {
                                        if (dVar22 == 0.5) {
                                          fVar37 = (float)_fStack0000000000000070;
                                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                                          }
                                        }
                                        else {
                                          fVar37 = (float)(int)(fVar37 + 0.5);
                                        }
                                      }
                                      else if (dVar22 == -0.5) {
                                        fVar37 = (float)_fStack0000000000000070;
                                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                                        }
                                      }
                                      else {
                                        fVar37 = (float)(int)(fVar37 + -0.5);
                                      }
                                      if (lVar23 != 0) {
                                        if (uVar32 < *(uint *)(lVar23 + 0x18)) {
                                          *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                                               (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                               ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                                          dVar22 = *pdVar3;
                                          if (((dVar22 != 0.0) &&
                                              (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 != 0)
                                              ) && (lVar23 = *in_stack_00000038, lVar23 != 0)) {
                                            if (uVar29 < *(uint *)(lVar23 + 0x18)) {
                                              if (*(long *)(lVar17 + 0x18) != 0) {
                                                fVar37 = *(float *)(lVar23 + uVar31 * 0xc + 0x20);
                                                fVar42 = *(float *)((long)dVar22 + 0x84);
                                                lVar23 = *plVar2;
                                                fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                                                         (fVar37 * *(float *)(lVar17 + 0x20)) /
                                                         fVar42;
                                                fVar46 = fVar46 - (float)(int)fVar46;
                                                fVar39 = fVar46;
                                                if (1.0 < fVar46) {
                                                  fVar39 = 1.0;
                                                }
                                                fVar45 = fVar39;
                                                if (fVar46 < 0.0) {
                                                  fVar45 = 0.0;
                                                }
                                                fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17
                                                                                             + 0x18)
                                                                             ,0);
                                                fVar46 = fVar45;
                                                if (1.0 < fVar45) {
                                                  fVar46 = 1.0;
                                                }
                                                param_3 = 0x437f0000;
                                                fVar46 = fVar46 * 255.0;
                                                if (fVar45 < 0.0) {
                                                  fVar46 = 0.0;
                                                }
                                                dVar22 = modf((double)fVar46,
                                                              (double *)&stack0x00000070);
                                                if (0.0 <= fVar46) {
                                                  if (dVar22 == 0.5) {
                                                    fVar46 = (float)_fStack0000000000000070 + 1.0;
                                                    goto LAB_00e3fbd0;
                                                  }
                                                  fVar45 = (float)(int)(fVar46 + 0.5);
                                                }
                                                else if (dVar22 == -0.5) {
                                                  fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                                  fVar45 = (float)_fStack0000000000000070;
                                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                    fVar45 = fVar46;
                                                  }
                                                }
                                                else {
                                                  fVar45 = (float)(int)(fVar46 + -0.5);
                                                }
                                                fVar46 = fVar39;
                                                if (1.0 < fVar39) {
                                                  fVar46 = 1.0;
                                                }
                                                fVar46 = fVar46 * 255.0;
                                                if (fVar39 < 0.0) {
                                                  fVar46 = 0.0;
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
                      if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                      if (lVar27 == 0) goto LAB_00e443fc;
                      fVar37 = *(float *)(lVar23 + uVar18 * 0xc + 0x20);
                      fVar42 = *(float *)((long)dVar22 + 0x84);
                      fVar39 = fVar39 + (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                      fVar39 = fVar39 - (float)(int)fVar39;
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = fVar45;
                      }
                      fVar43 = fVar46;
                      if (fVar39 < 0.0) {
                        fVar43 = 0.0;
                      }
                      fVar43 = (float)FUN_0269ad38(fVar43,lVar27,0);
                      fVar39 = fVar43;
                      if (1.0 < fVar43) {
                        fVar39 = fVar45;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar43 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e3f25c;
                        }
                        fVar45 = (float)(int)(fVar39 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar39;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar46 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e415c4;
                        }
                        fVar46 = (float)(int)(fVar39 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = fVar39;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar37 = fVar42;
                      if (1.0 < fVar42) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar42 < 0.0) {
                        fVar37 = 0.0;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      if (lVar25 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_00e44400;
                      *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                           (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      dVar22 = *pdVar3;
                      if (((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)
                          ) || (lVar23 = *in_stack_00000038, lVar23 == 0)) goto LAB_00e443fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                      if (*(long *)(lVar17 + 0x18) == 0) goto LAB_00e443fc;
                      fVar37 = *(float *)(lVar23 + uVar18 * 0xc + 0x20);
                      fVar42 = *(float *)((long)dVar22 + 0x84);
                      lVar23 = *plVar2;
                      fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                               (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                      fVar46 = fVar46 - (float)(int)fVar46;
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar45 = fVar39;
                      if (fVar46 < 0.0) {
                        fVar45 = 0.0;
                      }
                      fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17 + 0x18),0);
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e421fc;
                        }
                        fVar45 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar46;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e4228c;
                        }
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = fVar39;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar39 = fVar37;
                      if (1.0 < fVar37) {
                        fVar39 = 1.0;
                      }
                      fVar39 = fVar39 * 255.0;
                      if (fVar37 < 0.0) {
                        fVar39 = 0.0;
                      }
                      dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                      if (0.0 <= fVar39) {
                        if (dVar22 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar39 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + -0.5);
                      }
                      fVar37 = fVar42;
                      if (1.0 < fVar42) {
                        fVar37 = 1.0;
                      }
                      fVar37 = fVar37 * 255.0;
                      if (fVar42 < 0.0) {
                        fVar37 = 0.0;
                      }
                      dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                      if (0.0 <= fVar37) {
                        if (dVar22 == 0.5) {
                          fVar37 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar37 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar37 = (float)(int)(fVar37 + 0.5);
                        }
                      }
                      else if (dVar22 == -0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + -1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar37 + -0.5);
                      }
                      if (lVar23 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar32) goto LAB_00e44400;
                      *(uint *)(lVar23 + (long)(int)uVar32 * 4 + 0x20) =
                           (int)fVar45 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                           ((int)fVar39 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                      dVar22 = *pdVar3;
                      if (((dVar22 == 0.0) || (lVar17 = *(long *)((long)dVar22 + 0xa8), lVar17 == 0)
                          ) || (lVar23 = *in_stack_00000038, lVar23 == 0)) goto LAB_00e443fc;
                      if (*(uint *)(lVar23 + 0x18) <= uVar6) goto LAB_00e44400;
                      if (*(long *)(lVar17 + 0x18) == 0) goto LAB_00e443fc;
                      fVar37 = *(float *)(lVar23 + uVar18 * 0xc + 0x20);
                      fVar42 = *(float *)((long)dVar22 + 0x84);
                      lVar23 = *plVar2;
                      fVar46 = fVar48 * *(float *)(lVar17 + 0x24) +
                               (fVar37 * *(float *)(lVar17 + 0x20)) / fVar42;
                      fVar46 = fVar46 - (float)(int)fVar46;
                      fVar39 = fVar46;
                      if (1.0 < fVar46) {
                        fVar39 = 1.0;
                      }
                      fVar45 = fVar39;
                      if (fVar46 < 0.0) {
                        fVar45 = 0.0;
                      }
                      fVar45 = (float)FUN_0269ad38(fVar45,*(long *)(lVar17 + 0x18),0);
                      fVar46 = fVar45;
                      if (1.0 < fVar45) {
                        fVar46 = 1.0;
                      }
                      param_3 = 0x437f0000;
                      fVar46 = fVar46 * 255.0;
                      if (fVar45 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) {
                        if (dVar22 == 0.5) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                          goto LAB_00e42560;
                        }
                        fVar45 = (float)(int)(fVar46 + 0.5);
                      }
                      else if (dVar22 == -0.5) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar46;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar46 + -0.5);
                      }
                      fVar46 = fVar39;
                      if (1.0 < fVar39) {
                        fVar46 = 1.0;
                      }
                      fVar46 = fVar46 * 255.0;
                      if (fVar39 < 0.0) {
                        fVar46 = 0.0;
                      }
                      dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                      if (0.0 <= fVar46) goto LAB_00e425b8;
LAB_00e4204c:
                      if (dVar22 == -0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        fVar46 = fVar39 + -1.0;
LAB_00e425d4:
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = fVar46;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar46 + -0.5);
                      }
                    }
                    fVar46 = fVar37;
                    if (1.0 < fVar37) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e42654;
                      }
                      fVar37 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = fVar46;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar46 = fVar42;
                    if (1.0 < fVar42) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar42 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e426e4;
                      }
                      fVar42 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = fVar46;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar46 + -0.5);
                    }
                    if (lVar23 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar23 + 0x18) <= uVar29) goto LAB_00e44400;
                    *(uint *)(lVar23 + uVar31 * 4 + 0x20) =
                         (int)fVar45 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                         ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                    if (*pdVar3 == 0.0) goto LAB_00e443fc;
                    uVar16 = *(undefined8 *)((long)*pdVar3 + 0xa0);
                    uVar49 = unaff_d14 & 0xffffffff;
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar36 = FUN_02681b9c(uVar16,0,0);
                    if ((uVar36 & 1) == 0) goto LAB_00e43400;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + uVar18 * 4 + 0x20);
                    uVar9 = *puVar28;
                    if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                    goto LAB_00e443fc;
                    fVar39 = ((float)(uVar9 & 0xff) / 255.0) * *(float *)(lVar17 + 0x18);
                    fVar45 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x1c);
                    fVar42 = *(float *)(lVar17 + 0x20);
                    fVar37 = *(float *)(lVar17 + 0x24);
                    fVar46 = fVar39 * 255.0;
                    if (fVar39 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar39 = 1.0;
                        goto LAB_00e4287c;
                      }
                      fVar46 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = -1.0;
LAB_00e4287c:
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + fVar39;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar39 = fVar45 * 255.0;
                    fVar42 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar42;
                    if (fVar45 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    fVar45 = fVar42;
                    if (1.0 < fVar42) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    fVar37 = ((float)(uVar9 >> 0x18) / 255.0) * fVar37;
                    if (fVar42 < 0.0) {
                      fVar45 = 0.0;
                    }
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e429c8;
                      }
                      fVar45 = (float)(int)(fVar45 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = fVar42;
                      }
                    }
                    else {
                      fVar45 = (float)(int)(fVar45 + -0.5);
                    }
                    fVar42 = fVar37;
                    if (1.0 < fVar37) {
                      fVar42 = 1.0;
                    }
                    fVar42 = fVar42 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar42 = 0.0;
                    }
                    dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                    if (0.0 <= fVar42) {
                      if (dVar22 == 0.5) {
                        fVar37 = 1.0;
                        goto LAB_00e42a44;
                      }
                      fVar42 = (float)(int)(fVar42 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = -1.0;
LAB_00e42a44:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar42 + -0.5);
                    }
                    *puVar28 = (int)fVar46 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20);
                    uVar9 = *puVar28;
                    if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                    goto LAB_00e443fc;
                    fVar39 = ((float)(uVar9 & 0xff) / 255.0) * *(float *)(lVar17 + 0x18);
                    fVar45 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x1c);
                    fVar42 = *(float *)(lVar17 + 0x20);
                    fVar37 = *(float *)(lVar17 + 0x24);
                    fVar46 = fVar39 * 255.0;
                    if (fVar39 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar39 = 1.0;
                        goto LAB_00e42b80;
                      }
                      fVar46 = (float)(int)(fVar46 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = -1.0;
LAB_00e42b80:
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + fVar39;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar39 = fVar45 * 255.0;
                    fVar42 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar42;
                    if (fVar45 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    fVar45 = fVar42;
                    if (1.0 < fVar42) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    fVar37 = ((float)(uVar9 >> 0x18) / 255.0) * fVar37;
                    if (fVar42 < 0.0) {
                      fVar45 = 0.0;
                    }
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar42 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e42ccc;
                      }
                      fVar45 = (float)(int)(fVar45 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                      fVar45 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar45 = fVar42;
                      }
                    }
                    else {
                      fVar45 = (float)(int)(fVar45 + -0.5);
                    }
                    fVar42 = fVar37;
                    if (1.0 < fVar37) {
                      fVar42 = 1.0;
                    }
                    fVar42 = fVar42 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar42 = 0.0;
                    }
                    dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                    if (0.0 <= fVar42) {
                      if (dVar22 == 0.5) {
                        fVar37 = 1.0;
                        goto LAB_00e42d48;
                      }
                      fVar42 = (float)(int)(fVar42 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = -1.0;
LAB_00e42d48:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = (float)_fStack0000000000000070 + fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar42 + -0.5);
                    }
                    *puVar28 = (int)fVar46 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    lVar17 = lVar17 + (long)(int)uVar32 * 4;
                  }
                  uVar9 = *(uint *)(lVar17 + 0x20);
                  if ((*pdVar3 == 0.0) || (lVar23 = *(long *)((long)*pdVar3 + 0xa0), lVar23 == 0))
                  goto LAB_00e443fc;
                  fVar39 = ((float)(uVar9 & 0xff) / 255.0) * *(float *)(lVar23 + 0x18);
                  fVar45 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar23 + 0x1c);
                  fVar42 = *(float *)(lVar23 + 0x20);
                  fVar37 = *(float *)(lVar23 + 0x24);
                  fVar46 = fVar39 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar46 = 0.0;
                  }
                  dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                  if (0.0 <= fVar46) {
                    if (dVar22 == 0.5) {
                      fVar39 = 1.0;
                      goto FUN_00e42e84;
                    }
                    fVar46 = (float)(int)(fVar46 + 0.5);
                  }
                  else if (dVar22 == -0.5) {
                    fVar39 = -1.0;
FUN_00e42e84:
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + fVar39;
                    }
                  }
                  else {
                    fVar46 = (float)(int)(fVar46 + -0.5);
                  }
                  fVar39 = fVar45 * 255.0;
                  fVar42 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar42;
                  if (fVar45 < 0.0) {
                    fVar39 = 0.0;
                  }
                  dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar22 == 0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + 0.5);
                    }
                  }
                  else if (dVar22 == -0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar45 = fVar42;
                  if (1.0 < fVar42) {
                    fVar45 = 1.0;
                  }
                  fVar45 = fVar45 * 255.0;
                  fVar37 = ((float)(uVar9 >> 0x18) / 255.0) * fVar37;
                  if (fVar42 < 0.0) {
                    fVar45 = 0.0;
                  }
                  dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                  if (0.0 <= fVar45) {
                    if (dVar22 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e42fd0;
                    }
                    fVar45 = (float)(int)(fVar45 + 0.5);
                  }
                  else if (dVar22 == -0.5) {
                    fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                    fVar45 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar45 = fVar42;
                    }
                  }
                  else {
                    fVar45 = (float)(int)(fVar45 + -0.5);
                  }
                  fVar42 = fVar37;
                  if (1.0 < fVar37) {
                    fVar42 = 1.0;
                  }
                  fVar42 = fVar42 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar42 = 0.0;
                  }
                  dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                  if (0.0 <= fVar42) {
                    if (dVar22 == 0.5) {
                      fVar37 = 1.0;
                      goto LAB_00e4304c;
                    }
                    fVar42 = (float)(int)(fVar42 + 0.5);
                  }
                  else if (dVar22 == -0.5) {
                    fVar37 = -1.0;
LAB_00e4304c:
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = (float)_fStack0000000000000070 + fVar37;
                    }
                  }
                  else {
                    fVar42 = (float)(int)(fVar42 + -0.5);
                  }
                  *(uint *)(lVar17 + 0x20) =
                       (int)fVar46 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                       ((int)fVar45 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                  lVar17 = *plVar2;
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  puVar28 = (uint *)(lVar17 + uVar31 * 4 + 0x20);
                  uVar9 = *puVar28;
                  if ((*pdVar3 == 0.0) || (lVar17 = *(long *)((long)*pdVar3 + 0xa0), lVar17 == 0))
                  goto LAB_00e443fc;
                  fVar39 = (float)(uVar9 & 0xff) / 255.0;
                  param_3 = (ulong)(uint)fVar39;
                  fVar39 = fVar39 * *(float *)(lVar17 + 0x18);
                  fVar45 = ((float)(uVar9 >> 8 & 0xff) / 255.0) * *(float *)(lVar17 + 0x1c);
                  fVar42 = *(float *)(lVar17 + 0x20);
                  fVar37 = *(float *)(lVar17 + 0x24);
                  fVar46 = fVar39 * 255.0;
                  if (fVar39 < 0.0) {
                    fVar46 = 0.0;
                  }
                  dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                  if (0.0 <= fVar46) {
                    if (dVar22 == 0.5) {
                      fVar39 = 1.0;
                      goto LAB_00e4318c;
                    }
                    fVar46 = (float)(int)(fVar46 + 0.5);
                  }
                  else if (dVar22 == -0.5) {
                    fVar39 = -1.0;
LAB_00e4318c:
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + fVar39;
                    }
                  }
                  else {
                    fVar46 = (float)(int)(fVar46 + -0.5);
                  }
                  fVar39 = fVar45 * 255.0;
                  fVar42 = ((float)(uVar9 >> 0x10 & 0xff) / 255.0) * fVar42;
                  if (fVar45 < 0.0) {
                    fVar39 = 0.0;
                  }
                  dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                  if (0.0 <= fVar39) {
                    if (dVar22 == 0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + 0.5);
                    }
                  }
                  else if (dVar22 == -0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar39 = (float)(int)(fVar39 + -0.5);
                  }
                  fVar45 = fVar42;
                  if (1.0 < fVar42) {
                    fVar45 = 1.0;
                  }
                  fVar45 = fVar45 * 255.0;
                  fVar37 = ((float)(uVar9 >> 0x18) / 255.0) * fVar37;
                  if (fVar42 < 0.0) {
                    fVar45 = 0.0;
                  }
                  dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                  unaff_s15 = fStack000000000000000c;
                  if (0.0 <= fVar45) {
                    if (dVar22 == 0.5) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                      goto LAB_00e432e0;
                    }
                    fVar45 = (float)(int)(fVar45 + 0.5);
                  }
                  else if (dVar22 == -0.5) {
                    fVar42 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                    fVar45 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar45 = fVar42;
                    }
                  }
                  else {
                    fVar45 = (float)(int)(fVar45 + -0.5);
                  }
                  fVar42 = fVar37;
                  if (1.0 < fVar37) {
                    fVar42 = 1.0;
                  }
                  fVar42 = fVar42 * 255.0;
                  if (fVar37 < 0.0) {
                    fVar42 = 0.0;
                  }
                  dVar22 = modf((double)fVar42,(double *)&stack0x00000070);
                  if (0.0 <= fVar42) {
                    if (dVar22 == 0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar42 + 0.5);
                    }
                  }
                  else if (dVar22 == -0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
                    }
                  }
                  else {
                    fVar37 = (float)(int)(fVar42 + -0.5);
                  }
                  uVar49 = unaff_d14 & 0xffffffff;
                  *puVar28 = (int)fVar46 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                             ((int)fVar45 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                }
                else {
                  if (*(long *)((long)dVar22 + 0x100) == 0) goto LAB_00e443fc;
                  if (*(char *)(*(long *)((long)dVar22 + 0x100) + 0x20) != '\0') goto LAB_00e3dd34;
                  lVar17 = *plVar2;
                  dVar22 = modf(DAT_028aa048,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar46 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar42 = 255.0;
                  }
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                  *(uint *)(lVar17 + uVar18 * 4 + 0x20) =
                       (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                  lVar17 = *plVar2;
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar46 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar42 = 255.0;
                  }
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                  *(uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20) =
                       (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                  lVar17 = *plVar2;
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar46 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar42 = 255.0;
                  }
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                  *(uint *)(lVar17 + (long)(int)uVar32 * 4 + 0x20) =
                       (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                  lVar17 = *plVar2;
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar39 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar39 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar39 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar46 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar46 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar46 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar37 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar37 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar37 = 255.0;
                  }
                  dVar22 = modf(dVar40,(double *)&stack0x00000070);
                  if (dVar22 == 0.5) {
                    fVar42 = (float)_fStack0000000000000070;
                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                      fVar42 = (float)_fStack0000000000000070 + 1.0;
                    }
                  }
                  else {
                    fVar42 = 255.0;
                  }
                  if (lVar17 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                  *(uint *)(lVar17 + uVar31 * 4 + 0x20) =
                       (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                       ((int)fVar37 & 0xffU) << 0x10 | (int)fVar42 << 0x18;
                }
LAB_00e43400:
                lVar17 = *plVar2;
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                lVar17 = lVar17 + uVar18 * 4;
                fVar39 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + 0x23));
                *(char *)(lVar17 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar39)
                ;
                lVar17 = unaff_x19[0x5f];
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                lVar17 = lVar17 + (long)(int)uVar34 * 4;
                fVar39 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + 0x23));
                *(char *)(lVar17 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar39)
                ;
                lVar17 = unaff_x19[0x5f];
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                lVar17 = lVar17 + (long)(int)uVar32 * 4;
                fVar39 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + 0x23));
                *(char *)(lVar17 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar39)
                ;
                lVar17 = unaff_x19[0x5f];
                if (lVar17 == 0) goto LAB_00e443fc;
                if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                lVar17 = lVar17 + uVar31 * 4;
                param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                fVar39 = (float)NEON_ucvtf((uint)*(byte *)(lVar17 + 0x23));
                *(char *)(lVar17 + 0x23) = (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar39)
                ;
                uVar36 = FUN_00e3703c();
                if ((uVar36 & 1) == 0) {
                  lVar17 = *plVar35;
                  if (*(int *)(lVar17 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar17 = *plVar35;
                  }
                  if (*(int *)(*(long *)(lVar17 + 0xb8) + 0x20) == 1) {
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + uVar18 * 4 + 0x20);
                    uVar9 = *puVar28;
                    fVar46 = (float)FUN_026982b0((float)(uVar9 & 0xff) / 255.0,0);
                    fVar37 = (float)FUN_026982b0((float)(uVar9 >> 8 & 0xff) / 255.0,0);
                    fVar42 = (float)FUN_026982b0((float)(uVar9 >> 0x10 & 0xff) / 255.0,0);
                    fVar39 = fVar46;
                    if (1.0 < fVar46) {
                      fVar39 = 1.0;
                    }
                    fVar39 = fVar39 * 255.0;
                    if (fVar46 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    fVar46 = fVar37;
                    if (1.0 < fVar37) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar37 = fVar42;
                    if (1.0 < fVar42) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    fVar45 = (float)(uVar9 >> 0x18) / 255.0;
                    if (fVar42 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e43744;
                      }
                      fVar42 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar37 + -0.5);
                    }
                    if (1.0 < fVar45) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar45 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar45 + -0.5);
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_00e44400;
                    *puVar28 = (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar42 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + (long)(int)uVar34 * 4 + 0x20);
                    uVar6 = *puVar28;
                    fVar46 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                    fVar37 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                    fVar42 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                    fVar39 = fVar46;
                    if (1.0 < fVar46) {
                      fVar39 = 1.0;
                    }
                    fVar39 = fVar39 * 255.0;
                    if (fVar46 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    fVar46 = fVar37;
                    if (1.0 < fVar37) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar37 = fVar42;
                    if (1.0 < fVar42) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    fVar45 = (float)(uVar6 >> 0x18) / 255.0;
                    if (fVar42 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e43a84;
                      }
                      fVar42 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar37 + -0.5);
                    }
                    if (1.0 < fVar45) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar45 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar45 + -0.5);
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar34) goto LAB_00e44400;
                    *puVar28 = (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar42 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + (long)(int)uVar32 * 4 + 0x20);
                    uVar6 = *puVar28;
                    fVar46 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                    fVar37 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                    fVar42 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                    fVar39 = fVar46;
                    if (1.0 < fVar46) {
                      fVar39 = 1.0;
                    }
                    fVar39 = fVar39 * 255.0;
                    if (fVar46 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    fVar46 = fVar37;
                    if (1.0 < fVar37) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar37 = fVar42;
                    if (1.0 < fVar42) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    fVar45 = (float)(uVar6 >> 0x18) / 255.0;
                    if (fVar42 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e43dbc;
                      }
                      fVar42 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar37 + -0.5);
                    }
                    if (1.0 < fVar45) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar37 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar37 = (float)(int)(fVar45 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar37 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar37 = (float)(int)(fVar45 + -0.5);
                    }
                    if (*(uint *)(lVar17 + 0x18) <= uVar32) goto LAB_00e44400;
                    *puVar28 = (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar42 & 0xffU) << 0x10 | (int)fVar37 << 0x18;
                    lVar17 = *plVar2;
                    if (lVar17 == 0) goto LAB_00e443fc;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    puVar28 = (uint *)(lVar17 + uVar31 * 4 + 0x20);
                    uVar6 = *puVar28;
                    fVar46 = (float)FUN_026982b0((float)(uVar6 & 0xff) / 255.0,0);
                    fVar37 = (float)FUN_026982b0((float)(uVar6 >> 8 & 0xff) / 255.0,0);
                    fVar42 = (float)FUN_026982b0((float)(uVar6 >> 0x10 & 0xff) / 255.0,0);
                    fVar39 = fVar46;
                    if (1.0 < fVar46) {
                      fVar39 = 1.0;
                    }
                    fVar39 = fVar39 * 255.0;
                    if (fVar46 < 0.0) {
                      fVar39 = 0.0;
                    }
                    dVar22 = modf((double)fVar39,(double *)&stack0x00000070);
                    if (0.0 <= fVar39) {
                      if (dVar22 == 0.5) {
                        fVar39 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar39 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar39 = (float)(int)(fVar39 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar39 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar39 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar39 = (float)(int)(fVar39 + -0.5);
                    }
                    param_3 = 0x3f800000;
                    fVar46 = fVar37;
                    if (1.0 < fVar37) {
                      fVar46 = 1.0;
                    }
                    fVar46 = fVar46 * 255.0;
                    if (fVar37 < 0.0) {
                      fVar46 = 0.0;
                    }
                    dVar22 = modf((double)fVar46,(double *)&stack0x00000070);
                    if (0.0 <= fVar46) {
                      if (dVar22 == 0.5) {
                        fVar46 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar46 = (float)_fStack0000000000000070 + 1.0;
                        }
                      }
                      else {
                        fVar46 = (float)(int)(fVar46 + 0.5);
                      }
                    }
                    else if (dVar22 == -0.5) {
                      fVar46 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar46 = (float)_fStack0000000000000070 + -1.0;
                      }
                    }
                    else {
                      fVar46 = (float)(int)(fVar46 + -0.5);
                    }
                    fVar37 = fVar42;
                    if (1.0 < fVar42) {
                      fVar37 = 1.0;
                    }
                    fVar37 = fVar37 * 255.0;
                    fVar45 = (float)(uVar6 >> 0x18) / 255.0;
                    if (fVar42 < 0.0) {
                      fVar37 = 0.0;
                    }
                    dVar22 = modf((double)fVar37,(double *)&stack0x00000070);
                    if (0.0 <= fVar37) {
                      if (dVar22 == 0.5) {
                        fVar37 = (float)_fStack0000000000000070 + 1.0;
                        goto LAB_00e440f4;
                      }
                      fVar42 = (float)(int)(fVar37 + 0.5);
                    }
                    else if (dVar22 == -0.5) {
                      fVar37 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                      fVar42 = (float)_fStack0000000000000070;
                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                        fVar42 = fVar37;
                      }
                    }
                    else {
                      fVar42 = (float)(int)(fVar37 + -0.5);
                    }
                    if (1.0 < fVar45) {
                      fVar45 = 1.0;
                    }
                    fVar45 = fVar45 * 255.0;
                    dVar22 = modf((double)fVar45,(double *)&stack0x00000070);
                    if (0.0 <= fVar45) {
                      param_2 = 0;
                      if (dVar22 == 0.5) {
                        fVar37 = 1.0;
                        goto LAB_00e44170;
                      }
                      fVar45 = (float)(int)(fVar45 + 0.5);
                    }
                    else {
                      param_2 = 0;
                      if (dVar22 == -0.5) {
                        fVar37 = -1.0;
LAB_00e44170:
                        fVar37 = (float)_fStack0000000000000070 + fVar37;
                        param_2 = (ulong)(uint)fVar37;
                        fVar45 = (float)_fStack0000000000000070;
                        if (((long)_fStack0000000000000070 & 1U) != 0) {
                          fVar45 = fVar37;
                        }
                      }
                      else {
                        fVar45 = (float)(int)(fVar45 + -0.5);
                      }
                    }
                    uVar49 = unaff_d14 & 0xffffffff;
                    if (*(uint *)(lVar17 + 0x18) <= uVar29) goto LAB_00e44400;
                    *puVar28 = (int)fVar39 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                               ((int)fVar42 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                  }
                }
                uVar30 = uVar30 + 1;
              } while (uVar30 != uVar5);
            }
            puVar11 = StringLiteral_4992;
            if (((unaff_x19[0x58] != 0) && (iVar15 = FUN_026c82cc(unaff_x19[0x58],0), 0 < iVar15))
               || (unaff_x19[0x59] != 0)) {
              puVar12 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
              if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
              iVar15 = *(int *)(unaff_x19[0xf] + 0x10);
              plVar1 = unaff_x19 + 0xcb;
              if (iVar15 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                FUN_010afdd4(plVar1,iVar15,
                             *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
              }
              if ((unaff_x19[0xcc] == 0) || (lVar17 = unaff_x19[0xf], lVar17 == 0))
              goto LAB_00e443fc;
              plVar2 = unaff_x19 + 0xcc;
              if (*(int *)(lVar17 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                FUN_010afdd4(plVar2,*(int *)(lVar17 + 0x10),*(undefined8 *)puVar12);
                lVar17 = unaff_x19[0xf];
                if (lVar17 == 0) goto LAB_00e443fc;
              }
              uVar5 = *(uint *)(lVar17 + 0x10);
              if (0 < (int)uVar5) {
                uVar30 = 0;
                lVar17 = 0x20;
                do {
                  if (unaff_x19[9] == 0) goto LAB_00e443fc;
                  FUN_0132138c(unaff_x19[9],uVar30 & 0xffffffff,&stack0x00000070,
                               *(undefined8 *)puVar11);
                  unaff_x19[0xca] = (long)_fStack0000000000000070;
                  if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                  lVar23 = unaff_x19[0xcb];
                  uVar38 = FUN_00e58a1c(_fStack0000000000000070,0);
                  if (lVar23 == 0) goto LAB_00e443fc;
                  if (*(uint *)(lVar23 + 0x18) <= uVar30) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  puVar4 = (undefined4 *)(lVar23 + lVar17);
                  *puVar4 = uVar38;
                  puVar4[1] = (int)param_2;
                  puVar4[2] = (int)param_3;
                  lVar23 = unaff_x19[0xca];
                  if ((lVar23 == 0) || (lVar27 = unaff_x19[0xcc], lVar27 == 0)) goto LAB_00e443fc;
                  if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_00e44400;
                  uVar38 = *(undefined4 *)(lVar23 + 0x4c);
                  uVar30 = uVar30 + 1;
                  puVar26 = (undefined8 *)(lVar27 + lVar17);
                  lVar17 = lVar17 + 0xc;
                  *puVar26 = *(undefined8 *)(lVar23 + 0x44);
                  *(undefined4 *)(puVar26 + 1) = uVar38;
                } while (uVar5 != uVar30);
              }
              if (unaff_x19[0x58] != 0) {
                FUN_013e0924(unaff_x19[0x58],*in_stack_00000038,*plVar1,*plVar2,
                             *(undefined8 *)StringLiteral_225);
              }
              lVar17 = unaff_x19[0x59];
              if (lVar17 != 0) {
                (**(code **)(lVar17 + 0x18))
                          (*(undefined8 *)(lVar17 + 0x40),*in_stack_00000038,*plVar1,*plVar2,
                           *(undefined8 *)(lVar17 + 0x28));
              }
              *(undefined1 *)(unaff_x19 + 0x2e) = 1;
            }
            lVar17 = __start_il2cpp();
            if (lVar17 != 0) {
              if ((*(char *)(lVar17 + 0x109) != '\0') || (*(char *)((long)unaff_x19 + 0xa9) != '\0')
                 ) {
                *(undefined1 *)(unaff_x19 + 0x2e) = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_00e443fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


