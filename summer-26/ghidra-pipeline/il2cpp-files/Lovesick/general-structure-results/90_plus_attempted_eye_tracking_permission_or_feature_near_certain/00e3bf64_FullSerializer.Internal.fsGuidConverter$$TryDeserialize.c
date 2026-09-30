/*
FUNCTION_NAME: FullSerializer.Internal.fsGuidConverter$$TryDeserialize
ENTRY_POINT: 00e3bf64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 130
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
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

void FullSerializer_Internal_fsGuidConverter__TryDeserialize
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  double *pdVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  char cVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  short sVar16;
  int iVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  double dVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar28;
  long lVar29;
  uint *puVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  undefined8 uVar35;
  uint uVar36;
  long *plVar37;
  ulong uVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  ulong uVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iVar50;
  float fVar51;
  ulong uVar52;
  float unaff_s15;
  float fStack000000000000000c;
  float fStack000000000000004c;
  float fStack0000000000000070;
  long in_stack_00000078;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(System_Func<Character,_uint>_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4992);
  thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo);
  thunk_FUN_00d48444(Method_TinyJSON_Variant_ToDateTime__);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_9119);
  thunk_FUN_00d48444(StringLiteral_225);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
  *(undefined1 *)(unaff_x20 + 0xd6c) = 1;
  uVar42 = FUN_00e372b0();
  fStack000000000000004c = (float)FUN_00e37408();
  if (unaff_x19[0xf] != 0) {
    iVar17 = *(int *)(unaff_x19[0xf] + 0x10);
    *(undefined1 *)(unaff_x19 + 0x2e) = 0;
    if (unaff_x19[0x5e] != 0) {
      iVar17 = iVar17 * 4;
      plVar1 = unaff_x19 + 0x5e;
      if (iVar17 != *(int *)(unaff_x19[0x5e] + 0x18)) {
        FUN_010afdd4(plVar1,iVar17,
                     *(undefined8 *)Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
      }
      puVar13 = Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__;
      if (unaff_x19[0x60] != 0) {
        plVar2 = unaff_x19 + 0x60;
        if (iVar17 != *(int *)(unaff_x19[0x60] + 0x18)) {
          FUN_010afdd4(plVar2,iVar17,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<string,_JSONNode>_Dispose__
                      );
        }
        if (unaff_x19[0x61] != 0) {
          plVar3 = unaff_x19 + 0x61;
          if (iVar17 != *(int *)(unaff_x19[0x61] + 0x18)) {
            FUN_010afdd4(plVar3,iVar17,*(undefined8 *)puVar13);
          }
          if (unaff_x19[0x5f] != 0) {
            plVar4 = unaff_x19 + 0x5f;
            if (iVar17 != *(int *)(unaff_x19[0x5f] + 0x18)) {
              FUN_010afdd4(plVar4,iVar17,
                           *(undefined8 *)
                            Method_RCG_Lovesick_InteractiveObjects_RecordStoreLock_HandlePlaced__);
            }
            puVar15 = Method_TinyJSON_Variant_ToDateTime__;
            puVar14 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
            puVar13 = 
            Method_System_Collections_Generic_Dictionary<string,_JsonSchemaNode>_GetEnumerator__;
            if (unaff_x19[0x62] != 0) {
              if (*(int *)(unaff_x19[0x62] + 0x18) != iVar17) {
                uVar18 = FUN_00da4fb8(*(undefined8 *)
                                       Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                                      ,iVar17);
                lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
                if (lVar19 == 0) goto LAB_00e443fc;
                FUN_01320f6c(lVar19,uVar18,*(undefined8 *)puVar13);
                unaff_x19[0x62] = lVar19;
              }
              if (unaff_x19[99] != 0) {
                if (*(int *)(unaff_x19[99] + 0x18) != iVar17) {
                  uVar18 = FUN_00da4fb8(*(undefined8 *)puVar14,iVar17);
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)puVar15);
                  if (lVar19 == 0) goto LAB_00e443fc;
                  FUN_01320f6c(lVar19,uVar18,*(undefined8 *)puVar13);
                  unaff_x19[99] = lVar19;
                }
                if (unaff_x19[0xf] != 0) {
                  uVar7 = *(uint *)(unaff_x19[0xf] + 0x10);
                  if (0 < (int)uVar7) {
                    uVar32 = 0;
                    pdVar5 = (double *)(unaff_x19 + 0xca);
                    fVar51 = (float)uVar42;
                    uVar52 = uVar42;
                    fStack000000000000000c = unaff_s15;
                    do {
                      puVar14 = StringLiteral_4992;
                      puVar13 = OVREyeGaze_TypeInfo;
                      fVar41 = 0.0;
                      if (unaff_x19[9] == 0) goto LAB_00e443fc;
                      FUN_0132138c(unaff_x19[9],uVar32 & 0xffffffff,&stack0x00000070,
                                   *(undefined8 *)StringLiteral_4992);
                      *pdVar5 = _fStack0000000000000070;
                      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                      iVar17 = FUN_00e4e99c();
                      if (iVar17 <= *(int *)((long)unaff_x19 + 0x38c)) {
                        if (*pdVar5 == 0.0) goto LAB_00e443fc;
                        *(undefined1 *)((long)*pdVar5 + 0x165) = 1;
                      }
                      if (*(float *)(unaff_x19 + 0x14) == 0.0) {
                        FUN_00e45d2c();
                      }
                      *(undefined2 *)(unaff_x19 + 0xdc) = 0;
                      if (*(char *)((long)unaff_x19 + 0xf6) == '\0') {
                        uVar20 = FUN_0269e56c(0);
                        if (((fStack000000000000004c == 0.0) || ((uVar20 & 1) == 0)) ||
                           (1 < (int)unaff_x19[0x2a] - 3U)) {
                          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                          iVar17 = *(int *)(unaff_x19[0xf] + 0x10) + -1;
                          *(int *)((long)unaff_x19 + 0x38c) = iVar17;
                          if ((unaff_x19[9] == 0) ||
                             (FUN_0132138c(unaff_x19[9],iVar17,&stack0x00000070,
                                           *(undefined8 *)puVar14), _fStack0000000000000070 == 0.0))
                          goto LAB_00e443fc;
                          *(undefined4 *)(unaff_x19 + 0x4a) =
                               *(undefined4 *)((long)_fStack0000000000000070 + 0x48);
                          if ((unaff_x19[9] == 0) ||
                             (FUN_0132138c(unaff_x19[9],*(undefined4 *)((long)unaff_x19 + 0x38c),
                                           &stack0x00000070,*(undefined8 *)puVar14),
                             _fStack0000000000000070 == 0.0)) goto LAB_00e443fc;
                          *(float *)((long)unaff_x19 + 0x254) =
                               *(float *)((long)_fStack0000000000000070 + 0x48) +
                               *(float *)((long)unaff_x19 + 0x50c);
                          *(undefined4 *)(unaff_x19 + 0x4b) =
                               *(undefined4 *)((long)unaff_x19 + 0x18c);
                        }
                      }
                      else {
                        dVar24 = *pdVar5;
                        if ((dVar24 == 0.0) || (*(long *)((long)dVar24 + 0x78) == 0))
                        goto LAB_00e443fc;
                        fVar39 = *(float *)(*(long *)((long)dVar24 + 0x78) + 0x18);
                        fVar49 = DAT_028aa034;
                        if (fVar39 != 0.0) {
                          fVar49 = fVar39;
                        }
                        if ((0.0 < (unaff_s15 - *(float *)((long)dVar24 + 100)) / fVar49) &&
                           (*(char *)((long)dVar24 + 0x165) == '\0')) {
                          *(undefined1 *)((long)dVar24 + 0x165) = 1;
                          *(undefined1 *)((long)unaff_x19 + 0x6e1) = 1;
                          if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                          sVar16 = FUN_015fa29c(unaff_x19[0xf],uVar32 & 0xffffffff,0);
                          if (sVar16 != 0x200b) {
                            *(undefined1 *)(unaff_x19 + 0xdc) = 1;
                            if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                            sVar16 = FUN_015fa29c(unaff_x19[0xf],uVar32 & 0xffffffff,0);
                            if (sVar16 != 0x20) {
                              if (unaff_x19[0xf] == 0) goto LAB_00e443fc;
                              sVar16 = FUN_015fa29c(unaff_x19[0xf],uVar32 & 0xffffffff,0);
                              if (sVar16 != 10) {
                                lVar19 = unaff_x19[0xca];
                                if (lVar19 == 0) goto LAB_00e443fc;
                                fVar45 = *(float *)(lVar19 + 0x48);
                                fVar49 = *(float *)(unaff_x19 + 0x4b);
                                fVar48 = fVar45 + *(float *)((long)unaff_x19 + 0x50c);
                                fVar39 = *(float *)(unaff_x19 + 0x4a);
                                if (fVar45 <= *(float *)(unaff_x19 + 0x4a)) {
                                  fVar39 = fVar45;
                                }
                                *(float *)(unaff_x19 + 0x4a) = fVar39;
                                fVar39 = *(float *)((long)unaff_x19 + 0x254);
                                if (fVar48 <= *(float *)((long)unaff_x19 + 0x254)) {
                                  fVar39 = fVar48;
                                }
                                *(float *)((long)unaff_x19 + 0x254) = fVar39;
                                fVar39 = (float)FUN_00e5ef30(*(undefined4 *)
                                                              ((long)unaff_x19 + 0x134),lVar19,0);
                                fVar39 = fVar39 + *(float *)(unaff_x19 + 0xa1) +
                                         *(float *)((long)unaff_x19 + 0x55c);
                                if (fVar49 <= fVar39) {
                                  fVar49 = fVar39;
                                }
                                *(float *)(unaff_x19 + 0x4b) = fVar49;
                              }
                            }
                          }
                          iVar50 = *(int *)((long)unaff_x19 + 0x38c);
                          if (*(int *)((long)unaff_x19 + 0x38c) <= iVar17) {
                            iVar50 = iVar17;
                          }
                          *(int *)((long)unaff_x19 + 0x38c) = iVar50;
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
                        lVar19 = unaff_x19[0x55];
                        if (lVar19 != 0) {
                          (**(code **)(lVar19 + 0x18))
                                    (*(undefined8 *)(lVar19 + 0x40),*(undefined8 *)(lVar19 + 0x28));
                        }
                      }
                      unaff_x19[0xc6] = 0;
                      fVar39 = 0.0;
                      *(undefined4 *)(unaff_x19 + 199) = 0;
                      fVar49 = 0.0;
                      if ((((0.0 < fStack000000000000004c) &&
                           (uVar8 = *(uint *)(unaff_x19 + 0x2a), fVar49 = fVar39, uVar8 < 5)) &&
                          ((1 << (ulong)(uVar8 & 0x1f) & 0x19U) != 0)) &&
                         (*(float *)(unaff_x19 + 0x4a) < -*(float *)((long)unaff_x19 + 0x184))) {
                        if (uVar8 == 4) {
                          lVar19 = unaff_x19[0xc];
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (0 < *(int *)(lVar19 + 0x18)) {
                            iVar17 = 0;
                            do {
                              FUN_0132138c(lVar19,iVar17,&stack0x00000070,*(undefined8 *)puVar13);
                              *(float *)((long)unaff_x19 + 0x634) = fStack0000000000000070;
                              fVar49 = fStack0000000000000070;
                              if (-*(float *)(unaff_x19 + 0x4a) -
                                  *(float *)((long)unaff_x19 + 0x184) <= fStack0000000000000070)
                              break;
                              lVar19 = unaff_x19[0xc];
                              if (lVar19 == 0) goto LAB_00e443fc;
                              iVar17 = iVar17 + 1;
                            } while (iVar17 < *(int *)(lVar19 + 0x18));
                          }
                        }
                        else {
                          lVar19 = unaff_x19[0xb];
                          if (lVar19 == 0) goto LAB_00e443fc;
                          iVar17 = 0;
                          fVar49 = 0.0;
                          while (iVar17 < *(int *)(lVar19 + 0x18)) {
                            FUN_0132138c(lVar19,iVar17,&stack0x00000070,*(undefined8 *)puVar13);
                            fVar49 = fVar49 + fStack0000000000000070;
                            *(float *)((long)unaff_x19 + 0x634) = fVar49;
                            if (-*(float *)(unaff_x19 + 0x4a) - *(float *)((long)unaff_x19 + 0x184)
                                <= fVar49) break;
                            lVar19 = unaff_x19[0xb];
                            iVar17 = iVar17 + 1;
                            if (lVar19 == 0) goto LAB_00e443fc;
                          }
                        }
                      }
                      *(float *)(unaff_x19 + 0xc6) =
                           *(float *)(unaff_x19 + 0xc6) + *(float *)(unaff_x19 + 0xa7);
                      if (unaff_x19[9] == 0) goto LAB_00e443fc;
                      fVar39 = *(float *)((long)unaff_x19 + 0x53c);
                      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar14);
                      if ((_fStack0000000000000070 == 0.0) || (unaff_x19[9] == 0))
                      goto LAB_00e443fc;
                      fVar45 = *(float *)((long)_fStack0000000000000070 + 0x5c);
                      FUN_0132138c(unaff_x19[9],0,&stack0x00000070,*(undefined8 *)puVar14);
                      if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                      fVar46 = *(float *)(unaff_x19 + 0xa8);
                      fVar48 = *(float *)(unaff_x19 + 199) + fVar46;
                      *(float *)((long)unaff_x19 + 0x634) =
                           fVar49 + fVar39 + (fVar45 + -1.0) *
                                             *(float *)((long)_fStack0000000000000070 + 0x84);
                      *(float *)(unaff_x19 + 199) = fVar48;
                      puVar13 = 
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      ;
                      if (DAT_03774d76 == '\0') {
                        thunk_FUN_00d48444(
                                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                          );
                        DAT_03774d76 = '\x01';
                      }
                      fVar39 = 1.0;
                      fVar49 = 1.0;
                      uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
                      *(undefined8 *)((long)unaff_x19 + 0x674) =
                           **(undefined8 **)(*(long *)puVar13 + 0xb8);
                      *(undefined4 *)((long)unaff_x19 + 0x67c) = uVar40;
                      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                      uVar18 = *(undefined8 *)(unaff_x19[0xca] + 200);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_02681b9c(uVar18,0,0);
                      if ((uVar20 & 1) != 0) {
                        lVar19 = __start_il2cpp();
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if ((*(char *)(lVar19 + 0x109) == '\0') &&
                           (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                          uVar40 = FUN_00e4ee40();
                          *(undefined4 *)((long)unaff_x19 + 0x674) = uVar40;
                          *(float *)(unaff_x19 + 0xcf) = fVar48;
                          *(float *)((long)unaff_x19 + 0x67c) = fVar46;
                        }
                      }
                      if (DAT_03774d76 == '\0') {
                        thunk_FUN_00d48444(puVar13);
                        DAT_03774d76 = '\x01';
                      }
                      lVar25 = *(long *)puVar13;
                      uVar40 = *(undefined4 *)(*(undefined8 **)(lVar25 + 0xb8) + 1);
                      *(undefined8 *)((long)unaff_x19 + 0x5f4) = **(undefined8 **)(lVar25 + 0xb8);
                      *(undefined4 *)((long)unaff_x19 + 0x5fc) = uVar40;
                      lVar19 = (*(long **)(lVar25 + 0xb8))[1];
                      unaff_x19[0xc0] = **(long **)(lVar25 + 0xb8);
                      *(int *)(unaff_x19 + 0xc1) = (int)lVar19;
                      uVar40 = *(undefined4 *)(*(undefined8 **)(lVar25 + 0xb8) + 1);
                      *(undefined8 *)((long)unaff_x19 + 0x60c) = **(undefined8 **)(lVar25 + 0xb8);
                      *(undefined4 *)((long)unaff_x19 + 0x614) = uVar40;
                      lVar19 = (*(long **)(lVar25 + 0xb8))[1];
                      unaff_x19[0xc3] = **(long **)(lVar25 + 0xb8);
                      *(int *)(unaff_x19 + 0xc4) = (int)lVar19;
                      uVar40 = *(undefined4 *)(*(undefined8 **)(lVar25 + 0xb8) + 1);
                      *(undefined8 *)((long)unaff_x19 + 0x624) = **(undefined8 **)(lVar25 + 0xb8);
                      *(undefined4 *)((long)unaff_x19 + 0x62c) = uVar40;
                      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                      uVar18 = *(undefined8 *)(unaff_x19[0xca] + 0xc0);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_02681b9c(uVar18,0,0);
                      if ((uVar20 & 1) != 0) {
                        if (*pdVar5 == 0.0) goto LAB_00e443fc;
                        if (*(float *)((long)*pdVar5 + 0x84) != 0.0) {
                          lVar19 = __start_il2cpp();
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if ((*(char *)(lVar19 + 0x109) == '\0') &&
                             (*(char *)((long)unaff_x19 + 0xa9) == '\0')) {
                            lVar19 = unaff_x19[0xca];
                            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                            if ((lVar19 == 0) || (lVar25 = *(long *)(lVar19 + 0xc0), lVar25 == 0))
                            goto LAB_00e443fc;
                            uVar20 = uVar52;
                            if (*(char *)(lVar25 + 0x18) != '\0') {
                              fVar48 = *(float *)(lVar19 + 100);
                              uVar20 = (ulong)(uint)(*(float *)((long)unaff_x19 + 0x2ec) - fVar48);
                            }
                            if (*(char *)(lVar25 + 0x19) != '\0') {
                              uVar40 = FUN_00e4e9f4(uVar20);
                              lVar19 = unaff_x19[0xca];
                              *(undefined4 *)((long)unaff_x19 + 0x5f4) = uVar40;
                              *(float *)(unaff_x19 + 0xbf) = fVar48;
                              *(float *)((long)unaff_x19 + 0x5fc) = fVar46;
                              if (lVar19 == 0) goto LAB_00e443fc;
                            }
                            if (*(long *)(lVar19 + 0xc0) == 0) goto LAB_00e443fc;
                            if (*(char *)(*(long *)(lVar19 + 0xc0) + 0x28) != '\0') {
                              fVar45 = (float)FUN_00e4e9f4(uVar20);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              fVar44 = fVar46 + *(float *)(unaff_x19 + 0xc1);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc0] =
                                   CONCAT44(fVar48 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc0]);
                              *(float *)(unaff_x19 + 0xc1) = fVar44;
                              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)
                                 ) goto LAB_00e443fc;
                              fVar45 = (float)FUN_00e4e9f4(uVar20);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x60c) =
                                   CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x60c) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                           );
                              *(float *)((long)unaff_x19 + 0x614) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x614);
                              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)
                                 ) goto LAB_00e443fc;
                              fVar45 = (float)FUN_00e4e9f4(uVar20);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              fVar48 = fVar46 + *(float *)(unaff_x19 + 0xc4);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc3] =
                                   CONCAT44(fVar44 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc3]);
                              *(float *)(unaff_x19 + 0xc4) = fVar48;
                              if ((unaff_x19[0xca] == 0) || (*(long *)(unaff_x19[0xca] + 0xc0) == 0)
                                 ) goto LAB_00e443fc;
                              fVar45 = (float)FUN_00e4e9f4(uVar20);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x624) =
                                   CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x624) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x624)
                                           );
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x62c) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x62c);
                              if (lVar19 == 0) goto LAB_00e443fc;
                            }
                            if (*(long *)(lVar19 + 0xc0) == 0) goto LAB_00e443fc;
                            if (*(char *)(*(long *)(lVar19 + 0xc0) + 0x50) != '\0') {
                              FUN_00e5eda8(lVar19,0);
                              fVar45 = (float)FUN_00e4eb50();
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              fVar44 = fVar46 + *(float *)(unaff_x19 + 0xc1);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc0] =
                                   CONCAT44(fVar48 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc0]);
                              *(float *)(unaff_x19 + 0xc1) = fVar44;
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              FUN_00e5b838(lVar19,0);
                              fVar45 = (float)FUN_00e4eb50();
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x60c) =
                                   CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x60c) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                           );
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x614) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x614);
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              FUN_00e5eea4(lVar19,0);
                              fVar45 = (float)FUN_00e4eb50();
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              fVar48 = fVar46 + *(float *)(unaff_x19 + 0xc4);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc3] =
                                   CONCAT44(fVar44 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc3]);
                              *(float *)(unaff_x19 + 0xc4) = fVar48;
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              FUN_00e5b7d8(lVar19,0);
                              fVar45 = (float)FUN_00e4eb50();
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x624) =
                                   CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x624) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x624)
                                           );
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x62c) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x62c);
                              if (lVar19 == 0) goto LAB_00e443fc;
                            }
                            lVar25 = *(long *)(lVar19 + 0xc0);
                            if (lVar25 == 0) goto LAB_00e443fc;
                            if (*(char *)(lVar25 + 0x60) != '\0') {
                              uVar35 = *(undefined8 *)(lVar25 + 0x68);
                              uVar18 = FUN_00e5eda8(lVar19,0);
                              fVar45 = (float)FUN_00e4ecc4(uVar18,lVar19,uVar35);
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              fVar44 = fVar46 + *(float *)(unaff_x19 + 0xc1);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc0] =
                                   CONCAT44(fVar48 + (float)((ulong)unaff_x19[0xc0] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc0]);
                              *(float *)(unaff_x19 + 0xc1) = fVar44;
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              uVar35 = *(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x68);
                              uVar18 = FUN_00e5b838(lVar19,0);
                              fVar45 = (float)FUN_00e4ecc4(uVar18,lVar19,uVar35);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x60c) =
                                   CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x60c) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x60c)
                                           );
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x614) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x614);
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              uVar35 = *(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x68);
                              uVar18 = FUN_00e5eea4(lVar19,0);
                              fVar45 = (float)FUN_00e4ecc4(uVar18,lVar19,uVar35);
                              lVar19 = unaff_x19[0xca];
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar44;
                              fVar48 = fVar46 + *(float *)(unaff_x19 + 0xc4);
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              unaff_x19[0xc3] =
                                   CONCAT44(fVar44 + (float)((ulong)unaff_x19[0xc3] >> 0x20),
                                            fVar45 + (float)unaff_x19[0xc3]);
                              *(float *)(unaff_x19 + 0xc4) = fVar48;
                              if ((lVar19 == 0) || (*(long *)(lVar19 + 0xc0) == 0))
                              goto LAB_00e443fc;
                              uVar35 = *(undefined8 *)(*(long *)(lVar19 + 0xc0) + 0x68);
                              uVar18 = FUN_00e5b7d8(lVar19,0);
                              fVar45 = (float)FUN_00e4ecc4(uVar18,lVar19,uVar35);
                              *(float *)((long)unaff_x19 + 0x63c) = fVar45;
                              *(float *)(unaff_x19 + 200) = fVar48;
                              *(float *)((long)unaff_x19 + 0x644) = fVar46;
                              *(ulong *)((long)unaff_x19 + 0x624) =
                                   CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)
                                                                     ((long)unaff_x19 + 0x624) >>
                                                            0x20),
                                            fVar45 + (float)*(undefined8 *)((long)unaff_x19 + 0x624)
                                           );
                              *(float *)((long)unaff_x19 + 0x62c) =
                                   fVar46 + *(float *)((long)unaff_x19 + 0x62c);
                            }
                          }
                        }
                      }
                      uVar8 = (int)uVar32 << 2;
                      if ((fStack000000000000004c <= 0.0) || ((int)unaff_x19[0x2a] == 2)) {
LAB_00e3cd74:
                        if (*(char *)((long)unaff_x19 + 300) == '\0') {
                          *(long *)((long)unaff_x19 + 0x6e4) = unaff_x19[0x24];
                        }
                        else {
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          uVar18 = *(undefined8 *)((long)*pdVar5 + 0x80);
                          *(ulong *)((long)unaff_x19 + 0x6e4) =
                               CONCAT44((float)((ulong)unaff_x19[0x24] >> 0x20) *
                                        (float)((ulong)uVar18 >> 0x20),
                                        (float)unaff_x19[0x24] * (float)uVar18);
                        }
                        lVar19 = unaff_x19[0x5e];
                        *(int *)((long)unaff_x19 + 0x6ec) = (int)unaff_x19[0x25];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        fVar45 = (float)FUN_00e5eda8(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        fVar48 = *(float *)((long)unaff_x19 + 0x674);
                        uVar20 = (ulong)(int)uVar8;
                        *(float *)(lVar19 + uVar20 * 0xc + 0x20) =
                             fVar45 + fVar48 + *(float *)(unaff_x19 + 0xc0) +
                             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                             *(float *)((long)unaff_x19 + 0x6e4);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5eda8(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        fVar45 = *(float *)((long)unaff_x19 + 0x604);
                        *(float *)(lVar19 + uVar20 * 0xc + 0x24) =
                             fVar48 + *(float *)(unaff_x19 + 0xcf) + fVar45 +
                             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                             *(float *)(unaff_x19 + 0xdd);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5eda8(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        *(float *)(lVar19 + uVar20 * 0xc + 0x28) =
                             fVar45 + *(float *)((long)unaff_x19 + 0x67c) +
                             *(float *)(unaff_x19 + 0xc1) + *(float *)((long)unaff_x19 + 0x5fc) +
                             *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        fVar45 = (float)FUN_00e5b838(*pdVar5,0);
                        uVar38 = uVar20 | 1;
                        uVar31 = (uint)uVar38;
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        fVar48 = *(float *)((long)unaff_x19 + 0x674);
                        *(float *)(lVar19 + uVar38 * 0xc + 0x20) =
                             fVar45 + fVar48 + *(float *)((long)unaff_x19 + 0x60c) +
                             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                             *(float *)((long)unaff_x19 + 0x6e4);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5b838(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        fVar45 = *(float *)(unaff_x19 + 0xc2);
                        *(float *)(lVar19 + uVar38 * 0xc + 0x24) =
                             fVar48 + *(float *)(unaff_x19 + 0xcf) + fVar45 +
                             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                             *(float *)(unaff_x19 + 0xdd);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5b838(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        *(float *)(lVar19 + uVar38 * 0xc + 0x28) =
                             fVar45 + *(float *)((long)unaff_x19 + 0x67c) +
                             *(float *)((long)unaff_x19 + 0x614) +
                             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                             *(float *)((long)unaff_x19 + 0x6ec);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        fVar45 = (float)FUN_00e5eea4(*pdVar5,0);
                        uVar23 = uVar20 | 2;
                        uVar34 = (uint)uVar23;
                        if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                        fVar48 = *(float *)((long)unaff_x19 + 0x674);
                        *(float *)(lVar19 + uVar23 * 0xc + 0x20) =
                             fVar45 + fVar48 + *(float *)(unaff_x19 + 0xc3) +
                             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                             *(float *)((long)unaff_x19 + 0x6e4);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5eea4(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                        fVar45 = *(float *)((long)unaff_x19 + 0x61c);
                        *(float *)(lVar19 + uVar23 * 0xc + 0x24) =
                             fVar48 + *(float *)(unaff_x19 + 0xcf) + fVar45 +
                             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                             *(float *)(unaff_x19 + 0xdd);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5eea4(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                        *(float *)(lVar19 + uVar23 * 0xc + 0x28) =
                             fVar45 + *(float *)((long)unaff_x19 + 0x67c) +
                             *(float *)(unaff_x19 + 0xc4) + *(float *)((long)unaff_x19 + 0x5fc) +
                             *(float *)(unaff_x19 + 199) + *(float *)((long)unaff_x19 + 0x6ec);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        fVar45 = (float)FUN_00e5b7d8(*pdVar5,0);
                        uVar33 = uVar20 | 3;
                        uVar36 = (uint)uVar33;
                        if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                        fVar48 = *(float *)((long)unaff_x19 + 0x674);
                        *(float *)(lVar19 + uVar33 * 0xc + 0x20) =
                             fVar45 + fVar48 + *(float *)((long)unaff_x19 + 0x624) +
                             *(float *)((long)unaff_x19 + 0x5f4) + *(float *)(unaff_x19 + 0xc6) +
                             *(float *)((long)unaff_x19 + 0x6e4);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5b7d8(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                        param_3 = (ulong)(uint)*(float *)(unaff_x19 + 0xc5);
                        *(float *)(lVar19 + uVar33 * 0xc + 0x24) =
                             fVar48 + *(float *)(unaff_x19 + 0xcf) + *(float *)(unaff_x19 + 0xc5) +
                             *(float *)(unaff_x19 + 0xbf) + *(float *)((long)unaff_x19 + 0x634) +
                             *(float *)(unaff_x19 + 0xdd);
                        lVar19 = unaff_x19[0x5e];
                        if ((lVar19 == 0) || (*pdVar5 == 0.0)) goto LAB_00e443fc;
                        FUN_00e5b7d8(*pdVar5,0);
                        if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                        fVar45 = *(float *)((long)unaff_x19 + 0x62c);
                        *(float *)(lVar19 + uVar33 * 0xc + 0x28) =
                             (float)param_3 + *(float *)((long)unaff_x19 + 0x67c) + fVar45 +
                             *(float *)((long)unaff_x19 + 0x5fc) + *(float *)(unaff_x19 + 199) +
                             *(float *)((long)unaff_x19 + 0x6ec);
                        lVar19 = unaff_x19[0xca];
                        if (lVar19 == 0) goto LAB_00e443fc;
                        lVar25 = *plVar2;
                        if (*(char *)(lVar19 + 0x108) == '\0') {
                          uVar40 = FUN_0272b9dc(lVar19 + 0x10,0);
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                          lVar25 = lVar25 + uVar20 * 8;
                          *(undefined4 *)(lVar25 + 0x20) = uVar40;
                          *(float *)(lVar25 + 0x24) = fVar45;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = thunk_FUN_0272b8d8((long)*pdVar5 + 0x10,0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar38 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = FUN_0272b9c8((long)*pdVar5 + 0x10,0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar23 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = FUN_0272b98c((long)*pdVar5 + 0x10,0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar33 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          uVar40 = FUN_00e5ecc0(*pdVar5,0);
                          *(undefined4 *)(unaff_x19 + 0xd9) = uVar40;
                          if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                          FUN_00e5ecc0(unaff_x19[0xca],0);
                          *(float *)((long)unaff_x19 + 0x6cc) = fVar45;
                        }
                        else {
                          if ((*(long *)(lVar19 + 0x100) == 0) ||
                             (uVar40 = FUN_00e5dd14(uVar52,*(long *)(lVar19 + 0x100),
                                                    *(undefined4 *)(lVar19 + 0x10c),0), lVar25 == 0)
                             ) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                          lVar25 = lVar25 + uVar20 * 8;
                          *(undefined4 *)(lVar25 + 0x20) = uVar40;
                          *(float *)(lVar25 + 0x24) = fVar45;
                          dVar24 = *pdVar5;
                          if ((dVar24 == 0.0) || (*(long *)((long)dVar24 + 0x100) == 0))
                          goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = FUN_00e5de6c(uVar52,*(long *)((long)dVar24 + 0x100),
                                                *(undefined4 *)((long)dVar24 + 0x10c),0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar38 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          dVar24 = *pdVar5;
                          if ((dVar24 == 0.0) || (*(long *)((long)dVar24 + 0x100) == 0))
                          goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = FUN_00e5dea4(uVar52,*(long *)((long)dVar24 + 0x100),
                                                *(undefined4 *)((long)dVar24 + 0x10c),0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar23 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          dVar24 = *pdVar5;
                          if ((dVar24 == 0.0) || (*(long *)((long)dVar24 + 0x100) == 0))
                          goto LAB_00e443fc;
                          lVar19 = *plVar2;
                          uVar40 = thunk_FUN_00e5dd60(uVar52,*(long *)((long)dVar24 + 0x100),
                                                      *(undefined4 *)((long)dVar24 + 0x10c),0);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          lVar19 = lVar19 + uVar33 * 8;
                          *(undefined4 *)(lVar19 + 0x20) = uVar40;
                          *(float *)(lVar19 + 0x24) = fVar45;
                          dVar24 = *pdVar5;
                          if ((dVar24 == 0.0) || (*(long *)((long)dVar24 + 0x100) == 0))
                          goto LAB_00e443fc;
                          uVar40 = FUN_00e5dedc(uVar52,*(long *)((long)dVar24 + 0x100),
                                                *(undefined4 *)((long)dVar24 + 0x10c),0);
                          lVar19 = unaff_x19[0xca];
                          *(undefined4 *)(unaff_x19 + 0xd9) = uVar40;
                          *(float *)((long)unaff_x19 + 0x6cc) = fVar45;
                          if ((lVar19 == 0) || (lVar25 = *(long *)(lVar19 + 0x100), lVar25 == 0))
                          goto LAB_00e443fc;
                          if (((1 < *(int *)(lVar25 + 0x28)) && (0.0 < *(float *)(lVar25 + 0x34)))
                             && (*(int *)(lVar19 + 0x10c) < 0)) {
                            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                          }
                        }
                      }
                      else {
                        dVar24 = *pdVar5;
                        if (dVar24 == 0.0) goto LAB_00e443fc;
                        param_3 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x634);
                        if ((*(float *)((long)dVar24 + 0x48) + *(float *)((long)dVar24 + 0x84) +
                            *(float *)((long)unaff_x19 + 0x634)) -
                            *(float *)((long)unaff_x19 + 0x53c) <=
                            DAT_028aa038 - *(float *)(unaff_x19 + 0x2f)) goto LAB_00e3cd74;
                        lVar19 = *plVar1;
                        if (DAT_03774d76 == '\0') {
                          thunk_FUN_00d48444(puVar13);
                          DAT_03774d76 = '\x01';
                        }
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
                        uVar20 = (ulong)(int)uVar8;
                        lVar19 = lVar19 + uVar20 * 0xc;
                        *(undefined8 *)(lVar19 + 0x20) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
                        *(undefined4 *)(lVar19 + 0x28) = uVar40;
                        lVar19 = *plVar1;
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= (uint)(uVar20 | 1)) goto LAB_00e44400;
                        lVar19 = lVar19 + (uVar20 | 1) * 0xc;
                        uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
                        *(undefined8 *)(lVar19 + 0x20) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
                        *(undefined4 *)(lVar19 + 0x28) = uVar40;
                        lVar19 = *plVar1;
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= (uint)(uVar20 | 2)) goto LAB_00e44400;
                        lVar19 = lVar19 + (uVar20 | 2) * 0xc;
                        uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
                        *(undefined8 *)(lVar19 + 0x20) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
                        *(undefined4 *)(lVar19 + 0x28) = uVar40;
                        lVar19 = *plVar1;
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= (uint)(uVar20 | 3)) goto LAB_00e44400;
                        lVar19 = lVar19 + (uVar20 | 3) * 0xc;
                        uVar40 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar13 + 0xb8) + 1);
                        *(undefined8 *)(lVar19 + 0x20) = **(undefined8 **)(*(long *)puVar13 + 0xb8);
                        *(undefined4 *)(lVar19 + 0x28) = uVar40;
                      }
                      if (*pdVar5 == 0.0) goto LAB_00e443fc;
                      uVar18 = *(undefined8 *)((long)*pdVar5 + 0xf8);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_02681b9c(uVar18,0,0);
                      if ((uVar20 & 1) == 0) {
                        lVar19 = unaff_x19[0x10];
                      }
                      else {
                        if ((*pdVar5 == 0.0) ||
                           (lVar19 = *(long *)((long)*pdVar5 + 0xf8), lVar19 == 0))
                        goto LAB_00e443fc;
                        lVar19 = *(long *)(lVar19 + 0x18);
                      }
                      if (((lVar19 == 0) || (lVar19 = FUN_0272bcf4(lVar19,0), lVar19 == 0)) ||
                         (plVar21 = (long *)FUN_0267dac8(lVar19,0), plVar21 == (long *)0x0))
                      goto LAB_00e443fc;
                      iVar17 = (**(code **)(*plVar21 + 0x188))
                                         (plVar21,*(undefined8 *)(*plVar21 + 400));
                      *(float *)(unaff_x19 + 0xda) = (float)iVar17;
                      iVar17 = (**(code **)(*plVar21 + 0x1a8))
                                         (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                      *(float *)((long)unaff_x19 + 0x6d4) = (float)iVar17;
                      *(int *)(unaff_x19 + 0xdb) = (int)unaff_x19[0xd9];
                      *(undefined4 *)((long)unaff_x19 + 0x6dc) =
                           *(undefined4 *)((long)unaff_x19 + 0x6cc);
                      puVar13 = 
                      UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo;
                      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                      _fStack0000000000000070 = (double)CONCAT44((float)iVar17,(int)unaff_x19[0xda])
                      ;
                      in_stack_00000078 = unaff_x19[0xd9];
                      FUN_0132149c(unaff_x19[0x62],uVar8,&stack0x00000070,
                                   *(undefined8 *)
                                    UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                                  );
                      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      uVar20 = (ulong)(int)uVar8;
                      uVar38 = uVar20 | 1;
                      FUN_0132149c(unaff_x19[0x62],uVar8 | 1,&stack0x00000070,*(undefined8 *)puVar13
                                  );
                      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      uVar23 = uVar20 | 2;
                      FUN_0132149c(unaff_x19[0x62],uVar23,&stack0x00000070,*(undefined8 *)puVar13);
                      if (unaff_x19[0x62] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      uVar33 = uVar20 | 3;
                      FUN_0132149c(unaff_x19[0x62],uVar8 | 3,&stack0x00000070,*(undefined8 *)puVar13
                                  );
                      plVar37 = (long *)StringLiteral_9119;
                      lVar19 = unaff_x19[0x60];
                      if (lVar19 == 0) goto LAB_00e443fc;
                      if ((*(uint *)(lVar19 + 0x18) <= uVar8) ||
                         (uVar31 = (uint)uVar33, *(uint *)(lVar19 + 0x18) <= uVar31))
                      goto LAB_00e44400;
                      lVar25 = unaff_x19[0xca];
                      fVar45 = fVar41;
                      if (*(float *)(lVar19 + 0x20 + uVar20 * 8) !=
                          *(float *)(lVar19 + 0x20 + uVar33 * 8)) {
                        fVar45 = fVar39;
                      }
                      *(float *)(unaff_x19 + 0xda) = fVar45;
                      if (lVar25 == 0) goto LAB_00e443fc;
                      cVar12 = *(char *)(lVar25 + 0x108);
                      fVar45 = fVar39;
                      if (cVar12 != '\0' || 0x7fffffff < *(uint *)(lVar25 + 0x138)) {
                        fVar45 = -1.0;
                      }
                      *(float *)((long)unaff_x19 + 0x6d4) = *(float *)(lVar25 + 0x84) * fVar45;
                      if (cVar12 == '\0') {
                        iVar50 = *(int *)(lVar25 + 0x160);
                        iVar17 = (**(code **)(*plVar21 + 0x188))
                                           (plVar21,*(undefined8 *)(*plVar21 + 400));
                        param_3 = 0x3e800000;
                        *(float *)(unaff_x19 + 0xdb) = (float)iVar50 / ((float)iVar17 * 0.25);
                        if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                        iVar50 = *(int *)(unaff_x19[0xca] + 0x160);
                        iVar17 = (**(code **)(*plVar21 + 0x1a8))
                                           (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                        fVar48 = (float)iVar50;
                        fVar45 = (float)iVar17;
                        puVar28 = (undefined8 *)
                                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                        ;
                      }
                      else {
                        if (*(long *)(lVar25 + 0x100) == 0) goto LAB_00e443fc;
                        fVar45 = (float)FUN_00e5df18(*(long *)(lVar25 + 0x100),0);
                        puVar28 = (undefined8 *)
                                  UnityEngine_InputSystem_InputManager_StateChangeMonitorsForDevice___TypeInfo
                        ;
                        if (((*pdVar5 == 0.0) ||
                            (lVar19 = *(long *)((long)*pdVar5 + 0x100), lVar19 == 0)) ||
                           (plVar21 = *(long **)(lVar19 + 0x18), plVar21 == (long *)0x0))
                        goto LAB_00e443fc;
                        iVar17 = (**(code **)(*plVar21 + 0x188))
                                           (plVar21,*(undefined8 *)(*plVar21 + 400));
                        if ((*pdVar5 == 0.0) ||
                           (lVar19 = *(long *)((long)*pdVar5 + 0x100), lVar19 == 0))
                        goto LAB_00e443fc;
                        fVar48 = 0.25;
                        *(float *)(unaff_x19 + 0xdb) =
                             fVar45 / (*(float *)(lVar19 + 0x40) * (float)iVar17 * 0.25);
                        FUN_00e5df18(lVar19,0);
                        if ((unaff_x19[0xca] == 0) ||
                           ((lVar19 = *(long *)(unaff_x19[0xca] + 0x100), lVar19 == 0 ||
                            (plVar21 = *(long **)(lVar19 + 0x18), plVar21 == (long *)0x0))))
                        goto LAB_00e443fc;
                        iVar17 = (**(code **)(*plVar21 + 0x1a8))
                                           (plVar21,*(undefined8 *)(*plVar21 + 0x1b0));
                        if ((*pdVar5 == 0.0) ||
                           (lVar19 = *(long *)((long)*pdVar5 + 0x100), lVar19 == 0))
                        goto LAB_00e443fc;
                        fVar45 = *(float *)(lVar19 + 0x44) * (float)iVar17;
                      }
                      fVar46 = 0.25;
                      fVar48 = fVar48 / (fVar45 * 0.25);
                      *(float *)((long)unaff_x19 + 0x6dc) = fVar48;
                      if (unaff_x19[99] == 0) goto LAB_00e443fc;
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      in_stack_00000078 = CONCAT44(fVar48,(int)unaff_x19[0xdb]);
                      FUN_0132149c(unaff_x19[99],uVar8,&stack0x00000070,*puVar28);
                      if (unaff_x19[99] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      FUN_0132149c(unaff_x19[99],uVar8 | 1,&stack0x00000070,*puVar28);
                      if (unaff_x19[99] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      FUN_0132149c(unaff_x19[99],uVar8 | 2,&stack0x00000070,*puVar28);
                      if (unaff_x19[99] == 0) goto LAB_00e443fc;
                      in_stack_00000078 = unaff_x19[0xdb];
                      _fStack0000000000000070 = (double)unaff_x19[0xda];
                      FUN_0132149c(unaff_x19[99],uVar8 | 3,&stack0x00000070,*puVar28);
                      if (unaff_x19[0xca] == 0) goto LAB_00e443fc;
                      uVar18 = *(undefined8 *)(unaff_x19[0xca] + 0xb0);
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar22 = FUN_02681b9c(uVar18,0,0);
                      fVar48 = (float)param_3;
                      fVar45 = (float)uVar52;
                      uVar36 = (uint)uVar38;
                      uVar34 = (uint)uVar23;
                      if ((uVar22 & 1) != 0) {
                        if (uVar32 == uVar7 - 1) {
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          fVar44 = (float)FUN_00e5b838(*pdVar5,0);
                          if (DAT_03774d76 == '\0') {
                            thunk_FUN_00d48444(
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                              );
                            DAT_03774d76 = '\x01';
                          }
                          pfVar26 = *(float **)
                                     (*(long *)
                                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                     + 0xb8);
                          fVar48 = fVar48 - pfVar26[2];
                          param_3 = (ulong)(uint)fVar48;
                          if (fVar48 * fVar48 +
                              (fVar44 - *pfVar26) * (fVar44 - *pfVar26) +
                              (fVar46 - pfVar26[1]) * (fVar46 - pfVar26[1]) < DAT_028aa020)
                          goto LAB_00e3dbd8;
                        }
                        if ((*pdVar5 == 0.0) ||
                           (lVar19 = *(long *)((long)*pdVar5 + 0xb0), lVar19 == 0))
                        goto LAB_00e443fc;
                        uVar18 = *(undefined8 *)(lVar19 + 0x38);
                        if (DAT_03774d77 == '\0') {
                          thunk_FUN_00d48444(
                                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                            );
                          DAT_03774d77 = '\x01';
                        }
                        fVar48 = (float)uVar18 -
                                 (float)**(undefined8 **)
                                          (*(long *)
                                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                          + 0xb8);
                        fVar46 = (float)((ulong)uVar18 >> 0x20) -
                                 (float)((ulong)**(undefined8 **)
                                                  (*(long *)
                                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass4_0_<DOFade>b__1__
                                                  + 0xb8) >> 0x20);
                        if (DAT_028aa020 <= fVar48 * fVar48 + fVar46 * fVar46) {
                          *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                        }
                        dVar24 = *pdVar5;
                        if ((dVar24 == 0.0) ||
                           (lVar19 = *(long *)((long)dVar24 + 0xb0), lVar19 == 0))
                        goto LAB_00e443fc;
                        fVar46 = fVar45 * *(float *)(lVar19 + 0x38);
                        *(float *)(unaff_x19 + 0xc9) = fVar46;
                        fVar48 = fVar45 * *(float *)(lVar19 + 0x3c);
                        *(float *)((long)unaff_x19 + 0x64c) = fVar48;
                        if (*(char *)(lVar19 + 0x25) != '\0') {
                          fVar49 = 1.0 / *(float *)((long)dVar24 + 0x84);
                        }
                        lVar19 = *plVar1;
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        lVar25 = lVar19 + uVar20 * 0xc;
                        fVar44 = *(float *)(lVar25 + 0x20);
                        uVar18 = *(undefined8 *)(lVar25 + 0x24);
                        *(float *)(unaff_x19 + 0xcd) = fVar44;
                        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar18;
                        *(float *)(unaff_x19 + 0xd0) = fVar44;
                        fVar47 = (float)uVar18;
                        *(float *)((long)unaff_x19 + 0x684) = fVar47;
                        if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                        lVar25 = lVar19 + uVar38 * 0xc;
                        uVar40 = *(undefined4 *)(lVar25 + 0x20);
                        uVar18 = *(undefined8 *)(lVar25 + 0x24);
                        *(undefined4 *)(unaff_x19 + 0xcd) = uVar40;
                        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar18;
                        *(undefined4 *)(unaff_x19 + 0xd2) = uVar40;
                        *(int *)((long)unaff_x19 + 0x694) = (int)uVar18;
                        if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                        lVar25 = lVar19 + uVar23 * 0xc;
                        uVar40 = *(undefined4 *)(lVar25 + 0x20);
                        uVar18 = *(undefined8 *)(lVar25 + 0x24);
                        *(undefined4 *)(unaff_x19 + 0xcd) = uVar40;
                        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar18;
                        *(undefined4 *)(unaff_x19 + 0xd4) = uVar40;
                        *(int *)((long)unaff_x19 + 0x6a4) = (int)uVar18;
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        lVar19 = lVar19 + uVar33 * 0xc;
                        uVar40 = *(undefined4 *)(lVar19 + 0x20);
                        uVar18 = *(undefined8 *)(lVar19 + 0x24);
                        *(undefined4 *)(unaff_x19 + 0xcd) = uVar40;
                        *(undefined8 *)((long)unaff_x19 + 0x66c) = uVar18;
                        *(undefined4 *)(unaff_x19 + 0xd6) = uVar40;
                        *(int *)((long)unaff_x19 + 0x6b4) = (int)uVar18;
                        lVar19 = *(long *)((long)dVar24 + 0xb0);
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(char *)(lVar19 + 0x24) == '\0') {
                          lVar25 = *plVar3;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          uVar11 = *(uint *)(lVar25 + 0x18);
                          if (uVar11 <= uVar8) goto LAB_00e44400;
                          lVar29 = lVar25 + uVar20 * 8;
                          *(float *)(lVar29 + 0x20) =
                               (fVar46 + fVar49 * fVar44) - *(float *)(lVar19 + 0x30);
                          *(float *)(lVar29 + 0x24) =
                               (fVar48 + fVar49 * fVar47) - *(float *)(lVar19 + 0x34);
                          if (((uVar11 <= uVar36) ||
                              (*(ulong *)(lVar25 + uVar38 * 8 + 0x20) =
                                    CONCAT44(((float)((ulong)unaff_x19[0xd2] >> 0x20) * fVar49 +
                                             (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                             (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                             ((float)unaff_x19[0xd2] * fVar49 +
                                             (float)unaff_x19[0xc9]) -
                                             (float)*(undefined8 *)(lVar19 + 0x30)),
                              uVar11 <= uVar34)) ||
                             (*(ulong *)(lVar25 + uVar23 * 8 + 0x20) =
                                   CONCAT44((fVar49 * (float)((ulong)unaff_x19[0xd4] >> 0x20) +
                                            (float)((ulong)unaff_x19[0xc9] >> 0x20)) -
                                            (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                            (fVar49 * (float)unaff_x19[0xd4] +
                                            (float)unaff_x19[0xc9]) -
                                            (float)*(undefined8 *)(lVar19 + 0x30)), uVar11 <= uVar31
                             )) goto LAB_00e44400;
                          param_3 = unaff_x19[0xc9];
                          *(ulong *)(lVar25 + uVar33 * 8 + 0x20) =
                               CONCAT44((fVar49 * (float)((ulong)unaff_x19[0xd6] >> 0x20) +
                                        (float)(param_3 >> 0x20)) -
                                        (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                        (fVar49 * (float)unaff_x19[0xd6] + (float)param_3) -
                                        (float)*(undefined8 *)(lVar19 + 0x30));
                        }
                        else {
                          fVar9 = *(float *)((long)dVar24 + 0x44);
                          *(float *)(unaff_x19 + 0xd8) = fVar9;
                          fVar10 = *(float *)((long)dVar24 + 0x48);
                          lVar25 = unaff_x19[0x61];
                          *(float *)((long)unaff_x19 + 0x6c4) = fVar10;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          uVar11 = *(uint *)(lVar25 + 0x18);
                          if (uVar11 <= uVar8) goto LAB_00e44400;
                          lVar29 = lVar25 + uVar20 * 8;
                          *(float *)(lVar29 + 0x20) =
                               (fVar46 + fVar49 * (fVar44 - fVar9)) - *(float *)(lVar19 + 0x30);
                          *(float *)(lVar29 + 0x24) =
                               (fVar48 + fVar49 * (fVar47 - fVar10)) - *(float *)(lVar19 + 0x34);
                          if (((uVar11 <= uVar36) ||
                              (*(ulong *)(lVar25 + uVar38 * 8 + 0x20) =
                                    CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                             ((float)((ulong)unaff_x19[0xd2] >> 0x20) -
                                             (float)((ulong)unaff_x19[0xd8] >> 0x20)) * fVar49) -
                                             (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                             ((float)unaff_x19[0xc9] +
                                             ((float)unaff_x19[0xd2] - (float)unaff_x19[0xd8]) *
                                             fVar49) - (float)*(undefined8 *)(lVar19 + 0x30)),
                              uVar11 <= uVar34)) ||
                             (*(ulong *)(lVar25 + uVar23 * 8 + 0x20) =
                                   CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                            fVar49 * ((float)((ulong)unaff_x19[0xd4] >> 0x20) -
                                                     (float)((ulong)unaff_x19[0xd8] >> 0x20))) -
                                            (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                            ((float)unaff_x19[0xc9] +
                                            fVar49 * ((float)unaff_x19[0xd4] -
                                                     (float)unaff_x19[0xd8])) -
                                            (float)*(undefined8 *)(lVar19 + 0x30)), uVar11 <= uVar31
                             )) goto LAB_00e44400;
                          param_3 = unaff_x19[0xd8];
                          *(ulong *)(lVar25 + uVar33 * 8 + 0x20) =
                               CONCAT44(((float)((ulong)unaff_x19[0xc9] >> 0x20) +
                                        fVar49 * ((float)((ulong)unaff_x19[0xd6] >> 0x20) -
                                                 (float)(param_3 >> 0x20))) -
                                        (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20),
                                        ((float)unaff_x19[0xc9] +
                                        fVar49 * ((float)unaff_x19[0xd6] - (float)param_3)) -
                                        (float)*(undefined8 *)(lVar19 + 0x30));
                        }
                      }
LAB_00e3dbd8:
                      dVar24 = *pdVar5;
                      if (dVar24 == 0.0) goto LAB_00e443fc;
                      if (*(char *)((long)dVar24 + 0x108) != '\0') {
                        if (*(long *)((long)dVar24 + 0x100) == 0) goto LAB_00e443fc;
                        if (*(char *)(*(long *)((long)dVar24 + 0x100) + 0x20) == '\0') {
                          lVar19 = *plVar2;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          lVar25 = *plVar3;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                          *(undefined8 *)(lVar25 + uVar20 * 8 + 0x20) =
                               *(undefined8 *)(lVar19 + uVar20 * 8 + 0x20);
                          lVar19 = *plVar2;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          lVar25 = *plVar3;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_00e44400;
                          *(undefined8 *)(lVar25 + (long)(int)uVar36 * 8 + 0x20) =
                               *(undefined8 *)(lVar19 + (long)(int)uVar36 * 8 + 0x20);
                          lVar19 = *plVar2;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          lVar25 = *plVar3;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_00e44400;
                          *(undefined8 *)(lVar25 + (long)(int)uVar34 * 8 + 0x20) =
                               *(undefined8 *)(lVar19 + (long)(int)uVar34 * 8 + 0x20);
                          lVar19 = *plVar2;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          lVar25 = *plVar3;
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_00e44400;
                          *(undefined8 *)(lVar25 + uVar33 * 8 + 0x20) =
                               *(undefined8 *)(lVar19 + uVar33 * 8 + 0x20);
                          dVar24 = *pdVar5;
                          if (dVar24 == 0.0) goto LAB_00e443fc;
                        }
                      }
                      dVar43 = DAT_028aa048;
                      if (*(char *)((long)dVar24 + 0x108) == '\0') {
LAB_00e3dd34:
                        uVar18 = *(undefined8 *)((long)dVar24 + 0xa8);
                        if (*(int *)(*(long *)
                                      System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        uVar38 = FUN_02681b9c(uVar18,0,0);
                        dVar24 = *pdVar5;
                        if (dVar24 == 0.0) goto LAB_00e443fc;
                        if ((uVar38 & 1) == 0) {
                          uVar18 = *(undefined8 *)((long)dVar24 + 0xb0);
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar38 = FUN_02681b9c(uVar18,0,0);
                          dVar24 = DAT_028aa048;
                          if ((uVar38 & 1) == 0) {
                            if (*pdVar5 == 0.0) goto LAB_00e443fc;
                            uVar18 = *(undefined8 *)((long)*pdVar5 + 0xa0);
                            if (*(int *)(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar38 = FUN_02681b9c(uVar18,0,0);
                            lVar19 = *plVar4;
                            if ((uVar38 & 1) == 0) {
                              fVar39 = *(float *)((long)unaff_x19 + 0x8c);
                              fVar45 = *(float *)(unaff_x19 + 0x12);
                              fVar46 = *(float *)((long)unaff_x19 + 0x94);
                              fVar48 = *(float *)(unaff_x19 + 0x13);
                              fVar49 = fVar39;
                              if (1.0 < fVar39) {
                                fVar49 = 1.0;
                              }
                              fVar49 = fVar49 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar39 = fVar45;
                              if (1.0 < fVar45) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3fd48;
                                }
                                fVar45 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fd48:
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
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar46 = fVar48;
                              if (1.0 < fVar48) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar48 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar48 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar48 = (float)(int)(fVar46 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar48 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar48 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar48 = (float)(int)(fVar46 + -0.5);
                              }
                              if (lVar19 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                              *(uint *)(lVar19 + uVar20 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar45 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                              fVar39 = *(float *)(unaff_x19 + 0x12);
                              lVar19 = unaff_x19[0x5f];
                              fVar48 = *(float *)((long)unaff_x19 + 0x94);
                              fVar45 = *(float *)(unaff_x19 + 0x13);
                              fVar49 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar46 = fVar39;
                              if (1.0 < fVar39) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40610;
                                }
                                fVar46 = (float)(int)(fVar46 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40610:
                                fVar46 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar46 = fVar39;
                                }
                              }
                              else {
                                fVar46 = (float)(int)(fVar46 + -0.5);
                              }
                              fVar39 = fVar48;
                              if (1.0 < fVar48) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar48 = fVar45;
                              if (1.0 < fVar45) {
                                fVar48 = 1.0;
                              }
                              fVar48 = fVar48 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar48 = fVar41;
                              }
                              dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                              if (0.0 <= fVar48) {
                                if (dVar24 == 0.5) {
                                  fVar45 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar45 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar45 = (float)(int)(fVar48 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar48 + -0.5);
                              }
                              if (lVar19 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                              *(uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                              fVar39 = *(float *)(unaff_x19 + 0x12);
                              lVar19 = unaff_x19[0x5f];
                              fVar48 = *(float *)((long)unaff_x19 + 0x94);
                              fVar45 = *(float *)(unaff_x19 + 0x13);
                              fVar49 = *(float *)((long)unaff_x19 + 0x8c) * 255.0;
                              if (*(float *)((long)unaff_x19 + 0x8c) < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar46 = fVar39;
                              if (1.0 < fVar39) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40e20;
                                }
                                fVar46 = (float)(int)(fVar46 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40e20:
                                fVar46 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar46 = fVar39;
                                }
                              }
                              else {
                                fVar46 = (float)(int)(fVar46 + -0.5);
                              }
                              fVar39 = fVar48;
                              if (1.0 < fVar48) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar48 = fVar45;
                              if (1.0 < fVar45) {
                                fVar48 = 1.0;
                              }
                              fVar48 = fVar48 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar48 = fVar41;
                              }
                              dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                              if (0.0 <= fVar48) {
                                if (dVar24 == 0.5) {
                                  fVar45 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar45 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar45 = (float)(int)(fVar48 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar48 + -0.5);
                              }
                              if (lVar19 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                              *(uint *)(lVar19 + (long)(int)uVar34 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                              fVar49 = *(float *)((long)unaff_x19 + 0x8c);
                              fVar39 = *(float *)(unaff_x19 + 0x12);
                              lVar19 = unaff_x19[0x5f];
                              fVar48 = *(float *)((long)unaff_x19 + 0x94);
                              fVar45 = *(float *)(unaff_x19 + 0x13);
                            }
                            else {
                              if ((*pdVar5 == 0.0) ||
                                 (lVar25 = *(long *)((long)*pdVar5 + 0xa0), lVar25 == 0))
                              goto LAB_00e443fc;
                              fVar39 = *(float *)(lVar25 + 0x18);
                              fVar45 = *(float *)(lVar25 + 0x1c);
                              fVar46 = *(float *)(lVar25 + 0x20);
                              fVar48 = *(float *)(lVar25 + 0x24);
                              fVar49 = fVar39;
                              if (1.0 < fVar39) {
                                fVar49 = 1.0;
                              }
                              fVar49 = fVar49 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar39 = fVar45;
                              if (1.0 < fVar45) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3fcc4;
                                }
                                fVar45 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fcc4:
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
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar46 = fVar48;
                              if (1.0 < fVar48) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar48 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar48 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar48 = (float)(int)(fVar46 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar48 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar48 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar48 = (float)(int)(fVar46 + -0.5);
                              }
                              if (lVar19 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                              *(uint *)(lVar19 + uVar20 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar45 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                              if ((*pdVar5 == 0.0) ||
                                 (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                              goto LAB_00e443fc;
                              fVar39 = *(float *)(lVar19 + 0x1c);
                              lVar25 = *plVar4;
                              fVar48 = *(float *)(lVar19 + 0x20);
                              fVar45 = *(float *)(lVar19 + 0x24);
                              fVar49 = *(float *)(lVar19 + 0x18) * 255.0;
                              if (*(float *)(lVar19 + 0x18) < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar46 = fVar39;
                              if (1.0 < fVar39) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e4057c;
                                }
                                fVar46 = (float)(int)(fVar46 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4057c:
                                fVar46 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar46 = fVar39;
                                }
                              }
                              else {
                                fVar46 = (float)(int)(fVar46 + -0.5);
                              }
                              fVar39 = fVar48;
                              if (1.0 < fVar48) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar48 = fVar45;
                              if (1.0 < fVar45) {
                                fVar48 = 1.0;
                              }
                              fVar48 = fVar48 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar48 = fVar41;
                              }
                              dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                              if (0.0 <= fVar48) {
                                if (dVar24 == 0.5) {
                                  fVar45 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar45 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar45 = (float)(int)(fVar48 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar48 + -0.5);
                              }
                              if (lVar25 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar25 + 0x18) <= uVar36) goto LAB_00e44400;
                              *(uint *)(lVar25 + (long)(int)uVar36 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                              if ((*pdVar5 == 0.0) ||
                                 (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                              goto LAB_00e443fc;
                              fVar39 = *(float *)(lVar19 + 0x1c);
                              lVar25 = *plVar4;
                              fVar48 = *(float *)(lVar19 + 0x20);
                              fVar45 = *(float *)(lVar19 + 0x24);
                              fVar49 = *(float *)(lVar19 + 0x18) * 255.0;
                              if (*(float *)(lVar19 + 0x18) < 0.0) {
                                fVar49 = fVar41;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              fVar46 = fVar39;
                              if (1.0 < fVar39) {
                                fVar46 = 1.0;
                              }
                              fVar46 = fVar46 * 255.0;
                              if (fVar39 < 0.0) {
                                fVar46 = fVar41;
                              }
                              dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                              if (0.0 <= fVar46) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e40d8c;
                                }
                                fVar46 = (float)(int)(fVar46 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40d8c:
                                fVar46 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar46 = fVar39;
                                }
                              }
                              else {
                                fVar46 = (float)(int)(fVar46 + -0.5);
                              }
                              fVar39 = fVar48;
                              if (1.0 < fVar48) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar39 = fVar41;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar39 = (float)(int)(fVar39 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar48 = fVar45;
                              if (1.0 < fVar45) {
                                fVar48 = 1.0;
                              }
                              fVar48 = fVar48 * 255.0;
                              if (fVar45 < 0.0) {
                                fVar48 = fVar41;
                              }
                              dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                              if (0.0 <= fVar48) {
                                if (dVar24 == 0.5) {
                                  fVar45 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar45 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar45 = (float)(int)(fVar48 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar48 + -0.5);
                              }
                              if (lVar25 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_00e44400;
                              *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                                   (int)fVar49 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                   ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                              if ((*pdVar5 == 0.0) ||
                                 (lVar25 = *(long *)((long)*pdVar5 + 0xa0), lVar25 == 0))
                              goto LAB_00e443fc;
                              fVar49 = *(float *)(lVar25 + 0x18);
                              fVar39 = *(float *)(lVar25 + 0x1c);
                              lVar19 = *plVar4;
                              fVar48 = *(float *)(lVar25 + 0x20);
                              fVar45 = *(float *)(lVar25 + 0x24);
                            }
                            fVar46 = fVar49 * 255.0;
                            if (fVar49 < 0.0) {
                              fVar46 = fVar41;
                            }
                            dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                            if (0.0 <= fVar46) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar46 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar46 + -0.5);
                            }
                            fVar46 = fVar39;
                            if (1.0 < fVar39) {
                              fVar46 = 1.0;
                            }
                            fVar46 = fVar46 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar46 = fVar41;
                            }
                            dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                            if (0.0 <= fVar46) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e412dc;
                              }
                              fVar46 = (float)(int)(fVar46 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e412dc:
                              fVar46 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar46 = fVar39;
                              }
                            }
                            else {
                              fVar46 = (float)(int)(fVar46 + -0.5);
                            }
                            fVar39 = fVar48;
                            if (1.0 < fVar48) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar39 = fVar41;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            param_3 = 0x3f800000;
                            fVar48 = fVar45;
                            if (1.0 < fVar45) {
                              fVar48 = 1.0;
                            }
                            fVar48 = fVar48 * 255.0;
                            if (fVar45 < 0.0) {
                              fVar48 = fVar41;
                            }
                            dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                            if (0.0 <= fVar48) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar48 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar48 + -0.5);
                            }
                            if (lVar19 != 0) {
                              if (uVar31 < *(uint *)(lVar19 + 0x18)) {
                                *(uint *)(lVar19 + uVar33 * 4 + 0x20) =
                                     (int)fVar49 & 0xffU | ((int)fVar46 & 0xffU) << 8 |
                                     ((int)fVar39 & 0xffU) << 0x10 | (int)fVar41 << 0x18;
                                goto LAB_00e43400;
                              }
                              goto LAB_00e44400;
                            }
                            goto LAB_00e443fc;
                          }
                          lVar19 = *plVar4;
                          dVar43 = modf(DAT_028aa048,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar49 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar48 = 255.0;
                          }
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          *(uint *)(lVar19 + uVar20 * 4 + 0x20) =
                               (int)fVar49 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                          lVar19 = *plVar4;
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar49 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar48 = 255.0;
                          }
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          *(uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20) =
                               (int)fVar49 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                          lVar19 = *plVar4;
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar49 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar48 = 255.0;
                          }
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          *(uint *)(lVar19 + (long)(int)uVar34 * 4 + 0x20) =
                               (int)fVar49 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                          lVar19 = *plVar4;
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar49 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = 255.0;
                          }
                          dVar43 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar43 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar45 = 255.0;
                          }
                          dVar24 = modf(dVar24,(double *)&stack0x00000070);
                          if (dVar24 == 0.5) {
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar48 = 255.0;
                          }
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          *(uint *)(lVar19 + uVar33 * 4 + 0x20) =
                               (int)fVar49 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                               ((int)fVar45 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          uVar18 = *(undefined8 *)((long)*pdVar5 + 0xa0);
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar38 = FUN_02681b9c(uVar18,0,0);
                          if ((uVar38 & 1) == 0) goto LAB_00e43400;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + uVar20 * 4 + 0x20);
                          uVar11 = *puVar30;
                          if ((*pdVar5 == 0.0) ||
                             (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                          goto LAB_00e443fc;
                          fVar39 = ((float)(uVar11 & 0xff) / 255.0) * *(float *)(lVar19 + 0x18);
                          fVar46 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar19 + 0x1c)
                          ;
                          fVar48 = *(float *)(lVar19 + 0x20);
                          fVar45 = *(float *)(lVar19 + 0x24);
                          fVar49 = fVar39 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = fVar41;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = 1.0;
                              goto LAB_00e3ede4;
                            }
                            fVar39 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = -1.0;
LAB_00e3ede4:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + fVar49;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar48 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar48;
                          fVar49 = fVar46 * 255.0;
                          if (fVar46 < 0.0) {
                            fVar49 = fVar41;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar46 = fVar48;
                          if (1.0 < fVar48) {
                            fVar46 = 1.0;
                          }
                          fVar45 = ((float)(uVar11 >> 0x18) / 255.0) * fVar45;
                          fVar46 = fVar46 * 255.0;
                          if (fVar48 < 0.0) {
                            fVar46 = fVar41;
                          }
                          dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                          if (0.0 <= fVar46) {
                            if (dVar24 == 0.5) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e3ffb0;
                            }
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar48 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ffb0:
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = fVar48;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + -0.5);
                          }
                          fVar48 = fVar45;
                          if (1.0 < fVar45) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          if (fVar45 < 0.0) {
                            fVar48 = fVar41;
                          }
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar45 = 1.0;
                              goto LAB_00e40174;
                            }
                            fVar48 = (float)(int)(fVar48 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar45 = -1.0;
LAB_00e40174:
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = (float)_fStack0000000000000070 + fVar45;
                            }
                          }
                          else {
                            fVar48 = (float)(int)(fVar48 + -0.5);
                          }
                          *puVar30 = (int)fVar39 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar46 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20);
                          uVar11 = *puVar30;
                          if ((*pdVar5 == 0.0) ||
                             (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                          goto LAB_00e443fc;
                          fVar39 = ((float)(uVar11 & 0xff) / 255.0) * *(float *)(lVar19 + 0x18);
                          fVar46 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar19 + 0x1c)
                          ;
                          fVar48 = *(float *)(lVar19 + 0x20);
                          fVar45 = *(float *)(lVar19 + 0x24);
                          fVar49 = fVar39 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = fVar41;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = 1.0;
                              goto LAB_00e404dc;
                            }
                            fVar39 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = -1.0;
LAB_00e404dc:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + fVar49;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar48 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar48;
                          fVar49 = fVar46 * 255.0;
                          if (fVar46 < 0.0) {
                            fVar49 = fVar41;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar46 = fVar48;
                          if (1.0 < fVar48) {
                            fVar46 = 1.0;
                          }
                          fVar45 = ((float)(uVar11 >> 0x18) / 255.0) * fVar45;
                          fVar46 = fVar46 * 255.0;
                          if (fVar48 < 0.0) {
                            fVar46 = fVar41;
                          }
                          dVar24 = modf((double)fVar46,(double *)&stack0x00000070);
                          if (0.0 <= fVar46) {
                            if (dVar24 == 0.5) {
                              fVar48 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e40888;
                            }
                            fVar46 = (float)(int)(fVar46 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar48 = (float)_fStack0000000000000070 + -1.0;
LAB_00e40888:
                            fVar46 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar46 = fVar48;
                            }
                          }
                          else {
                            fVar46 = (float)(int)(fVar46 + -0.5);
                          }
                          fVar48 = fVar45;
                          if (1.0 < fVar45) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          if (fVar45 < 0.0) {
                            fVar48 = fVar41;
                          }
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar41 = 1.0;
                              goto LAB_00e40a4c;
                            }
                            fVar45 = (float)(int)(fVar48 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = -1.0;
LAB_00e40a4c:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + fVar41;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar48 + -0.5);
                          }
                          *puVar30 = (int)fVar39 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar46 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          lVar19 = lVar19 + (long)(int)uVar34 * 4;
                        }
                        else {
                          lVar19 = *(long *)((long)dVar24 + 0xa8);
                          if (lVar19 == 0) goto LAB_00e443fc;
                          fVar41 = *(float *)(lVar19 + 0x24);
                          if (fVar41 != 0.0) {
                            *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                          }
                          plVar37 = (long *)StringLiteral_9119;
                          cVar12 = *(char *)(lVar19 + 0x2c);
                          lVar29 = *plVar4;
                          lVar25 = *(long *)(lVar19 + 0x18);
                          fVar45 = fVar45 * fVar41;
                          if (*(int *)(lVar19 + 0x28) == 1) {
                            if (cVar12 == '\0') {
                              if (lVar25 == 0) goto LAB_00e443fc;
                              fVar49 = *(float *)(lVar19 + 0x20);
                              fVar48 = *(float *)((long)dVar24 + 0x84);
                              fVar45 = fVar45 + (*(float *)((long)dVar24 + 0x48) * fVar49) / fVar48;
                              fVar45 = fVar45 - (float)(int)fVar45;
                              fVar41 = fVar45;
                              if (1.0 < fVar45) {
                                fVar41 = fVar39;
                              }
                              fVar46 = fVar41;
                              if (fVar45 < 0.0) {
                                fVar46 = 0.0;
                              }
                              fVar46 = (float)FUN_0269ad38(fVar46,lVar25,0);
                              fVar45 = fVar46;
                              if (1.0 < fVar46) {
                                fVar45 = fVar39;
                              }
                              fVar45 = fVar45 * 255.0;
                              if (fVar46 < 0.0) {
                                fVar45 = 0.0;
                              }
                              dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                              if (0.0 <= fVar45) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3eeac;
                                }
                                fVar45 = (float)(int)(fVar45 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3eeac:
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = fVar39;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar45 + -0.5);
                              }
                              fVar39 = fVar41;
                              if (1.0 < fVar41) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar41 < 0.0) {
                                fVar39 = 0.0;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e41534;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41534:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar41;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar41 = fVar49;
                              if (1.0 < fVar49) {
                                fVar41 = 1.0;
                              }
                              fVar41 = fVar41 * 255.0;
                              if (fVar49 < 0.0) {
                                fVar41 = 0.0;
                              }
                              dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                              if (0.0 <= fVar41) {
                                if (dVar24 == 0.5) {
                                  fVar41 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar41 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar41 = (float)(int)(fVar41 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + -0.5);
                              }
                              fVar49 = fVar48;
                              if (1.0 < fVar48) {
                                fVar49 = 1.0;
                              }
                              fVar49 = fVar49 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar49 = 0.0;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              if (lVar29 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_00e44400;
                              *(uint *)(lVar29 + uVar20 * 4 + 0x20) =
                                   (int)fVar45 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                   ((int)fVar41 & 0xffU) << 0x10 | (int)fVar49 << 0x18;
                              dVar24 = *pdVar5;
                              if (((dVar24 == 0.0) ||
                                  (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                                 (lVar25 = *(long *)(lVar19 + 0x18), lVar25 == 0))
                              goto LAB_00e443fc;
                              fVar39 = *(float *)((long)dVar24 + 0x48);
                              fVar45 = *(float *)((long)dVar24 + 0x84);
                              lVar29 = *plVar4;
                              fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                       (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                              fVar49 = fVar49 - (float)(int)fVar49;
                              fVar41 = fVar49;
                              if (1.0 < fVar49) {
                                fVar41 = 1.0;
                              }
                            }
                            else {
                              if (lVar25 == 0) goto LAB_00e443fc;
                              fVar49 = *(float *)((long)dVar24 + 0x84);
                              fVar48 = *(float *)(lVar19 + 0x20);
                              fVar45 = fVar45 + ((*(float *)((long)dVar24 + 0x48) + fVar49) * fVar48
                                                ) / fVar49;
                              fVar45 = fVar45 - (float)(int)fVar45;
                              fVar41 = fVar45;
                              if (1.0 < fVar45) {
                                fVar41 = fVar39;
                              }
                              fVar46 = fVar41;
                              if (fVar45 < 0.0) {
                                fVar46 = 0.0;
                              }
                              fVar46 = (float)FUN_0269ad38(fVar46,lVar25,0);
                              fVar45 = fVar46;
                              if (1.0 < fVar46) {
                                fVar45 = fVar39;
                              }
                              fVar45 = fVar45 * 255.0;
                              if (fVar46 < 0.0) {
                                fVar45 = 0.0;
                              }
                              dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                              if (0.0 <= fVar45) {
                                if (dVar24 == 0.5) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3ed6c;
                                }
                                fVar45 = (float)(int)(fVar45 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ed6c:
                                fVar45 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar45 = fVar39;
                                }
                              }
                              else {
                                fVar45 = (float)(int)(fVar45 + -0.5);
                              }
                              fVar39 = fVar41;
                              if (1.0 < fVar41) {
                                fVar39 = 1.0;
                              }
                              fVar39 = fVar39 * 255.0;
                              if (fVar41 < 0.0) {
                                fVar39 = 0.0;
                              }
                              dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                              if (0.0 <= fVar39) {
                                if (dVar24 == 0.5) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                  goto LAB_00e3f2ec;
                                }
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                              else if (dVar24 == -0.5) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f2ec:
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = fVar41;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + -0.5);
                              }
                              fVar41 = fVar49;
                              if (1.0 < fVar49) {
                                fVar41 = 1.0;
                              }
                              fVar41 = fVar41 * 255.0;
                              if (fVar49 < 0.0) {
                                fVar41 = 0.0;
                              }
                              dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                              if (0.0 <= fVar41) {
                                if (dVar24 == 0.5) {
                                  fVar41 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar41 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar41 = (float)(int)(fVar41 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + -0.5);
                              }
                              fVar49 = fVar48;
                              if (1.0 < fVar48) {
                                fVar49 = 1.0;
                              }
                              fVar49 = fVar49 * 255.0;
                              if (fVar48 < 0.0) {
                                fVar49 = 0.0;
                              }
                              dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                              if (0.0 <= fVar49) {
                                if (dVar24 == 0.5) {
                                  fVar49 = (float)_fStack0000000000000070;
                                  if (((long)_fStack0000000000000070 & 1U) != 0) {
                                    fVar49 = (float)_fStack0000000000000070 + 1.0;
                                  }
                                }
                                else {
                                  fVar49 = (float)(int)(fVar49 + 0.5);
                                }
                              }
                              else if (dVar24 == -0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + -1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + -0.5);
                              }
                              if (lVar29 == 0) goto LAB_00e443fc;
                              if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_00e44400;
                              *(uint *)(lVar29 + uVar20 * 4 + 0x20) =
                                   (int)fVar45 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                   ((int)fVar41 & 0xffU) << 0x10 | (int)fVar49 << 0x18;
                              dVar24 = *pdVar5;
                              if (((dVar24 == 0.0) ||
                                  (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                                 (lVar25 = *(long *)(lVar19 + 0x18), lVar25 == 0))
                              goto LAB_00e443fc;
                              fVar39 = *(float *)((long)dVar24 + 0x84);
                              fVar45 = *(float *)(lVar19 + 0x20);
                              lVar29 = *plVar4;
                              fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                       ((*(float *)((long)dVar24 + 0x48) + fVar39) * fVar45) /
                                       fVar39;
                              fVar49 = fVar49 - (float)(int)fVar49;
                              fVar41 = fVar49;
                              if (1.0 < fVar49) {
                                fVar41 = 1.0;
                              }
                            }
                            fVar48 = fVar41;
                            if (fVar49 < 0.0) {
                              fVar48 = 0.0;
                            }
                            fVar48 = (float)FUN_0269ad38(fVar48,lVar25,0);
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e419a4;
                              }
                              fVar48 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e419a4:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar49;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41a34;
                              }
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41a34:
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = fVar41;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar41 = fVar39;
                            if (1.0 < fVar39) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar39 = fVar45;
                            if (1.0 < fVar45) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar45 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            if (lVar29 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar29 + 0x18) <= uVar36) goto LAB_00e44400;
                            *(uint *)(lVar29 + (long)(int)uVar36 * 4 + 0x20) =
                                 (int)fVar48 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                 ((int)fVar41 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                            dVar24 = *pdVar5;
                            if (((dVar24 == 0.0) ||
                                (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                               (*(long *)(lVar19 + 0x18) == 0)) goto LAB_00e443fc;
                            fVar39 = *(float *)((long)dVar24 + 0x48);
                            fVar45 = *(float *)((long)dVar24 + 0x84);
                            lVar25 = *plVar4;
                            fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                     (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                            fVar49 = fVar49 - (float)(int)fVar49;
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar48 = fVar41;
                            if (fVar49 < 0.0) {
                              fVar48 = 0.0;
                            }
                            fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(lVar19 + 0x18),0);
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41cd0;
                              }
                              fVar48 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41cd0:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar49;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41d60;
                              }
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41d60:
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = fVar41;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar41 = fVar39;
                            if (1.0 < fVar39) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar39 = fVar45;
                            if (1.0 < fVar45) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar45 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            if (lVar25 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_00e44400;
                            *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                                 (int)fVar48 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                 ((int)fVar41 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                            dVar24 = *pdVar5;
                            if (((dVar24 == 0.0) ||
                                (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                               (*(long *)(lVar19 + 0x18) == 0)) goto LAB_00e443fc;
                            fVar39 = *(float *)((long)dVar24 + 0x48);
                            fVar45 = *(float *)((long)dVar24 + 0x84);
                            lVar25 = *plVar4;
                            fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                     (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                            fVar49 = fVar49 - (float)(int)fVar49;
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar48 = fVar41;
                            if (fVar49 < 0.0) {
                              fVar48 = 0.0;
                            }
                            fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(lVar19 + 0x18),0);
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            param_3 = 0x437f0000;
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e41ffc;
                              }
                              fVar48 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e41ffc:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar49;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar49 = 0.0;
                            }
LAB_00e42040:
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (fVar49 < 0.0) goto LAB_00e4204c;
LAB_00e425b8:
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              fVar49 = fVar41 + 1.0;
                              goto LAB_00e425d4;
                            }
                            fVar41 = (float)(int)(fVar49 + 0.5);
                          }
                          else {
                            lVar27 = *plVar1;
                            if (lVar27 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar27 + 0x18) <= uVar8) goto LAB_00e44400;
                            if (lVar25 == 0) goto LAB_00e443fc;
                            fVar49 = *(float *)(lVar27 + uVar20 * 0xc + 0x20);
                            fVar48 = *(float *)((long)dVar24 + 0x84);
                            fVar45 = fVar45 + (fVar49 * *(float *)(lVar19 + 0x20)) / fVar48;
                            fVar45 = fVar45 - (float)(int)fVar45;
                            fVar41 = fVar45;
                            if (1.0 < fVar45) {
                              fVar41 = fVar39;
                            }
                            fVar46 = fVar41;
                            if (fVar45 < 0.0) {
                              fVar46 = 0.0;
                            }
                            fVar46 = (float)FUN_0269ad38(fVar46,lVar25,0);
                            fVar45 = fVar46;
                            if (1.0 < fVar46) {
                              fVar45 = fVar39;
                            }
                            fVar45 = fVar45 * 255.0;
                            if (fVar46 < 0.0) {
                              fVar45 = 0.0;
                            }
                            dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                            if (0.0 <= fVar45) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3e0b0;
                              }
                              fVar45 = (float)(int)(fVar45 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3e0b0:
                              fVar45 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar45 = fVar39;
                              }
                            }
                            else {
                              fVar45 = (float)(int)(fVar45 + -0.5);
                            }
                            fVar39 = fVar41;
                            if (1.0 < fVar41) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3ee80;
                              }
                              fVar39 = (float)(int)(fVar39 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3ee80:
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = fVar41;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar49 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar49 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar49 = (float)(int)(fVar49 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + -0.5);
                            }
                            if (lVar29 == 0) goto LAB_00e443fc;
                            fVar48 = 1.0;
                            if (*(uint *)(lVar29 + 0x18) <= uVar8) goto LAB_00e44400;
                            *(uint *)(lVar29 + uVar20 * 4 + 0x20) =
                                 (int)fVar45 & 0xffU | ((int)fVar39 & 0xffU) << 8 |
                                 ((int)fVar41 & 0xffU) << 0x10 | (int)fVar49 << 0x18;
                            plVar37 = (long *)StringLiteral_9119;
                            dVar24 = *pdVar5;
                            if (((dVar24 == 0.0) ||
                                (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                               (lVar25 = *plVar1, lVar25 == 0)) goto LAB_00e443fc;
                            lVar27 = *plVar4;
                            lVar29 = *(long *)(lVar19 + 0x18);
                            fVar41 = fVar51 * *(float *)(lVar19 + 0x24);
                            if (cVar12 != '\0') {
                              if (uVar36 < *(uint *)(lVar25 + 0x18)) {
                                if (lVar29 != 0) {
                                  fVar39 = *(float *)(lVar25 + (long)(int)uVar36 * 0xc + 0x20);
                                  fVar45 = *(float *)((long)dVar24 + 0x84);
                                  fVar41 = fVar41 + (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                                  fVar41 = fVar41 - (float)(int)fVar41;
                                  fVar49 = fVar41;
                                  if (1.0 < fVar41) {
                                    fVar49 = fVar48;
                                  }
                                  fVar46 = fVar49;
                                  if (fVar41 < 0.0) {
                                    fVar46 = 0.0;
                                  }
                                  fVar46 = (float)FUN_0269ad38(fVar46,lVar29,0);
                                  fVar41 = fVar46;
                                  if (1.0 < fVar46) {
                                    fVar41 = fVar48;
                                  }
                                  fVar41 = fVar41 * 255.0;
                                  if (fVar46 < 0.0) {
                                    fVar41 = 0.0;
                                  }
                                  dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                                  if (0.0 <= fVar41) {
                                    if (dVar24 == 0.5) {
                                      fVar41 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f234;
                                    }
                                    fVar48 = (float)(int)(fVar41 + 0.5);
                                  }
                                  else if (dVar24 == -0.5) {
                                    fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f234:
                                    fVar48 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar48 = fVar41;
                                    }
                                  }
                                  else {
                                    fVar48 = (float)(int)(fVar41 + -0.5);
                                  }
                                  fVar41 = fVar49;
                                  if (1.0 < fVar49) {
                                    fVar41 = 1.0;
                                  }
                                  fVar41 = fVar41 * 255.0;
                                  if (fVar49 < 0.0) {
                                    fVar41 = 0.0;
                                  }
                                  dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                                  if (0.0 <= fVar41) {
                                    if (dVar24 == 0.5) {
                                      fVar41 = (float)_fStack0000000000000070 + 1.0;
                                      goto LAB_00e3f594;
                                    }
                                    fVar49 = (float)(int)(fVar41 + 0.5);
                                  }
                                  else if (dVar24 == -0.5) {
                                    fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f594:
                                    fVar49 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar49 = fVar41;
                                    }
                                  }
                                  else {
                                    fVar49 = (float)(int)(fVar41 + -0.5);
                                  }
                                  fVar41 = fVar39;
                                  if (1.0 < fVar39) {
                                    fVar41 = 1.0;
                                  }
                                  fVar41 = fVar41 * 255.0;
                                  if (fVar39 < 0.0) {
                                    fVar41 = 0.0;
                                  }
                                  dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                                  if (0.0 <= fVar41) {
                                    if (dVar24 == 0.5) {
                                      fVar41 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar41 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar41 = (float)(int)(fVar41 + 0.5);
                                    }
                                  }
                                  else if (dVar24 == -0.5) {
                                    fVar41 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar41 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar41 = (float)(int)(fVar41 + -0.5);
                                  }
                                  fVar39 = fVar45;
                                  if (1.0 < fVar45) {
                                    fVar39 = 1.0;
                                  }
                                  fVar39 = fVar39 * 255.0;
                                  if (fVar45 < 0.0) {
                                    fVar39 = 0.0;
                                  }
                                  dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                                  if (0.0 <= fVar39) {
                                    if (dVar24 == 0.5) {
                                      fVar39 = (float)_fStack0000000000000070;
                                      if (((long)_fStack0000000000000070 & 1U) != 0) {
                                        fVar39 = (float)_fStack0000000000000070 + 1.0;
                                      }
                                    }
                                    else {
                                      fVar39 = (float)(int)(fVar39 + 0.5);
                                    }
                                  }
                                  else if (dVar24 == -0.5) {
                                    fVar39 = (float)_fStack0000000000000070;
                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                      fVar39 = (float)_fStack0000000000000070 + -1.0;
                                    }
                                  }
                                  else {
                                    fVar39 = (float)(int)(fVar39 + -0.5);
                                  }
                                  if (lVar27 != 0) {
                                    if (uVar36 < *(uint *)(lVar27 + 0x18)) {
                                      *(uint *)(lVar27 + (long)(int)uVar36 * 4 + 0x20) =
                                           (int)fVar48 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                           ((int)fVar41 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                                      dVar24 = *pdVar5;
                                      if (((dVar24 != 0.0) &&
                                          (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 != 0)) &&
                                         (lVar25 = *plVar1, lVar25 != 0)) {
                                        if (uVar34 < *(uint *)(lVar25 + 0x18)) {
                                          if (*(long *)(lVar19 + 0x18) != 0) {
                                            fVar39 = *(float *)(lVar25 + (long)(int)uVar34 * 0xc +
                                                               0x20);
                                            fVar45 = *(float *)((long)dVar24 + 0x84);
                                            lVar25 = *plVar4;
                                            fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                                     (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                                            fVar49 = fVar49 - (float)(int)fVar49;
                                            fVar41 = fVar49;
                                            if (1.0 < fVar49) {
                                              fVar41 = 1.0;
                                            }
                                            fVar48 = fVar41;
                                            if (fVar49 < 0.0) {
                                              fVar48 = 0.0;
                                            }
                                            fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(lVar19 + 
                                                  0x18),0);
                                            fVar49 = fVar48;
                                            if (1.0 < fVar48) {
                                              fVar49 = 1.0;
                                            }
                                            fVar49 = fVar49 * 255.0;
                                            if (fVar48 < 0.0) {
                                              fVar49 = 0.0;
                                            }
                                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar49) {
                                              if (dVar24 == 0.5) {
                                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3f858;
                                              }
                                              fVar48 = (float)(int)(fVar49 + 0.5);
                                            }
                                            else if (dVar24 == -0.5) {
                                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f858:
                                              fVar48 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar48 = fVar49;
                                              }
                                            }
                                            else {
                                              fVar48 = (float)(int)(fVar49 + -0.5);
                                            }
                                            fVar49 = fVar41;
                                            if (1.0 < fVar41) {
                                              fVar49 = 1.0;
                                            }
                                            fVar49 = fVar49 * 255.0;
                                            if (fVar41 < 0.0) {
                                              fVar49 = 0.0;
                                            }
                                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar49) {
                                              if (dVar24 == 0.5) {
                                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                                goto LAB_00e3f8e8;
                                              }
                                              fVar49 = (float)(int)(fVar49 + 0.5);
                                            }
                                            else if (dVar24 == -0.5) {
                                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f8e8:
                                              fVar49 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar49 = fVar41;
                                              }
                                            }
                                            else {
                                              fVar49 = (float)(int)(fVar49 + -0.5);
                                            }
                                            fVar41 = fVar39;
                                            if (1.0 < fVar39) {
                                              fVar41 = 1.0;
                                            }
                                            fVar41 = fVar41 * 255.0;
                                            if (fVar39 < 0.0) {
                                              fVar41 = 0.0;
                                            }
                                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070)
                                            ;
                                            if (0.0 <= fVar41) {
                                              if (dVar24 == 0.5) {
                                                fVar41 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar41 = (float)(int)(fVar41 + 0.5);
                                              }
                                            }
                                            else if (dVar24 == -0.5) {
                                              fVar41 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar41 = (float)(int)(fVar41 + -0.5);
                                            }
                                            fVar39 = fVar45;
                                            if (1.0 < fVar45) {
                                              fVar39 = 1.0;
                                            }
                                            fVar39 = fVar39 * 255.0;
                                            if (fVar45 < 0.0) {
                                              fVar39 = 0.0;
                                            }
                                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070)
                                            ;
                                            plVar37 = (long *)StringLiteral_9119;
                                            if (0.0 <= fVar39) {
                                              if (dVar24 == 0.5) {
                                                fVar39 = (float)_fStack0000000000000070;
                                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                                }
                                              }
                                              else {
                                                fVar39 = (float)(int)(fVar39 + 0.5);
                                              }
                                            }
                                            else if (dVar24 == -0.5) {
                                              fVar39 = (float)_fStack0000000000000070;
                                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                                              }
                                            }
                                            else {
                                              fVar39 = (float)(int)(fVar39 + -0.5);
                                            }
                                            if (lVar25 != 0) {
                                              if (uVar34 < *(uint *)(lVar25 + 0x18)) {
                                                *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                                                     (int)fVar48 & 0xffU |
                                                     ((int)fVar49 & 0xffU) << 8 |
                                                     ((int)fVar41 & 0xffU) << 0x10 |
                                                     (int)fVar39 << 0x18;
                                                dVar24 = *pdVar5;
                                                if (((dVar24 != 0.0) &&
                                                    (lVar19 = *(long *)((long)dVar24 + 0xa8),
                                                    lVar19 != 0)) && (lVar25 = *plVar1, lVar25 != 0)
                                                   ) {
                                                  if (uVar31 < *(uint *)(lVar25 + 0x18)) {
                                                    if (*(long *)(lVar19 + 0x18) != 0) {
                                                      fVar39 = *(float *)(lVar25 + uVar33 * 0xc +
                                                                         0x20);
                                                      fVar45 = *(float *)((long)dVar24 + 0x84);
                                                      lVar25 = *plVar4;
                                                      fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                                               (fVar39 * *(float *)(lVar19 + 0x20))
                                                               / fVar45;
                                                      fVar49 = fVar49 - (float)(int)fVar49;
                                                      fVar41 = fVar49;
                                                      if (1.0 < fVar49) {
                                                        fVar41 = 1.0;
                                                      }
                                                      fVar48 = fVar41;
                                                      if (fVar49 < 0.0) {
                                                        fVar48 = 0.0;
                                                      }
                                                      fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(
                                                  lVar19 + 0x18),0);
                                                  fVar49 = fVar48;
                                                  if (1.0 < fVar48) {
                                                    fVar49 = 1.0;
                                                  }
                                                  param_3 = 0x437f0000;
                                                  fVar49 = fVar49 * 255.0;
                                                  if (fVar48 < 0.0) {
                                                    fVar49 = 0.0;
                                                  }
                                                  dVar24 = modf((double)fVar49,
                                                                (double *)&stack0x00000070);
                                                  if (0.0 <= fVar49) {
                                                    if (dVar24 == 0.5) {
                                                      fVar49 = (float)_fStack0000000000000070 + 1.0;
                                                      goto LAB_00e3fbd0;
                                                    }
                                                    fVar48 = (float)(int)(fVar49 + 0.5);
                                                  }
                                                  else if (dVar24 == -0.5) {
                                                    fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3fbd0:
                                                    fVar48 = (float)_fStack0000000000000070;
                                                    if (((long)_fStack0000000000000070 & 1U) != 0) {
                                                      fVar48 = fVar49;
                                                    }
                                                  }
                                                  else {
                                                    fVar48 = (float)(int)(fVar49 + -0.5);
                                                  }
                                                  fVar49 = fVar41;
                                                  if (1.0 < fVar41) {
                                                    fVar49 = 1.0;
                                                  }
                                                  fVar49 = fVar49 * 255.0;
                                                  if (fVar41 < 0.0) {
                                                    fVar49 = 0.0;
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
                            if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                            if (lVar29 == 0) goto LAB_00e443fc;
                            fVar39 = *(float *)(lVar25 + uVar20 * 0xc + 0x20);
                            fVar45 = *(float *)((long)dVar24 + 0x84);
                            fVar41 = fVar41 + (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                            fVar41 = fVar41 - (float)(int)fVar41;
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = fVar48;
                            }
                            fVar46 = fVar49;
                            if (fVar41 < 0.0) {
                              fVar46 = 0.0;
                            }
                            fVar46 = (float)FUN_0269ad38(fVar46,lVar29,0);
                            fVar41 = fVar46;
                            if (1.0 < fVar46) {
                              fVar41 = fVar48;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar46 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e3f25c;
                              }
                              fVar48 = (float)(int)(fVar41 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e3f25c:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar41;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar49 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e415c4;
                              }
                              fVar49 = (float)(int)(fVar41 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e415c4:
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = fVar41;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar41 = fVar39;
                            if (1.0 < fVar39) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar39 = fVar45;
                            if (1.0 < fVar45) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar45 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            if (lVar27 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar27 + 0x18) <= uVar36) goto LAB_00e44400;
                            *(uint *)(lVar27 + (long)(int)uVar36 * 4 + 0x20) =
                                 (int)fVar48 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                 ((int)fVar41 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                            dVar24 = *pdVar5;
                            if (((dVar24 == 0.0) ||
                                (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                               (lVar25 = *plVar1, lVar25 == 0)) goto LAB_00e443fc;
                            if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                            if (*(long *)(lVar19 + 0x18) == 0) goto LAB_00e443fc;
                            fVar39 = *(float *)(lVar25 + uVar20 * 0xc + 0x20);
                            fVar45 = *(float *)((long)dVar24 + 0x84);
                            lVar25 = *plVar4;
                            fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                     (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                            fVar49 = fVar49 - (float)(int)fVar49;
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar48 = fVar41;
                            if (fVar49 < 0.0) {
                              fVar48 = 0.0;
                            }
                            fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(lVar19 + 0x18),0);
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e421fc;
                              }
                              fVar48 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e421fc:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar49;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e4228c;
                              }
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
LAB_00e4228c:
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = fVar41;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar41 = fVar39;
                            if (1.0 < fVar39) {
                              fVar41 = 1.0;
                            }
                            fVar41 = fVar41 * 255.0;
                            if (fVar39 < 0.0) {
                              fVar41 = 0.0;
                            }
                            dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                            if (0.0 <= fVar41) {
                              if (dVar24 == 0.5) {
                                fVar41 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar41 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar41 = (float)(int)(fVar41 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + -0.5);
                            }
                            fVar39 = fVar45;
                            if (1.0 < fVar45) {
                              fVar39 = 1.0;
                            }
                            fVar39 = fVar39 * 255.0;
                            if (fVar45 < 0.0) {
                              fVar39 = 0.0;
                            }
                            dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                            if (0.0 <= fVar39) {
                              if (dVar24 == 0.5) {
                                fVar39 = (float)_fStack0000000000000070;
                                if (((long)_fStack0000000000000070 & 1U) != 0) {
                                  fVar39 = (float)_fStack0000000000000070 + 1.0;
                                }
                              }
                              else {
                                fVar39 = (float)(int)(fVar39 + 0.5);
                              }
                            }
                            else if (dVar24 == -0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + -1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar39 + -0.5);
                            }
                            if (lVar25 == 0) goto LAB_00e443fc;
                            if (*(uint *)(lVar25 + 0x18) <= uVar34) goto LAB_00e44400;
                            *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) =
                                 (int)fVar48 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                 ((int)fVar41 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                            dVar24 = *pdVar5;
                            if (((dVar24 == 0.0) ||
                                (lVar19 = *(long *)((long)dVar24 + 0xa8), lVar19 == 0)) ||
                               (lVar25 = *plVar1, lVar25 == 0)) goto LAB_00e443fc;
                            if (*(uint *)(lVar25 + 0x18) <= uVar8) goto LAB_00e44400;
                            if (*(long *)(lVar19 + 0x18) == 0) goto LAB_00e443fc;
                            fVar39 = *(float *)(lVar25 + uVar20 * 0xc + 0x20);
                            fVar45 = *(float *)((long)dVar24 + 0x84);
                            lVar25 = *plVar4;
                            fVar49 = fVar51 * *(float *)(lVar19 + 0x24) +
                                     (fVar39 * *(float *)(lVar19 + 0x20)) / fVar45;
                            fVar49 = fVar49 - (float)(int)fVar49;
                            fVar41 = fVar49;
                            if (1.0 < fVar49) {
                              fVar41 = 1.0;
                            }
                            fVar48 = fVar41;
                            if (fVar49 < 0.0) {
                              fVar48 = 0.0;
                            }
                            fVar48 = (float)FUN_0269ad38(fVar48,*(long *)(lVar19 + 0x18),0);
                            fVar49 = fVar48;
                            if (1.0 < fVar48) {
                              fVar49 = 1.0;
                            }
                            param_3 = 0x437f0000;
                            fVar49 = fVar49 * 255.0;
                            if (fVar48 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) {
                              if (dVar24 == 0.5) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                                goto LAB_00e42560;
                              }
                              fVar48 = (float)(int)(fVar49 + 0.5);
                            }
                            else if (dVar24 == -0.5) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42560:
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar49;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar49 + -0.5);
                            }
                            fVar49 = fVar41;
                            if (1.0 < fVar41) {
                              fVar49 = 1.0;
                            }
                            fVar49 = fVar49 * 255.0;
                            if (fVar41 < 0.0) {
                              fVar49 = 0.0;
                            }
                            dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                            if (0.0 <= fVar49) goto LAB_00e425b8;
LAB_00e4204c:
                            if (dVar24 == -0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              fVar49 = fVar41 + -1.0;
LAB_00e425d4:
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = fVar49;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar49 + -0.5);
                            }
                          }
                          fVar49 = fVar39;
                          if (1.0 < fVar39) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e42654;
                            }
                            fVar39 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42654:
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = fVar49;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar49 = fVar45;
                          if (1.0 < fVar45) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar45 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e426e4;
                            }
                            fVar45 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070 + -1.0;
LAB_00e426e4:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = fVar49;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar49 + -0.5);
                          }
                          if (lVar25 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar25 + 0x18) <= uVar31) goto LAB_00e44400;
                          *(uint *)(lVar25 + uVar33 * 4 + 0x20) =
                               (int)fVar48 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                               ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                          if (*pdVar5 == 0.0) goto LAB_00e443fc;
                          uVar18 = *(undefined8 *)((long)*pdVar5 + 0xa0);
                          uVar52 = uVar42 & 0xffffffff;
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar38 = FUN_02681b9c(uVar18,0,0);
                          if ((uVar38 & 1) == 0) goto LAB_00e43400;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + uVar20 * 4 + 0x20);
                          uVar11 = *puVar30;
                          if ((*pdVar5 == 0.0) ||
                             (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                          goto LAB_00e443fc;
                          fVar41 = ((float)(uVar11 & 0xff) / 255.0) * *(float *)(lVar19 + 0x18);
                          fVar48 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar19 + 0x1c)
                          ;
                          fVar45 = *(float *)(lVar19 + 0x20);
                          fVar39 = *(float *)(lVar19 + 0x24);
                          fVar49 = fVar41 * 255.0;
                          if (fVar41 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar41 = 1.0;
                              goto LAB_00e4287c;
                            }
                            fVar49 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = -1.0;
LAB_00e4287c:
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + fVar41;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar41 = fVar48 * 255.0;
                          fVar45 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar45;
                          if (fVar48 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          fVar48 = fVar45;
                          if (1.0 < fVar45) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          fVar39 = ((float)(uVar11 >> 0x18) / 255.0) * fVar39;
                          if (fVar45 < 0.0) {
                            fVar48 = 0.0;
                          }
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e429c8;
                            }
                            fVar48 = (float)(int)(fVar48 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e429c8:
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = fVar45;
                            }
                          }
                          else {
                            fVar48 = (float)(int)(fVar48 + -0.5);
                          }
                          fVar45 = fVar39;
                          if (1.0 < fVar39) {
                            fVar45 = 1.0;
                          }
                          fVar45 = fVar45 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar45 = 0.0;
                          }
                          dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                          if (0.0 <= fVar45) {
                            if (dVar24 == 0.5) {
                              fVar39 = 1.0;
                              goto LAB_00e42a44;
                            }
                            fVar45 = (float)(int)(fVar45 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = -1.0;
LAB_00e42a44:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar45 + -0.5);
                          }
                          *puVar30 = (int)fVar49 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                                     ((int)fVar48 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20);
                          uVar11 = *puVar30;
                          if ((*pdVar5 == 0.0) ||
                             (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                          goto LAB_00e443fc;
                          fVar41 = ((float)(uVar11 & 0xff) / 255.0) * *(float *)(lVar19 + 0x18);
                          fVar48 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar19 + 0x1c)
                          ;
                          fVar45 = *(float *)(lVar19 + 0x20);
                          fVar39 = *(float *)(lVar19 + 0x24);
                          fVar49 = fVar41 * 255.0;
                          if (fVar41 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar41 = 1.0;
                              goto LAB_00e42b80;
                            }
                            fVar49 = (float)(int)(fVar49 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = -1.0;
LAB_00e42b80:
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + fVar41;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar41 = fVar48 * 255.0;
                          fVar45 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar45;
                          if (fVar48 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          fVar48 = fVar45;
                          if (1.0 < fVar45) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          fVar39 = ((float)(uVar11 >> 0x18) / 255.0) * fVar39;
                          if (fVar45 < 0.0) {
                            fVar48 = 0.0;
                          }
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar45 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e42ccc;
                            }
                            fVar48 = (float)(int)(fVar48 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42ccc:
                            fVar48 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar48 = fVar45;
                            }
                          }
                          else {
                            fVar48 = (float)(int)(fVar48 + -0.5);
                          }
                          fVar45 = fVar39;
                          if (1.0 < fVar39) {
                            fVar45 = 1.0;
                          }
                          fVar45 = fVar45 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar45 = 0.0;
                          }
                          dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                          if (0.0 <= fVar45) {
                            if (dVar24 == 0.5) {
                              fVar39 = 1.0;
                              goto LAB_00e42d48;
                            }
                            fVar45 = (float)(int)(fVar45 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = -1.0;
LAB_00e42d48:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = (float)_fStack0000000000000070 + fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar45 + -0.5);
                          }
                          *puVar30 = (int)fVar49 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                                     ((int)fVar48 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          lVar19 = lVar19 + (long)(int)uVar34 * 4;
                        }
                        uVar11 = *(uint *)(lVar19 + 0x20);
                        if ((*pdVar5 == 0.0) ||
                           (lVar25 = *(long *)((long)*pdVar5 + 0xa0), lVar25 == 0))
                        goto LAB_00e443fc;
                        fVar41 = ((float)(uVar11 & 0xff) / 255.0) * *(float *)(lVar25 + 0x18);
                        fVar48 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar25 + 0x1c);
                        fVar45 = *(float *)(lVar25 + 0x20);
                        fVar39 = *(float *)(lVar25 + 0x24);
                        fVar49 = fVar41 * 255.0;
                        if (fVar41 < 0.0) {
                          fVar49 = 0.0;
                        }
                        dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                        if (0.0 <= fVar49) {
                          if (dVar24 == 0.5) {
                            fVar41 = 1.0;
                            goto FUN_00e42e84;
                          }
                          fVar49 = (float)(int)(fVar49 + 0.5);
                        }
                        else if (dVar24 == -0.5) {
                          fVar41 = -1.0;
FUN_00e42e84:
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + fVar41;
                          }
                        }
                        else {
                          fVar49 = (float)(int)(fVar49 + -0.5);
                        }
                        fVar41 = fVar48 * 255.0;
                        fVar45 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar45;
                        if (fVar48 < 0.0) {
                          fVar41 = 0.0;
                        }
                        dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                        if (0.0 <= fVar41) {
                          if (dVar24 == 0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + 0.5);
                          }
                        }
                        else if (dVar24 == -0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar41 = (float)(int)(fVar41 + -0.5);
                        }
                        fVar48 = fVar45;
                        if (1.0 < fVar45) {
                          fVar48 = 1.0;
                        }
                        fVar48 = fVar48 * 255.0;
                        fVar39 = ((float)(uVar11 >> 0x18) / 255.0) * fVar39;
                        if (fVar45 < 0.0) {
                          fVar48 = 0.0;
                        }
                        dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                        if (0.0 <= fVar48) {
                          if (dVar24 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e42fd0;
                          }
                          fVar48 = (float)(int)(fVar48 + 0.5);
                        }
                        else if (dVar24 == -0.5) {
                          fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e42fd0:
                          fVar48 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar48 = fVar45;
                          }
                        }
                        else {
                          fVar48 = (float)(int)(fVar48 + -0.5);
                        }
                        fVar45 = fVar39;
                        if (1.0 < fVar39) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar45 = 0.0;
                        }
                        dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar24 == 0.5) {
                            fVar39 = 1.0;
                            goto LAB_00e4304c;
                          }
                          fVar45 = (float)(int)(fVar45 + 0.5);
                        }
                        else if (dVar24 == -0.5) {
                          fVar39 = -1.0;
LAB_00e4304c:
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + fVar39;
                          }
                        }
                        else {
                          fVar45 = (float)(int)(fVar45 + -0.5);
                        }
                        *(uint *)(lVar19 + 0x20) =
                             (int)fVar49 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                             ((int)fVar48 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        lVar19 = *plVar4;
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        puVar30 = (uint *)(lVar19 + uVar33 * 4 + 0x20);
                        uVar11 = *puVar30;
                        if ((*pdVar5 == 0.0) ||
                           (lVar19 = *(long *)((long)*pdVar5 + 0xa0), lVar19 == 0))
                        goto LAB_00e443fc;
                        fVar41 = (float)(uVar11 & 0xff) / 255.0;
                        param_3 = (ulong)(uint)fVar41;
                        fVar41 = fVar41 * *(float *)(lVar19 + 0x18);
                        fVar48 = ((float)(uVar11 >> 8 & 0xff) / 255.0) * *(float *)(lVar19 + 0x1c);
                        fVar45 = *(float *)(lVar19 + 0x20);
                        fVar39 = *(float *)(lVar19 + 0x24);
                        fVar49 = fVar41 * 255.0;
                        if (fVar41 < 0.0) {
                          fVar49 = 0.0;
                        }
                        dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                        if (0.0 <= fVar49) {
                          if (dVar24 == 0.5) {
                            fVar41 = 1.0;
                            goto LAB_00e4318c;
                          }
                          fVar49 = (float)(int)(fVar49 + 0.5);
                        }
                        else if (dVar24 == -0.5) {
                          fVar41 = -1.0;
LAB_00e4318c:
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + fVar41;
                          }
                        }
                        else {
                          fVar49 = (float)(int)(fVar49 + -0.5);
                        }
                        fVar41 = fVar48 * 255.0;
                        fVar45 = ((float)(uVar11 >> 0x10 & 0xff) / 255.0) * fVar45;
                        if (fVar48 < 0.0) {
                          fVar41 = 0.0;
                        }
                        dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                        if (0.0 <= fVar41) {
                          if (dVar24 == 0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + 0.5);
                          }
                        }
                        else if (dVar24 == -0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar41 = (float)(int)(fVar41 + -0.5);
                        }
                        fVar48 = fVar45;
                        if (1.0 < fVar45) {
                          fVar48 = 1.0;
                        }
                        fVar48 = fVar48 * 255.0;
                        fVar39 = ((float)(uVar11 >> 0x18) / 255.0) * fVar39;
                        if (fVar45 < 0.0) {
                          fVar48 = 0.0;
                        }
                        dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                        unaff_s15 = fStack000000000000000c;
                        if (0.0 <= fVar48) {
                          if (dVar24 == 0.5) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                            goto LAB_00e432e0;
                          }
                          fVar48 = (float)(int)(fVar48 + 0.5);
                        }
                        else if (dVar24 == -0.5) {
                          fVar45 = (float)_fStack0000000000000070 + -1.0;
LAB_00e432e0:
                          fVar48 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar48 = fVar45;
                          }
                        }
                        else {
                          fVar48 = (float)(int)(fVar48 + -0.5);
                        }
                        fVar45 = fVar39;
                        if (1.0 < fVar39) {
                          fVar45 = 1.0;
                        }
                        fVar45 = fVar45 * 255.0;
                        if (fVar39 < 0.0) {
                          fVar45 = 0.0;
                        }
                        dVar24 = modf((double)fVar45,(double *)&stack0x00000070);
                        if (0.0 <= fVar45) {
                          if (dVar24 == 0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar45 + 0.5);
                          }
                        }
                        else if (dVar24 == -0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
                          }
                        }
                        else {
                          fVar39 = (float)(int)(fVar45 + -0.5);
                        }
                        uVar52 = uVar42 & 0xffffffff;
                        *puVar30 = (int)fVar49 & 0xffU | ((int)fVar41 & 0xffU) << 8 |
                                   ((int)fVar48 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                      }
                      else {
                        if (*(long *)((long)dVar24 + 0x100) == 0) goto LAB_00e443fc;
                        if (*(char *)(*(long *)((long)dVar24 + 0x100) + 0x20) != '\0')
                        goto LAB_00e3dd34;
                        lVar19 = *plVar4;
                        dVar24 = modf(DAT_028aa048,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar41 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar49 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar45 = 255.0;
                        }
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                        *(uint *)(lVar19 + uVar20 * 4 + 0x20) =
                             (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        lVar19 = *plVar4;
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar41 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar49 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar45 = 255.0;
                        }
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                        *(uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20) =
                             (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        lVar19 = *plVar4;
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar41 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar49 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar45 = 255.0;
                        }
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                        *(uint *)(lVar19 + (long)(int)uVar34 * 4 + 0x20) =
                             (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                        lVar19 = *plVar4;
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar41 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar41 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar41 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar49 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar49 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar49 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar39 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar39 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar39 = 255.0;
                        }
                        dVar24 = modf(dVar43,(double *)&stack0x00000070);
                        if (dVar24 == 0.5) {
                          fVar45 = (float)_fStack0000000000000070;
                          if (((long)_fStack0000000000000070 & 1U) != 0) {
                            fVar45 = (float)_fStack0000000000000070 + 1.0;
                          }
                        }
                        else {
                          fVar45 = 255.0;
                        }
                        if (lVar19 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                        *(uint *)(lVar19 + uVar33 * 4 + 0x20) =
                             (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                             ((int)fVar39 & 0xffU) << 0x10 | (int)fVar45 << 0x18;
                      }
LAB_00e43400:
                      lVar19 = *plVar4;
                      if (lVar19 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                      lVar19 = lVar19 + uVar20 * 4;
                      fVar41 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 0x23));
                      *(char *)(lVar19 + 0x23) =
                           (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar41);
                      lVar19 = unaff_x19[0x5f];
                      if (lVar19 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                      lVar19 = lVar19 + (long)(int)uVar36 * 4;
                      fVar41 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 0x23));
                      *(char *)(lVar19 + 0x23) =
                           (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar41);
                      lVar19 = unaff_x19[0x5f];
                      if (lVar19 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                      lVar19 = lVar19 + (long)(int)uVar34 * 4;
                      fVar41 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 0x23));
                      *(char *)(lVar19 + 0x23) =
                           (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar41);
                      lVar19 = unaff_x19[0x5f];
                      if (lVar19 == 0) goto LAB_00e443fc;
                      if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                      lVar19 = lVar19 + uVar33 * 4;
                      param_2 = (ulong)(uint)*(float *)((long)unaff_x19 + 0x374);
                      fVar41 = (float)NEON_ucvtf((uint)*(byte *)(lVar19 + 0x23));
                      *(char *)(lVar19 + 0x23) =
                           (char)(int)(*(float *)((long)unaff_x19 + 0x374) * fVar41);
                      uVar38 = FUN_00e3703c();
                      if ((uVar38 & 1) == 0) {
                        lVar19 = *plVar37;
                        if (*(int *)(lVar19 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar19 = *plVar37;
                        }
                        if (*(int *)(*(long *)(lVar19 + 0xb8) + 0x20) == 1) {
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + uVar20 * 4 + 0x20);
                          uVar11 = *puVar30;
                          fVar49 = (float)FUN_026982b0((float)(uVar11 & 0xff) / 255.0,0);
                          fVar39 = (float)FUN_026982b0((float)(uVar11 >> 8 & 0xff) / 255.0,0);
                          fVar45 = (float)FUN_026982b0((float)(uVar11 >> 0x10 & 0xff) / 255.0,0);
                          fVar41 = fVar49;
                          if (1.0 < fVar49) {
                            fVar41 = 1.0;
                          }
                          fVar41 = fVar41 * 255.0;
                          if (fVar49 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          fVar49 = fVar39;
                          if (1.0 < fVar39) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar39 = fVar45;
                          if (1.0 < fVar45) {
                            fVar39 = 1.0;
                          }
                          fVar39 = fVar39 * 255.0;
                          fVar48 = (float)(uVar11 >> 0x18) / 255.0;
                          if (fVar45 < 0.0) {
                            fVar39 = 0.0;
                          }
                          dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                          if (0.0 <= fVar39) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e43744;
                            }
                            fVar45 = (float)(int)(fVar39 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43744:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar39 + -0.5);
                          }
                          if (1.0 < fVar48) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar48 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar48 + -0.5);
                          }
                          if (*(uint *)(lVar19 + 0x18) <= uVar8) goto LAB_00e44400;
                          *puVar30 = (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar45 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + (long)(int)uVar36 * 4 + 0x20);
                          uVar8 = *puVar30;
                          fVar49 = (float)FUN_026982b0((float)(uVar8 & 0xff) / 255.0,0);
                          fVar39 = (float)FUN_026982b0((float)(uVar8 >> 8 & 0xff) / 255.0,0);
                          fVar45 = (float)FUN_026982b0((float)(uVar8 >> 0x10 & 0xff) / 255.0,0);
                          fVar41 = fVar49;
                          if (1.0 < fVar49) {
                            fVar41 = 1.0;
                          }
                          fVar41 = fVar41 * 255.0;
                          if (fVar49 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          fVar49 = fVar39;
                          if (1.0 < fVar39) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar39 = fVar45;
                          if (1.0 < fVar45) {
                            fVar39 = 1.0;
                          }
                          fVar39 = fVar39 * 255.0;
                          fVar48 = (float)(uVar8 >> 0x18) / 255.0;
                          if (fVar45 < 0.0) {
                            fVar39 = 0.0;
                          }
                          dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                          if (0.0 <= fVar39) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e43a84;
                            }
                            fVar45 = (float)(int)(fVar39 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43a84:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar39 + -0.5);
                          }
                          if (1.0 < fVar48) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar48 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar48 + -0.5);
                          }
                          if (*(uint *)(lVar19 + 0x18) <= uVar36) goto LAB_00e44400;
                          *puVar30 = (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar45 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + (long)(int)uVar34 * 4 + 0x20);
                          uVar8 = *puVar30;
                          fVar49 = (float)FUN_026982b0((float)(uVar8 & 0xff) / 255.0,0);
                          fVar39 = (float)FUN_026982b0((float)(uVar8 >> 8 & 0xff) / 255.0,0);
                          fVar45 = (float)FUN_026982b0((float)(uVar8 >> 0x10 & 0xff) / 255.0,0);
                          fVar41 = fVar49;
                          if (1.0 < fVar49) {
                            fVar41 = 1.0;
                          }
                          fVar41 = fVar41 * 255.0;
                          if (fVar49 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          fVar49 = fVar39;
                          if (1.0 < fVar39) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar39 = fVar45;
                          if (1.0 < fVar45) {
                            fVar39 = 1.0;
                          }
                          fVar39 = fVar39 * 255.0;
                          fVar48 = (float)(uVar8 >> 0x18) / 255.0;
                          if (fVar45 < 0.0) {
                            fVar39 = 0.0;
                          }
                          dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                          if (0.0 <= fVar39) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e43dbc;
                            }
                            fVar45 = (float)(int)(fVar39 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e43dbc:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar39 + -0.5);
                          }
                          if (1.0 < fVar48) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar39 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar39 = (float)(int)(fVar48 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar39 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar39 = (float)(int)(fVar48 + -0.5);
                          }
                          if (*(uint *)(lVar19 + 0x18) <= uVar34) goto LAB_00e44400;
                          *puVar30 = (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar45 & 0xffU) << 0x10 | (int)fVar39 << 0x18;
                          lVar19 = *plVar4;
                          if (lVar19 == 0) goto LAB_00e443fc;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          puVar30 = (uint *)(lVar19 + uVar33 * 4 + 0x20);
                          uVar8 = *puVar30;
                          fVar49 = (float)FUN_026982b0((float)(uVar8 & 0xff) / 255.0,0);
                          fVar39 = (float)FUN_026982b0((float)(uVar8 >> 8 & 0xff) / 255.0,0);
                          fVar45 = (float)FUN_026982b0((float)(uVar8 >> 0x10 & 0xff) / 255.0,0);
                          fVar41 = fVar49;
                          if (1.0 < fVar49) {
                            fVar41 = 1.0;
                          }
                          fVar41 = fVar41 * 255.0;
                          if (fVar49 < 0.0) {
                            fVar41 = 0.0;
                          }
                          dVar24 = modf((double)fVar41,(double *)&stack0x00000070);
                          if (0.0 <= fVar41) {
                            if (dVar24 == 0.5) {
                              fVar41 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar41 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar41 = (float)(int)(fVar41 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar41 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar41 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar41 = (float)(int)(fVar41 + -0.5);
                          }
                          param_3 = 0x3f800000;
                          fVar49 = fVar39;
                          if (1.0 < fVar39) {
                            fVar49 = 1.0;
                          }
                          fVar49 = fVar49 * 255.0;
                          if (fVar39 < 0.0) {
                            fVar49 = 0.0;
                          }
                          dVar24 = modf((double)fVar49,(double *)&stack0x00000070);
                          if (0.0 <= fVar49) {
                            if (dVar24 == 0.5) {
                              fVar49 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar49 = (float)_fStack0000000000000070 + 1.0;
                              }
                            }
                            else {
                              fVar49 = (float)(int)(fVar49 + 0.5);
                            }
                          }
                          else if (dVar24 == -0.5) {
                            fVar49 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar49 = (float)_fStack0000000000000070 + -1.0;
                            }
                          }
                          else {
                            fVar49 = (float)(int)(fVar49 + -0.5);
                          }
                          fVar39 = fVar45;
                          if (1.0 < fVar45) {
                            fVar39 = 1.0;
                          }
                          fVar39 = fVar39 * 255.0;
                          fVar48 = (float)(uVar8 >> 0x18) / 255.0;
                          if (fVar45 < 0.0) {
                            fVar39 = 0.0;
                          }
                          dVar24 = modf((double)fVar39,(double *)&stack0x00000070);
                          if (0.0 <= fVar39) {
                            if (dVar24 == 0.5) {
                              fVar39 = (float)_fStack0000000000000070 + 1.0;
                              goto LAB_00e440f4;
                            }
                            fVar45 = (float)(int)(fVar39 + 0.5);
                          }
                          else if (dVar24 == -0.5) {
                            fVar39 = (float)_fStack0000000000000070 + -1.0;
LAB_00e440f4:
                            fVar45 = (float)_fStack0000000000000070;
                            if (((long)_fStack0000000000000070 & 1U) != 0) {
                              fVar45 = fVar39;
                            }
                          }
                          else {
                            fVar45 = (float)(int)(fVar39 + -0.5);
                          }
                          if (1.0 < fVar48) {
                            fVar48 = 1.0;
                          }
                          fVar48 = fVar48 * 255.0;
                          dVar24 = modf((double)fVar48,(double *)&stack0x00000070);
                          if (0.0 <= fVar48) {
                            param_2 = 0;
                            if (dVar24 == 0.5) {
                              fVar39 = 1.0;
                              goto LAB_00e44170;
                            }
                            fVar48 = (float)(int)(fVar48 + 0.5);
                          }
                          else {
                            param_2 = 0;
                            if (dVar24 == -0.5) {
                              fVar39 = -1.0;
LAB_00e44170:
                              fVar39 = (float)_fStack0000000000000070 + fVar39;
                              param_2 = (ulong)(uint)fVar39;
                              fVar48 = (float)_fStack0000000000000070;
                              if (((long)_fStack0000000000000070 & 1U) != 0) {
                                fVar48 = fVar39;
                              }
                            }
                            else {
                              fVar48 = (float)(int)(fVar48 + -0.5);
                            }
                          }
                          uVar52 = uVar42 & 0xffffffff;
                          if (*(uint *)(lVar19 + 0x18) <= uVar31) goto LAB_00e44400;
                          *puVar30 = (int)fVar41 & 0xffU | ((int)fVar49 & 0xffU) << 8 |
                                     ((int)fVar45 & 0xffU) << 0x10 | (int)fVar48 << 0x18;
                        }
                      }
                      uVar32 = uVar32 + 1;
                    } while (uVar32 != uVar7);
                  }
                  puVar13 = StringLiteral_4992;
                  if (((unaff_x19[0x58] != 0) &&
                      (iVar17 = FUN_026c82cc(unaff_x19[0x58],0), 0 < iVar17)) ||
                     (unaff_x19[0x59] != 0)) {
                    puVar14 = Method_Sirenix_Utilities_RectExtensions_TakeFromDir__;
                    if ((unaff_x19[0xcb] == 0) || (unaff_x19[0xf] == 0)) goto LAB_00e443fc;
                    iVar17 = *(int *)(unaff_x19[0xf] + 0x10);
                    plVar2 = unaff_x19 + 0xcb;
                    if (iVar17 != *(int *)(unaff_x19[0xcb] + 0x18)) {
                      FUN_010afdd4(plVar2,iVar17,
                                   *(undefined8 *)
                                    Method_Sirenix_Utilities_RectExtensions_TakeFromDir__);
                    }
                    if ((unaff_x19[0xcc] == 0) || (lVar19 = unaff_x19[0xf], lVar19 == 0))
                    goto LAB_00e443fc;
                    plVar3 = unaff_x19 + 0xcc;
                    if (*(int *)(lVar19 + 0x10) != *(int *)(unaff_x19[0xcc] + 0x18)) {
                      FUN_010afdd4(plVar3,*(int *)(lVar19 + 0x10),*(undefined8 *)puVar14);
                      lVar19 = unaff_x19[0xf];
                      if (lVar19 == 0) goto LAB_00e443fc;
                    }
                    uVar7 = *(uint *)(lVar19 + 0x10);
                    if (0 < (int)uVar7) {
                      uVar42 = 0;
                      lVar19 = 0x20;
                      do {
                        if (unaff_x19[9] == 0) goto LAB_00e443fc;
                        FUN_0132138c(unaff_x19[9],uVar42 & 0xffffffff,&stack0x00000070,
                                     *(undefined8 *)puVar13);
                        unaff_x19[0xca] = (long)_fStack0000000000000070;
                        if (_fStack0000000000000070 == 0.0) goto LAB_00e443fc;
                        lVar25 = unaff_x19[0xcb];
                        uVar40 = FUN_00e58a1c(_fStack0000000000000070,0);
                        if (lVar25 == 0) goto LAB_00e443fc;
                        if (*(uint *)(lVar25 + 0x18) <= uVar42) {
LAB_00e44400:
                    /* WARNING: Subroutine does not return */
                          FUN_00da5194();
                        }
                        puVar6 = (undefined4 *)(lVar25 + lVar19);
                        *puVar6 = uVar40;
                        puVar6[1] = (int)param_2;
                        puVar6[2] = (int)param_3;
                        lVar25 = unaff_x19[0xca];
                        if ((lVar25 == 0) || (lVar29 = unaff_x19[0xcc], lVar29 == 0))
                        goto LAB_00e443fc;
                        if (*(uint *)(lVar29 + 0x18) <= uVar42) goto LAB_00e44400;
                        uVar40 = *(undefined4 *)(lVar25 + 0x4c);
                        uVar42 = uVar42 + 1;
                        puVar28 = (undefined8 *)(lVar29 + lVar19);
                        lVar19 = lVar19 + 0xc;
                        *puVar28 = *(undefined8 *)(lVar25 + 0x44);
                        *(undefined4 *)(puVar28 + 1) = uVar40;
                      } while (uVar7 != uVar42);
                    }
                    if (unaff_x19[0x58] != 0) {
                      FUN_013e0924(unaff_x19[0x58],*plVar1,*plVar2,*plVar3,
                                   *(undefined8 *)StringLiteral_225);
                    }
                    lVar19 = unaff_x19[0x59];
                    if (lVar19 != 0) {
                      (**(code **)(lVar19 + 0x18))
                                (*(undefined8 *)(lVar19 + 0x40),*plVar1,*plVar2,*plVar3,
                                 *(undefined8 *)(lVar19 + 0x28));
                    }
                    *(undefined1 *)(unaff_x19 + 0x2e) = 1;
                  }
                  lVar19 = __start_il2cpp();
                  if (lVar19 != 0) {
                    if ((*(char *)(lVar19 + 0x109) != '\0') ||
                       (*(char *)((long)unaff_x19 + 0xa9) != '\0')) {
                      *(undefined1 *)(unaff_x19 + 0x2e) = 0;
                    }
                    return;
                  }
                }
              }
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


